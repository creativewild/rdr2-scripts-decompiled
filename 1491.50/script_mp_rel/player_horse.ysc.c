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

void main() // Position - 0x0 Hash - 0xF5B7AF6A ^0x4D8931C1
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2;
		func_1();
	}

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (func_2() == -1)
	{
		while (!func_3(64))
		{
			BUILTIN::WAIT(0);
		}
	}

	func_4();
	flag = false;

	while (!flag)
	{
		if (func_2() != -1)
		{
			if (func_5(true, true))
			{
				flag = true;
				break;
			}
		}
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			flag = true;
			break;
		}
	
		if (func_6())
		{
			func_7();
			func_8();
			func_9();
			func_10();
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x96 Hash - 0x94986482 ^0xC23B0B53
{
	func_11();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_2() // Position - 0xA6 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_3(BOOL bParam0) // Position - 0xB4 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_18 && bParam0 != false;
}

void func_4() // Position - 0xC4 Hash - 0x8C684642 ^0x8C684642
{
	func_12();
	func_13();
	func_14(0);
	func_15();
	return;
}

BOOL func_5(BOOL bParam0, BOOL bParam1) // Position - 0xDF Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_6() // Position - 0x1BF Hash - 0xF4731C2E ^0x4FDD96D4
{
	if (!func_3(256))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (Global_1940199.f_6)
		if (func_2() == -1)
			return false;

	if (Global_1572887.f_10)
		return false;

	if (func_16(68))
		return false;

	return true;
}

void func_7() // Position - 0x215 Hash - 0x6CF1C850 ^0x6CF1C850
{
	var unk;
	var unk8;
	var unk20;

	func_17();
	func_18();
	func_19(&unk);
	func_20(0, &unk8);
	func_20(1, &unk20);
	func_21(unk8);
	func_21(unk20);
	func_22(unk8);
	func_22(unk20);
	func_23(unk, unk8, unk20);
	func_24(0, &unk8);
	func_24(1, &unk20);
	func_25(0, &unk8);
	func_25(1, &unk20);
	func_26();
	func_27(unk);
	func_28(unk);
	func_29(unk);
	func_30();
	return;
}

void func_8() // Position - 0x2AB Hash - 0x3BA567A6 ^0x36578C99
{
	int num;

	if (PED::IS_PED_INJURED(Global_33))
		return;

	if (Global_13)
		return;

	if (func_31())
		return;

	switch (Global_1902887.f_303)
	{
		case 0:
			func_32(0);
			break;
	
		case 1:
			func_32(1);
			break;
	
		case 2:
			func_32(6);
			break;
	}

	num = Global_1902887.f_303;
	num = num + 1;

	if (num >= 3)
		num = 0;

	Global_1902887.f_303 = num;
	return;
}

void func_9() // Position - 0x32B Hash - 0x6C9B1052 ^0x6C9B1052
{
	var unk;
	var unk8;
	var unk20;
	var unk32;
	var unk44;
	int num;

	switch (Global_1902887.f_408)
	{
		case 0:
		case 6:
			func_19(&unk);
			func_20(0, &unk8);
			func_20(1, &unk20);
			func_20(6, &unk32);
			func_20(5, &unk44);
			func_33(unk, unk8, 0);
			func_33(unk, unk20, 1);
			func_33(unk, unk32, 6);
			func_33(unk, unk44, 5);
			func_34(unk);
			func_35(unk, unk8);
			func_36(unk, unk8, 0);
			func_36(unk, unk20, 1);
			func_36(unk, unk32, 6);
			func_37(0);
			func_37(1);
			func_37(6);
			func_38(unk, unk8, 0);
			func_38(unk, unk20, 1);
			func_39(unk8, unk, 0);
			func_39(unk20, unk, 1);
			func_40(0);
			func_40(1);
			func_41(unk, unk8, 0);
			func_41(unk, unk20, 1);
			func_42(unk, unk8, 0);
			func_42(unk, unk20, 1);
			func_43(unk);
			func_44(unk);
			func_45();
			func_46();
			func_47(unk);
			func_48();
			func_49();
			func_50();
			func_51();
			func_52();
			func_53(unk, unk8, 0);
			func_53(unk, unk20, 1);
			func_54(unk, unk8, 0);
			func_54(unk, unk20, 1);
			func_54(unk, unk32, 6);
			func_55(unk, unk8, unk20);
			break;
	
		case 1:
			func_56();
			break;
	
		case 2:
			func_57(0, false);
			func_58(0, false);
			break;
	
		case 3:
			func_57(1, false);
			func_58(1, false);
			break;
	
		case 4:
			func_61(0);
			break;
	
		case 5:
			func_61(1);
			break;
	
		case 7:
			func_61(5);
			break;
	
		case 8:
			func_62();
			break;
	
		case 9:
			func_59();
			break;
	
		case 11:
			func_60();
			break;
	}

	num = Global_1902887.f_408;
	num = num + 1;

	if (num >= 12)
		num = 0;

	Global_1902887.f_408 = num;
	return;
}

void func_10() // Position - 0x5A7 Hash - 0x99622B9E ^0xFF190B0
{
	int num;

	if (PED::IS_PED_INJURED(Global_33))
		return;

	switch (Global_1902887.f_409)
	{
		case 0:
			func_63();
			break;
	
		case 1:
			func_64();
			break;
	
		case 2:
			func_65();
			break;
	}

	num = Global_1902887.f_409;
	num = num + 1;

	if (num >= 3)
		num = 0;

	Global_1902887.f_409 = num;
	return;
}

void func_11() // Position - 0x611 Hash - 0xBAB15315 ^0xBAB15315
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		if (func_66(i))
			if (!func_67(i))
				func_68(i);
	}

	return;
}

void func_12() // Position - 0x644 Hash - 0x9DF3D523 ^0xAB712F8E
{
	PED::_RESERVE_AMBIENT_PEDS(1);
	func_17();
	return;
}

int func_13() // Position - 0x655 Hash - 0xC45B8741 ^0x39A6B7C0
{
	Hash model;

	model = func_69();
	STREAMING::REQUEST_MODEL(model, false);

	if (!STREAMING::HAS_MODEL_LOADED(model))
		return 0;

	return 1;
}

void func_14(int iParam0) // Position - 0x679 Hash - 0xB3D6FC5E ^0xB3D6FC5E
{
	Global_1902887.f_364 != iParam0;
	Global_1902887.f_364 = iParam0;
	return;
}

int func_15() // Position - 0x696 Hash - 0x9FD7592C ^0x2C2AAB30
{
	if (!func_71(-1898635967, func_70(), true))
		return 0;

	if (func_72() || func_73())
		if (!func_71(146323340, func_70(), false))
			return 0;

	return 1;
}

BOOL func_16(int iParam0) // Position - 0x6DC Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

void func_17() // Position - 0x6EF Hash - 0xE09335F1 ^0xE09335F1
{
	int num;
	int numReservedAmbientPedsDesired;
	int numPeds;
	int numPeds2;

	num = 1;
	func_74(0) == 1;

	if (func_74(1) == 1)
		num = num + 1;

	if (func_74(5) == 1)
		num = num + 1;

	if (func_74(6) == 1)
		num = num + 1;

	num = num + func_75(0);
	num = num + func_75(1);
	numReservedAmbientPedsDesired = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();

	if (num > numReservedAmbientPedsDesired)
	{
		numPeds = num - numReservedAmbientPedsDesired;
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(numPeds);
	}
	else if (num < numReservedAmbientPedsDesired)
	{
		numPeds2 = numReservedAmbientPedsDesired - num;
		PED::_UNRESERVE_AMBIENT_PEDS(numPeds2);
	}

	return;
}

void func_18() // Position - 0x775 Hash - 0xB89A76E9 ^0xB89A76E9
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		func_76(i);
	}

	return;
}

void func_19(var uParam0) // Position - 0x795 Hash - 0xE4C59F9D ^0xF9619037
{
	*uParam0 = PLAYER::PLAYER_ID();

	if (!PLAYER::IS_PLAYER_DEAD(*uParam0))
		uParam0->f_1 = 1;

	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		uParam0->f_2 = 1;
	
		if (PED::IS_PED_INJURED(Global_33))
			uParam0->f_4 = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(Global_33))
			uParam0->f_3 = 1;
	
		if (PED::IS_PED_ON_MOUNT(Global_33))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = PED::GET_MOUNT(Global_33);
		}
	}

	return;
}

void func_20(int iParam0, var uParam1) // Position - 0x815 Hash - 0x68A2A80B ^0x8FD7DFD7
{
	float num;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = 0;
	uParam1->f_4 = 0;
	uParam1->f_5 = { 0f, 0f, 0f };
	uParam1->f_8 = 0f;
	uParam1->f_10 = 0;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;

	if (func_66(iParam0))
	{
		uParam1->f_1 = 1;
		*uParam1 = func_78(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			uParam1->f_2 = 1;
	
		if (PED::IS_PED_INJURED(*uParam1))
			uParam1->f_3 = 1;
	
		if (TASK::IS_PED_IN_WRITHE(*uParam1))
			uParam1->f_4 = 1;
	
		uParam1->f_5 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
		uParam1->f_8 = ENTITY::GET_ENTITY_HEADING(*uParam1);
		uParam1->f_9 = PED::_GET_RIDER_OF_MOUNT(*uParam1, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_9))
			if (uParam1->f_9 == Global_33)
				uParam1->f_10 = 1;
	
		num = func_79(iParam0);
	
		if (func_80(uParam1->f_5, Global_34) <= num)
			uParam1->f_11 = 1;
	}

	return;
}

void func_21(Entity eParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x918 Hash - 0x5E6239A9 ^0x6EAFC
{
	if (eParam0.f_1)
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(eParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(eParam0, true, true);

	return;
}

void func_22(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x939 Hash - 0x7BB3A53A ^0x65F0B231
{
	if (pedParam0.f_2)
		if (func_81(64))
			PED::SET_PED_RESET_FLAG(pedParam0, 6, true);

	return;
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x959 Hash - 0xD07FE800 ^0xD76C5881
{
	if (func_82())
	{
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE"), true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE_HORSEBACK"), true);
		func_83(uParam0, uParam7, uParam19);
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE_HORSEBACK"), false);
		func_14(1);
	}

	func_84();
	return;
}

void func_24(int iParam0, var uParam1) // Position - 0x9B3 Hash - 0x55E79FBE ^0x5AB211A9
{
	BOOL value;
	int flagId;
	BOOL pedConfigFlag;
	BOOL flag;
	float pedRemainingRevivalTime;

	if (!uParam1->f_1)
		return;

	if (!uParam1->f_2)
		return;

	value = false;
	flagId = 388;
	pedConfigFlag = PED::GET_PED_CONFIG_FLAG(*uParam1, flagId, false);

	if (value != pedConfigFlag)
		PED::SET_PED_CONFIG_FLAG(*uParam1, flagId, value);

	if (func_85())
		return;

	flag = func_86(iParam0);

	if (uParam1->f_4 != flag)
	{
		func_87(iParam0, uParam1->f_4);
		func_88(iParam0);
	}

	if (!uParam1->f_4)
		return;

	if (func_89(iParam0) == 0)
		func_90(iParam0, MISC::GET_GAME_TIMER());

	pedRemainingRevivalTime = PED::_GET_PED_REMAINING_REVIVAL_TIME(*uParam1, false);
	func_91(iParam0, pedRemainingRevivalTime);

	if (Global_1915656.f_22476)
		if (!PED::_0x12EB4E31F092C9B3(*uParam1))
			PED::SET_PAUSE_PED_WRITHE_BLEEDOUT(*uParam1, true);
	else if (PED::_0x12EB4E31F092C9B3(*uParam1))
		PED::SET_PAUSE_PED_WRITHE_BLEEDOUT(*uParam1, false);

	return;
}

void func_25(int iParam0, var uParam1) // Position - 0xA85 Hash - 0x13910CF7 ^0xB6BF87EF
{
	if (!uParam1->f_1)
		return;

	if (func_85())
		return;

	if (!uParam1->f_2)
	{
		func_92(iParam0);
		return;
	}

	return;
}

void func_26() // Position - 0xAB3 Hash - 0x90BFFF20 ^0x90BFFF20
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		func_93(i);
	}

	return;
}

void func_27(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xAD3 Hash - 0xCF3BC73F ^0x20508DA
{
	Ped mount;
	Vector3 entityCoords;
	float distanceBetweenCoords;
	float num;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (!PED::IS_PED_ON_MOUNT(Global_33))
	{
		func_94();
		return;
	}

	mount = PED::GET_MOUNT(Global_33);

	if (!func_95(mount))
		return;

	if (!func_96())
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(mount, true, false) };
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, func_97(), false);
		func_98(entityCoords);
	
		if (distanceBetweenCoords > 0.01f)
		{
			num = func_99();
			num = num + distanceBetweenCoords;
			func_100(num);
		}
	
		if (func_99() >= 40f)
			func_101(1);
	}

	if (!func_96())
		return;

	func_102(mount);
	return;
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xB90 Hash - 0x6C59F365 ^0xB4EC21EB
{
	Ped mount;
	Ped ped;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (!func_66(6))
		return;

	if (!PED::IS_PED_ON_MOUNT(Global_33))
		return;

	mount = PED::GET_MOUNT(Global_33);
	ped = func_78(6);

	if (mount != ped)
		return;

	if (func_103(6) == 0)
		return;

	if (func_66(1))
		func_104(1, false);

	func_105(1);
	func_106(mount);
	func_105(6);
	return;
}

void func_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xC16 Hash - 0x783301A9 ^0x470B8E6C
{
	Ped ped;
	int gameTimer;

	if (!func_107(uParam0, &ped, true))
	{
		func_108();
		return;
	}

	gameTimer = MISC::GET_GAME_TIMER();

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1902887.f_402))
	{
		Global_1902887.f_402 = ped;
		Global_1902887.f_402.f_1 = gameTimer;
	}

	if (Global_1902887.f_402.f_1 + 5000 < gameTimer)
	{
		func_109(ped);
		func_108();
	}

	return;
}

void func_30() // Position - 0xC78 Hash - 0x378D9678 ^0x12501F7D
{
	int num;

	if (func_110() > 1)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_EXIT"), false);
		func_111();
	}

	num = func_110();

	switch (num)
	{
		case 0:
			func_112();
			break;
	
		case 1:
			func_113();
			break;
	
		case 2:
			func_114();
			break;
	
		case 3:
			func_115();
			break;
	
		case 4:
			func_116();
			break;
	
		case 5:
			func_117();
			break;
	
		case 6:
			func_118();
			break;
	
		case 7:
			func_119();
			break;
	}

	func_120();
	return;
}

BOOL func_31() // Position - 0xD27 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1958638;
}

void func_32(int iParam0) // Position - 0xD33 Hash - 0xF0689C8C ^0xF0689C8C
{
	Ped ped;

	iParam0 = func_77(iParam0);

	if (iParam0 <= -1)
		return;

	if (iParam0 >= 7)
		return;

	if (iParam0 != 0)
		if (!func_121(42))
			return;

	ped = Global_1902887[iParam0 /*43*/];

	if (PED::IS_PED_INJURED(ped))
		return;

	if (Global_13)
		return;

	if (func_31())
		return;

	switch (Global_1902887.f_410[iParam0])
	{
		case 0:
		case 1:
			func_122(iParam0);
			Global_1902887.f_410[iParam0] = 2;
			break;
	
		case 2:
			func_123(iParam0);
			Global_1902887.f_410[iParam0] = 3;
			break;
	
		case 3:
			func_124(iParam0);
			Global_1902887.f_410[iParam0] = 0;
			break;
	}

	return;
}

void func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0xDF9 Hash - 0x6B003E25 ^0xF8ABB585
{
	if (!uParam0.f_3)
		return;

	if (!uParam7.f_1)
		return;

	func_125(iParam19, uParam7.f_5, uParam7.f_8);
	return;
}

void func_34(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xE27 Hash - 0xE53AE087 ^0xD1C4A04A
{
	BOOL flag;
	int num;
	BOOL flag2;
	BOOL value;
	int flagId;
	BOOL value2;

	if (func_81(2048))
		return;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	flag = false;
	num = func_127(func_126(0));

	switch (num)
	{
		case 2:
		case 3:
		case 4:
			flag = true;
			break;
	}

	flag2 = 0;

	if (!func_121(41))
		flag2 = 1;

	value = false;

	if (flag || flag2)
		value = true;

	flagId = 367;

	if (PED::GET_PED_CONFIG_FLAG(Global_33, flagId, true) != value)
		PED::SET_PED_CONFIG_FLAG(Global_33, flagId, value);

	value2 = false;

	if (flag && !flag2)
		value2 = true;

	flagId = 487;

	if (PED::GET_PED_CONFIG_FLAG(Global_33, flagId, true) != value2)
		PED::SET_PED_CONFIG_FLAG(Global_33, flagId, value2);

	return;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0xEF4 Hash - 0xD6AF6A44 ^0xD1E59C3
{
	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (!pedParam7.f_1)
		return;

	if (!pedParam7.f_2)
		return;

	if (pedParam7.f_3)
		return;

	if (pedParam7.f_4)
		return;

	func_128(pedParam7, 2043986356);
	return;
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0xF49 Hash - 0x3E122361 ^0xE590DDC6
{
	BOOL flag;
	int num;

	if (!uParam0.f_3)
		return;

	if (!pedParam7.f_1)
		return;

	if (!pedParam7.f_2)
		return;

	if (pedParam7.f_3)
		return;

	if (pedParam7.f_4)
		return;

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	if (func_67(iParam19))
		return;

	flag = false;
	num = 48;

	if (flag)
		if (!FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(pedParam7, num))
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam7, num, true);
	else if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(pedParam7, num))
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam7, num, false);

	return;
}

void func_37(int iParam0) // Position - 0xFDC Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0xFE4 Hash - 0xF0D382E9 ^0x24C0FB47
{
	if (!uParam0.f_1)
		return;

	if (!uParam7.f_10)
		return;

	if (func_129(iParam19) == -1)
		return;

	func_130(iParam19, -1);
	return;
}

void func_39(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, Player plParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x1016 Hash - 0xC71729B1 ^0xCDD48BBC
{
	if (func_131())
		return;

	iParam19 = func_77(iParam19);

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	if (!plParam12.f_1)
		return;

	if (!pedParam0.f_2)
		return;

	if (!pedParam0.f_11)
		return;

	if (func_129(iParam19) == 1)
		return;

	if (!PLAYER::IS_PLAYER_RIDING_TRAIN(plParam12))
		return;

	if (func_132(pedParam0, 2043986356))
		return;

	func_133(pedParam0, Global_33);
	return;
}

void func_40(int iParam0) // Position - 0x1098 Hash - 0x67C27ECC ^0x489F383
{
	int threadId;
	Ped ped;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_67(iParam0))
		return;

	threadId = func_134(iParam0);

	if (SCRIPTS::DOES_THREAD_EXIST(threadId))
		if (SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
			return;

	if (func_66(iParam0))
	{
		ped = func_78(iParam0);
		func_135(ped, true);
	}

	func_136(iParam0);
	return;
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x1109 Hash - 0x3E122361 ^0xE590DDC6
{
	Ped riderOfMount;
	Ped ped;
	Hash pedRelationshipGroupHash;

	if (!uParam0.f_3)
		return;

	if (!pedParam7.f_1)
		return;

	if (!pedParam7.f_2)
		return;

	if (pedParam7.f_3)
		return;

	if (pedParam7.f_4)
		return;

	iParam19 = func_77(iParam19);

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	riderOfMount = PED::_GET_RIDER_OF_MOUNT(pedParam7, false);

	if (!ENTITY::DOES_ENTITY_EXIST(riderOfMount))
	{
		func_137(iParam19);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(riderOfMount) || PED::IS_PED_INJURED(riderOfMount))
	{
		func_137(iParam19);
		return;
	}

	if (func_81(512))
		return;

	if (riderOfMount == Global_33)
		return;

	ped = func_138(iParam19);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(riderOfMount);
	
		if (pedRelationshipGroupHash != joaat("rel_player_ally") && pedRelationshipGroupHash != joaat("rel_player_like") && pedRelationshipGroupHash != joaat("rel_gang_dutchs"))
			func_139(iParam19, riderOfMount);
	}

	ped = func_138(iParam19);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (func_140(pedParam7, Global_33, true, true) > func_79(iParam19))
	{
		func_137(iParam19);
		func_141(iParam19, 2);
	}

	return;
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x1230 Hash - 0x3E122361 ^0xE590DDC6
{
	float num;
	BOOL flag;
	int gameTimer;

	if (!uParam0.f_3)
		return;

	if (!pedParam7.f_1)
		return;

	if (!pedParam7.f_2)
		return;

	if (pedParam7.f_3)
		return;

	if (pedParam7.f_4)
		return;

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	if (!func_142(iParam19))
		return;

	num = func_143(pedParam7);
	flag = false;

	if (num > 0f)
		flag = true;

	gameTimer = MISC::GET_GAME_TIMER();

	if (!flag || func_144(iParam19) + 30000 < gameTimer)
	{
		func_145(iParam19, 0);
		func_146(iParam19, -1);
	
		if (func_147(16))
			func_148(16);
	
		if (func_149(16))
			func_150(16);
	}

	return;
}

void func_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x12EB Hash - 0x55BB7E0E ^0x8359ECB4
{
	int num;
	Ped mount;
	Ped riderOfMount;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	num = func_151(5);

	if (num == 0)
		return;

	func_20(5, &mount);

	if (num == 2)
	{
		if (mount.f_1 && !mount.f_2)
		{
			func_137(5);
			func_152(5, 1);
		}
	
		if (mount.f_2)
		{
			if (func_140(mount, Global_33, true, true) > func_79(5) && !ENTITY::IS_ENTITY_ON_SCREEN(mount))
			{
				riderOfMount = PED::_GET_RIDER_OF_MOUNT(mount, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(riderOfMount))
				{
					ENTITY::IS_ENTITY_DEAD(riderOfMount) || PED::IS_PED_INJURED(riderOfMount);
				
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(riderOfMount))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(riderOfMount, true, true);
						PED::DELETE_PED(&riderOfMount);
					}
				}
			
				func_68(5);
				func_153(5, 0);
			}
		}
	
		if (!mount.f_1 && func_74(5) == 1)
			func_153(5, 0);
	}

	if (num == 0)
		return;

	if (!func_121(41))
		return;

	if (func_74(0) == 1 && func_154() == 0)
	{
		func_104(5, false);
		func_105(5);
	}

	return;
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x1402 Hash - 0xF696BE18 ^0x86B3D1DC
{
	BOOL flag;
	int num;
	BOOL flag2;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (func_121(41))
		return;

	flag = false;

	if (func_74(0) == 0 && func_74(5) == 1 && func_151(5) == 1)
		flag = true;

	if (!flag)
		return;

	num = func_127(func_126(0));
	flag2 = false;

	if (num == 2)
		flag2 = true;

	if (!flag2)
	{
		if (!func_121(41))
		{
			func_155(41);
			func_155(29);
		}
	
		if (!func_156(55))
			func_157(1);
	}

	return;
}

void func_45() // Position - 0x14A9 Hash - 0xC8CDC20A ^0xE77D592A
{
	ePedType model;
	ePedType model2;

	model = func_158(0);
	model2 = func_158(1);

	if (Global_1902887.f_404 != PED_TYPE_PLAYER_0)
	{
		if (Global_1902887.f_404 != model)
		{
			if (!func_159(Global_1902887.f_404))
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1902887.f_404, false);
		
			Global_1902887.f_404 = 0;
		}
	}

	if (Global_1902887.f_404.f_1 != PED_TYPE_PLAYER_0)
	{
		if (Global_1902887.f_404.f_1 != model2)
		{
			if (!func_159(Global_1902887.f_404.f_1))
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1902887.f_404.f_1, false);
		
			Global_1902887.f_404.f_1 = 0;
		}
	}

	if (model != PED_TYPE_PLAYER_0)
	{
		if (!PED::_IS_PED_MODEL_SUPPRESSED(model))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(model, true);
			Global_1902887.f_404 = model;
		}
	}

	if (model2 != PED_TYPE_PLAYER_0)
	{
		if (!PED::_IS_PED_MODEL_SUPPRESSED(model2))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(model2, true);
			Global_1902887.f_404.f_1 = model2;
		}
	}

	return;
}

void func_46() // Position - 0x157F Hash - 0xE2C9F9BB ^0xE2C9F9BB
{
	int num;

	func_160(Global_1902887.f_422);
	num = Global_1902887.f_422;
	num = num + 1;

	if (num >= 5)
		num = 0;

	Global_1902887.f_422 = num;
	return;
}

void func_47(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x15B3 Hash - 0x260987F3 ^0x6C65A262
{
	BOOL flag;
	Entity entity;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	var entityCoords;
	var entityCoords2;
	var unk5;
	var unk8;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (func_85())
		return;

	flag = func_161();

	if (flag)
	{
		entity = func_162();
	
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entity))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, true, true);
	}

	flag2 = false;

	if (flag)
		flag2 = func_163(Global_33, entity);

	flag3 = func_121(41);
	flag4 = false;

	if (flag)
	{
		if (flag2)
		{
			if (func_164() != 1 && !func_165(false))
			{
				func_166(1);
				flag4 = true;
			}
		}
		else
		{
			if (func_164() == 1 && !func_165(false))
			{
				func_166(2);
				flag4 = true;
			}
		
			if (ENTITY::IS_ENTITY_STATIC(entity))
				ENTITY::SET_ENTITY_DYNAMIC(entity, true);
		}
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(entity, true, false) };
		func_167(entityCoords);
	}
	else
	{
		if (func_164() == 0)
		{
			if (func_154() == 5)
			{
				if (func_66(5))
				{
					entityCoords2 = { ENTITY::GET_ENTITY_COORDS(func_78(5), false, false) };
					func_167(entityCoords2);
				}
				else if (flag3)
				{
					unk5 = { func_168() };
					func_169(-1);
					func_166(2);
					flag4 = true;
				}
			}
		}
	
		if (func_164() == 2)
		{
			unk8 = { func_168() };
			func_170(unk8, 0f, true);
		}
	}

	if (flag4)
		func_62();

	return;
}

void func_48() // Position - 0x1702 Hash - 0x78297D7B ^0x477BB51D
{
	Ped ped;
	var unk12;
	BOOL flag;

	if (!func_66(6))
		return;

	func_20(6, &ped);

	if (!ped.f_2)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);
		func_105(6);
		return;
	}

	func_19(&unk12);
	flag = false;

	if (!unk12.f_3)
		flag = true;

	if (func_140(ped, Global_33, true, true) > 100f)
		flag = true;

	if (flag)
	{
		func_104(6, false);
		func_105(6);
	}

	return;
}

void func_49() // Position - 0x176E Hash - 0x59081D6B ^0x431B4918
{
	Ped ped;
	int gameTimer;
	int num;
	int num2;

	if (!func_66(1))
	{
		func_171();
		return;
	}

	func_20(1, &ped);

	if (!ped.f_2)
	{
		func_171();
		return;
	}

	if (func_172(1))
	{
		func_171();
		return;
	}

	if (func_103(1) >= 1)
	{
		func_171();
		return;
	}

	if (!func_173(1))
	{
		func_171();
		return;
	}

	if (ped.f_10)
	{
		func_171();
		return;
	}

	if (ENTITY::DOES_ENTITY_EXIST(ped.f_9))
	{
		func_171();
		return;
	}

	gameTimer = MISC::GET_GAME_TIMER();

	if (!func_174())
	{
		num = func_175();
	
		if (num == 0)
			func_176(gameTimer);
		else if (num + 5000 < gameTimer)
			func_177(1);
	}

	if (!func_174())
		return;

	if (!func_128(ped, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(ped, Global_33, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(ped, true);
	}

	if (func_178(ped, -1))
		return;

	num2 = func_179();

	if (num2 == 0)
	{
		func_180(gameTimer);
	}
	else if (num2 + 15000 < gameTimer)
	{
		func_104(1, true);
		func_171();
	}

	return;
}

void func_50() // Position - 0x1889 Hash - 0x17C92C87 ^0xCF57F60
{
	Ped mount;
	BOOL flag;
	Ped mount2;
	BOOL flag2;
	BOOL flag3;
	int i;
	int secondsSinceBaseYear;
	int dismountedTimestamp;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
		return;

	flag = false;

	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		flag = true;
		mount = PED::GET_MOUNT(Global_33);
	}

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_38.f_289.f_1[i /*460*/].f_9 == 0)
		{
			if (Global_38.f_289.f_1[i /*460*/].f_455 > -1)
				Global_38.f_289.f_1[i /*460*/].f_455 = -1;
		}
		else
		{
			flag2 = false;
			flag3 = false;
			mount2 = Global_1902887[i /*43*/];
		
			if (ENTITY::DOES_ENTITY_EXIST(mount2))
			{
				flag2 = true;
			
				if (flag)
					if (mount == mount2)
						flag3 = true;
			}
		
			if (flag3)
			{
				if (Global_38.f_289.f_1[i /*460*/].f_455 > -1)
					Global_38.f_289.f_1[i /*460*/].f_455 = -1;
			}
			else
			{
				secondsSinceBaseYear = CLOCK::_GET_SECONDS_SINCE_BASE_YEAR();
			
				if (flag2)
				{
					dismountedTimestamp = PED::_0xE8D1CCB9375C101B(mount2, PLAYER::PLAYER_ID());
				
					if (dismountedTimestamp == -1 || dismountedTimestamp == 0)
					{
						dismountedTimestamp = secondsSinceBaseYear;
						PED::_0xA691C10054275290(mount2, PLAYER::PLAYER_ID(), dismountedTimestamp);
					}
				
					if (Global_38.f_289.f_1[i /*460*/].f_455 != dismountedTimestamp)
						Global_38.f_289.f_1[i /*460*/].f_455 = dismountedTimestamp;
				}
				else if (Global_38.f_289.f_1[i /*460*/].f_455 == -1)
				{
					Global_38.f_289.f_1[i /*460*/].f_455 = secondsSinceBaseYear;
				}
			}
		}
	}

	return;
}

void func_51() // Position - 0x19FF Hash - 0x58B14796 ^0xB923F
{
	Player player;
	BOOL enabled;
	Ped ped;
	Ped ped2;

	player = PLAYER::PLAYER_ID();
	enabled = false;

	if (func_181())
		enabled = true;

	if (func_66(0))
	{
		ped = func_78(0);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped, 31, 2, enabled);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped, 32, 2, enabled);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped, 33, 2, enabled);
	}

	if (func_66(1))
	{
		ped2 = func_78(1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped2, 31, 2, enabled);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped2, 32, 2, enabled);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped2, 33, 2, enabled);
	}

	return;
}

void func_52() // Position - 0x1A86 Hash - 0x8B6E586A ^0x8B6E586A
{
	if (func_121(32))
		if (!func_182())
			func_183(true);
	else if (func_182())
		func_183(false);

	if (func_121(33))
		if (!func_184())
			func_185(true);
	else if (func_184())
		func_185(false);

	if (func_121(34))
		if (!func_186())
			func_187(true);
	else if (func_186())
		func_187(false);

	return;
}

void func_53(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x1AFD Hash - 0xD146F2EE ^0x8BB97176
{
	float num;
	int gameTimer;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (!pedParam7.f_1)
		return;

	if (!pedParam7.f_2)
		return;

	if (!pedParam7.f_4)
		return;

	iParam19 = func_77(iParam19);

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	num = func_140(pedParam7, Global_33, true, true);

	if (num > 40f)
	{
		func_88(iParam19);
		return;
	}

	if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam7))
	{
		func_88(iParam19);
		return;
	}

	gameTimer = MISC::GET_GAME_TIMER();

	if (!func_188(iParam19))
	{
		func_189(iParam19, gameTimer);
		return;
	}

	if (func_190(iParam19) + 15000 < gameTimer)
		func_189(iParam19, gameTimer);

	return;
}

void func_54(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x1BBB Hash - 0x74458EEC ^0x22846F47
{
	var unk;
	Vector3 vector;
	float num;
	float distanceBetweenCoords;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (!uParam7.f_1)
		return;

	if (!uParam7.f_2)
		return;

	if (uParam7.f_4)
		return;

	iParam19 = func_77(iParam19);

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	unk = { func_191(iParam19) };

	if (_IS_NULL_VECTOR(unk))
		return;

	vector = { func_193(iParam19) };
	num = func_194(iParam19);
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam7.f_5, vector, true);

	if (distanceBetweenCoords > 0.01f)
	{
		num = num + distanceBetweenCoords;
		func_195(iParam19, uParam7.f_5);
		func_196(iParam19, num);
	}

	return;
}

void func_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x1C74 Hash - 0xD246D98A ^0x6476146D
{
	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	func_197(uParam0);
	func_198(uParam0);
	func_199(uParam0, uParam7);
	func_200();
	func_201(uParam0, uParam7, uParam19);
	func_202(uParam0);
	func_203(uParam0, uParam7, uParam19);
	func_204(uParam0, uParam7, uParam19);
	func_205();
	func_206(uParam0);
	func_207();
	func_208(uParam0);
	func_209(uParam0);
	func_210(uParam0, uParam7);
	func_211(uParam0, uParam7, uParam19);
	func_212(uParam0);
	return;
}

void func_56() // Position - 0x1D42 Hash - 0x570398D6 ^0x9EC1C559
{
	int num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
		return;

	num = { func_126(0) };

	if (func_213(num))
		if (num == 2)
			return;

	num2 = func_214();
	WEAPON::_0x641351E9AD103890(Global_33, num2);
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
void func_57(int iParam0, BOOL bParam1) // Position - 0x1D9D Hash - 0xF1238D41 ^0x17B719A
{
	Ped mountOwnedByPlayer;
	Hash entityModel;
	var unk96;
	int num;
	var src;
	Ped ped;
	Ped ped2;
	Ped pedIndexFromEntityIndex;
	int num2;
	int i;
	var drawable;
	var albedo;
	var normal;
	var material;
	BOOL flag;
	BOOL flag2;
	int j;
	BOOL flag3;
	int num3;
	BOOL flag4;
	BOOL flag5;
	int carriableEntityState;

	if (!func_215(iParam0))
		return;

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		return;

	if (PED::_IS_PED_QUEUED_FOR_DELETION(mountOwnedByPlayer))
		return;

	entityModel.f_10 = 10;
	unk96.f_10 = 10;
	func_216(&entityModel);
	flag = false;
	flag2 = PED::IS_PED_RAGDOLL(mountOwnedByPlayer) || PED::IS_PED_DEAD_OR_DYING(mountOwnedByPlayer, true) || TASK::IS_PED_IN_WRITHE(mountOwnedByPlayer);
	flag3 = false;

	if (func_217(10) || func_217(9) || func_217(29) || func_217(27) || func_217(15))
		flag3 = true;

	num3 = 1;
	flag4 = false;
	flag5 = func_218(131072, 255);

	if (!flag5)
		if (func_219())
			flag5 = true;

	for (j = 0; j < 3; j = j + 1)
	{
		num = func_220(j);
		num2 = j;
		func_216(&entityModel);
		flag4 = false;
		flag = flag2;
		ped2 = Global_1290271.f_1171.f_245[j /*4*/].f_3;
	
		if (!flag)
		{
			if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Global_1290271.f_1171.f_245[j /*4*/], mountOwnedByPlayer, num, 0))
			{
				if (bParam1 && !Global_1903838.f_111)
				{
				}
				else
				{
					flag = true;
					goto 0x17C;
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(ped2) && ENTITY::DOES_ENTITY_EXIST(Global_1290271.f_1171.f_245[j /*4*/].f_3))
			{
				if (ped2 != Global_1290271.f_1171.f_245[j /*4*/].f_3)
				{
					flag = true;
					flag4 = true;
				}
			}
		
			if (!flag)
			{
				ped = Global_1290271.f_1171.f_245[j /*4*/].f_3;
			
				if (!ENTITY::DOES_ENTITY_EXIST(ped))
					flag = true;
			}
		
			if (!flag)
			{
				carriableEntityState = ENTITY::GET_CARRIABLE_ENTITY_STATE(ped);
			
				if (carriableEntityState != 7)
				{
					flag = true;
				
					if (!Global_1903838.f_112)
						num3 = 0;
				
					if (Global_1290271.f_1171.f_241[j] == 7)
						flag4 = true;
				}
			
				Global_1290271.f_1171.f_241[j] = carriableEntityState;
			}
		
			if (!flag)
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(ped))
					flag = true;
		
			if (!flag)
			{
				if (ENTITY::IS_ENTITY_A_PED(ped))
				{
					pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped);
				
					if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
						flag = true;
				
					entityModel.f_4 = PED::_GET_PED_QUALITY(pedIndexFromEntityIndex);
					entityModel.f_9 = PED::_GET_NUM_COMPONENTS_IN_PED(pedIndexFromEntityIndex);
					entityModel.f_6 = PED::_GET_PED_DAMAGE_CLEANLINESS(pedIndexFromEntityIndex);
					entityModel.f_7 = PED::_GET_PED_DAMAGED(pedIndexFromEntityIndex);
				}
			}
		}
	
		if (!flag)
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(ped);
			entityModel.f_1 = func_221(ped);
			entityModel.f_2 = ENTITY::_0xD21C7418C590BB40(ped);
			entityModel.f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(ped);
			entityModel.f_93 = ENTITY::_0xB16C780C51E51E2B(ped);
		
			if (flag3)
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ped))
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(ped);
		
			if (Global_38.f_289.f_1[iParam0 /*460*/].f_15[num2 /*96*/].f_1 != 0)
			{
				if (Global_38.f_289.f_1[iParam0 /*460*/].f_15[num2 /*96*/].f_1 != entityModel.f_1)
				{
					func_222(mountOwnedByPlayer, Global_38.f_289.f_1[iParam0 /*460*/].f_15[num2 /*96*/].f_1, 1, !flag4, -142743235);
				
					if (entityModel.f_1 != 0)
					{
						if (func_223(mountOwnedByPlayer, iParam0, entityModel.f_1, j))
							func_224(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(mountOwnedByPlayer), entityModel.f_1, 1);
					
						Global_38.f_289.f_1[iParam0 /*460*/].f_15[num2 /*96*/].f_1 = entityModel.f_1;
					}
				
					Global_1940252.f_5 = 1;
				}
			}
			else
			{
				Global_1940252.f_5 = 1;
			
				if (func_223(mountOwnedByPlayer, iParam0, entityModel.f_1, j))
					func_224(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(mountOwnedByPlayer), entityModel.f_1, 1);
			}
		}
		else
		{
			if (Global_38.f_289.f_1[iParam0 /*460*/].f_15[num2 /*96*/].f_1 != 0)
			{
				Global_1940252.f_5 = 1;
				func_222(mountOwnedByPlayer, Global_38.f_289.f_1[iParam0 /*460*/].f_15[num2 /*96*/].f_1, 1, !flag4, -142743235);
			}
		
			Global_1290271.f_1171.f_241[j] = 0;
			MISC::COPY_SCRIPT_STRUCT(&Global_1290271.f_1171.f_245[j /*4*/], &src, 4);
			func_225(&unk96, &Global_38.f_289.f_1[iParam0 /*460*/].f_15[num2 /*96*/]);
			goto 0x5BE;
		}
	
		if (STREAMING::IS_MODEL_A_PED(entityModel))
		{
			entityModel.f_8 = PED::_GET_PED_META_OUTFIT_HASH(pedIndexFromEntityIndex);
		
			if (Global_1903838.f_112)
			{
				if (entityModel.f_9 <= 1)
				{
				}
				else if (entityModel.f_9 > 10)
				{
					entityModel.f_9 = 10;
				}
			
				for (i = 0; i < entityModel.f_9; i = i + 1)
				{
					if (i >= 10)
						break;
				
					if (PED::GET_META_PED_ASSET_GUIDS(pedIndexFromEntityIndex, i, &drawable, &albedo, &normal, &material))
					{
						entityModel.f_10[i /*8*/] = drawable;
						entityModel.f_10[i /*8*/].f_1 = albedo;
						entityModel.f_10[i /*8*/].f_2 = normal;
						entityModel.f_10[i /*8*/].f_3 = material;
					}
				
					if (PED::GET_META_PED_ASSET_TINT(pedIndexFromEntityIndex, i, &drawable, &albedo, &normal, &material))
					{
						entityModel.f_10[i /*8*/].f_4 = drawable;
						entityModel.f_10[i /*8*/].f_5 = albedo;
						entityModel.f_10[i /*8*/].f_6 = normal;
						entityModel.f_10[i /*8*/].f_7 = material;
					}
				}
			}
		
			entityModel.f_91 = PERSISTENCE::_0x2E545965DF98D476(ped);
		
			if (PED::_IS_META_PED_USING_COMPONENT(pedIndexFromEntityIndex, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(ped))
				entityModel.f_92 = 1;
			else
				entityModel.f_92 = 0;
		
			entityModel.f_94 = ENTITY::_0x37B01666BAE8F7EF(ped);
		
			if (MISC::_IS_PED_DECOMPOSED(pedIndexFromEntityIndex))
			{
				TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(Global_33, mountOwnedByPlayer, ped);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(ped, 2, false);
				MISC::SET_PED_DECOMPOSED(pedIndexFromEntityIndex, true);
			
				if (func_227(func_226(pedIndexFromEntityIndex), 82))
					func_228(113, true);
			
				func_225(&unk96, &Global_38.f_289.f_1[iParam0 /*460*/].f_15[num2 /*96*/]);
			}
			else
			{
				if (entityModel.f_91 >= 12)
					if (func_229() && func_227(func_226(pedIndexFromEntityIndex), 82))
						func_228(112, false);
				else if (entityModel.f_91 >= 2)
					if (func_229() && func_227(func_226(pedIndexFromEntityIndex), 82))
						func_228(111, false);
			
				func_225(&entityModel, &Global_38.f_289.f_1[iParam0 /*460*/].f_15[num2 /*96*/]);
			}
		}
	
		func_225(&entityModel, &Global_38.f_289.f_1[iParam0 /*460*/].f_15[num2 /*96*/]);
	}

	if (Global_1903838.f_111)
		if (!Global_1903838.f_112)
			if (num3 == 1)
				Global_1903838.f_112 = 1;

	return;
}

void func_58(int iParam0, BOOL bParam1) // Position - 0x2387 Hash - 0x387EA196 ^0x7340D3D1
{
	Ped mountOwnedByPlayer;

	if (!func_215(iParam0))
		return;

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());

	if (!func_230(mountOwnedByPlayer))
		return;

	if (bParam1)
		if (!Global_1903838.f_111)
			return;

	TASK::IS_PED_IN_WRITHE(mountOwnedByPlayer);
	PED::_0x6F43C351A5D51E2F(mountOwnedByPlayer, &(Global_38.f_289.f_1[iParam0 /*460*/].f_382));
	return;
}

void func_59() // Position - 0x23E5 Hash - 0xE404D875 ^0xE404D875
{
	var unk;
	var unk2;
	var unk3;
	int num;
	var unk4;
	var unk5;
	int i;
	Ped ped;
	int num2;
	int num3;
	int num4;

	for (i = 0; i < 7; i = i + 1)
	{
		if (!func_66(i))
		{
		}
		else
		{
			ped = func_78(i);
		
			if (func_231(i))
			{
				if (!func_232(ped))
				{
					num2 = func_233(i);
					func_234(ped, num2);
				}
				else
				{
					num3 = func_235(i);
					func_236(num3, &unk, &unk2, &unk3, &num, &unk4, &unk5);
				
					if (num >= 1)
					{
						func_237(ped);
						func_238(i);
					}
					else if (!func_232(ped))
					{
					}
					else if (!func_231(i))
					{
						num4 = func_239(ped);
						func_240(i, 1);
						func_241(i, num4);
						func_243(i, func_242());
					}
				}
			}
		
			if (!func_232(ped))
			{
			}
			else if (!func_231(i))
			{
				num4 = func_239(ped);
				func_240(i, 1);
				func_241(i, num4);
				func_243(i, func_242());
			}
		}
	}

	return;
}

void func_60() // Position - 0x24A1 Hash - 0x5855F82C ^0x5855F82C
{
	int i;
	ePedType type;
	var unk;
	var label;

	for (i = 0; i < 7; i = i + 1)
	{
		if (!func_66(i))
		{
		}
		else
		{
			type = func_158(i);
		
			if (!func_244(type))
			{
			}
			else
			{
				unk = { func_245(i) };
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk))
				{
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&label, func_246(type), 64);
					TEXT_LABEL_ASSIGN_STRING(&unk, HUD::_GET_LABEL_TEXT_2(&label), 64);
				
					if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
					{
					}
					else
					{
						func_247(i, unk);
						func_248(i);
					}
				}
			}
		}
	}

	return;
}

void func_61(int iParam0) // Position - 0x2526 Hash - 0xD14C6A7D ^0x9C4D4670
{
	Ped ped;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Hash blipHash;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL isPedInWrithe;
	BOOL flag8;
	Ped ped2;
	var entityCoords;
	float num;
	BOOL flag9;
	Hash modifierHash;
	Hash modifierHash2;
	float pedRemainingRevivalTime;
	Hash modifierHash3;
	int num2;
	Hash hash;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		return;

	ped = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	flag = false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		flag = true;

	if (!PED::IS_PED_READY_TO_RENDER(ped))
		return;

	if (func_249(iParam0, 64))
	{
		func_250(iParam0);
		return;
	}

	flag2 = false;

	if (!MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_25) && !MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_26))
		if (!(MAP::GET_BLIP_FROM_ENTITY(ped) == 0))
			flag2 = true;

	if (flag2)
		return;

	flag3 = func_121(41);

	if (flag)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_25))
			MAP::REMOVE_BLIP(&(Global_1902887[iParam0 /*43*/].f_25));
	
		if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && flag3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_26))
			{
				Global_1902887[iParam0 /*43*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), ped);
				MAP::SET_BLIP_SPRITE(Global_1902887[iParam0 /*43*/].f_26, joaat("blip_saddle"), true);
				func_251(&(Global_1902887[iParam0 /*43*/].f_26));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1902887[iParam0 /*43*/].f_26));
		}
	
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1902887[iParam0 /*43*/].f_26));
	}

	flag4 = false;

	if (PED::IS_PED_ON_MOUNT(Global_33))
		if (Global_1940199.f_34 == ped)
			flag4 = true;

	if (MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_25) && flag4)
		func_250(iParam0);

	if (flag4)
		return;

	if (Global_38.f_289.f_1[iParam0 /*460*/].f_14 == 2)
		return;

	flag5 = false;

	if (iParam0 == 0)
	{
		blipHash = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		blipHash = joaat("BLIP_STYLE_TEMPORARY_HORSE");
		flag5 = true;
	}
	else
	{
		return;
	}

	if (flag5)
	{
		flag6 = false;
	
		if (func_103(1) < 1)
			flag6 = true;
	
		if (flag6)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_25))
				MAP::REMOVE_BLIP(&(Global_1902887[iParam0 /*43*/].f_25));
		
			return;
		}
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_25))
	{
		Global_1902887[iParam0 /*43*/].f_25 = MAP::BLIP_ADD_FOR_ENTITY(blipHash, ped);
		Global_1902887[iParam0 /*43*/].f_24 = 0;
		func_252(&(Global_1902887[iParam0 /*43*/].f_25), flag5);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_25))
		return;

	flag7 = false;

	if (func_249(iParam0, 32))
		flag7 = true;

	isPedInWrithe = TASK::IS_PED_IN_WRITHE(ped);
	flag8 = false;
	ped2 = func_138(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (!ENTITY::IS_ENTITY_DEAD(ped2))
			if (PED::GET_MOUNT(ped2) == ped)
				flag8 = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	num = func_80(entityCoords, Global_34);
	flag9 = false;

	if (num > func_79(iParam0))
		flag9 = true;

	modifierHash = 0;
	modifierHash2 = 0;

	if (flag7)
	{
		if (Global_1902887[iParam0 /*43*/].f_24 != 3)
		{
			modifierHash = joaat("BLIP_MODIFIER_OBJECTIVE");
			Global_1902887[iParam0 /*43*/].f_24 = 3;
		}
	}
	else if (isPedInWrithe)
	{
		pedRemainingRevivalTime = PED::_GET_PED_REMAINING_REVIVAL_TIME(ped, true);
	
		if (flag9)
		{
			if (pedRemainingRevivalTime < 0.25f)
			{
				if (Global_1902887[iParam0 /*43*/].f_24 != 9)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1902887[iParam0 /*43*/].f_24 = 9;
				}
			}
			else if (pedRemainingRevivalTime < 0.5f)
			{
				if (Global_1902887[iParam0 /*43*/].f_24 != 10)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1902887[iParam0 /*43*/].f_24 = 10;
				}
			}
			else if (pedRemainingRevivalTime < 0.75f)
			{
				if (Global_1902887[iParam0 /*43*/].f_24 != 11)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1902887[iParam0 /*43*/].f_24 = 11;
				}
			}
			else if (pedRemainingRevivalTime <= 1f)
			{
				if (Global_1902887[iParam0 /*43*/].f_24 != 12)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1902887[iParam0 /*43*/].f_24 = 12;
				}
			}
		}
		else if (pedRemainingRevivalTime < 0.25f)
		{
			if (Global_1902887[iParam0 /*43*/].f_24 != 5)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1902887[iParam0 /*43*/].f_24 = 5;
			}
		}
		else if (pedRemainingRevivalTime < 0.5f)
		{
			if (Global_1902887[iParam0 /*43*/].f_24 != 6)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1902887[iParam0 /*43*/].f_24 = 6;
			}
		}
		else if (pedRemainingRevivalTime < 0.75f)
		{
			if (Global_1902887[iParam0 /*43*/].f_24 != 7)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1902887[iParam0 /*43*/].f_24 = 7;
			}
		}
		else if (pedRemainingRevivalTime <= 1f)
		{
			if (Global_1902887[iParam0 /*43*/].f_24 != 8)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1902887[iParam0 /*43*/].f_24 = 8;
			}
		}
	}
	else if (flag8)
	{
		if (Global_1902887[iParam0 /*43*/].f_24 != 4)
		{
			modifierHash = joaat("BLIP_MODIFIER_HORSE_STOLEN");
			Global_1902887[iParam0 /*43*/].f_24 = 4;
		}
	}
	else if (flag9)
	{
		if (Global_1902887[iParam0 /*43*/].f_24 != 2)
		{
			modifierHash = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
			Global_1902887[iParam0 /*43*/].f_24 = 2;
		}
	}
	else if (!flag9)
	{
		if (Global_1902887[iParam0 /*43*/].f_24 != 1)
		{
			modifierHash = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
			Global_1902887[iParam0 /*43*/].f_24 = 1;
		}
	}

	if (modifierHash != 0)
	{
		func_253(Global_1902887[iParam0 /*43*/].f_25);
		func_254(Global_1902887[iParam0 /*43*/].f_25);
		MAP::BLIP_ADD_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, modifierHash);
	
		if (modifierHash == joaat("BLIP_MODIFIER_OBJECTIVE"))
			MAP::BLIP_ADD_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	}

	if (modifierHash2 != 0)
		MAP::BLIP_ADD_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, modifierHash2);

	if (PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == ped && flag3 && !isPedInWrithe)
		MAP::BLIP_ADD_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	else
		MAP::BLIP_REMOVE_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));

	if (func_255(ped) && !isPedInWrithe)
	{
		if (blipHash == joaat("BLIP_STYLE_PLAYER_HORSE"))
			modifierHash3 = joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED");
		else if (blipHash == joaat("BLIP_STYLE_TEMPORARY_HORSE"))
			modifierHash3 = joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED");
	
		MAP::BLIP_ADD_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, modifierHash3);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
		MAP::BLIP_REMOVE_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	}

	num2 = func_103(iParam0);
	hash = 0;

	if (iParam0 == 0)
	{
		switch (num2)
		{
			case 0:
				hash = joaat("blip_horse_owned_bonding_0");
				break;
		
			case 1:
				hash = joaat("blip_horse_owned_bonding_1");
				break;
		
			case 2:
				hash = joaat("blip_horse_owned_bonding_2");
				break;
		
			case 3:
				hash = joaat("blip_horse_owned_bonding_3");
				break;
		
			case 4:
				hash = joaat("blip_horse_owned_bonding_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (num2)
		{
			case 0:
				hash = joaat("blip_horse_temp_bonding_0");
				break;
		
			case 1:
				hash = joaat("blip_horse_temp_bonding_1");
				break;
		
			case 2:
				hash = joaat("blip_horse_temp_bonding_2");
				break;
		
			case 3:
				hash = joaat("blip_horse_temp_bonding_3");
				break;
		
			case 4:
				hash = joaat("blip_horse_temp_bonding_4");
				break;
		}
	}

	if (hash == 0)
	{
		MAP::_0x44813684F72B563C(ped, Global_1902887[iParam0 /*43*/].f_25);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(ped, Global_1902887[iParam0 /*43*/].f_25);
		MAP::_0x7563CBCA99253D1A(ped, hash);
	}

	return;
}

void func_62() // Position - 0x2C9C Hash - 0x7B1D3B73 ^0x1A76C8B8
{
	Entity entity;
	BOOL flag;

	entity = Global_1902887.f_379;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1902887.f_379.f_1))
			MAP::REMOVE_BLIP(&(Global_1902887.f_379.f_1));
	
		return;
	}

	if (Global_1940199.f_6)
		return;

	if (PED::IS_PED_INJURED(Global_33))
		return;

	flag = func_163(Global_33, entity);

	if (flag)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1902887.f_379.f_1))
			MAP::REMOVE_BLIP(&(Global_1902887.f_379.f_1));
	}
	else if (func_164() == 3)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1902887.f_379.f_1))
			MAP::REMOVE_BLIP(&(Global_1902887.f_379.f_1));
	}
	else if (!MAP::DOES_BLIP_EXIST(Global_1902887.f_379.f_1))
	{
		Global_1902887.f_379.f_1 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), entity);
		func_251(&(Global_1902887.f_379.f_1));
	}

	return;
}

void func_63() // Position - 0x2D7A Hash - 0xE51126F9 ^0xE51126F9
{
	BOOL flag;
	int num;
	int num2;

	func_256(Global_1902887.f_418, Global_1902887.f_419);
	flag = false;
	num = Global_1902887.f_419;
	num = num + 1;

	if (num >= 2)
	{
		num = 0;
		flag = true;
	}

	Global_1902887.f_419 = num;

	if (flag)
	{
		num2 = Global_1902887.f_418;
		num2 = num2 + 1;
	
		if (num2 > 5)
			num2 = 0;
	
		Global_1902887.f_418 = num2;
	}

	return;
}

void func_64() // Position - 0x2DE1 Hash - 0xD353F5FF ^0xD353F5FF
{
	BOOL flag;
	int num;
	int num2;

	func_257(Global_1902887.f_420, Global_1902887.f_421);
	flag = false;
	num = Global_1902887.f_421;
	num = num + 1;

	if (num >= 3)
	{
		num = 0;
		flag = true;
	}

	Global_1902887.f_421 = num;

	if (flag)
	{
		num2 = Global_1902887.f_420;
		num2 = num2 + 1;
	
		if (num2 > 5)
			num2 = 0;
	
		Global_1902887.f_420 = num2;
	}

	return;
}

void func_65() // Position - 0x2E48 Hash - 0x3FF6A438 ^0xA30089F8
{
	int num;

	if (PED::IS_PED_INJURED(Global_33))
		return;

	if (Global_13)
		return;

	if (func_31())
		return;

	switch (Global_1902887.f_303.f_1)
	{
		case 0:
			func_258(0);
			break;
	
		case 1:
			func_258(1);
			break;
	
		case 2:
			func_258(6);
			break;
	}

	num = Global_1902887.f_303.f_1;
	num = num + 1;

	if (num >= 3)
		num = 0;

	Global_1902887.f_303.f_1 = num;
	return;
}

BOOL func_66(int iParam0) // Position - 0x2ECE Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_77(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1902887[iParam0 /*43*/]))
		return true;

	return false;
}

BOOL func_67(int iParam0) // Position - 0x2F06 Hash - 0x79966B74 ^0xA532C902
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1902887[iParam0 /*43*/].f_2;
}

void func_68(int iParam0) // Position - 0x2F34 Hash - 0xB0910AA9 ^0xD61D2BCE
{
	Ped ped;
	Hash entityModel;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_66(iParam0))
		return;

	ped = func_78(iParam0);
	func_259(iParam0);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);

	entityModel = ENTITY::GET_ENTITY_MODEL(ped);

	if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
		if (!func_159(entityModel))
			PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	PED::DELETE_PED(&ped);
	func_260(iParam0, 0);
	func_136(iParam0);
	return;
}

Hash func_69() // Position - 0x2FB8 Hash - 0x7C303F17 ^0x62235659
{
	int num;

	num = joaat("p_cs_saddlebundle01x");
	return num;
}

struct<4> func_70() // Position - 0x2FC9 Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_261(false) };
	return func_262(856287005, unk, -218846335, false);
}

BOOL func_71(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x2FED Hash - 0xB7A16C08 ^0x95A2653
{
	int i;
	var data;
	Hash outBundle;
	var unk5;
	int bundleItemCount;
	var unk9;

	if (iParam0 == 0)
		return false;

	data = 1;
	bundleItemCount = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &data);
	unk9 = { uParam1 };

	for (i = 0; i < bundleItemCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &data, i, &outBundle))
		{
			if (func_263(outBundle, 0))
			{
				unk9.f_4 = outBundle.f_1;
			
				if (func_264(outBundle, uParam1, unk9.f_4, false, true, false) > 0)
				{
				}
				else
				{
					func_265(&unk5);
				
					if (func_266(outBundle, &unk5, &unk9, 1, 752097756, false))
						if (bParam5)
							func_267(unk5, 1, false);
				}
			}
		}
	}

	return true;
}

BOOL func_72() // Position - 0x3090 Hash - 0x11DC3931 ^0xA685465E
{
	return DLC::IS_DLC_PRESENT(joaat("dlc_ultimateedition"));
}

BOOL func_73() // Position - 0x30A1 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

int func_74(int iParam0) // Position - 0x30B2 Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_14;
}

int func_75(int iParam0) // Position - 0x30E5 Hash - 0x8E7120F ^0x8E7120F
{
	int num;
	Hash model;
	int i;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	num = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (i == -1)
		{
		}
		else if (i == 3)
		{
		}
		else
		{
			model = Global_38.f_289.f_1[iParam0 /*460*/].f_15[i /*96*/];
		
			if (model == 0)
			{
			}
			else if (!STREAMING::IS_MODEL_VALID(model))
			{
			}
			else if (!STREAMING::IS_MODEL_A_PED(model))
			{
			}
			else
			{
				num = num + 1;
			}
		}
	}

	return num;
}

void func_76(int iParam0) // Position - 0x3170 Hash - 0x399E7ADF ^0xECC5619B
{
	Player playerIndex;
	Ped horse;
	BOOL flag;
	var unk;
	float num;
	ePedType model;
	float writhingDuration1;
	BOOL flag2;
	int num2;
	int num3;
	var unk4;
	var unk7;
	int num4;
	Hash hash;

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_249(iParam0, 1))
		return;

	if (func_268(iParam0))
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);
	horse = func_78(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(horse))
		flag = true;
	else
		flag = false;

	if (flag)
		if (ENTITY::IS_ENTITY_DEAD(horse) || PED::IS_PED_INJURED(horse))
			return;

	unk = { func_269(iParam0) };
	num = func_270(iParam0);

	if (_IS_NULL_VECTOR(unk))
		return;

	if (!flag)
	{
		func_271(iParam0);
	
		if (!func_272())
			return;
	
		if (!func_273(iParam0))
			return;
	
		model = func_158(iParam0);
		horse = func_274(model, unk, num, false, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(horse))
			return;
	
		func_260(iParam0, horse);
		func_275(horse);
		func_276(horse, iParam0);
		func_248(iParam0);
		PED::_EQUIP_META_PED_OUTFIT_PRESET(horse, 0, false);
		func_277(iParam0);
		func_278(iParam0);
		func_279(iParam0);
	
		if (iParam0 == 0)
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse);
		else if (iParam0 == 1)
			PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse);
	
		if (func_86(iParam0))
		{
			writhingDuration1 = func_280(iParam0);
			PED::_SET_PED_WRITHING_DURATION(horse, writhingDuration1, writhingDuration1, 0);
			TASK::TASK_ANIMAL_WRITHE(horse, 0, 1);
		}
	
		func_153(iParam0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
	}

	if (!PED::IS_PED_READY_TO_RENDER(horse))
		return;

	flag2 = false;
	num2 = func_154();

	if (iParam0 == num2)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(playerIndex, horse);
		flag2 = true;
	}

	num3 = func_281(iParam0);
	func_282(horse, num3);
	unk4 = { func_283(iParam0) };

	if (flag2)
		unk7 = { func_284() };
	else
		func_285(&unk7);

	num4 = func_286(horse, 2);
	hash = func_287(num4);
	func_288(iParam0, hash);

	if (!flag2 && func_289(iParam0))
		func_290(horse, false);

	func_291(horse, &unk4, &unk7, hash, true);
	func_250(iParam0);
	func_61(iParam0);
	func_292(iParam0);
	func_293(iParam0);
	return;
}

int func_77(int iParam0) // Position - 0x3389 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

Ped func_78(int iParam0) // Position - 0x33A2 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

float func_79(int iParam0) // Position - 0x33CE Hash - 0x9BB7FBA3 ^0xA973C68A
{
	ePedType model;
	int num;
	int defaultMaxAttributeRank;
	float num2;
	float any;
	int num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_158(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	num = func_103(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num2 = TASK::_0xEB67D4E056C85A81(num);
	any = TASK::_0x78D8C1D4EB80C588(num);

	if (num >= defaultMaxAttributeRank)
		return num2;

	num3 = func_103(iParam0) + 1;
	num4 = func_294(iParam0);
	num5 = BUILTIN::TO_FLOAT(func_295(model, num));
	num6 = BUILTIN::TO_FLOAT(func_295(model, num3));
	num7 = num4 - num5;
	num8 = num6 - num5;
	num9 = num7 / num8;
	num10 = func_296(num2, any, num9);
	return num10;
}

float func_80(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x3486 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_81(int iParam0) // Position - 0x34A4 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1902887.f_302 && iParam0 != false;
}

BOOL func_82() // Position - 0x34B8 Hash - 0xDDE62128 ^0x7BAF4960
{
	if (!func_3(256))
		return false;

	if (func_297())
		return false;

	if (func_298() && !func_121(31))
		return false;

	if (func_81(2) || func_81(4))
		return false;

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		return false;

	if (Global_1940199.f_6)
		return false;

	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_33))
		return false;

	if (PED::IS_PED_HOGTIED(Global_33))
		return false;

	if (PED::IS_PED_SWIMMING(Global_33))
		return false;

	return true;
}

void func_83(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x3555 Hash - 0x7EFE2FA5 ^0x9037FE6D
{
	BOOL flag;
	BOOL flag2;
	int gameTimer;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	Interior interiorFromEntity;
	float num;
	Ped ped;

	flag = false;

	if (uParam7.f_2)
		if (func_103(0) >= 1)
			flag = true;

	flag2 = false;

	if (uParam19.f_2)
		if (func_103(1) >= 1)
			flag2 = true;

	gameTimer = MISC::GET_GAME_TIMER();

	switch (func_299())
	{
		case 0:
			func_14(1);
			[[fallthrough]];
	
		case 1:
			func_300(0);
			func_301(-72209530);
			func_302(0, 0);
			func_302(1, 0);
			func_303(1);
			func_14(2);
			[[fallthrough]];
	
		case 2:
			if (!func_81(1))
				return;
		
			func_14(3);
			[[fallthrough]];
	
		case 3:
			func_304(gameTimer);
			func_303(1);
			func_14(4);
			[[fallthrough]];
	
		case 4:
			flag3 = false;
			flag4 = true;
			flag5 = 1;
		
			if (func_305() == 8)
			{
				if (!flag3)
				{
					if (!func_306())
						func_228(12, true);
				
					flag3 = true;
				}
			
				flag4 = false;
				flag5 = 0;
			}
		
			if (func_307(5))
			{
				if (func_74(0) == 0 && func_74(1) == 0 || !flag2)
				{
					if (!flag3)
					{
						if (!func_306())
							func_308();
					
						flag3 = true;
					}
				
					flag4 = false;
					flag5 = 0;
				}
			}
		
			if (func_74(0) == 0 && func_74(1) == 0 || !flag2 && func_74(5) == 0)
			{
				if (!flag3)
				{
					if (!func_306())
						func_228(11, true);
				
					flag3 = true;
				}
			
				flag4 = false;
				flag5 = 0;
			}
		
			if (func_74(0) == 1 || func_74(1) == 1 && flag2)
			{
				interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_33);
			
				if (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity))
				{
					if (!flag3)
					{
						if (func_309(interiorFromEntity))
							if (!func_306())
								func_228(14, true);
						else if (func_310(interiorFromEntity))
							if (!func_306())
								func_228(15, true);
						else if (!func_306())
							func_228(13, true);
					
						if (func_66(0))
						{
							num = func_79(0);
							ped = func_78(0);
						
							if (!func_311(0) && !func_172(0))
								if (func_140(Global_33, ped, true, true) <= num)
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(ped, Global_33, 0, -1082130432, -1082130432, -1082130432);
						}
					
						if (func_66(1))
						{
							num = func_79(1);
							ped = func_78(1);
						
							if (!func_311(1) && !func_172(1))
								if (func_140(Global_33, ped, true, true) <= num)
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(ped, Global_33, 0, -1082130432, -1082130432, -1082130432);
						}
					
						flag3 = true;
					}
				
					flag4 = false;
					flag5 = 0;
				}
			}
		
			if (func_81(16) || !func_121(31))
			{
				if (!flag3)
				{
					if (!func_306())
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1902887.f_364.f_12)))
							func_312(&(Global_1902887.f_364.f_12), 10000, 0, 0, 0, true);
				
					flag3 = true;
				}
			
				flag4 = false;
				flag5 = 0;
			}
		
			if (uParam7.f_2)
			{
				if (!flag)
				{
					if (!flag3)
					{
						if (!func_306())
							func_228(7, true);
					
						flag3 = true;
					}
				
					flag4 = false;
				}
			}
		
			if (uParam19.f_2)
			{
				if (!flag2)
				{
					if (!uParam7.f_2)
					{
						if (!flag3)
						{
							if (!func_306())
								func_228(7, true);
						
							flag3 = true;
						}
					}
				
					flag5 = 0;
				}
			}
		
			if (uParam7.f_2)
			{
				if (func_142(0))
				{
					if (!flag3)
					{
						if (!func_306())
							func_228(16, true);
					
						flag3 = true;
					}
				}
			}
		
			if (uParam19.f_2 && flag2)
			{
				if (func_142(1))
				{
					if (!uParam7.f_2)
					{
						if (!flag3)
						{
							if (!func_306())
								func_228(16, true);
						
							flag3 = true;
						}
					}
				}
			}
		
			PLAYER::_0x9044835BE9D9DBFE(anParam0, flag4 || flag5);
		
			if (!flag4)
			{
				if (uParam7.f_2)
				{
					func_61(0);
					func_313(0);
				}
			}
		
			if (!flag5)
			{
				if (uParam19.f_2)
				{
					func_61(1);
					func_313(1);
				}
			}
		
			if (!flag4 && !flag5)
			{
				func_14(1);
				return;
			}
		
			func_14(5);
			[[fallthrough]];
	
		case 5:
			func_314(1);
		
			if (func_315(0) == 6 && func_315(1) == 6)
				func_14(1);
			break;
	}

	return;
}

int func_84() // Position - 0x3970 Hash - 0x251C29A6 ^0x251C29A6
{
	if (func_81(2) || func_81(4))
	{
		func_303(2);
		func_303(4);
		return 1;
	}

	return 0;
}

BOOL func_85() // Position - 0x399A Hash - 0x463DA432 ^0x857E19AF
{
	return func_316(Global_1940199, 8192);
}

BOOL func_86(int iParam0) // Position - 0x39AD Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_444;
}

void func_87(int iParam0, var uParam1) // Position - 0x39E1 Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_444 = uParam1;
	return;
}

void func_88(int iParam0) // Position - 0x3A15 Hash - 0x44423EC0 ^0x938A4624
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_41 = 0;
	return;
}

int func_89(int iParam0) // Position - 0x3A42 Hash - 0x8CE2C9DC ^0x5B760829
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_1902887[iParam0 /*43*/].f_40;
}

void func_90(int iParam0, int iParam1) // Position - 0x3A70 Hash - 0xDE428423 ^0x76B6A1A9
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_40 = iParam1;
	return;
}

void func_91(int iParam0, float fParam1) // Position - 0x3A9E Hash - 0x378678AB ^0xB2BC5FB8
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_444.f_1 = fParam1;
	return;
}

void func_92(int iParam0) // Position - 0x3AD4 Hash - 0x67BEC3F8 ^0xAA9A2B5E
{
	Player player;
	BOOL flag;

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);

	if (func_147(56))
		func_148(56);

	if (func_149(56))
		func_150(56);

	if (func_147(57))
		func_148(57);

	if (func_149(57))
		func_150(57);

	flag = false;

	if (iParam0 == 0)
		flag = true;
	else if (iParam0 == 1 && func_74(0) == 0 && func_74(5) == 0)
		flag = true;

	if (flag)
		func_141(iParam0, 1);
	else
		func_104(iParam0, false);

	return;
}

void func_93(int iParam0) // Position - 0x3B80 Hash - 0xAAC317E0 ^0x1EC435C2
{
	BOOL flag;
	Ped ped;
	Hash entityModel;

	if (!func_268(iParam0))
		return;

	flag = false;

	if (func_66(iParam0))
		flag = true;

	if (flag)
	{
		ped = func_78(iParam0);
	
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	
		entityModel = ENTITY::GET_ENTITY_MODEL(ped);
	
		if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
			if (!func_159(entityModel))
				PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);
	
		if (func_249(iParam0, 4))
		{
			func_68(iParam0);
		}
		else if (func_249(iParam0, 8))
		{
			PED::SET_PED_KEEP_TASK(ped, true);
			TASK::TASK_SMART_FLEE_PED(ped, Global_33, 500f, -1, 0, 1f, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);
		}
		else if (func_249(iParam0, 2))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);
		}
	}

	if (func_249(iParam0, 16))
		func_105(iParam0);

	func_260(iParam0, 0);
	func_136(iParam0);
	func_293(iParam0);
	func_317(iParam0, 2);
	func_317(iParam0, 4);
	func_317(iParam0, 8);
	func_317(iParam0, 16);
	return;
}

void func_94() // Position - 0x3C77 Hash - 0xE265E55B ^0x6903F649
{
	Global_1902887.f_392 = 0;
	Global_1902887.f_392.f_1 = { 0f, 0f, 0f };
	Global_1902887.f_392.f_4 = 0f;
	Global_1902887.f_392.f_5 = 0;
	Global_1902887.f_392.f_6 = 0;
	return;
}

BOOL func_95(Ped pedParam0) // Position - 0x3CB3 Hash - 0x4801778A ^0xC1FB25EE
{
	Hash entityModel;
	BOOL flag;
	var entityCoords;
	int gameTimer;
	int num;
	var unk3;
	Player player;

	if (func_81(1024))
		return false;

	if (!func_121(42))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	if (func_318(pedParam0))
		return false;

	if (func_319(pedParam0))
		return false;

	if (func_320(pedParam0))
		return false;

	if (func_321(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (func_322(entityModel))
		return false;

	if (func_323(entityModel))
		return false;

	flag = false;

	if (PED::IS_PED_ON_MOUNT(Global_33))
		if (PED::GET_MOUNT(Global_33) == pedParam0)
			flag = true;
		else
			return false;

	if (flag)
	{
		if (pedParam0 != func_324())
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
			func_94();
			func_325(pedParam0);
			func_98(entityCoords);
		}
	
		gameTimer = MISC::GET_GAME_TIMER();
		num = func_326();
	
		if (num == 0)
		{
			func_327(gameTimer);
			return false;
		}
	
		if (num + 2000 > gameTimer)
			return false;
	}
	else
	{
		func_327(0);
	}

	if (func_328(pedParam0, &unk3, 100f))
		return false;

	player = PLAYER::PLAYER_ID();

	if (func_329(player, true, false, true))
		return false;

	LAW::_ARE_WITNESSES_PENDING(player);

	if (LAW::ARE_WITNESSES_ACTIVE(player))
		return false;

	if (LAW::_ARE_INVESTIGATORS_ACTIVE(player, true, 0))
		return false;

	if (!func_330(pedParam0))
		return false;

	return true;
}

BOOL func_96() // Position - 0x3E41 Hash - 0x8190E5D8 ^0xF593603
{
	return Global_1902887.f_392.f_5;
}

Vector3 func_97() // Position - 0x3E52 Hash - 0xAB07A84 ^0xD79DB24C
{
	return Global_1902887.f_392.f_1;
}

void func_98(var uParam0, var uParam1, var uParam2) // Position - 0x3E65 Hash - 0x2E53663A ^0x74D41E9F
{
	Global_1902887.f_392.f_1 = { uParam0 };
	return;
}

float func_99() // Position - 0x3E7C Hash - 0x8190E5D8 ^0x856627E0
{
	return Global_1902887.f_392.f_4;
}

void func_100(float fParam0) // Position - 0x3E8D Hash - 0xC421D95B ^0x2F16990E
{
	Global_1902887.f_392.f_4 = fParam0;
	return;
}

void func_101(int iParam0) // Position - 0x3EA0 Hash - 0xC421D95B ^0xE7B505B3
{
	Global_1902887.f_392.f_5 = iParam0;
	return;
}

int func_102(Ped pedParam0) // Position - 0x3EB3 Hash - 0xBCC55559 ^0xBCC55559
{
	BOOL flag;

	if (func_331(pedParam0) > 0)
	{
		if (!func_332(pedParam0))
			return 0;
	
		flag = false;
	
		if (func_318(pedParam0))
			if (func_333(pedParam0) == 6)
				flag = true;
	
		if (flag)
			func_334(6, 1);
		else
			func_106(pedParam0);
	
		func_94();
		func_335();
		return 1;
	}
	else
	{
		if (!func_95(pedParam0))
			return 0;
	
		func_336(pedParam0, false);
		func_94();
		func_335();
		return 1;
	}

	return 0;
}

int func_103(int iParam0) // Position - 0x3F31 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_398;
}

void func_104(int iParam0, BOOL bParam1) // Position - 0x3F65 Hash - 0x76CF898E ^0x452E6C0C
{
	int idOfThisThread;
	Ped horse;
	BOOL flag;
	Player player;
	Hash entityModel;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_337(iParam0);

	if (func_67(iParam0))
	{
		idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	
		if (func_134(iParam0) != idOfThisThread)
			return;
	}

	if (!func_66(iParam0))
		return;

	horse = func_78(iParam0);
	flag = false;

	if (!ENTITY::IS_ENTITY_DEAD(horse))
		flag = true;

	func_250(iParam0);
	func_338(horse);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(horse))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(horse, true, true);

	if (func_255(horse))
		PHYSICS::_UNHITCH_HORSE(horse);

	if (flag)
	{
		TASK::TASK_SMART_FLEE_PED(horse, Global_33, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(horse, true);
	}

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);

	if (iParam0 == 0)
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(player, 0);
	else if (iParam0 == 1)
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(player, 0);

	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(horse, true);

	if (flag)
	{
		if (bParam1)
			FLOCK::_SET_ANIMAL_IS_WILD(horse, true);
	
		PED::_0x329772C47DBB2FBC(horse);
	}

	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&horse);
	entityModel = ENTITY::GET_ENTITY_MODEL(horse);

	if (STREAMING::IS_MODEL_VALID(entityModel))
		if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
			if (!func_159(entityModel))
				PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	func_105(iParam0);
	return;
}

void func_105(int iParam0) // Position - 0x409E Hash - 0x62B24E70 ^0xD98C392A
{
	var unk;
	int i;
	int j;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_38.f_289.f_1[iParam0 /*460*/], "", 64);
	Global_38.f_289.f_1[iParam0 /*460*/].f_8 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_9 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_10 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_11 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_12 = -1;
	Global_38.f_289.f_1[iParam0 /*460*/].f_13 = -15;
	Global_38.f_289.f_1[iParam0 /*460*/].f_14 = 0;
	func_339(&unk);
	func_340(iParam0, unk);
	func_341(&(Global_38.f_289.f_1[iParam0 /*460*/].f_15));
	func_342(&(Global_38.f_289.f_1[iParam0 /*460*/].f_382));
	func_343(&(Global_38.f_289.f_1[iParam0 /*460*/].f_398));

	for (i = 0; i < 2; i = i + 1)
	{
		func_344(i, &Global_38.f_289.f_1[iParam0 /*460*/].f_422[i /*4*/]);
	}

	for (j = 0; j < 3; j = j + 1)
	{
		func_345(j, &Global_38.f_289.f_1[iParam0 /*460*/].f_431[j /*4*/]);
	}

	func_346(&(Global_38.f_289.f_1[iParam0 /*460*/].f_444));
	func_347(&(Global_38.f_289.f_1[iParam0 /*460*/].f_446));
	func_348(&(Global_38.f_289.f_1[iParam0 /*460*/].f_449));
	Global_38.f_289.f_1[iParam0 /*460*/].f_451 = { 0f, 0f, 0f };
	Global_38.f_289.f_1[iParam0 /*460*/].f_454 = 0f;
	Global_38.f_289.f_1[iParam0 /*460*/].f_455 = -1;
	Global_38.f_289.f_1[iParam0 /*460*/].f_456 = -1;
	Global_38.f_289.f_1[iParam0 /*460*/].f_457 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_458 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_459 = 0;
	Global_1902887[iParam0 /*43*/] = 0;
	Global_1902887[iParam0 /*43*/].f_1 = 0;
	Global_1902887[iParam0 /*43*/].f_2 = 0;
	Global_1902887[iParam0 /*43*/].f_3 = 0;
	Global_1902887[iParam0 /*43*/].f_19 = { 0f, 0f, 0f };
	Global_1902887[iParam0 /*43*/].f_22 = 0f;
	Global_1902887[iParam0 /*43*/].f_23 = 0;
	Global_1902887[iParam0 /*43*/].f_24 = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_25))
		MAP::REMOVE_BLIP(&(Global_1902887[iParam0 /*43*/].f_25));

	Global_1902887[iParam0 /*43*/].f_25 = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_26))
		MAP::REMOVE_BLIP(&(Global_1902887[iParam0 /*43*/].f_26));

	Global_1902887[iParam0 /*43*/].f_26 = 0;
	Global_1902887[iParam0 /*43*/].f_27 = { 0f, 0f, 0f };
	Global_1902887[iParam0 /*43*/].f_30 = { 0f, 0f, 0f };
	Global_1902887[iParam0 /*43*/].f_33 = 0f;
	Global_1902887[iParam0 /*43*/].f_34 = 0;
	Global_1902887[iParam0 /*43*/].f_35 = 0;
	Global_1902887[iParam0 /*43*/].f_36 = 0;
	Global_1902887[iParam0 /*43*/].f_37 = { 0f, 0f, 0f };
	Global_1902887[iParam0 /*43*/].f_40 = 0;
	Global_1902887[iParam0 /*43*/].f_41 = 0;
	Global_1902887[iParam0 /*43*/].f_42 = -1;
	return;
}

void func_106(Ped pedParam0) // Position - 0x43C5 Hash - 0xDE0DF2E5 ^0xBA18C4AD
{
	int num;
	BOOL flag;

	if (func_2() == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (func_318(pedParam0))
	{
		num = func_333(pedParam0);
		func_250(num);
	}

	func_250(1);

	if (func_66(1))
		func_104(1, false);

	func_105(1);
	func_349(pedParam0, 1, 0);
	func_153(1, 1);

	if (func_103(1) == 0)
		func_350(1, 1);

	flag = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(PLAYER::PLAYER_ID(), pedParam0);
	func_335();
	return;
}

BOOL func_107(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, BOOL bParam8) // Position - 0x4459 Hash - 0xDC98E36F ^0x665AD3E8
{
	BOOL flag;
	BOOL flag2;
	Ped activeAnimalOwner;

	if (!uParam0.f_2)
		return false;

	if (!uParam0.f_3)
		return false;

	if (uParam0.f_4)
		return false;

	if (bParam8)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_33))
			return false;
	
		*uParam7 = PED::GET_MOUNT(Global_33);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam7))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(*uParam7))
		return false;

	if (PED::IS_PED_INJURED(*uParam7))
		return false;

	if (TASK::IS_PED_IN_WRITHE(*uParam7))
		return false;

	if (func_318(*uParam7))
		return false;

	if (func_319(*uParam7))
		return false;

	if (func_351(*uParam7))
		return false;

	if (func_352(*uParam7))
		return false;

	if (func_321(*uParam7))
		return false;

	if (func_320(*uParam7))
		return false;

	if (func_353(*uParam7))
		return false;

	flag = func_354();
	flag2 = 0;
	activeAnimalOwner = PED::_GET_ACTIVE_ANIMAL_OWNER(*uParam7);

	if (ENTITY::DOES_ENTITY_EXIST(activeAnimalOwner))
		if (!ENTITY::IS_ENTITY_DEAD(activeAnimalOwner))
			flag2 = 1;

	if (flag || flag2)
	{
	}
	else
	{
		return false;
	}

	return true;
}

void func_108() // Position - 0x457A Hash - 0x971B1003 ^0x502793D
{
	Global_1902887.f_402 = 0;
	Global_1902887.f_402.f_1 = 0;
	return;
}

void func_109(Ped pedParam0) // Position - 0x4594 Hash - 0x1258C980 ^0xAC244FA
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (func_321(pedParam0))
		return;

	return;
}

int func_110() // Position - 0x45CD Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1904379;
}

void func_111() // Position - 0x45D9 Hash - 0xD1CE7E62 ^0x7575A31C
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_355(false, 0);
	Global_1940252.f_6 = 1;
	return;
}

void func_112() // Position - 0x45F9 Hash - 0xFDEF8628 ^0xFDEF8628
{
	func_356(false);
	func_357(1);
	return;
}

void func_113() // Position - 0x460B Hash - 0x9A7372DC ^0xEAABD221
{
	Ped ped;
	var unk;

	if (!func_358())
		return;

	ped = func_359();
	unk = func_360();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		func_357(7);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(ped))
	{
		func_357(7);
		return;
	}

	if (PED::IS_PED_INJURED(ped))
	{
		func_357(7);
		return;
	}

	if (TASK::IS_PED_IN_WRITHE(ped))
	{
		func_357(7);
		return;
	}

	if (!func_361(unk))
	{
		func_357(7);
		return;
	}

	func_357(2);
	return;
}

void func_114() // Position - 0x4686 Hash - 0x26D4CDB5 ^0x6515716C
{
	Ped mount;
	Ped riderOfMount;

	mount = func_359();

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
	{
		func_357(7);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(mount))
	{
		func_357(7);
		return;
	}

	if (PED::IS_PED_INJURED(mount))
	{
		func_357(7);
		return;
	}

	if (TASK::IS_PED_IN_WRITHE(mount))
	{
		func_357(7);
		return;
	}

	riderOfMount = PED::_GET_RIDER_OF_MOUNT(mount, false);

	if (riderOfMount != 0)
	{
		if (riderOfMount != Global_33)
		{
			func_357(7);
			return;
		}
	}

	if (PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(mount) != 0)
	{
		func_357(7);
		return;
	}

	if (!func_362())
	{
		func_357(7);
		return;
	}

	func_357(3);
	return;
}

void func_115() // Position - 0x471F Hash - 0x72A39060 ^0x37450597
{
	Ped ped;
	Hash hash;

	ped = func_359();
	hash = func_360();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		func_357(7);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(ped))
	{
		func_357(7);
		return;
	}

	if (PED::IS_PED_INJURED(ped))
	{
		func_357(7);
		return;
	}

	if (TASK::IS_PED_IN_WRITHE(ped))
	{
		func_357(7);
		return;
	}

	if (func_363(ped, hash))
	{
		func_364(MISC::GET_GAME_TIMER());
		func_357(4);
	}

	return;
}

void func_116() // Position - 0x4790 Hash - 0x72A39060 ^0x37450597
{
	Ped ped;
	Hash hash;
	BOOL flag;
	int gameTimer;
	int num;

	ped = func_359();
	hash = func_360();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		func_357(7);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(ped))
	{
		func_357(7);
		return;
	}

	if (PED::IS_PED_INJURED(ped))
	{
		func_357(7);
		return;
	}

	if (TASK::IS_PED_IN_WRITHE(ped))
	{
		func_357(7);
		return;
	}

	flag = false;

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		flag = true;
	else if (func_365() + 500 < MISC::GET_GAME_TIMER())
		flag = true;

	if (flag)
	{
		gameTimer = MISC::GET_GAME_TIMER();
		func_364(gameTimer);
		func_366(gameTimer);
		func_357(5);
	
		if (hash == joaat("kit_horse_brush"))
		{
			func_367(ped);
			num = func_286(ped, 0);
			func_368(num);
			func_369(0);
		}
		else
		{
			func_367(0);
			func_368(0);
			func_369(0);
		}
	}

	return;
}

void func_117() // Position - 0x485F Hash - 0x72A39060 ^0x37450597
{
	Ped ped;
	Hash hash;
	BOOL flag;

	ped = func_359();
	hash = func_360();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		func_357(7);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(ped))
	{
		func_357(7);
		return;
	}

	if (PED::IS_PED_INJURED(ped))
	{
		func_357(7);
		return;
	}

	if (TASK::IS_PED_IN_WRITHE(ped))
	{
		func_357(7);
		return;
	}

	flag = false;

	if (!PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		if (func_365() + 500 < MISC::GET_GAME_TIMER())
			flag = true;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("INTERACT")))
	{
		func_370(1);
		flag = true;
	}

	if (flag)
	{
		if (func_371())
		{
			if (func_372(hash, 1147021565))
				func_373(hash, 1, false, -1387038764);
		
			func_374(ped, hash);
		}
		else
		{
			func_357(7);
			return;
		}
	
		func_364(MISC::GET_GAME_TIMER());
		func_357(6);
	}

	return;
}

void func_118() // Position - 0x4936 Hash - 0x532E420 ^0xDF2EACB3
{
	BOOL flag;

	flag = false;

	if (!PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		if (func_365() + 500 < MISC::GET_GAME_TIMER())
			flag = true;

	if (func_375())
		flag = true;

	if (func_371())
		flag = true;

	if (flag)
		func_357(7);

	return;
}

void func_119() // Position - 0x497B Hash - 0x1309574 ^0x372DC1F1
{
	func_356(false);
	func_357(0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return;
}

void func_120() // Position - 0x4991 Hash - 0xE6BE2E0 ^0x9BCB3A97
{
	Ped horse;
	Player playerIndex;
	Ped playerPed;
	BOOL hasAnimEventFired;
	int gameTimer;
	BOOL flag;
	var unk;
	int num;
	int value;
	int value2;
	float num2;
	float value3;
	int num3;
	BOOL flag2;

	horse = func_376();

	if (!ENTITY::DOES_ENTITY_EXIST(horse))
		return;

	if (ENTITY::IS_ENTITY_DEAD(horse))
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	playerPed = PLAYER::GET_PLAYER_PED(playerIndex);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return;

	if (ENTITY::IS_ENTITY_DEAD(playerPed))
		return;

	hasAnimEventFired = ENTITY::HAS_ANIM_EVENT_FIRED(playerPed, 1120483657);
	gameTimer = MISC::GET_GAME_TIMER();

	if (hasAnimEventFired)
	{
		if (!func_377())
		{
			func_378(gameTimer);
			func_369(1);
		}
	}

	if (!func_377())
		return;

	flag = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(playerIndex) == horse;
	value = func_379();

	if (flag)
	{
		unk = { func_380(false, true, false, -1) };
		!func_381(&unk, 0, true);
		num = func_382(unk, 0);
	}
	else
	{
		num = func_286(horse, 0);
	}

	value2 = gameTimer - func_383();
	value2 = func_384(value2, 0, 3000);
	num2 = BUILTIN::TO_FLOAT(value2) / BUILTIN::TO_FLOAT(3000);
	num2 = func_385(num2, 0f, 1f);
	value3 = func_296(BUILTIN::TO_FLOAT(value), 0f, num2);
	num3 = BUILTIN::FLOOR(value3);
	flag2 = false;

	if (flag)
	{
		if (num > 0)
		{
			func_386(horse, unk, 0, num3);
			flag2 = true;
		}
	}
	else if (num > 0)
	{
		func_387(horse, 0, num3);
		flag2 = true;
	}

	if (flag2)
		PED::_0xE29D8CD66553DBAA(horse);

	if (func_286(horse, 0) == 0)
	{
		func_367(0);
		func_369(0);
		func_378(0);
	}

	return;
}

BOOL func_121(int iParam0) // Position - 0x4AF8 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_388(iParam0))
		return false;

	return func_389(iParam0);
}

void func_122(int iParam0) // Position - 0x4B14 Hash - 0x210748D ^0x425151D2
{
	ePedType type;
	Ped mount;
	float entitySpeed;
	BOOL flag;
	BOOL flag2;
	float num;
	float pedStamina;
	int gameTimer;

	type = func_158(iParam0);

	if (func_103(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(type, 7))
		return;

	mount = func_78(iParam0);
	entitySpeed = ENTITY::GET_ENTITY_SPEED(mount);
	flag = false;

	if (PED::_GET_RIDER_OF_MOUNT(mount, false) != Global_33)
		flag = true;

	flag2 = false;

	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		flag2 = true;

	if (entitySpeed < 0.5f || flag || !flag2)
	{
		Global_1902887.f_303.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1902887.f_303.f_2[iParam0 /*5*/] = -1;
		return;
	}

	if (Global_1902887.f_303.f_2[iParam0 /*5*/].f_2 >= 100f)
	{
		func_390(1, 100f);
		num = Global_1902887.f_303.f_2[iParam0 /*5*/].f_2 - 100f;
		Global_1902887.f_303.f_2[iParam0 /*5*/].f_2 = num;
	}

	pedStamina = PED::_GET_PED_STAMINA(mount);

	if (pedStamina < 1f)
	{
		Global_1902887.f_303.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1902887.f_303.f_2[iParam0 /*5*/] = -1;
		return;
	}

	if (entitySpeed > 0.5f && entitySpeed <= 4f)
		if (Global_1902887.f_303.f_2[iParam0 /*5*/] == -1)
			Global_1902887.f_303.f_2[iParam0 /*5*/] = 0;

	if (entitySpeed > 4f && entitySpeed <= 6f)
		if (Global_1902887.f_303.f_2[iParam0 /*5*/] == -1 || Global_1902887.f_303.f_2[iParam0 /*5*/] == 0)
			Global_1902887.f_303.f_2[iParam0 /*5*/] = 1;

	if (entitySpeed > 6f)
		if (Global_1902887.f_303.f_2[iParam0 /*5*/] == -1 || Global_1902887.f_303.f_2[iParam0 /*5*/] == 0 || Global_1902887.f_303.f_2[iParam0 /*5*/] == 1)
			Global_1902887.f_303.f_2[iParam0 /*5*/] = 2;

	if (entitySpeed > 10f)
		if (Global_1902887.f_303.f_2[iParam0 /*5*/] == -1 || Global_1902887.f_303.f_2[iParam0 /*5*/] == 0 || Global_1902887.f_303.f_2[iParam0 /*5*/] == 1 || Global_1902887.f_303.f_2[iParam0 /*5*/] == 2)
			Global_1902887.f_303.f_2[iParam0 /*5*/] = 3;

	if (Global_1902887.f_303.f_2[iParam0 /*5*/] == -1)
		return;

	gameTimer = MISC::GET_GAME_TIMER();

	if (Global_1902887.f_303.f_2[iParam0 /*5*/].f_1 == -1)
	{
		Global_1902887.f_303.f_2[iParam0 /*5*/].f_1 = gameTimer;
		return;
	}

	if (Global_1902887.f_303.f_2[iParam0 /*5*/].f_1 + 5000 < gameTimer)
	{
		if (Global_1902887.f_303.f_2[iParam0 /*5*/] == 0 || Global_1902887.f_303.f_2[iParam0 /*5*/] == 1)
			func_391(iParam0, 1);
		else if (Global_1902887.f_303.f_2[iParam0 /*5*/] == 2)
			func_391(iParam0, 2);
		else if (Global_1902887.f_303.f_2[iParam0 /*5*/] == 3)
			func_391(iParam0, 3);
	
		Global_1902887.f_303.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1902887.f_303.f_2[iParam0 /*5*/] = -1;
	}

	return;
}

void func_123(int iParam0) // Position - 0x4E2F Hash - 0x5C9D3FA3 ^0xD9826AF3
{
	ePedType type;
	Ped ped;
	float entitySpeed;
	BOOL flag;
	float num;
	int gameTimer;

	type = func_158(iParam0);

	if (func_103(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(type, 7))
		return;

	ped = func_78(iParam0);
	entitySpeed = ENTITY::GET_ENTITY_SPEED(ped);
	flag = false;

	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		flag = true;

	if (!TASK::_IS_PED_LEADING_HORSE(Global_33) || TASK::_GET_LED_HORSE_FROM_PED(Global_33) != ped || entitySpeed < 0.5f || !flag)
	{
		Global_1902887.f_303.f_2[iParam0 /*5*/].f_3 = -1;
		return;
	}

	if (Global_1902887.f_303.f_2[iParam0 /*5*/].f_4 >= 20f)
	{
		func_390(4, 20f);
		num = Global_1902887.f_303.f_2[iParam0 /*5*/].f_4 - 20f;
		Global_1902887.f_303.f_2[iParam0 /*5*/].f_4 = num;
	}

	gameTimer = MISC::GET_GAME_TIMER();

	if (Global_1902887.f_303.f_2[iParam0 /*5*/].f_3 == -1)
	{
		Global_1902887.f_303.f_2[iParam0 /*5*/].f_3 = gameTimer;
		return;
	}

	if (Global_1902887.f_303.f_2[iParam0 /*5*/].f_3 + 5000 < gameTimer)
	{
		func_391(iParam0, 4);
		Global_1902887.f_303.f_2[iParam0 /*5*/].f_3 = -1;
	}

	return;
}

void func_124(int iParam0) // Position - 0x4F5D Hash - 0x783FC7E2 ^0x2D9CF9B6
{
	ePedType type;
	Ped mount;
	BOOL flag;
	Entity lassoTarget;
	BOOL flag2;

	type = func_158(iParam0);

	if (func_103(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(type, 7))
		return;

	mount = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return;

	flag = PED::_GET_RIDER_OF_MOUNT(mount, false) == Global_33;

	if (!flag)
		return;

	lassoTarget = PED::_GET_LASSO_TARGET(Global_33);

	if (!ENTITY::DOES_ENTITY_EXIST(lassoTarget))
		return;

	if (DECORATOR::DECOR_EXIST_ON(lassoTarget, "bHasBeenLassoedFromHorse"))
		return;

	flag2 = func_392(lassoTarget, Global_33);
	flag2;
	DECORATOR::DECOR_SET_BOOL(lassoTarget, "bHasBeenLassoedFromHorse", true);
	return;
}

void func_125(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x5001 Hash - 0x8777DCDE ^0xA3122452
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_451 = { uParam1 };
	Global_38.f_289.f_1[iParam0 /*460*/].f_454 = uParam4;
	return;
}

struct<2> func_126(int iParam0) // Position - 0x504B Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_127(int iParam0, var uParam1) // Position - 0x505F Hash - 0x72C53F65 ^0x72C53F65
{
	return iParam0;
}

BOOL func_128(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x5069 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

int func_129(int iParam0) // Position - 0x5092 Hash - 0x8CE2C9DC ^0x10948E95
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_1902887[iParam0 /*43*/].f_42;
}

void func_130(int iParam0, int iParam1) // Position - 0x50C0 Hash - 0xDE428423 ^0x1F6A94AD
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_42 = iParam1;
	return;
}

BOOL func_131() // Position - 0x50EE Hash - 0x37C122C ^0xFD732E44
{
	if (func_81(8192))
	{
		func_303(8192);
		return true;
	}

	return false;
}

BOOL func_132(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x510C Hash - 0xBA023B92 ^0x16E0B707
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

int func_133(Ped pedParam0, Ped pedParam1) // Position - 0x5165 Hash - 0xC4213021 ^0x1721C122
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1) || PED::IS_PED_INJURED(pedParam1))
		return 0;

	TASK::TASK_GO_TO_WHISTLE(pedParam0, pedParam1, 0);
	FLOCK::_0xFF1E339CE40EAAAF(pedParam0, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 48, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 1);
	return 1;
}

int func_134(int iParam0) // Position - 0x51DC Hash - 0x79966B74 ^0xE90595E1
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/].f_3;
}

void func_135(Ped pedParam0, BOOL bParam1) // Position - 0x520A Hash - 0x81317C0D ^0xF96B5C1C
{
	int num;
	int idOfThisThread;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (!func_318(pedParam0))
		return;

	num = func_333(pedParam0);

	if (num == -1)
		return;

	if (num >= 7)
		return;

	func_393(num);
	func_337(num);
	idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	num2 = func_134(num);

	if (!bParam1)
	{
		if (idOfThisThread != num2)
			return;
	
		if (!func_67(num))
			return;
	}

	func_136(num);
	PED::SET_PED_KEEP_TASK(pedParam0, true);

	if (bParam1 && func_2() == -1)
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, true);

	return;
}

void func_136(int iParam0) // Position - 0x52C4 Hash - 0xC2FEF89F ^0xC1FD7E19
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_2 = 0;
	Global_1902887[iParam0 /*43*/].f_3 = 0;
	return;
}

void func_137(int iParam0) // Position - 0x52FC Hash - 0x44423EC0 ^0x5B6A7531
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_36 = 0;
	return;
}

Ped func_138(int iParam0) // Position - 0x5329 Hash - 0x79966B74 ^0xE032584D
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/].f_36;
}

void func_139(int iParam0, Ped pedParam1) // Position - 0x5357 Hash - 0xDE428423 ^0xC028AD4C
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_36 = pedParam1;
	return;
}

float func_140(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5385 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

void func_141(int iParam0, int iParam1) // Position - 0x53CD Hash - 0x26DA48B4 ^0x3D2711E4
{
	Ped ped;
	Player playerIndex;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped);
	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return;

	func_250(iParam0);
	func_250(5);
	func_349(ped, 5, iParam1);
	func_153(5, 1);

	if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == ped)
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		PED::SET_LOOTING_FLAG(ped, 0, true);
		PED::SET_LOOTING_FLAG(ped, 1, true);
		DECORATOR::DECOR_SET_STRING(ped, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		func_169(5);
		func_166(0);
		func_167(ENTITY::GET_ENTITY_COORDS(ped, true, false));
	}

	if (iParam1 == 2)
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	func_279(iParam0);
	func_394(iParam0);
	func_105(iParam0);
	func_335();
	return;
}

BOOL func_142(int iParam0) // Position - 0x54AD Hash - 0x79966B74 ^0x43683739
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1902887[iParam0 /*43*/].f_34;
}

float func_143(Ped pedParam0) // Position - 0x54DB Hash - 0x95EE5834 ^0x1BABBD84
{
	float pedMotivation;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0f;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0f;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return 0f;

	pedMotivation = PED::_GET_PED_MOTIVATION(pedParam0, 3, 0);
	return pedMotivation;
}

int func_144(int iParam0) // Position - 0x5524 Hash - 0x8CE2C9DC ^0x7A07E97
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_1902887[iParam0 /*43*/].f_35;
}

void func_145(int iParam0, int iParam1) // Position - 0x5552 Hash - 0xDE428423 ^0x8A704B54
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_34 = iParam1;
	return;
}

void func_146(int iParam0, int iParam1) // Position - 0x5580 Hash - 0xDE428423 ^0x580F9D80
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_35 = iParam1;
	return;
}

BOOL func_147(int iParam0) // Position - 0x55AE Hash - 0x854AC499 ^0x589ACDB9
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage != 0)
		return currentMessage == Global_1904402.f_33[iParam0 /*9*/].f_1;

	return false;
}

void func_148(int iParam0) // Position - 0x55D6 Hash - 0xC32B5228 ^0xC32B5228
{
	if (!func_147(iParam0))
		return;

	func_395(true);
	return;
}

BOOL func_149(int iParam0) // Position - 0x55F0 Hash - 0xBDE4FECD ^0x461A2A8
{
	int num;
	int offset;
	int address;

	func_396(iParam0, &num, &offset);
	address = Global_1904402[num];
	return MISC::IS_BIT_SET(address, offset);
}

void func_150(int iParam0) // Position - 0x5614 Hash - 0xEA7E80B4 ^0xC30D3714
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_1904402[num2];
	MISC::CLEAR_BIT(&address, offset);
	Global_1904402[num2] = address;
	return;
}

int func_151(int iParam0) // Position - 0x564A Hash - 0xACA56E21 ^0x54175BD8
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_11;
}

void func_152(int iParam0, int iParam1) // Position - 0x567D Hash - 0x42DB579F ^0xB4972906
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_11 = iParam1;
	return;
}

void func_153(int iParam0, int iParam1) // Position - 0x56B0 Hash - 0x42DB579F ^0x244C0C3A
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_14 = iParam1;
	return;
}

int func_154() // Position - 0x56E3 Hash - 0x38870270 ^0x38870270
{
	return Global_38.f_289.f_3222;
}

void func_155(int iParam0) // Position - 0x56F4 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_388(iParam0))
		return;

	func_397(iParam0);
	func_398(iParam0);
	return;
}

BOOL func_156(int iParam0) // Position - 0x5715 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_17418.f_2585[num2], offset);
}

void func_157(int iParam0) // Position - 0x573F Hash - 0xC20F1267 ^0x63F4D2C2
{
	Global_38.f_289.f_3245.f_4 = iParam0;
	return;
}

ePedType func_158(int iParam0) // Position - 0x5754 Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_9;
}

BOOL func_159(ePedType eptParam0) // Position - 0x5787 Hash - 0x296BCE22 ^0x296BCE22
{
	if (func_399(eptParam0))
		return true;

	return false;
}

void func_160(int iParam0) // Position - 0x579D Hash - 0xEBEFE898 ^0xEBEFE898
{
	ePedType type;
	Hash hash;
	var unk;

	if (func_74(iParam0) == 0)
	{
		if (func_400(iParam0))
			func_401(iParam0);
	
		return;
	}

	if (!func_400(iParam0))
	{
		type = func_158(iParam0);
		hash = func_402(type);
		func_403(iParam0, hash);
	}

	unk.f_9 = joaat("SLOTID_NONE");
	unk.f_14 = func_158(iParam0);
	unk.f_15 = func_404(iParam0);
	unk.f_16 = { func_245(iParam0) };
	unk.f_24 = unk.f_24;
	unk.f_26 = BUILTIN::FLOOR(func_405(iParam0));
	unk.f_25 = BUILTIN::FLOOR(func_294(iParam0));
	unk.f_27 = func_406(iParam0, 0);
	unk.f_28 = func_406(iParam0, 1);
	func_407(iParam0, &unk);
	return;
}

BOOL func_161() // Position - 0x5858 Hash - 0x57592B8C ^0xB4B7573B
{
	Entity entity;

	entity = func_162();

	if (ENTITY::DOES_ENTITY_EXIST(entity))
		return 1;

	return 0;
}

Ped func_162() // Position - 0x5874 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1902887.f_379;
}

BOOL func_163(Ped pedParam0, Entity eParam1) // Position - 0x5883 Hash - 0xF5CF6AEA ^0x2F940AE8
{
	int carriableEntityState;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return 0;

	if (PED::_GET_CARRIER_AS_PED(eParam1) != pedParam0)
		return 0;

	carriableEntityState = ENTITY::GET_CARRIABLE_ENTITY_STATE(eParam1);

	if (carriableEntityState == 5)
		return 1;

	if (carriableEntityState == 7)
		return 1;

	return 0;
}

int func_164() // Position - 0x58C5 Hash - 0xE835E19F ^0x141BD35D
{
	return Global_38.f_289.f_3222.f_1;
}

BOOL func_165(BOOL bParam0) // Position - 0x58D8 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

void func_166(int iParam0) // Position - 0x5908 Hash - 0xC20F1267 ^0xD623971A
{
	Global_38.f_289.f_3222.f_1 = iParam0;
	return;
}

void func_167(var uParam0, var uParam1, var uParam2) // Position - 0x591D Hash - 0xD65C08CA ^0x8EA45CD5
{
	Global_38.f_289.f_3222.f_19 = { uParam0 };
	return;
}

Vector3 func_168() // Position - 0x5936 Hash - 0xE29D1D35 ^0x6E74FC3A
{
	return Global_38.f_289.f_3222.f_19;
}

void func_169(int iParam0) // Position - 0x594B Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_38.f_289.f_3222 = iParam0;
	return;
}

int func_170(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x595E Hash - 0xA51DF02B ^0x748D8F02
{
	Hash model;
	Object object;

	if (func_161())
	{
		func_408();
		func_409();
	}

	model = func_69();

	if (!STREAMING::HAS_MODEL_LOADED(model))
	{
		STREAMING::REQUEST_MODEL(model, false);
		return 0;
	}

	object = OBJECT::CREATE_OBJECT(model, vParam0, true, true, false, false, true);

	if (!ENTITY::DOES_ENTITY_EXIST(object))
		return 0;

	func_410(object);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(object, true, true);
	ENTITY::SET_ENTITY_HEADING(object, fParam3);

	if (bParam4)
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(object, false);

	TASK::TASK_CARRIABLE(object, joaat("carriable_saddle_bundle"), 0, 0, 0);
	return 1;
}

void func_171() // Position - 0x59E1 Hash - 0xA99E7B1E ^0x3A85A82E
{
	Global_1902887.f_423 = 0;
	Global_1902887.f_423.f_1 = 0;
	Global_1902887.f_423.f_2 = 0;
	return;
}

BOOL func_172(int iParam0) // Position - 0x5A05 Hash - 0xB7F263AA ^0xB7F263AA
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_255(Global_1902887[iParam0 /*43*/]))
		return true;

	return false;
}

BOOL func_173(int iParam0) // Position - 0x5A3D Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_459;
}

BOOL func_174() // Position - 0x5A71 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1902887.f_423.f_1;
}

int func_175() // Position - 0x5A82 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1902887.f_423;
}

void func_176(int iParam0) // Position - 0x5A91 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1902887.f_423 = iParam0;
	return;
}

void func_177(int iParam0) // Position - 0x5AA2 Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1902887.f_423.f_1 = iParam0;
	return;
}

BOOL func_178(Ped pedParam0, int iParam1) // Position - 0x5AB5 Hash - 0x76B9592F ^0x20F2F20E
{
	int num;
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (iParam1 != -1)
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam1 /*36*/].f_5))
			return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, Global_1887363[iParam1 /*36*/].f_5, true, 0);
		else
			return false;

	for (i = 0; i < Global_1893611.f_161; i = i + 1)
	{
		num = Global_1893611.f_10[i];
	
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_5))
		{
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, Global_1887363[num /*36*/].f_5, true, 0))
		{
			return true;
		}
	}

	return false;
}

int func_179() // Position - 0x5B50 Hash - 0x8190E5D8 ^0x6C81FB30
{
	return Global_1902887.f_423.f_2;
}

void func_180(int iParam0) // Position - 0x5B61 Hash - 0xC421D95B ^0x56CEE285
{
	Global_1902887.f_423.f_2 = iParam0;
	return;
}

BOOL func_181() // Position - 0x5B74 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1893611 & 2 != 0;
}

BOOL func_182() // Position - 0x5B84 Hash - 0x24D34D0 ^0x216E5947
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);

	if (PED::GET_PED_CONFIG_FLAG(Global_33, 440, true))
		return false;

	return true;
}

void func_183(BOOL bParam0) // Position - 0x5BC5 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
	return;
}

BOOL func_184() // Position - 0x5BFF Hash - 0x24D34D0 ^0x4EDBE20
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);

	if (PED::GET_PED_CONFIG_FLAG(Global_33, 439, true))
		return false;

	return true;
}

void func_185(BOOL bParam0) // Position - 0x5C40 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
	return;
}

BOOL func_186() // Position - 0x5C7A Hash - 0x24D34D0 ^0x48AEAE02
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);

	if (PED::GET_PED_CONFIG_FLAG(Global_33, 438, true))
		return false;

	return true;
}

void func_187(BOOL bParam0) // Position - 0x5CBB Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
	return;
}

BOOL func_188(int iParam0) // Position - 0x5CF5 Hash - 0xF65922F6 ^0x6B00DE5A
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (Global_1902887[iParam0 /*43*/].f_41 == 0)
		return false;

	return true;
}

void func_189(int iParam0, int iParam1) // Position - 0x5D2C Hash - 0xDE428423 ^0xD55781B1
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_41 = iParam1;
	return;
}

int func_190(int iParam0) // Position - 0x5D5A Hash - 0x79966B74 ^0xA92245FB
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/].f_41;
}

Vector3 func_191(int iParam0) // Position - 0x5D88 Hash - 0x91720586 ^0xAD269AA
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	if (iParam0 >= 7)
		return 0f, 0f, 0f;

	return Global_1902887[iParam0 /*43*/].f_27;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x5DBC Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

Vector3 func_193(int iParam0) // Position - 0x5DE6 Hash - 0x91720586 ^0xA4081314
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	if (iParam0 >= 7)
		return 0f, 0f, 0f;

	return Global_1902887[iParam0 /*43*/].f_30;
}

float func_194(int iParam0) // Position - 0x5E1A Hash - 0xF21A6F3 ^0x223A3B0B
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_1902887[iParam0 /*43*/].f_33;
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x5E48 Hash - 0xF8A04892 ^0xB3C640DD
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_30 = { uParam1 };
	return;
}

void func_196(int iParam0, float fParam1) // Position - 0x5E7A Hash - 0xDE428423 ^0x78B1DE16
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_33 = fParam1;
	return;
}

void func_197(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x5EA8 Hash - 0xBB9F4474 ^0x52AC9CD5
{
	ePedType entityModel;

	if (!uParam0.f_5)
		return;

	if (func_156(34))
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(uParam0.f_6);

	if (func_322(entityModel) || func_323(entityModel))
		return;

	if (!TASK::IS_PED_SPRINTING(uParam0.f_6))
		return;

	if (PED::IS_PED_SWIMMING(Global_33))
		return;

	if (PED::IS_PED_SWIMMING(uParam0.f_6))
		return;

	if (func_229())
		func_228(34, false);

	return;
}

void func_198(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x5F21 Hash - 0xD86078B5 ^0x4CA3AF8A
{
	int gameTimer;
	int num;
	BOOL flag;
	float pedStaminaNormalized;

	if (!uParam0.f_5)
		return;

	if (func_411() >= 3)
		return;

	if (func_149(36) || func_147(36))
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	num = func_412();

	if (num > 0)
		if (num + 5000 < gameTimer)
			func_413();
		else
			return;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0.f_6))
		return;

	if (ENTITY::IS_ENTITY_DEAD(uParam0.f_6))
		return;

	if (PED::IS_PED_INJURED(uParam0.f_6))
		return;

	flag = false;

	if (TASK::IS_PED_SPRINTING(uParam0.f_6))
		flag = true;

	if (TASK::IS_PED_RUNNING(uParam0.f_6))
		flag = true;

	if (!flag)
		return;

	if (PED::IS_PED_SWIMMING(Global_33))
		return;

	if (PED::IS_PED_SWIMMING(uParam0.f_6))
		return;

	pedStaminaNormalized = PED::_GET_PED_STAMINA_NORMALIZED(uParam0.f_6);

	if (pedStaminaNormalized > 0.15f)
		return;

	if (func_149(34))
		func_150(34);

	if (func_147(34))
		func_148(34);

	if (func_149(35))
		func_150(35);

	if (func_147(35))
		func_148(35);

	if (func_229())
	{
		func_228(36, true);
		func_414();
		func_415(MISC::GET_GAME_TIMER());
	}

	return;
}

void func_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x6059 Hash - 0x35CEA79F ^0x1DD6132C
{
	BOOL flag;

	if (!uParam7.f_2)
		return;

	if (!uParam0.f_5)
		return;

	if (func_156(45))
		return;

	flag = false;

	if (func_121(32) && func_121(33) && func_121(34))
		flag = true;

	if (!flag)
		return;

	if (!func_318(uParam0.f_6))
		return;

	if (!uParam7.f_10)
		return;

	if (func_103(7) == 0)
		return;

	if (func_229())
		func_228(45, false);

	return;
}

void func_200() // Position - 0x60E5 Hash - 0x39439B04 ^0xC928A1C2
{
	int gameTimer;

	if (!func_416())
		return;

	gameTimer = MISC::GET_GAME_TIMER();

	if (func_417() < gameTimer)
	{
		func_228(59, false);
		func_418(0);
		func_419();
	}

	return;
}

void func_201(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x6117 Hash - 0x65F53BDF ^0xE83604DE
{
	Any dst;
	int num;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	num = -1;

	if (uParam7.f_2)
	{
		num = 0;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam7, 12);
	}
	else if (uParam19.f_2)
	{
		num = 1;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam19, 12);
	}

	if (!func_66(num))
		return;

	if (!dst.f_1)
		return;

	if (!dst.f_2)
		return;

	if (!dst.f_4)
	{
		if (func_147(56))
			func_148(56);
	
		if (func_149(56))
			func_150(56);
	
		if (func_147(57))
			func_148(57);
	
		if (func_149(57))
			func_150(57);
	
		return;
	}

	if (TASK::_0x3F8387DB1B9F31B7(dst, 0) && !func_420())
	{
		if (!func_156(57) && !func_156(58))
		{
			if (func_147(56))
				func_148(56);
		
			if (func_149(56))
				func_150(56);
		
			if (func_229())
				if (func_421(joaat("consumable_special_horse_reviver_crafted")))
					func_228(57, false);
				else
					func_228(58, false);
		}
	}

	return;
}

void func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x6239 Hash - 0x9C26D49E ^0xE5299888
{
	Ped horse;
	BOOL flag;
	int horseTamingState;
	int num;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	horse = func_422();
	flag = false;
	horseTamingState = 0;

	if (ENTITY::DOES_ENTITY_EXIST(horse))
	{
		flag = true;
		horseTamingState = PED::_GET_HORSE_TAMING_STATE(horse);
	}

	num = func_423();

	switch (num)
	{
		case 0:
			func_424(1);
			[[fallthrough]];
	
		case 1:
			if (flag)
			{
				func_425(horse);
				func_424(2);
			}
			break;
	
		case 2:
			switch (horseTamingState)
			{
				case 1:
					func_424(3);
					break;
			
				case 2:
				case 3:
					func_424(5);
					break;
			
				case 4:
				case 5:
					func_424(9);
					break;
			
				case 6:
					func_424(11);
					break;
			
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
			
				default:
					if (!flag)
						func_424(11);
					break;
			}
			break;
	
		case 3:
			func_426();
		
			if (func_427(horse))
				if (func_229())
					func_228(48, true);
			else if (func_229())
				func_228(47, true);
		
			func_424(4);
			break;
	
		case 4:
			switch (horseTamingState)
			{
				case 1:
					if (func_147(47))
					{
						if (func_427(horse))
						{
							func_148(47);
							func_424(3);
						}
					}
				
					if (!flag)
						func_424(11);
					break;
			
				case 2:
				case 3:
					func_424(5);
					break;
			
				case 4:
				case 5:
					func_424(9);
					break;
			
				case 6:
					func_424(11);
					break;
			
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
			
				default:
					if (!flag)
						func_424(11);
					break;
			}
			break;
	
		case 5:
			func_426();
		
			if (func_229())
				func_228(49, true);
		
			func_424(6);
			break;
	
		case 6:
			switch (horseTamingState)
			{
				case 2:
				case 3:
					break;
			
				case 4:
				case 5:
					func_424(9);
					break;
			
				case 6:
					func_424(11);
					break;
			
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
			
				default:
					if (!flag)
						func_424(11);
					break;
			}
			break;
	
		case 7:
			func_426();
		
			if (func_229())
				func_228(50, true);
		
			func_428(MISC::GET_GAME_TIMER());
			func_424(8);
			break;
	
		case 8:
			if (func_429() + 5000 < MISC::GET_GAME_TIMER())
				func_424(6);
			break;
	
		case 9:
			func_426();
		
			if (func_229())
				func_228(51, true);
		
			func_424(10);
			break;
	
		case 10:
			switch (horseTamingState)
			{
				case 2:
				case 3:
					func_424(5);
					break;
			
				case 4:
				case 5:
					break;
			
				case 6:
					func_424(11);
					break;
			
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
			
				default:
					if (!flag)
						func_424(11);
					break;
			}
			break;
	
		case 11:
			func_430();
			func_426();
			func_424(0);
			break;
	}

	return;
}

void func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x657C Hash - 0xB6987B4E ^0x7FCDCB86
{
	var dst;
	int num;
	int num2;
	BOOL flag;
	int num3;
	BOOL flag2;

	if (!func_431())
		return;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (!uParam0.f_5)
		return;

	if (uParam7.f_10)
	{
		num = 0;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam7, 12);
	}
	else if (uParam19.f_10)
	{
		num = 1;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam19, 12);
	}
	else
	{
		return;
	}

	if (!dst.f_1)
		return;

	if (!dst.f_2)
		return;

	if (dst.f_3)
		return;

	if (dst.f_4)
		return;

	num2 = func_406(num, 0);
	flag = false;
	num3 = -1;

	if (!flag)
	{
		if (num2 > 50)
		{
			if (func_432() < 3)
			{
				num3 = 26;
				flag = true;
			}
		}
	}

	flag2 = false;

	if (func_433() + 2500 < MISC::GET_GAME_TIMER())
		flag2 = true;

	if (flag2)
	{
		if (!flag)
		{
			func_434(0);
			func_435();
			return;
		}
	}

	if (!flag2)
		return;

	if (!func_229())
		return;

	func_228(num3, true);
	func_436(MISC::GET_GAME_TIMER());

	switch (num3)
	{
		case 26:
			func_437();
			break;
	
		default:
			break;
	}

	func_434(0);
	func_435();
	return;
}

void func_204(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x66AF Hash - 0xB6987B4E ^0x7FCDCB86
{
	Ped dst;
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;
	BOOL flag2;

	if (!func_438())
		return;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (!uParam0.f_5)
		return;

	if (uParam7.f_10)
	{
		num = 0;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam7, 12);
	}
	else if (uParam19.f_10)
	{
		num = 1;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam19, 12);
	}
	else
	{
		return;
	}

	if (!dst.f_1)
		return;

	if (!dst.f_2)
		return;

	if (dst.f_3)
		return;

	if (dst.f_4)
		return;

	num2 = func_439(num, 0);
	num3 = func_439(num, 1);
	flag = false;
	num4 = -1;

	if (!flag)
	{
		if (func_440(32) < 3)
		{
			if (num2 == 0 && num3 == 0)
			{
				num4 = 32;
				flag = true;
			}
		}
	}

	if (!flag)
	{
		if (num2 == 0)
		{
			if (func_440(30) < 3)
			{
				num4 = 30;
				flag = true;
			}
		}
	}

	if (!flag)
	{
		if (num3 == 0)
		{
			if (func_440(31) < 3)
			{
				if (!PED::IS_PED_SWIMMING(dst))
				{
					num4 = 31;
					flag = true;
				}
			}
		}
	}

	if (!flag)
	{
		if (num2 < 50)
		{
			if (func_440(28) < 1)
			{
				num4 = 28;
				flag = true;
			}
		}
	}

	if (!flag)
	{
		if (num3 < 50)
		{
			if (func_440(29) < 1)
			{
				num4 = 29;
				flag = true;
			}
		}
	}

	if (!flag)
	{
		if (num3 == 0)
		{
			if (func_440(33) < 3)
			{
				if (PED::IS_PED_SWIMMING(dst))
				{
					num4 = 33;
					flag = true;
				}
			}
		}
	}

	flag2 = false;

	if (func_441() + 2500 < MISC::GET_GAME_TIMER())
		flag2 = true;

	if (flag2)
	{
		if (!flag)
		{
			func_442(0);
			func_443();
			return;
		}
	}

	if (!flag2)
		return;

	if (!func_229())
		return;

	func_228(num4, true);
	func_436(MISC::GET_GAME_TIMER());
	func_442(0);
	func_443();
	return;
}

void func_205() // Position - 0x6884 Hash - 0x8A1335C2 ^0x8A1335C2
{
	var unk;
	int num;
	BOOL flag;
	int i;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;

	if (func_444() == 0)
		return;

	unk = 6;
	num = 0;
	unk[num] = 32;
	num = num + 1;
	unk[num] = 30;
	num = num + 1;
	unk[num] = 31;
	num = num + 1;
	unk[num] = 28;
	num = num + 1;
	unk[num] = 29;
	num = num + 1;
	unk[num] = 43;
	num = num + 1;
	flag = false;

	for (i = 0; i < num; i = i + 1)
	{
		if (flag)
		{
		}
		else if (func_147(unk[i]))
		{
			flag = true;
		}
	}

	if (flag)
	{
		if (!func_445())
		{
			flag2 = false;
			flag3 = false;
			flag4 = false;
			flag5 = false;
		
			if (func_147(32))
			{
				flag4 = true;
				flag5 = true;
			}
		
			if (func_147(30))
				flag4 = true;
		
			if (func_147(31))
				flag5 = true;
		
			if (func_147(28))
				flag4 = true;
		
			if (func_147(29))
				flag5 = true;
		
			if (func_147(43))
			{
				flag4 = true;
				flag5 = true;
			}
		
			if (flag2)
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 3);
		
			if (flag3)
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 3);
		
			if (flag4)
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 3);
		
			if (flag5)
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 3);
		
			func_446(1);
		}
	}
	else if (func_445())
	{
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
		func_446(0);
		func_447();
	}

	return;
}

void func_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x69E8 Hash - 0x9D5BBF3D ^0x174ED223
{
	int num;
	Vector3 vector;
	Blip blip;

	if (!func_448())
		return;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (func_156(55))
		return;

	if (!func_229())
		return;

	func_157(0);

	if (func_74(0) == 1)
		return;

	func_228(55, false);
	num = func_449(9, true, true, false);

	if (num != 86)
		num = func_449(9, true, true, true);

	if (!func_450(num))
		return;

	vector = { func_451(num) };

	if (_IS_NULL_VECTOR(vector))
		return;

	blip = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_SHOP"), vector);
	MAP::SET_BLIP_SPRITE(blip, joaat("blip_shop_horse"), true);
	MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_RADAR_EDGE_ALWAYS"));
	func_452(&blip);
	return;
}

void func_207() // Position - 0x6AC5 Hash - 0x5C1F2996 ^0x364219E4
{
	Blip blip;

	blip = func_453();

	if (!MAP::DOES_BLIP_EXIST(blip))
		return;

	if (func_149(55))
		return;

	if (func_147(55))
		return;

	MAP::REMOVE_BLIP(&blip);
	return;
}

void func_208(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x6AFE Hash - 0x549A8CC ^0xD9E0684
{
	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (func_298() && !func_121(41))
		return;

	if (!func_454())
		return;

	if (func_156(65))
		return;

	if (func_455(Global_33))
		return;

	if (func_456())
		return;

	if (!func_229())
		return;

	func_228(65, false);
	return;
}

void func_209(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x6B72 Hash - 0x39274519 ^0x6F96BC5E
{
	int gameTimer;
	int num;

	if (!uParam0.f_1)
		return;

	if (!uParam0.f_3)
		return;

	if (!uParam0.f_2)
		return;

	if (func_298() && !func_121(41))
		return;

	if (func_298() && func_305() == 8)
		return;

	if (!func_161())
		return;

	if (func_457(7))
	{
		func_458();
		return;
	}

	if (func_164() == 3)
		return;

	if (func_455(Global_33))
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	num = func_459();

	if (num == 0)
	{
		func_460(MISC::GET_GAME_TIMER());
		return;
	}

	if (num + 10000 > gameTimer)
		return;

	if (func_140(Global_33, func_162(), true, true) < 100f)
		return;

	if (func_156(64))
		if (num + 600000 > gameTimer)
			return;

	func_228(64, true);
	func_460(MISC::GET_GAME_TIMER());
	return;
}

void func_210(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x6C63 Hash - 0xC1C3AEB6 ^0x4A8EF0E5
{
	int num;
	ePedType entityModel;
	var unk;

	if (!uParam0.f_5)
		return;

	num = func_440(66);

	if (num >= 3)
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(uParam0.f_6);

	if (func_322(entityModel) || func_323(entityModel))
		return;

	if (!TASK::IS_PED_SPRINTING(uParam0.f_6))
		return;

	if (PED::IS_PED_SWIMMING(Global_33))
		return;

	if (PED::IS_PED_SWIMMING(uParam0.f_6))
		return;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam7))
		return;

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, pedParam7, 4, 0))
		return;

	if (func_461() == pedParam7)
		return;

	if (func_229())
	{
		func_462(pedParam7);
		func_228(66, false);
	}

	return;
}

void func_211(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x6D11 Hash - 0x3C862809 ^0x6B3586BB
{
	int num;
	int num2;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (!uParam7.f_10 && !uParam19.f_10)
	{
		if (func_463())
			func_464(0);
	
		return;
	}

	if (func_465() < 2)
		return;

	if (uParam7.f_10)
		num = 0;
	else if (uParam19.f_10)
		num = 1;

	if (func_103(num) >= 2)
		return;

	num2 = func_440(46);

	if (num2 >= 1)
		return;

	if (func_463())
		return;

	func_464(1);
	func_466();

	if (func_467() <= 1)
		return;

	if (!func_229())
		return;

	func_228(46, true);
	return;
}

void func_212(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x6DC0 Hash - 0xCFFD7261 ^0xC7FAF07B
{
	Entity outEntity;
	Ped pedIndexFromEntityIndex;

	if (!uParam0.f_1)
		return;

	if (!func_455(Global_33))
		return;

	if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, true, false))
		return;

	if (!func_468(outEntity))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);

	if (func_469(pedIndexFromEntityIndex))
		return;

	if (func_229())
		func_228(67, true);

	return;
}

BOOL func_213(var uParam0, var uParam1) // Position - 0x6E23 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_470(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_471(uParam0))
		return false;

	return true;
}

int func_214() // Position - 0x6E57 Hash - 0x182028C5 ^0x52AF0BEC
{
	Ped saddleHorseForPlayer;
	int num;
	int num2;
	Hash hash;
	BOOL flag;

	saddleHorseForPlayer = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(saddleHorseForPlayer))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(saddleHorseForPlayer) || PED::IS_PED_INJURED(saddleHorseForPlayer))
		return 0;

	num = 0;

	if (PED::IS_PED_ON_MOUNT(Global_33))
		if (PED::GET_MOUNT(Global_33) == saddleHorseForPlayer)
			num = 1;

	num2 = 0;
	hash = WEAPON::_0xAFFD0CCF31F469B8(saddleHorseForPlayer);

	if (func_263(hash, 0))
		num2 = 1;

	flag = false;

	if (func_181() || func_354())
		flag = true;

	if (num || num2)
		if (flag)
			return 1;

	return 0;
}

BOOL func_215(int iParam0) // Position - 0x6EF2 Hash - 0x372FC2FE ^0x372FC2FE
{
	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return true;
}

void func_216(var uParam0) // Position - 0x6F0F Hash - 0x6843C143 ^0x645B1C36
{
	int i;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_10[i /*8*/] = 0;
		uParam0->f_10[i /*8*/].f_1 = 0;
		uParam0->f_10[i /*8*/].f_2 = 0;
		uParam0->f_10[i /*8*/].f_3 = 0;
		uParam0->f_10[i /*8*/].f_4 = 0;
		uParam0->f_10[i /*8*/].f_5 = 0;
		uParam0->f_10[i /*8*/].f_6 = 0;
		uParam0->f_10[i /*8*/].f_7 = 0;
	}

	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	return;
}

BOOL func_217(int iParam0) // Position - 0x6FBB Hash - 0xEFF1F628 ^0xEFF1F628
{
	if (func_472())
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

BOOL func_218(int iParam0, int iParam1) // Position - 0x6FDB Hash - 0xDC1A83B4 ^0xDA257122
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_9 && iParam0 != false;
}

BOOL func_219() // Position - 0x7015 Hash - 0x4C1900E6 ^0x4C1900E6
{
	return func_473() == 4;
}

int func_220(int iParam0) // Position - 0x7023 Hash - 0x1B64DC55 ^0x1B64DC55
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 6;
	}

	return 0;
}

Hash func_221(Ped pedParam0) // Position - 0x705B Hash - 0xCBDF2AE2 ^0xCD5FF04E
{
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::GET_IS_ANIMAL(pedParam0) || ENTITY::_GET_IS_BIRD(pedParam0))
	{
		hash = func_474(&pedParam0);
	
		if (!func_263(hash, 0))
			hash = func_475(pedParam0);
	}
	else
	{
		hash = func_475(pedParam0);
	}

	return hash;
}

int func_222(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x70AE Hash - 0xCC673625 ^0x5E579BC1
{
	return func_476(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1, iParam2, bParam3, hParam4);
}

BOOL func_223(Ped pedParam0, int iParam1, Hash hParam2, int iParam3) // Position - 0x70C8 Hash - 0x9912DCA9 ^0x764CC85
{
	int num;

	num = 1;

	switch (iParam3)
	{
		case 0:
			break;
	
		case 1:
		case 2:
			num = 2;
			break;
	}

	if (func_477(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam2) < num)
		return true;

	return false;
}

int func_224(int iParam0, Hash hParam1, int iParam2) // Position - 0x710C Hash - 0x2E1C6AB2 ^0xB396D62
{
	var guid2;
	var guid1;

	if (!func_263(hParam1, 0))
		return 0;

	guid2 = { func_478(iParam0) };
	guid1 = { func_479(iParam0, hParam1, guid2, guid2.f_4) };

	if (INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(iParam0, &guid1, &guid2, hParam1, guid2.f_4, iParam2, 752097756))
		return 1;

	return 0;
}

void func_225(Any* panParam0, Hash hParam1) // Position - 0x7163 Hash - 0xBFEF95EB ^0x45C41A3B
{
	MISC::COPY_SCRIPT_STRUCT(hParam1, panParam0, 96);
	return;
}

Hash func_226(Ped pedParam0) // Position - 0x7175 Hash - 0x159F0730 ^0x5BA63351
{
	Ped pedAttached;
	int pedDamageCleanliness;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	pedAttached = pedParam0;
	pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(pedAttached);
	num = func_480(pedAttached);

	if (!ENTITY::DOES_ENTITY_EXIST(pedAttached))
		return 0;

	if (TASK::_0x7CB99FADDE73CD1B(pedAttached))
		return 0;

	num2 = pedDamageCleanliness;
	num3 = num;

	if (num3 < num2)
		pedDamageCleanliness = num3;

	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&num4, pedAttached, pedDamageCleanliness))
		return 0;

	if (num4 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedAttached, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(pedAttached))
		{
			num5 = func_481(num4);
			return num5;
		}
	
		return num4;
	}

	switch (pedDamageCleanliness)
	{
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
	
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
	
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
	
		default:
		
	}

	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

BOOL func_227(Hash hParam0, int iParam1) // Position - 0x7248 Hash - 0x503679EB ^0x503679EB
{
	if (iParam1 == 119)
		return func_482(hParam0);

	return func_483(hParam0, iParam1);
}

void func_228(int iParam0, BOOL bParam1) // Position - 0x726B Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_396(iParam0, &num, &num2);

	if (!func_484(iParam0, num, num2, bParam1))
		return;

	func_485(num, num2);
	return;
}

BOOL func_229() // Position - 0x7298 Hash - 0x8E012C29 ^0x8E012C29
{
	if (!func_486() && func_487(true))
		return true;

	return false;
}

BOOL func_230(Ped pedParam0) // Position - 0x72B7 Hash - 0xF67F8E9C ^0xC93F486E
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	return true;
}

BOOL func_231(int iParam0) // Position - 0x72E7 Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_446;
}

BOOL func_232(Ped pedParam0) // Position - 0x731B Hash - 0xCC35B6E8 ^0x19B00C07
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0);

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "StableOwnedHorse"))
		return true;

	return false;
}

int func_233(int iParam0) // Position - 0x734B Hash - 0xFD4A39B0 ^0x31F3A108
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_446.f_1;
}

void func_234(Ped pedParam0, int iParam1) // Position - 0x7381 Hash - 0x918AF14F ^0xEF4326D7
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	DECORATOR::DECOR_SET_INT(pedParam0, "StableOwnedHorse", iParam1);
	return;
}

int func_235(int iParam0) // Position - 0x73AB Hash - 0x99C4249C ^0x95802108
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -15;

	if (iParam0 >= 7)
		return -15;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_446.f_2;
}

void func_236(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x73E5 Hash - 0x2BEE335D ^0x2BEE335D
{
	func_488(func_242(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_237(Ped pedParam0) // Position - 0x7403 Hash - 0x57A28E59 ^0x47CA42A
{
	char* propertyName;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	propertyName = "StableOwnedHorse";

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
		DECORATOR::DECOR_REMOVE(pedParam0, propertyName);

	return;
}

void func_238(int iParam0) // Position - 0x743A Hash - 0xB8889113 ^0xCF69E357
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_347(&(Global_38.f_289.f_1[iParam0 /*460*/].f_446));
	return;
}

int func_239(Ped pedParam0) // Position - 0x7470 Hash - 0xB6480CEA ^0x3CAADC95
{
	int _int;

	if (!func_232(pedParam0))
		return -1;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "StableOwnedHorse");
	return _int;
}

void func_240(int iParam0, int iParam1) // Position - 0x7493 Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_446 = iParam1;
	return;
}

void func_241(int iParam0, int iParam1) // Position - 0x74C7 Hash - 0x378678AB ^0xB2BC5FB8
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_446.f_1 = iParam1;
	return;
}

int func_242() // Position - 0x74FD Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_243(int iParam0, int iParam1) // Position - 0x7509 Hash - 0x378678AB ^0xF8396D31
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_446.f_2 = iParam1;
	return;
}

BOOL func_244(ePedType eptParam0) // Position - 0x753F Hash - 0xE48228D0 ^0xE48228D0
{
	switch (eptParam0)
	{
		case joaat("a_c_horse_john_endlesssummer"):
		case joaat("a_c_horse_buell_warvets"):
			return true;
	}

	return false;
}

struct<8> func_245(int iParam0) // Position - 0x7563 Hash - 0x327075F5 ^0x327075F5
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return unk;

	if (iParam0 >= 7)
		return unk;

	return Global_38.f_289.f_1[iParam0 /*460*/];
}

char* func_246(ePedType eptParam0) // Position - 0x75A5 Hash - 0x7B8A8935 ^0x7B8A8935
{
	switch (eptParam0)
	{
		case joaat("a_c_horse_john_endlesssummer"):
			return "HORSE_NAME_JOHN_ENDLESSSUMMER";
	
		case joaat("a_c_horse_buell_warvets"):
			return "HORSE_NAME_BUELL_WARVETS";
	}

	return "";
}

void func_247(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0x75D5 Hash - 0x844BA98C ^0x7B058A05
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/] = { uParam1 };
	return;
}

void func_248(int iParam0) // Position - 0x760C Hash - 0x790A22DB ^0xF78FAA20
{
	Ped ped;
	const char* name;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = Global_1902887[iParam0 /*43*/];

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	name = func_489(func_245(iParam0));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(name))
		PED::_SET_PED_PROMPT_NAME(ped, name);

	return;
}

BOOL func_249(int iParam0, int iParam1) // Position - 0x7678 Hash - 0x13701F47 ^0xF94A73D
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1902887[iParam0 /*43*/].f_23 && iParam1 != false;
}

void func_250(int iParam0) // Position - 0x76AB Hash - 0x37EBB9FA ^0x1790AB80
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_25))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1902887[iParam0 /*43*/].f_25));
	}

	Global_1902887[iParam0 /*43*/].f_24 = 0;
	return;
}

void func_251(Blip blParam0) // Position - 0x76FC Hash - 0x6A8EF7A7 ^0xE3E0A8ED
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_491(func_490(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_492())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_493();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_JOHN");
	}

	return;
}

void func_252(Blip blParam0, BOOL bParam1) // Position - 0x7747 Hash - 0xAA61316F ^0x6977E168
{
	char* str1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_491(func_490(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		str1 = "";
	
		if (bParam1)
			str1 = "HORSE_BLIP_TEMPORARY";
		else if (func_492())
			str1 = "HORSE_BLIP_ARTHUR";
		else if (func_493())
			str1 = "HORSE_BLIP_JOHN";
	
		if (MISC::COMPARE_STRINGS(str1, "", false, -1) != 0)
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, str1);
	}

	return;
}

void func_253(Blip blParam0) // Position - 0x77B2 Hash - 0x9892E8C ^0x28660E03
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_2"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_3"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_4"));
	return;
}

void func_254(Blip blParam0) // Position - 0x783E Hash - 0x85615470 ^0x31794F85
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	return;
}

BOOL func_255(Ped pedParam0) // Position - 0x786A Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

void func_256(int iParam0, int iParam1) // Position - 0x78AC Hash - 0xDAB26FA1 ^0x295859B2
{
	Ped ped;
	var unk;
	int num;
	int gameTimer;
	float num2;
	int num3;
	int num4;

	if (PED::IS_PED_INJURED(Global_33))
		return;

	if (!func_66(iParam0))
		return;

	ped = func_78(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (PED::IS_PED_INJURED(ped))
		return;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return;

	if (!func_121(39))
	{
		if (func_249(iParam0, 128))
			return;
	
		if (func_494(iParam1, &unk))
		{
			num = func_495(iParam1);
		
			if (func_496(ped, iParam1) != num)
				func_497(ped, iParam1, num);
		}
	
		return;
	}

	if (func_320(ped))
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	num2 = func_498(iParam0, iParam1);

	if (num2 >= 30f)
	{
		func_499(iParam0, iParam1, gameTimer);
		return;
	}

	num3 = func_439(iParam0, iParam1);
	func_500(ped, iParam0, iParam1);

	if (func_501(iParam0, iParam1) > 0f)
	{
		func_502(iParam0, iParam1);
	}
	else
	{
		func_503(ped, iParam0, iParam1);
		num4 = func_439(iParam0, iParam1);
		func_504(iParam0, iParam1, num3, num4);
	}

	func_499(iParam0, iParam1, gameTimer);
	return;
}

void func_257(int iParam0, int iParam1) // Position - 0x79C9 Hash - 0xDAB26FA1 ^0x295859B2
{
	Ped ped;
	int attributeIndex;
	int newValue;
	int gameTimer;
	float num;
	int num2;
	int num3;

	if (PED::IS_PED_INJURED(Global_33))
		return;

	if (!func_66(iParam0))
		return;

	ped = func_78(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (PED::IS_PED_INJURED(ped))
		return;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return;

	if (!func_121(40))
	{
		if (func_505(iParam1, &attributeIndex))
		{
			newValue = func_506(iParam1);
			ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(ped, attributeIndex, newValue);
		}
	
		return;
	}

	if (func_320(ped))
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	num = func_507(iParam0, iParam1);

	if (num >= 30f)
	{
		func_508(iParam0, iParam1, gameTimer);
		return;
	}

	num2 = func_406(iParam0, iParam1);
	func_509(ped, iParam0, iParam1);

	if (func_510(iParam0, iParam1) > 0f)
	{
		func_511(iParam0, iParam1);
	}
	else
	{
		func_512(ped, iParam0, iParam1);
		num3 = func_406(iParam0, iParam1);
		func_513(iParam0, iParam1, num2, num3);
	}

	func_508(iParam0, iParam1, gameTimer);
	return;
}

void func_258(int iParam0) // Position - 0x7ACB Hash - 0x6311676E ^0x6311676E
{
	Ped ped;
	float multiplier;
	float num;
	float num2;
	float multiplier2;
	float multiplier3;
	float num3;
	int newValue;
	int newValue2;
	var unk;
	Hash key;
	int outData;
	var outData2;
	int i;
	int outData3;
	var outData4;
	int j;
	int coreIndex;
	int attributeBonusRank;
	int coreIndex2;
	int attributeBonusRank2;
	float healthRechargeMultiplier;
	float staminaRechargeMultiplier;
	float staminaDepletionMultiplier;

	iParam0 = func_77(iParam0);

	if (iParam0 <= -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_66(iParam0))
		return;

	ped = func_78(iParam0);
	multiplier = 1f;
	num = 1f;
	num2 = 0f;
	multiplier2 = 1f;
	multiplier3 = 1f;
	num3 = 0f;
	newValue = 0;
	newValue2 = 0;

	if (iParam0 == func_154())
	{
		unk = { func_284() };
		key = unk.f_1;
	
		if (func_263(key, 0))
		{
			outData.f_1 = 20;
			ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(key, &outData);
		
			for (i = 0; i < outData; i = i + 1)
			{
				ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2);
			
				switch (outData2.f_1)
				{
					case -1620444701:
						newValue = newValue + BUILTIN::FLOOR((float)outData2.f_2 * 0.01f);
						break;
				
					case -845587290:
						multiplier3 = multiplier3 - (outData2.f_5 * 0.01f);
						break;
				
					case -225223329:
						num2 = num2 + (outData2.f_5 * 0.01f);
						break;
				
					case 1167068375:
						num3 = num3 + (outData2.f_5 * 0.01f);
						break;
				
					case 1605773431:
						multiplier2 = multiplier2 + (outData2.f_5 * 0.01f);
						break;
				
					case 2086291460:
						newValue2 = newValue2 + BUILTIN::FLOOR((float)outData2.f_2 * 0.01f);
						break;
				}
			}
		}
	
		key = unk.f_3;
	
		if (func_263(key, 0))
		{
			outData3.f_1 = 20;
			ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(key, &outData3);
		
			for (j = 0; j < outData3; j = j + 1)
			{
				ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData3.f_1[j], &outData4);
			
				switch (outData4.f_1)
				{
					case -1620444701:
						newValue = newValue + BUILTIN::FLOOR((float)outData4.f_2 * 0.01f);
						break;
				
					case -845587290:
						multiplier3 = multiplier3 - (outData4.f_5 * 0.01f);
						break;
				
					case -225223329:
						num2 = num2 + (outData4.f_5 * 0.01f);
						break;
				
					case 1167068375:
						num3 = num3 + (outData4.f_5 * 0.01f);
						break;
				
					case 1605773431:
						multiplier2 = multiplier2 + (outData4.f_5 * 0.01f);
						break;
				
					case 2086291460:
						newValue2 = newValue2 + BUILTIN::FLOOR((float)outData4.f_2 * 0.01f);
						break;
				}
			}
		}
	}

	if (func_514())
		newValue = newValue + 1;

	func_515(0, num2);
	func_515(1, num3);
	coreIndex = func_516();
	attributeBonusRank = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(ped, coreIndex);

	if (attributeBonusRank != newValue)
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(ped, coreIndex, newValue);

	coreIndex2 = func_517();
	attributeBonusRank2 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(ped, coreIndex2);

	if (attributeBonusRank2 != newValue2)
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(ped, coreIndex2, newValue2);

	healthRechargeMultiplier = PED::_GET_HEALTH_RECHARGE_MULTIPLIER(ped);

	if (healthRechargeMultiplier != multiplier)
		PED::_SET_HEALTH_RECHARGE_MULTIPLIER(ped, multiplier);

	num = num;
	staminaRechargeMultiplier = PED::_GET_STAMINA_RECHARGE_MULTIPLIER(ped);

	if (staminaRechargeMultiplier != multiplier2)
		PED::_SET_STAMINA_RECHARGE_MULTIPLIER(ped, multiplier2);

	staminaDepletionMultiplier = PED::_GET_STAMINA_DEPLETION_MULTIPLIER(ped);

	if (staminaDepletionMultiplier != multiplier3)
		PED::_SET_STAMINA_DEPLETION_MULTIPLIER(ped, multiplier3);

	return;
}

void func_259(int iParam0) // Position - 0x7DA7 Hash - 0x5161A142 ^0x26FA799F
{
	Ped ped;
	int num;
	var unk;
	int i;
	Entity entity;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = func_220(i);
	
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		{
		}
		else
		{
			entity = unk.f_3;
		
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entity))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, true, true);
			
				ENTITY::_DELETE_CARRIABLE(&entity);
			}
		}
	}

	return;
}

void func_260(int iParam0, Ped pedParam1) // Position - 0x7E4D Hash - 0xA2BBC532 ^0xA2BBC532
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/] = pedParam1;
	return;
}

struct<4> func_261(BOOL bParam0) // Position - 0x7E79 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_518(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_262(joaat("character"), func_519(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_262(joaat("character"), func_519(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_262(joaat("character"), func_519(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_262(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x7F19 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_263(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_518(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_263(Hash hParam0, int iParam1) // Position - 0x7F4A Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_264(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x7F64 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_263(hParam0, 0))
		return 0;

	if (!bParam7 && func_520(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_262(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_518(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_518(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

void func_265(Any* panParam0) // Position - 0x7FE3 Hash - 0xA4B72113 ^0x62A5EAE1
{
	*panParam0 = 0;
	panParam0->f_1 = 0;
	panParam0->f_2 = 0;
	panParam0->f_3 = 0;
	return;
}

BOOL func_266(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x7FFE Hash - 0x740B8A62 ^0x5C694353
{
	if (!func_263(hParam0, 0))
		return false;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return false;

	if (func_521(hParam0, panParam2, iParam3, bParam5, false, -1, false))
		return false;

	if (!func_522(false))
		return false;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_518(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_267(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x8068 Hash - 0x7D75927B ^0xD259228E
{
	var unk;

	if (!func_522(false))
		return func_523(&uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_524(uParam0, &unk, bParam5, false, -1))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_518(bParam5), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_268(int iParam0) // Position - 0x80DC Hash - 0x3181E2E5 ^0x3181E2E5
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_249(iParam0, 2) || func_249(iParam0, 4) || func_249(iParam0, 8))
		return true;

	return false;
}

Vector3 func_269(int iParam0) // Position - 0x812A Hash - 0x91720586 ^0x8021A149
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	if (iParam0 >= 7)
		return 0f, 0f, 0f;

	return Global_1902887[iParam0 /*43*/].f_19;
}

float func_270(int iParam0) // Position - 0x815E Hash - 0xF21A6F3 ^0xE1B70D5B
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_1902887[iParam0 /*43*/].f_22;
}

void func_271(int iParam0) // Position - 0x818C Hash - 0x49584173 ^0x49584173
{
	func_525(iParam0);
	func_526(iParam0);
	return;
}

BOOL func_272() // Position - 0x81A0 Hash - 0x81B0D04A ^0x9BAF92C7
{
	BOOL flag;

	flag = PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY();

	if (flag)
		return true;

	return false;
}

BOOL func_273(int iParam0) // Position - 0x81B8 Hash - 0xA26DB50F ^0xA26DB50F
{
	BOOL num;

	num = 1;

	if (!func_527(iParam0))
		num = 0;

	if (!func_528(iParam0))
		num = 0;

	return num;
}

Ped func_274(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x81DF Hash - 0x48B58DCF ^0xC3A42385
{
	Ped ped;

	if (!PED::_IS_THIS_MODEL_A_HORSE(eptParam0))
		return 0;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	PED::SET_PED_RELATIONSHIP_GROUP_HASH(ped, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam0));
	return ped;
}

void func_275(Ped pedParam0) // Position - 0x8225 Hash - 0xF32FB80D ^0xB662E625
{
	Player player;
	Hash entityModel;
	Hash defaultRelationshipGroupHash;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_33))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);

	if (func_319(pedParam0))
		return;

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, false, true);

	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(pedParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_33, pedParam0, false);
	PED::_SET_PED_PERSONALITY(pedParam0, joaat("player_horse"));
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	defaultRelationshipGroupHash = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(entityModel);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, defaultRelationshipGroupHash);
	ENTITY::SET_ENTITY_INVINCIBLE(pedParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(pedParam0, false);
	PLAYER::_SET_PLAYER_MOUNT_STATE_ACTIVE(player, true);
	PED::REQUEST_PED_VISIBILITY_TRACKING(pedParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(pedParam0, false);

	if (func_318(pedParam0))
	{
		num = func_333(pedParam0);
	
		if (func_529(num))
			PED::SET_PED_CONFIG_FLAG(pedParam0, 324, true);
	}

	PED::SET_PED_CONFIG_FLAG(pedParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 24, false);
	return;
}

void func_276(Ped pedParam0, int iParam1) // Position - 0x838F Hash - 0x897EDA31 ^0x581CDAD2
{
	int value;
	int bondingLevel;
	int num;
	var unk;
	int i;
	int num2;
	var unk2;
	int j;
	Player player;

	if (iParam1 == -1)
		return;

	if (iParam1 >= 7)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	value = func_281(iParam1);
	DECORATOR::DECOR_SET_INT(pedParam0, "HorseGender", value);
	bondingLevel = func_103(iParam1);
	func_530(pedParam0, bondingLevel);
	PED::_SET_MOUNT_BONDING_LEVEL(pedParam0, bondingLevel);
	num = BUILTIN::FLOOR(func_294(iParam1));
	func_531(pedParam0, num);

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_494(i, &unk))
		{
			num2 = func_439(iParam1, i);
			func_497(pedParam0, i, num2);
		}
	}

	for (j = 0; j < 3; j = j + 1)
	{
		if (func_505(j, &unk2))
		{
			num2 = func_406(iParam1, j);
			func_387(pedParam0, j, num2);
		}
	}

	player = PLAYER::PLAYER_ID();
	PED::_0xA691C10054275290(pedParam0, player, func_532(iParam1));

	if (iParam1 == 0)
	{
		PED::_0x6734F0A6A52C371C(player, func_533(iParam1));
		PED::_0x024EC9B649111915(pedParam0, true);
	}

	return;
}

void func_277(int iParam0) // Position - 0x849B Hash - 0x46F19053 ^0xC758B564
{
	Ped mountOwnedByPlayer;
	int i;

	if (!func_215(iParam0))
		return;

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());

	if (!func_230(mountOwnedByPlayer))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		func_534(mountOwnedByPlayer, &Global_38.f_289.f_1[iParam0 /*460*/].f_15[i /*96*/], i);
	}

	return;
}

void func_278(int iParam0) // Position - 0x84F4 Hash - 0xAFB3D4A1 ^0x15B85D57
{
	Ped mountOwnedByPlayer;
	int i;
	Hash hash;
	Hash hash2;
	Any any;
	Any any2;

	if (!func_215(iParam0))
		return;

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());

	if (!func_230(mountOwnedByPlayer))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = Global_38.f_289.f_1[iParam0 /*460*/].f_382[i /*5*/];
	
		if (func_263(hash, 0))
		{
			hash2 = hash;
			any = Global_38.f_289.f_1[iParam0 /*460*/].f_382[i /*5*/].f_1;
			any2 = Global_38.f_289.f_1[iParam0 /*460*/].f_382[i /*5*/].f_2;
			PED::_0xC412AA1C73111FE0(mountOwnedByPlayer, hash2, any, any2, 0);
		}
	}

	return;
}

void func_279(int iParam0) // Position - 0x8593 Hash - 0x88CF9725 ^0x88CF9725
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_535(iParam0);
	func_536();
	return;
}

float func_280(int iParam0) // Position - 0x85BF Hash - 0xCDD17818 ^0xF4066B7F
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_444.f_1;
}

int func_281(int iParam0) // Position - 0x85F5 Hash - 0xACA56E21 ^0xE9AF9CDD
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_10;
}

void func_282(Ped pedParam0, int iParam1) // Position - 0x8628 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

Vector3 func_283(int iParam0) // Position - 0x864F Hash - 0xFC2F5C51 ^0xFC2F5C51
{
	var unk;
	var unk4;
	var unk5;
	var unk6;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return unk;

	if (iParam0 >= 7)
		return unk;

	!func_537(iParam0, &unk4);
	!func_538(iParam0, &unk5);
	!func_539(iParam0, &unk6);
	unk = unk4;
	unk.f_1 = unk5;
	unk.f_2 = unk6;
	return unk;
}

struct<8> func_284() // Position - 0x86B1 Hash - 0xD4760374 ^0x67A88526
{
	var unk;
	var unk9;
	var unk10;
	var unk11;
	var unk12;
	var unk13;
	var unk14;
	var unk15;
	var unk16;

	if (func_540(802754820, &unk9))
		unk.f_6 = unk9;

	if (func_540(-1886147520, &unk10))
		unk.f_7 = unk10;

	if (func_540(joaat("SLOTID_HORSE_BEDROLL"), &unk11))
		unk.f_4 = unk11;

	if (func_540(joaat("SLOTID_HORSE_BLANKET"), &unk12))
		unk = unk12;

	if (func_540(joaat("SLOTID_HORSE_HORN"), &unk13))
		unk.f_2 = unk13;

	if (func_540(joaat("SLOTID_HORSE_SADDLEBAG"), &unk14))
		unk.f_5 = unk14;

	if (func_540(joaat("SLOTID_HORSE_STIRRUP"), &unk15))
		unk.f_3 = unk15;

	if (func_540(joaat("SLOTID_HORSE_SADDLE"), &unk16))
		unk.f_1 = unk16;

	return unk;
}

void func_285(var uParam0) // Position - 0x875C Hash - 0x9FCC24A7 ^0x9FCC24A7
{
	func_541(uParam0);
	func_542(uParam0, 0);
	func_543(uParam0, 0);
	func_544(uParam0, 0);
	func_545(uParam0, 0);
	func_546(uParam0, 0);
	func_547(uParam0, 0);
	func_548(uParam0, 0);
	return;
}

int func_286(Ped pedParam0, int iParam1) // Position - 0x879B Hash - 0x7F66DB32 ^0x21887AA0
{
	int attributeIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (func_505(iParam1, &attributeIndex))
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(pedParam0, attributeIndex);

	return 0;
}

Hash func_287(int iParam0) // Position - 0x87E1 Hash - 0x7FE03C7A ^0xE25990EB
{
	int num;

	num = 1745919061;

	if (iParam0 <= 0)
		num = -2045421226;
	else if (iParam0 < 5)
		num = -1745814259;
	else if (iParam0 < 10)
		num = -325933489;
	else if (iParam0 < 15)
		num = -1065791927;
	else if (iParam0 < 20)
		num = -844699484;
	else if (iParam0 < 25)
		num = -1273449080;
	else if (iParam0 < 30)
		num = 927185840;
	else if (iParam0 < 35)
		num = 149872391;
	else if (iParam0 < 40)
		num = 399015098;
	else if (iParam0 < 45)
		num = -644349862;
	else if (iParam0 < 50)
		num = 1745919061;
	else if (iParam0 < 55)
		num = 1004225511;
	else if (iParam0 < 60)
		num = 1278600348;
	else if (iParam0 < 65)
		num = 502499352;
	else if (iParam0 < 70)
		num = -2093198664;
	else if (iParam0 < 75)
		num = -1837436619;
	else if (iParam0 < 80)
		num = 1736416063;
	else if (iParam0 < 85)
		num = 2040610690;
	else if (iParam0 < 90)
		num = -1173634986;
	else if (iParam0 < 95)
		num = -867801909;
	else if (iParam0 >= 95)
		num = 1960266524;

	return num;
}

void func_288(int iParam0, Hash hParam1) // Position - 0x8952 Hash - 0xDE428423 ^0x8B767C94
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_1 = hParam1;
	return;
}

BOOL func_289(int iParam0) // Position - 0x8980 Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_457;
}

void func_290(Ped pedParam0, BOOL bParam1) // Position - 0x89B4 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_291(Ped pedParam0, var uParam1, var uParam2, Hash hParam3, BOOL bParam4) // Position - 0x89F9 Hash - 0xF5ED8ECD ^0x6AD8EAA6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_549(pedParam0);
	func_550(pedParam0, uParam1);
	func_551(pedParam0);
	func_552(pedParam0, uParam2);

	if (hParam3 != 0)
		func_553(pedParam0, hParam3, false);

	if (bParam4)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, true);

	return;
}

void func_292(int iParam0) // Position - 0x8A65 Hash - 0xF5A23C19 ^0xCAFB2C0D
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_19 = { 0f, 0f, 0f };
	Global_1902887[iParam0 /*43*/].f_22 = 0f;
	return;
}

void func_293(int iParam0) // Position - 0x8AA1 Hash - 0xA5F9E65B ^0xA5F9E65B
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_317(iParam0, 1);
	return;
}

float func_294(int iParam0) // Position - 0x8ACA Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1;
}

int func_295(ePedType eptParam0, int iParam1) // Position - 0x8B00 Hash - 0x52CBB6A4 ^0xB4EE9F92
{
	int defaultAttributePointsNeededForRank;

	if (!STREAMING::IS_MODEL_VALID(eptParam0))
		eptParam0 = joaat("a_c_horse_tennesseewalker_chestnut");

	defaultAttributePointsNeededForRank = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(eptParam0, 7, iParam1);
	return defaultAttributePointsNeededForRank;
}

float func_296(float fParam0, float fParam1, float fParam2) // Position - 0x8B26 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * fParam1);
}

BOOL func_297() // Position - 0x8B3B Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

BOOL func_298() // Position - 0x8B57 Hash - 0x65674CA9 ^0xC0D8F466
{
	return true;
}

int func_299() // Position - 0x8B76 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1902887.f_364;
}

void func_300(int iParam0) // Position - 0x8B85 Hash - 0xC421D95B ^0x9AF120BB
{
	Global_1902887.f_364.f_9 = iParam0;
	return;
}

void func_301(int iParam0) // Position - 0x8B98 Hash - 0xC421D95B ^0xA01E003E
{
	Global_1902887.f_364.f_10 = iParam0;
	return;
}

void func_302(int iParam0, int iParam1) // Position - 0x8BAB Hash - 0xB6344184 ^0x7481B0DF
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887.f_364.f_1[iParam0] != iParam1;
	Global_1902887.f_364.f_1[iParam0] = iParam1;
	return;
}

void func_303(int iParam0) // Position - 0x8BEE Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1902887.f_302 = Global_1902887.f_302 - Global_1902887.f_302 && iParam0;
	return;
}

void func_304(int iParam0) // Position - 0x8C0F Hash - 0xC421D95B ^0xDB6F317E
{
	Global_1902887.f_364.f_11 = iParam0;
	return;
}

int func_305() // Position - 0x8C22 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1896646.f_41;
}

BOOL func_306() // Position - 0x8C30 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_307(int iParam0) // Position - 0x8C50 Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_151(iParam0) == 0)
		return false;

	return true;
}

void func_308() // Position - 0x8C83 Hash - 0x6E7760EB ^0xBA4A48A9
{
	int num;

	num = Global_38.f_289.f_1[5 /*460*/].f_11;

	switch (num)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(func_78(6)) && func_140(Global_33, func_78(6), true, true) <= 80f)
				func_312("WHISTLE_NEAR_UNBONDED", 10000, 0, 0, 0, true);
			else
				func_312("WHISTLE_HORSE_DEAD", 10000, 0, 0, 0, true);
			break;
	
		case 2:
			func_312("WHISTLE_HORSE_STOLEN", 10000, 0, 0, 0, true);
			break;
	}

	return;
}

BOOL func_309(Interior inParam0) // Position - 0x8D0D Hash - 0xE90CFCF7 ^0xD86E30BD
{
	var position;
	int nameHash;

	if (INTERIOR::IS_VALID_INTERIOR(inParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(inParam0, &position, &nameHash);
	
		switch (nameHash)
		{
			case joaat("l_14_cave_int"):
			case joaat("gap_mine_int"):
			case joaat("mil_mine_cave_int"):
			case joaat("m05_bearcave_main"):
			case joaat("elh_seacaves_int"):
			case joaat("bea_01_int"):
			case joaat("agu_fus_cave_int"):
			case 1633500362:
				return true;
		}
	}

	return false;
}

BOOL func_310(Interior inParam0) // Position - 0x8D68 Hash - 0xE90CFCF7 ^0xD86E30BD
{
	var position;
	int nameHash;

	if (INTERIOR::IS_VALID_INTERIOR(inParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(inParam0, &position, &nameHash);
	
		switch (nameHash)
		{
			case 653987431:
			case joaat("hea_tunnel_02"):
			case joaat("j_16_tunnel_int"):
				return true;
		}
	}

	return false;
}

BOOL func_311(int iParam0) // Position - 0x8DA5 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_66(iParam0))
		return false;

	ped = func_78(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

int func_312(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x8DF9 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_313(int iParam0) // Position - 0x8E34 Hash - 0xFF763838 ^0x5BFB6072
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1902887[iParam0 /*43*/].f_25))
	{
		if (Global_1902887[iParam0 /*43*/].f_24 == 2)
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
			MAP::BLIP_ADD_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
		}
		else if (Global_1902887[iParam0 /*43*/].f_24 == 1)
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
			MAP::BLIP_ADD_MODIFIER(Global_1902887[iParam0 /*43*/].f_25, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
		}
	}

	return;
}

void func_314(int iParam0) // Position - 0x8ED6 Hash - 0xD3567106 ^0x33AFFA85
{
	Ped horse;
	ePedType model;
	int num;
	int defaultMaxAttributeRank;
	var src;
	var src2;
	int gameTimer;
	BOOL flag;
	BOOL flag2;
	int num2;
	int num3;
	var dst;
	Hash styleHash;
	Blip blip;
	Vector3 vector;
	float heading;
	var unk47;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	int whistleType;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_20(iParam0, &horse);
	model = func_158(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
	{
		func_302(iParam0, 6);
		return;
	}

	num = func_103(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	func_20(0, &src);
	func_20(1, &src2);

	if (iParam0 == 1 && !src2.f_2)
	{
		func_302(iParam0, 6);
		return;
	}

	gameTimer = MISC::GET_GAME_TIMER();
	flag = false;

	if (iParam0 == 0)
	{
		flag = true;
	
		if (!src.f_11)
			if (src2.f_11 && !src2.f_10)
				flag = false;
	}

	if (iParam0 == 1)
		if (!src.f_2)
			flag = true;

	flag;

	switch (func_315(iParam0))
	{
		case 0:
			func_302(iParam0, 1);
			[[fallthrough]];
	
		case 1:
			if (iParam0 == 0)
			{
				if (func_74(0) == 1 && !func_66(0))
				{
					func_302(iParam0, 2);
					return;
				}
			}
		
			if (!func_66(iParam0))
			{
				func_302(iParam0, 6);
				return;
			}
		
			if (func_103(iParam0) < 1)
			{
				func_302(iParam0, 6);
				return;
			}
		
			if (!horse.f_11)
			{
				if (func_554())
				{
					func_302(iParam0, 2);
					return;
				}
			
				flag2 = false;
			
				if (iParam0 == 0)
					if (src2.f_10)
						flag2 = true;
			
				if (iParam0 == 1)
					if (src.f_10)
						flag2 = true;
			
				if (!flag && flag2)
					flag = true;
			
				if (!func_229())
					flag = false;
			
				if (flag)
				{
					num2 = -1;
					num3 = -1;
				
					if (func_440(1) < 3)
					{
						num2 = 1;
					
						if (num < defaultMaxAttributeRank)
							num3 = 6;
					}
					else
					{
						num2 = 2;
					}
				
					if (flag2)
					{
						if (iParam0 == 0)
							num2 = 3;
						else if (iParam0 == 1)
							num2 = 4;
					}
					else
					{
						if (iParam0 == 0)
							MISC::COPY_SCRIPT_STRUCT(&dst, &src2, 12);
						else if (iParam0 == 1)
							MISC::COPY_SCRIPT_STRUCT(&dst, &src, 12);
					
						if (dst.f_1)
							if (!dst.f_11)
								num2 = 5;
					}
				
					if (num3 != -1)
						func_228(num3, true);
				
					if (num2 == 1 || num2 == 3 || num2 == 4)
					{
						styleHash = 0;
					
						if (iParam0 == 0)
							styleHash = joaat("BLIP_STYLE_PLAYER_HORSE");
						else if (iParam0 == 1)
							styleHash = joaat("BLIP_STYLE_TEMPORARY_HORSE");
					
						if (styleHash != 0)
						{
							if (iParam0 == 0)
								blip = func_555();
							else if (iParam0 == 1)
								blip = func_556();
						
							if (!MAP::DOES_BLIP_EXIST(blip))
							{
								blip = MAP::_BLIP_ADD_FOR_STYLE(styleHash);
								MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
							
								if (iParam0 == 0)
									func_557(&blip);
								else if (iParam0 == 1)
									func_558(&blip);
							}
						
							func_559(num2, blip, true);
						}
					}
					else if (num2 != -1)
					{
						func_228(num2, true);
					}
				}
			}
		
			func_302(iParam0, 5);
			break;
	
		case 2:
			func_560(&(Global_1902887[iParam0 /*43*/].f_4));
			func_302(iParam0, 3);
			[[fallthrough]];
	
		case 3:
			unk47 = { func_561(iParam0) };
		
			if (!func_562(&(Global_1902887[iParam0 /*43*/].f_4), Global_34, unk47, horse, 1065353216))
			{
				if (Global_1902887[iParam0 /*43*/].f_4.f_1)
				{
					if (!func_306())
						func_312("WHISTLE_NOSPAWN_AREA", 10000, 0, 0, 0, true);
				
					func_250(iParam0);
					func_563(Global_33, "HORSE_NO_SHOW", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
					func_302(iParam0, 6);
				}
			
				return;
			}
		
			vector = { func_564(&(Global_1902887[iParam0 /*43*/].f_4)) };
			heading = func_565(vector, Global_34, 1);
		
			if (!func_66(iParam0))
			{
				func_566(iParam0, vector, heading);
				func_567(iParam0);
			}
		
			func_302(iParam0, 4);
			[[fallthrough]];
	
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(horse))
				return;
		
			if (ENTITY::IS_ENTITY_DEAD(horse) || PED::IS_PED_INJURED(horse))
				return;
		
			vector = { func_564(&(Global_1902887[iParam0 /*43*/].f_4)) };
			heading = func_565(vector, Global_34, 1);
			ENTITY::FREEZE_ENTITY_POSITION(horse, false);
			ENTITY::SET_ENTITY_COORDS(horse, vector, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(horse, heading);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(horse, false);
			func_302(iParam0, 5);
			[[fallthrough]];
	
		case 5:
			if (!horse.f_2)
			{
				func_302(iParam0, 6);
				return;
			}
		
			if (horse.f_10)
			{
				func_302(iParam0, 6);
				return;
			}
		
			flag3 = false;
		
			if (ENTITY::DOES_ENTITY_EXIST(horse.f_9))
				if (func_568(iParam0))
					flag3 = true;
		
			if (flag3)
				func_569(iParam0, true);
		
			flag4 = false;
		
			if (horse.f_11 || func_554())
				flag4 = true;
		
			if (!flag4)
			{
				func_61(iParam0);
				func_313(iParam0);
				func_302(iParam0, 6);
				return;
			}
		
			flag5 = true;
		
			if (flag5)
			{
				PHYSICS::_UNHITCH_HORSE(horse);
				ENTITY::FREEZE_ENTITY_POSITION(horse, false);
			
				if (func_570() == 0)
					if (func_128(horse, 2043986356))
						func_300(1);
			
				whistleType = func_570();
				TASK::TASK_GO_TO_WHISTLE(horse, Global_33, whistleType);
				FLOCK::_0xFF1E339CE40EAAAF(horse, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(horse, 48, false);
				func_304(gameTimer);
			}
		
			func_61(iParam0);
			func_313(iParam0);
			func_302(iParam0, 6);
			break;
	
		case 6:
			break;
	}

	return;
}

int func_315(int iParam0) // Position - 0x93EB Hash - 0x999843B2 ^0x25C3BC88
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_1902887.f_364.f_1[iParam0];
}

BOOL func_316(int iParam0, int iParam1) // Position - 0x941C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_317(int iParam0, int iParam1) // Position - 0x942B Hash - 0x20A81385 ^0x7CC00FE9
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_23 = Global_1902887[iParam0 /*43*/].f_23 - Global_1902887[iParam0 /*43*/].f_23 && iParam1;
	return;
}

BOOL func_318(Ped pedParam0) // Position - 0x946F Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_333(pedParam0);

	if (num == -1)
		return false;

	return true;
}

BOOL func_319(Ped pedParam0) // Position - 0x94AD Hash - 0xFE36340F ^0x71F3CC2E
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_571(ENTITY::GET_ENTITY_MODEL(pedParam0)))
		return true;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseCompanion"))
		return true;

	return false;
}

BOOL func_320(Ped pedParam0) // Position - 0x94E6 Hash - 0x5B451C0F ^0x5FE79060
{
	char* propertyName;

	propertyName = "HorseMission";

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
		return true;

	return false;
}

BOOL func_321(Ped pedParam0) // Position - 0x9512 Hash - 0x52B322EA ^0x7B2B0A1E
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return false;

	if (FLOCK::_GET_ANIMAL_IS_WILD(pedParam0) == true)
		return true;

	return false;
}

BOOL func_322(ePedType eptParam0) // Position - 0x954D Hash - 0xE48228D0 ^0xE48228D0
{
	switch (eptParam0)
	{
		case joaat("a_c_donkey_01"):
			return true;
	}

	return false;
}

BOOL func_323(ePedType eptParam0) // Position - 0x956B Hash - 0xE48228D0 ^0xE48228D0
{
	switch (eptParam0)
	{
		case joaat("a_c_horsemule_01"):
		case joaat("a_c_horsemulepainted_01"):
			return true;
	}

	return false;
}

Ped func_324() // Position - 0x958F Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1902887.f_392;
}

void func_325(Ped pedParam0) // Position - 0x959E Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1902887.f_392 = pedParam0;
	return;
}

int func_326() // Position - 0x95AF Hash - 0x8190E5D8 ^0xB4FB0E1F
{
	return Global_1902887.f_392.f_6;
}

void func_327(int iParam0) // Position - 0x95C0 Hash - 0xC421D95B ^0xD233A58C
{
	Global_1902887.f_392.f_6 = iParam0;
	return;
}

BOOL func_328(Ped pedParam0, var uParam1, int iParam2) // Position - 0x95D3 Hash - 0x563A2BEB ^0xC99B1DC1
{
	Ped activeAnimalOwner;
	float num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	activeAnimalOwner = PED::_GET_ACTIVE_ANIMAL_OWNER(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return false;

	*uParam1 = activeAnimalOwner;

	if (ENTITY::IS_ENTITY_DEAD(activeAnimalOwner))
		return false;

	if (PED::IS_PED_HOGTIED(activeAnimalOwner))
		return false;

	if (iParam2 > 0f)
	{
		num = func_140(pedParam0, activeAnimalOwner, false, true);
	
		if (num > iParam2)
			return false;
	}

	return true;
}

BOOL func_329(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9648 Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_572(bParam1, bParam2, bParam3);

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

BOOL func_330(Ped pedParam0) // Position - 0x977D Hash - 0xC84919B2 ^0xA3928628
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	if (func_143(pedParam0) == 0f)
		return true;

	return false;
}

int func_331(Ped pedParam0) // Position - 0x97CA Hash - 0xC7DCE21 ^0x27B2D8D6
{
	int attributeRank;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, 7);
	return attributeRank;
}

BOOL func_332(Ped pedParam0) // Position - 0x9800 Hash - 0x4801778A ^0xC1FB25EE
{
	Hash entityModel;
	var unk;
	Player player;

	if (func_81(1024))
		return false;

	if (!func_121(42))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	if (func_318(pedParam0))
		if (func_333(pedParam0) != 6)
			return false;

	if (func_319(pedParam0))
		return false;

	if (func_320(pedParam0))
		return false;

	if (func_321(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (func_322(entityModel))
		return false;

	if (func_323(entityModel))
		return false;

	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		if (PED::GET_MOUNT(Global_33) == pedParam0)
		{
		}
		else
		{
			return false;
		}
	}

	if (func_328(pedParam0, &unk, 100f))
		return false;

	player = PLAYER::PLAYER_ID();

	if (func_329(player, true, false, true))
		return false;

	LAW::_ARE_WITNESSES_PENDING(player);

	if (LAW::ARE_WITNESSES_ACTIVE(player))
		return false;

	if (LAW::_ARE_INVESTIGATORS_ACTIVE(player, true, 0))
		return false;

	if (!func_330(pedParam0))
		return false;

	return true;
}

int func_333(Ped pedParam0) // Position - 0x9934 Hash - 0xD44AE303 ^0xA29D7F05
{
	int i;

	if (pedParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (pedParam0 == Global_1902887[i /*43*/])
			return i;
	}

	return -1;
}

void func_334(int iParam0, int iParam1) // Position - 0x9979 Hash - 0x7A45E039 ^0xE802421E
{
	Player playerIndex;
	Ped horse;
	Ped horse2;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);
	func_250(iParam0);
	func_250(iParam0);
	func_573(iParam0, iParam1);
	func_574(iParam0, iParam1);
	func_575(iParam0, iParam1);
	horse = func_78(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(horse))
		if (iParam0 == 0)
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse);
		else if (iParam0 == 1)
			PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse);

	horse2 = func_78(iParam1);

	if (ENTITY::DOES_ENTITY_EXIST(horse2))
		if (iParam1 == 0)
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse2);
		else if (iParam1 == 1)
			PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse2);

	func_335();
	return;
}

void func_335() // Position - 0x9A1B Hash - 0x211BCC6D ^0x211BCC6D
{
	if (func_66(0))
		func_61(0);

	if (func_66(1))
		func_61(1);

	if (func_66(5))
		func_61(5);

	if (func_66(6))
		func_250(6);

	return;
}

void func_336(Ped pedParam0, BOOL bParam1) // Position - 0x9A57 Hash - 0xCFC5BF60 ^0x1C6CB0EE
{
	int num;

	if (func_2() == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (func_318(pedParam0))
	{
		num = func_333(pedParam0);
		func_250(num);
	}

	if (func_66(6))
		func_104(6, false);

	func_105(6);
	func_349(pedParam0, 6, 0);
	func_153(6, 1);

	if (!bParam1)
	{
		func_391(6, 0);
		func_576(MISC::GET_GAME_TIMER());
	}

	func_335();
	return;
}

void func_337(int iParam0) // Position - 0x9ADF Hash - 0x79C2D19 ^0x7856ADEC
{
	int threadId;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	threadId = func_134(iParam0);

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		func_136(iParam0);
	else if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		func_136(iParam0);

	return;
}

void func_338(Ped pedParam0) // Position - 0x9B2D Hash - 0x15D3E697 ^0xE788B98B
{
	int attributeIndex;
	int attributeIndex2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	attributeIndex = func_516();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(pedParam0, attributeIndex, 0);
	attributeIndex2 = func_517();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(pedParam0, attributeIndex2, 0);
	PED::_SET_HEALTH_RECHARGE_MULTIPLIER(pedParam0, 1f);
	PED::_SET_STAMINA_RECHARGE_MULTIPLIER(pedParam0, 1f);
	PED::_SET_STAMINA_DEPLETION_MULTIPLIER(pedParam0, 1f);
	return;
}

void func_339(var uParam0) // Position - 0x9B8A Hash - 0x22ADAD3D ^0xB8DAA330
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
	uParam0->f_2 = 0;
	return;
}

void func_340(int iParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x9BA8 Hash - 0x139DE025 ^0xDFE0F334
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	!func_577(iParam0, hParam1);
	!func_578(iParam0, hParam1.f_1);
	!func_579(iParam0, hParam1.f_2);
	return;
}

void func_341(var uParam0) // Position - 0x9BF2 Hash - 0x7858D7C0 ^0x7858D7C0
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_216(&uParam0->[i /*96*/]);
	}

	return;
}

void func_342(Any* panParam0) // Position - 0x9C16 Hash - 0x92E3936E ^0xDB085754
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		panParam0->[i /*5*/] = 0;
		panParam0->[i /*5*/].f_1 = 0;
		panParam0->[i /*5*/].f_2 = 0;
		panParam0->[i /*5*/].f_3 = 0;
		panParam0->[i /*5*/].f_4 = 0;
	}

	return;
}

void func_343(int iParam0) // Position - 0x9C5B Hash - 0xEC3DEAB9 ^0x4DEC04FB
{
	int i;

	iParam0->f_1 = 0f;
	*iParam0 = 0;

	for (i = 0; i < 21; i = i + 1)
	{
		if (i == -1)
		{
		}
		else
		{
			iParam0->f_2[i] = 0f;
		}
	}

	return;
}

void func_344(int iParam0, int iParam1) // Position - 0x9C91 Hash - 0xB69B78FC ^0xB22068A7
{
	int num;

	num = 100;
	*iParam1 = num;
	iParam1->f_1 = 0f;
	iParam1->f_2 = 0f;
	iParam1->f_3 = 0;
	return;
}

void func_345(int iParam0, int iParam1) // Position - 0x9CB1 Hash - 0xD41D26E5 ^0x1EE19431
{
	int num;

	num = 0;

	if (iParam0 == 2)
		num = 50;

	*iParam1 = num;
	iParam1->f_1 = 0f;
	iParam1->f_2 = 0f;
	iParam1->f_3 = 0;
	return;
}

void func_346(BOOL bParam0) // Position - 0x9CDA Hash - 0x7100DF7A ^0xCD4606BC
{
	*bParam0 = 0;
	bParam0->f_1 = -1f;
	return;
}

void func_347(BOOL bParam0) // Position - 0x9CEB Hash - 0x5F76BB50 ^0x40F56A0B
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -15;
	return;
}

void func_348(var uParam0) // Position - 0x9D03 Hash - 0x92BF775F ^0x1739D63E
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	return;
}

void func_349(Ped pedParam0, int iParam1, int iParam2) // Position - 0x9D16 Hash - 0x83822F7F ^0xF24D19B
{
	Player playerIndex;
	int num;
	ePedType type;
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		if (iParam2 == 0)
			return;

	if (iParam1 == -1)
		return;

	if (iParam1 >= 7)
		return;

	if (func_319(pedParam0))
		return;

	if (func_320(pedParam0))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, true);

	func_260(iParam1, pedParam0);
	func_580(iParam1, iParam2);
	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);

	if (pedParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(playerIndex))
	{
		func_581(iParam1, 0);
	}
	else
	{
		num = func_582(pedParam0);
		func_581(iParam1, num);
	}

	if (iParam1 == 0)
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, pedParam0);
	else if (iParam1 == 1)
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, pedParam0);

	if (iParam1 == 6)
		return;

	func_275(pedParam0);

	if (func_400(iParam1))
		func_401(iParam1);

	type = func_158(iParam1);
	hash = func_402(type);
	func_403(iParam1, hash);
	return;
}

void func_350(int iParam0, int iParam1) // Position - 0x9E21 Hash - 0x29B1BAB8 ^0xB9A693D4
{
	ePedType model;
	var unk;
	var unk2;
	int num;
	float num2;
	Ped ped;
	int num3;
	int bondingLevel;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	model = func_158(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		func_583(&unk, &model, &unk2);

	num = func_584(model);

	if (iParam1 > num)
		return;

	num2 = BUILTIN::TO_FLOAT(func_295(model, iParam1));
	Global_38.f_289.f_1[iParam0 /*460*/].f_398 = iParam1;
	Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1 = num2;
	func_585(iParam1);
	ped = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	num3 = BUILTIN::FLOOR(Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1);
	func_531(ped, num3);
	bondingLevel = func_331(ped);
	Global_38.f_289.f_1[iParam0 /*460*/].f_398 = bondingLevel;
	PED::_SET_MOUNT_BONDING_LEVEL(ped, bondingLevel);
	return;
}

BOOL func_351(Entity eParam0) // Position - 0x9F1B Hash - 0x4BD81D3A ^0x7983258C
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(eParam0);

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "CaravanCommonHorse"))
		return true;

	return false;
}

BOOL func_352(Entity eParam0) // Position - 0x9F4C Hash - 0x4BD81D3A ^0xF13706F3
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(eParam0);

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "CaravanLivestock"))
		return true;

	return false;
}

BOOL func_353(Ped pedParam0) // Position - 0x9F7D Hash - 0x7207D419 ^0xFB2A62A
{
	char* propertyName;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	propertyName = "bHorseHasBeenStolen";

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
		return false;
	else if (DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
		return true;

	return false;
}

BOOL func_354() // Position - 0x9FD5 Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1893611 & true != 0 && func_586() != -1;
}

void func_355(BOOL bParam0, int iParam1) // Position - 0x9FF0 Hash - 0xCC16269 ^0xB563FF97
{
	if (bParam0)
	{
		Global_1940252 = 1;
		Global_1940252.f_1 = iParam1;
	}
	else
	{
		Global_1940252 = 2;
	}

	return;
}

void func_356(BOOL bParam0) // Position - 0xA012 Hash - 0x7A17EF83 ^0x30F00FD3
{
	Global_1904379.f_2 = 0;
	Global_1904379.f_1 = 0;
	Global_1904379.f_3 = 0;
	Global_1904379.f_4 = 0;
	Global_1904379.f_5 = 0;
	Global_1904379.f_6 = 0;
	Global_1904379.f_7 = 0;

	if (bParam0)
	{
		Global_1904379.f_8 = 0;
		Global_1904379.f_9 = 0;
		Global_1904379.f_10 = 0;
		Global_1904379.f_11 = 0;
	}

	return;
}

void func_357(int iParam0) // Position - 0xA06C Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_1904379 = iParam0;
	return;
}

BOOL func_358() // Position - 0xA07A Hash - 0x4228A1C2 ^0xF41AB6A4
{
	return Global_1904379.f_5;
}

Ped func_359() // Position - 0xA088 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1904379.f_2;
}

Hash func_360() // Position - 0xA096 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1904379.f_1;
}

BOOL func_361(Hash hParam0) // Position - 0xA0A4 Hash - 0x65C15F ^0x65C15F
{
	if (func_587(hParam0))
		return true;

	if (func_588(hParam0))
		return true;

	if (func_589(hParam0))
		return true;

	if (func_590(hParam0))
		return true;

	if (func_591(hParam0))
		return true;

	if (func_592(hParam0))
		return true;

	if (func_593(hParam0))
		return true;

	return false;
}

BOOL func_362() // Position - 0xA108 Hash - 0xE8E02CE0 ^0x87CB72C0
{
	Ped animal;
	var unk;

	animal = func_359();
	unk = func_360();

	if (!ENTITY::DOES_ENTITY_EXIST(animal))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(animal))
		return false;

	if (PED::IS_PED_INJURED(animal))
		return false;

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, animal))
		return false;

	if (!func_361(unk))
		return false;

	if (PED::IS_PED_SWIMMING(Global_33))
		return false;

	if (PED::IS_PED_SWIMMING(animal))
		return false;

	return true;
}

BOOL func_363(Ped pedParam0, Hash hParam1) // Position - 0xA17F Hash - 0x1A778EA2 ^0xA1CE3952
{
	Hash info;
	BOOL flag;
	Hash interactionModel;
	Hash interactionType;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	info.f_3 = -1;
	info.f_12 = 4;
	info.f_17 = 4;

	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO(hParam1, &info))
	{
	}

	flag = false;
	interactionModel = info;

	if (func_587(hParam1))
	{
		interactionModel = 0;
		interactionType = joaat("Interaction_Food");
		flag = true;
	}

	if (func_589(hParam1) || func_590(hParam1) || func_588(hParam1))
	{
		interactionModel = joaat("p_cs_syringe01x");
		interactionType = joaat("Interaction_Injection_Quick");
		flag = true;
	}

	if (func_591(hParam1))
	{
		interactionType = joaat("Interaction_Ointment");
		flag = true;
	}

	if (func_592(hParam1))
	{
		interactionType = joaat("Interaction_Brush");
		flag = true;
	}

	if (!flag)
		return false;

	TASK::TASK_ANIMAL_INTERACTION(Global_33, pedParam0, interactionType, interactionModel, false);
	return true;
}

void func_364(int iParam0) // Position - 0xA297 Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1904379.f_3 = iParam0;
	return;
}

int func_365() // Position - 0xA2A7 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1904379.f_3;
}

void func_366(int iParam0) // Position - 0xA2B5 Hash - 0x29A8F290 ^0x22A57D40
{
	Global_1904379.f_4 = iParam0;
	return;
}

void func_367(Ped pedParam0) // Position - 0xA2C5 Hash - 0x29A8F290 ^0x5B1674A8
{
	Global_1904379.f_8 = pedParam0;
	return;
}

void func_368(int iParam0) // Position - 0xA2D5 Hash - 0x29A8F290 ^0x870EAF89
{
	Global_1904379.f_9 = iParam0;
	return;
}

void func_369(int iParam0) // Position - 0xA2E5 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1904379.f_10 = iParam0;
	return;
}

void func_370(int iParam0) // Position - 0xA2F5 Hash - 0x29A8F290 ^0x94542F8A
{
	Global_1904379.f_7 = iParam0;
	return;
}

BOOL func_371() // Position - 0xA305 Hash - 0x4228A1C2 ^0x4A2C267D
{
	return Global_1904379.f_7;
}

BOOL func_372(Hash hParam0, Hash hParam1) // Position - 0xA313 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_263(hParam0, 0))
		return func_595(func_594(hParam0), hParam1);

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

int func_373(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xA354 Hash - 0x6E56F3C0 ^0x23695AE
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;
	var unk2;

	if (!func_263(hParam0, 0))
		return 0;

	if (hParam3 == -142743235)
		if (func_596(hParam0))
			hParam3 = 562618531;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_597(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_598(hParam0, -iParam1, flag, flag2, flag3, false, false);
	
		return 0;
	}

	if (!func_599(hParam0, 1))
		return 0;

	statId = { func_600(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_601(hParam0, false, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_601(hParam0, false, false, false) - iParam1 < 0)
		{
			func_373(hParam0, func_601(hParam0, false, false, false), bParam2, hParam3);
			return 0;
		}
	}

	if (func_602(hParam0) == joaat("WEAPON"))
	{
		if (!func_603(hParam0, iParam1, false, hParam3))
			return 0;
	}
	else if (!func_604(hParam0, iParam1, hParam3, bParam2, false))
	{
		return 0;
	}
	else
	{
		unk2 = { func_605(hParam0, false, false) };
	
		if (func_522(false) && unk2.f_4 == joaat("SLOTID_SATCHEL"))
			func_606(1, false, 0);
	}

	if (hParam0 == joaat("document_player_journal"))
		Global_1940085.f_21 = 0;

	if (!func_522(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_598(hParam0, -iParam1, flag, flag2, flag3, false, false);

	return 1;
}

void func_374(Ped pedParam0, Hash hParam1) // Position - 0xA506 Hash - 0x61EDE2F8 ^0xE776EE8E
{
	BOOL flag;
	int num;

	if (!func_361(hParam1))
		return;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return;

	flag = func_2() == 0;

	if (func_587(hParam1))
	{
		if (flag)
			func_607(pedParam0, hParam1);
		else
			func_608(pedParam0, hParam1);
	
		return;
	}

	if (func_588(hParam1))
	{
		if (flag)
			func_609(pedParam0, hParam1);
		else
			func_610(pedParam0, hParam1);
	
		return;
	}

	if (func_589(hParam1))
	{
		if (flag)
			func_611(pedParam0, hParam1);
		else
			func_612(pedParam0, hParam1);
	
		return;
	}

	if (func_590(hParam1))
	{
		if (flag)
			func_613(pedParam0, hParam1);
		else
			func_614(pedParam0, hParam1);
	
		return;
	}

	if (func_591(hParam1))
	{
		if (flag)
			func_615(pedParam0, hParam1);
		else
			func_616(pedParam0, hParam1);
	
		return;
	}

	if (func_593(hParam1))
	{
		if (flag)
			func_617(pedParam0, hParam1);
		else
			func_618(pedParam0, hParam1);
	
		return;
	}

	if (func_592(hParam1))
	{
		if (flag)
		{
			num = func_379();
			func_619(pedParam0, hParam1, num);
		}
		else
		{
			func_620(pedParam0, hParam1, func_379());
		}
	
		return;
	}

	return;
}

BOOL func_375() // Position - 0xA66B Hash - 0x4228A1C2 ^0x341213A7
{
	return Global_1904379.f_6;
}

Ped func_376() // Position - 0xA679 Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1904379.f_8;
}

BOOL func_377() // Position - 0xA687 Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1904379.f_10;
}

void func_378(int iParam0) // Position - 0xA695 Hash - 0x29A8F290 ^0x82294867
{
	Global_1904379.f_11 = iParam0;
	return;
}

int func_379() // Position - 0xA6A5 Hash - 0x4228A1C2 ^0x5FAFE78F
{
	return Global_1904379.f_9;
}

struct<4> func_380(BOOL bParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0xA6B3 Hash - 0xD6C81182 ^0x1AA98D86
{
	var guid2;
	var guid;
	BOOL flag;
	BOOL flag2;
	int num;
	var unk32;

	guid2.f_9 = joaat("SLOTID_NONE");
	!func_621(&guid2, bParam0);

	if (!bParam2)
	{
		guid = { func_622() };
	
		if (func_623() && INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			guid2 = { guid };
		else if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&guid, &guid2))
			func_624(&guid2, false);
	}

	if (iParam3 == -1)
		iParam3 = func_625(PLAYER::PLAYER_ID());

	flag = func_626();
	flag2 = false;

	if (flag)
		flag2 = func_627(75);

	num = func_628(iParam3, 0);

	if (num != 3)
		if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_17418.f_55.f_61[num /*4*/]))
			guid2 = { Global_17418.f_55.f_61[num /*4*/] };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid2))
	{
		if (!bParam1)
			return func_519();
	
		if (!func_629(&guid2, false))
			unk32 = { func_630(bParam0) };
		else
			unk32 = { guid2 };
	
		return unk32;
	}

	return guid2;
}

BOOL func_381(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0xA7B1 Hash - 0x6A53C1E0 ^0x277708DC
{
	if (iParam1 == -1)
		return false;

	func_631(&Global_1903838);

	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_632(panParam0, &Global_1903838, &(Global_1903838.f_53), bParam2))
				return false;
			break;
	
		case 2:
			if (!func_633(panParam0, &Global_1903838, &(Global_1903838.f_82), bParam2))
				return false;
			break;
	}

	return true;
}

int func_382(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0xA820 Hash - 0x6EF8944C ^0xEF24A6F2
{
	int i;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return 0;

	for (i = 0; i < 10; i = i + 1)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_17418.f_55.f_61.f_41[i /*56*/], &uParam0))
			return Global_17418.f_55.f_61.f_41[i /*56*/].f_40[iParam4 /*4*/];
	}

	if (!func_634(&uParam0))
		return 0;

	return 0;
}

var func_383() // Position - 0xA884 Hash - 0x4228A1C2 ^0x4EB570BC
{
	return Global_1904379.f_11;
}

int func_384(int iParam0, int iParam1, int iParam2) // Position - 0xA892 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

float func_385(float fParam0, float fParam1, float fParam2) // Position - 0xA8B7 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_386(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0xA8DE Hash - 0xCA53D0AE ^0x7488D437
{
	iParam6 = func_384(iParam6, 0, 100);
	func_635(uParam1, iParam5, iParam6);

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
		return;

	func_387(pedParam0, iParam5, iParam6);
	return;
}

void func_387(Ped pedParam0, int iParam1, int iParam2) // Position - 0xA92D Hash - 0x498B41C8 ^0xF542C5C9
{
	int attributeIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	iParam2 = func_384(iParam2, 0, 100);

	if (func_505(iParam1, &attributeIndex))
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(pedParam0, attributeIndex, iParam2);

	return;
}

BOOL func_388(int iParam0) // Position - 0xA97A Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_389(int iParam0) // Position - 0xA98D Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_390(int iParam0, float fParam1) // Position - 0xA9B7 Hash - 0x4DC80607 ^0xF0697441
{
	char* str;
	BOOL flag;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "HORSE_XP_TRUST_EARNED";
			break;
	
		case 1:
		case 2:
		case 3:
			return;
	
		case 4:
			str = "HORSE_XP_LEADING";
			break;
	
		case 5:
			return;
	
		case 6:
			str = "HORSE_XP_BREAK_HORSE";
			break;
	
		case 7:
		case 8:
			str = "HORSE_XP_PATTED";
			break;
	
		case 9:
			str = "HORSE_XP_CALM";
			break;
	
		case 10:
		case 11:
			str = "HORSE_XP_HITCH";
			break;
	
		case 12:
		case 13:
		case 14:
			str = "HORSE_XP_FED";
			break;
	
		case 15:
			str = "HORSE_XP_TREAT";
			break;
	
		case 16:
		case 17:
			str = "HORSE_XP_GROOM";
			break;
	
		case 18:
			str = "HORSE_XP_OINTMENT";
			break;
	
		case 19:
		case 20:
			str = "HORSE_XP_LIGHT_LOAD";
			break;
	
		default:
			return;
	}

	flag = false;

	if (flag)
		str = MISC::VAR_STRING(2, str, BUILTIN::FLOOR(fParam1));
	else
		str = MISC::VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");

	func_636(str, "ITEMTYPE_TEXTURES", joaat("transaction_horse_bond"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_391(int iParam0, int iParam1) // Position - 0xAAFD Hash - 0xD852B8BE ^0xD852B8BE
{
	ePedType type;
	int num;
	float num2;
	float num3;
	Ped ped;
	float num4;
	float num5;
	float num6;

	if (iParam1 == -1)
		return;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (iParam0 != 0)
		if (!func_121(42))
			return;

	type = func_158(iParam0);

	if (func_322(type) || func_323(type))
		return;

	num = func_103(iParam0);

	if (num >= func_584(type))
		return;

	if (func_637(iParam0, iParam1))
		return;

	if (func_638(iParam0, iParam1))
		return;

	num2 = func_639(iParam0, iParam1);
	num3 = func_640(iParam1);

	switch (iParam1)
	{
		case 1:
			ped = func_78(iParam0);
		
			if (func_641(ped, 0))
				num3 = num3 * 0.5f;
		
			Global_1902887.f_303.f_2[iParam0 /*5*/].f_2 = Global_1902887.f_303.f_2[iParam0 /*5*/].f_2 + num3;
			break;
	
		case 2:
		case 3:
			if (func_642())
				num3 = num3 * 2f;
		
			Global_1902887.f_303.f_2[iParam0 /*5*/].f_2 = Global_1902887.f_303.f_2[iParam0 /*5*/].f_2 + num3;
			break;
	
		case 4:
			Global_1902887.f_303.f_2[iParam0 /*5*/].f_4 = Global_1902887.f_303.f_2[iParam0 /*5*/].f_4 + num3;
			break;
	
		case 5:
			if (num < 1)
			{
				num4 = func_294(iParam0);
				num5 = BUILTIN::TO_FLOAT(func_295(type, num));
				num6 = BUILTIN::TO_FLOAT(func_295(type, num + 1));
				num3 = num6 - (num5 + num4);
			}
			else
			{
				num3 = 0f;
			}
			break;
	
		default:
			func_390(iParam1, num3);
			break;
	}

	func_643(iParam0, num3);
	func_644(iParam0, iParam1, num2 + num3);
	return;
}

BOOL func_392(Entity eParam0, Ped pedParam1) // Position - 0xACB9 Hash - 0x4C1D344 ^0x249A9DCC
{
	int relationshipBetweenGroups;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "not_enemy"))
		return 0;

	switch (PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(ENTITY::GET_ENTITY_MODEL(eParam0)))
	{
		case joaat("rel_gang_odriscoll"):
		case joaat("rel_gang_smugglers"):
		case joaat("rel_gang_laramie_gang"):
		case joaat("rel_gang_skinner_brothers"):
		case joaat("rel_player_dislike"):
		case joaat("rel_gunslingers"):
		case joaat("rel_pinkertons"):
		case joaat("rel_guama_law"):
		case joaat("rel_gang_creole"):
		case joaat("rel_gang_lemoyne_raiders"):
		case joaat("rel_cop"):
		case joaat("rel_gang_murfree_brood"):
		case joaat("rel_criminals"):
		case joaat("rel_player_enemy"):
			return 1;
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
	{
		relationshipBetweenGroups = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam1));
	
		if (relationshipBetweenGroups == 6 || relationshipBetweenGroups == 4 || relationshipBetweenGroups == 5)
			if (!DECORATOR::DECOR_EXIST_ON(eParam0, "instigated_by_player"))
				return 1;
	}

	return 0;
}

void func_393(int iParam0) // Position - 0xAD98 Hash - 0x4CB73698 ^0x4CB73698
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_317(iParam0, 32);
	func_335();
	return;
}

void func_394(int iParam0) // Position - 0xADC6 Hash - 0xCFE5DD25 ^0xCFE5DD25
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_535(iParam0);
	func_350(iParam0, 0);
	func_645(iParam0, 0f);
	return;
}

void func_395(BOOL bParam0) // Position - 0xADFC Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_396(int iParam0, var uParam1, var uParam2) // Position - 0xAE0C Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

void func_397(int iParam0) // Position - 0xAE28 Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_38.f_3651[num2];
	MISC::SET_BIT(&address, offset);
	Global_38.f_3651[num2] = address;
	return;
}

void func_398(int iParam0) // Position - 0xAE62 Hash - 0xB25DF9C2 ^0xF6204414
{
	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (func_298() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_651("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_228(677, false);
			break;
	
		case 3:
			if (func_298() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_651("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_228(678, false);
			break;
	
		case 4:
			if (func_298() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_651("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_228(679, false);
			break;
	
		case 5:
			if (func_298() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_651("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_228(680, false);
			break;
	
		case 6:
			break;
	
		case 7:
			break;
	
		case 8:
			break;
	
		case 9:
			break;
	
		case 10:
			break;
	
		case 11:
			func_646(true);
			break;
	
		case 12:
			break;
	
		case 13:
			break;
	
		case 14:
			break;
	
		case 15:
			break;
	
		case 16:
			break;
	
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_647(1);
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_647(2);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_647(3);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 22:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
	
		case 24:
			break;
	
		case 25:
			break;
	
		case 26:
			break;
	
		case 27:
			break;
	
		case 28:
			break;
	
		case 29:
			break;
	
		case 30:
			break;
	
		case 31:
			break;
	
		case 32:
			func_183(true);
			break;
	
		case 33:
			func_185(true);
			break;
	
		case 34:
			func_187(true);
			break;
	
		case 35:
			break;
	
		case 36:
			func_648(false);
			break;
	
		case 37:
			func_649(false);
			break;
	
		case 38:
			func_650(false);
			break;
	
		case 39:
			break;
	
		case 40:
			break;
	
		case 41:
			break;
	
		case 42:
			break;
	
		case 43:
			break;
	
		case 44:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940199.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 45:
			break;
	
		case 46:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 47:
			if (func_2() == -1)
				if (!func_599(1013902307, 1))
					func_652(1013902307, 1, 752097756);
			break;
	
		case 48:
			if (func_2() == -1)
				if (!func_599(786809402, 1))
					func_652(786809402, 1, 752097756);
			break;
	
		case 49:
			if (func_2() == -1)
			{
				if (!func_599(1013902307, 1))
					func_652(1013902307, 1, 752097756);
			
				if (!func_599(142640135, 1))
					func_652(142640135, 1, 752097756);
			}
			break;
	
		case 50:
			if (func_2() == -1)
			{
				if (!func_599(786809402, 1))
					func_652(786809402, 1, 752097756);
			
				if (!func_599(-518019409, 1))
					func_652(-518019409, 1, 752097756);
			}
			break;
	
		case 51:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

BOOL func_399(Hash hParam0) // Position - 0xB3DE Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("a_c_horse_arabian_redchestnut_pc"):
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return true;
	}

	return false;
}

BOOL func_400(int iParam0) // Position - 0xB41A Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_653(iParam0);

	if (hash == 0)
		return false;

	unk = { func_261(false) };

	if (func_654(&unk, hash, false) > 0)
		return true;

	return false;
}

int func_401(int iParam0) // Position - 0xB44F Hash - 0x13121903 ^0xB823C4F3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_655(iParam0, &unk))
		return 0;

	unk30 = { unk.f_5 };
	unk30.f_4 = unk.f_9;

	if (!func_656(unk.f_4, &unk, &unk30, -1, -142743235, 0, false))
		return 0;

	return 1;
}

Hash func_402(ePedType eptParam0) // Position - 0xB4A5 Hash - 0xCBA0DE6B ^0x47A29D9A
{
	if (eptParam0 == joaat("a_c_horse_mp_mangy_backup"))
		return joaat("HORSE_BREED_MANGY_BACKUP");

	switch (eptParam0)
	{
		case -2004712574:
			return joaat("horse_breed_turkoman_black");
	
		case joaat("a_c_horse_arabian_black"):
			return joaat("HORSE_BREED_ARABIAN_BLACK");
	
		case joaat("a_c_horse_americanpaint_greyovero"):
			return joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO");
	
		case joaat("a_c_horse_thoroughbred_bloodbay"):
			return joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY");
	
		case joaat("a_c_horse_hungarianhalfbred_liverchestnut"):
			return -1754375530;
	
		case joaat("a_c_horse_kladruber_cremello"):
			return joaat("HORSE_BREED_KLADRUBER_CREMELLO");
	
		case joaat("a_c_horse_kladruber_silver"):
			return joaat("HORSE_BREED_KLADRUBER_SILVER");
	
		case joaat("a_c_horse_criollo_baybrindle"):
			return joaat("HORSE_BREED_CRIOLLO_BAYBRINDLE");
	
		case joaat("a_c_horse_breton_steelgrey"):
			return joaat("HORSE_BREED_BRETON_STEELGREY");
	
		case joaat("a_c_horse_suffolkpunch_redchestnut"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
	
		case joaat("a_c_horse_americanpaint_tobiano"):
			return joaat("HORSE_BREED_AMERICANPAINT_TOBIANO");
	
		case joaat("a_c_horse_tennesseewalker_flaxenroan"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
	
		case joaat("a_c_horse_kladruber_black"):
			return joaat("HORSE_BREED_KLADRUBER_BLACK");
	
		case joaat("a_c_horse_turkoman_silver"):
			return joaat("HORSE_BREED_TURKOMAN_SILVER");
	
		case joaat("a_c_horse_suffolkpunch_sorrel"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL");
	
		case joaat("a_c_horse_appaloosa_leopardblanket"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
	
		case joaat("a_c_horse_ardennes_bayroan"):
			return joaat("HORSE_BREED_ARDENNES_BAYROAN");
	
		case -1460773772:
			return -1762859680;
	
		case joaat("a_c_horse_breton_mealydapplebay"):
			return joaat("HORSE_BREED_BRETON_MEALYDAPPLEBAY");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("HORSE_BREED_NORFOLKROADSTER_PIEBALDROAN");
	
		case joaat("a_c_horse_missourifoxtrotter_amberchampagne"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
	
		case joaat("a_c_horse_kentuckysaddle_chestnutpinto"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
	
		case joaat("a_c_horse_nokota_whiteroan"):
			return joaat("HORSE_BREED_NOKOTA_WHITEROAN");
	
		case joaat("a_c_horse_americanstandardbred_black"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK");
	
		case joaat("a_c_horse_mustang_grullodun"):
			return joaat("HORSE_BREED_MUSTANG_GRULLODUN");
	
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
	
		case -1142861801:
			return 24661898;
	
		case joaat("a_c_horse_appaloosa_leopard"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARD");
	
		case joaat("a_c_horse_morgan_flaxenchestnut"):
			return joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
	
		case joaat("a_c_horse_appaloosa_brownleopard"):
			return joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
	
		case joaat("a_c_horse_appaloosa_blacksnowflake"):
			return -1692268955;
	
		case joaat("a_c_horse_kladruber_grey"):
			return joaat("HORSE_BREED_KLADRUBER_GREY");
	
		case joaat("a_c_horse_arabian_white"):
			return joaat("HORSE_BREED_ARABIAN_WHITE");
	
		case joaat("a_c_horse_murfreebrood_mange_02"):
			return -2011111190;
	
		case joaat("a_c_horse_hungarianhalfbred_darkdapplegrey"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
	
		case joaat("a_c_horse_tennesseewalker_redroan"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN");
	
		case joaat("a_c_horse_breton_redroan"):
			return joaat("HORSE_BREED_BRETON_REDROAN");
	
		case joaat("a_c_horse_kladruber_dapplerosegrey"):
			return joaat("HORSE_BREED_KLADRUBER_DAPPLEROSEGREY");
	
		case joaat("a_c_horse_ardennes_strawberryroan"):
			return joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
	
		case joaat("a_c_horse_breton_grullodun"):
			return joaat("HORSE_BREED_BRETON_GRULLODUN");
	
		case joaat("a_c_horse_murfreebrood_mange_03"):
			return -535752499;
	
		case joaat("a_c_horse_belgian_blondchestnut"):
			return joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
	
		case joaat("a_c_horse_thoroughbred_brindle"):
			return joaat("HORSE_BREED_THOROUGHBRED_BRINDLE");
	
		case joaat("a_c_horse_americanstandardbred_silvertailbuckskin"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
	
		case joaat("a_c_horse_americanpaint_overo"):
			return joaat("HORSE_BREED_AMERICANPAINT_OVERO");
	
		case joaat("a_c_horse_andalusian_darkbay"):
			return joaat("HORSE_BREED_ANDALUSIAN_DARKBAY");
	
		case joaat("a_c_horse_missourifoxtrotter_sablechampagne"):
			return -71211764;
	
		case -417416199:
			return 1186969907;
	
		case joaat("a_c_horse_arabian_rosegreybay"):
			return joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY");
	
		case -390136947:
			return 1421675990;
	
		case joaat("a_c_horse_americanstandardbred_buckskin"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN");
	
		case joaat("a_c_horse_kentuckysaddle_black"):
			return joaat("horse_breed_kentuckysaddle_black");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return joaat("HORSE_BREED_NORFOLKROADSTER_ROSEGREY");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("HORSE_BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN");
	
		case joaat("a_c_horse_kladruber_white"):
			return joaat("HORSE_BREED_KLADRUBER_WHITE");
	
		case joaat("a_c_horse_tennesseewalker_dapplebay"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
	
		case joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
	
		case joaat("a_c_horse_shire_lightgrey"):
			return joaat("HORSE_BREED_SHIRE_LIGHTGREY");
	
		case joaat("a_c_horse_mustang_tigerstripedbay"):
			return joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
	
		case joaat("a_c_horse_americanstandardbred_palominodapple"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
	
		case 74569170:
			return 1610457531;
	
		case joaat("a_c_horse_arabian_grey"):
			return 2130706226;
	
		case joaat("a_c_horse_morgan_palomino"):
			return joaat("horse_breed_morgan_palomino");
	
		case joaat("a_c_horse_nokota_reversedappleroan"):
			return joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
	
		case joaat("a_c_horse_breton_sorrel"):
			return joaat("HORSE_BREED_BRETON_SORREL");
	
		case joaat("a_c_horse_mustang_goldendun"):
			return -1390353518;
	
		case 506531963:
			return 1694764007;
	
		case joaat("a_c_horse_criollo_sorrelovero"):
			return joaat("HORSE_BREED_CRIOLLO_SORRELOVERO");
	
		case joaat("a_c_horse_dutchwarmblood_chocolateroan"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
	
		case 699227695:
			return -951797848;
	
		case 704938950:
			return -292250525;
	
		case joaat("a_c_horse_andalusian_perlino"):
			return joaat("HORSE_BREED_ANDALUSIAN_PERLINO");
	
		case joaat("a_c_horse_andalusian_rosegray"):
			return joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY");
	
		case joaat("a_c_horse_criollo_bayframeovero"):
			return joaat("HORSE_BREED_CRIOLLO_BAYFRAMEOVERO");
	
		case joaat("a_c_horse_dutchwarmblood_sealbrown"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
	
		case joaat("a_c_horse_murfreebrood_mange_01"):
			return 2102774612;
	
		case joaat("a_c_horse_belgian_mealychestnut"):
			return joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return joaat("HORSE_BREED_NORFOLKROADSTER_BLACK");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("HORSE_BREED_NORFOLKROADSTER_SPECKLEDGREY");
	
		case joaat("a_c_horse_shire_darkbay"):
			return joaat("HORSE_BREED_SHIRE_DARKBAY");
	
		case joaat("a_c_horse_tennesseewalker_blackrabicano"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
	
		case joaat("a_c_horse_tennesseewalker_chestnut"):
			return joaat("horse_breed_tennesseewalker_chestnut");
	
		case 1104566530:
			return 230524110;
	
		case joaat("a_c_horse_turkoman_darkbay"):
			return joaat("HORSE_BREED_TURKOMAN_DARKBAY");
	
		case joaat("a_c_horse_criollo_dun"):
			return joaat("HORSE_BREED_CRIOLLO_DUN");
	
		case 1154747978:
			return -348964481;
	
		case joaat("a_c_horse_morgan_bayroan"):
			return joaat("HORSE_BREED_MORGAN_BAYROAN");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("HORSE_BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR");
	
		case 1387035765:
			return 1841206845;
	
		case 1476007840:
			return -2073924608;
	
		case joaat("a_c_horse_arabian_redchestnut"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT");
	
		case 1514230770:
			return 1446930565;
	
		case joaat("a_c_horse_breton_sealbrown"):
			return joaat("HORSE_BREED_BRETON_SEALBROWN");
	
		case joaat("a_c_horse_dutchwarmblood_sootybuckskin"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
	
		case 1599848740:
			return -1289014677;
	
		case 1645353708:
			return 98372457;
	
		case joaat("a_c_horse_kentuckysaddle_silverbay"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
	
		case joaat("a_c_horse_turkoman_gold"):
			return joaat("HORSE_BREED_TURKOMAN_GOLD");
	
		case joaat("a_c_horse_hungarianhalfbred_flaxenchestnut"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
	
		case joaat("a_c_donkey_01"):
			return joaat("HORSE_DONKEY");
	
		case joaat("a_c_horse_americanpaint_splashedwhite"):
			return joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE");
	
		case joaat("a_c_horse_criollo_blueroanovero"):
			return joaat("HORSE_BREED_CRIOLLO_BLUEROANOVERO");
	
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
	
		case 1887211198:
			return -1902427371;
	
		case joaat("a_c_horse_kentuckysaddle_grey"):
			return joaat("horse_breed_kentuckysaddle_grey");
	
		case joaat("a_c_horse_morgan_bay"):
			return joaat("HORSE_BREED_MORGAN_BAY");
	
		case 2038357529:
			return 17141995;
	
		case joaat("a_c_horse_mustang_wildbay"):
			return joaat("HORSE_BREED_MUSTANG_WILDBAY");
	
		case joaat("a_c_horse_thoroughbred_blackchestnut"):
			return joaat("HORSE_BREED_THOROUGHBRED_BLACKCHESTNUT");
	
		case joaat("a_c_horse_appaloosa_blanket"):
			return joaat("HORSE_BREED_APPALOOSA_BLANKET");
	
		case joaat("a_c_horse_nokota_blueroan"):
			return joaat("HORSE_BREED_NOKOTA_BLUEROAN");
	
		case joaat("a_c_horse_criollo_marblesabino"):
			return joaat("HORSE_BREED_CRIOLLO_MARBLESABINO");
	
		default:
		
	}

	return 0;
}

int func_403(int iParam0, Hash hParam1) // Position - 0xBAEB Hash - 0x25A74014 ^0x25A74014
{
	Hash hash;
	var unk;
	var unk6;

	if (!func_263(hParam1, 0))
		return 0;

	if (!func_657(hParam1))
		return 0;

	if (func_400(iParam0))
		return 0;

	hash = func_653(iParam0);

	if (hash == 0)
		return 0;

	unk = { func_261(false) };
	unk.f_4 = hash;

	if (!func_266(hParam1, &unk6, &unk, 1, 752097756, false))
		return 0;

	return 1;
}

int func_404(int iParam0) // Position - 0xBB58 Hash - 0xACA56E21 ^0xEE9738B3
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_8;
}

float func_405(int iParam0) // Position - 0xBB8B Hash - 0x38F4CFA ^0x38F4CFA
{
	Ped ped;
	float num;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	if (!func_66(iParam0))
		return 0f;

	ped = func_78(iParam0);
	num = func_143(ped);
	return num;
}

int func_406(int iParam0, int iParam1) // Position - 0xBBCF Hash - 0xD30D64D ^0xA6080D3D
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/];
}

int func_407(int iParam0, var uParam1) // Position - 0xBC07 Hash - 0x269D6FD4 ^0xCDD6FCC3
{
	var guid1;

	guid1.f_9 = joaat("SLOTID_NONE");

	if (!func_655(iParam0, &guid1))
		return 0;

	guid1.f_14 = uParam1->f_14;
	guid1.f_15 = uParam1->f_15;
	guid1.f_16 = { uParam1->f_16 };
	guid1.f_24 = uParam1->f_24;
	guid1.f_25 = uParam1->f_25;
	guid1.f_26 = uParam1->f_26;
	guid1.f_27 = uParam1->f_27;
	guid1.f_28 = uParam1->f_28;

	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(func_518(false), &guid1, &guid1, 29))
		return 0;

	return 1;
}

void func_408() // Position - 0xBC8C Hash - 0xFC034F80 ^0xA15BCF12
{
	Blip blip;

	if (func_658())
	{
		blip = func_659();
		MAP::REMOVE_BLIP(&blip);
		func_660(0);
	}

	return;
}

void func_409() // Position - 0xBCAC Hash - 0x9A84CB87 ^0x788CD227
{
	Entity entity;

	entity = func_162();

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entity))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, true, true);

	OBJECT::DELETE_OBJECT(&entity);
	func_410(0);
	return;
}

void func_410(Object obParam0) // Position - 0xBCE4 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1902887.f_379 = obParam0;
	return;
}

int func_411() // Position - 0xBCF5 Hash - 0xE835E19F ^0x141BD35D
{
	return Global_38.f_289.f_3245.f_1;
}

int func_412() // Position - 0xBD08 Hash - 0x8190E5D8 ^0x6C81FB30
{
	return Global_1902887.f_429.f_2;
}

void func_413() // Position - 0xBD19 Hash - 0x2100AD75 ^0xADE9CBA1
{
	Global_1902887.f_429.f_2 = 0;
	return;
}

void func_414() // Position - 0xBD2B Hash - 0xD0368953 ^0xE480F23
{
	Global_38.f_289.f_3245.f_1 = Global_38.f_289.f_3245.f_1 + 1;
	return;
}

void func_415(int iParam0) // Position - 0xBD4B Hash - 0xC421D95B ^0x56CEE285
{
	Global_1902887.f_429.f_2 = iParam0;
	return;
}

BOOL func_416() // Position - 0xBD5E Hash - 0x8190E5D8 ^0xE7A7AFC8
{
	return Global_1902887.f_429.f_3;
}

int func_417() // Position - 0xBD6F Hash - 0x8190E5D8 ^0x856627E0
{
	return Global_1902887.f_429.f_4;
}

void func_418(int iParam0) // Position - 0xBD80 Hash - 0xC421D95B ^0xE72F24A4
{
	Global_1902887.f_429.f_3 = iParam0;
	return;
}

void func_419() // Position - 0xBD93 Hash - 0x2100AD75 ^0x3678395B
{
	Global_1902887.f_429.f_4 = 0;
	return;
}

BOOL func_420() // Position - 0xBDA5 Hash - 0xD44DBBD5 ^0x292106FF
{
	if (func_599(joaat("consumable_horse_reviver"), 1) || func_599(joaat("consumable_special_horse_reviver_crafted"), 1))
		return true;

	return false;
}

BOOL func_421(Hash hParam0) // Position - 0xBDCF Hash - 0xAD430840 ^0x833C1E45
{
	int acquireCostsCount;
	Hash outData;
	int i;

	acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(hParam0);
	outData.f_4 = 15;
	outData.f_36 = 10;

	for (i = 0; i < acquireCostsCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(hParam0, i, &outData))
			if (outData.f_2 == joaat("cost_type_craft") && !func_661(hParam0, outData, true))
				return true;
	}

	return false;
}

Ped func_422() // Position - 0xBE31 Hash - 0x7EBC184 ^0xE53E3899
{
	Player player;
	Entity outEntity;
	Ped pedIndexFromEntityIndex;

	player = PLAYER::PLAYER_ID();

	if (PLAYER::IS_PLAYER_DEAD(player))
		return 0;

	if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(player, &outEntity, false, false))
		return 0;

	if (!ENTITY::IS_ENTITY_A_PED(outEntity))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(outEntity))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);

	if (PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(pedIndexFromEntityIndex))
		return 0;

	if (!func_321(pedIndexFromEntityIndex))
		return 0;

	return pedIndexFromEntityIndex;
}

var func_423() // Position - 0xBEAB Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1902887.f_399.f_1;
}

void func_424(int iParam0) // Position - 0xBEBC Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1902887.f_399.f_1 = iParam0;
	return;
}

void func_425(Ped pedParam0) // Position - 0xBECF Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1902887.f_399 = pedParam0;
	return;
}

void func_426() // Position - 0xBEE0 Hash - 0xDA3C8DAE ^0xDA3C8DAE
{
	if (func_147(47))
		func_148(47);

	if (func_149(47))
		func_150(47);

	if (func_147(48))
		func_148(48);

	if (func_149(47))
		func_150(47);

	if (func_147(49))
		func_148(49);

	if (func_149(49))
		func_150(49);

	if (func_147(50))
		func_148(50);

	if (func_149(50))
		func_150(50);

	if (func_147(51))
		func_148(51);

	if (func_149(51))
		func_150(51);

	return;
}

BOOL func_427(Ped pedParam0) // Position - 0xBF7E Hash - 0x8EC439E9 ^0xC6299B28
{
	var unk;
	Hash discoverableNameHashAndTypeForEntity;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	discoverableNameHashAndTypeForEntity = PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(pedParam0, &unk);

	if (PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(discoverableNameHashAndTypeForEntity))
		return true;

	return false;
}

void func_428(int iParam0) // Position - 0xBFB5 Hash - 0xC421D95B ^0x56CEE285
{
	Global_1902887.f_399.f_2 = iParam0;
	return;
}

int func_429() // Position - 0xBFC8 Hash - 0x8190E5D8 ^0x6C81FB30
{
	return Global_1902887.f_399.f_2;
}

void func_430() // Position - 0xBFD9 Hash - 0x63024CC4 ^0x63024CC4
{
	func_425(0);
	func_424(0);
	func_428(0);
	return;
}

BOOL func_431() // Position - 0xBFF0 Hash - 0x3D3A782A ^0x8E6D8701
{
	return Global_1902887.f_429.f_5;
}

int func_432() // Position - 0xC003 Hash - 0xE835E19F ^0x8AB94403
{
	return Global_38.f_289.f_3245.f_3;
}

int func_433() // Position - 0xC016 Hash - 0x8190E5D8 ^0xB4FB0E1F
{
	return Global_1902887.f_429.f_6;
}

void func_434(int iParam0) // Position - 0xC027 Hash - 0xC421D95B ^0xE7B505B3
{
	Global_1902887.f_429.f_5 = iParam0;
	return;
}

void func_435() // Position - 0xC03A Hash - 0x2100AD75 ^0xC7A3C347
{
	Global_1902887.f_429.f_6 = 0;
	return;
}

void func_436(int iParam0) // Position - 0xC04C Hash - 0xC421D95B ^0x9AF120BB
{
	Global_1902887.f_429.f_9 = iParam0;
	return;
}

void func_437() // Position - 0xC05F Hash - 0xD0368953 ^0x142F88F3
{
	Global_38.f_289.f_3245.f_3 = Global_38.f_289.f_3245.f_3 + 1;
	return;
}

BOOL func_438() // Position - 0xC07F Hash - 0x8190E5D8 ^0xCA87BC87
{
	return Global_1902887.f_429.f_7;
}

int func_439(int iParam0, int iParam1) // Position - 0xC090 Hash - 0xD30D64D ^0xA6080D3D
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/];
}

int func_440(int iParam0) // Position - 0xC0C8 Hash - 0x32B4F30A ^0x2F461876
{
	int num;
	int num2;
	int i;

	func_396(iParam0, &num, &num2);

	if (!func_662(iParam0, 65536) && !func_662(iParam0, 32768))
	{
		if (func_663(num, num2))
			return 1;
	
		return 0;
	}

	for (i = 0; i < Global_38.f_3542; i = i + 1)
	{
		if (Global_38.f_3542[i /*3*/].f_2 == iParam0)
			return Global_38.f_3542[i /*3*/].f_1;
	}

	return 0;
}

int func_441() // Position - 0xC143 Hash - 0x8190E5D8 ^0x2BADBBBA
{
	return Global_1902887.f_429.f_8;
}

void func_442(int iParam0) // Position - 0xC154 Hash - 0xC421D95B ^0x6C3664BD
{
	Global_1902887.f_429.f_7 = iParam0;
	return;
}

void func_443() // Position - 0xC167 Hash - 0x2100AD75 ^0x670AB7F2
{
	Global_1902887.f_429.f_8 = 0;
	return;
}

int func_444() // Position - 0xC179 Hash - 0x8190E5D8 ^0x5AFCE40C
{
	return Global_1902887.f_429.f_9;
}

BOOL func_445() // Position - 0xC18A Hash - 0x8190E5D8 ^0xE5C9F4C2
{
	return Global_1902887.f_429.f_10;
}

void func_446(int iParam0) // Position - 0xC19B Hash - 0xC421D95B ^0xA01E003E
{
	Global_1902887.f_429.f_10 = iParam0;
	return;
}

void func_447() // Position - 0xC1AE Hash - 0x2100AD75 ^0xE02DD774
{
	Global_1902887.f_429.f_9 = 0;
	return;
}

BOOL func_448() // Position - 0xC1C0 Hash - 0xE835E19F ^0xEC3B0FD8
{
	return Global_38.f_289.f_3245.f_4;
}

int func_449(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC1D3 Hash - 0x8ED0D296 ^0x8ED0D296
{
	int i;
	int num;
	int num2;
	float num3;
	float num4;

	i = -1;
	num = -1;
	num4 = -1f;

	for (i = 0; i < 180; i = i + 1)
	{
		if (!func_450(i))
		{
		}
		else if (func_664(i) != iParam0)
		{
		}
		else
		{
			if (bParam1)
			{
				if (!func_665(i))
				{
				}
				else
				{
					num2 = func_666(i);
				
					if (bParam3)
					{
						if (!func_667(num2))
						{
						}
						else
						{
							if (bParam2)
							{
								if (func_668(num2))
								{
								}
								else
								{
									num3 = func_669(Global_33, func_451(i), true);
								
									if (num3 < num4 || num4 == -1f)
									{
										num = i;
										num4 = num3;
									}
								}
							}
						
							num3 = func_669(Global_33, func_451(i), true);
						
							if (num3 < num4 || num4 == -1f)
							{
								num = i;
								num4 = num3;
							}
						}
					}
				
					if (bParam2)
					{
						if (func_668(num2))
						{
						}
						else
						{
							num3 = func_669(Global_33, func_451(i), true);
						
							if (num3 < num4 || num4 == -1f)
							{
								num = i;
								num4 = num3;
							}
						}
					}
				
					num3 = func_669(Global_33, func_451(i), true);
				
					if (num3 < num4 || num4 == -1f)
					{
						num = i;
						num4 = num3;
					}
				}
			}
		
			num2 = func_666(i);
		
			if (bParam3)
			{
				if (!func_667(num2))
				{
				}
				else
				{
					if (bParam2)
					{
						if (func_668(num2))
						{
						}
						else
						{
							num3 = func_669(Global_33, func_451(i), true);
						
							if (num3 < num4 || num4 == -1f)
							{
								num = i;
								num4 = num3;
							}
						}
					}
				
					num3 = func_669(Global_33, func_451(i), true);
				
					if (num3 < num4 || num4 == -1f)
					{
						num = i;
						num4 = num3;
					}
				}
			}
		
			if (bParam2)
			{
				if (func_668(num2))
				{
				}
				else
				{
					num3 = func_669(Global_33, func_451(i), true);
				
					if (num3 < num4 || num4 == -1f)
					{
						num = i;
						num4 = num3;
					}
				}
			}
		
			num3 = func_669(Global_33, func_451(i), true);
		
			if (num3 < num4 || num4 == -1f)
			{
				num = i;
				num4 = num3;
			}
		}
	}

	return num;
}

BOOL func_450(int iParam0) // Position - 0xC27B Hash - 0x8858DE32 ^0x8858DE32
{
	return iParam0 > -1 && iParam0 < 180;
}

Vector3 func_451(int iParam0) // Position - 0xC291 Hash - 0x19C525E7 ^0x19C525E7
{
	if (!func_450(iParam0))
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return 2947.0547f, 1320.1497f, 43.8203f;
	
		case 1:
			return 2939.0627f, 1287.116f, 43.6529f;
	
		case 2:
			return 2932.97f, 1282.56f, 43.67f;
	
		case 3:
			return -2842.2114f, 137.3398f, 183.8268f;
	
		case 4:
			return -1005.9343f, -540.8262f, 97.9502f;
	
		case 6:
			return -784.49f, -1321.95f, 42.88f;
	
		case 8:
			return -814.4116f, -1367.2427f, 43.7509f;
	
		case 9:
			return -753.42194f, -1284.2399f, 43.200493f;
	
		case 12:
			return -813.6f, -1373.8f, 44.2f;
	
		case 13:
			return -868.33563f, -1366.2074f, 44.753105f;
	
		case 14:
			return -875.03f, -1327.09f, 42.97f;
	
		case 15:
			return -875.02f, -1326.71f, 42.97f;
	
		case 19:
			return -762.0716f, -1293.5487f, 42.8355f;
	
		case 22:
			return 1417.288f, 273.5687f, 88.4881f;
	
		case 24:
			return 1521.91f, 441.15f, 89.68f;
	
		case 25:
			return 1523.63f, 442.65f, 89.68f;
	
		case 26:
			return 2161.5f, -618.5f, 43f;
	
		case 27:
			return -1092.88f, -575.69f, 81.41f;
	
		case 28:
			return -1094.35f, -577.48f, 81.41f;
	
		case 29:
			return 1294.0844f, -1303.1022f, 76.0418f;
	
		case 30:
			return 1297.4229f, -1278.4122f, 75.65752f;
	
		case 31:
			return 1319.43f, -1142.08f, 81.41f;
	
		case 33:
			return 1329.7546f, -1294.2175f, 76.0092f;
	
		case 34:
			return 1323.7344f, -1321.7745f, 77.8924f;
	
		case 35:
			return 1226.71f, -1295.08f, 75.9f;
	
		case 39:
			return 1230.34f, -1298.5785f, 75.9027f;
	
		case 40:
			return 2076.8354f, 1000.8294f, 111.4973f;
	
		case 41:
			return 1209.0531f, -193.1814f, 101.97852f;
	
		case 42:
			return 2644.1882f, -1292.5067f, 51.2496f;
	
		case 43:
			return 2657.4658f, -1180.9601f, 53.2785f;
	
		case 44:
			return 2819.495f, -1331.29f, 45.514f;
	
		case 45:
			return 2721.24f, -1231.66f, 49.37f;
	
		case 46:
			return 2859.51f, -1202.16f, 48.59f;
	
		case 48:
			return 2825.6067f, -1318.2065f, 45.7557f;
	
		case 49:
			return 2718f, -1287f, 49.6f;
	
		case 50:
			return 2508.212f, -1449.6539f, 48.415234f;
	
		case 51:
			return 2748.8113f, -1398.2766f, 45.18309f;
	
		case 52:
			return 2747.8245f, -1396.3843f, 45.18309f;
	
		case 53:
			return 2555.09f, -1166.98f, 52.68f;
	
		case 60:
			return 2734.1738f, -1119.7551f, 50.10792f;
	
		case 63:
			return 2832.0198f, -1225.5627f, 46.6422f;
	
		case 64:
			return -142.072f, -23.5242f, 95.0883f;
	
		case 65:
			return 675.3091f, -1251.2332f, 43.0152f;
	
		case 66:
			return 1875.2003f, -1859.1821f, 41.8f;
	
		case 67:
			return 2366.0842f, 1347.1224f, 105.1305f;
	
		case 68:
			return -1753.404f, -392.557f, 155.2576f;
	
		case 69:
			return -1790f, -388.27f, 159.33f;
	
		case 70:
			return -1818.99f, -370.94f, 162.3f;
	
		case 71:
			return -1819.8796f, -561.8194f, 157.23232f;
	
		case 74:
			return -1763.7804f, -385.1118f, 156.7401f;
	
		case 76:
			return -2251.0344f, -1916.9109f, 115.9488f;
	
		case 77:
			return -307.96432f, 773.6048f, 117.70312f;
	
		case 78:
			return -306.3f, 815.08f, 117.98f;
	
		case 79:
			return 0f, 0f, 0f;
	
		case 82:
			return -338.8647f, 767.4334f, 115.56277f;
	
		case 83:
			return -287.9538f, 804.0544f, 118.3859f;
	
		case 84:
			return -324f, 803.72f, 116.88f;
	
		case 85:
			return -281.82f, 778.97f, 118.5f;
	
		case 86:
			return -369.44574f, 786.69354f, 115.9904f;
	
		case 87:
			return -178.0316f, 628.06213f, 113.08961f;
	
		case 88:
			return -175.03769f, 631.79987f, 113.08961f;
	
		case 90:
			return -325.53195f, 773.6285f, 117.50383f;
	
		case 93:
			return 3025.7864f, 562.7253f, 43.7167f;
	
		case 96:
			return 2967.2727f, 796.7416f, 52.5948f;
	
		case 97:
			return 2986.94f, 574.9f, 43.64f;
	
		case 98:
			return 2986.2236f, 569.94684f, 43.62284f;
	
		case 99:
			return -1302.9513f, 394.6608f, 94.3817f;
	
		case 100:
			return -1299.8906f, 401.36154f, 94.38248f;
	
		case 101:
			return -1300.8296f, 399.75986f, 94.38248f;
	
		case 102:
			return -5487.1973f, -2939.0383f, -1.3872f;
	
		case 103:
			return -5507.9927f, -2964.8442f, -1.6215f;
	
		case 104:
			return -5509.0186f, -2947.4353f, -2.8934f;
	
		case 105:
			return -5518.0713f, -2906.2173f, -2.7513f;
	
		case 107:
			return -5520.701f, -3044.4265f, -1.40419f;
	
		case 108:
			return -3687.3f, -2623.39f, -14.44f;
	
		case 117:
			return -5227.3574f, -3470.0674f, -20.49293f;
	
		case 118:
			return -5228.75f, -3468.28f, -21.57f;
	
		case 130:
			return -1402f, -2317f, 43.6f;
	
		case 148:
			return -4730.243f, -2939.0884f, -20.1029f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void func_452(var uParam0) // Position - 0xCA10 Hash - 0x314E25ED ^0x5513F5F
{
	Global_1902887.f_429.f_11 = *uParam0;
	return;
}

Blip func_453() // Position - 0xCA24 Hash - 0x8190E5D8 ^0x3A2AFAF5
{
	return Global_1902887.f_429.f_11;
}

BOOL func_454() // Position - 0xCA35 Hash - 0x8A998749 ^0x8A998749
{
	if (func_311(7))
		return true;

	if (func_161())
		return true;

	return false;
}

BOOL func_455(Ped pedParam0) // Position - 0xCA55 Hash - 0x1A9D46BF ^0x1806B677
{
	Ped entity;
	ItemSet itemset;
	BOOL flag;
	int itemsetSize;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	entity = func_162();

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return false;

	itemset = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_ITEMSET_VALID(itemset))
		return false;

	ITEMSET::_CLEAR_ITEMSET(itemset);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	flag = false;
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	if (itemsetSize > 0)
		if (ITEMSET::IS_IN_ITEMSET(entity, itemset))
			flag = true;

	ITEMSET::DESTROY_ITEMSET(itemset);

	if (flag)
		return true;

	return false;
}

BOOL func_456() // Position - 0xCADE Hash - 0xBB060A5E ^0x4E9D3A3E
{
	int gameTimer;
	int num;
	var unk;

	if (!func_311(7))
	{
		if (func_457(7))
		{
			func_670();
			return true;
		}
	}

	if (func_311(7))
		if (func_164() == 0)
			if (ENTITY::DOES_ENTITY_EXIST(func_78(7)))
				if (!ENTITY::IS_ENTITY_IN_WATER(func_78(7)))
					return true;

	if (func_455(Global_33))
		return true;

	gameTimer = MISC::GET_GAME_TIMER();
	num = func_671();

	if (num == 0)
	{
		func_672(MISC::GET_GAME_TIMER());
		return true;
	}

	if (num + 10000 > gameTimer)
		return true;

	if (ENTITY::_0x383F64263F946E45(&unk, func_162(), 4, Global_33, 0, 1))
	{
		func_670();
		return true;
	}

	return false;
}

BOOL func_457(int iParam0) // Position - 0xCB82 Hash - 0x9F2526C ^0x74A3693D
{
	Ped ped;

	iParam0 = func_77(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_154())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

void func_458() // Position - 0xCBDB Hash - 0x2100AD75 ^0x799A2886
{
	Global_1902887.f_429.f_12 = 0;
	return;
}

int func_459() // Position - 0xCBED Hash - 0x8190E5D8 ^0x30F61237
{
	return Global_1902887.f_429.f_12;
}

void func_460(int iParam0) // Position - 0xCBFE Hash - 0xC421D95B ^0x51113BDB
{
	Global_1902887.f_429.f_12 = iParam0;
	return;
}

Ped func_461() // Position - 0xCC11 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1902887.f_427;
}

void func_462(Ped pedParam0) // Position - 0xCC20 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1902887.f_427 = pedParam0;
	return;
}

BOOL func_463() // Position - 0xCC31 Hash - 0x8190E5D8 ^0xF39029B9
{
	return Global_1902887.f_429.f_15;
}

void func_464(int iParam0) // Position - 0xCC42 Hash - 0xC421D95B ^0xF1287820
{
	Global_1902887.f_429.f_15 = iParam0;
	return;
}

int func_465() // Position - 0xCC55 Hash - 0x38870270 ^0x38870270
{
	return Global_38.f_289.f_3245;
}

void func_466() // Position - 0xCC66 Hash - 0xF0C8A3F9 ^0x68B2AB57
{
	Global_1902887.f_429.f_16 = Global_1902887.f_429.f_16 + 1;
	return;
}

int func_467() // Position - 0xCC82 Hash - 0x8190E5D8 ^0xE2DFD8E9
{
	return Global_1902887.f_429.f_16;
}

BOOL func_468(Entity eParam0) // Position - 0xCC93 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(eParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_469(Ped pedParam0) // Position - 0xCCC5 Hash - 0x66F93C72 ^0x590870E7
{
	Entity targetEntity;

	if (func_329(PLAYER::PLAYER_ID(), true, false, true))
		return false;

	if (!func_330(pedParam0))
		return false;

	if (func_328(pedParam0, &targetEntity, -1082130432))
	{
		if (PED::CAN_PED_SEE_ENTITY(pedParam0, targetEntity, false, false) == 1)
			return false;
	
		if (LAW::ARE_WITNESSES_ACTIVE(PLAYER::PLAYER_ID()))
			return false;
	}

	return true;
}

BOOL func_470(int iParam0) // Position - 0xCD1F Hash - 0x5000025C ^0x5000025C
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

int func_471(int iParam0) // Position - 0xCD5E Hash - 0xE34A477A ^0xE34A477A
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

BOOL func_472() // Position - 0xCDF4 Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1915656.f_20637 || Global_1915656.f_22504.f_1;
}

int func_473() // Position - 0xCE12 Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

Hash func_474(var uParam0) // Position - 0xCE45 Hash - 0xDAEBAE6 ^0xFAD9C5D0
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0);
	return func_226(pedIndexFromEntityIndex);
}

Hash func_475(Object obParam0) // Position - 0xCE6B Hash - 0xB3A7ACD3 ^0xEF2020CA
{
	Hash carriableFromEntity;

	carriableFromEntity = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return 0;

	if (ENTITY::IS_ENTITY_A_PED(obParam0) && TASK::_0x6DAC799857EF3F11(PLAYER::PLAYER_PED_ID(), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(obParam0)))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(obParam0);

	if (carriableFromEntity == 0)
		if (ENTITY::IS_ENTITY_A_PED(obParam0))
			carriableFromEntity = func_226(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(obParam0));

	return carriableFromEntity;
}

int func_476(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0xCEC9 Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_263(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_673(iParam0, hParam1, 1))
		return 0;

	statId = { func_600(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_477(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_477(iParam0, hParam1) - iParam2 < 0)
		{
			func_476(iParam0, hParam1, func_601(hParam1, false, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_674(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!bParam3 && hParam1 != 1309979101)
		func_598(hParam1, -iParam2, flag, flag2, flag3, false, false);

	return 1;
}

int func_477(int iParam0, Hash hParam1) // Position - 0xCFA3 Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_263(hParam1, 0))
		return 0;

	guid = { func_675(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

struct<5> func_478(int iParam0) // Position - 0xCFE1 Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_479(iParam0, joaat("character"), func_519(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_479(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0xD00E Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_263(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

int func_480(Ped pedParam0) // Position - 0xD03B Hash - 0x32EB82AB ^0x786A6EFC
{
	int num;
	int pedQuality;

	num = 2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return num;

	pedQuality = PED::_GET_PED_QUALITY(pedParam0);

	switch (pedQuality)
	{
		case -1:
		case 2:
			num = 2;
			break;
	
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	}

	return num;
}

int func_481(int iParam0) // Position - 0xD091 Hash - 0xB8EC44B7 ^0x162CC37E
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
	
		case -2092697195:
			return 777641606;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
	
		case -2043601589:
			return 1815502722;
	
		case -2040849706:
			return -375348364;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
	
		case -1821314478:
			return 1135507073;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
	
		case -1638839614:
			return 213936563;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
	
		case -1434083213:
			return -1671125008;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
	
		case -1378208045:
			return 1586020612;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
	
		case -1282621313:
			return 1718756614;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case -885592109:
			return -132069363;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case -827518870:
			return -2115566177;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
	
		case -229670230:
			return -352805801;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case -70954328:
			return 616254818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
	
		case 546758456:
			return 1491466288;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
	
		case 1367447057:
			return -1886936864;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
	
		case 1450608653:
			return 1892902297;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
	
		case 1493601140:
			return -438328437;
	
		case 1527400190:
			return 1020297399;
	
		case 1543592331:
			return 1920759986;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
	
		case 1705186999:
			return 897866285;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case 1758585485:
			return 1518910503;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
	
		case 1842740532:
			return 1683741809;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
	
		case 1888419655:
			return -1066678466;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
	
		case 2004357248:
			return 403588059;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
	
		case 2014346813:
			return -101301217;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
	
		default:
		
	}

	return 0;
}

BOOL func_482(Hash hParam0) // Position - 0xDACE Hash - 0xA839C3B7 ^0xFE515ADA
{
	int i;
	int num;

	i = 0;
	num = Global_1915656.f_20646.f_1010.f_201;

	if (hParam0 != 0)
	{
		if (num < 200)
		{
			for (i = 0; i < num; i = i + 1)
			{
				if (Global_1915656.f_20646.f_1010[i] == hParam0)
					return 1;
			}
		}
	}

	return 0;
}

BOOL func_483(Hash hParam0, int iParam1) // Position - 0xDB1F Hash - 0x58B8EE01 ^0x58B8EE01
{
	var unk;
	int num;
	Hash hash;

	if (!func_263(hParam0, 0))
		return 0;

	if (iParam1 == -1)
		return 0;

	num = func_664(iParam1);

	if (num == -1)
		return 0;

	if (!func_676(6, &unk))
		return 0;

	unk.f_2 = -815325344;
	unk.f_3 = func_677(num);

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		hash = hParam0;
		unk.f_2 = 549615901;
		unk.f_3 = hash;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
			return 1;
	}

	return 0;
}

BOOL func_484(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xDBA9 Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_663(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_678(iParam0))
		return false;

	if (func_679(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_662(iParam0, 1) || func_16(32768))
		if (!func_662(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_680())
		return false;

	return true;
}

void func_485(int iParam0, int iParam1) // Position - 0xDC4B Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_486() // Position - 0xDC6F Hash - 0x61E8C0F8 ^0x61E8C0F8
{
	int i;

	if (func_681())
		return true;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1904402[i] != 0)
			return true;
	}

	return false;
}

BOOL func_487(BOOL bParam0) // Position - 0xDCA6 Hash - 0xC4B2DC07 ^0x9B02603B
{
	if (func_682())
		return false;

	if (!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT())
		return false;

	if (func_683(&(Global_1102813.f_4), 1, 5))
		return false;

	if (!bParam0)
		if (!func_486())
			return false;

	if (Global_13 || Global_1048584 || func_684())
		return false;

	if (!func_680())
		return false;

	if (func_685())
		return false;

	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
		return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (Global_1915656.f_20638 && Global_1915656.f_20241.f_43 == 2 && Global_1940252.f_2)
		return false;

	if (func_686())
		return false;

	return true;
}

void func_488(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xDD7E Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_687(iParam0, iParam1, true))
	{
		num = func_688(iParam1);
		num2 = func_689(iParam0);
		num3 = func_689(iParam0) - func_689(iParam1);
		num4 = func_688(iParam0) - func_688(iParam1);
		num5 = func_690(iParam0) - func_690(iParam1);
		num6 = func_691(iParam0) - func_691(iParam1);
		num7 = func_692(iParam0) - func_692(iParam1);
		num8 = func_693(iParam0) - func_693(iParam1);
	}
	else
	{
		num = func_688(iParam0);
		num2 = func_689(iParam1);
		num3 = func_689(iParam1) - func_689(iParam0);
		num4 = func_688(iParam1) - func_688(iParam0);
		num5 = func_690(iParam1) - func_690(iParam0);
		num6 = func_691(iParam1) - func_691(iParam0);
		num7 = func_692(iParam1) - func_692(iParam0);
		num8 = func_693(iParam1) - func_693(iParam0);
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
	
		num5 = num5 + func_694(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_695(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

const char* func_489(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xDF80 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_490(int iParam0) // Position - 0xDF94 Hash - 0x7CA4F669 ^0xB281CC11
{
	const char* str;

	if (Global_1901671.f_51.f_29)
		if (!NETWORK::_0xDBDF80673BBA3D65(1))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1102813.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102813.f_12)));

	if (iParam0 == 255)
		if (func_696(40, iParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1102813.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102813.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (iParam0 < 0 || iParam0 >= 32)
		return "";

	str = "";

	if (!Global_1295666.f_17[iParam0])
		return str;

	if (func_696(40, iParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1101558[iParam0 /*38*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1101558[iParam0 /*38*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1295666.f_149[iParam0]);
}

const char* func_491(const char* sParam0, int iParam1) // Position - 0xE067 Hash - 0x7FAD1594 ^0x3DE77555
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);

	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_697(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

BOOL func_492() // Position - 0xE0A5 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_493() // Position - 0xE0AE Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_494(int iParam0, var uParam1) // Position - 0xE0B7 Hash - 0x30A0D5A8 ^0x30A0D5A8
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
	
		case 1:
			*uParam1 = 1;
			break;
	
		default:
			return false;
	}

	return true;
}

int func_495(int iParam0) // Position - 0xE0E9 Hash - 0xFF564352 ^0xFF564352
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 100;
	}

	return 0;
}

int func_496(Ped pedParam0, int iParam1) // Position - 0xE10E Hash - 0x7F66DB32 ^0x5DC811F9
{
	int coreIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (func_494(iParam1, &coreIndex))
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex);

	return 0;
}

void func_497(Ped pedParam0, int iParam1, int iParam2) // Position - 0xE154 Hash - 0x498B41C8 ^0xF542C5C9
{
	int coreIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	iParam2 = func_384(iParam2, 0, 100);

	if (func_494(iParam1, &coreIndex))
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex, iParam2);

	return;
}

float func_498(int iParam0, int iParam1) // Position - 0xE1A1 Hash - 0xE7A5B02F ^0x3359F795
{
	int gameTimer;
	int value;
	float num;

	gameTimer = MISC::GET_GAME_TIMER();
	value = gameTimer - Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_3;
	value = func_384(value, 0, 30000);
	num = BUILTIN::TO_FLOAT(value) * 0.001f;
	return num;
}

void func_499(int iParam0, int iParam1, int iParam2) // Position - 0xE1E6 Hash - 0x8DF7D29B ^0x33E508B8
{
	Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/].f_3 = iParam2;
	return;
}

void func_500(Ped pedParam0, int iParam1, int iParam2) // Position - 0xE206 Hash - 0x78EA8179 ^0x5D3B3BA5
{
	int attributeCoreValue;
	int coreIndex;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (func_494(iParam2, &coreIndex))
		attributeCoreValue = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex);

	num = func_439(iParam1, iParam2);

	if (num != attributeCoreValue)
		func_698(iParam1, iParam2, attributeCoreValue);

	return;
}

float func_501(int iParam0, int iParam1) // Position - 0xE24B Hash - 0x800FCAEB ^0x430C41D0
{
	return Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/].f_2;
}

void func_502(int iParam0, int iParam1) // Position - 0xE269 Hash - 0xFF942D4A ^0xFF942D4A
{
	float num;
	float num2;

	num = func_501(iParam0, iParam1);
	num2 = func_498(iParam0, iParam1);
	num = num - num2;

	if (num < 0f)
		num = 0f;

	func_699(iParam0, iParam1, num);
	return;
}

void func_503(Ped pedParam0, int iParam1, int iParam2) // Position - 0xE2A0 Hash - 0x1FA64A8 ^0x413577DC
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	float num;
	int num2;
	BOOL flag5;
	BOOL flag6;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	int num8;
	int num9;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33);

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	flag = false;

	if (func_74(iParam1) == 2)
		flag = true;

	flag2 = false;

	if (func_255(pedParam0))
		flag2 = true;

	flag3 = false;

	if (PED::IS_PED_ON_MOUNT(Global_33))
		if (PED::GET_MOUNT(Global_33) == pedParam0)
			flag3 = true;

	flag4 = false;

	if (TASK::_IS_PED_LEADING_HORSE(Global_33))
		if (TASK::_GET_LED_HORSE_FROM_PED(Global_33) == pedParam0)
			flag4 = true;

	flag5 = false;
	flag6 = false;

	switch (iParam2)
	{
		case 0:
		case 1:
			num2 = func_439(iParam1, iParam2);
		
			if (flag)
			{
				if (num2 < 100)
					flag5 = true;
				else
					flag6 = true;
			}
			else if (flag2)
			{
				if (num2 < 55)
					flag5 = true;
				else
					flag6 = true;
			}
			else if (flag4)
			{
				if (num2 < 45)
					flag5 = true;
				else
					flag6 = true;
			}
			else if (!flag3)
			{
				if (num2 < 30)
					flag5 = true;
				else
					flag6 = true;
			}
			else if (func_700(pedParam0, iParam2))
			{
				flag6 = true;
			}
			else
			{
				num = -60f;
				num3 = func_701(iParam1, iParam2);
				num = num - (num * num3);
			}
			break;
	}

	if (num < 0f)
		if (func_81(4096))
			flag6 = true;

	if (flag5)
		if (func_249(iParam1, 128))
			flag6 = true;
		else
			num = 1f;

	num4 = num * 60f;
	num5 = func_498(iParam1, iParam2);
	num6 = (num5 / num4) * 100f;
	num7 = func_702(iParam1, iParam2);
	num8 = func_439(iParam1, iParam2);
	num9 = 0;

	if (!flag6)
	{
		if (num7 < 0f && num6 > 0f || num7 > 0f && num6 < 0f)
			num7 = 0f;
	
		num7 = num7 + num6;
	
		if (num7 >= 1f)
		{
			num7 = num7 - 1f;
			num9 = num9 + 1;
		}
		else if (num7 <= -1f)
		{
			num7 = num7 + 1f;
			num9 = num9 - 1;
		}
	
		func_703(iParam1, iParam2, num7);
	}

	if (num9 == 0)
		return;

	func_698(iParam1, iParam2, num8 + num9);
	return;
}

void func_504(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE4B9 Hash - 0xB58D67C0 ^0xB58D67C0
{
	var unk;
	var unk13;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	func_20(0, &unk);
	func_20(1, &unk13);
	flag = false;

	if (func_121(39))
		flag = true;

	flag2 = false;
	flag3 = false;

	switch (iParam1)
	{
		case 0:
			if (iParam2 >= 50 && iParam3 < 50)
				if (flag)
					flag2 = true;
		
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (flag)
					flag2 = true;
			
				flag3 = true;
			}
			break;
	
		case 1:
			if (iParam2 >= 50 && iParam3 < 50)
				if (flag)
					flag2 = true;
		
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (flag)
					flag2 = true;
			
				flag3 = true;
			}
			break;
	}

	if (flag2)
	{
		func_442(1);
		func_704(MISC::GET_GAME_TIMER());
	}

	if (flag3)
		func_706(func_705(joaat("horse_core_drained")), 1);

	return;
}

BOOL func_505(int iParam0, var uParam1) // Position - 0xE58D Hash - 0x8ECDD6A2 ^0x8ECDD6A2
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 16;
			break;
	
		case 1:
			*uParam1 = 8;
			break;
	
		case 2:
			*uParam1 = 13;
			break;
	
		default:
			return false;
	}

	return true;
}

int func_506(int iParam0) // Position - 0xE5CF Hash - 0xD64EC510 ^0xD64EC510
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
	
		case 2:
			return 50;
	}

	return 0;
}

float func_507(int iParam0, int iParam1) // Position - 0xE601 Hash - 0xE7A5B02F ^0x3359F795
{
	int gameTimer;
	int value;
	float num;

	gameTimer = MISC::GET_GAME_TIMER();
	value = gameTimer - Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_3;
	value = func_384(value, 0, 30000);
	num = BUILTIN::TO_FLOAT(value) * 0.001f;
	return num;
}

void func_508(int iParam0, int iParam1, int iParam2) // Position - 0xE646 Hash - 0x8DF7D29B ^0x33E508B8
{
	Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_3 = iParam2;
	return;
}

void func_509(Ped pedParam0, int iParam1, int iParam2) // Position - 0xE666 Hash - 0x6B4F134A ^0x517A5E35
{
	int attributeIndex;
	int attributeBaseRank;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (func_505(iParam2, &attributeIndex))
		attributeBaseRank = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(pedParam0, attributeIndex);

	num = func_406(iParam1, iParam2);

	if (num != attributeBaseRank)
		func_707(iParam1, iParam2, attributeBaseRank);

	return;
}

float func_510(int iParam0, int iParam1) // Position - 0xE6AB Hash - 0x800FCAEB ^0x430C41D0
{
	return Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_2;
}

void func_511(int iParam0, int iParam1) // Position - 0xE6C9 Hash - 0xFF942D4A ^0xFF942D4A
{
	float num;
	float num2;

	num = func_510(iParam0, iParam1);
	num2 = func_507(iParam0, iParam1);
	num = num - num2;

	if (num < 0f)
		num = 0f;

	func_708(iParam0, iParam1, num);
	return;
}

void func_512(Ped pedParam0, int iParam1, int iParam2) // Position - 0xE700 Hash - 0xEA9BBCBE ^0xB92F23D8
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	float num;
	int num2;
	int num3;
	float num4;
	float num5;
	float num6;
	float num7;
	int num8;
	int num9;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	flag = false;

	if (func_74(iParam1) == 2)
		flag = true;

	flag2 = false;

	if (func_255(pedParam0))
		flag2 = true;

	flag3 = false;

	switch (iParam2)
	{
		case 0:
			if (flag)
				num = -60f;
			else
				flag3 = true;
			break;
	
		case 1:
			if (flag)
				num = -60f;
			else if (flag2)
				num = 192f;
			else if (func_709(pedParam0))
				flag3 = true;
			else
				num = 96f;
			break;
	
		case 2:
			num2 = func_406(iParam1, 2);
			num3 = 100 - func_406(iParam1, 1);
		
			if (num3 < 50)
				num = -96f;
			else if (num2 > 50)
				num = -60f;
			else if (num2 < 50)
				num = 60f;
			else
				flag3 = true;
			break;
	}

	num4 = num * 60f;
	num5 = func_507(iParam1, iParam2);
	num6 = (num5 / num4) * 100f;
	num7 = func_710(iParam1, iParam2);
	num8 = func_406(iParam1, iParam2);
	num9 = 0;

	if (!flag3)
	{
		num7 = num7 + num6;
	
		if (num7 >= 1f)
		{
			num7 = num7 - 1f;
			num9 = num9 + 1;
		}
		else if (num7 <= -1f)
		{
			num7 = num7 + 1f;
			num9 = num9 - 1;
		}
	
		func_711(iParam1, iParam2, num7);
	}

	if (iParam2 == 2)
	{
		if (num2 > 50)
		{
			if (num8 <= 50)
			{
				num8 = 50;
				func_712(iParam1, iParam2);
			}
		}
		else if (num2 < 50)
		{
			if (num8 >= 50)
			{
				num8 = 50;
				func_712(iParam1, iParam2);
			}
		}
	}

	if (num9 == 0)
		return;

	func_707(iParam1, iParam2, num8 + num9);
	return;
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE8B6 Hash - 0xDC43648B ^0xC978973F
{
	var unk;
	var unk13;
	Ped ped;
	BOOL flag;
	BOOL flag2;
	int statusEffectType;
	int num;
	Hash hash;
	Hash hash2;
	BOOL flag3;

	func_20(0, &unk);
	func_20(1, &unk13);
	ped = func_78(iParam0);
	flag = false;

	if (iParam0 == 0 || iParam0 == 1 && !unk.f_2)
		if (iParam0 == 0 && unk.f_10 || iParam0 == 1 && unk13.f_10)
			if (func_121(40))
				flag = true;

	flag2 = false;
	statusEffectType = 0;

	switch (iParam1)
	{
		case 0:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (flag)
				{
					flag2 = true;
					statusEffectType = 4;
				}
			}
		
			if (iParam2 < 100 && iParam3 == 100)
				flag;
			break;
	
		case 1:
			if (iParam2 <= 50 && iParam3 > 50)
				flag;
		
			if (iParam2 < 100 && iParam3 == 100)
				flag;
			break;
	
		case 2:
			num = func_286(ped, 2);
			hash = func_713(iParam0);
			hash2 = func_287(num);
		
			if (hash != hash2)
			{
				flag3 = func_553(ped, hash2, true);
			
				if (flag3)
					func_288(iParam0, hash2);
			}
		
			if (iParam3 > 70)
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, 14, 100);
			else
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, 14, 50);
			break;
	}

	if (flag2)
	{
		func_434(1);
		func_714(MISC::GET_GAME_TIMER());
	}

	if (statusEffectType != 0)
		ATTRIBUTE::_SET_STATUS_EFFECT_CORE_ICON(statusEffectType);

	return;
}

BOOL func_514() // Position - 0xEA1E Hash - 0xE835E19F ^0x141BD35D
{
	return Global_38.f_289.f_3250.f_1;
}

void func_515(int iParam0, float fParam1) // Position - 0xEA31 Hash - 0xE0122222 ^0xDD807074
{
	Global_1902887.f_379.f_10[iParam0] = fParam1;
	return;
}

int func_516() // Position - 0xEA48 Hash - 0xAD5CD544 ^0xAD5CD544
{
	return 5;
}

int func_517() // Position - 0xEA51 Hash - 0xD1F2E716 ^0xD1F2E716
{
	return 6;
}

int func_518(BOOL bParam0) // Position - 0xEA5A Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_2() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_519() // Position - 0xEA9B Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_520(Hash hParam0, Hash hParam1) // Position - 0xEAA7 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_715(func_594(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

BOOL func_521(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0xEAD3 Hash - 0x83727B4C ^0xA6F6F598
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_716(&hParam0);

	if (!func_263(hParam0, 0) && !func_715(func_594(hParam0), 2))
		return false;

	if (!bParam3 && func_520(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_717(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_718(false) };
		unk5.f_9 = joaat("SLOTID_NONE");
	
		if (!func_719(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
			return false;
		else if (func_720(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
			return false;
	
		if (func_721(hParam0, true))
			if (!func_719(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
				return false;
			else if (func_720(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
				return false;
	
		return true;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_722(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	num2 = func_264(hParam0, *panParam1, panParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return true;

	return false;
}

BOOL func_522(BOOL bParam0) // Position - 0xEC07 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_2() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_518(bParam0));
}

int func_523(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0xEC25 Hash - 0x85BC54D5 ^0xA60D4F06
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

	if (!func_524(*panParam0, &unk, true, false, -1))
		return num;

	if (unk.f_10 == iParam1)
		return num;

	if (unk.f_13)
		return num;

	num2 = func_602(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_723(*panParam0, true, false) };
		unk15.f_10 = iParam1;
		num = func_724(joaat("UPDATE"), &unk15, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("coach"))
	{
		unk44 = { func_725(*panParam0, true, false) };
		unk44.f_10 = iParam1;
		num = func_726(joaat("UPDATE"), &unk44, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk70 = { func_727(*panParam0, true, false) };
		unk70.f_10 = iParam1;
		num = func_728(joaat("UPDATE"), &unk70, bParam2);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk88 = { func_729(&unk, false) };
		unk88.f_10 = iParam1;
		num = func_730(joaat("UPDATE"), &unk88, bParam2);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_524(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0xED68 Hash - 0x113CD144 ^0x113CD144
{
	return func_731(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

void func_525(int iParam0) // Position - 0xED7E Hash - 0x938C2A90 ^0xAF694AA9
{
	Hash model;

	model = func_158(iParam0);
	STREAMING::REQUEST_MODEL(model, false);
	return;
}

void func_526(int iParam0) // Position - 0xED95 Hash - 0x2AA6EA0A ^0x5678563C
{
	Hash model;
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		model = Global_38.f_289.f_1[iParam0 /*460*/].f_15[i /*96*/];
	
		if (STREAMING::IS_MODEL_VALID(model))
			STREAMING::REQUEST_MODEL(model, false);
	}

	return;
}

BOOL func_527(int iParam0) // Position - 0xEDD4 Hash - 0x16F3368C ^0x8D9BB59A
{
	Hash model;

	model = func_158(iParam0);

	if (!STREAMING::HAS_MODEL_LOADED(model))
		return false;

	return true;
}

BOOL func_528(int iParam0) // Position - 0xEDF3 Hash - 0xF8165332 ^0x2BC2A4B9
{
	Hash model;
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		model = Global_38.f_289.f_1[iParam0 /*460*/].f_15[i /*96*/];
	
		if (STREAMING::IS_MODEL_VALID(model))
			if (!STREAMING::HAS_MODEL_LOADED(model))
				return false;
	}

	return true;
}

BOOL func_529(int iParam0) // Position - 0xEE3A Hash - 0xB073C27E ^0xB073C27E
{
	int num;

	num = iParam0;

	if (num >= 0 && num < 5)
		return true;

	return false;
}

void func_530(Ped pedParam0, int iParam1) // Position - 0xEE5B Hash - 0x588627F6 ^0xE00264D1
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(pedParam0, 7, iParam1);
	return;
}

void func_531(Ped pedParam0, int iParam1) // Position - 0xEE8E Hash - 0x588627F6 ^0xC3BB3FA5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(pedParam0, 7, iParam1);
	return;
}

int func_532(int iParam0) // Position - 0xEEC1 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_455;
}

int func_533(int iParam0) // Position - 0xEEF5 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_456;
}

void func_534(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0xEF29 Hash - 0x95EE6F5F ^0xE67D9CD0
{
	Vector3 offsetFromEntityInWorldCoords;
	Vector3 vector;
	Object object;
	Ped ped;
	int carriableSlot;
	int i;
	Hash drawable;
	Hash albedo;
	Hash normal;
	Hash material;
	Hash palette;
	int tint0;
	int tint1;
	int tint2;
	int num;
	Ped ped2;
	Hash hash;
	int num2;

	Global_1290271.f_1171.f_241[iParam2] = 0;

	if (!STREAMING::IS_MODEL_VALID(*hParam1))
		return;

	switch (iParam2)
	{
		case 0:
			vector = { 0f, -1f, 0f };
			break;
	
		case 1:
			vector = { -1f, 0f, 0f };
			break;
	
		case 2:
			vector = { 1f, 0f, 0f };
			break;
	}

	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedParam0, vector) };

	if (STREAMING::_IS_MODEL_AN_OBJECT(*hParam1))
	{
		object = OBJECT::CREATE_OBJECT(*hParam1, offsetFromEntityInWorldCoords, true, false, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*hParam1);
	
		if (!ENTITY::DOES_ENTITY_EXIST(object))
			return;
	
		carriableSlot = func_732(iParam2);
		TASK::TASK_CARRIABLE(object, hParam1->f_3, pedParam0, carriableSlot, 256);
		ENTITY::_SET_ENTITY_CARCASS_TYPE(object, hParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(object, hParam1->f_93);
		num = func_733(pedParam0, object);
	}
	else if (STREAMING::IS_MODEL_A_PED(*hParam1))
	{
		ped = func_734(*hParam1, offsetFromEntityInWorldCoords, 0, true, false, 0, true, true, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*hParam1);
	
		if (!ENTITY::DOES_ENTITY_EXIST(ped))
			return;
	
		if (hParam1->f_8 != 0)
			PED::_EQUIP_META_PED_OUTFIT(ped, hParam1->f_8);
	
		for (i = 0; i < hParam1->f_9; i = i + 1)
		{
			drawable = hParam1->f_10[i /*8*/];
			albedo = hParam1->f_10[i /*8*/].f_1;
			normal = hParam1->f_10[i /*8*/].f_2;
			material = hParam1->f_10[i /*8*/].f_3;
			palette = hParam1->f_10[i /*8*/].f_4;
			tint0 = hParam1->f_10[i /*8*/].f_5;
			tint1 = hParam1->f_10[i /*8*/].f_6;
			tint2 = hParam1->f_10[i /*8*/].f_7;
			PED::_SET_META_PED_TAG(ped, drawable, albedo, normal, material, palette, tint0, tint1, tint2);
		}
	
		PED::_UPDATE_PED_VARIATION(ped, false, true, true, true, false);
	
		if (hParam1->f_2 == 2)
		{
			ENTITY::SET_ENTITY_HEALTH(ped, 0, 0);
			PED::SET_PED_CONFIG_FLAG(ped, 517, true);
			PERSISTENCE::_0xF5622FA6ACFCA7DB(ped, hParam1->f_91);
		}
	
		if (ENTITY::GET_IS_ANIMAL(ped))
		{
			PED::_SET_PED_QUALITY(ped, hParam1->f_4);
			FLOCK::_SET_ANIMAL_RARITY(ped, hParam1->f_5);
			PED::_SET_PED_DAMAGE_CLEANLINESS(ped, hParam1->f_6);
			PED::_SET_PED_DAMAGED(ped, hParam1->f_7);
		}
	
		if (hParam1->f_92)
		{
			PED::SET_LOOTING_FLAG(ped, 0, false);
			ENTITY::_SET_ENTITY_FULLY_LOOTED(ped, true);
		}
	
		carriableSlot = func_732(iParam2);
		TASK::TASK_CARRIABLE(ped, hParam1->f_3, pedParam0, carriableSlot, 256);
		ENTITY::_SET_ENTITY_CARCASS_TYPE(ped, hParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(ped, hParam1->f_93);
	
		if (hParam1->f_94)
		{
			ENTITY::SET_ENTITY_RENDER_SCORCHED(ped, true);
			FIRE::START_ENTITY_FIRE(ped, 0, -1, 8);
		}
	
		ped2 = func_735(ped);
		hash = func_221(ped2);
	
		if (func_263(hash, 0))
			if (hash != hParam1->f_1)
				hParam1->f_1 = hash;
	
		num2 = func_733(pedParam0, ped);
	}

	return;
}

void func_535(int iParam0) // Position - 0xF1BA Hash - 0xEE326FEB ^0xEE326FEB
{
	int i;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	for (i = 0; i < 21; i = i + 1)
	{
		if (i == -1)
		{
		}
		else
		{
			Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_2[i] = 0f;
		}
	}

	return;
}

void func_536() // Position - 0xF20F Hash - 0x18B223B ^0xD86894F6
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		Global_1902887.f_303.f_2[i /*5*/] = -1;
		Global_1902887.f_303.f_2[i /*5*/].f_1 = -1;
		Global_1902887.f_303.f_2[i /*5*/].f_2 = 0f;
		Global_1902887.f_303.f_2[i /*5*/].f_3 = -1;
		Global_1902887.f_303.f_2[i /*5*/].f_4 = 0f;
	}

	return;
}

BOOL func_537(int iParam0, var uParam1) // Position - 0xF277 Hash - 0x8054A569 ^0xDADAEA76
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_655(iParam0, &unk))
		return false;

	*uParam1 = func_736(unk, joaat("SLOTID_HORSE_MANE"), false, -1);

	if (!func_263(*uParam1, 0))
		return false;

	return true;
}

BOOL func_538(int iParam0, var uParam1) // Position - 0xF2C1 Hash - 0x8054A569 ^0x2A07678C
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_655(iParam0, &unk))
		return false;

	*uParam1 = func_736(unk, joaat("SLOTID_HORSE_TAIL"), false, -1);

	if (!func_263(*uParam1, 0))
		return false;

	return true;
}

BOOL func_539(int iParam0, var uParam1) // Position - 0xF30B Hash - 0x8054A569 ^0x35CBE206
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_655(iParam0, &unk))
		return false;

	*uParam1 = func_736(unk, -1142966831, false, -1);

	if (!func_263(*uParam1, 0))
		return false;

	return true;
}

BOOL func_540(Hash hParam0, var uParam1) // Position - 0xF355 Hash - 0x5707A863 ^0xE95FAC31
{
	var unk;

	if (!func_737(856287005, hParam0))
		return false;

	unk = { func_70() };
	*uParam1 = func_736(unk, hParam0, false, -1);

	if (!func_263(*uParam1, 0))
		return false;

	return true;
}

void func_541(var uParam0) // Position - 0xF398 Hash - 0x9819A0D5 ^0x98F58DC2
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	return;
}

void func_542(var uParam0, int iParam1) // Position - 0xF3C7 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_543(var uParam0, int iParam1) // Position - 0xF3D4 Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

void func_544(var uParam0, int iParam1) // Position - 0xF3E2 Hash - 0x4F8BE4B5 ^0x5AE41537
{
	uParam0->f_2 = iParam1;
	return;
}

void func_545(var uParam0, int iParam1) // Position - 0xF3F0 Hash - 0x4F8BE4B5 ^0xCB719C1
{
	uParam0->f_3 = iParam1;
	return;
}

void func_546(var uParam0, int iParam1) // Position - 0xF3FE Hash - 0x4F8BE4B5 ^0xFF22C7C
{
	uParam0->f_4 = iParam1;
	return;
}

void func_547(var uParam0, int iParam1) // Position - 0xF40C Hash - 0x4F8BE4B5 ^0x8A18C31F
{
	uParam0->f_5 = iParam1;
	return;
}

void func_548(var uParam0, int iParam1) // Position - 0xF41A Hash - 0x4F8BE4B5 ^0xC6136975
{
	uParam0->f_6 = iParam1;
	return;
}

void func_549(Ped pedParam0) // Position - 0xF428 Hash - 0x4C9A12AA ^0x56351FC0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_manes"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_tails"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, 45524772, 0, false);
	return;
}

void func_550(Ped pedParam0, var uParam1) // Position - 0xF47F Hash - 0x8B68AA3D ^0x349991C3
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_738(pedParam0, *uParam1);
	func_738(pedParam0, uParam1->f_1);
	func_738(pedParam0, uParam1->f_2);
	return;
}

void func_551(Ped pedParam0) // Position - 0xF4CC Hash - 0x4C9A12AA ^0x5B9D01EA
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_blankets"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("saddle_horns"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("saddle_stirrups"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_bedrolls"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_saddlebags"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, 355515932, 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, -749728163, 0, false);
	return;
}

void func_552(Ped pedParam0, var uParam1) // Position - 0xF564 Hash - 0x8B68AA3D ^0x349991C3
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_738(pedParam0, *uParam1);
	func_738(pedParam0, uParam1->f_1);
	func_738(pedParam0, uParam1->f_2);
	func_738(pedParam0, uParam1->f_3);
	func_738(pedParam0, uParam1->f_4);
	func_738(pedParam0, uParam1->f_5);
	func_738(pedParam0, uParam1->f_6);
	func_738(pedParam0, uParam1->f_7);
	return;
}

BOOL func_553(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0xF5E3 Hash - 0x316F245D ^0x47CE71A3
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, entityModel))
		return 0;

	PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, true, true, true, true, false);

	return 1;
}

BOOL func_554() // Position - 0xF62A Hash - 0xD92B3E8B ^0xD92B3E8B
{
	if (!func_81(8))
		return false;

	return true;
}

Blip func_555() // Position - 0xF641 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1902887.f_429;
}

Blip func_556() // Position - 0xF650 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1902887.f_429.f_1;
}

void func_557(var uParam0) // Position - 0xF661 Hash - 0xA616ABDA ^0xA616ABDA
{
	Global_1902887.f_429 = *uParam0;
	return;
}

void func_558(var uParam0) // Position - 0xF673 Hash - 0x314E25ED ^0x4CE48A86
{
	Global_1902887.f_429.f_1 = *uParam0;
	return;
}

void func_559(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0xF687 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_396(iParam0, &num, &num2);

	if (!func_484(iParam0, num, num2, bParam2))
		return;

	if (!func_662(iParam0, 1024))
		return;

	func_485(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
	return;
}

void func_560(var uParam0) // Position - 0xF6E7 Hash - 0xA244D6E8 ^0xCE1F4CE9
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_739(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
	return;
}

Vector3 func_561(int iParam0) // Position - 0xF70F Hash - 0x91720586 ^0x55A0D1E8
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	if (iParam0 >= 7)
		return 0f, 0f, 0f;

	return Global_1902887[iParam0 /*43*/].f_37;
}

BOOL func_562(var uParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, int iParam8) // Position - 0xF743 Hash - 0x49E5DBD9 ^0xC61A93A3
{
	Vector3 vector;
	var outPosition;
	int num;
	float value;
	var gameplayCamRot;
	BOOL flag;
	int num2;

	num = 12;

	if (_IS_NULL_VECTOR(uParam4))
	{
		gameplayCamRot = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		value = gameplayCamRot.f_2;
	}
	else
	{
		value = func_565(uParam4, vParam1, 1);
	}

	value = value + (BUILTIN::TO_FLOAT(uParam0->f_2) * 10f * uParam0->f_2 % 2 == 0 ? 1f : -1f);
	vector = { vParam1 + ({ 0f, -BUILTIN::COS(value), BUILTIN::SIN(value) } * { (80f + 40f) * 0.5f, (80f + 40f) * 0.5f, (80f + 40f) * 0.5f } * { iParam8, iParam8, iParam8 }) };

	if (uParam0->f_2 > 3)
		num = 13;

	switch (func_741(uParam0))
	{
		case 0:
			func_742(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_743(uParam0, 1);
			break;
	
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vector, &outPosition, 1, 1077936128, 0))
			{
				if (func_744(outPosition, vParam1, false, false))
				{
					func_742(uParam0, outPosition);
				
					if (uParam0->f_12)
						func_743(uParam0, 3);
					else
						func_743(uParam0, 4);
				}
				else
				{
					func_743(uParam0, 2);
				}
			}
			else
			{
				func_743(uParam0, 2);
			}
			break;
	
		case 2:
			flag = false;
		
			if (func_745(vector, &(uParam0->f_3), &flag, num, false, 1127481344, 1101004800, -1138501878, -1138501878, 0))
				if (func_744(func_564(uParam0), vParam1, true, true))
					if (uParam0->f_12)
						func_743(uParam0, 3);
					else
						func_743(uParam0, 4);
				else
					func_743(uParam0, 5);
			else if (flag)
				func_743(uParam0, 5);
			break;
	
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::NAVMESH_REQUEST_PATH(pedParam7, func_564(uParam0), vParam1, 23);
			
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14 = uParam0->f_14 + 1;
					uParam0->f_13 = 0;
				
					if (uParam0->f_14 >= 50)
						func_743(uParam0, 5);
				}
			}
			else
			{
				switch (PATHFIND::_NAVMESH_REQUESTED_QUERY_STATUS(uParam0->f_13))
				{
					case 0:
						PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
						func_743(uParam0, 5);
						break;
				
					case 1:
						num2 = PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN(uParam0->f_13);
					
						if (func_746(num2, 2) && num != 13)
							func_743(uParam0, 5);
						else
							func_743(uParam0, 4);
					
						PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
						break;
				
					case 2:
						break;
				}
			}
			break;
	
		case 4:
			uParam0->f_2 = 0;
			func_747(&(uParam0->f_3.f_3), 1, 1, false, false);
			func_743(uParam0, 0);
			return true;
	
		case 5:
			uParam0->f_2 = uParam0->f_2 + 1;
		
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
		
			func_743(uParam0, 0);
			break;
	}

	return false;
}

BOOL func_563(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0xFA14 Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = iParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_748(pedParam0, &str);
}

Vector3 func_564(var uParam0) // Position - 0xFA5B Hash - 0x9DAA674D ^0x2F5D0C00
{
	return uParam0->f_3.f_3;
}

float func_565(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0xFA6B Hash - 0x9F66817B ^0xCA5C01B6
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

void func_566(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0xFAD0 Hash - 0xFEF7EAB ^0x64576AA5
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_19 = { uParam1 };
	Global_1902887[iParam0 /*43*/].f_22 = fParam4;
	return;
}

void func_567(int iParam0) // Position - 0xFB0E Hash - 0xA5F9E65B ^0xA5F9E65B
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_749(iParam0, 1);
	return;
}

BOOL func_568(int iParam0) // Position - 0xFB37 Hash - 0xA40B25A1 ^0xA40B25A1
{
	Ped ped;
	Ped ped2;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_66(iParam0))
		return false;

	ped = func_78(iParam0);
	ped2 = func_138(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (PED::GET_MOUNT(ped2) == ped)
		return true;

	return false;
}

void func_569(int iParam0, BOOL bParam1) // Position - 0xFB97 Hash - 0x123879AA ^0xA420DFFE
{
	Ped mount;
	Ped riderOfMount;
	Ped riderOfMount2;
	int num;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	mount = Global_1902887[iParam0 /*43*/];

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return;

	riderOfMount = PED::_GET_RIDER_OF_MOUNT(mount, false);
	riderOfMount2 = PED::_GET_RIDER_OF_MOUNT(mount, true);

	if (riderOfMount != riderOfMount2)
		return;

	if (bParam1)
		num = 2;
	else
		num = 1;

	TASK::TASK_HORSE_ACTION(mount, num, 0, 0);
	return;
}

int func_570() // Position - 0xFC1C Hash - 0x8190E5D8 ^0x5AFCE40C
{
	return Global_1902887.f_364.f_9;
}

BOOL func_571(Hash hParam0) // Position - 0xFC2D Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("a_c_horse_gang_bill"):
		case joaat("a_c_horse_gang_sean"):
		case joaat("a_c_horse_gang_john"):
		case joaat("a_c_horse_gang_karen"):
		case joaat("a_c_horse_gang_dutch"):
		case joaat("a_c_horse_eagleflies"):
		case joaat("a_c_horse_gang_javier"):
		case joaat("a_c_horse_gang_sadie"):
		case joaat("a_c_horse_gang_lenny"):
		case joaat("a_c_horse_gang_micah"):
		case joaat("a_c_horse_gang_hosea"):
		case joaat("a_c_horse_gang_sadie_endlesssummer"):
		case joaat("a_c_horse_gang_charles"):
		case joaat("a_c_horse_gang_uncle_endlesssummer"):
		case joaat("a_c_horse_gang_trelawney"):
		case joaat("a_c_horse_gang_kieran"):
		case joaat("a_c_horse_gang_uncle"):
		case joaat("a_c_horse_gang_charles_endlesssummer"):
			return true;
	}

	return false;
}

BOOL func_572(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xFCB1 Hash - 0xC9655EC3 ^0xE7BDB885
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

void func_573(int iParam0, int iParam1) // Position - 0xFD4F Hash - 0x7B6D7BEE ^0x302B1464
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1902887.f_491), &Global_38.f_289.f_1[iParam1 /*460*/], 460);
	MISC::COPY_SCRIPT_STRUCT(&Global_38.f_289.f_1[iParam1 /*460*/], &Global_38.f_289.f_1[iParam0 /*460*/], 460);
	MISC::COPY_SCRIPT_STRUCT(&Global_38.f_289.f_1[iParam0 /*460*/], &(Global_1902887.f_491), 460);
	return;
}

void func_574(int iParam0, int iParam1) // Position - 0xFDAE Hash - 0x258141CE ^0x8A040DDB
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1902887.f_448), &Global_1902887[iParam1 /*43*/], 43);
	MISC::COPY_SCRIPT_STRUCT(&Global_1902887[iParam1 /*43*/], &Global_1902887[iParam0 /*43*/], 43);
	MISC::COPY_SCRIPT_STRUCT(&Global_1902887[iParam0 /*43*/], &(Global_1902887.f_448), 43);
	return;
}

int func_575(int iParam0, int iParam1) // Position - 0xFDF6 Hash - 0x7A98D2DA ^0x5A60BE35
{
	var unk;
	var unk30;
	BOOL flag;
	Hash hash;

	unk.f_9 = joaat("SLOTID_NONE");
	unk30.f_9 = joaat("SLOTID_NONE");

	if (!func_655(iParam0, &unk))
		return 0;

	flag = false;

	if (!func_655(iParam1, &unk30))
		flag = true;

	if (flag)
	{
		hash = func_653(iParam1);
	
		if (hash == 0)
			return 0;
	
		if (!func_750(unk, unk.f_5, hash, false, false))
			return 0;
	}
	else if (!func_751(unk, unk30, 0, false))
	{
		return 0;
	}

	return 1;
}

void func_576(int iParam0) // Position - 0xFE89 Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1902887.f_406.f_1 = iParam0;
	return;
}

BOOL func_577(int iParam0, Hash hParam1) // Position - 0xFE9C Hash - 0x7F3C0687 ^0x18581D3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_655(iParam0, &unk))
		return false;

	unk30 = { func_262(hParam1, unk, joaat("SLOTID_HORSE_MANE"), false) };
	return func_267(unk30, true, false);
}

BOOL func_578(int iParam0, Hash hParam1) // Position - 0xFEE1 Hash - 0x7F3C0687 ^0x15BF14B9
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_655(iParam0, &unk))
		return false;

	unk30 = { func_262(hParam1, unk, joaat("SLOTID_HORSE_TAIL"), false) };
	return func_267(unk30, true, false);
}

BOOL func_579(int iParam0, Hash hParam1) // Position - 0xFF26 Hash - 0x7F3C0687 ^0x23710DF4
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_655(iParam0, &unk))
		return false;

	unk30 = { func_262(hParam1, unk, -1142966831, false) };
	return func_267(unk30, true, false);
}

void func_580(int iParam0, int iParam1) // Position - 0xFF6B Hash - 0xC63A3C98 ^0x20B85A45
{
	Ped ped;
	Hash entityModel;
	int num;
	int _int;
	int gameTimer;
	int num2;
	int attributeRank;
	float num3;
	int i;
	int attributeIndex;
	int attributeRank2;

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(ped);
	num = func_752(entityModel);

	if (DECORATOR::DECOR_EXIST_ON(ped, "HorseGender"))
	{
		_int = DECORATOR::DECOR_GET_INT(ped, "HorseGender");
	}
	else
	{
		_int = func_753(ped);
		DECORATOR::DECOR_SET_INT(ped, "HorseGender", _int);
	}

	func_754(iParam0, entityModel);
	func_755(iParam0, num);
	func_756(iParam0, _int);
	gameTimer = -1;
	num2 = -15;

	if (iParam1 != 0)
	{
		gameTimer = MISC::GET_GAME_TIMER();
		num2 = func_242();
	}

	func_152(iParam0, iParam1);
	func_757(iParam0, gameTimer);
	func_758(iParam0, num2);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, 7);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(ped, 7));
	func_350(iParam0, attributeRank);
	func_645(iParam0, num3);

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_505(i, &attributeIndex))
		{
			attributeRank2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, attributeIndex);
			func_707(iParam0, i, attributeRank2);
		}
	}

	return;
}

void func_581(int iParam0, int iParam1) // Position - 0x1007E Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_457 = iParam1;
	return;
}

int func_582(Ped pedParam0) // Position - 0x100B2 Hash - 0x416CD007 ^0xDAFE17A5
{
	Hash entityModel;
	Hash outfit;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(joaat("META_HORSE_SADDLE_ONLY"), entityModel))
		return 0;

	outfit = joaat("META_HORSE_SADDLE_ONLY");

	if (PED::_IS_META_PED_OUTFIT_EQUIPPED(pedParam0, outfit))
		return 1;

	return 0;
}

int func_583(var uParam0, var uParam1, var uParam2) // Position - 0x1010F Hash - 0x39897488 ^0x39897488
{
	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam0 = func_759();
	*uParam1 = func_760();
	*uParam2 = func_761();
	return 1;
}

int func_584(ePedType eptParam0) // Position - 0x10139 Hash - 0xA0A98F4D ^0x83A3F127
{
	int defaultMaxAttributeRank;

	if (!STREAMING::IS_MODEL_VALID(eptParam0))
		eptParam0 = joaat("a_c_horse_tennesseewalker_chestnut");

	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(eptParam0, 7);
	return defaultMaxAttributeRank;
}

void func_585(int iParam0) // Position - 0x1015D Hash - 0xCC180397 ^0xCC180397
{
	if (func_465() < iParam0)
		func_762(iParam0);

	return;
}

int func_586() // Position - 0x10174 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

BOOL func_587(Hash hParam0) // Position - 0x10182 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
		case joaat("consumable_herb_oleander_sage"):
		case joaat("consumable_herb_parasol_mushroom"):
		case joaat("consumable_herb_hummingbird_sage"):
		case joaat("consumable_herb_black_berry"):
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_herb_sage"):
		case joaat("consumable_crafted_super_meal"):
		case joaat("consumable_beets"):
		case joaat("consumable_herb_evergreen_huckleberry"):
		case joaat("consumable_herb_english_mace"):
		case joaat("consumable_herb_bay_bolete"):
		case joaat("consumable_peppermint"):
		case joaat("consumable_herb_chanterelles"):
		case joaat("consumable_corn"):
		case joaat("consumable_herb_rams_head"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_herb_wintergreen_berry"):
		case joaat("consumable_herb_indian_tobacco"):
		case joaat("consumable_herb_yarrow"):
		case joaat("consumable_herb_wild_mint"):
		case joaat("consumable_herb_burdock_root"):
		case joaat("consumable_herb_black_currant"):
		case -241666815:
		case joaat("consumable_herb_american_ginseng"):
		case joaat("consumable_herb_golden_currant"):
		case joaat("consumable_herb_violet_snowdrop"):
		case joaat("consumable_herb_red_sage"):
		case joaat("consumable_herb_milkweed"):
		case joaat("consumable_herb_prairie_poppy"):
		case joaat("consumable_peach"):
		case joaat("consumable_herb_desert_sage"):
		case joaat("consumable_carrot"):
		case joaat("consumable_herb_oregano"):
		case joaat("consumable_herb_red_raspberry"):
		case joaat("consumable_herb_wild_feverfew"):
		case joaat("consumable_herb_currant"):
		case joaat("consumable_pear"):
		case joaat("consumable_herb_wild_carrots"):
		case joaat("consumable_herb_ginseng"):
		case joaat("consumable_haycube"):
		case joaat("consumable_apple"):
		case joaat("consumable_herb_alaskan_ginseng"):
		case joaat("consumable_celery"):
		case joaat("consumable_herb_vanilla_flower"):
		case joaat("consumable_herb_creeping_thyme"):
			return true;
	}

	return false;
}

BOOL func_588(Hash hParam0) // Position - 0x102AE Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_special_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
		case joaat("consumable_potent_horse_medicine"):
			return true;
	}

	return false;
}

BOOL func_589(Hash hParam0) // Position - 0x102DE Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_horse_stimulant"):
		case joaat("consumable_horse_stimulant_used"):
		case joaat("consumable_potent_horse_stimulant"):
		case joaat("consumable_special_horse_stimulant_crafted"):
			return true;
	}

	return false;
}

BOOL func_590(Hash hParam0) // Position - 0x1030E Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_special_horse_reviver_crafted"):
		case joaat("consumable_horse_reviver"):
			return true;
	}

	return false;
}

BOOL func_591(Hash hParam0) // Position - 0x10332 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("CONSUMABLE_HORSE_OINTMENT_CRAFTED"):
			return true;
	}

	return false;
}

BOOL func_592(Hash hParam0) // Position - 0x10350 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("kit_horse_brush"):
			return true;
	}

	return false;
}

BOOL func_593(Hash hParam0) // Position - 0x1036E Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case -1724045811:
			return true;
	}

	return false;
}

Hash func_594(Hash hParam0) // Position - 0x1038C Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_595(Hash hParam0, Hash hParam1) // Position - 0x10396 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_715(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_596(Hash hParam0) // Position - 0x103CC Hash - 0x1B551CF7 ^0xD3BB1F31
{
	return func_602(hParam0) == joaat("consumable");
}

Hash func_597(Hash hParam0, int iParam1) // Position - 0x103E0 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_263(hParam0, 0))
		return 0;

	num = func_602(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_372(hParam0, 1399091007))
	{
		func_763(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_598(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1045A Hash - 0x81C6837 ^0x21B516A3
{
	BOOL flag;
	int value;
	var unk;
	int num;
	char* str;
	int num2;
	int num3;
	Hash hash;
	int num4;
	char* str2;
	char* str3;
	int num5;
	char* str4;
	Hash hash2;
	Hash hash3;
	int value2;
	const char* str5;
	var unk7;

	if (!func_263(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_764() || bParam6)
	{
		func_765(hParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}

	flag = false;
	value = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (hParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_GET_PUMP", 32);

	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		flag = true;
	}
	else if (bParam2 && func_767(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_602(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_372(hParam0, -1982291600) && !func_372(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	hash = func_768(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || hash == -1674363638 || hash == 252325943 || hash == 829857647 || hash == -636562458 || hash == 1341188928 || hash == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_769(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (bParam5)
	{
		str = "ITEMTYPE_ORDERED_ITEM";
		str.f_1 = "itemtype_textures";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num4 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	str3 = "Transaction_Feed_Sounds";
	num5 = 0;

	if (flag)
	{
		num4 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num5 = 1;
	}

	if (func_372(hParam0, 474910316))
	{
		str4 = func_770(hParam0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str4))
		{
			str2 = str4;
			str3 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_rpg_special_1");
		else
			num4 = joaat("color_yellowdark");

	if (func_372(hParam0, 1816585950))
		num4 = joaat("color_objective");

	if (func_771(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_yellow");
		else
			num4 = joaat("color_yellowdark");

	hash2 = func_772(hParam0, false);

	if (func_773(hash) && func_372(hParam0, -306684263) && hash2 != 0)
	{
		hash2 = func_774(hParam0);
	}
	else if (func_602(hParam0) == joaat("CLOTHING"))
	{
		hash3 = func_775(hParam0);
	
		if (func_263(hash3, 0))
			hash2 = func_772(hash3, false);
	}

	if (func_776(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_777(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_697(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash2), value), num4);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash2);

	if (hash == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || hash == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || hash == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || hash == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_778(hParam0, -442898163));

	if (hash == -126813555 || hash == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_779(hParam0, &unk7))
			str5 = func_781(func_780(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_636(str5, str.f_1, MISC::GET_HASH_KEY(str), num5, num4, str3, str2, 0, true);
	return;
}

BOOL func_599(Hash hParam0, int iParam1) // Position - 0x10933 Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_263(hParam0, 0))
		return false;

	num = func_602(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_783(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_782(hParam0, 1))
				return false;
			break;
	}

	return func_601(hParam0, false, false, false) >= iParam1;
}

struct<2> func_600(Hash hParam0) // Position - 0x109B6 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_263(hParam0, 0))
		return unk;

	if (func_372(hParam0, -305066475))
		if (func_2() == -1)
			if (func_372(hParam0, -537818634))
				return func_784(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_784(joaat("deadeye_items"));
	else if (func_372(hParam0, -537818634))
		return func_784(joaat("medicine_items"));

	if (func_372(hParam0, 2084895747))
		return func_784(joaat("lock_breaker_items"));

	return unk3;
}

int func_601(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10A4A Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_263(hParam0, 0))
		return 0;

	num = func_602(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_597(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_785(hParam0, false);
	}

	if (func_520(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_518(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_786(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_518(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

int func_602(Hash hParam0) // Position - 0x10B0C Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_263(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_603(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x10B37 Hash - 0x4C808C39 ^0x99CF3799
{
	var unk;
	int num;
	int num2;
	var unk19;
	var unk33;
	int i;
	int num3;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	unk = { func_787(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam2)
		func_788(&unk, func_718(false));

	if (!func_789(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_790(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_656(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_791(num);
	num3 < iParam1;
	return true;
}

BOOL func_604(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x10C03 Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_263(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_520(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_792(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk = { func_605(hParam0, bParam4, false) };
	unk6 = { func_262(hParam0, unk, unk.f_4, bParam4) };
	return func_656(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

struct<5> func_605(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10C7B Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_261(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_602(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_794(hParam0, -1823706425))
			{
				unk = { func_262(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_794(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_262(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_262(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_794(hParam0, -1653629781))
			{
				unk = { func_262(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_793(bParam1) };
		
			switch (func_768(hParam0))
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
			unk = { func_262(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_718(bParam1) };
		
			if (bParam2 && func_721(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_719(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_719(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_720(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_524(unk, &unk28, bParam1, false, -1))
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
			else if (func_794(hParam0, -1653629781))
			{
				unk = { func_262(1384535894, unk, 1784584921, bParam1) };
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

void func_606(int iParam0, BOOL bParam1, int iParam2) // Position - 0x10FEF Hash - 0x2B098F6F ^0x2F7D859F
{
	Global_1940252.f_5 = iParam0;
	Global_1940252.f_37 = iParam2;

	if (bParam1 || func_795() && iParam2 == 0)
	{
		func_796(1);
		func_797(1);
	}

	return;
}

void func_607(Ped pedParam0, Hash hParam1) // Position - 0x11029 Hash - 0x507A0E12 ^0xD7421B0D
{
	var unk;
	BOOL isPedMotivationStateEnabled;
	int num;
	int num2;
	int attributeRank;
	int value;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	func_706(func_705(joaat("horse_fed")), 1);
	unk = { func_380(false, true, false, -1) };
	isPedMotivationStateEnabled = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(pedParam0, 3);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, true);

	PED::_SET_PED_MOTIVATION(pedParam0, 3, 0f, 0);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, false);

	PED::_0xEB8886E1065654CD(pedParam0, 10, "ALL", 10f);
	num = func_382(unk, 1);
	func_798(pedParam0, hParam1);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(pedParam0)))
		return;

	num2 = 23;

	if (func_799(hParam1))
		num2 = 15;
	else if (num >= 50)
		num2 = 14;
	else if (num >= 25)
		num2 = 13;
	else
		num2 = 12;

	func_381(&unk, 0, true);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, 0);
	value = func_800(attributeRank);
	func_801(unk, 1, BUILTIN::TO_FLOAT(value));

	if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
	{
		func_802(pedParam0, &Global_1903838, num2, 0);
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE"), false, false);
	
		if (ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, 8) < 25 && num >= 25)
			func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"), false, false);
	}
	else
	{
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"), false, false);
	}

	return;
}

void func_608(Ped pedParam0, Hash hParam1) // Position - 0x11188 Hash - 0x913534DE ^0xBD71FC61
{
	int num;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_587(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return;

	func_804(pedParam0);
	num = -1;
	flag = false;

	if (func_318(pedParam0))
	{
		num = func_333(pedParam0);
		flag = true;
	}

	PED::_0xEB8886E1065654CD(pedParam0, 10, "ALL", 10f);
	func_706(func_705(joaat("horse_fed")), 1);
	num2 = func_496(pedParam0, 0);
	num3 = func_496(pedParam0, 1);
	func_805(pedParam0, hParam1);
	num4 = func_496(pedParam0, 0);
	num5 = func_496(pedParam0, 1);
	num6 = 0;
	num6 = num6 + (num4 - num2);
	num6 = num6 + (num5 - num3);
	func_102(pedParam0);

	if (!flag)
		return;

	if (func_806(hParam1))
		func_706(func_705(joaat("horse_fed_mushroom")), 1);

	if (func_807(hParam1))
		return;

	if (func_799(hParam1))
	{
		func_391(num, 15);
		return;
	}

	num7 = -1;

	if (num6 >= 50)
		num7 = 12;
	else if (num6 >= 25)
		num7 = 13;
	else if (num6 >= 0)
		num7 = 14;

	if (num7 != -1)
		func_391(num, num7);

	if (!func_156(43))
	{
		func_228(43, false);
		func_436(MISC::GET_GAME_TIMER());
	}

	return;
}

void func_609(Ped pedParam0, Hash hParam1) // Position - 0x112F5 Hash - 0x913534DE ^0xBD71FC61
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_588(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(Global_1295666.f_5))
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE"), false, false);
	else
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"), false, false);

	func_706(func_705(joaat("horse_medicine_given")), 1);
	func_798(pedParam0, hParam1);
	return;
}

void func_610(Ped pedParam0, Hash hParam1) // Position - 0x1137B Hash - 0x913534DE ^0xBD71FC61
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_588(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	func_706(func_705(joaat("horse_medicine_given")), 1);
	func_805(pedParam0, hParam1);
	return;
}

void func_611(Ped pedParam0, Hash hParam1) // Position - 0x113D9 Hash - 0xCBAB2D53 ^0x23EB6DA9
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	func_706(func_705(joaat("horse_stimulant_given")), 1);
	func_798(pedParam0, hParam1);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(pedParam0)))
		return;

	if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(Global_1295666.f_5))
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE"), false, false);
	else
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"), false, false);

	return;
}

void func_612(Ped pedParam0, Hash hParam1) // Position - 0x11457 Hash - 0x913534DE ^0xBD71FC61
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_589(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	func_706(func_705(joaat("horse_stimulant_given")), 1);
	func_805(pedParam0, hParam1);
	return;
}

void func_613(Ped pedParam0, Hash hParam1) // Position - 0x114B5 Hash - 0x57851FE0 ^0x34D664D7
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (!PED::IS_PED_INJURED(pedParam0))
		return;

	func_798(pedParam0, hParam1);
	PED::_0xEB8886E1065654CD(pedParam0, 10, "ALL", 10f);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(pedParam0)))
		return;

	if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(Global_1295666.f_5))
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE"), false, false);
	else
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"), false, false);

	return;
}

int func_614(Ped pedParam0, Hash hParam1) // Position - 0x11529 Hash - 0x4DB9A929 ^0x1D343FA5
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return 0;

	if (!func_590(hParam1))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	switch (hParam1)
	{
		case joaat("consumable_horse_reviver"):
			break;
	}

	func_805(pedParam0, hParam1);
	func_706(func_705(joaat("horse_revived")), 1);
	return 1;
}

void func_615(Ped pedParam0, Hash hParam1) // Position - 0x1159E Hash - 0xF60FE843 ^0x2BC807C5
{
	BOOL isPedMotivationStateEnabled;
	var unk;
	int attributeRank;
	float num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	isPedMotivationStateEnabled = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(pedParam0, 3);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, true);

	PED::_SET_PED_MOTIVATION(pedParam0, 3, 0f, 0);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, false);

	func_798(pedParam0, hParam1);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(pedParam0)))
		return;

	if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(Global_1295666.f_5))
	{
		unk = { func_380(false, true, false, -1) };
		!func_381(&unk, 0, true);
		attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, 0);
		num = BUILTIN::TO_FLOAT(func_808(attributeRank)) + (60f * 60f);
		func_802(pedParam0, &Global_1903838, 19, 0);
		func_801(unk, 0, num);
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE"), false, false);
	}
	else
	{
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"), false, false);
	}

	return;
}

void func_616(Ped pedParam0, Hash hParam1) // Position - 0x1167F Hash - 0x913534DE ^0xBD71FC61
{
	int num;
	BOOL flag;
	int num2;
	float num3;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_591(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	func_804(pedParam0);
	func_805(pedParam0, hParam1);
	flag = func_318(pedParam0);

	if (flag)
		num = func_333(pedParam0);

	func_102(pedParam0);

	if (!flag)
		return;

	if (!func_700(pedParam0, 1))
		func_391(num, 18);

	num2 = func_809(pedParam0);
	num3 = BUILTIN::TO_FLOAT(func_808(num2)) + (60f * 60f);
	func_708(num, 0, num3);
	return;
}

void func_617(Ped pedParam0, Hash hParam1) // Position - 0x11736 Hash - 0xF60FE843 ^0x2BC807C5
{
	BOOL isPedMotivationStateEnabled;
	var unk;
	int attributeRank;
	float num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	isPedMotivationStateEnabled = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(pedParam0, 3);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, true);

	PED::_SET_PED_MOTIVATION(pedParam0, 3, 0f, 0);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, false);

	func_798(pedParam0, hParam1);

	if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()) != pedParam0)
	{
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"), false, false);
		return;
	}

	func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE"), false, false);
	unk = { func_380(false, true, false, -1) };
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, 0);
	num = BUILTIN::TO_FLOAT(func_808(attributeRank)) + (60f * 60f);
	func_801(unk, 0, num);
	return;
}

void func_618(Ped pedParam0, Hash hParam1) // Position - 0x117EB Hash - 0x913534DE ^0xBD71FC61
{
	int num;
	BOOL flag;
	int num2;
	float num3;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_593(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	flag = false;

	if (func_318(pedParam0))
	{
		num = func_333(pedParam0);
		flag = true;
	}

	if (flag)
	{
		num2 = func_809(pedParam0);
		num3 = BUILTIN::TO_FLOAT(func_808(num2)) + (60f * 60f);
		func_708(num, 0, num3);
	}

	func_804(pedParam0);
	func_805(pedParam0, hParam1);
	return;
}

void func_619(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x11886 Hash - 0x3B7FDB19 ^0x98C79530
{
	Ped mountOwnedByPlayer;
	BOOL isPedMotivationStateEnabled;
	var unk;
	int value;
	BOOL flag;
	int gameTimer;
	BOOL flag2;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());

	if (mountOwnedByPlayer != pedParam0)
	{
		func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"), false, false);
		return;
	}

	isPedMotivationStateEnabled = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(pedParam0, 3);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, true);

	PED::_SET_PED_MOTIVATION(pedParam0, 3, 0f, 0);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, false);

	PED::_0xEB8886E1065654CD(pedParam0, 10, "ALL", 10f);
	func_798(pedParam0, hParam1);
	unk = { func_380(false, true, false, -1) };
	!func_381(&unk, 0, true);
	value = func_808(0);
	func_801(unk, 0, BUILTIN::TO_FLOAT(value));
	flag = false;
	gameTimer = MISC::GET_GAME_TIMER();

	if (Global_1290271.f_1640.f_19 + 45000 > gameTimer)
		flag = true;

	flag2 = false;

	if (flag && Global_1290271.f_1640.f_19 + 15000 > gameTimer)
		flag2 = true;

	num = 23;

	if (iParam2 >= 10)
		num = 18;
	else if (flag)
		if (flag2)
			return;
		else
			num = 16;
	else
		num = 17;

	switch (num)
	{
		case 16:
		case 17:
			func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE"), false, false);
			break;
	
		case 18:
			func_803(joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"), false, false);
			break;
	
		case 23:
			return;
	}

	func_802(pedParam0, &Global_1903838, num, 0);
	Global_1290271.f_1640.f_19 = gameTimer;
	return;
}

void func_620(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x11A09 Hash - 0x4C0C4CFB ^0xE9BAC152
{
	int num;
	BOOL flag;
	int num2;
	int value;
	int num3;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_592(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	func_804(pedParam0);
	PED::_0xEB8886E1065654CD(pedParam0, 10, "ALL", 10f);
	func_805(pedParam0, hParam1);
	func_102(pedParam0);
	flag = func_318(pedParam0);

	if (flag)
		num = func_333(pedParam0);

	if (!flag)
		return;

	num2 = func_809(pedParam0);
	value = func_808(num2);
	func_708(num, 0, BUILTIN::TO_FLOAT(value));

	if (iParam2 >= 10)
		num3 = 16;
	else
		num3 = 17;

	func_391(num, num3);
	return;
}

BOOL func_621(var uParam0, BOOL bParam1) // Position - 0x11ACC Hash - 0xF9E653C0 ^0x9BA9D823
{
	var unk;
	var unk30;
	int num;
	int num2;
	var unk48;
	int i;

	unk.f_9 = joaat("SLOTID_NONE");
	unk30 = { func_787(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("CI_CATEGORY_HORSE"), 0, 0) };

	if (func_789(&unk30, &num, &num2, bParam1))
	{
		unk48.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_790(&unk48, i, num, num2))
			{
				if (func_810(&unk48, &unk, false))
				{
					if (func_811(&(unk.f_24), 16))
					{
						*uParam0 = { unk };
						func_791(num);
						return true;
					}
				}
			}
		}
	
		func_791(num);
	}

	return false;
}

struct<4> func_622() // Position - 0x11B77 Hash - 0x4803CB43 ^0xD483E361
{
	return Global_1290271.f_11.f_310;
}

BOOL func_623() // Position - 0x11B8A Hash - 0xD2218D45 ^0xBA175CE4
{
	return Global_1290271.f_11.f_318 > Global_1295666.f_16;
}

void func_624(var uParam0, BOOL bParam1) // Position - 0x11BA2 Hash - 0xCA76CBED ^0xC727761F
{
	Global_1290271.f_11.f_310 = { *uParam0 };

	if (bParam1)
		Global_1290271.f_11.f_318 = Global_1295666.f_16 + 10;

	return;
}

int func_625(Player plParam0) // Position - 0x11BCF Hash - 0xA477AA7 ^0xA477AA7
{
	int num;
	BOOL flag;

	num = func_812(plParam0);
	flag = func_814(func_813(), 0, 0);

	if (!flag)
		return 3;

	return num;
}

BOOL func_626() // Position - 0x11BF7 Hash - 0x7294FC88 ^0x9A02C7ED
{
	int i;
	var unk;

	for (i = 0; i < 32; i = i + 1)
	{
		unk = -1;
		unk.f_1 = -1;
		unk = { func_126(i) };
	
		if (func_127(unk) == 7)
			return 1;
	}

	return 0;
}

BOOL func_627(int iParam0) // Position - 0x11C3A Hash - 0x7F5F619C ^0xACAEEAFD
{
	return func_815(&(Global_3145858.f_6), iParam0);
}

// Unhandled jump detected. Output should be considered invalid
int func_628(int iParam0, int iParam1) // Position - 0x11C4E Hash - 0x5C09F73F ^0x5C09F73F
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
		
			case 1:
				return 1;
		
			case 2:
				return 2;
		
			case 3:
				return 3;
		
			default:
				goto 0x6E;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
		
			case 1:
				return 5;
		
			case 2:
				return 6;
		
			case 3:
				return 7;
		
			default:
			
		}
	}

	return -1;
}

BOOL func_629(var uParam0, BOOL bParam1) // Position - 0x11CC0 Hash - 0xF9E653C0 ^0x9BA9D823
{
	var unk;
	var unk30;
	int num;
	int num2;
	var unk48;
	int i;

	unk.f_9 = joaat("SLOTID_NONE");
	unk30 = { func_787(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("CI_CATEGORY_HORSE"), 0, 0) };

	if (func_789(&unk30, &num, &num2, bParam1))
	{
		unk48.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_790(&unk48, i, num, num2))
			{
				if (func_810(&unk48, &unk, false))
				{
					if (func_811(&(unk.f_24), 32))
					{
						*uParam0 = { unk };
						func_791(num);
						return true;
					}
				}
			}
		}
	
		func_791(num);
	}

	return false;
}

struct<4> func_630(BOOL bParam0) // Position - 0x11D6B Hash - 0x42DD0B31 ^0xA17C7FB4
{
	int num;
	int num2;
	var guid;
	int i;

	guid.f_9 = joaat("SLOTID_NONE");

	if (!func_816("ALL HORSES", &num, &num2, joaat("SLOTID_NONE"), bParam0))
		return guid;

	for (i = 0; i < num2; i = i + 1)
	{
		if (!func_790(&guid, i, num, num2))
		{
		}
		else if (INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		{
			break;
		}
	}

	func_791(num);
	return guid;
}

void func_631(Any* panParam0) // Position - 0x11DDB Hash - 0xD44489E ^0x64953C3C
{
	func_265(panParam0);
	panParam0->f_4 = 0;
	panParam0->f_5 = { func_519() };
	panParam0->f_9 = 0;
	panParam0->f_10 = -1;
	panParam0->f_11 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(panParam0->f_12), "", 64);
	panParam0->f_20 = 0;
	panParam0->f_22 = 0;
	panParam0->f_23 = 0;
	return;
}

BOOL func_632(Any* panParam0, Any* panParam1, Any* panParam2, BOOL bParam3) // Position - 0x11E1E Hash - 0x19A42D55 ^0x19A42D55
{
	if (!func_810(panParam0, panParam2, bParam3))
		return false;

	if (!func_817(panParam1, panParam2))
		return false;

	return true;
}

BOOL func_633(Any* panParam0, Any* panParam1, Any* panParam2, BOOL bParam3) // Position - 0x11E49 Hash - 0x19A42D55 ^0x19A42D55
{
	if (!func_818(panParam0, panParam2, bParam3))
		return false;

	if (!func_819(panParam1, panParam2))
		return false;

	return true;
}

BOOL func_634(Any* panParam0) // Position - 0x11E74 Hash - 0xBC558544 ^0x5B67D893
{
	var guid2;
	var unk4;
	BOOL flag;
	int i;

	guid2 = { func_519() };

	if (INVENTORY::_INVENTORY_COMPARE_GUIDS(panParam0, &guid2))
		return false;

	unk4.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < 10; i = i + 1)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_17418.f_55.f_61.f_41[i /*56*/], panParam0))
		{
			flag = true;
			break;
		}
	
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_17418.f_55.f_61.f_41[i /*56*/], &guid2))
		{
			func_820(&Global_17418.f_55.f_61.f_41[i /*56*/]);
			Global_17418.f_55.f_61.f_41[i /*56*/] = { *panParam0 };
			flag = true;
			break;
		}
	
		if (func_524(Global_17418.f_55.f_61.f_41[i /*56*/], &unk4, true, true, -1))
		{
		}
		else
		{
			func_820(&Global_17418.f_55.f_61.f_41[i /*56*/]);
			Global_17418.f_55.f_61.f_41[i /*56*/] = { *panParam0 };
			flag = true;
			break;
		}
	}

	if (!flag)
		return false;

	return true;
}

void func_635(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x11F62 Hash - 0x75240B93 ^0x97E1101F
{
	int i;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return;

	for (i = 0; i < 10; i = i + 1)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_17418.f_55.f_61.f_41[i /*56*/], &uParam0))
		{
			Global_17418.f_55.f_61.f_41[i /*56*/].f_40[iParam4 /*4*/] = iParam5;
			return;
		}
	}

	if (!func_634(&uParam0))
		return;

	Global_17418.f_55.f_61.f_41[i /*56*/].f_40[iParam4 /*4*/] = iParam5;
	return;
}

int func_636(char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x11FDA Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_821(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_637(int iParam0, int iParam1) // Position - 0x1203D Hash - 0x300539A2 ^0x300539A2
{
	float num;

	if (iParam1 == -1)
		return false;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	num = func_822(iParam1);

	if (num == 1E+09f)
		return false;

	if (func_639(iParam0, iParam1) >= num)
		return true;

	return false;
}

BOOL func_638(int iParam0, int iParam1) // Position - 0x12095 Hash - 0x7B20FD22 ^0x7B20FD22
{
	Ped ped;
	float num;

	if (iParam1 == -1)
		return false;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	switch (iParam1)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 9:
			return false;
	}

	ped = func_78(iParam0);
	num = func_143(ped);

	if (num >= 0.1f)
		return true;

	return false;
}

float func_639(int iParam0, int iParam1) // Position - 0x12110 Hash - 0x5CEE20E0 ^0xF900B9C2
{
	if (iParam1 == -1)
		return 0f;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_2[iParam1];
}

float func_640(int iParam0) // Position - 0x12154 Hash - 0xD7104B3 ^0xD7104B3
{
	switch (iParam0)
	{
		case 0:
			return 15f;
	
		case 1:
			return 2f;
	
		case 2:
			return 1f;
	
		case 3:
			return 1f;
	
		case 4:
			return 4f;
	
		case 5:
			return 100f;
	
		case 6:
			return 25f;
	
		case 7:
			return 5f;
	
		case 8:
			return 1f;
	
		case 9:
			return 15f;
	
		case 10:
			return 15f;
	
		case 11:
			return 1f;
	
		case 12:
			return 15f;
	
		case 13:
			return 5f;
	
		case 14:
			return 1f;
	
		case 15:
			return 5f;
	
		case 16:
			return 15f;
	
		case 17:
			return 1f;
	
		case 18:
			return 5f;
	
		case 19:
			return 15f;
	
		case 20:
			return 1f;
	}

	return 0f;
}

BOOL func_641(Ped pedParam0, int iParam1) // Position - 0x12296 Hash - 0xFCED259B ^0x20281203
{
	int num;
	var unk;
	Entity entity;

	if (iParam1 == -1)
		return false;

	num = func_220(iParam1);

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, pedParam0, num, 0))
		return false;

	entity = unk.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return false;

	return true;
}

BOOL func_642() // Position - 0x122D8 Hash - 0x38870270 ^0x38870270
{
	return Global_38.f_289.f_3250;
}

void func_643(int iParam0, float fParam1) // Position - 0x122E9 Hash - 0xC0FF1AF9 ^0xC310329C
{
	ePedType type;
	int num;
	int defaultMaxAttributeRank;
	Ped ped;
	int bondingLevel;
	int num2;
	int num3;
	int num4;
	int num5;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	type = func_158(iParam0);
	num = func_103(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(type, 7);

	if (num >= defaultMaxAttributeRank)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1 = Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1 + fParam1;
	ped = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	func_531(ped, BUILTIN::FLOOR(Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1));
	bondingLevel = func_331(ped);
	Global_38.f_289.f_1[iParam0 /*460*/].f_398 = bondingLevel;
	PED::_SET_MOUNT_BONDING_LEVEL(ped, bondingLevel);
	func_585(bondingLevel);

	if (bondingLevel > num)
	{
		func_823(iParam0, bondingLevel);
	
		if (iParam0 == 6)
			if (bondingLevel == 1)
				if (func_121(41))
					func_228(19, true);
				else
					func_228(20, true);
	
		if (bondingLevel == 2)
			func_228(21, true);
		else if (bondingLevel == 3)
			func_228(22, true);
		else if (bondingLevel == 4)
			func_228(23, true);
	
		if (bondingLevel >= 2)
		{
			num2 = func_809(ped);
			num3 = func_824();
			func_825(num3, num2);
			num4 = func_826(ped);
			num5 = func_827();
			func_825(num5, num4);
		}
	
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(ped, bondingLevel);
		func_706(func_705(joaat("horse_bond_increased")), 1);
	
		if (bondingLevel == defaultMaxAttributeRank)
			func_706(func_705(joaat("horses_reached_max_bond")), 1);
	
		func_828(false, -1);
	}

	return;
}

void func_644(int iParam0, int iParam1, float fParam2) // Position - 0x1248B Hash - 0x29C4DF11 ^0x6087BE4D
{
	if (iParam1 == -1)
		return;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_2[iParam1] = fParam2;
	return;
}

void func_645(int iParam0, float fParam1) // Position - 0x124CE Hash - 0xAD893F62 ^0xAA11739C
{
	Ped ped;
	int num;
	int bondingLevel;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1 = fParam1;
	ped = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	num = BUILTIN::FLOOR(Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1);
	func_531(ped, num);
	bondingLevel = func_331(ped);
	Global_38.f_289.f_1[iParam0 /*460*/].f_398 = bondingLevel;
	PED::_SET_MOUNT_BONDING_LEVEL(ped, bondingLevel);
	func_585(bondingLevel);
	return;
}

void func_646(BOOL bParam0) // Position - 0x12579 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}

	return;
}

void func_647(int iParam0) // Position - 0x125B7 Hash - 0x2EDDC601 ^0x8923AAAC
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

void func_648(BOOL bParam0) // Position - 0x12625 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_649(BOOL bParam0) // Position - 0x12648 Hash - 0x15EA8A2D ^0x6EE74130
{
	int promptType;
	Player player;

	promptType = 50;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

void func_650(BOOL bParam0) // Position - 0x1268A Hash - 0xBAD014C9 ^0x3FDE3E28
{
	int promptType;
	Player player;

	promptType = 49;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

int func_651(char* sParam0, const char* sParam1, int iParam2, Hash hParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x126CC Hash - 0xB88D7AA5 ^0x36259347
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam4;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam8;
	num2.f_7 = 1;
	num2 = iParam7;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = iParam2;
	num2.f_5 = hParam3;
	num2.f_7 = 1;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

BOOL func_652(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x12732 Hash - 0x452D8154 ^0x10C1EA46
{
	int num;
	var unk;
	var unk6;

	if (!func_263(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_520(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_829(hParam0, iParam1, hParam2);

	unk = { func_605(hParam0, false, true) };
	unk6 = { func_262(hParam0, unk, unk.f_4, false) };
	return func_266(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

Hash func_653(int iParam0) // Position - 0x127A1 Hash - 0x4A181B5A ^0x4A181B5A
{
	return 0;
}

int func_654(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x127AA Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_518(bParam2), panParam0, hParam1);
}

BOOL func_655(int iParam0, Any* panParam1) // Position - 0x127C0 Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_400(iParam0))
		return false;

	hash = func_653(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_261(false) };

	if (!func_830(unk15, hash, &unk, 0, false))
		return false;

	if (!func_831(&unk, panParam1))
		return false;

	return true;
}

BOOL func_656(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x12825 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_832(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_524(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_522(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_2() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_730(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = bParam5;
				num2.f_7 = hParam4;
				func_833(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_518(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_657(Hash hParam0) // Position - 0x12943 Hash - 0x1B551CF7 ^0xB80375AC
{
	return func_602(hParam0) == joaat("HORSE");
}

BOOL func_658() // Position - 0x12957 Hash - 0x57592B8C ^0xDE90F972
{
	Blip blip;

	blip = func_659();

	if (MAP::DOES_BLIP_EXIST(blip))
		return true;

	return false;
}

Blip func_659() // Position - 0x12973 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1902887.f_379.f_1;
}

void func_660(int iParam0) // Position - 0x12984 Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1902887.f_379.f_1 = iParam0;
	return;
}

BOOL func_661(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x12997 Hash - 0x1244E24C ^0xA4727049
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_263(hParam0, 0))
		return func_834(func_594(hParam0), hParam1, bParam2);

	if (func_835(hParam0) || func_372(hParam0, 1077060302))
		return func_837(func_836(hParam0, true), hParam1);

	unk = 10;

	if (bParam2 && func_2() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return true;

	if (!func_838(hParam0, hParam1, &unk, &num) || num < 1)
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

BOOL func_662(int iParam0, int iParam1) // Position - 0x12A5C Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_663(int iParam0, int iParam1) // Position - 0x12A75 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

int func_664(int iParam0) // Position - 0x12A8D Hash - 0xA78B2E8C ^0xA78B2E8C
{
	if (!(iParam0 > -1 && iParam0 < 180))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
	
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
	
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
	
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
	
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
	
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
	
		case 8:
		case 43:
		case 78:
			return 8;
	
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
	
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
	
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
	
		case 12:
		case 60:
			return 18;
	
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
	
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
	
		case 19:
		case 53:
			return 7;
	
		case 20:
			return 33;
	
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
	
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
	
		case 26:
			return 14;
	
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
	
		case 61:
		case 62:
		case 89:
			return 36;
	
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
	
		case 70:
		case 90:
			return 17;
	
		case 109:
		case 113:
		case 114:
			return 35;
	
		case 119:
			return 11;
	
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
	
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
	
		case 133:
			return 27;
	
		case 134:
			return 37;
	
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
	
		case 149:
		case 150:
		case 151:
			return 39;
	
		case 152:
			return 34;
	
		case 153:
			return 28;
	
		case 154:
			return 29;
	
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
	
		case 163:
			return 5;
	
		case 176:
			return 19;
	
		case 177:
			return 20;
	
		case 178:
			return 21;
	
		case 179:
			return 20;
	
		default:
		
	}

	return -1;
}

BOOL func_665(int iParam0) // Position - 0x12FAA Hash - 0xE4B93749 ^0xE4B93749
{
	return !func_839(iParam0, 1);
}

int func_666(int iParam0) // Position - 0x12FBA Hash - 0x18C15B72 ^0x18C15B72
{
	if (!func_450(iParam0))
		return -1;

	if (iParam0 == 40 && func_586() == 139)
		return 139;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
	
		case 3:
			return 13;
	
		case 4:
			return 14;
	
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
		case 122:
		case 123:
			return 40;
	
		case 20:
			return -1;
	
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
	
		case 26:
			return 3;
	
		case 27:
		case 28:
			return 23;
	
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
		case 126:
			return 111;
	
		case 40:
			return 95;
	
		case 41:
			return 107;
	
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
	
		case 64:
			return 76;
	
		case 65:
			return 104;
	
		case 66:
			return 9;
	
		case 67:
			return 84;
	
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
	
		case 76:
			return 119;
	
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
	
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
	
		case 99:
		case 100:
		case 101:
			return 28;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
	
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
	
		case 113:
			return 96;
	
		case 114:
			return 29;
	
		case 115:
		case 116:
			return 130;
	
		case 117:
		case 118:
			return 123;
	
		case 130:
		case 131:
			return 136;
	
		case 132:
			return 87;
	
		case 134:
			return -1;
	
		case 135:
			return 126;
	
		case 136:
			return 133;
	
		case 137:
			return 137;
	
		case 138:
			return 39;
	
		case 139:
			return 16;
	
		case 141:
			return 76;
	
		case 142:
			return 61;
	
		case 143:
			return 100;
	
		case 144:
			return 34;
	
		case 145:
			return 43;
	
		case 146:
			return 85;
	
		case 148:
			return 134;
	
		case 149:
			return 138;
	
		case 150:
			return 25;
	
		case 151:
			return 3;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 84;
	
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
			return 104;
	
		case 164:
		case 165:
		case 166:
		case 167:
			return 76;
	
		case 168:
		case 169:
		case 170:
		case 171:
			return 4;
	
		case 172:
		case 173:
		case 174:
		case 175:
			return 9;
	
		default:
		
	}

	return -1;
}

BOOL func_667(int iParam0) // Position - 0x134E2 Hash - 0x14DDF3C9 ^0xDC8E0485
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] & 32 != 0;

	return Global_1072759.f_19611[iParam0 /*11*/] & 32 != 0;
}

BOOL func_668(int iParam0) // Position - 0x13529 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_840(iParam0))
		return false;

	return func_841(iParam0, 33554432);
}

float func_669(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1354A Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_670() // Position - 0x13572 Hash - 0x2100AD75 ^0xD71F35DE
{
	Global_1902887.f_429.f_13 = 0;
	return;
}

int func_671() // Position - 0x13584 Hash - 0x8190E5D8 ^0x8470E5CA
{
	return Global_1902887.f_429.f_13;
}

void func_672(int iParam0) // Position - 0x13595 Hash - 0xC421D95B ^0x5D194E7
{
	Global_1902887.f_429.f_13 = iParam0;
	return;
}

BOOL func_673(int iParam0, Hash hParam1, int iParam2) // Position - 0x135A8 Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_263(hParam1, 0))
		return false;

	return func_477(iParam0, hParam1) >= iParam2;
}

BOOL func_674(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x135CA Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_263(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_478(iParam0) };
	unk6 = { func_479(iParam0, hParam1, unk, unk.f_4) };
	return func_842(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

struct<4> func_675(int iParam0, Hash hParam1) // Position - 0x13619 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_478(iParam0) };
	return func_479(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_676(int iParam0, var uParam1) // Position - 0x1363B Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_843(iParam0))
		return false;

	*uParam1 = Global_1915606[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_677(int iParam0) // Position - 0x13668 Hash - 0x8D427F55 ^0x9966D58
{
	if (func_2() != -1)
		if (Global_1072759.f_12)
			if (iParam0 == 3)
				return joaat("ST_GENERAL_INTRO");

	return func_844(iParam0);
}

BOOL func_678(int iParam0) // Position - 0x13695 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_662(iParam0, 4))
		return false;

	return true;
}

BOOL func_679(int iParam0) // Position - 0x136AC Hash - 0x7F4C96B ^0x650690F6
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

BOOL func_680() // Position - 0x13778 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_845())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_681() // Position - 0x13793 Hash - 0xC2ABD0AE ^0xC2ABD0AE
{
	return Global_1904402.f_8872 != -1;
}

BOOL func_682() // Position - 0x137A4 Hash - 0xC131FBEB ^0x955222E7
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

BOOL func_683(int* piParam0, int iParam1, int iParam2) // Position - 0x137C4 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(piParam0->[iParam1 / 31], iParam1 % 31);
}

BOOL func_684() // Position - 0x137FB Hash - 0xA3BE243F ^0x24B01457
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

BOOL func_685() // Position - 0x13810 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1896762.f_352;
}

BOOL func_686() // Position - 0x1381F Hash - 0x84CBCCC1 ^0x84CBCCC1
{
	BOOL num;

	if (!func_845())
		return false;

	num = Global_1904402.f_8874;
	Global_1904402.f_8874 = 0;
	return num;
}

BOOL func_687(int iParam0, int iParam1, BOOL bParam2) // Position - 0x13846 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_846(iParam1) || !func_846(iParam0))
			return true;

	return iParam0 > iParam1;
}

int func_688(int iParam0) // Position - 0x13873 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_689(int iParam0) // Position - 0x13886 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_690(int iParam0) // Position - 0x138AB Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_691(int iParam0) // Position - 0x138BE Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_692(int iParam0) // Position - 0x138D1 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_693(int iParam0) // Position - 0x138E3 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_694(int iParam0, int iParam1) // Position - 0x138F5 Hash - 0x893AC59E ^0x893AC59E
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

float func_695(float fParam0, float fParam1, float fParam2) // Position - 0x1398F Hash - 0xDB08F514 ^0x78C0BF6F
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

BOOL func_696(int iParam0, int iParam1) // Position - 0x139D1 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_683(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_848())
		return func_683(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_683(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

const char* func_697(const char* sParam0, int iParam1) // Position - 0x13A45 Hash - 0x9E99F03 ^0x602A77E3
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_698(int iParam0, int iParam1, int iParam2) // Position - 0x13A5F Hash - 0x33CA9B4 ^0xE447793A
{
	Ped ped;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	iParam2 = func_384(iParam2, 0, 100);
	Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/] = iParam2;
	ped = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	func_497(ped, iParam1, func_439(iParam0, iParam1));
	func_849(ped, iParam1);
	return;
}

void func_699(int iParam0, int iParam1, float fParam2) // Position - 0x13AE4 Hash - 0xDC0CA050 ^0xB9608966
{
	fParam2 = func_385(fParam2, 0f, 1E+09f);
	Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/].f_2 = fParam2;
	return;
}

BOOL func_700(Ped pedParam0, int iParam1) // Position - 0x13B12 Hash - 0xE57DADF2 ^0xAE32360C
{
	int coreIndex;

	if (func_494(iParam1, &coreIndex))
		if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(pedParam0, coreIndex))
			return true;

	return false;
}

float func_701(int iParam0, int iParam1) // Position - 0x13B35 Hash - 0x50BD3DC5 ^0xE9FF7B1D
{
	float num;
	var unk;

	num = 0f;

	if (iParam1 == 0)
		if (func_406(iParam0, 0) > 50)
			num = num + 0.25f;

	if (func_599(joaat("provision_talisman_boar_tusk"), 1))
		num = num - -0.1f;

	if (func_164() == 0 && func_154() == iParam0)
	{
		unk = func_850(iParam1);
		num = num - unk;
	}

	return num;
}

float func_702(int iParam0, int iParam1) // Position - 0x13B99 Hash - 0x213B3DA5 ^0xE2648C2E
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/].f_1;
}

void func_703(int iParam0, int iParam1, float fParam2) // Position - 0x13BD3 Hash - 0x3741DEAA ^0x5D9BAEC3
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	fParam2 = func_385(fParam2, -1f, 1f);
	Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/].f_1 = fParam2;
	return;
}

void func_704(int iParam0) // Position - 0x13C17 Hash - 0xC421D95B ^0xB765ADCB
{
	Global_1902887.f_429.f_8 = iParam0;
	return;
}

struct<2> func_705(int iParam0) // Position - 0x13C2A Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_706(var uParam0, var uParam1, int iParam2) // Position - 0x13C3C Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_707(int iParam0, int iParam1, int iParam2) // Position - 0x13C59 Hash - 0x33CA9B4 ^0xE447793A
{
	Ped ped;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	iParam2 = func_384(iParam2, 0, 100);
	Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/] = iParam2;
	ped = func_78(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	func_387(ped, iParam1, iParam2);
	return;
}

void func_708(int iParam0, int iParam1, float fParam2) // Position - 0x13CD0 Hash - 0xDC0CA050 ^0xB9608966
{
	fParam2 = func_385(fParam2, 0f, 1E+09f);
	Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_2 = fParam2;
	return;
}

BOOL func_709(Ped pedParam0) // Position - 0x13CFE Hash - 0xBEC2FAF4 ^0x7F00FEED
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("world_animal_horse_grazing")) || PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("world_animal_horse_grazing_domestic")))
		return true;

	return false;
}

float func_710(int iParam0, int iParam1) // Position - 0x13D51 Hash - 0x213B3DA5 ^0xE2648C2E
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_1;
}

void func_711(int iParam0, int iParam1, float fParam2) // Position - 0x13D8B Hash - 0x3741DEAA ^0x5D9BAEC3
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	fParam2 = func_385(fParam2, -1f, 1f);
	Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_1 = fParam2;
	return;
}

void func_712(int iParam0, int iParam1) // Position - 0x13DCF Hash - 0xF59E01E4 ^0x783D9746
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_1 = 0f;
	return;
}

Hash func_713(int iParam0) // Position - 0x13E08 Hash - 0x79966B74 ^0xEC9DC74F
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/].f_1;
}

void func_714(int iParam0) // Position - 0x13E36 Hash - 0xC421D95B ^0xD233A58C
{
	Global_1902887.f_429.f_6 = iParam0;
	return;
}

BOOL func_715(Hash hParam0, int iParam1) // Position - 0x13E49 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_716(var uParam0) // Position - 0x13E63 Hash - 0x8D760BCC ^0xB90089A3
{
	if (!func_263(*uParam0, 0))
		return 0;

	if (!func_851(*uParam0))
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

BOOL func_717(Hash hParam0) // Position - 0x13EED Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_602(hParam0) == joaat("WEAPON");
}

struct<4> func_718(BOOL bParam0) // Position - 0x13F01 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_518(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_262(923904168, func_261(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_262(923904168, func_261(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_262(923904168, func_261(bParam0), -740156546, false);
}

BOOL func_719(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x13FA2 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_264(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_720(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x13FBD Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_852(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

BOOL func_721(Hash hParam0, BOOL bParam1) // Position - 0x13FDE Hash - 0x1DB22D7E ^0xA31F72F7
{
	if (func_768(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_853();
		else
			return true;

	return false;
}

int func_722(Hash hParam0, Any* panParam1, BOOL bParam2, BOOL bParam3) // Position - 0x14017 Hash - 0xFE9D5798 ^0xDB9F4CF5
{
	if (!func_263(hParam0, 0))
	{
		if (func_715(func_594(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_602(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_520(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, panParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_518(bParam3), hParam0);
}

struct<29> func_723(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1408B Hash - 0xAF17ACBD ^0xCD0691E1
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_518(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_729(&unk30, bParam5) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_724(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x14126 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_854(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_856(func_855(num, hParam0, panParam1), num, panParam1);
	else
		return func_857(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

struct<26> func_725(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x14190 Hash - 0x614973B0 ^0xCAE61311
{
	var unk;
	var unk27;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk27.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_518(bParam4), &uParam0, &unk27, 24, 1))
		return unk;

	unk = { func_729(&unk27, bParam5) };
	unk.f_17 = { unk27.f_15 };
	unk.f_25 = unk27.f_23;
	return unk;
}

int func_726(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x14213 Hash - 0xD42DE772 ^0x5BC8E38A
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_856(func_858(num, hParam0, panParam1), num, panParam1);
	else
		return func_857(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

struct<18> func_727(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x14263 Hash - 0x5B9BBF8B ^0x19F03106
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_518(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_729(&unk19, bParam5) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_728(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x142D8 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_854(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_856(func_859(num, hParam0, panParam1), num, panParam1);
	else
		return func_857(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18), num, panParam1);

	return -1;
}

struct<17> func_729(var uParam0, BOOL bParam1) // Position - 0x14342 Hash - 0x76921103 ^0xA9DF955B
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
		unk.f_15 = func_520(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_519() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

int func_730(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x143C3 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_854(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_856(func_860(num, hParam0, panParam1), num, panParam1);
	else
		return func_857(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

BOOL func_731(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1442D Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_518(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_732(int iParam0) // Position - 0x14467 Hash - 0xE49277E9 ^0xE49277E9
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	}

	return 0;
}

int func_733(Ped pedParam0, Ped pedParam1) // Position - 0x1449F Hash - 0x35F19116 ^0xF47AD3F5
{
	int inventoryIdFromPed;
	Hash hash;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0);
	hash = func_221(pedParam1);
	num = func_861(inventoryIdFromPed, hash, 1);
	return num;
}

Ped func_734(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x144E0 Hash - 0xA67C0C52 ^0xA10AD291
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_862(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

Ped func_735(Ped pedParam0) // Position - 0x14520 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

int func_736(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0x1452A Hash - 0x67107E64 ^0x67107E64
{
	return func_863(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_737(Hash hParam0, int iParam1) // Position - 0x1453E Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_768(hParam0);
	
		if (category != 0)
		{
			num2 = func_864(hParam0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
				{
					num = outSlotId;
				
					if (num == iParam1)
						return true;
				}
			}
		}
	}

	return false;
}

void func_738(Ped pedParam0, Hash hParam1) // Position - 0x14592 Hash - 0x11B41686 ^0x947A8CD3
{
	Hash componentHash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (hParam1 == 0)
		return;

	if (hParam1 == -377364164 || hParam1 == 357708345)
		return;

	componentHash = hParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(pedParam0, componentHash, false, func_2() == 0, false);
	return;
}

void func_739(var uParam0) // Position - 0x145FB Hash - 0xDAA91251 ^0x6BC598FB
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
	return;
}

var func_740(BOOL bParam0, var uParam1, var uParam2) // Position - 0x14623 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_741(var uParam0) // Position - 0x1463A Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_742(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x14645 Hash - 0xC79590A0 ^0xE83AED0D
{
	uParam0->f_3.f_3 = { fParam1 };
	return;
}

void func_743(var uParam0, int iParam1) // Position - 0x14659 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_744(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7) // Position - 0x14666 Hash - 0x5A9F065 ^0x9DF1DF9A
{
	BOOL isSphereVisible;
	var groundZ;
	float num;

	isSphereVisible = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);

	if (bParam6)
		if (func_865(vParam0 + { 0.2f, 0f, 0f }))
			return false;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + { 1f, 0f, 0f }, &groundZ, false))
		return false;

	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
		return false;

	if (isSphereVisible)
	{
	}
	else
	{
		if (bParam7)
			if (vParam0.f_2 > vParam3.f_2 + 10f)
				return false;
	
		num = BUILTIN::VDIST(vParam0, vParam3);
	
		if (num > 40f && num < 80f)
			return true;
	}

	return false;
}

BOOL func_745(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0x1470D Hash - 0xC31BF175 ^0x915D2C1C
{
	int num;

	switch (*uParam3)
	{
		case 0:
			if (uParam3->f_2 > 4)
			{
				*uParam4 = 1;
				return false;
			}
		
			uParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_866(&(uParam3->f_1), uParam3->f_2, uParam0, iParam5, iParam7, iParam8, iParam9, iParam10, iParam11);
		
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
			{
			}
			else
			{
				func_867(&(uParam3->f_1), iParam5, uParam0);
			
				if (!_IS_NULL_VECTOR(uParam3->f_6))
					TASK::_0xCE4E669400E5F8AA(uParam3->f_1, func_868(uParam3->f_6));
			
				TASK::_0x2B8AF29A78024BD3(uParam3->f_1);
			}
		
			*uParam3 = 3;
			break;
	
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
				num = 4;
			else
				num = TASK::_0x0365000D8BF86531(&(uParam3->f_1));
		
			switch (num)
			{
				case 3:
					uParam3->f_3 = { TASK::_0x865732725536EE39(&(uParam3->f_1)) };
					*uParam3 = 4;
				
					if (!bParam6)
						return true;
					break;
			
				case 4:
					if (bParam6 && uParam3->f_2 < 4)
					{
						uParam3->f_2 = uParam3->f_2 + 1;
						*uParam3 = 0;
					}
					else
					{
						*uParam4 = 1;
					}
					break;
			}
			break;
	
		case 4:
			return true;
	}

	return false;
}

BOOL func_746(int iParam0, int iParam1) // Position - 0x14832 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_747(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x14841 Hash - 0x19DF3458 ^0x19DF3458
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_869(*uParam0, 0f, 0f, 0f))
		return 1;

	num = 0;
	flag = false;
	flag2 = false;
	vector = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);

	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag)
	{
		if (num < iParam2)
		{
			num = num + 1;
			vector.f_2 = vector.f_2 + (float)iParam1;
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		}
		else
		{
			flag = true;
		}
	}

	if (bParam4)
		vector = { *uParam0 };

	if (flag)
	{
		num = 1;
		vector.f_2 = vector.f_2 - (float)iParam1;
		STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag2)
		{
			if (num < iParam2)
			{
				num = num + 1;
				vector.f_2 = vector.f_2 - (float)iParam1;
				STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			}
			else
			{
				flag2 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = groundZ;
		return 1;
	}

	if (flag && flag2)
		return 0;

	uParam0->f_2 = groundZ;
	return 1;
}

BOOL func_748(Ped pedParam0, Any* panParam1) // Position - 0x14945 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

void func_749(int iParam0, int iParam1) // Position - 0x14955 Hash - 0xFDFFDD51 ^0x2B938E3A
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1902887[iParam0 /*43*/].f_23 = Global_1902887[iParam0 /*43*/].f_23 || iParam1;
	return;
}

BOOL func_750(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1498E Hash - 0x3EA02E0F ^0x19154343
{
	var unk;
	var outGuid;

	if (!func_522(bParam10))
		return func_870(uParam0, uParam4, hParam8, true, bParam9, true, -1) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_524(uParam0, &unk, false, false, -1))
		return false;

	if (func_871(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return true;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return false;

	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_518(false), &uParam0, &uParam4, hParam8, unk.f_11, &outGuid))
		return false;

	if (bParam9)
		!func_267(outGuid, true, false);

	return true;
}

BOOL func_751(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x14A55 Hash - 0x3163F569 ^0x1B89B919
{
	var unk;
	var unk15;
	int inventoryId;

	if (!func_522(bParam9))
		return func_872(uParam0, uParam4, iParam8, 1) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	if (func_871(&uParam0, &uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_524(uParam0, &unk, true, false, -1) || !func_524(uParam4, &unk15, true, false, -1))
		return false;

	if (func_871(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return false;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return false;

	inventoryId = func_518(false);

	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(inventoryId, &uParam0, &uParam4))
		return false;

	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam0, unk15.f_10 || iParam8);
	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam4, unk.f_10 || iParam8);
	return true;
}

int func_752(Hash hParam0) // Position - 0x14B7A Hash - 0xCBA0DE6B ^0x3EE4F4A1
{
	if (hParam0 == joaat("a_c_horse_mp_mangy_backup"))
		return joaat("breed_mangy_backup");

	switch (hParam0)
	{
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return joaat("breed_ardennes_irongreyroan");
	
		case -2004712574:
			return 956799610;
	
		case joaat("a_c_horse_arabian_black"):
			return joaat("breed_arabian_black");
	
		case joaat("a_c_horse_americanpaint_greyovero"):
			return joaat("breed_americanpaint_greyovero");
	
		case joaat("a_c_horse_thoroughbred_bloodbay"):
			return joaat("breed_thoroughbred_bloodbay");
	
		case joaat("a_c_horse_hungarianhalfbred_liverchestnut"):
			return joaat("breed_hungarianhalfbred_liverchestnut");
	
		case joaat("a_c_horse_kladruber_cremello"):
			return joaat("breed_kladruber_cremello");
	
		case joaat("a_c_horse_kladruber_silver"):
			return joaat("breed_kladruber_silver");
	
		case joaat("a_c_horse_criollo_baybrindle"):
			return joaat("breed_criollo_baybrindle");
	
		case joaat("a_c_horse_breton_steelgrey"):
			return joaat("breed_breton_steelgrey");
	
		case joaat("a_c_horse_suffolkpunch_redchestnut"):
			return joaat("breed_suffolkpunch_redchestnut");
	
		case joaat("a_c_horse_americanpaint_tobiano"):
			return joaat("breed_americanpaint_tobiano");
	
		case joaat("a_c_horse_tennesseewalker_flaxenroan"):
			return joaat("breed_tennesseewalker_flaxenroan");
	
		case joaat("a_c_horse_kladruber_black"):
			return joaat("breed_kladruber_black");
	
		case joaat("a_c_horse_turkoman_silver"):
			return joaat("breed_turkoman_silver");
	
		case joaat("a_c_horse_suffolkpunch_sorrel"):
			return joaat("breed_suffolkpunch_sorrel");
	
		case joaat("a_c_horse_appaloosa_leopardblanket"):
			return joaat("breed_appaloosa_leopardblanket");
	
		case joaat("a_c_horse_ardennes_bayroan"):
			return joaat("breed_ardennes_bayroan");
	
		case -1460773772:
			return 1935859332;
	
		case joaat("a_c_horse_breton_mealydapplebay"):
			return joaat("breed_breton_mealydapplebay");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("breed_norfolkroadster_piebaldroan");
	
		case joaat("a_c_horse_missourifoxtrotter_amberchampagne"):
			return joaat("breed_missourifoxtrotter_amberchampagne");
	
		case joaat("a_c_horse_kentuckysaddle_chestnutpinto"):
			return joaat("breed_kentuckysaddle_chestnutpinto");
	
		case joaat("a_c_horse_nokota_whiteroan"):
			return joaat("breed_nokota_whiteroan");
	
		case joaat("a_c_horse_americanstandardbred_black"):
			return joaat("breed_americanstandardbred_black");
	
		case joaat("a_c_horsemule_01"):
			return joaat("breed_mule");
	
		case joaat("a_c_horse_mustang_grullodun"):
			return joaat("breed_mustang_grullodun");
	
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return joaat("breed_missourifoxtrotter_silverdapplepinto");
	
		case -1142861801:
			return -1750687713;
	
		case joaat("a_c_horse_appaloosa_leopard"):
			return joaat("breed_appaloosa_leopard");
	
		case joaat("a_c_horse_morgan_flaxenchestnut"):
			return joaat("breed_morgan_flaxenchestnut");
	
		case joaat("a_c_horse_appaloosa_brownleopard"):
			return joaat("breed_appaloosa_brownleopard");
	
		case joaat("a_c_horse_appaloosa_blacksnowflake"):
			return joaat("breed_appaloosa_blacksnowflake");
	
		case joaat("a_c_horse_kladruber_grey"):
			return joaat("breed_kladruber_grey");
	
		case joaat("a_c_horse_arabian_white"):
			return joaat("breed_arabian_white");
	
		case joaat("a_c_horse_murfreebrood_mange_02"):
			return joaat("breed_murfreebrood_mange_02");
	
		case joaat("a_c_horse_hungarianhalfbred_darkdapplegrey"):
			return joaat("breed_hungarianhalfbred_darkdapplegrey");
	
		case joaat("a_c_horse_tennesseewalker_redroan"):
			return joaat("breed_tennesseewalker_redroan");
	
		case joaat("a_c_horse_breton_redroan"):
			return joaat("breed_breton_redroan");
	
		case joaat("a_c_horse_kladruber_dapplerosegrey"):
			return joaat("breed_kladruber_dapplerosegrey");
	
		case joaat("a_c_horse_ardennes_strawberryroan"):
			return joaat("breed_ardennes_strawberryroan");
	
		case joaat("a_c_horse_breton_grullodun"):
			return joaat("breed_breton_grullodun");
	
		case joaat("a_c_horse_murfreebrood_mange_03"):
			return joaat("breed_murfreebrood_mange_03");
	
		case joaat("a_c_horse_belgian_blondchestnut"):
			return joaat("breed_belgian_blondchestnut");
	
		case joaat("a_c_horse_thoroughbred_brindle"):
			return joaat("breed_thoroughbred_brindle");
	
		case joaat("a_c_horse_americanstandardbred_silvertailbuckskin"):
			return joaat("breed_americanstandardbred_silvertailbuckskin");
	
		case joaat("a_c_horse_americanpaint_overo"):
			return joaat("breed_americanpaint_overo");
	
		case joaat("a_c_horse_andalusian_darkbay"):
			return joaat("breed_andalusian_darkbay");
	
		case joaat("a_c_horse_missourifoxtrotter_sablechampagne"):
			return joaat("breed_missourifoxtrotter_sablechampagne");
	
		case -417416199:
			return -272192064;
	
		case joaat("a_c_horse_arabian_rosegreybay"):
			return joaat("breed_arabian_rosegreybay");
	
		case -390136947:
			return -952011226;
	
		case joaat("a_c_horse_americanstandardbred_buckskin"):
			return joaat("breed_americanstandardbred_buckskin");
	
		case joaat("a_c_horse_kentuckysaddle_black"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return joaat("breed_norfolkroadster_rosegrey");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("breed_norfolkroadster_dappledbuckskin");
	
		case joaat("a_c_horse_kladruber_white"):
			return joaat("breed_kladruber_white");
	
		case joaat("a_c_horse_tennesseewalker_dapplebay"):
			return joaat("breed_tennesseewalker_dapplebay");
	
		case joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"):
			return joaat("breed_hungarianhalfbred_piebaldtobiano");
	
		case joaat("a_c_horse_shire_lightgrey"):
			return joaat("breed_shire_lightgrey");
	
		case joaat("a_c_horse_mustang_tigerstripedbay"):
			return joaat("breed_mustang_tigerstripedbay");
	
		case joaat("a_c_horse_americanstandardbred_palominodapple"):
			return joaat("breed_americanstandardbred_palominodapple");
	
		case 74569170:
			return 406093506;
	
		case joaat("a_c_horse_arabian_grey"):
			return joaat("breed_arabian_grey");
	
		case joaat("a_c_horse_morgan_palomino"):
			return joaat("breed_morgan_palomino");
	
		case joaat("a_c_horse_nokota_reversedappleroan"):
			return joaat("breed_nokota_reversedappleroan");
	
		case joaat("a_c_horse_breton_sorrel"):
			return joaat("breed_breton_sorrel");
	
		case joaat("a_c_horse_mustang_goldendun"):
			return joaat("breed_mustang_goldendun");
	
		case 506531963:
			return -1159865523;
	
		case joaat("a_c_horse_criollo_sorrelovero"):
			return joaat("breed_criollo_sorrelovero");
	
		case joaat("a_c_horsemulepainted_01"):
			return joaat("breed_mule_painted");
	
		case joaat("a_c_horse_dutchwarmblood_chocolateroan"):
			return joaat("breed_dutchwarmblood_chocolateroan");
	
		case 699227695:
			return 139264677;
	
		case 704938950:
			return 1133580901;
	
		case joaat("a_c_horse_andalusian_perlino"):
			return joaat("breed_andalusian_perlino");
	
		case joaat("a_c_horse_andalusian_rosegray"):
			return joaat("breed_andalusian_rosegray");
	
		case joaat("a_c_horse_criollo_bayframeovero"):
			return joaat("breed_criollo_bayframeovero");
	
		case joaat("a_c_horse_dutchwarmblood_sealbrown"):
			return joaat("breed_dutchwarmblood_sealbrown");
	
		case joaat("a_c_horse_thoroughbred_reversedappleblack"):
			return joaat("breed_thoroughbred_reversedappleblack");
	
		case joaat("a_c_horse_murfreebrood_mange_01"):
			return joaat("breed_murfreebrood_mange_01");
	
		case joaat("a_c_horse_belgian_mealychestnut"):
			return joaat("breed_belgian_mealychestnut");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return joaat("breed_norfolkroadster_black");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("breed_norfolkroadster_speckledgrey");
	
		case joaat("a_c_horse_shire_darkbay"):
			return joaat("breed_shire_darkbay");
	
		case joaat("a_c_horse_tennesseewalker_blackrabicano"):
			return joaat("breed_tennesseewalker_blackrabicano");
	
		case joaat("a_c_horse_tennesseewalker_chestnut"):
			return joaat("breed_tennesseewalker_chestnut");
	
		case 1104566530:
			return -356470463;
	
		case joaat("a_c_horse_turkoman_darkbay"):
			return joaat("breed_turkoman_darkbay");
	
		case joaat("a_c_horse_criollo_dun"):
			return joaat("breed_criollo_dun");
	
		case 1154747978:
			return -1712303883;
	
		case joaat("a_c_horse_morgan_bayroan"):
			return joaat("breed_morgan_bayroan");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("breed_norfolkroadster_spottedtricolor");
	
		case 1387035765:
			return 1323533737;
	
		case 1476007840:
			return -1898310680;
	
		case joaat("a_c_horse_arabian_redchestnut"):
			return joaat("breed_arabian_redchestnut");
	
		case 1514230770:
			return -11223392;
	
		case joaat("a_c_horse_breton_sealbrown"):
			return joaat("breed_breton_sealbrown");
	
		case joaat("a_c_horse_dutchwarmblood_sootybuckskin"):
			return joaat("breed_dutchwarmblood_sootybuckskin");
	
		case 1599848740:
			return 1416158449;
	
		case 1645353708:
			return 1147338535;
	
		case joaat("a_c_horse_kentuckysaddle_silverbay"):
			return joaat("breed_kentuckysaddle_silverbay");
	
		case joaat("a_c_horse_turkoman_gold"):
			return joaat("breed_turkoman_gold");
	
		case joaat("a_c_horse_hungarianhalfbred_flaxenchestnut"):
			return joaat("breed_hungarianhalfbred_flaxenchestnut");
	
		case joaat("a_c_donkey_01"):
			return joaat("breed_donkey");
	
		case joaat("a_c_horse_americanpaint_splashedwhite"):
			return joaat("breed_americanpaint_splashedwhite");
	
		case joaat("a_c_horse_criollo_blueroanovero"):
			return joaat("breed_criollo_blueroanovero");
	
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return joaat("breed_thoroughbred_dapplegrey");
	
		case joaat("a_c_horse_americanstandardbred_lightbuckskin"):
			return joaat("breed_americanstandardbred_lightbuckskin");
	
		case 1887211198:
			return 577120648;
	
		case joaat("a_c_horse_kentuckysaddle_grey"):
			return joaat("breed_kentuckysaddle_grey");
	
		case joaat("a_c_horse_morgan_bay"):
			return joaat("breed_morgan_bay");
	
		case 2038357529:
			return 1854655826;
	
		case joaat("a_c_horse_mustang_wildbay"):
			return joaat("breed_mustang_wildbay");
	
		case joaat("a_c_horse_thoroughbred_blackchestnut"):
			return joaat("breed_thoroughbred_blackchestnut");
	
		case joaat("a_c_horse_appaloosa_blanket"):
			return joaat("breed_appaloosa_blanket");
	
		case joaat("a_c_horse_nokota_blueroan"):
			return joaat("breed_nokota_blueroan");
	
		case joaat("a_c_horse_criollo_marblesabino"):
			return joaat("breed_criollo_marblesabino");
	
		default:
		
	}

	return 0;
}

int func_753(Ped pedParam0) // Position - 0x15205 Hash - 0xCBD81943 ^0x59B24754
{
	int num;
	float charExpression;

	num = 1;
	charExpression = PED::_GET_CHAR_EXPRESSION(pedParam0, 41611);

	if (charExpression == 1f)
		num = 2;

	return num;
}

void func_754(int iParam0, Hash hParam1) // Position - 0x15228 Hash - 0x42DB579F ^0xF1492904
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_9 = hParam1;
	return;
}

void func_755(int iParam0, int iParam1) // Position - 0x1525B Hash - 0x42DB579F ^0x4C67AD4
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_8 = iParam1;
	return;
}

void func_756(int iParam0, int iParam1) // Position - 0x1528E Hash - 0x42DB579F ^0x8D4EBF0
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_10 = iParam1;
	return;
}

void func_757(int iParam0, int iParam1) // Position - 0x152C1 Hash - 0x42DB579F ^0x1BA2C8C6
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_12 = iParam1;
	return;
}

void func_758(int iParam0, int iParam1) // Position - 0x152F4 Hash - 0x42DB579F ^0x697A7CA1
{
	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_38.f_289.f_1[iParam0 /*460*/].f_13 = iParam1;
	return;
}

int func_759() // Position - 0x15327 Hash - 0x9F572D68 ^0xB44B5D22
{
	return joaat("breed_mangy_backup");
}

int func_760() // Position - 0x15334 Hash - 0x9F572D68 ^0x90F702D9
{
	return joaat("a_c_horse_mp_mangy_backup");
}

int func_761() // Position - 0x15341 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_762(int iParam0) // Position - 0x1534A Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_38.f_289.f_3245 = iParam0;
	return;
}

void func_763(Hash hParam0, var uParam1, var uParam2) // Position - 0x1535D Hash - 0x38E6C2DD ^0xA4FE6475
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

BOOL func_764() // Position - 0x15569 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_765(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x15576 Hash - 0x3B7A5BE9 ^0xEE7A100D
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == bParam2 && Global_1913444.f_4[i /*6*/].f_3 == bParam3 && Global_1913444.f_4[i /*6*/].f_4 == bParam4 && Global_1913444.f_4[i /*6*/].f_5 == iParam5)
		{
			Global_1913444.f_4[i /*6*/].f_1 = Global_1913444.f_4[i /*6*/].f_1 + iParam1;
			return;
		}
	}

	if (Global_1913444.f_3 < 19)
	{
		Global_1913444.f_4[Global_1913444.f_3 /*6*/] = hParam0;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_1 = iParam1;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_2 = bParam2;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_3 = bParam3;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_4 = bParam4;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = iParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_766(BOOL bParam0, var uParam1, var uParam2) // Position - 0x15699 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_767(Hash hParam0, int iParam1) // Position - 0x156B0 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_263(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

Hash func_768(Hash hParam0) // Position - 0x156CF Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_263(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_769(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x156FA Hash - 0x92B705D3 ^0xB783F681
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

char* func_770(Hash hParam0) // Position - 0x157ED Hash - 0xFBA883FB ^0xEC21F946
{
	if (func_372(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_372(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_372(hParam0, 143267379))
		return "collectible_coins";

	if (func_372(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_372(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_372(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_372(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_372(hParam0, 781094263))
		return "collectible_flowers";

	if (func_372(hParam0, -352095726) || func_372(hParam0, -2014783736) || func_372(hParam0, -545064757) || func_372(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_771(Hash hParam0) // Position - 0x158E7 Hash - 0x12CDDB68 ^0xF31C74A7
{
	if (func_372(hParam0, -189374246))
		if (func_873(hParam0, -1305775593) || func_873(hParam0, 1384151091) || func_873(hParam0, 2075388272) || func_873(hParam0, -1738780413))
			return true;

	if (func_372(hParam0, -753854379) || func_372(hParam0, 173360570))
		return true;

	return false;
}

Hash func_772(Hash hParam0, BOOL bParam1) // Position - 0x15966 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_263(hParam0, 0))
		return 0;

	hash = func_874(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

BOOL func_773(Hash hParam0) // Position - 0x15994 Hash - 0x339D45CE ^0x339D45CE
{
	switch (hParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
	
		default:
		
	}

	return true;
}

Hash func_774(Hash hParam0) // Position - 0x159BB Hash - 0x9C7FC6B8 ^0x60951C4B
{
	var outData;
	int i;

	if (!func_263(hParam0, 0))
		return 0;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (outData.f_18[i /*2*/].f_1 == 14460646)
				if (outData.f_18[i /*2*/] != 0)
					return outData.f_18[i /*2*/];
		}
	}

	return 0;
}

Hash func_775(Hash hParam0) // Position - 0x15A29 Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_875(hParam0);

	if (num == 0)
		return 0;

	unk = { func_876(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_877(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_878(outKey))
			{
				func_879(collectionId);
				return outKey;
			}
		}
	
		func_879(collectionId);
	}

	return 0;
}

BOOL func_776(Hash hParam0, Hash hParam1) // Position - 0x15AAE Hash - 0x34B85114 ^0x6986CE99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return true;

	return false;
}

int func_777(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x15ADF Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_263(hParam0, 0) && !func_715(func_594(hParam0), 2))
		return 0;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return 1;
}

 func_778(Hash hParam0, int iParam1) // Position - 0x15B3E Hash - 0x7C967237 ^0x7C967237
{
	 num;

	num = func_880(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_779(Hash hParam0, char* sParam1) // Position - 0x15B5C Hash - 0xE779657E ^0x44FD4FF7
{
	int lengthOfLiteralString;
	var unk;

	if (!func_263(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_881(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_882(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_883(hParam0), 128);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return false;

	TEXT_LABEL_APPEND_STRING(&unk, " - ", 128);
	lengthOfLiteralString = lengthOfLiteralString + HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 128);

	if (lengthOfLiteralString >= 127)
		return false;

	*sParam1 = { unk };
	return true;
}

const char* func_780(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x15BD9 Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_781(const char* sParam0, int iParam1) // Position - 0x15BED Hash - 0xB0CFF0C3 ^0xEBFC191F
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_697(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

BOOL func_782(Hash hParam0, int iParam1) // Position - 0x15C23 Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_263(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_597(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_816("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_790(&unk, i, num, num2))
			{
			}
			else if (!func_884(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_791(num);
				return true;
			}
		}
	
		func_791(num);
	}

	return false;
}

BOOL func_783(Hash hParam0) // Position - 0x15CCB Hash - 0x52397408 ^0x52397408
{
	Hash hash;
	int num;
	int num2;

	if (!func_263(hParam0, 0))
		return false;

	hash = func_768(hParam0);

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

	num = func_885(hParam0);

	if (!(num == 0))
	{
		num2 = func_886(&(Global_17418.f_55.f_664.f_1354.f_5), num);
	
		if (num2 == -1)
			return true;
	}

	num = func_887(hParam0);
	num2 = func_886(&(Global_17418.f_55.f_664.f_1354.f_5), num);

	if (num2 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num2 /*17*/];
}

struct<2> func_784(int iParam0) // Position - 0x15D87 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_785(Hash hParam0, BOOL bParam1) // Position - 0x15D97 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_787(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_788(&unk, func_718(false));

	if (!func_789(&unk, &num, &num2, false))
		return 0;

	func_791(num);
	return num2;
}

struct<4> func_786(Hash hParam0, BOOL bParam1) // Position - 0x15DF6 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_605(hParam0, bParam1, false) };
	return func_262(hParam0, unk, unk.f_4, bParam1);
}

struct<18> func_787(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x15E1B Hash - 0x90CCF0F4 ^0xA5F3D799
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

void func_788(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x15EF9 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_789(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x15F14 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_518(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_790(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x15F39 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_791(int iParam0) // Position - 0x15F74 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_792(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x15F95 Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	BOOL flag;

	if (func_832(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_520(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_522(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_888(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_889(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_730(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			flag.f_7 = -142743235;
			flag.f_16 = -1;
			flag = bParam3;
			flag.f_7 = hParam2;
			func_833(num3, flag);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_518(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

struct<4> func_793(BOOL bParam0) // Position - 0x160AD Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_518(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_262(271701509, func_261(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_262(271701509, func_261(bParam0), 12999093, false);
}

BOOL func_794(Hash hParam0, Hash hParam1) // Position - 0x16117 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_768(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_890(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_795() // Position - 0x16184 Hash - 0xA30B23E7 ^0xAB29D7A2
{
	if (Global_1940252.f_11596 != Global_1940252.f_41.f_203 - 1 || func_892(func_891(0), Global_1940252.f_11588, false, true, true) > 0 || Global_1940252.f_11596 == 15)
		return true;

	func_893(0);

	if (Global_1940252.f_7)
		return true;

	return false;
}

void func_796(int iParam0) // Position - 0x161E3 Hash - 0x29A8F290 ^0x82294867
{
	Global_1940252.f_11 = iParam0;
	return;
}

void func_797(int iParam0) // Position - 0x161F3 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1940252.f_10 = iParam0;
	return;
}

void func_798(Ped pedParam0, Hash hParam1) // Position - 0x16203 Hash - 0x5704BDFE ^0xB01CCCFD
{
	var unk;
	int outData;
	var outData2;
	float num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	float value;
	int num6;
	float value2;

	if (!func_263(hParam1, 0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()) == pedParam0)
		unk = { func_380(false, true, false, -1) };

	outData.f_1 = 20;
	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam1, &outData);

	for (i = 0; i < outData; i = i + 1)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2);
	
		switch (outData2.f_1)
		{
			case -1946606248:
				func_899(pedParam0, outData2.f_5);
				break;
		
			case joaat("EFFECT_HORSE_HEALTH_CORE"):
				num5 = func_496(pedParam0, 0);
				value = outData2.f_5;
				func_497(pedParam0, 0, num5 + BUILTIN::CEIL(value));
				func_894(pedParam0, unk, 1, BUILTIN::FLOOR(-value));
				break;
		
			case -778289619:
				num = func_896(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
			
				if (func_494(0, &num2))
					if (func_898(pedParam0, num2, num, false))
						func_849(pedParam0, 0);
				break;
		
			case 855745648:
				num6 = func_496(pedParam0, 1);
				value2 = outData2.f_5;
				func_497(pedParam0, 1, num6 + BUILTIN::CEIL(value2));
				break;
		
			case 978049229:
				func_895(pedParam0, outData2.f_5);
				break;
		
			case 1136630075:
				num = func_896(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
			
				if (func_897(0, &num2))
					if (func_898(pedParam0, num2, num, false))
						func_849(pedParam0, 0);
				break;
		
			case 1194731729:
				num3 = 100 - func_382(unk, 1);
			
				if (num3 > 50)
				{
					num4 = outData2.f_2;
					func_894(pedParam0, unk, 2, num4);
				}
				break;
		
			case 1365603835:
				num = func_896(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
			
				if (func_897(1, &num2))
					if (func_898(pedParam0, num2, num, false))
						func_849(pedParam0, 1);
				break;
		
			case 1497139093:
				num = func_896(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
			
				if (func_494(1, &num2))
					if (func_898(pedParam0, num2, num, false))
						func_849(pedParam0, 1);
				break;
		}
	}

	return;
}

BOOL func_799(Hash hParam0) // Position - 0x1642B Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
		case joaat("consumable_herb_english_mace"):
		case joaat("consumable_peppermint"):
		case joaat("consumable_sugarcube"):
			return true;
	}

	return false;
}

int func_800(int iParam0) // Position - 0x1645B Hash - 0x4EE4703D ^0x4EE4703D
{
	return 20;
}

void func_801(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5) // Position - 0x16465 Hash - 0x7672338 ^0x31743750
{
	int i;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return;

	fParam5 = func_385(fParam5, 0f, 1E+09f);

	for (i = 0; i < 10; i = i + 1)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_17418.f_55.f_61.f_41[i /*56*/], &uParam0))
		{
			Global_17418.f_55.f_61.f_41[i /*56*/].f_40[iParam4 /*4*/].f_2 = fParam5;
			return;
		}
	}

	if (!func_634(&uParam0))
		return;

	Global_17418.f_55.f_61.f_41[i /*56*/].f_40[iParam4 /*4*/].f_2 = fParam5;
	return;
}

void func_802(Ped pedParam0, Any* panParam1, int iParam2, int iParam3) // Position - 0x164EF Hash - 0xFBCD1B87 ^0xFBCD1B87
{
	float value;
	BOOL flag;
	float num;
	float num2;
	float num3;

	if (func_331(pedParam0) >= 4)
		return;

	if (func_900(panParam1, iParam2))
		return;

	if (func_901(pedParam0, iParam2))
		return;

	if (iParam3 <= 0f)
	{
		flag = func_902(panParam1, iParam2) == 0f;
		value = func_903(iParam2, flag);
	}
	else
	{
		value = iParam3;
	}

	if (value == 0f)
		return;

	num = value * Global_1156111.f_2169[61 /*205*/].f_201;
	value = value + num;
	num2 = func_904(value);
	Global_1290271.f_1640.f_3 = Global_1290271.f_1640.f_3 + num2;
	value = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(value));

	if (Global_1290271.f_1640.f_3 >= 1f)
	{
		num3 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(Global_1290271.f_1640.f_3));
		Global_1290271.f_1640.f_3 = Global_1290271.f_1640.f_3 - num3;
		value = value + num3;
	}

	switch (iParam2)
	{
		case 0:
			if (func_641(pedParam0, 0))
				value = value * 0.5f;
		
			Global_1290271.f_1640.f_11 = Global_1290271.f_1640.f_11 + value;
			break;
	
		case 1:
		case 2:
			Global_1290271.f_1640.f_11 = Global_1290271.f_1640.f_11 + value;
			break;
	
		case 3:
			Global_1290271.f_1640.f_13 = Global_1290271.f_1640.f_13 + value;
			break;
	
		default:
			func_905(iParam2, value);
			break;
	}

	func_906(pedParam0, value);
	func_907(panParam1, iParam2, value);
	Global_1290271.f_1640.f_2 = Global_1290271.f_1640.f_2 + value;
	return;
}

void func_803(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1667B Hash - 0x3564A945 ^0xFF0099CC
{
	var unk;
	var value;
	int i;

	if (func_2() != 0)
		return;

	if (func_908())
		return;

	if (PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(PLAYER::PLAYER_PED_ID()))
		return;

	if (iParam0 == -1)
		return;

	if (func_909(iParam0, 1) < 0)
		return;

	if (func_909(iParam0, 1) >= 106)
		return;

	if (!bParam1)
		if (!Global_1149432.f_3876.f_2[func_909(iParam0, 1) /*4*/])
			return;

	Global_1149432.f_3876.f_2[func_909(iParam0, 1) /*4*/].f_2 = Global_1149432.f_3876.f_2[func_909(iParam0, 1) /*4*/].f_2 + 1;

	if (!bParam2)
		return;

	if (Global_1295666.f_11 != Global_1295666)
		return;

	unk.f_5 = -1;
	unk.f_4 = 0;
	unk.f_5 = iParam0;
	unk.f_6 = bParam1;
	i = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295666.f_10, Global_1295666.f_149[i]))
		{
		}
		else if (Global_1295666.f_149[i] == Global_1295666.f_5)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, Global_1295666.f_149[i]);
		}
	}

	func_910(&unk, value);
	return;
}

void func_804(Ped pedParam0) // Position - 0x167BC Hash - 0x7F42D983 ^0xA02E5A76
{
	BOOL isPedMotivationStateEnabled;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	isPedMotivationStateEnabled = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(pedParam0, 3);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, true);

	func_911(pedParam0, 0f, 0);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, false);

	return;
}

void func_805(Ped pedParam0, Hash hParam1) // Position - 0x16816 Hash - 0x61EDE2F8 ^0xE776EE8E
{
	BOOL flag;
	int num;
	int outData;
	var outData2;
	var unk28;
	float num2;
	int i;
	int num3;
	float value;
	int num4;
	int value2;
	int num5;
	float value3;
	float value4;

	if (!func_361(hParam1))
		return;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	flag = false;

	if (func_318(pedParam0))
	{
		num = func_333(pedParam0);
		flag = true;
	}

	outData.f_1 = 20;
	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam1, &outData);

	for (i = 0; i < outData; i = i + 1)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2);
	
		switch (outData2.f_1)
		{
			case -1946606248:
				func_899(pedParam0, outData2.f_5);
				break;
		
			case joaat("EFFECT_HORSE_HEALTH_CORE"):
				if (func_494(0, &unk28))
				{
					value3 = outData2.f_5;
				
					if (flag)
						func_914(num, 0, BUILTIN::FLOOR(value3));
					else
						func_915(pedParam0, 0, BUILTIN::FLOOR(value3));
				}
				break;
		
			case -778289619:
				if (func_494(0, &unk28))
				{
					num2 = func_896(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
					func_917(pedParam0, 0, num2);
				}
				break;
		
			case 855745648:
				if (func_494(1, &unk28))
				{
					value4 = outData2.f_5;
				
					if (flag)
						func_914(num, 1, BUILTIN::FLOOR(value4));
					else
						func_915(pedParam0, 1, BUILTIN::FLOOR(value4));
				}
				break;
		
			case 978049229:
				func_895(pedParam0, outData2.f_5);
				break;
		
			case 1136630075:
				if (func_897(0, &unk28))
				{
					num2 = func_896(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
					func_916(pedParam0, 0, num2);
				}
				break;
		
			case 1194731729:
				num3 = outData2.f_2;
				value = -outData2.f_5;
			
				if (flag && num3 > 0)
				{
					num4 = func_809(pedParam0);
					value2 = func_800(num4);
					func_708(num, 1, BUILTIN::TO_FLOAT(value2));
				}
			
				if (flag)
					num5 = func_406(num, 1);
				else
					num5 = func_286(pedParam0, 1);
			
				if (num5 < 50)
					if (flag)
						func_912(num, 2, num3);
					else
						func_913(pedParam0, 2, num3);
			
				if (flag)
					func_912(num, 1, BUILTIN::FLOOR(value));
				else
					func_913(pedParam0, 1, BUILTIN::FLOOR(value));
				break;
		
			case 1365603835:
				if (func_897(1, &unk28))
				{
					num2 = func_896(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
					func_916(pedParam0, 1, num2);
				}
				break;
		
			case 1497139093:
				if (func_494(1, &unk28))
				{
					num2 = func_896(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
					func_917(pedParam0, 1, num2);
				}
				break;
		}
	}

	func_918(hParam1);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return;
}

BOOL func_806(Hash hParam0) // Position - 0x16AB0 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_herb_parasol_mushroom"):
		case joaat("consumable_herb_bay_bolete"):
		case joaat("consumable_herb_chanterelles"):
		case joaat("consumable_herb_rams_head"):
			return true;
	}

	return false;
}

BOOL func_807(Hash hParam0) // Position - 0x16AE0 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_herb_oleander_sage"):
		case joaat("consumable_herb_evergreen_huckleberry"):
		case joaat("consumable_herb_indian_tobacco"):
		case joaat("consumable_herb_yarrow"):
		case joaat("consumable_herb_violet_snowdrop"):
		case joaat("consumable_herb_milkweed"):
		case joaat("consumable_herb_prairie_poppy"):
		case joaat("consumable_herb_vanilla_flower"):
			return true;
	}

	return false;
}

int func_808(int iParam0) // Position - 0x16B28 Hash - 0x4EE4703D ^0x4EE4703D
{
	return 20;
}

int func_809(Ped pedParam0) // Position - 0x16B32 Hash - 0x98A8A9 ^0x891AFA53
{
	int attributeRank;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, func_824());
	return attributeRank;
}

BOOL func_810(Any* panParam0, Any* panParam1, BOOL bParam2) // Position - 0x16B5F Hash - 0x2B773A63 ^0xA5A14CBB
{
	int inventoryId;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	inventoryId = func_518(bParam2);

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam0, panParam1, 29, 1))
		return false;

	return true;
}

BOOL func_811(var uParam0, int iParam1) // Position - 0x16B93 Hash - 0x320397CF ^0x320397CF
{
	return func_919(*uParam0, iParam1);
}

int func_812(Player plParam0) // Position - 0x16BA4 Hash - 0x487A1BB7 ^0x246A49E9
{
	int num;
	int num2;
	int num3;

	if (!Global_1048577)
		return 3;

	num = Global_263042[plParam0 /*65*/].f_1.f_16.f_2;
	num2 = func_920(num);
	num3 = func_921(num, num2);
	return num3;
}

struct<2> func_813() // Position - 0x16BDC Hash - 0x14C8EF15 ^0x9845E788
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

BOOL func_814(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x16BF5 Hash - 0x72145F00 ^0xE568DB61
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return 1;
	}

	if (func_213(Global_1051268) && !func_922(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return 1;
	}

	if (iParam2 != 0 && func_923(iParam2))
		return 1;

	if (iParam3 != 0 && func_924(iParam3, 255))
	{
		Global_1072759.f_28307 = 4;
		return 1;
	}

	if (Global_263042[Global_1295666 /*65*/] > 2)
	{
		Global_1072759.f_28307 = 5;
		return 1;
	}

	if (Global_262155 >= 1)
	{
		Global_1072759.f_28307 = 6;
		return 1;
	}

	if (func_925())
	{
		Global_1072759.f_28307 = 7;
		return 1;
	}

	if (Global_1572887.f_8 & true != 0)
	{
		if (!func_213(Global_1051268))
		{
			Global_1072759.f_28307 = 8;
			return 1;
		}
	}

	if (*Global_265213.f_122646 != 0 && SCRIPTS::DOES_THREAD_EXIST(*Global_265213.f_122646))
	{
		Global_1072759.f_28307 = 9;
		return 1;
	}

	Global_1072759.f_28307 = 0;
	return 0;
}

BOOL func_815(var uParam0, int iParam1) // Position - 0x16D1E Hash - 0x9AE75D66 ^0x2AB3747D
{
	int num;
	int offset;

	num = iParam1 / 32;
	offset = iParam1 - (num * 32);
	return MISC::IS_BIT_SET(uParam0->[num], offset);
}

BOOL func_816(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x16D42 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_518(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_817(Any* panParam0, Any* panParam1) // Position - 0x16D69 Hash - 0x7D14D8ED ^0x3FF9CC32
{
	*panParam0 = { *panParam1 };
	panParam0->f_4 = panParam1->f_4;
	panParam0->f_5 = { panParam1->f_5 };
	panParam0->f_9 = panParam1->f_9;
	panParam0->f_11 = panParam1->f_14;

	if (!STREAMING::IS_MODEL_VALID(panParam0->f_11))
		return false;

	panParam0->f_22 = func_752(panParam0->f_11);

	if (panParam0->f_22 == 0)
		return false;

	panParam0->f_12 = { panParam1->f_16 };
	panParam0->f_23 = panParam1->f_25;
	panParam0->f_20 = panParam1->f_24;
	panParam0->f_10 = 0;
	return true;
}

BOOL func_818(Any* panParam0, Any* panParam1, BOOL bParam2) // Position - 0x16DE9 Hash - 0x973408EE ^0xBA10F78
{
	int inventoryId;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	inventoryId = func_518(bParam2);

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam0, panParam1, 24, 1))
		return false;

	return true;
}

BOOL func_819(Any* panParam0, Any* panParam1) // Position - 0x16E1D Hash - 0x7D14D8ED ^0x3FF9CC32
{
	*panParam0 = { *panParam1 };
	panParam0->f_4 = panParam1->f_4;
	panParam0->f_5 = { panParam1->f_5 };
	panParam0->f_9 = panParam1->f_9;
	panParam0->f_11 = panParam1->f_14;

	if (!STREAMING::IS_MODEL_VALID(panParam0->f_11))
		return false;

	panParam0->f_22 = 0;
	panParam0->f_12 = { panParam1->f_15 };
	panParam0->f_20 = panParam1->f_23;
	panParam0->f_10 = 2;
	return true;
}

void func_820(Any* panParam0) // Position - 0x16E82 Hash - 0x9FA9AB5C ^0x2E23B262
{
	int i;

	*panParam0 = { func_519() };

	for (i = 0; i < 24; i = i + 1)
	{
		panParam0->f_4[i] = 0f;
	}

	i = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		panParam0->f_29[i /*5*/] = 100;
		panParam0->f_29[i /*5*/].f_1 = 0f;
		panParam0->f_29[i /*5*/].f_2 = 0f;
		panParam0->f_29[i /*5*/].f_3 = 0;
		panParam0->f_29[i /*5*/].f_4 = 0f;
	}

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		switch (i)
		{
			case 0:
				panParam0->f_40[i /*4*/] = 100;
				break;
		
			case 1:
				panParam0->f_40[i /*4*/] = 0;
				break;
		
			case 2:
				panParam0->f_40[i /*4*/] = 50;
				break;
		}
	
		panParam0->f_40[i /*4*/].f_1 = 0f;
		panParam0->f_40[i /*4*/].f_2 = 0f;
		panParam0->f_40[i /*4*/].f_3 = 0;
	}

	panParam0->f_53 = { 0f, 0f, 0f };
	return;
}

void func_821(char* sParam0, char* sParam1, Hash hParam2) // Position - 0x16F78 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

float func_822(int iParam0) // Position - 0x16FA9 Hash - 0xFE1A3B7C ^0xFE1A3B7C
{
	switch (iParam0)
	{
		case 0:
			return 15f;
	
		case 1:
			return 1E+09f;
	
		case 2:
			return 1E+09f;
	
		case 3:
			return 1E+09f;
	
		case 4:
			return 1E+09f;
	
		case 5:
			return 100f;
	
		case 6:
			return 30f;
	
		case 7:
			return 1E+09f;
	
		case 8:
			return 1E+09f;
	
		case 9:
			return 1E+09f;
	
		case 10:
			return 1E+09f;
	
		case 11:
			return 1E+09f;
	
		case 12:
			return 1E+09f;
	
		case 13:
			return 1E+09f;
	
		case 14:
			return 1E+09f;
	
		case 15:
			return 1E+09f;
	
		case 16:
			return 1E+09f;
	
		case 17:
			return 1E+09f;
	
		case 18:
			return 1E+09f;
	
		case 19:
			return 1E+09f;
	
		case 20:
			return 1E+09f;
	}

	return 1E+09f;
}

void func_823(int iParam0, int iParam1) // Position - 0x17123 Hash - 0x60D5BCB9 ^0x59129ACD
{
	ePedType type;
	int defaultMaxAttributeRank;
	char* str;

	iParam0 = func_77(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	type = func_158(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(type, 7);

	if (iParam1 == 1)
		str = "HORSE_BONDED";
	else if (iParam1 == defaultMaxAttributeRank)
		str = "HORSE_BONDING_MAXIMUM";
	else
		str = "HORSE_BONDING_LEVELUP";

	func_651(str, MISC::VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), joaat("hud_toasts"), -961843223, 8000, "HUD_Toast_Soundset", "horse_bonding", 0, 0, true, true);
	return;
}

int func_824() // Position - 0x171A6 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

void func_825(int iParam0, int iParam1) // Position - 0x171AF Hash - 0x20667F92 ^0xC816B621
{
	char* str;
	char* str2;
	const char* str3;
	int num;
	const char* str4;
	Hash hashKey;
	char* str5;
	char* str6;

	str = "RPG_LEVEL_PROGRESS_TOAST";

	switch (iParam0)
	{
		case 0:
			str2 = "RPG_HEALTH";
			break;
	
		case 1:
			str2 = "RPG_STAMINA";
			break;
	
		default:
			return;
	}

	str3 = MISC::VAR_STRING(2, "HORSE_RPG_LEVEL_PROGRESS", iParam1);

	switch (iParam0)
	{
		case 0:
			num = joaat("toast_rpg_level_health_horse");
			break;
	
		case 1:
			num = joaat("toast_rpg_level_stamina_horse");
			break;
	
		default:
			return;
	}

	str4 = func_927(func_926(iParam1));
	hashKey = MISC::GET_HASH_KEY(str4);
	str5 = "";
	str6 = "HUD_Toast_Soundset";
	func_651(MISC::VAR_STRING(10, str, str2), str3, num, hashKey, 8000, str6, str5, 0, 0, true, true);
	return;
}

int func_826(Ped pedParam0) // Position - 0x17262 Hash - 0x98A8A9 ^0x891AFA53
{
	int attributeRank;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, func_827());
	return attributeRank;
}

int func_827() // Position - 0x1728F Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_828(BOOL bParam0, int iParam1) // Position - 0x17298 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_928(&Global_0, 8);

	if (!func_298() || func_2() != -1)
		return;

	func_928(&Global_0, 1);
	return;
}

BOOL func_829(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x172DE Hash - 0x8DB88FC7 ^0xD6CAC1F
{
	int num;
	var guid2;
	var guid1;

	if (!func_263(hParam0, 0))
		return 0;

	num = func_520(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	guid2 = { func_605(hParam0, false, false) };

	if (func_521(hParam0, &guid2, iParam1, false, false, -1, false))
		return 0;

	if (!func_522(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_518(false), &guid1, &guid2, hParam0, guid2.f_4, iParam1, hParam2))
		return 0;

	return 1;
}

BOOL func_830(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x1735A Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_518(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_831(Any* panParam0, Any* panParam1) // Position - 0x17394 Hash - 0x7E4AAE29 ^0x8DBC3C3B
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_518(false), panParam0, panParam1, 29, 0))
		return false;

	return true;
}

BOOL func_832(Hash hParam0) // Position - 0x173C3 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

void func_833(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x173D9 Hash - 0x4EE39F09 ^0x4C62B7DF
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

BOOL func_834(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x17457 Hash - 0x5E278D9E ^0x9ED660B8
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_715(hParam0, 2))
		return 0;

	unk = 10;

	if (bParam2 && func_2() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return 1;

	if (!func_929(hParam0, hParam1, &unk, &num) || num < 1)
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

BOOL func_835(Hash hParam0) // Position - 0x174E5 Hash - 0x672E565C ^0xD531C7FC
{
	if (func_372(hParam0, 75135761))
		return true;

	return false;
}

Hash func_836(Hash hParam0, BOOL bParam1) // Position - 0x17500 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_263(hParam0, 0))
		return func_930(func_594(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

BOOL func_837(Hash hParam0, var uParam1) // Position - 0x17558 Hash - 0x86D562BB ^0xB258F193
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
		return 0;

	num = 0;

	for (i = 0; i < outUnk; i = i + 1)
	{
		if (outData[i /*47*/] == uParam1)
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
					return 1;
				}
			}
		}
	}

	return 0;
}

BOOL func_838(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x176A1 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_263(hParam0, 0))
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

BOOL func_839(int iParam0, BOOL bParam1) // Position - 0x17725 Hash - 0xC3E950D6 ^0xC3E950D6
{
	if (!func_450(iParam0))
		return false;

	return Global_1915656.f_17884[iParam0] && bParam1 != false;
}

BOOL func_840(int iParam0) // Position - 0x1774B Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_841(int iParam0, BOOL bParam1) // Position - 0x17761 Hash - 0x34341F7C ^0xD1267D8C
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_842(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x17792 Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_832(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_931(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_843(int iParam0) // Position - 0x1780A Hash - 0x873748AD ^0x873748AD
{
	return iParam0 > -1 && iParam0 < 26;
}

int func_844(int iParam0) // Position - 0x17820 Hash - 0xB8EC44B7 ^0x57E60B83
{
	switch (iParam0)
	{
		case 0:
			return joaat("st_doctor");
	
		case 1:
			return joaat("st_train_station");
	
		case 2:
			return joaat("st_post_office");
	
		case 3:
			return joaat("st_general");
	
		case 4:
			return joaat("st_fence");
	
		case 5:
			return joaat("st_horse_fence");
	
		case 6:
			return joaat("st_gunsmith");
	
		case 7:
			return joaat("st_tailor");
	
		case 8:
			return joaat("st_barber");
	
		case 9:
			return joaat("st_horse_shop");
	
		case 10:
			return joaat("st_butcher");
	
		case 11:
			return joaat("st_dynamic");
	
		case 12:
			return joaat("st_bank");
	
		case 14:
			return joaat("st_bait");
	
		case 15:
			return joaat("st_trapper");
	
		case 16:
			return joaat("st_pearson");
	
		case 17:
			return joaat("st_hotel");
	
		case 18:
			return joaat("st_photo_studio");
	
		case 19:
			return joaat("st_weapon_mod_store");
	
		case 20:
			return joaat("st_clothing");
	
		case 21:
			return joaat("st_camp_shaving");
	
		case 22:
			return joaat("st_quartermaster");
	
		case 23:
			return joaat("st_horse_trainer");
	
		case 24:
			return joaat("st_blacksmith");
	
		case 25:
			return joaat("st_bountyhunting_mp_return");
	
		case 26:
			return joaat("st_coach");
	
		case 27:
			return joaat("st_wilderness_supplies");
	
		case 28:
			return joaat("st_camp_lockbox");
	
		case 29:
			return joaat("st_camp_butchertable");
	
		case 30:
			return joaat("st_bartender");
	
		case 31:
			return joaat("st_pianist");
	
		case 32:
			return joaat("st_musician");
	
		case 33:
			return joaat("st_moonshine_still");
	
		case 34:
			return joaat("st_handheld");
	
		case 35:
			return joaat("st_honor_mp");
	
		case 36:
			return joaat("st_theater_mp");
	
		case 37:
			return joaat("st_moonshine_property");
	
		case 38:
			return joaat("st_travelling_salesman");
	
		case 39:
			return 374439621;
	
		default:
		
	}

	return 0;
}

BOOL func_845() // Position - 0x17A53 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_846(int iParam0) // Position - 0x17A67 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_693(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_692(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_691(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_689(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_688(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_690(iParam0);

	if (num6 < 1 || num6 > func_694(num5, num4))
		return false;

	return true;
}

var func_847(BOOL bParam0, var uParam1, var uParam2) // Position - 0x17B43 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_848() // Position - 0x17B5A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_849(Ped pedParam0, int iParam1) // Position - 0x17B69 Hash - 0x20F01565 ^0xAC680146
{
	int coreIndex;
	char* variableName;
	char* variableName2;
	int attributeCoreValue;
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (!func_494(iParam1, &coreIndex))
		return;

	variableName = func_932(iParam1);
	variableName2 = func_933(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
	{
		attributeCoreValue = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex);
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, variableName, BUILTIN::TO_FLOAT(attributeCoreValue), -1);
		flag = func_934(pedParam0, iParam1);
	
		if (attributeCoreValue <= 20 && !flag)
			PED::_SET_PED_BLACKBOARD_BOOL(pedParam0, variableName2, true, -1);
		else
			PED::_REMOVE_PED_BLACKBOARD_BOOL(pedParam0, variableName2);
	}

	return;
}

var func_850(int iParam0) // Position - 0x17C07 Hash - 0x7644A0AB ^0x93A2CDDA
{
	var unk;

	unk = Global_1902887.f_379.f_10[iParam0];
	return unk;
}

BOOL func_851(Hash hParam0) // Position - 0x17C20 Hash - 0xD47FBCD ^0xAB7C7E88
{
	return func_372(hParam0, 1279601681);
}

BOOL func_852(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x17C33 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_518(false);
	*panParam1 = { func_262(hParam0, func_718(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_853() // Position - 0x17C78 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_935(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_854(Hash hParam0, Any* panParam1) // Position - 0x17C95 Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_936(panParam1->f_8, hParam0, num, 2048) || func_936(panParam1->f_8, hParam0, num, 32768) || func_936(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_936(panParam1->f_8, hParam0, num, 4) || func_936(panParam1->f_8, hParam0, num, 256) || func_936(panParam1->f_8, hParam0, num, 65536) || func_936(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_936(panParam1->f_8, hParam0, num, 1) || func_936(panParam1->f_8, hParam0, num, 8) || func_936(panParam1->f_8, hParam0, num, 65536) || func_936(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_936(panParam1->f_8, hParam0, num, 1) || func_936(panParam1->f_8, hParam0, num, 16) || func_936(panParam1->f_8, hParam0, num, 2) || func_936(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_936(panParam1->f_8, hParam0, num, 8) || func_936(panParam1->f_8, hParam0, num, 4096) || func_936(panParam1->f_8, hParam0, num, 256) || func_936(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_855(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x17E6B Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

int func_856(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x17E82 Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_937(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_937(iParam1, 2, 0, 0);
	return -1;
}

int func_857(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x17ECB Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_937(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

BOOL func_858(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x17EE7 Hash - 0xB063C902 ^0x8DB8ACCE
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

BOOL func_859(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x17EFE Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_860(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x17F15 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_861(int iParam0, Hash hParam1, int iParam2) // Position - 0x17F2C Hash - 0x2E1C6AB2 ^0xB396D62
{
	var guid2;
	var guid1;

	if (!func_263(hParam1, 0))
		return 0;

	guid2 = { func_478(iParam0) };
	guid1 = { func_479(iParam0, hParam1, guid2, guid2.f_4) };

	if (INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(iParam0, &guid1, &guid2, hParam1, guid2.f_4, iParam2, 752097756))
		return 1;

	return 0;
}

void func_862(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x17F83 Hash - 0x81861438 ^0x93C66BE8
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(pedParam0, true);
			flag = true;
		}
	}

	if (PED::IS_PED_HUMAN(pedParam0))
	{
		if (bParam6)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (PED::IS_PED_MALE(pedParam0) && !bParam3)
			func_938(pedParam0, false, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(pedParam0, 0, false);
			flag = true;
		}
	
		if (bParam4)
		{
			func_290(pedParam0, false);
			flag = true;
		}
	
		func_282(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

int func_863(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x1804F Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_939(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

int func_864(Hash hParam0) // Position - 0x1807D Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_263(hParam0, 0))
		return 0;

	category = func_768(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_865(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x180AC Hash - 0x63B092E5 ^0xED916A69
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
			return true;

	return false;
}

void func_866(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x180D4 Hash - 0xF3743088 ^0xD7A675F3
{
	int num;
	int num2;

	if (!_IS_NULL_VECTOR(uParam2))
		TASK::_0x2064B33F6E6B92D4(*uParam0, uParam2);

	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);

	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
	
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, iParam10);
			break;
	
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
			break;
	
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
		
			if (iParam10 != 0f)
				TASK::_0xB8E3486D107F4194(*uParam0, iParam10);
			break;
	}

	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
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
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}

	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
			break;
	}

	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}

	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}

	if (iParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
		
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
		
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
		
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
		
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, (80f - 40f) / 2f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
		
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
		
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
		
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
		
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
		
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
		
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
		
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_940(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 46:
				num = func_941(uParam2, true);
				num2 = func_942(uParam2);
			
				if (num2 == 15 || num2 == 14 || num2 == 13 || num2 == 9 && num == -1 || num2 == 4 && num == -1)
				{
					TASK::_0x2EB977293923C723(*uParam0, func_940(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_940(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_940(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(80f, 150f, 17.5f, iParam1));
				}
			
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
		
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				break;
		
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_940(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(150f, 190f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				break;
		
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(25f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(40f, 50f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 8f);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(40f, 100f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
				
					if (iParam5 != 19)
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					else
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, iParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, iParam9);
	}

	return;
}

void func_867(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x18EE2 Hash - 0xF7709AA0 ^0xA0B87357
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
	
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
	
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
	
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
	
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
	
		case 42:
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
	
		case 46:
		case 47:
		case 48:
			if (func_941(uParam2, true) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
		
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 51:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			break;
	
		case 52:
			break;
	
		case 53:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
	}

	return;
}

Vector3 func_868(float fParam0, var uParam1, var uParam2) // Position - 0x196A2 Hash - 0xFB6A39D2 ^0x80C9C759
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

BOOL func_869(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x196E1 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

int func_870(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0x1970A Hash - 0x94640469 ^0x8901B07E
{
	var unk;
	var guid;
	int num;
	int itemSlotMaxCount;
	var unk18;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_524(uParam0, &unk, true, false, -1))
		return -1;

	if (func_871(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return -1;

	guid = { func_262(unk.f_4, uParam4, hParam8, true) };

	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		if (INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0) != INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&guid))
			return -1;

	if (iParam12 == -1)
		iParam12 = unk.f_11;

	num = func_264(unk.f_4, uParam4, hParam8, true, true, false);
	itemSlotMaxCount = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(unk.f_4, hParam8);

	if (itemSlotMaxCount >= 0)
	{
		if (num >= itemSlotMaxCount)
		{
			return -1;
		}
		else if (num + iParam12 > itemSlotMaxCount)
		{
			if (bParam11)
				return -1;
		
			iParam12 = itemSlotMaxCount - num;
		}
	}

	unk.f_11 = iParam12;
	unk18 = { func_729(&unk, false) };
	unk18.f_4 = { uParam4 };
	unk18.f_11 = hParam8;
	unk18.f_10 = iParam10;
	num2 = func_730(1168099063, &unk18, bParam9);

	if (num2 == -1)
		return -1;

	return num2;
}

BOOL func_871(var uParam0, var uParam1) // Position - 0x19849 Hash - 0x361C7388 ^0xEA068BC1
{
	if (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1 && uParam0->f_2 == uParam1->f_2 && uParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

int func_872(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9) // Position - 0x1988A Hash - 0x503960A6 ^0x8CEAEEDE
{
	var unk;
	var unk15;
	var unk29;
	var unk46;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	if (func_871(&uParam0, &uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_524(uParam0, &unk, true, false, -1) || !func_524(uParam4, &unk15, true, false, -1))
		return -1;

	if (func_871(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return -1;

	unk29 = { func_729(&unk, false) };
	unk29.f_4 = { unk15.f_5 };
	unk29.f_11 = unk15.f_9;
	unk29.f_10 = unk15.f_10 || iParam8;
	unk46 = { func_729(&unk15, false) };
	unk46.f_4 = { unk.f_5 };
	unk46.f_11 = unk.f_9;
	unk46.f_10 = unk.f_10 || iParam8;
	num = -1;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), 1168099063))
	{
		if (func_860(num, 1168099063, &unk29) && func_860(num, 1168099063, &unk46))
		{
			if (func_943(num) && NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
			{
				func_937(num, 1, 0, 0);
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
				return -1;
			}
		}
		else
		{
			NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			return -1;
		}
	}
	else
	{
		return -1;
	}

	return num;
}

BOOL func_873(Hash hParam0, Hash hParam1) // Position - 0x19A21 Hash - 0xCB56AA2F ^0x760BB648
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

Hash func_874(Hash hParam0, BOOL bParam1) // Position - 0x19A48 Hash - 0xBBDA5425 ^0x9F545260
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

int func_875(Hash hParam0) // Position - 0x19AEA Hash - 0xE1F3DDAE ^0xC8D3B326
{
	var outData;
	int num;

	if (!func_263(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

struct<10> func_876(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x19B24 Hash - 0x440EE211 ^0xAE2816F9
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

BOOL func_877(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x19BF8 Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_878(Hash hParam0) // Position - 0x19C19 Hash - 0x5E6E1858 ^0xE905275C
{
	!func_263(hParam0, 0);

	if (func_372(hParam0, -393037696))
		return true;

	return false;
}

int func_879(int iParam0) // Position - 0x19C3F Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_880(Hash hParam0, int iParam1) // Position - 0x19C60 Hash - 0x193BF536 ^0xD3271214
{
	var outData;
	int num;
	int outIndex;
	int i;

	outData = 20;
	num = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
			{
				num = outData[i /*2*/];
				return num;
			}
		}
	}

	return 0;
}

char* func_881(Hash hParam0) // Position - 0x19CAE Hash - 0x65E4FFBF ^0x7F50656
{
	Hash labelHash;

	if (!func_263(hParam0, 0))
		return "";

	labelHash = func_772(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_882(Hash hParam0) // Position - 0x19CE0 Hash - 0xB0090776 ^0x189C4477
{
	if (func_768(hParam0) == -126813555 || func_768(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_883(Hash hParam0) // Position - 0x19D0E Hash - 0xA5931EF ^0xFF93E71C
{
	Hash labelHash;

	if (!func_263(hParam0, 0))
		return "";

	labelHash = func_774(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_884(Hash hParam0) // Position - 0x19D3F Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_885(Hash hParam0) // Position - 0x19D5A Hash - 0xB8EC44B7 ^0x72487142
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

int func_886(var uParam0, int iParam1) // Position - 0x19E3D Hash - 0x6AC2726E ^0xDB215040
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

int func_887(Hash hParam0) // Position - 0x19E7A Hash - 0xD114ACC1 ^0x3428F85C
{
	Hash hash;

	hash = func_768(hParam0);

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

BOOL func_888(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x19EE7 Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_520(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_944(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_889(Hash hParam0, var uParam1) // Position - 0x19F54 Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_262(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

BOOL func_890(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x19FA7 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

Ped func_891(int iParam0) // Position - 0x19FDA Hash - 0x829B7265 ^0xE21C4F30
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_892(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x19FEA Hash - 0x586BF778 ^0x586BF778
{
	int num;

	num = func_601(hParam1, bParam2, false, false);
	num = num + func_945(pedParam0, hParam1);

	if (bParam3)
		num = num + func_946(hParam1, bParam4);

	return num;
}

void func_893(int iParam0) // Position - 0x1A01F Hash - 0x1B4614B0 ^0x73E476F0
{
	if (!func_263(Global_1940252.f_11588, 0))
		Global_1940252.f_7 = iParam0;
	else if (func_947(Global_1940252.f_11588, 1224357681) != 0 && Global_1940252.f_11587 != 0 && Global_1940252.f_11587 != -2074770370 && !Global_1915656.f_20638 && !Global_1915656.f_22504.f_1)
		Global_1940252.f_7 = 1;
	else
		Global_1940252.f_7 = 0;

	return;
}

void func_894(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0x1A0A4 Hash - 0x138755DE ^0x138755DE
{
	func_386(pedParam0, uParam1, iParam5, func_382(uParam1, iParam5) + iParam6);
	return;
}

void func_895(Ped pedParam0, float fParam1) // Position - 0x1A0C5 Hash - 0x3028D9AC ^0xB8FC9553
{
	int num;
	int entityHealth;
	int entityMaxHealth;
	int num2;
	int healthAmount;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	fParam1 = fParam1 * 0.01f;
	entityHealth = ENTITY::GET_ENTITY_HEALTH(pedParam0);
	entityMaxHealth = ENTITY::GET_ENTITY_MAX_HEALTH(pedParam0, false);
	num = BUILTIN::FLOOR(fParam1 * (float)entityMaxHealth);
	num2 = num;

	if (entityHealth + num > entityMaxHealth)
		num2 = entityMaxHealth - entityHealth;

	healthAmount = entityHealth + num2;
	ENTITY::SET_ENTITY_HEALTH(pedParam0, healthAmount, 0);
	return;
}

float func_896(float fParam0, int iParam1) // Position - 0x1A13B Hash - 0x4EDD98F5 ^0x4EDD98F5
{
	switch (iParam1)
	{
		case 0:
			return fParam0 * 0.033f;
	
		case 1:
			return fParam0 * 2f;
	
		case 2:
			return fParam0 * 120f;
	
		case 3:
			return fParam0 * 2880f;
	
		default:
		
	}

	return fParam0;
}

BOOL func_897(int iParam0, var uParam1) // Position - 0x1A18D Hash - 0xC77A99E4 ^0xC77A99E4
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 19;
			break;
	
		case 1:
			*uParam1 = 18;
			break;
	
		default:
			return false;
	}

	return true;
}

BOOL func_898(Ped pedParam0, int iParam1, float fParam2, BOOL bParam3) // Position - 0x1A1C1 Hash - 0xAF110D5F ^0x4F6B51AE
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		pedParam0 = Global_1295666.f_4;
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;
	}

	return func_948(pedParam0, iParam1, fParam2, bParam3);
}

void func_899(Ped pedParam0, float fParam1) // Position - 0x1A1F5 Hash - 0x678FB7D5 ^0xEFD0DA91
{
	float num;
	float pedStamina;
	float pedMaxStamina;
	float amount;
	float num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	fParam1 = fParam1 * 0.01f;
	pedStamina = PED::_GET_PED_STAMINA(pedParam0);
	pedMaxStamina = PED::_GET_PED_MAX_STAMINA(pedParam0);
	num = pedMaxStamina * fParam1;
	amount = num;

	if (pedStamina + num > pedMaxStamina)
		amount = pedMaxStamina - pedStamina;

	num2 = pedStamina + amount;
	PED::_CHANGE_PED_STAMINA(pedParam0, amount);
	return;
}

BOOL func_900(Any* panParam0, int iParam1) // Position - 0x1A266 Hash - 0xD4FA072A ^0xD4FA072A
{
	float num;

	num = func_949(iParam1);

	if (num == 1E+09f)
		return false;

	if (func_902(panParam0, iParam1) >= num)
		return true;

	return false;
}

BOOL func_901(Ped pedParam0, int iParam1) // Position - 0x1A298 Hash - 0x27D6F221 ^0x27D6F221
{
	if (iParam1 == 23)
		return false;

	switch (iParam1)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return false;
	
		default:
		
	}

	if (func_143(pedParam0) < 0.1f)
		return false;

	return true;
}

float func_902(Any* panParam0, int iParam1) // Position - 0x1A2EF Hash - 0x886E0514 ^0x4C749B15
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_17418.f_55.f_61.f_41[i /*56*/], panParam0))
			return Global_17418.f_55.f_61.f_41[i /*56*/].f_4[iParam1];
	}

	if (!func_634(panParam0))
		return 0f;

	return 0f;
}

float func_903(int iParam0, BOOL bParam1) // Position - 0x1A345 Hash - 0x8A1C169A ^0x8A1C169A
{
	if (bParam1)
		return func_950(iParam0);

	return func_951(iParam0);
}

float func_904(float fParam0) // Position - 0x1A364 Hash - 0x2AF48019 ^0x86D287C9
{
	float num;

	num = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0));
	return fParam0 - num;
}

void func_905(int iParam0, float fParam1) // Position - 0x1A37D Hash - 0x509D45B7 ^0xBD1C1BB8
{
	char* str;
	int num;
	int num2;
	BOOL flag;

	str = "";
	num = 0;
	num2 = joaat("COLOR_PURE_WHITE");

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			break;
	
		case 3:
			str = "HORSE_XP_LEADING";
			break;
	
		case 4:
			str = "HORSE_XP_EQUIP_SADDLE";
			break;
	
		case 5:
			str = "HORSE_XP_BREAK_HORSE";
			break;
	
		case 6:
		case 7:
			str = "HORSE_XP_PATTED";
			break;
	
		case 8:
		case 9:
			str = "HORSE_XP_CALM";
			break;
	
		case 10:
		case 11:
			str = "HORSE_XP_HITCH";
			break;
	
		case 12:
		case 13:
		case 14:
			str = "HORSE_XP_FED";
			break;
	
		case 15:
			str = "HORSE_XP_TREAT";
			break;
	
		case 16:
		case 17:
		case 18:
			str = "HORSE_XP_GROOM";
			break;
	
		case 19:
			str = "HORSE_XP_OINTMENT";
			break;
	
		case 20:
		case 21:
			str = "HORSE_XP_LIGHT_LOAD";
			break;
	
		case 22:
			str = "HORSE_XP_KILLED_OWN_HORSE";
			num = 1;
			num2 = joaat("COLOR_RED");
			break;
	}

	flag = false;

	if (flag)
		str = MISC::VAR_STRING(2, str, BUILTIN::FLOOR(fParam1));
	else
		str = MISC::VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");

	func_636(str, "ITEMTYPE_TEXTURES", joaat("transaction_horse_bond"), num, num2, 0, 0, 0, true);
	return;
}

void func_906(Ped pedParam0, float fParam1) // Position - 0x1A4DB Hash - 0xB1105438 ^0xADB8F7F
{
	int num;
	int bondingLevel;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	num = func_331(pedParam0);

	if (num >= 4)
		return;

	func_952(pedParam0, BUILTIN::FLOOR(fParam1));
	bondingLevel = func_331(pedParam0);

	if (bondingLevel > num)
	{
		num2 = bondingLevel - num;
		func_706(func_705(joaat("horse_bond_increased")), num2);
		PED::_SET_MOUNT_BONDING_LEVEL(pedParam0, bondingLevel);
	
		if (bondingLevel >= 4)
			func_706(func_705(joaat("horses_reached_max_bond")), 1);
	
		if (bondingLevel == 2)
			func_228(21, true);
		else if (bondingLevel == 3)
			func_228(22, true);
		else if (bondingLevel == 4)
			func_228(23, true);
	
		func_953(bondingLevel, pedParam0);
		func_954();
	}

	return;
}

void func_907(Any* panParam0, int iParam1, float fParam2) // Position - 0x1A59F Hash - 0x9EC76A56 ^0xD1C0507D
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_17418.f_55.f_61.f_41[i /*56*/], panParam0))
		{
			Global_17418.f_55.f_61.f_41[i /*56*/].f_4[iParam1] = Global_17418.f_55.f_61.f_41[i /*56*/].f_4[iParam1] + fParam2;
			return;
		}
	}

	if (!func_634(panParam0))
		return;

	Global_17418.f_55.f_61.f_41[i /*56*/].f_4[iParam1] = Global_17418.f_55.f_61.f_41[i /*56*/].f_4[iParam1] + fParam2;
	return;
}

BOOL func_908() // Position - 0x1A632 Hash - 0xF2555F70 ^0x7B9AF3F5
{
	if (func_2() != 0)
		return true;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_HONOR")))
		return true;

	if (Global_1149432.f_3876.f_1 & 2 != 0)
		return true;

	if (Global_1149432.f_3876.f_1 & 4 != 0)
		return true;

	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
		return true;

	return false;
}

int func_909(int iParam0, int iParam1) // Position - 0x1A68A Hash - 0xA2AFA677 ^0xA2AFA677
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 98;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 101;
	
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 62;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
	
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
	
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 68;
	
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 102;
	
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
	
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 92;
	
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
	
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
	
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
	
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
	
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 67;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 59;
	
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
	
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 95;
	
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
	
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
	
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 93;
	
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
	
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
	
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 74;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
	
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 82;
	
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
	
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
	
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 105;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 70;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 79;
	
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 75;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 100;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 73;
	
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
	
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
	
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 77;
	
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 96;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 86;
	
		case -29468993:
			return 103;
	
		case -1:
			return 0;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 87;
	
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 61;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
	
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
	
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 69;
	
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
	
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
	
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
	
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
	
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
	
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
	
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
	
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 89;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
	
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 94;
	
		case 669386338:
			return 104;
	
		case 796310207:
			return 66;
	
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 60;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 72;
	
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 76;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 83;
	
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 97;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
	
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
	
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
	
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 78;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 90;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 81;
	
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
	
		case 1623086000:
			return 65;
	
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 71;
	
		case 1723535349:
			return 58;
	
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
	
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 99;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 84;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 85;
	
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 91;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 80;
	
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return 63;
	
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 88;
	
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return 19;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_910(Any* panParam0, var uParam1) // Position - 0x1AB31 Hash - 0xD5DEE207 ^0xD3203710
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 188;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 7, 7, &uParam1);
	return;
}

void func_911(Ped pedParam0, float fParam1, Ped pedParam2) // Position - 0x1AB67 Hash - 0xA05E42F7 ^0x9237B7BD
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return;

	PED::_SET_PED_MOTIVATION(pedParam0, 3, fParam1, pedParam2);
	return;
}

void func_912(int iParam0, int iParam1, int iParam2) // Position - 0x1ABAB Hash - 0xB24CC417 ^0xB24CC417
{
	int num;

	num = func_406(iParam0, iParam1);
	func_707(iParam0, iParam1, num + iParam2);
	return;
}

void func_913(Ped pedParam0, int iParam1, int iParam2) // Position - 0x1ABCA Hash - 0xB24CC417 ^0xB24CC417
{
	int num;

	num = func_286(pedParam0, iParam1);
	func_387(pedParam0, iParam1, num + iParam2);
	return;
}

void func_914(int iParam0, int iParam1, int iParam2) // Position - 0x1ABE9 Hash - 0xEC2C2B4F ^0xEC2C2B4F
{
	func_698(iParam0, iParam1, func_439(iParam0, iParam1) + iParam2);
	return;
}

void func_915(Ped pedParam0, int iParam1, int iParam2) // Position - 0x1AC04 Hash - 0xEC2C2B4F ^0xEC2C2B4F
{
	func_497(pedParam0, iParam1, func_496(pedParam0, iParam1) + iParam2);
	return;
}

void func_916(Ped pedParam0, int iParam1, float fParam2) // Position - 0x1AC1F Hash - 0xF3882556 ^0xF7A93829
{
	int attributeIndex;

	if (func_897(iParam1, &attributeIndex))
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(pedParam0, attributeIndex, fParam2, false);

	return;
}

void func_917(Ped pedParam0, int iParam1, float fParam2) // Position - 0x1AC3D Hash - 0xF3882556 ^0xF7A93829
{
	int attributeIndex;

	if (func_494(iParam1, &attributeIndex))
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(pedParam0, attributeIndex, fParam2, false);

	return;
}

void func_918(Hash hParam0) // Position - 0x1AC5B Hash - 0x50583BD9 ^0x3F6C8737
{
	if (func_955(hParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA_FORT");
		return;
	}

	if (func_589(hParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA");
		return;
	}

	return;
}

BOOL func_919(int iParam0, int iParam1) // Position - 0x1AC8B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_920(int iParam0) // Position - 0x1AC9A Hash - 0x72D9F608 ^0xDFA142FB
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
		return 482206342;

	return *Global_524288.f_39632;
}

int func_921(int iParam0, int iParam1) // Position - 0x1ACCD Hash - 0xE6FBCE9E ^0xE6FBCE9E
{
	int num;

	switch (iParam0)
	{
		case -933924539:
			num = 0;
			break;
	
		case -504335712:
			if (func_956(iParam1))
				num = 1;
			else
				num = 2;
			break;
	
		case 395262693:
			num = 2;
			break;
	
		default:
			num = 3;
			break;
	}

	return num;
}

BOOL func_922(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1AD18 Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_923(BOOL bParam0) // Position - 0x1AD33 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && bParam0 != false;
}

BOOL func_924(BOOL bParam0, int iParam1) // Position - 0x1AD54 Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && bParam0 != false;
}

BOOL func_925() // Position - 0x1AD90 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_213(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

struct<4> func_926(int iParam0) // Position - 0x1ADE8 Hash - 0x8E70F58C ^0x284409EC
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "TOAST_RPG_LEVEL_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 32);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 32);
	TEXT_LABEL_APPEND_INT(&unk, 0, 32);
	return unk;
}

const char* func_927(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1AE0F Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_928(Hash hParam0, int iParam1) // Position - 0x1AE23 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_929(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x1AE36 Hash - 0x8EAA10FC ^0x9E3F883B
{
	var unk;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_715(hParam0, 2))
		return false;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!func_957(hParam0, hParam1, &unk))
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

Hash func_930(Hash hParam0, BOOL bParam1) // Position - 0x1AEBA Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_715(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

BOOL func_931(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x1AEF3 Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

char* func_932(int iParam0) // Position - 0x1AF1F Hash - 0x6E9CB9AF ^0x82D00FC
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "HealthCoreValue";
			break;
	
		case 1:
			str = "StaminaCoreValue";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

char* func_933(int iParam0) // Position - 0x1AF56 Hash - 0x6E9CB9AF ^0x96753487
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "isLowHealthCoreActive";
			break;
	
		case 1:
			str = "isLowStaminaCoreActive";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

BOOL func_934(Ped pedParam0, int iParam1) // Position - 0x1AF8D Hash - 0xE57DADF2 ^0x67EF1840
{
	int attributeIndex;

	if (func_494(iParam1, &attributeIndex))
		if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(pedParam0, attributeIndex))
			return 1;

	return 0;
}

int func_935(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AFB0 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_958(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_518(bParam1), hParam0, bParam3);
}

BOOL func_936(int iParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x1AFE3 Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_919(iParam2, iParam3))
		return true;

	return false;
}

void func_937(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1AFFB Hash - 0x3169A239 ^0x47E831EC
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

	func_959(iParam0, iParam1, iParam2, iParam3);
	return;
}

void func_938(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B099 Hash - 0x4FE4E8A8 ^0x44655508
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (bParam1)
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HATS"), 0, true);
	else
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_939(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x1B0DE Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_518(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return false;

	if (!func_731(&outGuid, panParam2, bParam3, false, iParam4))
		return false;

	return true;
}

float func_940(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x1B12C Hash - 0x3A11F625 ^0x3A11F625
{
	float num;

	num = fParam0;
	num = num + (fParam2 * (float)iParam3);

	if (num > fParam1)
		num = fParam1;

	return num;
}

int func_941(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1B151 Hash - 0x4DC6667D ^0xBA61FD45
{
	int num;

	num = func_586();

	if (func_840(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_960(vParam0, bParam3);
}

int func_942(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1B19F Hash - 0x56F0811C ^0x278FB5A
{
	return func_961(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

BOOL func_943(int iParam0) // Position - 0x1B1B5 Hash - 0xBADEC35E ^0xEFCC3213
{
	int num;
	Hash action;

	num = NETSHOPPING::_0x38640A8C2DEF011B(iParam0);
	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(iParam0);

	if (num == 0)
		return true;

	if (action == 1168099063)
		if (func_936(0, action, num, 4) || func_936(0, action, num, 256) || func_936(0, action, num, 65536) || func_936(0, action, num, 131072))
			return false;
	else if (func_936(0, action, num, 8) || func_936(0, action, num, 16) || func_936(0, action, num, 65536))
		return false;

	return true;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_944(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x1B264 Hash - 0x8E6DB586 ^0xC3CF8308
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
	
		if (func_962(&anParam0->[i /*6*/]))
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
				anParam0->[i /*6*/] = { func_519() };
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

int func_945(Ped pedParam0, Hash hParam1) // Position - 0x1B37B Hash - 0x83F00AF7 ^0x32031FF8
{
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (func_963(hParam1))
		{
			num = 0;
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (Global_1903838.f_113[i /*96*/].f_1 == hParam1)
					num = num + 1;
			}
		
			return num;
		}
		else
		{
			return func_477(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
		}
	}

	return 0;
}

int func_946(Hash hParam0, BOOL bParam1) // Position - 0x1B3D9 Hash - 0x19ACB934 ^0xDEF82372
{
	if (!bParam1 || func_964())
		return func_264(hParam0, func_261(true), -2015960939, true, true, false);

	return 0;
}

int func_947(Hash hParam0, int iParam1) // Position - 0x1B408 Hash - 0x7A1C2599 ^0xFF9B5634
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

BOOL func_948(Ped pedParam0, int iParam1, float fParam2, BOOL bParam3) // Position - 0x1B452 Hash - 0xC2010769 ^0xFC9915ED
{
	if (pedParam0 == Global_1295666.f_3)
		return func_965(iParam1, fParam2, true, bParam3);

	if (fParam2 == -1f)
		if (func_966(iParam1))
			fParam2 = 30f;
		else
			fParam2 = 30f;
	else if (fParam2 <= 0f)
		return 0;

	switch (iParam1)
	{
		case 0:
			func_967(iParam1, pedParam0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(pedParam0, iParam1, fParam2, bParam3);
			break;
	
		case 1:
			func_967(iParam1, pedParam0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(pedParam0, iParam1, fParam2, bParam3);
			break;
	
		case 18:
			func_967(iParam1, pedParam0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(pedParam0, iParam1, fParam2, bParam3);
			break;
	
		case 19:
			func_967(iParam1, pedParam0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(pedParam0, iParam1, fParam2, bParam3);
			break;
	
		default:
			return 0;
	}

	return 1;
}

float func_949(int iParam0) // Position - 0x1B523 Hash - 0x9E812A74 ^0x9E812A74
{
	switch (iParam0)
	{
		case 4:
			return 50f;
	
		case 5:
			return 25f;
	
		default:
		
	}

	return 1E+09f;
}

float func_950(int iParam0) // Position - 0x1B554 Hash - 0xE259059 ^0x47E89C0D
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_701.f_3;
	
		case 1:
			return Global_1901671.f_701.f_4;
	
		case 2:
			return Global_1901671.f_701.f_5;
	
		case 3:
			return Global_1901671.f_701.f_2;
	
		case 4:
			return Global_1901671.f_701.f_7;
	
		case 5:
			return Global_1901671.f_701.f_9;
	
		case 6:
			return Global_1901671.f_701.f_10;
	
		case 7:
			return Global_1901671.f_701.f_11;
	
		case 8:
			return Global_1901671.f_701.f_12;
	
		case 9:
			return Global_1901671.f_701.f_13;
	
		case 10:
			return Global_1901671.f_701.f_14;
	
		case 11:
			return Global_1901671.f_701.f_15;
	
		case 12:
			return Global_1901671.f_701.f_16;
	
		case 13:
			return Global_1901671.f_701.f_17;
	
		case 14:
			return Global_1901671.f_701.f_18;
	
		case 15:
			return Global_1901671.f_701.f_19;
	
		case 16:
			return Global_1901671.f_701.f_20;
	
		case 17:
			return Global_1901671.f_701.f_21;
	
		case 18:
			return Global_1901671.f_701.f_22;
	
		case 19:
			return Global_1901671.f_701.f_23;
	
		case 20:
			return Global_1901671.f_701.f_25;
	
		case 21:
			return Global_1901671.f_701.f_26;
	
		case 22:
			return Global_1901671.f_701.f_27;
	
		default:
		
	}

	return 0f;
}

float func_951(int iParam0) // Position - 0x1B703 Hash - 0xE259059 ^0xE4112510
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_701.f_3;
	
		case 1:
			return Global_1901671.f_701.f_4;
	
		case 2:
			return Global_1901671.f_701.f_5;
	
		case 3:
			return Global_1901671.f_701.f_2;
	
		case 4:
			return Global_1901671.f_701.f_6;
	
		case 5:
			return Global_1901671.f_701.f_8;
	
		case 6:
			return Global_1901671.f_701.f_10;
	
		case 7:
			return Global_1901671.f_701.f_11;
	
		case 8:
			return Global_1901671.f_701.f_12;
	
		case 9:
			return Global_1901671.f_701.f_13;
	
		case 10:
			return Global_1901671.f_701.f_14;
	
		case 11:
			return Global_1901671.f_701.f_15;
	
		case 12:
			return Global_1901671.f_701.f_16;
	
		case 13:
			return Global_1901671.f_701.f_17;
	
		case 14:
			return Global_1901671.f_701.f_18;
	
		case 15:
			return Global_1901671.f_701.f_19;
	
		case 16:
			return Global_1901671.f_701.f_20;
	
		case 17:
			return Global_1901671.f_701.f_21;
	
		case 18:
			return Global_1901671.f_701.f_22;
	
		case 19:
			return Global_1901671.f_701.f_23;
	
		case 20:
			return Global_1901671.f_701.f_25;
	
		case 21:
			return Global_1901671.f_701.f_26;
	
		case 22:
			return Global_1901671.f_701.f_27;
	
		default:
		
	}

	return 0f;
}

void func_952(Ped pedParam0, int iParam1) // Position - 0x1B8B2 Hash - 0x588627F6 ^0xC3A67252
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	ATTRIBUTE::ADD_ATTRIBUTE_POINTS(pedParam0, 7, iParam1);
	return;
}

void func_953(int iParam0, Ped pedParam1) // Position - 0x1B8E5 Hash - 0x6C48745D ^0x8D65F53E
{
	Ped entityModel;
	int defaultMaxAttributeRank;
	char* str;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam1);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(entityModel, 7);

	if (iParam0 == 1)
		str = "HORSE_BONDED";
	else if (iParam0 == defaultMaxAttributeRank)
		str = "HORSE_BONDING_MAXIMUM";
	else
		str = "HORSE_BONDING_LEVELUP";

	func_651(str, MISC::VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam0), joaat("hud_toasts"), -961843223, 8000, "HUD_Toast_Soundset", "horse_bonding", 0, 0, true, true);
	return;
}

void func_954() // Position - 0x1B94E Hash - 0x1803C4D9 ^0x2BBA7537
{
	if (Global_1290271.f_1640.f_5 == 1)
		return;

	Global_1290271.f_1640.f_5 = 1;
	return;
}

BOOL func_955(Hash hParam0) // Position - 0x1B970 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_potent_horse_stimulant"):
		case joaat("consumable_special_horse_stimulant_crafted"):
			return true;
	}

	return false;
}

BOOL func_956(int iParam0) // Position - 0x1B994 Hash - 0x92B1FA90 ^0xB975289D
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_957(Hash hParam0, var uParam1, Any anParam2) // Position - 0x1B9DC Hash - 0x29542237 ^0x85ED2DB5
{
	int i;
	int num;

	num = ITEMDATABASE::_0x7A35A72A692BE9DB(hParam0);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(hParam0, i, anParam2) && *anParam2 == uParam1)
			return true;
	}

	return false;
}

BOOL func_958(Hash hParam0) // Position - 0x1BA1C Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_959(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1BA2A Hash - 0xBC161045 ^0xD3B33F74
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

	func_968(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

int func_960(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1BB06 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_969(vParam0);
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

int func_961(Hash hParam0) // Position - 0x1BBBD Hash - 0x50573299 ^0x50573299
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

BOOL func_962(Any* panParam0) // Position - 0x1BC77 Hash - 0x7865E948 ^0x92258F24
{
	if (!func_970(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

BOOL func_963(Hash hParam0) // Position - 0x1BC93 Hash - 0xDB8363F2 ^0xB30A7F5C
{
	if (!func_776(hParam0, 1955773996))
		return false;

	if (!func_971(hParam0, 1))
		return false;

	return true;
}

BOOL func_964() // Position - 0x1BCBE Hash - 0xC82BB3B3 ^0x6740E474
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_972(vehicleOwnedByPlayer))
		return false;

	return true;
}

int func_965(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1BD0D Hash - 0xFF5C68E3 ^0x564C72DE
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_966(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return 0;

	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				effectName = func_973(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_974(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_973(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_975(joaat("STATUS_EFFECT__TRACKING"));
			func_976(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_973(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_977(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_978(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_975(joaat("STATUS_EFFECT__POISON"));
			func_978(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_978(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_966(int iParam0) // Position - 0x1BEC3 Hash - 0x3FEE6090 ^0x3FEE6090
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		default:
		
	}

	return false;
}

void func_967(int iParam0, Ped pedParam1) // Position - 0x1BEF2 Hash - 0x76C0C645 ^0x7CE1F3B1
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	switch (iParam0)
	{
		case 0:
			func_979(ENTITY::GET_ENTITY_MAX_HEALTH(pedParam1, false), pedParam1);
			break;
	
		case 1:
			func_980(PED::_GET_PED_MAX_STAMINA(pedParam1), pedParam1);
			break;
	
		case 18:
			func_981(pedParam1, 1, 100f);
			break;
	
		case 19:
			func_981(pedParam1, 0, 100f);
			break;
	}

	return;
}

void func_968(int iParam0) // Position - 0x1BF72 Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_982(&(iParam0->f_4));
	return;
}

int func_969(var uParam0, var uParam1, var uParam2) // Position - 0x1BF95 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_983(uParam0, 0f, 0f, 0, 2);
	return func_983(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

BOOL func_970(Any* panParam0) // Position - 0x1BFD0 Hash - 0x95F9E8C ^0xDDDFAC08
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_971(Hash hParam0, int iParam1) // Position - 0x1C007 Hash - 0xC9BD5171 ^0xC9BD5171
{
	int num;

	num = func_984(hParam0);

	if (num == -1)
		return false;

	return num > iParam1;
}

BOOL func_972(Vehicle veParam0) // Position - 0x1C026 Hash - 0xDEF9F967 ^0x717FC3F4
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("huntercart01"):
			return true;
	
		default:
		
	}

	return false;
}

char* func_973(int iParam0) // Position - 0x1C045 Hash - 0x2083A0D8 ^0xCDEBE5EC
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
	
		case 1:
			return "PlayerOverpower";
	
		case 2:
			return "PlayerOverpower";
	
		default:
		
	}

	return "";
}

void func_974(int iParam0) // Position - 0x1C07E Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_985(2);
	func_986(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_975(int iParam0) // Position - 0x1C0BB Hash - 0x5D78382 ^0x8F13B3A8
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int j;
	var unk;

	num2 = Global_1156111.f_47689.f_1.f_42;
	unk = 20;

	for (i = 0; i < num2; i = i + 1)
	{
		num = Global_1156111.f_47689.f_1[i /*2*/];
		num3 = func_987(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_988(num);
			Global_1156111.f_47689.f_1.f_42 = Global_1156111.f_47689.f_1.f_42 - 1;
		}
		else
		{
			unk[num4 /*2*/] = { Global_1156111.f_47689.f_1[i /*2*/] };
			num4 = num4 + 1;
		}
	}

	for (j = 0; j < num4; j = j + 1)
	{
		Global_1156111.f_47689.f_1[j /*2*/] = { unk[j /*2*/] };
	}

	return;
}

void func_976(int iParam0) // Position - 0x1C18B Hash - 0x265AFF44 ^0xE695F6B4
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_989(2);
	func_990(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_977(int iParam0, BOOL bParam1) // Position - 0x1C1C8 Hash - 0x71081FC9 ^0xE795FB69
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_991(2);
	func_992(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_978(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C1FD Hash - 0x5C29635D ^0x5C29635D
{
	func_993(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

void func_979(int iParam0, Ped pedParam1) // Position - 0x1C217 Hash - 0xC6A7B8B ^0x9755ACEE
{
	if (iParam0 <= 0)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::SET_ENTITY_HEALTH(pedParam1, iParam0, 0);
	return;
}

void func_980(float fParam0, Ped pedParam1) // Position - 0x1C258 Hash - 0x9E7C89AF ^0xD6BD9614
{
	float amount;

	if (fParam0 < 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	amount = fParam0 - PED::_GET_PED_STAMINA(pedParam1);
	PED::_CHANGE_PED_STAMINA(pedParam1, amount);
	return;
}

BOOL func_981(Ped pedParam0, int iParam1, float fParam2) // Position - 0x1C2A5 Hash - 0xD72B3B3A ^0x22A28347
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_994(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_982(var uParam0) // Position - 0x1C2FA Hash - 0x58FD8C3D ^0x7E71AD66
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

int func_983(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x1C354 Hash - 0xA452440E ^0xD3F785A1
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

int func_984(Hash hParam0) // Position - 0x1C39C Hash - 0x1E74E236 ^0xF004CA87
{
	int outSatchelItemSize;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	return outSatchelItemSize;
}

int func_985(int iParam0) // Position - 0x1C3B6 Hash - 0x262796A6 ^0x32C91F91
{
	if (iParam0 == 2)
		iParam0 = func_995(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546;
	
		case 1:
			return Global_1956875.f_1565.f_136;
	
		default:
		
	}

	return -1;
}

void func_986(float fParam0, Ped pedParam1) // Position - 0x1C3F6 Hash - 0x81B8D237 ^0xD25A4B21
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

int func_987(int iParam0, int iParam1) // Position - 0x1C43A Hash - 0x26934C66 ^0x26934C66
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

// Unhandled jump detected. Output should be considered invalid
int func_988(int iParam0) // Position - 0x1CC3B Hash - 0x85160494 ^0x6688B38
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_996(iParam0))
		return 0;

	num = func_987(iParam0, 1);

	if (!func_997(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_998(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_999(iParam0, num2))
		{
			case 0:
				func_1000(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_1000(num2, iParam0, i);
						func_1001(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_1001(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_1002(num2, 1);
		func_1003(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_1004(num3, 0);
		
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
	func_1005(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

int func_989(int iParam0) // Position - 0x1CECB Hash - 0x3229E1B0 ^0x4F226FB4
{
	if (iParam0 == 2)
		iParam0 = func_995(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_2;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_2;
	
		default:
		
	}

	return -1;
}

void func_990(float fParam0, Ped pedParam1) // Position - 0x1CF0F Hash - 0xFCEEE112 ^0xFADF1B0E
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	PED::_CHANGE_PED_STAMINA(pedParam1, fParam0);
	return;
}

int func_991(int iParam0) // Position - 0x1CF51 Hash - 0x3229E1B0 ^0x75954C0C
{
	if (iParam0 == 2)
		iParam0 = func_995(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_1;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_1;
	
		default:
		
	}

	return -1;
}

void func_992(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1CF95 Hash - 0x5072E518 ^0x6DDAEE0A
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_1006(player))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f && !bParam2)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 1);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

int func_993(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1D046 Hash - 0xF5F03980 ^0xC1EF2C73
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_995(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_981(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_1007(iParam0, 7000, iParam5);
	
		func_1008(ped, iParam0, fParam1);
		func_1009(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

int func_994(int iParam0) // Position - 0x1D0C4 Hash - 0x26AB94C2 ^0x26AB94C2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_995(int iParam0) // Position - 0x1D0F3 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_1011(func_1010(iParam0));
}

BOOL func_996(int iParam0) // Position - 0x1D105 Hash - 0xFFB3C2F0 ^0xFFB3C2F0
{
	int num;

	num = func_987(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_997(int iParam0) // Position - 0x1D12D Hash - 0x2BE93DAE ^0x2BE93DAE
{
	int num;

	num = func_998(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

int func_998(int iParam0, int iParam1) // Position - 0x1D155 Hash - 0x89B5041A ^0x89B5041A
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

int func_999(int iParam0, int iParam1) // Position - 0x1D80C Hash - 0x39669B5F ^0xB47C98D2
{
	Player player;
	Player player2;
	int num;

	player = func_1012(iParam0);
	player2 = Global_1295666;
	num = func_1002(iParam1, 1);

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

int func_1000(int iParam0, int iParam1, int iParam2) // Position - 0x1D88F Hash - 0xE22C7CA2 ^0xE22C7CA2
{
	int num;
	int num2;

	if (!func_996(iParam1))
		return 0;

	if (!func_1013(iParam0))
		return 0;

	num = func_1002(iParam0, 1);
	func_1014(iParam0, iParam1, iParam2);

	if (func_1015(Global_1156111.f_35859.f_3116[num /*31*/]) && func_1016(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_1017(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_1018(num2))
			if (func_1019(num2, num2.f_1, num2.f_2))
				func_1020(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_1021(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_1021(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_1001(int iParam0) // Position - 0x1D987 Hash - 0xBACBE486 ^0xD8F73B9E
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_1002(int iParam0, int iParam1) // Position - 0x1D99D Hash - 0x9DD4188 ^0x9DD4188
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

void func_1003(int iParam0, int iParam1) // Position - 0x1E24E Hash - 0x73AEC1AE ^0x984E1AE9
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_1004(int iParam0, int iParam1) // Position - 0x1E27D Hash - 0x3B92C3EA ^0xE3D6CCE1
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_1005(int iParam0) // Position - 0x1E299 Hash - 0x430DB350 ^0x725C69ED
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

BOOL func_1006(Player plParam0) // Position - 0x1E2C7 Hash - 0xD9DF34E9 ^0x1EDCC4EC
{
	float num;

	num = func_1022(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

void func_1007(int iParam0, int iParam1, int iParam2) // Position - 0x1E2E2 Hash - 0x9FB0AAD8 ^0x433FFF3E
{
	if (iParam2 == 2)
		iParam2 = func_995(2);

	if (iParam1 > 0)
		iParam1 = iParam1 + MISC::GET_GAME_TIMER();

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_1008(Ped pedParam0, int iParam1, float fParam2) // Position - 0x1E343 Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_1023(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_1024(iParam1), fParam2, -1);

	return;
}

void func_1009(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x1E36F Hash - 0xD1E7435D ^0x45C01A35
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_995(2);

	num = Global_1295666.f_16;
	func_1025(iParam0, fParam1, iParam3);

	if (bParam2)
		func_1026(iParam0, num, iParam3);

	return;
}

BOOL func_1010(int iParam0) // Position - 0x1E3A5 Hash - 0x745CE6FE ^0x745CE6FE
{
	return func_683(&(Global_1956875.f_1565), iParam0, 1);
}

int func_1011(BOOL bParam0) // Position - 0x1E3BB Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return 1;

	return 0;
}

Player func_1012(int iParam0) // Position - 0x1E3CD Hash - 0xF3F3BDC0 ^0xF3F3BDC0
{
	if (func_1027(iParam0))
		return func_1028(iParam0) % 32;

	return Global_1295666;
}

BOOL func_1013(int iParam0) // Position - 0x1E3EE Hash - 0xE6FB7F28 ^0xE6FB7F28
{
	int num;

	num = func_1002(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

int func_1014(int iParam0, int iParam1, int iParam2) // Position - 0x1E416 Hash - 0xAE2CC17B ^0x2CD7F4CE
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

	num = func_987(iParam1, 1);
	num2 = func_1002(iParam0, 1);
	num3 = func_998(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return 0;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return 1;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_1029(num4, 1);
	
		if (!func_1030(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_1031(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_1032(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_1033(num6))
		{
		}
		else
		{
			num7 = func_1034(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_1035(num6);
			}
		}
	}

	return 1;
}

BOOL func_1015(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x1E607 Hash - 0x911ECD26 ^0x92039873
{
	return uParam0.f_4 != 0;
}

BOOL func_1016(int iParam0, int iParam1) // Position - 0x1E615 Hash - 0xBA8D4E8F ^0x2A068003
{
	int num;

	if (!func_1013(iParam0))
		return false;

	if (!func_1036(iParam1))
		return false;

	num = func_1037(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_1017(int iParam0) // Position - 0x1E655 Hash - 0x4827F1DB ^0x96104558
{
	int num;
	var unk;

	num = func_1038(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_1018(int iParam0, var uParam1, var uParam2) // Position - 0x1E691 Hash - 0xB201D59F ^0xA3399F39
{
	if (!func_1013(iParam0))
		return false;

	if (!func_996(iParam0.f_1))
		return false;

	if (!func_1039(iParam0.f_2))
		return false;

	return true;
}

BOOL func_1019(int iParam0, int iParam1, int iParam2) // Position - 0x1E6C8 Hash - 0xAE2CC17B ^0x2CD7F4CE
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

	num = func_987(iParam1, 1);
	num2 = func_1002(iParam0, 1);
	num3 = func_998(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_1029(num4, 1);
	
		if (!func_1030(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_1031(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_1040(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_1033(num6))
		{
		}
		else if (!func_1041(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_1034(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_1042(num6);
			}
		}
	}

	func_1043(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_1020(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1E8F6 Hash - 0x562CA30C ^0x562CA30C
{
	int num;

	if (!func_1036(iParam0))
		return;

	num = func_1037(iParam0, 1);

	if (!func_1013(iParam1))
		return;

	if (!func_996(iParam2))
		return;

	if (!func_1039(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_1021(int iParam0) // Position - 0x1E975 Hash - 0x9AA5A92B ^0xCC01F112
{
	int num;

	if (!func_1036(iParam0))
		return;

	num = func_1037(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

float func_1022(Player plParam0) // Position - 0x1E9CA Hash - 0x67CAB99C ^0xC9B69B05
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_1044(2);
}

char* func_1023(int iParam0) // Position - 0x1E9E0 Hash - 0x2083A0D8 ^0x88137434
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
	
		case 1:
			return "StaminaCoreValue";
	
		case 2:
			return "DeadEyeCoreValue";
	
		default:
		
	}

	return "";
}

char* func_1024(int iParam0) // Position - 0x1EA19 Hash - 0x2083A0D8 ^0xD1C50B24
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
	
		case 1:
			return "isLowStaminaCoreActive";
	
		case 2:
			return "isLowDeadEyeCoreActive";
	
		default:
		
	}

	return "";
}

void func_1025(int iParam0, float fParam1, int iParam2) // Position - 0x1EA52 Hash - 0xB327C991 ^0xFEB529B
{
	if (iParam2 == 2)
		iParam2 = func_995(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_1026(int iParam0, int iParam1, int iParam2) // Position - 0x1EAA4 Hash - 0x7E1E307C ^0x5642EBD7
{
	if (iParam2 == 2)
		iParam2 = func_995(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_1027(int iParam0) // Position - 0x1EAFA Hash - 0x56C0B35E ^0x56C0B35E
{
	int num;

	num = func_987(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

int func_1028(int iParam0) // Position - 0x1EB21 Hash - 0x37C30FDA ^0x37C30FDA
{
	int num;

	num = func_987(iParam0, 1);

	if (func_1027(iParam0))
		return num - 2;
	else if (func_1045(iParam0))
		return num - 130;
	else if (func_1046(iParam0))
		return num - 166;
	else if (func_1047(iParam0))
		return num - 167;
	else if (func_1048(iParam0))
		return num - 172;
	else if (func_1049(iParam0))
		return num - 180;
	else if (func_1050(iParam0))
		return num - 150;

	return -1;
}

int func_1029(int iParam0, int iParam1) // Position - 0x1EBBB Hash - 0x40BB17AB ^0x40BB17AB
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

BOOL func_1030(int iParam0) // Position - 0x1EFF4 Hash - 0x2139C0B7 ^0x2139C0B7
{
	int num;

	num = func_1029(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_1031(int iParam0) // Position - 0x1F01C Hash - 0x933AEDD5 ^0x6F08395C
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_1051(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_1032(int iParam0) // Position - 0x1F04A Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_1030(iParam0))
		return;

	num = func_1029(iParam0, 1);

	if (!func_1052(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_1053(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_1054(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_1033(int iParam0) // Position - 0x1F229 Hash - 0xD61CC19E ^0xD61CC19E
{
	int num;

	num = func_1034(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_1034(int iParam0, int iParam1) // Position - 0x1F251 Hash - 0x49B3A5C3 ^0x49B3A5C3
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

void func_1035(int iParam0) // Position - 0x1F561 Hash - 0xFC2A3E07 ^0xFD4CE356
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_1056();
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
			func_1055();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_1059(func_1058(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1052(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1052(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1057(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1057(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_228(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1057(iParam0));
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
			func_1060();
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
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1057(iParam0));
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

BOOL func_1036(int iParam0) // Position - 0x1F76F Hash - 0x13096A7F ^0x13096A7F
{
	int num;

	num = func_1037(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_1037(int iParam0, int iParam1) // Position - 0x1F796 Hash - 0xD3D45784 ^0xD3D45784
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

int func_1038(int iParam0) // Position - 0x1F7F3 Hash - 0x76D9051B ^0xE68FE534
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_1061(iParam0);
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
		num3 = func_1002(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_1062(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_1063(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

BOOL func_1039(int iParam0) // Position - 0x1F937 Hash - 0x7B05DC41 ^0x7B05DC41
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

void func_1040(int iParam0) // Position - 0x1F955 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_1030(iParam0))
		return;

	num = func_1029(iParam0, 1);

	if (!func_1052(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_1053(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_1054(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_1041(int iParam0) // Position - 0x1FAAA Hash - 0xF3428E00 ^0xEF734655
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_1064(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_1042(int iParam0) // Position - 0x1FAD2 Hash - 0xE1E3399D ^0xAAA920BB
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
			func_1056();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1055();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_1058(iParam0);
			func_1066(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1052(16);
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
			func_1052(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1057(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1057(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_228(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_1058(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1065(iParam0, 0));
			func_1066(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1065(iParam0, 1));
			func_1066(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1065(iParam0, 2));
			func_1066(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1065(iParam0, 3));
			func_1066(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1057(iParam0));
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
			func_1067();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_1058(iParam0);
			func_1066(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1057(iParam0));
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

void func_1043(int iParam0) // Position - 0x1FD6D Hash - 0x4D7CA01F ^0xE11E9732
{
	char* audioName;
	char* audioRef;

	if (iParam0 == 0)
		return;

	audioName = func_1068(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioName))
		return;

	audioRef = func_1069(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioRef))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(audioName, Global_1295666.f_3, audioRef, false, 0, 0);
	return;
}

int func_1044(int iParam0) // Position - 0x1FDB7 Hash - 0xF103C6A6 ^0xF103C6A6
{
	switch (iParam0)
	{
		case 0:
			return func_985(2) * 2;
	
		case 1:
			return func_989(2) * 2;
	
		case 2:
			return func_991(2) * 2;
	
		default:
		
	}

	return -1;
}

BOOL func_1045(int iParam0) // Position - 0x1FDF8 Hash - 0xCDD61996 ^0xCDD61996
{
	int num;

	num = func_987(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_1046(int iParam0) // Position - 0x1FE20 Hash - 0x5052208B ^0x5052208B
{
	int num;

	num = func_987(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_1047(int iParam0) // Position - 0x1FE48 Hash - 0x7F6CD4C4 ^0x7F6CD4C4
{
	int num;

	num = func_987(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_1048(int iParam0) // Position - 0x1FE70 Hash - 0xD766BF57 ^0xD766BF57
{
	int num;

	num = func_987(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_1049(int iParam0) // Position - 0x1FE98 Hash - 0x58B99E54 ^0x58B99E54
{
	int num;

	num = func_987(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_1050(int iParam0) // Position - 0x1FEC0 Hash - 0xA1A1461E ^0xA1A1461E
{
	int num;

	num = func_987(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

float func_1051(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x1FEE8 Hash - 0xFE4D9153 ^0xACBF575D
{
	var unk;
	float num;

	if (func_1070(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_1052(int iParam0) // Position - 0x1FF1E Hash - 0xCFB57BFC ^0xD6F1E06
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

BOOL func_1053(int iParam0) // Position - 0x1FF8D Hash - 0x3374FEFF ^0x3374FEFF
{
	int num;

	num = func_1054(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_1054(int iParam0, int iParam1) // Position - 0x1FFB4 Hash - 0xA3421C6B ^0xA3421C6B
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

void func_1055() // Position - 0x20012 Hash - 0x8482C9D6 ^0xF644936D
{
	BOOL value;
	BOOL value2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, value);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_919(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			value2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, value2);
	return;
}

void func_1056() // Position - 0x20074 Hash - 0x1EC790D6 ^0xC31DC9FE
{
	BOOL value;

	value = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, value);
	return;
}

char* func_1057(int iParam0) // Position - 0x200A4 Hash - 0xB2E27DFB ^0xF2AB8949
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

int func_1058(int iParam0) // Position - 0x200EA Hash - 0x21FAF347 ^0xA1AE9E4F
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

void func_1059(int iParam0) // Position - 0x20125 Hash - 0x2CE3A2A0 ^0xF0457356
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

void func_1060() // Position - 0x20165 Hash - 0xFDAE0587 ^0x5AB4C733
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

int func_1061(int iParam0) // Position - 0x20185 Hash - 0x7AD8D3DF ^0x2C577CC4
{
	int num;

	if (!func_1036(iParam0))
		return -1;

	num = func_1037(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_1062(int iParam0, int iParam1) // Position - 0x201B4 Hash - 0xB2431B7B ^0xEC29640E
{
	int num;
	Player player;
	int num2;
	int num3;
	var unk;

	if (!func_1013(iParam0))
		return false;

	num = func_1002(iParam0, 1);
	num2 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_1015(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num3 = Global_1156111.f_35859.f_9286[func_1037(num2, 1) /*3*/];
		unk = { func_1063(num3) };
	
		if (num3 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			player = func_1012(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			player = func_1012(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_1071())
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
		
			player = func_1012(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			player = func_1012(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (player != Global_1295666 && !func_1073(Global_1295666.f_149[player]))
				return false;
		
			if (!func_1074(512, player))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_1071() && !func_1072())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_1063(int iParam0) // Position - 0x20489 Hash - 0xCDBF4D5E ^0x8519EC8B
{
	int num;

	num = func_1002(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_1064(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0x204AD Hash - 0xFE4D9153 ^0x67064BE4
{
	var unk;
	BOOL flag;

	if (func_1070(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_1065(int iParam0, int iParam1) // Position - 0x204E3 Hash - 0xF3B9C4C7 ^0xF5E9456F
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

void func_1066(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2053A Hash - 0x4DFFD3F3 ^0xFBF31414
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

void func_1067() // Position - 0x205BF Hash - 0x54572B7C ^0x904B9528
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_1068(int iParam0) // Position - 0x205E4 Hash - 0xB5C0CEE9 ^0xB131A314
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_1069(int iParam0) // Position - 0x20603 Hash - 0xB5C0CEE9 ^0x175D51F7
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_1070(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x20622 Hash - 0xBD123D0 ^0xD5CDFAB
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
		uParam2->f_10.f_3 = func_1075(num2);
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

BOOL func_1071() // Position - 0x20842 Hash - 0x4228A1C2 ^0x4A2C267D
{
	return Global_1572887.f_7;
}

BOOL func_1072() // Position - 0x20850 Hash - 0x7C45C36E ^0x2F146C3F
{
	if (!Global_1048577)
		return false;

	if (!func_213(func_126(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_956(*Global_524288.f_39632))
		return true;

	return false;
}

BOOL func_1073(Player plParam0) // Position - 0x2089B Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_1076(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_1077(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_1074(int iParam0, Player plParam1) // Position - 0x208E0 Hash - 0xAF32F835 ^0x6534FA19
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

int func_1075(int iParam0) // Position - 0x2090C Hash - 0xF3C27EA9 ^0xF3C27EA9
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

BOOL func_1076(Player plParam0) // Position - 0x20942 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_1077(Player plParam0) // Position - 0x2095F Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_1078(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_1079(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_1078(Player plParam0) // Position - 0x209E2 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_1079(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_1079(Player plParam0) // Position - 0x20A4E Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

