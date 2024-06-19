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
	int iLocal_13 = -1;
	var uLocal_14 = -1;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = -1;
	var uLocal_19 = -1;
	var uLocal_20 = 0;
	var uLocal_21 = 255;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = -1;
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
	var uLocal_43 = -1;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 1;
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
	var uLocal_94 = 4;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = -1;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	var uScriptParam_0 = -1;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = -1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 255;
	var uScriptParam_8 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x8E395ABF ^0x78B94756
{
	fLocal_112 = 1f;
	fLocal_113 = 1f;
	func_1();
	func_2(&uScriptParam_0);

	while (!func_3(uScriptParam_0.f_4))
	{
		func_4();
		BUILTIN::WAIT(0);
	}

	func_5();
	func_6();
	return;
}

void func_1() // Position - 0x3A Hash - 0x6565886E ^0x42F3D13D
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	return;
}

void func_2(var uParam0) // Position - 0x50 Hash - 0x332E1346 ^0xDE87DAC3
{
	iLocal_13.f_1 = { *uParam0 };
	func_7();
	iLocal_13.f_14 = { func_8(*uParam0, uParam0->f_2) };
	iLocal_13.f_22 = { func_9(*uParam0, uParam0->f_2) };
	iLocal_13.f_30 = MISC::GET_GAME_TIMER();
	func_10(&iLocal_13);
	return;
}

BOOL func_3(var uParam0, var uParam1) // Position - 0x9B Hash - 0xA9C11B14 ^0xA9C11B14
{
	if (func_11(true, true))
		return true;
	else if (func_12(uParam0, 0, 128))
		return true;
	else if (!func_13())
		return true;
	else if (!func_7())
		return true;
	else if (func_14(iLocal_13, 64))
		return true;
	else if (iLocal_13.f_11 == 0)
		return true;

	return false;
}

void func_4() // Position - 0x105 Hash - 0x954ECB48 ^0x7730393F
{
	switch (iLocal_13.f_10)
	{
		case 0:
			func_15();
			break;
	
		case 1:
			func_16();
			break;
	
		case 2:
			func_17();
			break;
	
		case 3:
			func_18();
			break;
	
		case 4:
			func_19();
			break;
	}

	return;
}

void func_5() // Position - 0x158 Hash - 0x1EFA5861 ^0x891ADF61
{
	func_20();
	func_21(true);
	func_22(iLocal_13, iLocal_13.f_1.f_4, false);
	func_23(iLocal_13.f_1.f_6, iLocal_13.f_1.f_3);
	func_24();
	return;
}

void func_6() // Position - 0x18E Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_7() // Position - 0x19A Hash - 0x38C69493 ^0x89563136
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (func_25(Global_1206497.f_78[i /*20*/].f_7, iLocal_13.f_1.f_4))
		{
			func_26(i);
			return true;
		}
	}

	return false;
}

struct<8> func_8(int iParam0, var uParam1) // Position - 0x1DC Hash - 0xAE6CBB09 ^0x91AC7C0C
{
	var unk;
	var unk9;

	if (func_27(&unk9, iParam0) && func_28(&unk9) && func_29(&unk9, uParam1) && func_30(&unk9))
		func_31(unk9, 37194763, &unk, true);

	return unk;
}

struct<8> func_9(var uParam0, var uParam1) // Position - 0x228 Hash - 0xAD9E293A ^0x45A10C3
{
	var unk;
	var unk9;

	if (func_27(&unk9, uParam0) && func_28(&unk9) && func_29(&unk9, uParam1) && func_30(&unk9))
		func_31(unk9, -1771940760, &unk, false);

	return unk;
}

void func_10(var uParam0) // Position - 0x274 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_11(BOOL bParam0, BOOL bParam1) // Position - 0x27C Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_12(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x35C Hash - 0x72145F00 ^0xE568DB61
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_32(Global_1051268) && !func_25(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_33(iParam2))
		return true;

	if (iParam3 != 0 && func_34(iParam3, 255))
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

	if (func_35())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_32(Global_1051268))
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

BOOL func_13() // Position - 0x485 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x499 Hash - 0x4DB4C8D ^0xF2228486
{
	return func_36(Global_1206497.f_78[iParam0 /*20*/].f_6, iParam1);
}

void func_15() // Position - 0x4B3 Hash - 0x117244DB ^0x6489A764
{
	BOOL flag;

	flag = true;

	if (func_37())
		flag = false;

	if (flag)
	{
		func_38(1);
	}
	else if (iLocal_13.f_30 == -1 || MISC::GET_GAME_TIMER() - iLocal_13.f_30 > Global_1901671.f_319.f_187)
	{
		iLocal_13.f_30 == -1;
		func_38(1);
	}

	return;
}

void func_16() // Position - 0x507 Hash - 0xE880852 ^0xB2C3EA6E
{
	var unk;
	var unk62;
	int num;
	var unk123;

	if (func_14(iLocal_13, 32768))
	{
		unk.f_44 = 4;
		unk.f_52 = -1;
		iLocal_13.f_37 = { unk };
		TEXT_LABEL_ASSIGN_STRING(&(iLocal_13.f_37.f_1), "FME_ALERT_TITLE", 16);
		TEXT_LABEL_ASSIGN_STRING(&(iLocal_13.f_37.f_3), "FME_ALERT_J", 16);
		iLocal_13.f_37.f_43 = 2;
		iLocal_13.f_37.f_44[0] = joaat("IB_OK");
		iLocal_13.f_37.f_44[1] = joaat("INPUT_FRONTEND_CANCEL");
		func_39(&(iLocal_13.f_37), false);
		func_38(4);
	}
	else if (func_14(iLocal_13, 65536))
	{
		unk62.f_44 = 4;
		unk62.f_52 = -1;
		iLocal_13.f_37 = { unk62 };
		TEXT_LABEL_ASSIGN_STRING(&(iLocal_13.f_37.f_1), "FME_ALERT_TITLE", 16);
		TEXT_LABEL_ASSIGN_STRING(&(iLocal_13.f_37.f_3), "FME_ALERT_J_PLS", 16);
		num = func_40();
	
		if (num > 1)
			TEXT_LABEL_ASSIGN_STRING(&(iLocal_13.f_37.f_3), "FME_ALERT_J_PL", 16);
	
		iLocal_13.f_37.f_43 = 2;
		iLocal_13.f_37.f_44[0] = joaat("IB_OK");
		iLocal_13.f_37.f_44[1] = joaat("INPUT_FRONTEND_CANCEL");
		func_39(&(iLocal_13.f_37), false);
		func_38(4);
	}
	else if (func_14(iLocal_13, 131072))
	{
		unk123.f_44 = 4;
		unk123.f_52 = -1;
		iLocal_13.f_37 = { unk123 };
		TEXT_LABEL_ASSIGN_STRING(&(iLocal_13.f_37.f_1), "FME_ALERT_TITLE", 16);
		TEXT_LABEL_ASSIGN_STRING(&(iLocal_13.f_37.f_3), "FME_ALERT_J_NM", 16);
		iLocal_13.f_37.f_43 = 1;
		iLocal_13.f_37.f_44[0] = joaat("IB_OK");
		func_39(&(iLocal_13.f_37), false);
		func_38(4);
	}
	else if (func_14(iLocal_13, 32))
	{
		func_41(2);
		func_42();
		func_38(2);
		return;
	}

	func_43();

	if (iLocal_13.f_11 >= 1)
	{
		func_44();
		func_45();
		func_46(&iLocal_13);
	}
	else
	{
		func_20();
	}

	return;
}

void func_17() // Position - 0x6A9 Hash - 0x6E15D4B1 ^0xD654630E
{
	if (func_14(iLocal_13, 2))
	{
		func_38(3);
		return;
	}

	func_47();

	if (iLocal_13.f_11 == 2)
	{
		if (!func_48(iLocal_13, 128, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
			func_21(false);
		else
			func_21(true);
	
		func_44();
		func_46(&iLocal_13);
	}
	else
	{
		func_21(true);
		func_20();
		func_38(5);
	}

	return;
}

void func_18() // Position - 0x708 Hash - 0xC95AFDA4 ^0x36166CF1
{
	if (func_14(iLocal_13, 4))
	{
		func_21(true);
		func_20();
		func_38(5);
		return;
	}

	func_49();
	func_21(true);

	if (iLocal_13.f_11 == 2)
	{
		func_46(&iLocal_13);
	}
	else
	{
		func_20();
		func_38(5);
	}

	return;
}

void func_19() // Position - 0x74F Hash - 0xA6DB3302 ^0xDC07F051
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	int num5;
	var unk3;

	if (UISTICKYFEED::_UI_STICKY_FEED_GET_MESSAGE_STATE(iLocal_13.f_37) >= 3)
	{
		num = func_50(&(iLocal_13.f_37), joaat("warning_feed"), &(iLocal_13.f_37.f_49), true);
	
		if (func_14(iLocal_13, 32768))
		{
			if (num == 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iLocal_13.f_37);
				iLocal_13.f_37 = 0;
				func_51(iLocal_13, 32768);
				num2 = iLocal_13;
			
				if (num2 != -1)
				{
					num3 = Global_1205938.f_1[num2 /*26*/].f_3;
					unk = { Global_1206497.f_78[num2 /*20*/].f_7 };
					num3 != 0 && func_52(num2, unk, num3);
				}
			
				func_38(1);
			}
			else if (num == 1)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iLocal_13.f_37);
				iLocal_13.f_37 = 0;
				func_51(iLocal_13, 32768);
				func_38(1);
			}
		}
		else if (func_14(iLocal_13, 65536))
		{
			if (num == 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iLocal_13.f_37);
				iLocal_13.f_37 = 0;
				func_51(iLocal_13, 65536);
				num4 = iLocal_13;
			
				if (num4 != -1)
				{
					num5 = Global_1205938.f_1[num4 /*26*/].f_3;
					unk3 = { Global_1206497.f_78[num4 /*20*/].f_7 };
					num5 != 0 && func_52(num4, unk3, num5);
				}
			
				func_38(1);
			}
			else if (num == 1)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iLocal_13.f_37);
				iLocal_13.f_37 = 0;
				func_51(iLocal_13, 65536);
				func_38(1);
			}
		}
		else if (func_14(iLocal_13, 131072))
		{
			if (num == 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iLocal_13.f_37);
				iLocal_13.f_37 = 0;
				func_51(iLocal_13, 131072);
				func_38(1);
			}
		}
	}

	return;
}

void func_20() // Position - 0x8DD Hash - 0x6C24F698 ^0x6C24F698
{
	func_53();
	func_42();
	return;
}

void func_21(BOOL bParam0) // Position - 0x8ED Hash - 0x66BAE896 ^0x8C3E83AA
{
	if (iLocal_13.f_1.f_6 == joaat("standard") || iLocal_13.f_1.f_6 == joaat("themed"))
	{
		if (!bParam0)
		{
			if (!func_54(256))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_33))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
						TASK::_0xFDECCA06E8B81346(Global_33);
					}
					else if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_33, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33), Global_34, 1073741824, 1);
					}
				}
			
				func_55(false);
				func_56(256);
			}
		}
		else if (func_54(256))
		{
			func_55(true);
			func_57(256);
		}
	}

	return;
}

int func_22(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x997 Hash - 0xB44AD942 ^0xB44AD942
{
	Any gangId;

	if (iParam0 == -1)
		return 0;

	if (!func_32(uParam1))
		return 0;

	if (!func_58(uParam1) && !func_59(uParam1))
		return 0;

	if (bParam3 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	
		if (GANG::NETWORK_IS_GANG_ACTIVE(gangId) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(gangId) > 1)
			func_60(true);
	}

	if (func_14(iParam0, 32))
		func_61(uParam1, false, 2, 0, false);
	else
		func_61(uParam1, false, -1, 0, false);

	func_62(iParam0, uParam1);

	if (func_14(iParam0, 64))
		return 0;

	func_63(iParam0, 64);
	return 1;
}

int func_23(int iParam0, int iParam1) // Position - 0xA56 Hash - 0xF12E0C26 ^0x9DE90B7E
{
	if (iParam0 == joaat("posse_versus"))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return 0;

	DECORATOR::DECOR_SET_INT(Global_33, "iFmeLastEventPlayed", iParam1);
	return 1;
}

void func_24() // Position - 0xA89 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_25(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xA91 Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

void func_26(int iParam0) // Position - 0xAAC Hash - 0x74B49122 ^0x74B49122
{
	if (iLocal_13 != iParam0)
		iLocal_13 = iParam0;

	return;
}

BOOL func_27(Any* panParam0, int iParam1) // Position - 0xABF Hash - 0x923307EB ^0xCB9659A0
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206497.f_455))
		return false;

	*panParam0 = Global_1206497.f_455;
	panParam0->f_2 = -1093317127;
	panParam0->f_3 = func_64(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_28(Any* panParam0) // Position - 0xB01 Hash - 0x424BB8C9 ^0x61C1F918
{
	panParam0->f_2 = -310067910;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_29(Any* panParam0, var uParam1) // Position - 0xB1C Hash - 0x5E449B87 ^0x9CEAF780
{
	panParam0->f_2 = -1739269194;
	panParam0->f_3 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_30(Any* panParam0) // Position - 0xB3D Hash - 0x424BB8C9 ^0x5FE3E3E4
{
	panParam0->f_2 = 1701407264;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_31(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, char* sParam6, BOOL bParam7) // Position - 0xB58 Hash - 0x75EEBFEF ^0xA888E94A
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_32(var uParam0, var uParam1) // Position - 0xB7E Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_65(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_66(uParam0))
		return false;

	return true;
}

BOOL func_33(int iParam0) // Position - 0xBB2 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0xBD3 Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

BOOL func_35() // Position - 0xC0F Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_32(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

BOOL func_36(int iParam0, int iParam1) // Position - 0xC67 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_37() // Position - 0xC76 Hash - 0xA3BE243F ^0x24B01457
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

void func_38(int iParam0) // Position - 0xC8B Hash - 0x89313811 ^0x96EFF037
{
	iLocal_13.f_10 = iParam0;
	return;
}

void func_39(var uParam0, BOOL bParam1) // Position - 0xC99 Hash - 0xB4C054A3 ^0xFBE25E6E
{
	char* str;
	var unk19;
	var unk23;
	var unk27;
	var unk31;
	const char* str2;

	*uParam0 = 0;
	_STOPWATCH_RESET(&(uParam0->f_49), false, false);
	unk19 = uParam0->f_44[0];
	unk19.f_3 = uParam0->f_42;
	str.f_3 = { unk19 };

	if (uParam0->f_43 > 1)
	{
		unk23 = uParam0->f_44[1];
		unk23.f_3 = uParam0->f_42;
		str.f_7 = { unk23 };
	
		if (uParam0->f_43 > 2)
		{
			unk27 = uParam0->f_44[2];
			unk27.f_3 = uParam0->f_42;
			str.f_11 = { unk27 };
		
			if (uParam0->f_43 > 3)
			{
				unk31 = uParam0->f_44[3];
				unk31.f_3 = uParam0->f_42;
				str.f_15 = { unk31 };
			}
		}
	}

	str.f_2 = 0;

	if (uParam0->f_41)
	{
		str = "DEATH_FAIL_RESPAWN_SOUNDS";
		str.f_1 = "TITLE_SCREEN_ENTER";
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_5)))
		str2 = MISC::VAR_STRING(10, &(uParam0->f_3), &(uParam0->f_5));
	else
		str2 = func_68(uParam0->f_3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_7)))
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
			if (uParam0->f_39)
				str2 = MISC::VAR_STRING(42, str2, func_69(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")), func_69(&(uParam0->f_23), joaat("COLOR_PURE_WHITE")), uParam0->f_40);
			else
				str2 = MISC::VAR_STRING(42, str2, func_69(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")), func_69(&(uParam0->f_23), joaat("COLOR_PURE_WHITE")));
		else if (uParam0->f_39)
			str2 = MISC::VAR_STRING(10, str2, func_69(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")), uParam0->f_40);
		else
			str2 = MISC::VAR_STRING(10, str2, func_69(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")));
	else if (uParam0->f_39)
		str2 = MISC::VAR_STRING(2, str2, uParam0->f_40);

	if (bParam1)
		*uParam0 = func_70(&str, &(uParam0->f_1), str2, 0, true);
	else
		*uParam0 = func_71(&str, &(uParam0->f_1), str2, 0, 0, true);

	return;
}

int func_40() // Position - 0xE65 Hash - 0x90082423 ^0x7D6410CC
{
	int i;
	int gangMembers;
	int num;
	var memberHandles;
	Player playerFromGamerHandle;

	memberHandles = 7;
	gangMembers = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), &memberHandles);

	for (i = 0; i <= gangMembers - 1; i = i + 1)
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&memberHandles[i /*2*/]);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerFromGamerHandle) || PLAYER::IS_PLAYER_DEAD(playerFromGamerHandle))
		{
		}
		else if (func_72(1048576, playerFromGamerHandle))
		{
			num = num + 1;
		}
	}

	return num;
}

void func_41(int iParam0) // Position - 0xED1 Hash - 0xD7DCD8BA ^0x49743DBC
{
	if (iLocal_13.f_11 != iParam0)
		iLocal_13.f_11 = iParam0;

	return;
}

void func_42() // Position - 0xEE8 Hash - 0xA7412215 ^0x3A35D41A
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iLocal_13.f_36))
		func_73(iLocal_13.f_36);

	return;
}

void func_43() // Position - 0xF03 Hash - 0xDC98095 ^0xA254075E
{
	Any gangId;
	var unk;

	if (!func_74(0, 30))
		return;

	if (func_14(iLocal_13, 256))
	{
		func_41(0);
		return;
	}

	if (!func_32(iLocal_13.f_1.f_4))
	{
		func_41(0);
		func_75(&(iLocal_13.f_32), 4);
	}
	else if (!func_76(iLocal_13.f_1.f_4))
	{
		func_41(0);
		func_75(&(iLocal_13.f_32), 5);
	}
	else if (!func_78(func_77(iLocal_13)))
	{
		func_56(2048);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			return;
	
		gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	
		if (GANG::NETWORK_IS_GANG_ID_VALID(gangId) && GANG::NETWORK_IS_GANG_ACTIVE(gangId) && GANG::_NETWORK_IS_GANG_MEMBER(gangId, PLAYER::PLAYER_ID()))
		{
			func_41(1);
			func_75(&(iLocal_13.f_32), 0);
		}
	}
	else if (!func_79(iLocal_13.f_1.f_4))
	{
		func_41(0);
		func_75(&(iLocal_13.f_32), 6);
	}
	else if (func_80(&iLocal_13))
	{
		func_41(0);
		func_75(&(iLocal_13.f_32), 3);
	}
	else if (!(func_81() == 0))
	{
		func_41(0);
		func_75(&(iLocal_13.f_32), 1);
	}
	else
	{
		if (!func_82(iLocal_13.f_1.f_3))
		{
			func_41(0);
			func_75(&(iLocal_13.f_32), 7);
			return;
		}
	
		func_57(2048);
		unk = { func_83() };
	
		if (func_32(unk))
		{
			if (!func_25(unk, iLocal_13.f_1.f_4))
			{
				func_41(1);
			
				if (func_84() || func_14(iLocal_13, 262144))
					func_75(&(iLocal_13.f_32), 0);
				else
					func_75(&(iLocal_13.f_32), 1);
			}
			else
			{
				func_41(2);
				func_75(&(iLocal_13.f_32), 0);
			}
		}
		else
		{
			func_41(1);
			func_75(&(iLocal_13.f_32), 0);
		}
	}

	return;
}

void func_44() // Position - 0x10D2 Hash - 0xC4762F48 ^0xAA7592C2
{
	var unk;
	Player gangLeader;

	if (!func_85() || !func_86(255))
		return;

	if (!func_14(iLocal_13, 32))
	{
		if (func_54(1) && !func_54(512))
			if (func_87())
				func_56(512);
	
		if (!func_54(1024) && func_54(512) && func_54(1) && func_88(iLocal_13.f_13))
		{
			iLocal_13.f_13 = func_89("FME_HELP_CARGO");
			func_56(1024);
		}
		else if (!func_54(128) && func_54(1) && func_88(iLocal_13.f_13))
		{
			iLocal_13.f_13 = func_89("FME_HELP_RULES");
			func_56(128);
		}
	}
	else if (!func_54(4))
	{
		if (func_54(8))
		{
			if (func_90(iLocal_13.f_13))
			{
				func_53();
				return;
			}
		
			func_57(8);
		}
		else if (func_91())
		{
			func_56(4);
		}
		else if (func_88(iLocal_13.f_13) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			unk = { iLocal_13.f_22 };
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
				unk = { iLocal_13.f_14 };
		
			if (func_54(16) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
			{
				gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			
				if (iLocal_13.f_1 == 1)
					iLocal_13.f_13 = func_89(MISC::VAR_STRING(10, "FME_HELP_OPTED_IN_LEADER_CHALLENGES", func_92(PLAYER::GET_PLAYER_NAME(gangLeader), joaat("COLOR_PURE_WHITE"))));
				else
					iLocal_13.f_13 = func_89(MISC::VAR_STRING(10, "FME_HELP_OPTED_IN_LEADER", func_92(PLAYER::GET_PLAYER_NAME(gangLeader), joaat("COLOR_PURE_WHITE"))));
			
				func_56(4);
			}
			else
			{
				if (iLocal_13.f_1 == 1)
					iLocal_13.f_13 = func_89(MISC::VAR_STRING(10, "FME_HELP_OPTED_IN_CHALLENGES", &unk));
				else
					iLocal_13.f_13 = func_89(MISC::VAR_STRING(10, "FME_HELP_OPTED_IN", &unk));
			
				func_56(4);
			}
		}
	}

	return;
}

void func_45() // Position - 0x12C1 Hash - 0x5256C2BF ^0x5256C2BF
{
	Any gangId;
	Player gangLeader;

	if (!func_54(64) && func_93() != 2)
		func_56(64);

	if (!func_85())
		return;

	if (!func_54(32) && func_54(64))
	{
		if (func_94() && func_25(func_95(), iLocal_13.f_1.f_4) && func_52(iLocal_13, iLocal_13.f_1.f_4, iLocal_13.f_1.f_2))
			func_56(32);
	
		func_42();
		return;
	}

	if (!func_54(16))
	{
		gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	
		if (GANG::NETWORK_IS_GANG_ACTIVE(gangId))
		{
			gangLeader = GANG::NETWORK_GET_GANG_LEADER(gangId);
		
			if (gangLeader != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader) && gangLeader != PLAYER::PLAYER_ID() && !func_96() && func_48(iLocal_13, 64, gangLeader) && func_52(iLocal_13, iLocal_13.f_1.f_4, iLocal_13.f_1.f_2))
			{
				if (func_97(false))
					func_99(func_98(), false);
			
				func_56(16);
				func_42();
				return;
			}
		}
	}

	if (!func_54(1))
	{
		if (iLocal_13.f_11 >= 1 && iLocal_13.f_32 == 0 && !func_100() && !func_54(2048) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) || !GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
		{
			iLocal_13.f_36 = func_101(iLocal_13, iLocal_13.f_1, iLocal_13.f_1.f_2, iLocal_13.f_1.f_4);
		
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iLocal_13.f_36))
			{
				func_102(iLocal_13, iLocal_13.f_1.f_4);
				func_56(1);
			}
		}
	}
	else if (iLocal_13.f_32 == 1 || GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		func_42();
	}

	return;
}

int func_46(var uParam0) // Position - 0x1499 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return 1;
}

void func_47() // Position - 0x14A2 Hash - 0x9B21049E ^0x91908CB3
{
	var unk;

	if (!func_74(0, 15))
		return;

	if (func_14(iLocal_13, 256))
	{
		func_41(0);
		return;
	}
	else if (func_14(iLocal_13, 512) && !func_94())
	{
		func_41(0);
		func_75(&(iLocal_13.f_32), 8);
	}
	else if (func_80(&iLocal_13))
	{
		func_41(0);
		func_75(&(iLocal_13.f_32), 3);
	}
	else
	{
		unk = { func_83() };
	
		if (func_32(unk) && !func_25(unk, iLocal_13.f_1.f_4) && !(func_84() || func_14(iLocal_13, 262144)))
		{
			func_41(0);
			func_75(&(iLocal_13.f_32), 1);
		}
	}

	return;
}

BOOL func_48(int iParam0, int iParam1, Player plParam2) // Position - 0x1565 Hash - 0x8F4D222D ^0x8F4D222D
{
	return func_36(Global_1206166[plParam2 /*10*/][iParam0], iParam1);
}

void func_49() // Position - 0x157F Hash - 0x749C6CBA ^0x5B6ACF46
{
	var unk;

	if (!func_74(0, 15))
		return;

	if (func_14(iLocal_13, 256))
	{
		func_41(0);
		return;
	}
	else if (func_80(&iLocal_13))
	{
		func_41(0);
		func_75(&(iLocal_13.f_32), 3);
	}
	else
	{
		unk = { func_83() };
	
		if (func_32(unk) && !func_25(unk, iLocal_13.f_1.f_4) && !(func_84() || func_14(iLocal_13, 262144)))
		{
			func_41(0);
			func_75(&(iLocal_13.f_32), 1);
		}
	}

	return;
}

int func_50(var uParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x1619 Hash - 0x932A4543 ^0x598331F9
{
	int num;
	BOOL flag;
	int eventData;

	num = -1;
	flag = false;

	if (UIEVENTS::EVENTS_UI_IS_PENDING(hParam1))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hParam1, &eventData))
		{
			if (_STOPWATCH_IS_INITIALIZED(uParam2))
			{
				if (func_104(uParam2, false, false) > 250)
				{
					switch (eventData)
					{
						case -1203660660:
							if (eventData.f_1 == *uParam0)
							{
								if (eventData.f_2 == 2074623703)
								{
									if (bParam3)
										flag = true;
								
									num = 0;
								}
								else if (eventData.f_2 == 1400745903)
								{
									if (bParam3)
										flag = true;
								
									num = 1;
								}
								else if (eventData.f_2 == 444632721)
								{
									if (bParam3)
										flag = true;
								
									num = 2;
								}
							}
							break;
					}
				}
			
				if (eventData.f_1 == *uParam0)
				{
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hParam1);
				
					if (flag)
						UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(*uParam0);
				
					return num;
				}
			}
			else
			{
				_STOPWATCH_RESET(uParam2, false, false);
			}
		}
	}

	return num;
}

void func_51(int iParam0, int iParam1) // Position - 0x16EB Hash - 0x823E3440 ^0xE67DFC91
{
	func_105(&(Global_1206497.f_78[iParam0 /*20*/].f_6), iParam1);
	return;
}

BOOL func_52(int iParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1705 Hash - 0xE07EFEFC ^0xE07EFEFC
{
	var unk;

	if (func_12(uParam1, 0, 128))
	{
		func_107(func_106(uParam1), 8, 25, 255);
		return false;
	}

	func_102(iParam0, uParam1);

	if (iParam0 == -1)
	{
		func_107(func_106(uParam1), 8, 2, 255);
		return false;
	}

	if (Global_1206497.f_78[iParam0 /*20*/].f_3 == -1)
	{
		func_107(func_106(uParam1), 8, 3, 255);
		return false;
	}

	if (func_14(iParam0, 32))
		return true;

	if (!func_32(uParam1))
	{
		func_107(func_106(uParam1), 8, 6, 255);
		return false;
	}
	else if (!func_58(uParam1))
	{
		func_107(func_106(uParam1), 8, 19, 255);
		return false;
	}
	else if (func_59(uParam1))
	{
		func_107(func_106(uParam1), 8, 23, 255);
		return false;
	}

	unk = { func_83() };

	if (func_32(unk) && !func_25(unk, uParam1))
	{
		if (func_84())
		{
			func_63(iParam0, 262144);
			func_108(1);
		}
		else
		{
			func_107(func_106(uParam1), 8, 24, 255);
			return false;
		}
	}

	func_109(uParam1, true, true, true);
	func_110(uParam1, true, 0, -1);
	func_111(2);
	func_112(Global_1206497.f_78[iParam0 /*20*/].f_3, iParam3);
	func_63(iParam0, 32);
	func_113(7);

	if (func_114(Global_1206497.f_78[iParam0 /*20*/].f_3) != joaat("posse_versus"))
	{
		func_115();
		SCRIPTS::_ACTIVATE_GOAL_CONTEXT(joaat("CHAL_CTX_FREE_ROAM_EVENT"));
	}
	else
	{
		SCRIPTS::_ACTIVATE_GOAL_CONTEXT(joaat("CHAL_CTX_POSSE_VERSUS"));
		STATS::_0xE5A680A5D8B1F687(1);
	}

	return true;
}

void func_53() // Position - 0x18B4 Hash - 0x646B2EC9 ^0xCDB53A49
{
	if (func_90(iLocal_13.f_13))
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iLocal_13.f_13, false);

	return;
}

BOOL func_54(int iParam0) // Position - 0x18D0 Hash - 0x64046C13 ^0x914CFAF4
{
	return func_36(iLocal_13.f_12, iParam0);
}

void func_55(BOOL bParam0) // Position - 0x18E2 Hash - 0xAD1429D0 ^0xAD1429D0
{
	if (bParam0)
		Global_1951910.f_1381 = Global_1951910.f_1381 - Global_1951910.f_1381 & 2;
	else
		Global_1951910.f_1381 = Global_1951910.f_1381 | 2;

	func_116(bParam0);
	return;
}

void func_56(int iParam0) // Position - 0x1920 Hash - 0x8FE6792A ^0x8D44AA05
{
	func_117(&(iLocal_13.f_12), iParam0);
	return;
}

void func_57(int iParam0) // Position - 0x1932 Hash - 0x8FE6792A ^0x8D44AA05
{
	func_105(&(iLocal_13.f_12), iParam0);
	return;
}

BOOL func_58(var uParam0, var uParam1) // Position - 0x1944 Hash - 0xA188F144 ^0xA188F144
{
	int num;

	num = func_118(uParam0);
	return num == 1 || num == 2;
}

BOOL func_59(var uParam0, var uParam1) // Position - 0x1964 Hash - 0x37B45816 ^0x37B45816
{
	int num;

	num = func_118(uParam0);
	return num == 3 || num == 4;
}

void func_60(BOOL bParam0) // Position - 0x1984 Hash - 0xE40CA36A ^0xA75018EA
{
	int num;
	Any gangId;

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
	{
		func_119(&(Global_1203952.f_3), 32);
		func_119(&(Global_1203952.f_4), 12);
		Global_1203952.f_478 = num;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			func_119(&(Global_1203952.f_4), 2);
	
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1203952.f_5[5] = 0;
		func_119(&Global_1203952.f_5[5], 1);
	}

	Global_1203952.f_5[3] = 0;
	func_119(&Global_1203952.f_5[3], 1);
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (!GANG::NETWORK_IS_GANG_ID_VALID(gangId))
	{
		func_119(&Global_1203952.f_5[3], 6);
		return;
	}

	if (!GANG::NETWORK_IS_GANG_ACTIVE(gangId))
	{
		func_119(&Global_1203952.f_5[3], 6);
		return;
	}

	GANG::_NETWORK_LEAVE_GANG(bParam0);
	return;
}

void func_61(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1A58 Hash - 0xAC2AF54 ^0xAC2AF54
{
	int num;

	if (!func_32(uParam0))
	{
		!bParam2;
		return;
	}

	if (!func_59(uParam0) && !func_58(uParam0))
	{
		!bParam2;
		return;
	}

	func_120(uParam0) == 0;

	if (iParam3 == 0 || iParam3 == 1 || iParam3 == 4)
		if (func_118(uParam0) == 3)
			func_121(true, -1706799532);
		else if (func_118(uParam0) == 4)
			func_121(false, -1706799532);

	if (func_118(uParam0) == 3 || func_118(uParam0) == 1 || bParam5 && func_118(uParam0) == 4 && STATS::STATSTRACKER_IS_INITIALIZED(func_120(uParam0)))
		if (iParam3 != -1)
			func_122(uParam0, iParam3, iParam4, 255, 0);
		else
			func_122(uParam0, 2, iParam4, 255, 0);

	func_123(uParam0, 0);

	if (func_25(func_124(0), uParam0))
	{
		func_125(true);
		func_126(false);
		func_127(false);
		func_128(true);
	}

	func_129(uParam0);
	Global_1051645.f_45.f_1 = 1;
	num = func_130(uParam0);

	if (num != 2 && num != 7)
		MISC::_0x1096603B519C905F("");

	return;
}

void func_62(int iParam0, var uParam1, var uParam2) // Position - 0x1BC0 Hash - 0x4AE2717E ^0xC02F50C7
{
	var unk;

	unk.f_1 = -1;
	unk.f_1.f_1 = -1;
	func_131(uParam1, &unk);
	func_132(false);
	func_133(1);

	if (func_114(Global_1206497.f_78[iParam0 /*20*/].f_3) == joaat("posse_versus"))
	{
		SCRIPTS::_DEACTIVATE_GOAL_CONTEXT(joaat("CHAL_CTX_POSSE_VERSUS"));
		STATS::_0xE5A680A5D8B1F687(0);
	}
	else
	{
		SCRIPTS::_DEACTIVATE_GOAL_CONTEXT(joaat("CHAL_CTX_FREE_ROAM_EVENT"));
	}

	return;
}

void func_63(int iParam0, int iParam1) // Position - 0x1C20 Hash - 0x823E3440 ^0xE67DFC91
{
	func_117(&(Global_1206497.f_78[iParam0 /*20*/].f_6), iParam1);
	return;
}

int func_64(int iParam0) // Position - 0x1C3A Hash - 0xB8EC44B7 ^0xABFEE883
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

BOOL func_65(int iParam0) // Position - 0x1D55 Hash - 0x5000025C ^0x5000025C
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

int func_66(int iParam0) // Position - 0x1D94 Hash - 0xE34A477A ^0xE34A477A
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

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1E2A Hash - 0x6A4AB354 ^0xB7FEF326
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

const char* func_68(var uParam0, var uParam1) // Position - 0x1E67 Hash - 0x8A636B43 ^0x12C68270
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_69(var uParam0, int iParam1) // Position - 0x1E7B Hash - 0xB0CFF0C3 ^0x84C882B3
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_134(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_70(Any* panParam0, var uParam1, const char* sParam2, int iParam3, BOOL bParam4) // Position - 0x1EB1 Hash - 0x8E4A9690 ^0x23FD6F9E
{
	int num;
	int num2;

	num = iParam3;
	num.f_1 = uParam1;
	num.f_2 = sParam2;
	num2 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_ERROR_MESSAGE(panParam0, &num, bParam4);
	return num2;
}

int func_71(Any* panParam0, var uParam1, const char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1ED7 Hash - 0x491CC71A ^0xBA24D6BA
{
	int num;
	int num2;

	num = iParam4;
	num.f_1 = iParam3;
	num.f_2 = uParam1;
	num.f_3 = sParam2;
	num2 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(panParam0, &num, bParam5);
	return num2;
}

BOOL func_72(int iParam0, Player plParam1) // Position - 0x1F03 Hash - 0xAF32F835 ^0x6534FA19
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

void func_73(Hash hParam0) // Position - 0x1F2F Hash - 0xC24E3D06 ^0xEBE6E2EE
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0))
		return;

	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940252.f_245.f_5, hParam0);
	func_135(hParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hParam0);
	func_136(Global_1940252.f_245.f_1306 - 1);
	return;
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x1F6D Hash - 0x4F4563C5 ^0x8C854DE6
{
	iLocal_13.f_34[iParam0] = iLocal_13.f_34[iParam0] + 1;

	if (iLocal_13.f_34[iParam0] >= iParam1)
	{
		iLocal_13.f_34[iParam0] = 0;
		return true;
	}

	return false;
}

int func_75(var uParam0, int iParam1) // Position - 0x1FA2 Hash - 0x7D63344 ^0x7D63344
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return 1;
	}

	return 0;
}

BOOL func_76(var uParam0, var uParam1) // Position - 0x1FBC Hash - 0x8531A89A ^0x2C81CB96
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(func_106(uParam0));
}

int func_77(int iParam0) // Position - 0x1FD0 Hash - 0x1B04F1B9 ^0xC19760C5
{
	return Global_1205938.f_1[iParam0 /*26*/].f_1;
}

BOOL func_78(int iParam0) // Position - 0x1FE4 Hash - 0xD50A283F ^0xFAB3B4B1
{
	BOOL num;
	int num2;
	int num3;
	int num4;

	if (iParam0 == -1)
	{
		num = 0;
	}
	else
	{
		num4 = Global_1206497.f_1[iParam0 /*4*/];
		num2 = func_137(iParam0);
	
		if (num4 == joaat("themed"))
		{
			num3 = func_139(func_138(iParam0));
		
			if (num3 >= num2)
				num = 1;
		}
		else
		{
			num = 1;
		}
	}

	return num;
}

BOOL func_79(var uParam0, var uParam1) // Position - 0x2034 Hash - 0x8531A89A ^0xC8990837
{
	return UNLOCK::UNLOCK_IS_VISIBLE(func_106(uParam0));
}

BOOL func_80(var uParam0) // Position - 0x2048 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

int func_81() // Position - 0x2051 Hash - 0x4228A1C2 ^0x936D20CA
{
	return Global_1140723.f_24;
}

BOOL func_82(int iParam0) // Position - 0x205F Hash - 0xCD1B656D ^0x2E5E89AB
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(Global_33, "iFmeLastEventPlayed") && DECORATOR::DECOR_GET_INT(Global_33, "iFmeLastEventPlayed") == iParam0)
		return false;

	return true;
}

struct<2> func_83() // Position - 0x209A Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_124(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_124(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_84() // Position - 0x20E5 Hash - 0x9134A391 ^0x9134A391
{
	return func_140() != 0 || func_141(1);
}

BOOL func_85() // Position - 0x20FE Hash - 0x4391CB5A ^0xE260ED49
{
	Player player;

	if (!func_142())
		return false;

	player = func_143();

	if (player == 255)
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_86(int iParam0) // Position - 0x2142 Hash - 0x4B08C8C4 ^0x4B08C8C4
{
	return !func_144(iParam0);
}

BOOL func_87() // Position - 0x2151 Hash - 0x76847538 ^0x52A45450
{
	Ped mountOwnedByPlayer;
	var unk;

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		if (func_145(PLAYER::PLAYER_ID(), false) > 0 || PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, mountOwnedByPlayer, 5, 0) || PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, mountOwnedByPlayer, 6, 0) || PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, mountOwnedByPlayer, 4, 0))
			return true;

	return false;
}

BOOL func_88(int iParam0) // Position - 0x21AF Hash - 0xA200B1D5 ^0xD650E5FD
{
	if (func_146())
		return false;
	else if (func_90(iParam0))
		return false;
	else if (func_144(255))
		return false;
	else if (Global_1048585)
		return false;
	else if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	return true;
}

int func_89(char* sParam0) // Position - 0x2200 Hash - 0x1E241C3B ^0x8FD367F5
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
		return 0;

	return func_147(sParam0, 10000, 0, 0, 0, true);
}

BOOL func_90(int iParam0) // Position - 0x2223 Hash - 0x10B6ADF3 ^0x5434DDBE
{
	int messageState;

	messageState = 6;

	if (func_148(iParam0))
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);

	return messageState != 6;
}

BOOL func_91() // Position - 0x2243 Hash - 0xA5A53F42 ^0x62B332A8
{
	return func_149(Global_1572887.f_8, 1);
}

const char* func_92(const char* sParam0, int iParam1) // Position - 0x2256 Hash - 0x7FAD1594 ^0xF5DA05A0
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);

	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_134(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_93() // Position - 0x2294 Hash - 0x137CA34A ^0x92DE33CF
{
	if (!func_149(Global_1572887.f_196.f_43, 8))
		return 2;

	if (Global_1572887.f_196.f_2 != 4)
		return 1;

	if (Global_1572887.f_196 > 7 && Global_1572887.f_196 < 23)
		return 0;

	return 2;
}

BOOL func_94() // Position - 0x22E0 Hash - 0x89C3DDB ^0xCEF7E29D
{
	return Global_1572887.f_72.f_40 != 1;
}

struct<2> func_95() // Position - 0x22F2 Hash - 0xEB184E4F ^0xCD996B9A
{
	return Global_1572887.f_72.f_11;
}

BOOL func_96() // Position - 0x2304 Hash - 0x37C92B58 ^0x6775BAEB
{
	return Global_1295658.f_2.f_1 == 2 || Global_1295658.f_2.f_1 == 1;
}

BOOL func_97(BOOL bParam0) // Position - 0x2326 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

int func_98() // Position - 0x2356 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20241;
}

void func_99(int iParam0, BOOL bParam1) // Position - 0x2365 Hash - 0x7B4D6095 ^0x327E1986
{
	if (!func_150(iParam0))
		return;

	if (bParam1 && func_151(iParam0, 512) || !bParam1 && !func_151(iParam0, 512))
		return;

	if (bParam1)
		func_152(iParam0, 512);
	else
		func_153(iParam0, 512);

	if (func_154(iParam0))
		INVENTORY::_0x9B4E793B1CB6550A();

	return;
}

BOOL func_100() // Position - 0x23CF Hash - 0xFC573C33 ^0x7E74F79
{
	return func_155(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(6));
}

Hash func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x23E0 Hash - 0xE45890DD ^0x73215ADD
{
	var unk;
	var unk56;
	Player player;

	unk = 1;
	unk.f_1 = 1;
	unk.f_2 = joaat("COLOR_WHITE");
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_10 = -1;
	unk.f_11 = -1;
	unk.f_12 = -1;
	unk.f_18 = joaat("COLOR_WHITE");
	unk.f_19 = joaat("COLOR_WHITE");
	unk.f_25 = 300;
	unk.f_33.f_8 = joaat("COLOR_WHITE");
	unk.f_33.f_11 = joaat("COLOR_WHITE");
	unk.f_33.f_12 = 8000;
	unk.f_33.f_13 = 1511356879;
	unk.f_33.f_15 = joaat("player_menu");
	unk.f_33.f_21 = 1;
	unk56 = { func_8(iParam1, uParam2) };
	unk.f_20 = func_156(iParam1);
	unk.f_21 = func_157(iParam1);
	unk.f_26 = 6;
	unk.f_27 = func_106(uParam3);
	unk.f_25 = 180;

	if (func_114(iParam1) != joaat("posse_versus"))
	{
		unk.f_33.f_2 = MISC::VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE", &unk56);
		unk.f_16 = MISC::VAR_STRING(2, &unk56);
		unk.f_17 = MISC::VAR_STRING(2, "FME_PI_MENU_BODY");
		unk.f_2 = joaat("color_freemode_event");
		unk.f_19 = joaat("color_freemode_event");
	}
	else
	{
		player = Global_1205938.f_1[iParam0 /*26*/].f_7;
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			return 0;
	
		unk.f_33.f_2 = MISC::VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE_POSSE_VERSUS", &unk56);
		unk.f_16 = MISC::VAR_STRING(10, "FME_PI_MENU_TITLE_POSSE_VERSUS", PLAYER::GET_PLAYER_NAME(player));
		unk.f_17 = MISC::VAR_STRING(2, &unk56);
	}

	unk.f_33.f_3 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE_FREE_MODE_EVENT");
	unk.f_33.f_6 = func_156(iParam1);
	unk.f_33.f_7 = func_157(iParam1);
	unk.f_33.f_17 = func_158();
	unk.f_33.f_18 = func_159();
	unk.f_24 = 1;
	return func_160(unk);
}

int func_102(int iParam0, var uParam1, var uParam2) // Position - 0x2598 Hash - 0x1DD7D00F ^0x1DD7D00F
{
	if (iParam0 == -1)
		return 0;

	if (func_14(iParam0, 16))
		return 1;

	if (!func_32(uParam1))
		return 0;
	else if (func_58(uParam1))
		return 0;
	else if (func_59(uParam1))
		return 0;

	func_161(uParam1);
	func_63(iParam0, 16);
	return 1;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x25FF Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

int func_104(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x260B Hash - 0xEE02B32C ^0x2D3DEC18
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		else
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());

	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

void func_105(int iParam0, int iParam1) // Position - 0x2652 Hash - 0xF55E891F ^0xF55E891F
{
	func_162(iParam0, iParam1);
	return;
}

Hash func_106(var uParam0, var uParam1) // Position - 0x2662 Hash - 0x10103901 ^0xC90ADDEF
{
	Hash num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_163(uParam0, &num))
		return num;

	return 0;
}

void func_107(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x268C Hash - 0x9F673585 ^0x14A8C14E
{
	Player player;
	int num;
	int num2;

	if (iParam3 == 255)
		player = PLAYER::PLAYER_ID();

	num2 = func_164(iParam1);
	num = iParam2;
	num2 && num != false;
	TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(hParam0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(player), false, false), num2 || num);
	return;
}

int func_108(int iParam0) // Position - 0x26CE Hash - 0xD86EAF28 ^0xD86EAF28
{
	if (func_165())
		return 0;

	if (!func_84())
		return 0;

	if (func_166())
		func_167(2);
	else
		func_167(1);

	func_168(iParam0);
	return 1;
}

void func_109(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2708 Hash - 0x86D1F170 ^0x86D1F170
{
	int num;
	var unk;

	if (!func_32(uParam0))
		return;

	if (!func_58(uParam0))
		return;

	if (bParam2)
		func_169(uParam0);

	if (!func_32(func_124(0)))
	{
		func_123(uParam0, 3);
		func_125(bParam3);
		func_126(!bParam4);
		func_170(uParam0, -1);
	
		if (bParam2 && !func_171(2))
			func_172(&Global_0, 1024);
	
		func_128(1);
	}
	else
	{
		func_170(uParam0, -1);
		func_123(uParam0, 4);
		func_173(uParam0, false);
	}

	Global_1051645.f_45.f_1 = 1;
	num = func_130(uParam0);

	if (num != 2 && num != 7)
		if (func_174(uParam0, &unk))
			MISC::_0x1096603B519C905F(&(unk.f_17));

	return;
}

int func_110(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x27DF Hash - 0xDDB8C619 ^0xCEB84853
{
	Hash hash;

	if (func_175(uParam0) >= 0)
		return 0;

	hash.f_1 = -1;
	hash.f_1.f_1 = -1;
	hash.f_1 = { uParam0 };
	hash = func_106(uParam0);
	hash.f_3 = iParam3;
	func_176(&hash, bParam2, iParam4);
	return 1;
}

void func_111(int iParam0) // Position - 0x282D Hash - 0x2393251D ^0x114FD32A
{
	if (Global_1203952.f_420 != 2)
		return;

	if (Global_1203952.f_420.f_1 != 0)
		return;

	Global_1203952.f_420.f_1 = iParam0;
	POSSE::_0xC584FF658B2E55DA(iParam0);
	return;
}

void func_112(int iParam0, var uParam1) // Position - 0x2864 Hash - 0xF63C6FF0 ^0x72D1C5D5
{
	int num;
	int num2;

	num = func_114(iParam0);

	if (num == joaat("posse_versus"))
		func_178(func_177(joaat("ATTEMPTS"), joaat("posse_versus")), 1);
	else
		func_178(func_177(joaat("ATTEMPTS"), joaat("fme")), 1);

	if (func_179(iParam0, uParam1, &num2))
		func_178(func_177(joaat("ATTEMPTS"), num2), 1);

	return;
}

void func_113(int iParam0) // Position - 0x28C4 Hash - 0x585CE456 ^0xD1BA98E4
{
	int num;
	int num2;

	if (Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5 || Global_1900412.f_1 == 3)
		return;

	num = 0;

	if (func_180() != -1)
		num = 1;

	num2 = func_181(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = num;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = num2;

	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
		func_182(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	else if (Global_1900412.f_11 != -1)
		func_182(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);

	return;
}

int func_114(int iParam0) // Position - 0x2987 Hash - 0x220835E3 ^0xD3CA642C
{
	if (iParam0 == -1)
		return 0;

	return Global_1206497.f_1[iParam0 /*4*/];
}

void func_115() // Position - 0x29A3 Hash - 0x1A8828D5 ^0x83828F6D
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		if (func_72(1048576, PLAYER::PLAYER_ID()) || Global_1295658.f_2.f_1 == 2)
			func_183();

	if (LAW::GET_WANTED_SCORE(Global_1295666.f_5) > 0)
	{
		if (func_184())
			func_185();
	
		func_186();
	}

	return;
}

void func_116(BOOL bParam0) // Position - 0x29F6 Hash - 0x70EE66C ^0xCDE04474
{
	Global_1940085.f_19 = !bParam0;
	return;
}

void func_117(int iParam0, int iParam1) // Position - 0x2A07 Hash - 0xF55E891F ^0xF55E891F
{
	func_187(iParam0, iParam1);
	return;
}

int func_118(var uParam0, var uParam1) // Position - 0x2A17 Hash - 0xA6DDAF91 ^0xF19E68CE
{
	int num;

	if (!func_32(uParam0))
		return -1;

	num = func_188(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

void func_119(int iParam0, int iParam1) // Position - 0x2A52 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Hash func_120(var uParam0, var uParam1) // Position - 0x2A63 Hash - 0x39F26DE7 ^0x39F26DE7
{
	return func_106(uParam0);
}

int func_121(BOOL bParam0, int iParam1) // Position - 0x2A73 Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_189())
		return 0;

	if (!func_13())
		return 0;

	Global_0 = iParam1;

	if (bParam0)
		func_172(&Global_0, 8);

	func_172(&Global_0, 1);
	return 1;
}

void func_122(var uParam0, var uParam1, int iParam2, int iParam3, Player plParam4, int iParam5) // Position - 0x2AC9 Hash - 0xFA04F275 ^0x89B2B63E
{
	int deedType;
	Hash deedHash;
	int data;
	char* contentId;

	deedType = func_190(func_130(uParam0));
	deedHash = func_120(uParam0);
	contentId = "";
	data.f_1 = iParam3;
	data = 0;
	data.f_2 = 0;

	if (func_180() == 0)
	{
		data = Global_265213.f_122484.f_80.f_12;
		contentId = func_191(Global_265213.f_122484.f_80.f_22);
		func_192(uParam0, &data, iParam2);
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

void func_123(var uParam0, var uParam1, int iParam2) // Position - 0x2B99 Hash - 0xEE2C20F9 ^0xEE2C20F9
{
	if (!func_32(uParam0))
		return;

	if (iParam2 == 0 || iParam2 == -1)
		func_193(uParam0);
	else
		func_194(uParam0, iParam2);

	func_195();
	return;
}

struct<2> func_124(int iParam0) // Position - 0x2BDC Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_125(BOOL bParam0) // Position - 0x2BF0 Hash - 0x5D1342E6 ^0x41116E92
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_196(&Global_1940199, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_197(&Global_1940199, 8388608);
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

void func_126(BOOL bParam0) // Position - 0x2C93 Hash - 0x22D62138 ^0x4A5C4AF7
{
	int i;
	Hash crimeType;
	var unk;

	for (i = 0; i <= 58; i = i + 1)
	{
		crimeType = func_198(i, 1);
	
		if (crimeType == joaat("crime_murder_player") || crimeType == joaat("crime_murder_player_horse") || crimeType == joaat("crime_trample_player"))
		{
		}
		else
		{
			if (bParam0)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_199(unk);
			}
			else
			{
				func_200();
			}
		
			LAW::_0xF611DE44AEB36A1D(crimeType, bParam0);
		}
	}

	return;
}

int func_127(BOOL bParam0) // Position - 0x2D05 Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_201(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_128(BOOL bParam0) // Position - 0x2D32 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1900460 = Global_1900460 || bParam0;
	return;
}

int func_129(var uParam0, var uParam1) // Position - 0x2D45 Hash - 0x6EEEB4AF ^0x6EEEB4AF
{
	return func_203(func_202(uParam0));
}

int func_130(Any anParam0, var uParam1) // Position - 0x2D59 Hash - 0x72C53F65 ^0x72C53F65
{
	return anParam0;
}

int func_131(var uParam0, var uParam1, var uParam2) // Position - 0x2D63 Hash - 0x17A009B8 ^0x17A009B8
{
	int num;

	num = func_175(uParam0);

	if (func_175(uParam0) < 0)
		return 0;

	func_204(num, uParam2);
	return 1;
}

void func_132(BOOL bParam0) // Position - 0x2D8E Hash - 0x7B48571 ^0xD88AE50B
{
	int num;

	if (Global_1900412.f_1 == 0 && !bParam0)
		return;

	num = 0;

	if (func_180() != -1)
		num = 1;

	if (Global_1900412.f_2 == 4 && Global_1900412.f_12 != Global_1900412.f_13 && !bParam0)
	{
		Global_1900412.f_1 = Global_1900412.f_2;
		Global_1900412.f_12 = Global_1900412.f_13;
		func_205(num, Global_1900412.f_12);
	}
	else
	{
		Global_1900412.f_1 = 0;
		Global_1900412.f_7 = num;
		Global_1900412.f_8 = func_206();
		Global_1900412.f_9 = func_181(Global_1893611.f_2);
		Global_1900412.f_11 = func_207(Global_1896646.f_41);
	
		if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
			func_182(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		else if (Global_1900412.f_11 != -1)
			func_182(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
		else
			func_182(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}

	Global_1900412.f_2 = 0;
	return;
}

void func_133(int iParam0) // Position - 0x2EB0 Hash - 0xD292C487 ^0x56F62793
{
	if (Global_1203952.f_420 != 2)
		return;

	if (Global_1203952.f_420.f_1 == 0)
		return;

	Global_1203952.f_420.f_1 = 0;
	POSSE::_0xC684FF658B2E55DA(iParam0);
	return;
}

const char* func_134(const char* sParam0, int iParam1) // Position - 0x2EE6 Hash - 0x9E99F03 ^0x84B9E964
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_135(Hash hParam0) // Position - 0x2F00 Hash - 0x87385CBF ^0x5933D7D7
{
	int feedMessage;

	feedMessage = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(95));

	if (func_148(feedMessage))
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, true);

	return;
}

void func_136(int iParam0) // Position - 0x2F29 Hash - 0xA39B24D5 ^0x7EB85553
{
	Global_1940252.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940252.f_245.f_1306), 0));
	return;
}

int func_137(int iParam0) // Position - 0x2F5A Hash - 0x4E91B2BC ^0xD6E9DCF5
{
	if (iParam0 == -1)
		return 0;

	return Global_1206497.f_1[iParam0 /*4*/].f_3;
}

int func_138(int iParam0) // Position - 0x2F78 Hash - 0x9B33B12F ^0x9B33B12F
{
	int num;

	switch (iParam0)
	{
		case 8:
		case 9:
			num = 7;
			break;
	
		case 10:
			num = 11;
			break;
	
		case 11:
		case 12:
			num = 12;
			break;
	
		case 13:
		case 14:
			num = 18;
			break;
	
		default:
			num = 0;
			break;
	}

	return num;
}

int func_139(int iParam0) // Position - 0x2FD5 Hash - 0xBCD92AB4 ^0xBCD92AB4
{
	int num;

	if (!func_209(iParam0))
		return 0;

	num = func_210(iParam0);

	if (num != -1)
		return num;
	else
		return func_211(iParam0, true);

	return 0;
}

int func_140() // Position - 0x300C Hash - 0x4228A1C2 ^0x6C90BC6E
{
	return Global_1300387.f_150;
}

BOOL func_141(int iParam0) // Position - 0x301A Hash - 0x4C0C4814 ^0x6A6FE668
{
	return Global_1300387.f_288.f_2 && iParam0 != false;
}

BOOL func_142() // Position - 0x3030 Hash - 0x2C6DE8F6 ^0xBF042FB1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

Player func_143() // Position - 0x304C Hash - 0x34E6ABCF ^0xF3026AAC
{
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[4]) || !SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[4], false) || !NETWORK::_NETWORK_IS_THREAD_ACTIVE(Global_1051645.f_16[4]))
		return 255;

	return NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[4]);
}

BOOL func_144(int iParam0) // Position - 0x30A0 Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_212(1, iParam0);
}

int func_145(Player plParam0, BOOL bParam1) // Position - 0x30AF Hash - 0x3F7AD65E ^0x63BC394F
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return func_213(false);

	player = plParam0;

	if (player < 0 || player >= 32)
		return func_213(false);

	return func_214(player, bParam1);
}

BOOL func_146() // Position - 0x30EF Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

int func_147(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x310F Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_148(int iParam0) // Position - 0x314A Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

BOOL func_149(int iParam0, int iParam1) // Position - 0x3156 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_150(int iParam0) // Position - 0x3165 Hash - 0xDFD519AF ^0xDFD519AF
{
	return iParam0 > -1 && iParam0 < 40;
}

BOOL func_151(int iParam0, int iParam1) // Position - 0x317B Hash - 0x462E2E01 ^0x6D8EE304
{
	if (!func_150(iParam0))
		return false;

	if (func_180() == -1)
		return Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1 != false;
	else
		return Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1 != false;

	return false;
}

void func_152(int iParam0, int iParam1) // Position - 0x31C6 Hash - 0xF30343A ^0x652CD5E3
{
	if (!func_150(iParam0))
		return;

	if (func_180() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 || iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1;

	return;
}

void func_153(int iParam0, int iParam1) // Position - 0x321E Hash - 0x6F4899EB ^0x5624A2EB
{
	if (!func_150(iParam0))
		return;

	if (func_180() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 - Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;

	return;
}

BOOL func_154(int iParam0) // Position - 0x3291 Hash - 0xEFF1F628 ^0xEFF1F628
{
	if (func_215())
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

BOOL func_155(int iParam0) // Position - 0x32B1 Hash - 0x531420D5 ^0x3A11B780
{
	int messageState;

	if (func_148(iParam0))
	{
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return messageState == 4 || messageState == 0 || messageState == 3 || messageState == 5 || messageState == 2;
	}

	return false;
}

int func_156(int iParam0) // Position - 0x32FA Hash - 0x3D53BAB6 ^0x8B12357B
{
	int num;
	var unk;

	num = joaat("toast_fme");

	if (func_27(&unk, iParam0) && func_30(&unk))
		func_216(unk, -1641329203, &num, false);

	return num;
}

var func_157(int iParam0) // Position - 0x3332 Hash - 0xF367EBD4 ^0x29160A13
{
	var unk;
	var unk2;

	if (func_27(&unk2, iParam0) && func_30(&unk2))
		func_216(unk2, -1268019774, &unk, false);

	return unk;
}

char* func_158() // Position - 0x3363 Hash - 0x306ACA3A ^0xF0AA6699
{
	return "HUD_Toast_Soundset";
}

char* func_159() // Position - 0x336F Hash - 0x306ACA3A ^0x2A3E877F
{
	return "Toast_On";
}

Hash func_160(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54) // Position - 0x337B Hash - 0x925DAB99 ^0x88DCBD8E
{
	int num;
	int cloudTimeAsInt;
	Hash hash;
	var unk;
	var buffer;
	BOOL flag;
	Hash hash2;
	int num2;

	num = func_217();
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	hash = cloudTimeAsInt + uParam0.f_25;
	MISC::_INT_TO_STRING(cloudTimeAsInt, "%i", &buffer);
	Global_1940252.f_245.f_1308 = Global_1940252.f_245.f_1308 + 1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "Invite_Root_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, &buffer, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_INT(&unk, Global_1940252.f_245.f_1308, 64);
	func_218(&Global_1940252.f_245.f_14[num /*43*/], Global_1940252.f_245.f_4, unk, uParam0);
	Global_1940252.f_245.f_14[num /*43*/].f_39 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(88), Global_1940252.f_245.f_1308);
	Global_1940252.f_245.f_14[num /*43*/].f_41 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(89), true);
	Global_1940252.f_245.f_14[num /*43*/].f_42 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(90), false);
	Global_1940252.f_245.f_14[num /*43*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(78), uParam0.f_32);

	if (uParam0.f_32)
	{
		Global_1940252.f_245.f_14[num /*43*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(76), uParam0.f_31);
		Global_1940252.f_245.f_14[num /*43*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(79), uParam0.f_30);
	}

	Global_1940252.f_245.f_14[num /*43*/].f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(91), uParam0.f_26);
	flag = false;
	Global_1940252.f_245.f_14[num /*43*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940252.f_245.f_14[num /*43*/], 707094655, flag);
	Global_1940252.f_245.f_14[num /*43*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(53), uParam0.f_27);
	Global_1940252.f_245.f_14[num /*43*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(54), uParam0.f_27.f_1);
	Global_1940252.f_245.f_14[num /*43*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(92), uParam0.f_27.f_2);
	Global_1940252.f_245.f_14[num /*43*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(93), hash);
	Global_1940252.f_245.f_14[num /*43*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(94), uParam0.f_24);
	func_136(Global_1940252.f_245.f_1306 + 1);

	if (Global_1940252.f_245.f_1308 == 2147483647)
		Global_1940252.f_245.f_1308 = 0;

	if (func_219(uParam0.f_26))
	{
		uParam0.f_33 = 5;
		uParam0.f_33.f_1 = 1;
		uParam0.f_33.f_13 = 778915895;
		uParam0.f_33.f_14 = Global_1940252.f_245.f_14[num /*43*/];
		hash2 = func_220(&(uParam0.f_33));
		Global_1940252.f_245.f_14[num /*43*/].f_40 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940252.f_245.f_14[num /*43*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(95), hash2);
	}

	num2 = func_221();

	if (num2 == 0 || uParam0.f_24 == num2)
	{
		Global_1940252.f_245.f_1307 = Global_1940252.f_245.f_1307 + 1;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940252.f_245.f_5, 0, "pm_invite_item", Global_1940252.f_245.f_14[num /*43*/]);
	}

	return Global_1940252.f_245.f_14[num /*43*/];
}

int func_161(var uParam0, var uParam1) // Position - 0x36F2 Hash - 0xCB3E635A ^0xCB3E635A
{
	int num;
	int num2;
	var unk;

	if (Global_1900530 == 15)
		return -1;

	if (!func_222(uParam0))
		return -1;

	num2 = func_223(uParam0);

	if (num2 >= 0)
	{
		func_224(uParam0, true);
		return num2;
	}
	else
	{
		num = Global_1900530;
		Global_1900531[num /*2*/] = { uParam0 };
		Global_1900562[num /*2*/] = { unk };
		func_224(uParam0, true);
		Global_1900530 = Global_1900530 + 1;
	
		if (Global_1900530 > 15)
			Global_1900530 = 15;
	
		return num;
	}

	return -1;
}

void func_162(var uParam0, int iParam1) // Position - 0x3782 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_163(int iParam0, var uParam1, Any* panParam2) // Position - 0x3797 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_32(iParam0))
		return false;

	func_225(panParam2);

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

int func_164(int iParam0) // Position - 0x38A2 Hash - 0xC02FF737 ^0x133962DF
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

BOOL func_165() // Position - 0x3931 Hash - 0xD116F016 ^0xD116F016
{
	return func_226() != 0;
}

BOOL func_166() // Position - 0x393F Hash - 0xCE34D390 ^0x5F61379
{
	int threadId;

	threadId = func_227();

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		return false;

	return SCRIPTS::IS_THREAD_ACTIVE(threadId, false);
}

void func_167(int iParam0) // Position - 0x3962 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1300387.f_288 = iParam0;
	return;
}

void func_168(int iParam0) // Position - 0x3973 Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1300387.f_288.f_1 = iParam0;
	return;
}

void func_169(var uParam0, var uParam1) // Position - 0x3986 Hash - 0x6C75D286 ^0x9E265045
{
	Hash linkID;
	var unk;

	if (func_120(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_120(uParam0)))
	{
	}
	else
	{
		linkID = func_120(uParam0);
		STATS::STATSTRACKER_DEED_STARTED(linkID, Global_265213.f_122484.f_80.f_12);
		TELEMETRY::_0x6F5BC5C4EAB42B15(linkID, 2, &(Global_265213.f_122484.f_80.f_22));
	
		if (func_174(uParam0, &unk))
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

int func_170(var uParam0, var uParam1, int iParam2) // Position - 0x3A2F Hash - 0x7D7A3F0A ^0x699D1139
{
	int num;

	num = func_202(uParam0);

	if (num >= 0)
		return num;

	if (Global_1900460.f_66 >= 32)
		return -1;

	num = Global_1900460.f_66;
	func_228(uParam0, num);
	Global_1900460.f_66 = Global_1900460.f_66 + 1;

	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
		return num;

	func_229(num, iParam2);
	return iParam2;
}

BOOL func_171(int iParam0) // Position - 0x3AA0 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

void func_172(int iParam0, int iParam1) // Position - 0x3AB3 Hash - 0x53A96DDB ^0xB6A79257
{
	iParam0->f_2 = iParam0->f_2 || iParam1;
	return;
}

int func_173(var uParam0, var uParam1, BOOL bParam2) // Position - 0x3AC6 Hash - 0xF9CF757 ^0xF9CF757
{
	int num;

	if (!func_32(uParam0))
		return 0;

	num = func_202(uParam0);

	if (num < 0)
		return 0;

	if (!func_230(uParam0, func_124(0), bParam2))
	{
		func_123(func_124(0), 3);
		func_123(func_124(num), 4);
		return 0;
	}

	func_229(num, 0);
	func_123(func_124(0), 3);
	func_123(func_124(1), 4);
	return 1;
}

BOOL func_174(int iParam0, var uParam1, var uParam2) // Position - 0x3B3A Hash - 0xAA374E32 ^0x1E15A248
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;
	func_163(iParam0, &unk);

	if (func_231(iParam0, unk, uParam2))
		return true;

	return false;
}

int func_175(var uParam0, var uParam1) // Position - 0x3B6E Hash - 0x434C0FF6 ^0x921423DE
{
	int i;

	if (Global_1205804.f_129 <= 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1205804.f_129; i = i + 1)
	{
		if (func_25(Global_1205804[i /*4*/].f_1, uParam0))
			return i;
	}

	return -1;
}

void func_176(var uParam0, BOOL bParam1, int iParam2) // Position - 0x3BBB Hash - 0x461BFBC7 ^0x2692B01B
{
	func_232(uParam0, iParam2);

	if (Global_1205804.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}

	if (bParam1)
		func_233(func_175(uParam0->f_1));
	else
		func_234();

	return;
}

struct<2> func_177(int iParam0, int iParam1) // Position - 0x3BF5 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_178(var uParam0, var uParam1, int iParam2) // Position - 0x3C0B Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_179(int iParam0, var uParam1, var uParam2) // Position - 0x3C28 Hash - 0xA77DA1A4 ^0xFC755933
{
	var unk;
	var unk6;

	if (func_27(&unk, iParam0) && func_28(&unk) && func_29(&unk, uParam1))
	{
		if (func_216(unk, 915697271, &unk6, true))
		{
			*uParam2 = unk6;
			return true;
		}
	}

	return false;
}

int func_180() // Position - 0x3C70 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

int func_181(int iParam0) // Position - 0x3C7E Hash - 0x6761E6A0 ^0x6761E6A0
{
	switch (iParam0)
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
	
		case 30:
			return 27;
	
		case 31:
			return 29;
	
		case 32:
			return 30;
	
		case 33:
			return 31;
	
		case 35:
			return 35;
	
		case 37:
			return 42;
	
		case 38:
			return 43;
	
		case 39:
			return 47;
	
		case 40:
			return 48;
	
		case 41:
			return 49;
	
		case 42:
			return 50;
	
		case 44:
			return 52;
	
		case 45:
			return 54;
	
		case 47:
			return 57;
	
		case 51:
			return 61;
	
		case 52:
			return 28;
	
		case 53:
			return 51;
	
		case 55:
			return 53;
	
		case 60:
			return 63;
	
		case 62:
			return 64;
	
		case 63:
			return 65;
	
		case 64:
			return 66;
	
		case 65:
			return 67;
	
		case 66:
			return 68;
	
		case 67:
			return 71;
	
		case 69:
			return 73;
	
		case 70:
			return 74;
	
		case 72:
			return 76;
	
		case 73:
			return 78;
	
		case 74:
			return 79;
	
		case 75:
			return 80;
	
		case 76:
			return 81;
	
		case 77:
			return 82;
	
		case 80:
			return 84;
	
		case 81:
			return 85;
	
		case 82:
			return 72;
	
		case 83:
			return 87;
	
		case 84:
			return 88;
	
		case 85:
			return 90;
	
		case 86:
			return 91;
	
		case 87:
			return 92;
	
		case 88:
			return 40;
	
		case 92:
			return 96;
	
		case 93:
			return 97;
	
		case 94:
			return 44;
	
		case 98:
			return 99;
	
		case 99:
			return 100;
	
		case 100:
			return 101;
	
		case 101:
			return 102;
	
		case 102:
			return 103;
	
		case 103:
			return 104;
	
		case 104:
			return 105;
	
		case 105:
			return 106;
	
		case 106:
			return 107;
	
		case 110:
			return 114;
	
		case 111:
			return 115;
	
		case 113:
			return 118;
	
		case 115:
			return 119;
	
		case 116:
			return 120;
	
		case 117:
			return 121;
	
		case 118:
			return 122;
	
		case 121:
			return 46;
	
		case 123:
			return 86;
	
		case 127:
			return 32;
	
		case 131:
			return 33;
	
		case 132:
			return 34;
	
		case 135:
			return 69;
	
		case 136:
			return 70;
	
		case 139:
			return 123;
	
		default:
		
	}

	return 0;
}

void func_182(var uParam0, var uParam1, int iParam2) // Position - 0x4089 Hash - 0xD64E984D ^0x9D3A2521
{
	var unk;

	unk = uParam0;
	unk.f_1 = uParam1;
	unk.f_2 = iParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &unk, 3, 3);
	return;
}

void func_183() // Position - 0x40AA Hash - 0xF0AC94A3 ^0xF04FCE6
{
	int num;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_5))
		return;

	num = func_235();

	if (num > 0)
		func_236(-1228177771, num, 0);

	return;
}

BOOL func_184() // Position - 0x40DF Hash - 0xA66BE6CC ^0x68004575
{
	return func_237(Global_1295666.f_5, true, false, true) && func_238() > 0;
}

void func_185() // Position - 0x40FF Hash - 0x66B9F4C2 ^0x8FD2FA73
{
	int num;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_5))
		return;

	num = func_238();

	if (num > 0)
		func_239(num, 0, -142743235, false);

	return;
}

void func_186() // Position - 0x4135 Hash - 0xCF61D544 ^0x9112831C
{
	Player player;

	player = PLAYER::PLAYER_ID();
	LAW::CLEAR_WANTED_SCORE(player);
	func_240();
	return;
}

void func_187(var uParam0, int iParam1) // Position - 0x414D Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_188(var uParam0, var uParam1) // Position - 0x415E Hash - 0x2B1F0751 ^0xFAA335B4
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

	if (!func_163(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_163(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_189() // Position - 0x4205 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

int func_190(int iParam0) // Position - 0x4214 Hash - 0xF10AB031 ^0x99A2B2C1
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

char* func_191(var uParam0, var uParam1, var uParam2) // Position - 0x4287 Hash - 0xE300744B ^0x46E4843E
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_192(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x429B Hash - 0x96F9C981 ^0x71D39102
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

	switch (func_130(uParam0))
	{
		case 4:
			num3 = func_242(func_241(uParam0));
		
			if (num3 == -1 && iParam3 == 2 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_main_offline")) == 0)
			{
				for (j = 0; j <= 112; j = j + 1)
				{
					if (func_243(j) == func_241(uParam0))
					{
						num3 = j;
						break;
					}
				}
			}
		
			num4 = func_244(num3);
		
			if (!func_245(num4, 0))
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

int func_193(var uParam0, var uParam1) // Position - 0x43AD Hash - 0xBD58DDB3 ^0xBD58DDB3
{
	int num;

	num = func_188(uParam0);

	if (num < 0)
		return 0;

	return func_246(num);
}

int func_194(var uParam0, var uParam1, int iParam2) // Position - 0x43CF Hash - 0xBFD2BCAE ^0x459D438
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

	if (!func_163(uParam0, &unk))
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
		func_163(Global_1072759.f_19487.f_1[num /*3*/], &unk4);
	
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
			func_247(num);
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

void func_195() // Position - 0x453E Hash - 0x78106AC5 ^0x65F3CC03
{
	int num;
	var unk;

	num = 0;
	unk.f_1 = -1;
	unk.f_2 = -1;

	while (num < Global_1072759.f_19487)
	{
		func_163(Global_1072759.f_19487.f_1[num /*3*/], &unk);
		num = num + 1;
	}

	return;
}

void func_196(int iParam0, int iParam1) // Position - 0x4585 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_197(int iParam0, int iParam1) // Position - 0x459A Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Hash func_198(int iParam0, int iParam1) // Position - 0x45AB Hash - 0xE1D12727 ^0xE8936757
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

void func_199(var uParam0, var uParam1, var uParam2) // Position - 0x4900 Hash - 0x3608481D ^0x5B5E60FC
{
	Global_1939102.f_75.f_67 = { uParam0 };
	return;
}

void func_200() // Position - 0x4916 Hash - 0x5F14D1DE ^0xC90D036D
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1939102.f_75.f_67), "", 24);
	return;
}

BOOL func_201(int iParam0) // Position - 0x492C Hash - 0x319C5EC2 ^0xB18B248
{
	int num;
	int num2;
	int offset;

	num = func_248(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_249(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_250(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

int func_202(var uParam0, var uParam1) // Position - 0x49AB Hash - 0xFF65B6AA ^0xB94EF0F6
{
	int i;

	if (!func_32(uParam0))
		return -1;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (func_25(Global_1900460.f_1[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

int func_203(int iParam0) // Position - 0x49F6 Hash - 0x30DA06D5 ^0x3666A687
{
	if (iParam0 < 0)
		return 0;

	if (Global_1900460.f_66 == 0)
		return 0;

	if (Global_1900460.f_66 == 1)
	{
		Global_1900460.f_66 = 0;
		func_251(&Global_1900460.f_1[0 /*2*/]);
		return 1;
	}

	func_251(&Global_1900460.f_1[iParam0 /*2*/]);
	Global_1900460.f_66 = Global_1900460.f_66 - 1;
	func_229(iParam0, Global_1900460.f_66);
	return 1;
}

void func_204(int iParam0, var uParam1) // Position - 0x4A61 Hash - 0x3DDD4B1D ^0x436DFC09
{
	func_252(uParam1, iParam0);

	if (Global_1205804.f_129 > 0)
		if (Global_1205804.f_130 == iParam0)
			func_233(0);

	func_234();
	return;
}

void func_205(int iParam0, var uParam1) // Position - 0x4A8F Hash - 0x86BC6E12 ^0x31271D44
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &num, 2, 2);
	return;
}

int func_206() // Position - 0x4AAA Hash - 0xD5B66211 ^0x9B76C225
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

int func_207(int iParam0) // Position - 0x4B0F Hash - 0x5932BEAF ^0x5932BEAF
{
	switch (iParam0)
	{
		case 0:
			return 170;
	
		case 1:
			return 171;
	
		case 2:
			return 172;
	
		case 3:
			return 173;
	
		case 4:
			return 174;
	
		case 5:
			return 175;
	
		case 6:
			return 175;
	
		case 7:
			return 175;
	
		case 8:
			return 176;
	
		case 9:
			return 177;
	
		case 10:
			return 178;
	
		case 11:
			return 179;
	
		case 12:
			return 180;
	
		case 13:
			return 181;
	
		case 14:
			return 182;
	
		case 15:
			return 183;
	
		case 16:
			return 184;
	
		default:
		
	}

	return -1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x4BDB Hash - 0xA17D549C ^0xF5C9EDDE
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

BOOL func_209(int iParam0) // Position - 0x50E9 Hash - 0xEDE8ECF3 ^0xEDE8ECF3
{
	if (iParam0 < 0 || iParam0 > 36)
		return false;

	return true;
}

int func_210(int iParam0) // Position - 0x5108 Hash - 0xC3A4C269 ^0xC3A4C269
{
	if (!func_209(iParam0))
		return 0;

	return Global_1292143.f_3024[iParam0];
}

int func_211(int iParam0, BOOL bParam1) // Position - 0x5129 Hash - 0xAE8B7FA5 ^0xAE8B7FA5
{
	Hash hash;
	int xp;

	if (!func_209(iParam0))
		return 0;

	if (bParam1)
	{
		hash = func_253(iParam0);
	
		if (func_254(hash, 0))
		{
			if (iParam0 == 0)
				xp = func_255(255);
			else
				xp = func_257(hash, func_256(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
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
		hash = func_258(iParam0);
	
		if (func_254(hash, 0))
		{
			if (iParam0 == 0)
				xp = NETWORK::_NETWORK_GET_XP();
			else
				xp = func_257(hash, func_256(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
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

BOOL func_212(int iParam0, int iParam1) // Position - 0x51E8 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_259(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_260())
		return func_259(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_259(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

int func_213(BOOL bParam0) // Position - 0x525C Hash - 0x929DFA50 ^0x5A58BCD2
{
	return bParam0 ? Global_1901671.f_701.f_30 : Global_1901671.f_701.f_29;
}

int func_214(Player plParam0, BOOL bParam1) // Position - 0x527C Hash - 0x5A8EAA13 ^0xC5357BF7
{
	return bParam1 ? Global_1289643[plParam0 /*19*/].f_1 : Global_1289643[plParam0 /*19*/];
}

BOOL func_215() // Position - 0x529C Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1915656.f_20637 || Global_1915656.f_22504.f_1;
}

BOOL func_216(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x52BA Hash - 0x6EB69AE6 ^0xE9AB1EC1
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

int func_217() // Position - 0x52EA Hash - 0x9C910EC0 ^0xEBE1C524
{
	int i;
	int num;
	Hash hash;
	int num2;

	num = Global_1295666.f_16;

	for (i = 0; i < 30; i = i + 1)
	{
		hash = { Global_1940252.f_245.f_14[i /*43*/] };
		num2 = DATABINDING::DATABINDING_READ_INT(hash.f_29);
	
		if (num2 < num)
		{
			if (func_262(hash))
				func_73(hash);
		
			return i;
		}
	}

	return func_263();
}

void func_218(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33) // Position - 0x534D Hash - 0xC23EB35E ^0xC7A54AB3
{
	func_264(hParam0, hParam1, uParam2, uParam10);
	hParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(15), uParam10.f_16);
	hParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(17), uParam10.f_17);
	hParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(3), uParam10.f_18);
	hParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(4), uParam10.f_19);
	hParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(5), uParam10.f_20);
	hParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(6), uParam10.f_21);
	hParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(98), uParam10.f_22);
	hParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(99), uParam10.f_23);
	hParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(100), uParam10.f_23);
	return;
}

BOOL func_219(var uParam0) // Position - 0x5420 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

Hash func_220(var uParam0) // Position - 0x5429 Hash - 0x50876869 ^0x5DFBFB88
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
		return func_265(func_69(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_69(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true, uParam0->f_4, uParam0->f_21);
	else if (*uParam0 == 6)
		return func_266(func_69(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_69(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	else if (*uParam0 == 1)
		return func_267(func_69(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_69(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 3)
		return func_268(func_69(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_69(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 2)
		return func_269(func_69(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_69(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);
	else if (*uParam0 == 4)
		return func_270(func_69(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_69(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	else if (*uParam0 == 0)
		return func_271(func_69(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_69(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, true, true);

	return 0;
}

int func_221() // Position - 0x570B Hash - 0x7110E747 ^0xF55ECA94
{
	return Global_1940252.f_245.f_1305;
}

BOOL func_222(var uParam0, var uParam1) // Position - 0x571C Hash - 0x1D4F04C9 ^0x1D4F04C9
{
	return func_118(uParam0) == 0;
}

int func_223(var uParam0, var uParam1) // Position - 0x572E Hash - 0x3BE504D9 ^0x3BE504D9
{
	int i;

	if (Global_1900530 <= 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1900530 - 1; i = i + 1)
	{
		if (func_25(Global_1900531[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

void func_224(var uParam0, var uParam1, BOOL bParam2) // Position - 0x5777 Hash - 0xB3DEB41D ^0xB3DEB41D
{
	if (!func_32(uParam0))
		return;

	if (!func_222(uParam0))
		return;

	if (bParam2)
		func_272(uParam0);

	func_123(uParam0, 1);
	bParam2 = bParam2;
	return;
}

void func_225(Any* panParam0) // Position - 0x57B7 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

int func_226() // Position - 0x57CD Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1300387.f_288;
}

int func_227() // Position - 0x57DC Hash - 0xA1DBD1D9 ^0xC3DF6C9C
{
	return Global_1300387.f_150.f_4;
}

void func_228(var uParam0, var uParam1, int iParam2) // Position - 0x57EC Hash - 0x7E1BB651 ^0x229D30AA
{
	if (!func_32(uParam0))
		func_251(&Global_1900460.f_1[iParam2 /*2*/]);
	else
		Global_1900460.f_1[iParam2 /*2*/] = { uParam0 };

	func_110(uParam0, false, 1, -1);
	return;
}

void func_229(int iParam0, int iParam1) // Position - 0x582D Hash - 0x6861752C ^0x6861752C
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_273(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_273(i, i + 1);
		}
	}

	if (func_32(Global_1900460.f_1[0 /*2*/]))
		func_123(Global_1900460.f_1[0 /*2*/], 3);

	return;
}

BOOL func_230(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x58A7 Hash - 0x9B50566E ^0x9B50566E
{
	int num;
	int num2;

	if (!func_32(uParam0))
		return false;

	if (!func_32(uParam2))
		return true;

	num = func_130(uParam0);
	num2 = func_130(uParam2);

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

BOOL func_231(int iParam0, var uParam1, var uParam2) // Position - 0x59AE Hash - 0x75EF2F01 ^0x75EF2F01
{
	var unk;

	if (!func_274(iParam0))
		return false;

	if (func_275(iParam0, uParam1, &unk))
		func_276(iParam0, &unk, uParam2);
	else
		return false;

	return true;
}

void func_232(var uParam0, int iParam1) // Position - 0x59E3 Hash - 0xCDD685CE ^0x375661B6
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

void func_233(int iParam0) // Position - 0x5AB7 Hash - 0xE5C19B38 ^0xAE10C8B0
{
	if (iParam0 < 0 || iParam0 >= Global_1205804.f_129)
		return;

	Global_1205804.f_130 = iParam0;
	Global_1205804.f_131 = Global_1205804[iParam0 /*4*/];
	return;
}

void func_234() // Position - 0x5AEE Hash - 0x2915DC5D ^0x242F350
{
	if (Global_1205804.f_131 == 0)
		return;

	Global_1205804.f_130 = func_277(Global_1205804.f_131);

	if (Global_1205804.f_130 < 0)
		Global_1205804.f_131 = 0;

	return;
}

int func_235() // Position - 0x5B24 Hash - 0xCA627376 ^0x15175F09
{
	int cashBalance;

	cashBalance = Global_1295658.f_2.f_4;

	if (!func_278(cashBalance))
		cashBalance = MONEY::_NETWORK_GET_CASH_BALANCE();

	return cashBalance;
}

int func_236(int iParam0, int iParam1, int iParam2) // Position - 0x5B48 Hash - 0xF6C4251C ^0xF6C4251C
{
	return func_279(iParam0, iParam1, iParam2);
}

BOOL func_237(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5B5A Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_280(bParam1, bParam2, bParam3);

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

int func_238() // Position - 0x5C8F Hash - 0xCD448963 ^0x82B71A91
{
	int cashBalance;

	cashBalance = func_281(120839576, 59806960, true, false, true, 0);

	if (!func_278(cashBalance))
		cashBalance = MONEY::_NETWORK_GET_CASH_BALANCE();

	return cashBalance;
}

int func_239(int iParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x5CBD Hash - 0x269D15B1 ^0x92B12EEC
{
	int num;
	var unk;
	var unk6;
	var unk23;

	num = -1;
	unk = { func_282(joaat("currency_cash"), true, 0) };
	unk6 = { func_283(joaat("currency_cash"), unk, unk.f_4, iParam0, true) };
	unk6.f_12 = iParam2;
	num = func_284(joaat("use"), &unk6, bParam3);

	if (num == -1)
	{
	}
	else
	{
		unk23.f_7 = -142743235;
		unk23.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk23.f_12), sParam1, 32);
		func_285(num, unk23);
	}

	return num;
}

void func_240() // Position - 0x5D36 Hash - 0x975142F2 ^0x77EE5EFF
{
	int i;

	VOLUME::_0x748C5F51A18CB8F0(false);

	for (i = 0; i < 6; i = i + 1)
	{
		if (func_286(i))
			func_287(i);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

int func_241(var uParam0, var uParam1) // Position - 0x5D69 Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_163(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_242(int iParam0) // Position - 0x5D95 Hash - 0x7569022C ^0xD5B8EAC7
{
	int num;
	int num2;

	num = -1;

	if (func_288(&num2, iParam0))
		num = func_289() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_243(int iParam0) // Position - 0x5DC0 Hash - 0x2A0C2E1D ^0x2A0C2E1D
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/];
}

int func_244(int iParam0) // Position - 0x5DDA Hash - 0x83E9D265 ^0xBE06DE0D
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/].f_2;
}

BOOL func_245(int iParam0, BOOL bParam1) // Position - 0x5DF6 Hash - 0x5364EDB8 ^0x5364EDB8
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

int func_246(int iParam0) // Position - 0x5E5E Hash - 0x6790D007 ^0xC928B5CD
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

int func_247(int iParam0) // Position - 0x5EFF Hash - 0x878FD84 ^0x34564BD6
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

int func_248(int iParam0, int iParam1) // Position - 0x5F93 Hash - 0xC0F3E3A4 ^0x6F5CEED
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

BOOL func_249(int iParam0) // Position - 0x7838 Hash - 0xA3250C27 ^0x2A3A4993
{
	int num;

	num = func_290(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_250(int iParam0) // Position - 0x7855 Hash - 0xAD766E45 ^0x511834A9
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

void func_251(var uParam0) // Position - 0x786C Hash - 0xA48990DD ^0x470FECFD
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	return;
}

void func_252(var uParam0, int iParam1) // Position - 0x787D Hash - 0x481DF64B ^0xD54B3EFE
{
	var unk;
	int num;
	int i;

	if (Global_1205804.f_129 <= 0)
	{
		Global_1205804.f_129 = 0;
		return;
	}

	if (iParam1 >= Global_1205804.f_129)
		iParam1 = 0;

	if (iParam1 >= 32)
		iParam1 = Global_1205804.f_129 - 1;

	unk.f_1 = -1;
	unk.f_1.f_1 = -1;

	if (Global_1205804.f_129 == 1)
	{
		*uParam0 = { Global_1205804[0 /*4*/] };
		Global_1205804[0 /*4*/] = { unk };
		Global_1205804.f_129 = 0;
		return;
	}

	*uParam0 = { Global_1205804[iParam1 /*4*/] };
	Global_1205804.f_129 = Global_1205804.f_129 - 1;
	num = Global_1205804.f_129 - 1;

	for (i = iParam1; i <= num; i = i + 1)
	{
		Global_1205804[i /*4*/] = { Global_1205804[i + 1 /*4*/] };
		Global_1205804[i + 1 /*4*/] = { unk };
	}

	return;
}

Hash func_253(int iParam0) // Position - 0x7957 Hash - 0xB8EC44B7 ^0xFD8B1C5A
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

BOOL func_254(Hash hParam0, int iParam1) // Position - 0x7AF0 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_255(int iParam0) // Position - 0x7B0A Hash - 0xFBE6ACAA ^0xC8FB295B
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		return NETWORK::_NETWORK_GET_RANK();

	return Global_1155150[iParam0 /*30*/];
}

struct<4> func_256(BOOL bParam0) // Position - 0x7B36 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_291(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_293(joaat("character"), func_292(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_293(joaat("character"), func_292(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_293(joaat("character"), func_292(), joaat("SLOTID_NONE"), bParam0);
}

int func_257(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x7BD6 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_254(hParam0, 0))
		return 0;

	if (!bParam7 && func_294(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_293(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_291(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_291(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

Hash func_258(int iParam0) // Position - 0x7C55 Hash - 0xB8EC44B7 ^0xFB7D0806
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

BOOL func_259(var uParam0, int iParam1, int iParam2) // Position - 0x7DEE Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_260() // Position - 0x7E25 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

var func_261(BOOL bParam0, var uParam1, var uParam2) // Position - 0x7E34 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_262(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42) // Position - 0x7E4B Hash - 0x53309B3D ^0xBF91226C
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0.f_41))
		return DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0);

	return DATABINDING::_DATABINDING_READ_DATA_BOOL(hParam0.f_41);
}

int func_263() // Position - 0x7E70 Hash - 0x3A8B31A ^0x7513145F
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	num4 = DATABINDING::DATABINDING_READ_INT(Global_1940252.f_245.f_14[0 /*43*/].f_29);
	num5 = DATABINDING::DATABINDING_READ_INT(Global_1940252.f_245.f_14[0 /*43*/].f_39);

	for (i = 0; i < 30; i = i + 1)
	{
		num = DATABINDING::DATABINDING_READ_INT(Global_1940252.f_245.f_14[i /*43*/].f_29);
		num2 = DATABINDING::DATABINDING_READ_INT(Global_1940252.f_245.f_14[i /*43*/].f_39);
	
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

	func_73(Global_1940252.f_245.f_14[num3 /*43*/]);
	return num3;
}

void func_264(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25) // Position - 0x7F1B Hash - 0x281BEE62 ^0xC04633BE
{
	*hParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, &uParam2);
	hParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0), bParam10);
	hParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1), bParam10.f_1);
	hParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2), bParam10.f_2);
	hParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(57), bParam10.f_3);
	hParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(58), bParam10.f_4);
	hParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(60), bParam10.f_5);
	hParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(59), bParam10.f_6);

	if (bParam10.f_7 == 0)
		bParam10.f_7 = joaat("IB_SELECT");

	hParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(61), bParam10.f_7);
	hParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(62), "");
	hParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(63), bParam10.f_8);
	hParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(64), bParam10.f_9);
	hParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(65), bParam10.f_10);
	hParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(71), bParam10.f_11);
	hParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(66), bParam10.f_12);

	if (bParam10.f_13 == 0)
		bParam10.f_13 = joaat("IB_SELECT");

	hParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(68), bParam10.f_13);
	hParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(69), bParam10.f_14);
	hParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(70), bParam10.f_15);
	return;
}

int func_265(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14, var uParam15, var uParam16) // Position - 0x80B1 Hash - 0xB09C796D ^0x553C8588
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

int func_266(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19) // Position - 0x813E Hash - 0x4A9388DC ^0x75B98721
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

int func_267(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x81DD Hash - 0x51CE9407 ^0x19439D00
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

int func_268(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16) // Position - 0x8259 Hash - 0xA374F5D ^0x1F00546A
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

int func_269(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, BOOL bParam13, BOOL bParam14) // Position - 0x82E7 Hash - 0xFAE6004A ^0xD53CD0F0
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

int func_270(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14) // Position - 0x8369 Hash - 0xFAE6004A ^0xD53CD0F0
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

int func_271(const char* sParam0, const char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x83E6 Hash - 0xB88D7AA5 ^0x36259347
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

void func_272(var uParam0, var uParam1) // Position - 0x844C Hash - 0xFD26CFB9 ^0xD8D48326
{
	if (func_120(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_120(uParam0)))
	{
		STATS::_0x99230691875FC218(func_130(uParam0), func_120(uParam0), Global_34);
	}

	return;
}

void func_273(int iParam0, int iParam1) // Position - 0x848F Hash - 0x3FC44C33 ^0xD65D7FEF
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { unk };
	return;
}

BOOL func_274(int iParam0) // Position - 0x84DC Hash - 0x5000025C ^0x5000025C
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

BOOL func_275(int iParam0, var uParam1, Any* panParam2) // Position - 0x851B Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_295(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_276(int iParam0, Any* panParam1, var uParam2) // Position - 0x854F Hash - 0x981137AC ^0xCACA1309
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_296(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_297(num);
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
			uParam2->f_5 = func_298(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_299(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_300(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_301(num);
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

int func_277(int iParam0) // Position - 0x87AA Hash - 0x4D89B0D4 ^0xEE7F90D0
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

BOOL func_278(int iParam0) // Position - 0x87ED Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_180() == 0)
		return func_302(iParam0);

	return iParam0 <= func_303();
}

int func_279(int iParam0, int iParam1, int iParam2) // Position - 0x881A Hash - 0x8AD15179 ^0x71EB25CF
{
	int num;
	int i;
	int num2;

	if (Global_1235687.f_9085.f_97 >= 10)
		return -1;

	if (iParam0 == 1393257577)
	{
		num = Global_1235687.f_9085.f_99;
	
		for (i = Global_1235687.f_9085.f_97; i > 0; i = i - 1)
		{
			num = num - 1;
		
			if (num < 0)
				num = 9;
		
			if (Global_1235687.f_9085.f_16[num /*8*/] == iParam0)
				return -1;
		}
	}

	num2 = Global_1235687.f_9085.f_99;
	Global_1235687.f_9085.f_16[num2 /*8*/] = iParam0;
	Global_1235687.f_9085.f_16[num2 /*8*/].f_5 = iParam2;
	Global_1235687.f_9085.f_16[num2 /*8*/].f_6 = iParam1;
	Global_1235687.f_9085.f_97 = Global_1235687.f_9085.f_97 + 1;
	Global_1235687.f_9085.f_99 = (Global_1235687.f_9085.f_99 + 1) % 10;
	return num2;
}

BOOL func_280(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x88F2 Hash - 0xC9655EC3 ^0xE7BDB885
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

// Unhandled jump detected. Output should be considered invalid
int func_281(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x8990 Hash - 0x8D867191 ^0xF02772A4
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_304(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_305(hParam0) || func_306(hParam0, 1077060302))
		return func_308(func_307(hParam0, false), hParam1, bParam3, true);

	if (!func_309(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

struct<5> func_282(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x8A80 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_256(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_310(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_317(hParam0, -1823706425))
			{
				unk = { func_293(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_317(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_293(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_293(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_317(hParam0, -1653629781))
			{
				unk = { func_293(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_315(bParam1) };
		
			switch (func_316(hParam0))
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
			unk = { func_293(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_311(bParam1) };
		
			if (iParam2 && func_312(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_313(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_313(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_314(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_318(unk, &unk28, bParam1, false, -1))
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
			else if (func_317(hParam0, -1653629781))
			{
				unk = { func_293(1384535894, unk, 1784584921, bParam1) };
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

struct<17> func_283(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, BOOL bParam7) // Position - 0x8DF4 Hash - 0x442F1CC9 ^0x744DB9CB
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_4 = { uParam1 };
	unk = { func_293(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;

	if (bParam7)
	{
		unk.f_15 = func_294(hParam0, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_292() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

int func_284(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x8E6E Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_319(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_321(func_320(num, hParam0, panParam1), num, panParam1);
	else
		return func_322(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_285(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x8ED8 Hash - 0x4EE39F09 ^0x4C62B7DF
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

BOOL func_286(int iParam0) // Position - 0x8F56 Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

void func_287(int iParam0) // Position - 0x8F6B Hash - 0xE1F6E7F0 ^0xF6BF71B1
{
	int i;
	int j;

	VOLUME::_0x748C5F51A18CB8F0(false);

	if (!func_286(iParam0))
		return;

	func_323(iParam0, false);

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_324(i))
		{
			if (func_326(func_325(i, true, true)) == iParam0)
			{
				func_327(i, false);
				func_328(i, false, 350);
			}
		}
	}

	for (j = 0; j < 17; j = j + 1)
	{
		if (func_329(j))
			if (func_330(j) == iParam0)
				func_331(j, false);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

BOOL func_288(Any* panParam0, int iParam1) // Position - 0x8FFD Hash - 0x34992178 ^0x98B18966
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_289() // Position - 0x9034 Hash - 0x33EB0DBC ^0xEC692AA0
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

int func_290(int iParam0) // Position - 0x906C Hash - 0x3620388 ^0x3620388
{
	return func_332(iParam0) + 30;
}

int func_291(BOOL bParam0) // Position - 0x907C Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_180() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_292() // Position - 0x90BD Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

struct<4> func_293(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x90C9 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_254(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_291(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_294(Hash hParam0, Hash hParam1) // Position - 0x90FA Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_334(func_333(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_295(int iParam0) // Position - 0x9126 Hash - 0x5FB59AC3 ^0xE293EFF
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

int func_296(int iParam0, var uParam1) // Position - 0x929B Hash - 0xAFA3D25A ^0x653A2CB3
{
	var unk;

	if (func_335(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_297(int iParam0) // Position - 0x92B8 Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_298(int iParam0) // Position - 0x940E Hash - 0xCBE7BE7C ^0xCBE7BE7C
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

int func_299(int iParam0) // Position - 0x9465 Hash - 0x2A2D8996 ^0x2A2D8996
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

int func_300(int iParam0) // Position - 0x953F Hash - 0xAFBAC931 ^0xAFBAC931
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

int func_301(int iParam0) // Position - 0x95D7 Hash - 0xD7A7D6 ^0xD7A7D6
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

BOOL func_302(int iParam0) // Position - 0x9781 Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_303() // Position - 0x97A4 Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_180() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_304(Hash hParam0, Hash hParam1) // Position - 0x97BF Hash - 0xFB5CB038 ^0x83BB35B8
{
	if (!func_254(hParam0, 0))
		return false;

	if (func_305(hParam0) || func_306(hParam0, 1077060302))
		return func_336(func_307(hParam0, false), hParam1, false);

	return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1) > 0;
}

BOOL func_305(Hash hParam0) // Position - 0x980B Hash - 0x672E565C ^0xD531C7FC
{
	if (func_306(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_306(Hash hParam0, Hash hParam1) // Position - 0x9826 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_254(hParam0, 0))
		return func_337(func_333(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_307(Hash hParam0, BOOL bParam1) // Position - 0x9867 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_254(hParam0, 0))
		return func_338(func_333(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

int func_308(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x98BF Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_339(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

// Unhandled jump detected. Output should be considered invalid
BOOL func_309(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x9953 Hash - 0x18E9762 ^0x852B384E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_254(hParam0, 0))
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
		func_340(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_310(Hash hParam0) // Position - 0x99E3 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_254(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_311(BOOL bParam0) // Position - 0x9A0E Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_291(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_293(923904168, func_256(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_293(923904168, func_256(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_293(923904168, func_256(bParam0), -740156546, false);
}

int func_312(Hash hParam0, BOOL bParam1) // Position - 0x9AAF Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_316(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_341();
		else
			return 1;

	return 0;
}

BOOL func_313(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x9AE6 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_257(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_314(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x9B01 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_342(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_315(BOOL bParam0) // Position - 0x9B22 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_291(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_293(271701509, func_256(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_293(271701509, func_256(bParam0), 12999093, false);
}

Hash func_316(Hash hParam0) // Position - 0x9B8C Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_254(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_317(Hash hParam0, Hash hParam1) // Position - 0x9BB7 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_316(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_343(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_318(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x9C24 Hash - 0x113CD144 ^0x113CD144
{
	return func_344(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_319(Hash hParam0, Any* panParam1) // Position - 0x9C3A Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_345(panParam1->f_8, hParam0, num, 2048) || func_345(panParam1->f_8, hParam0, num, 32768) || func_345(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_345(panParam1->f_8, hParam0, num, 4) || func_345(panParam1->f_8, hParam0, num, 256) || func_345(panParam1->f_8, hParam0, num, 65536) || func_345(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_345(panParam1->f_8, hParam0, num, 1) || func_345(panParam1->f_8, hParam0, num, 8) || func_345(panParam1->f_8, hParam0, num, 65536) || func_345(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_345(panParam1->f_8, hParam0, num, 1) || func_345(panParam1->f_8, hParam0, num, 16) || func_345(panParam1->f_8, hParam0, num, 2) || func_345(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_345(panParam1->f_8, hParam0, num, 8) || func_345(panParam1->f_8, hParam0, num, 4096) || func_345(panParam1->f_8, hParam0, num, 256) || func_345(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_320(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x9E10 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_321(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x9E27 Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_346(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_346(iParam1, 2, 0, 0);
	return -1;
}

int func_322(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x9E70 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_346(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

void func_323(int iParam0, BOOL bParam1) // Position - 0x9E8C Hash - 0xB1C1C6D6 ^0xB1C1C6D6
{
	int i;

	if (!func_286(iParam0))
		return;

	if (func_347(iParam0, 2) && !bParam1)
		return;

	if (bParam1)
		func_348(iParam0, 1);
	else
		func_349(iParam0, 1);

	func_350(iParam0, bParam1);

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_330(i) == iParam0)
			func_331(i, false);
	}

	return;
}

BOOL func_324(int iParam0) // Position - 0x9EF9 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

int func_325(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9F0F Hash - 0xBE6BED24 ^0x63262B4D
{
	int num;

	switch (iParam0)
	{
		case 3:
			return joaat("LAW_REGION_LAGRAS");
	
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
	
		case 5:
			if (func_180() != -1 && func_352() == joaat("LAW_REGION_SAINT_DENIS_RURAL"))
				return joaat("LAW_REGION_SAINT_DENIS_RURAL");
			else
				return joaat("LAW_REGION_SAINT_DENIS");
			break;
	
		case 22:
			return joaat("LAW_REGION_PRONGHORN_RANCH");
	
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
	
		case 33:
			return joaat("LAW_REGION_SISIKA");
	
		case 37:
			return joaat("LAW_REGION_FORT_WALLACE");
	
		case 39:
			return joaat("LAW_REGION_BEECHERS_HOPE");
	
		case 40:
			if (!bParam1 || func_180() != -1)
				return joaat("LAW_REGION_BLACKWATER");
		
			if (func_353(44))
				return joaat("LAW_REGION_BLACKWATER");
			else
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			break;
	
		case 60:
			if (func_180() != -1)
				return joaat("LAW_REGION_GRIZZLIES");
			else
				return joaat("LAW_REGION_WAPITI");
			break;
	
		case 62:
			return joaat("LAW_REGION_AGUASDULCES");
	
		case 66:
			return joaat("LAW_REGION_MANICATO");
	
		case 70:
			return joaat("LAW_REGION_CORNWALL");
	
		case 74:
			return joaat("LAW_REGION_EMERALD_RANCH");
	
		case 81:
			if (func_351(iParam0))
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			else
				return joaat("LAW_REGION_VALENTINE");
			break;
	
		case 83:
			return joaat("LAW_REGION_ANNESBURG");
	
		case 87:
			if (func_180() != -1)
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			else
				return joaat("LAW_REGION_BUTCHER_CREEK");
			break;
	
		case 98:
			if (func_180() != -1)
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			else
				return joaat("LAW_REGION_VAN_HORN");
			break;
	
		case 99:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
	
		case 101:
			return joaat("LAW_REGION_CALIGA_HALL");
	
		case 111:
			if (func_351(iParam0))
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			else
				return joaat("LAW_REGION_RHODES");
			break;
	
		case 116:
			return joaat("LAW_REGION_MANZANITA_POST");
	
		case 121:
			return joaat("LAW_REGION_TUMBLEWEED");
	
		case 127:
			return joaat("LAW_REGION_ARMADILLO");
	
		case 131:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
	
		case 135:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
	
		case 136:
			if (func_180() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (!bParam1)
				return joaat("LAW_REGION_THIEVES_LANDING");
		
			if (func_353(44))
				return joaat("LAW_REGION_THIEVES_LANDING");
			else
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			break;
	}

	if (bParam2)
	{
		num = func_354(iParam0);
	
		if (num != -1)
			return func_355(num, bParam1);
	}

	return 0;
}

int func_326(int iParam0) // Position - 0xA1DC Hash - 0x4BF152B5 ^0x4BF152B5
{
	switch (iParam0)
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

void func_327(int iParam0, BOOL bParam1) // Position - 0xA33E Hash - 0x97DB0CCE ^0x555EAE6E
{
	BOOL flag;

	if (!func_324(iParam0))
		return;

	flag = func_356(iParam0, 67108864);

	if (bParam1)
	{
		if (!flag)
		{
			func_358(iParam0, func_357());
			func_359(iParam0, 67108864);
		}
	}
	else if (flag)
	{
		func_360(iParam0, 67108864);
		func_358(iParam0, -15);
	}

	func_361(iParam0);
	return;
}

void func_328(int iParam0, BOOL bParam1, int iParam2) // Position - 0xA3A2 Hash - 0x20ACD3AE ^0x6FC0C0FB
{
	Volume volume;
	BOOL flag;
	int num;
	int num2;

	if (!func_324(iParam0))
		return;

	if (func_362(iParam0) && !bParam1)
		return;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_6))
		volume = Global_1887363[iParam0 /*36*/].f_6;
	else
		volume = func_363(iParam0);

	flag = func_356(iParam0, 33554432);

	if (bParam1)
	{
		num = func_364(iParam0);
	
		if (iParam2 > num)
		{
			func_365(iParam0, func_357());
			func_366(iParam0, iParam2);
		}
	
		if (!flag)
		{
			func_359(iParam0, 33554432);
		
			if (VOLUME::DOES_VOLUME_EXIST(volume))
			{
				if (iParam0 == 40)
					num2 = 0;
				else
					num2 = 1;
			
				PATHFIND::_0xF2A2177AC848B3A8(volume, 0, num2);
			}
		}
	}
	else if (flag)
	{
		func_360(iParam0, 33554432);
		func_365(iParam0, -15);
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
			PATHFIND::_0xF2A2177AC848B3A8(volume, 1, 1);
	}

	func_367(iParam0);
	return;
}

BOOL func_329(int iParam0) // Position - 0xA48C Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

int func_330(int iParam0) // Position - 0xA4A2 Hash - 0xA08D7C4E ^0xA08D7C4E
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

void func_331(int iParam0, BOOL bParam1) // Position - 0xA55D Hash - 0xCE05C781 ^0xCE05C781
{
	if (!func_329(iParam0))
		return;

	if (bParam1)
	{
		func_368(iParam0, true);
	}
	else
	{
		if (func_369(iParam0))
			return;
	
		func_370(iParam0, 1);
	}

	func_371(iParam0, bParam1);
	return;
}

int func_332(int iParam0) // Position - 0xA59C Hash - 0x4BF88485 ^0x4BF88485
{
	return iParam0 * 31;
}

Hash func_333(Hash hParam0) // Position - 0xA5A8 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_334(Hash hParam0, int iParam1) // Position - 0xA5B2 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_335(int iParam0, var uParam1, var uParam2) // Position - 0xA5CC Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_372(iParam0, uParam1, &unk))
		func_373(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

BOOL func_336(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xA5F3 Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_374(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_375(hParam0, hParam1);

	return true;
}

BOOL func_337(Hash hParam0, Hash hParam1) // Position - 0xA62B Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_334(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

Hash func_338(Hash hParam0, BOOL bParam1) // Position - 0xA661 Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_334(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_339(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xA69A Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_374(hParam0))
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
		func_376(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

void func_340(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xA729 Hash - 0x7EFAC478 ^0x4E4217E0
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_316(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

int func_341() // Position - 0xA8FF Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_377(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_342(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0xA91C Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_291(false);
	*panParam1 = { func_293(hParam0, func_311(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_343(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0xA961 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_344(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xA994 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_291(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_345(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xA9CE Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_36(iParam2, iParam3))
		return true;

	return false;
}

void func_346(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA9E6 Hash - 0x3169A239 ^0x47E831EC
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

	func_378(iParam0, iParam1, iParam2, iParam3);
	return;
}

BOOL func_347(int iParam0, int iParam1) // Position - 0xAA84 Hash - 0x9AD134EA ^0x3BFBD1FE
{
	if (!func_286(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

void func_348(int iParam0, int iParam1) // Position - 0xAAC9 Hash - 0x8D9EC76 ^0x97F53BE6
{
	if (!func_286(iParam0))
		return;

	!func_347(iParam0, iParam1);

	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_198[iParam0 /*12*/].f_5 = Global_38.f_198[iParam0 /*12*/].f_5 || iParam1;
		return;
	}

	Global_1072759.f_21262[iParam0 /*12*/].f_5 = Global_1072759.f_21262[iParam0 /*12*/].f_5 || iParam1;
	return;
}

void func_349(int iParam0, int iParam1) // Position - 0xAB2D Hash - 0xD1BCFE34 ^0xF65A9FDD
{
	if (!func_286(iParam0))
		return;

	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_198[iParam0 /*12*/].f_5 = Global_38.f_198[iParam0 /*12*/].f_5 - Global_38.f_198[iParam0 /*12*/].f_5 && iParam1;
		return;
	}

	Global_1072759.f_21262[iParam0 /*12*/].f_5 = Global_1072759.f_21262[iParam0 /*12*/].f_5 - Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1;
	return;
}

void func_350(int iParam0, BOOL bParam1) // Position - 0xAB9F Hash - 0x49678002 ^0x49678002
{
	if (!func_286(iParam0))
		return;

	if (bParam1)
		func_380(func_379(iParam0));
	else
		func_381(func_379(iParam0));

	return;
}

BOOL func_351(int iParam0) // Position - 0xABD0 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_324(iParam0))
		return false;

	return func_356(iParam0, 33554432);
}

Hash func_352() // Position - 0xABF1 Hash - 0x4228A1C2 ^0xC94C7CFB
{
	return Global_1939102.f_26;
}

BOOL func_353(int iParam0) // Position - 0xABFF Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_382(iParam0))
		return false;

	return func_383(iParam0);
}

int func_354(int iParam0) // Position - 0xAC1B Hash - 0x4D13899D ^0x4D13899D
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
	else if (iParam0 <= 121)
		return 13;
	else if (iParam0 <= 126)
		return 14;
	else if (iParam0 <= 134)
		return 15;
	else if (iParam0 <= 138)
		return 16;

	return -1;
}

int func_355(int iParam0, BOOL bParam1) // Position - 0xAD17 Hash - 0x57DE22AD ^0x88ABC039
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
			if (!bParam1 || func_180() != -1)
				return joaat("LAW_REGION_GREAT_PLAINS");
		
			if (func_353(44))
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
			if (!bParam1 || func_180() != -1)
				return joaat("LAW_REGION_TALL_TREES");
		
			if (func_353(44))
				return joaat("LAW_REGION_TALL_TREES");
			else
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_180() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (func_353(44))
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			else
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			break;
	}

	return 0;
}

BOOL func_356(int iParam0, BOOL bParam1) // Position - 0xAE91 Hash - 0x34341F7C ^0xD1267D8C
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

int func_357() // Position - 0xAEC2 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_358(int iParam0, int iParam1) // Position - 0xAECE Hash - 0x634DE727 ^0xF18D4CA6
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/].f_2 = iParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/].f_2 = iParam1;
	return;
}

void func_359(int iParam0, BOOL bParam1) // Position - 0xAEFD Hash - 0x85549BC4 ^0xED99428
{
	if (Global_1572887.f_14 == -1)
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] || bParam1;
	else
		Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] || bParam1;

	return;
}

void func_360(int iParam0, BOOL bParam1) // Position - 0xAF3C Hash - 0x5DE9DDE5 ^0xCE0029B2
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] - Global_8130[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] - Global_1072759.f_19611[iParam0 /*11*/] && bParam1;
	return;
}

void func_361(int iParam0) // Position - 0xAF8F Hash - 0x1C686B36 ^0x1C686B36
{
	if (!func_324(iParam0))
		return;

	if (func_384(iParam0))
		func_385(iParam0);
	else
		func_386(iParam0);

	return;
}

BOOL func_362(int iParam0) // Position - 0xAFBC Hash - 0x6430C01F ^0xD1700991
{
	if (!func_324(iParam0))
		return false;

	return func_356(iParam0, 16777216);
}

Volume func_363(int iParam0) // Position - 0xAFDD Hash - 0xE4DA9E55 ^0x19A1F3C2
{
	if (!func_324(iParam0))
		return 0;

	return Global_1887363[iParam0 /*36*/].f_4;
}

int func_364(int iParam0) // Position - 0xAFFD Hash - 0x34D87891 ^0x34D87891
{
	int num;
	int num2;
	int num3;

	if (!func_324(iParam0))
		return 0;

	num = func_387(iParam0);

	if (num == -1)
		return -1;

	num2 = func_389(func_388(iParam0));
	num3 = num - num2;

	if (num3 < 0)
		num3 = 0;

	return num3;
}

void func_365(int iParam0, int iParam1) // Position - 0xB043 Hash - 0x634DE727 ^0x8E10EF0
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/].f_1 = iParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/].f_1 = iParam1;
	return;
}

void func_366(int iParam0, int iParam1) // Position - 0xB072 Hash - 0x3B089601 ^0x668F51A1
{
	if (!func_324(iParam0))
		return;

	if (iParam1 < 0)
		return;

	Global_8130[iParam0 /*11*/].f_3 = iParam1;
	return;
}

void func_367(int iParam0) // Position - 0xB09B Hash - 0x8A2A3F35 ^0x8A2A3F35
{
	if (!func_324(iParam0))
		return;

	if (func_351(iParam0) && func_390(iParam0))
		func_380(func_391(iParam0, false));
	else
		func_381(func_391(iParam0, false));

	return;
}

void func_368(int iParam0, BOOL bParam1) // Position - 0xB0DD Hash - 0xA4B8C237 ^0x29D9E6AC
{
	if (!func_329(iParam0))
		return;

	!func_392(iParam0, bParam1);

	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_271[iParam0] = Global_38.f_271[iParam0] || bParam1;
		return;
	}

	Global_1072759.f_21335[iParam0] = Global_1072759.f_21335[iParam0] || bParam1;
	return;
}

BOOL func_369(int iParam0) // Position - 0xB13B Hash - 0x2DDE6A78 ^0x2DDE6A78
{
	if (!func_329(iParam0))
		return false;

	return func_392(iParam0, 2);
}

void func_370(int iParam0, BOOL bParam1) // Position - 0xB158 Hash - 0x6F253A8 ^0x462A64BF
{
	if (!func_329(iParam0))
		return;

	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_271[iParam0] = Global_38.f_271[iParam0] - Global_38.f_271[iParam0] && bParam1;
		return;
	}

	Global_1072759.f_21335[iParam0] = Global_1072759.f_21335[iParam0] - Global_1072759.f_21335[iParam0] && bParam1;
	return;
}

void func_371(int iParam0, BOOL bParam1) // Position - 0xB1C1 Hash - 0xE581BD06 ^0xE581BD06
{
	Hash hash;

	if (!func_329(iParam0))
		return;

	if (iParam0 == 8)
		return;

	hash = func_393(iParam0);

	if (bParam1)
		func_380(hash);
	else
		func_381(hash);

	return;
}

BOOL func_372(int iParam0, var uParam1, Any* panParam2) // Position - 0xB1FC Hash - 0x8467BB0B ^0x664BC7E5
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_295(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_373(Any* panParam0, int iParam1, var uParam2) // Position - 0xB230 Hash - 0x59F43AD2 ^0xB9A366FE
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

BOOL func_374(Hash hParam0) // Position - 0xB2AA Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

BOOL func_375(Hash hParam0, Hash hParam1) // Position - 0xB2C2 Hash - 0x86D562BB ^0xB258F193
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

void func_376(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xB40B Hash - 0x7EFAC478 ^0x4E4217E0
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_316(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

int func_377(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB5E1 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_394(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_291(bParam1), hParam0, bParam3);
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xB614 Hash - 0xBC161045 ^0xD3B33F74
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

	func_395(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

Hash func_379(int iParam0) // Position - 0xB6F0 Hash - 0xD9CACD5C ^0xC1FF0F4A
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

void func_380(Hash hParam0) // Position - 0xB755 Hash - 0x4E3506A ^0xB6028AA7
{
	Hash styleHash;

	if (func_396(hParam0) == 62)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-1145496915, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1043953850, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1783502982, joaat("BLIP_STYLE_WANTED_REGION"));
	}
	else
	{
		styleHash = joaat("BLIP_STYLE_WANTED_REGION");
	
		if (func_397(hParam0) == 4 || func_397(hParam0) == 12 || func_330(func_397(hParam0)) == 4 || func_392(func_397(hParam0), 8) && func_397(hParam0) == 2 || func_397(hParam0) == 0 || func_397(hParam0) == 10)
			styleHash = joaat("BLIP_STYLE_REGION_LOCKDOWN");
	
		MAP::_MAP_ENABLE_REGION_BLIP(hParam0, styleHash);
	}

	return;
}

void func_381(Hash hParam0) // Position - 0xB813 Hash - 0xA6CC3440 ^0x79E49C16
{
	if (func_396(hParam0) == 62)
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

BOOL func_382(int iParam0) // Position - 0xB869 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_383(int iParam0) // Position - 0xB87C Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

BOOL func_384(int iParam0) // Position - 0xB8A6 Hash - 0x6430C01F ^0x955EC0F3
{
	if (!func_324(iParam0))
		return false;

	return func_356(iParam0, 67108864);
}

void func_385(int iParam0) // Position - 0xB8C7 Hash - 0x23FB4E3F ^0x242B688D
{
	var unk;
	const char* str;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_399(unk);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(str), joaat("BLIP_STYLE_WANTED_REGION"));
	return;
}

void func_386(int iParam0) // Position - 0xB8FB Hash - 0x9B0BA3D ^0x87131FD8
{
	var unk;
	const char* str;
	Hash hashKey;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_399(unk);
	hashKey = MISC::GET_HASH_KEY(str);

	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, joaat("BLIP_STYLE_WANTED_REGION")))
		MAP::_MAP_DISABLE_REGION_BLIP(hashKey);

	return;
}

int func_387(int iParam0) // Position - 0xB94D Hash - 0x43E7FC98 ^0x22D1E5E4
{
	if (!func_324(iParam0))
		return 0;

	if (func_362(iParam0))
		return -1;

	return Global_8130[iParam0 /*11*/].f_3;
}

int func_388(int iParam0) // Position - 0xB97C Hash - 0x88A34323 ^0x18DF89A3
{
	if (!func_324(iParam0))
		return -15;

	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/].f_1;

	return Global_1072759.f_19611[iParam0 /*11*/].f_1;
}

int func_389(int iParam0) // Position - 0xB9B7 Hash - 0x308FE976 ^0xD461FEB6
{
	int value;
	int value2;
	int value3;
	int value4;
	int value5;
	int value6;
	float value7;
	int num;

	if (!func_400(iParam0))
		return 0;

	func_401(iParam0, &value, &value2, &value3, &value4, &value5, &value6);
	value7 = (BUILTIN::TO_FLOAT(value) / 60f) + BUILTIN::TO_FLOAT(value2) + (BUILTIN::TO_FLOAT(value3) * 60f) + (BUILTIN::TO_FLOAT(value4) * 24f * 60f) + (BUILTIN::TO_FLOAT(value5) * 30.4375f * 24f * 60f) + (BUILTIN::TO_FLOAT(value6) * 365.25f * 24f * 60f);
	num = BUILTIN::ROUND(value7);
	return num;
}

BOOL func_390(int iParam0) // Position - 0xBA50 Hash - 0xAFA6364 ^0xAFA6364
{
	if (!func_324(iParam0))
		return 0;

	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return 1;
	}

	return 0;
}

Hash func_391(int iParam0, BOOL bParam1) // Position - 0xBABE Hash - 0xE1D12727 ^0xC0A2F1C4
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

BOOL func_392(int iParam0, BOOL bParam1) // Position - 0xC288 Hash - 0x420CBA68 ^0x9F9619A9
{
	if (!func_329(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && bParam1 != false;

	return Global_1072759.f_21335[iParam0] && bParam1 != false;
}

Hash func_393(int iParam0) // Position - 0xC2CA Hash - 0xB8EC44B7 ^0xCA15B31A
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

BOOL func_394(Hash hParam0) // Position - 0xC3CD Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_395(int iParam0) // Position - 0xC3DB Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_402(&(iParam0->f_4));
	return;
}

int func_396(Hash hParam0) // Position - 0xC3FE Hash - 0xCD57912C ^0xCD57912C
{
	switch (hParam0)
	{
		case joaat("region_rio_fort_mercer"):
			return 124;
	
		case -2085163631:
			return 0;
	
		case joaat("region_bgv_hangingdog"):
			return 16;
	
		case joaat("region_grz_colter"):
			return 45;
	
		case joaat("region_tal_aurora_basin"):
			return 113;
	
		case joaat("region_grz_theloft"):
			return 58;
	
		case joaat("region_grz_tempest_rim"):
			return 51;
	
		case joaat("region_blu_copperhead"):
			return 32;
	
		case joaat("region_bay_lagras"):
			return 3;
	
		case joaat("region_gre_civil_war_bride"):
			return 54;
	
		case joaat("region_bgv_missing_husband"):
			return 18;
	
		case joaat("region_scm_love_triangle"):
			return 109;
	
		case joaat("region_scm_dairy_farm"):
			return 106;
	
		case joaat("region_gua_cincotorres"):
			return 64;
	
		case joaat("region_roa_mossy_flats"):
			return 92;
	
		case joaat("region_roa_butchercreek"):
			return 87;
	
		case joaat("region_bay_siltwaterstrand"):
			return 10;
	
		case joaat("region_hrt_grangers_hoggery"):
			return 75;
	
		case -1573562784:
			return 138;
	
		case joaat("region_roa_brandywine_drop"):
			return 86;
	
		case joaat("region_scm_clemenspoint"):
			return 104;
	
		case joaat("region_cho_rileys_charge"):
			return 130;
	
		case joaat("region_grz_cohutta"):
			return 55;
	
		case joaat("region_tal_trapper"):
			return 119;
	
		case joaat("region_bay_shadybelle"):
			return 9;
	
		case joaat("region_roa_happy_family"):
			return 89;
	
		case joaat("region_hrt_larnedsod"):
			return 77;
	
		case joaat("region_cml_sixpointcabin"):
			return 38;
	
		case joaat("region_rio_benedict_point"):
			return 123;
	
		case joaat("region_bay_serial_killer"):
			return 7;
	
		case joaat("region_tal_cochinay"):
			return 115;
	
		case joaat("region_roa_macleanshouse"):
			return 91;
	
		case joaat("region_scm_slave_pen"):
			return 112;
	
		case joaat("region_grz_wapiti"):
			return 60;
	
		case joaat("region_bgv_pronghorn"):
			return 22;
	
		case joaat("region_bgv_riggs_station"):
			return 23;
	
		case joaat("region_bgv_shack"):
			return 24;
	
		case joaat("region_tal_dead_settler"):
			return 114;
	
		case joaat("region_grz_millesani_claim"):
			return 47;
	
		case joaat("region_roa_rockyseven"):
			return 94;
	
		case joaat("region_roa_doverhill"):
			return 88;
	
		case joaat("region_grz_travelling_salesman"):
			return 61;
	
		case joaat("region_scm_caligahall"):
			return 101;
	
		case joaat("region_scm_rhodes"):
			return 111;
	
		case joaat("region_cho_coots_chapel"):
			return 128;
	
		case joaat("region_scm_bulgerglade"):
			return 100;
	
		case joaat("region_gre_veteran"):
			return 59;
	
		case joaat("region_roa_trapper"):
			return 95;
	
		case joaat("region_grz_gunfight"):
			return 57;
	
		case joaat("region_grz_cotorra_springs"):
			return 56;
	
		case joaat("region_tal_manzanitapost"):
			return 116;
	
		case joaat("region_rio_plain_view"):
			return 125;
	
		case joaat("region_scm_radleys_pasture"):
			return 110;
	
		case joaat("region_grz_mount_hagen_peak"):
			return 49;
	
		case joaat("region_scm_clemenscove"):
			return 103;
	
		case joaat("region_roa_roanoke_valley"):
			return 93;
	
		case joaat("region_bay_orange_plantation"):
			return 6;
	
		case joaat("region_hrt_crop_farm"):
			return 71;
	
		case joaat("region_bgv_watsonscabin"):
			return 30;
	
		case joaat("region_cho_ridgewood_farm"):
			return 131;
	
		case joaat("region_gua_camp"):
			return 63;
	
		case joaat("region_grt_beechers"):
			return 39;
	
		case joaat("region_cho_twin_rocks"):
			return 132;
	
		case joaat("region_gap_gaptooth_breach"):
			return 120;
	
		case joaat("region_grz_starving_children"):
			return 50;
	
		case joaat("region_scm_braithwaitemanor"):
			return 99;
	
		case joaat("region_scm_lonniesshack"):
			return 108;
	
		case joaat("region_bay_crawdadwillies"):
			return 0;
	
		case joaat("region_hrt_downsranch"):
			return 73;
	
		case joaat("region_hrt_valentine"):
			return 81;
	
		case joaat("region_bgv_appleseedtimber"):
			return 11;
	
		case joaat("region_roa_vanhornmansion"):
			return 97;
	
		case joaat("region_grt_quakers_cove"):
			return 41;
	
		case joaat("region_scm_compsons_stead"):
			return 105;
	
		case joaat("region_roa_annesburg"):
			return 83;
	
		case joaat("region_gap_tumbleweed"):
			return 121;
	
		case joaat("region_grz_mountain_man"):
			return 48;
	
		case joaat("region_grz_wintermining_town"):
			return 52;
	
		case joaat("region_cml_bacchusbridge"):
			return 35;
	
		case joaat("region_gua_aguasdulces"):
			return 62;
	
		case joaat("region_bgv_lonemulestead"):
			return 17;
	
		case joaat("region_bgv_fortriggs"):
			return 15;
	
		case joaat("region_bay_merkinswaller"):
			return 2;
	
		case joaat("region_cml_oldfortwallace"):
			return 37;
	
		case joaat("region_roa_black_balsam_rise"):
			return 85;
	
		case joaat("region_bgv_blackboneforest_trapper"):
			return 13;
	
		case joaat("region_roa_beechers_c"):
			return 68;
	
		case joaat("region_roa_old_man_jones"):
			return 96;
	
		case joaat("region_centralunionrr"):
			return 139;
	
		case joaat("region_hen_macfarlanes_ranch"):
			return 135;
	
		case joaat("region_cho_travelling_salesman"):
			return 133;
	
		case joaat("region_bay_saint_denis"):
			return 5;
	
		case joaat("region_scm_horse_shop"):
			return 107;
	
		case joaat("region_blu_sisika"):
			return 33;
	
		case joaat("region_bgv_paintedsky"):
			return 21;
	
		case joaat("region_bgv_valley_view"):
			return 27;
	
		case joaat("region_hrt_loony_cult"):
			return 78;
	
		case joaat("region_grz_frozen_explorer"):
			return 46;
	
		case joaat("region_hen_thieves_landing"):
			return 136;
	
		case joaat("region_tal_pacificunionrr"):
			return 117;
	
		case joaat("region_hrt_abandoned_mill"):
			return 67;
	
		case joaat("region_bay_serendipity"):
			return 8;
	
		case joaat("region_bgv_dakotariver_trapper"):
			return 14;
	
		case joaat("region_roa_isolationist"):
			return 90;
	
		case joaat("region_grz_dead_rival"):
			return 43;
	
		case joaat("region_grz_calumetravine"):
			return 53;
	
		case joaat("region_cml_dino_lady"):
			return 36;
	
		case joaat("region_bgv_wallace_station"):
			return 28;
	
		case joaat("region_roa_beaverhollow"):
			return 84;
	
		case joaat("region_bgv_strawberry"):
			return 26;
	
		case joaat("region_grz_chezporter"):
			return 44;
	
		case joaat("region_blu_canebreak_manor"):
			return 31;
	
		case joaat("region_grz_adlerranch"):
			return 42;
	
		case joaat("region_scm_catfishjacksons"):
			return 102;
	
		case joaat("region_roa_vanhornpost"):
			return 98;
	
		case joaat("region_cho_armadillo"):
			return 127;
	
		case joaat("region_grt_blackwater"):
			return 40;
	
		case joaat("region_bgv_beryls_dream"):
			return 12;
	
		case joaat("region_rio_travelling_salesman"):
			return 126;
	
		case joaat("region_bay_macombs_end"):
			return 1;
	
		case joaat("region_cho_don_julio_house"):
			return 129;
	
		case joaat("region_blu_travelling_salesman"):
			return 34;
	
		case joaat("region_hrt_swansons_station"):
			return 80;
	
		case joaat("region_hen_travelling_salesman"):
			return 137;
	
		case joaat("region_bgv_monto_rest"):
			return 19;
	
		case joaat("region_hrt_cumberlandfalls"):
			return 72;
	
		case joaat("region_hrt_carmodydell"):
			return 69;
	
		case joaat("region_gua_manicato"):
			return 66;
	
		case joaat("region_hrt_emeraldranch"):
			return 74;
	
		case 1869665995:
			return 134;
	
		case joaat("region_bay_lakay"):
			return 4;
	
		case joaat("region_gua_lacapilla"):
			return 65;
	
		case joaat("region_bgv_old_man_jones"):
			return 29;
	
		case joaat("region_bgv_owanjila_dam"):
			return 20;
	
		case joaat("region_hrt_cornwallkerosene"):
			return 70;
	
		case joaat("region_gap_rathskeller_fork"):
			return 122;
	
		case joaat("region_roa_aberdeenpigfarm"):
			return 82;
	
		case joaat("region_hrt_luckyscabin"):
			return 79;
	
		case joaat("region_hrt_horseshoeoverlook"):
			return 76;
	
		case joaat("region_bgv_shepherds_rise"):
			return 25;
	
		case joaat("region_tal_tannersreach"):
			return 118;
	
		default:
		
	}

	return -1;
}

int func_397(Hash hParam0) // Position - 0xCA15 Hash - 0xAFBAC931 ^0xAFBAC931
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0xCAD9 Hash - 0xA17D549C ^0x37A17AE6
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
			return "REGION_BGV_OLD_MAN_JONES";
	
		case 30:
			return "REGION_BGV_WATSONSCABIN";
	
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
	
		case 32:
			return "REGION_BLU_COPPERHEAD";
	
		case 33:
			return "REGION_BLU_SISIKA";
	
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
	
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
	
		case 36:
			return "REGION_CML_DINO_LADY";
	
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
	
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
	
		case 39:
			return "REGION_GRT_BEECHERS";
	
		case 40:
			return "REGION_GRT_BLACKWATER";
	
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
	
		case 42:
			return "REGION_GRZ_ADLERRANCH";
	
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
	
		case 44:
			return "REGION_GRZ_CHEZPORTER";
	
		case 45:
			return "REGION_GRZ_COLTER";
	
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
	
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
	
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
	
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
	
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
	
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
	
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
	
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
	
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
	
		case 55:
			return "REGION_GRZ_COHUTTA";
	
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
	
		case 57:
			return "REGION_GRZ_GUNFIGHT";
	
		case 58:
			return "REGION_GRZ_THELOFT";
	
		case 59:
			return "REGION_GRE_VETERAN";
	
		case 60:
			return "REGION_GRZ_WAPITI";
	
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
	
		case 62:
			return "REGION_GUA_AGUASDULCES";
	
		case 63:
			return "REGION_GUA_CAMP";
	
		case 64:
			return "REGION_GUA_CINCOTORRES";
	
		case 65:
			return "REGION_GUA_LACAPILLA";
	
		case 66:
			return "REGION_GUA_MANICATO";
	
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
	
		case 68:
			return "REGION_ROA_BEECHERS_C";
	
		case 69:
			return "REGION_HRT_CARMODYDELL";
	
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
	
		case 71:
			return "REGION_HRT_CROP_FARM";
	
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
	
		case 73:
			return "REGION_HRT_DOWNSRANCH";
	
		case 74:
			return "REGION_HRT_EMERALDRANCH";
	
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
	
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
	
		case 77:
			return "REGION_HRT_LARNEDSOD";
	
		case 78:
			return "REGION_HRT_LOONY_CULT";
	
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
	
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
	
		case 81:
			return "REGION_HRT_VALENTINE";
	
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
	
		case 83:
			return "REGION_ROA_ANNESBURG";
	
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
	
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
	
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
	
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
	
		case 88:
			return "REGION_ROA_DOVERHILL";
	
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
	
		case 90:
			return "REGION_ROA_ISOLATIONIST";
	
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
	
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
	
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
	
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
	
		case 95:
			return "REGION_ROA_TRAPPER";
	
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
	
		case 97:
			return "REGION_ROA_VANHORNMANSION";
	
		case 98:
			return "REGION_ROA_VANHORNPOST";
	
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
	
		case 100:
			return "REGION_SCM_BULGERGLADE";
	
		case 101:
			return "REGION_SCM_CALIGAHALL";
	
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
	
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
	
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
	
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
	
		case 106:
			return "REGION_SCM_DAIRY_FARM";
	
		case 107:
			return "REGION_SCM_HORSE_SHOP";
	
		case 108:
			return "REGION_SCM_LONNIESSHACK";
	
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
	
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
	
		case 111:
			return "REGION_SCM_RHODES";
	
		case 112:
			return "REGION_SCM_SLAVE_PEN";
	
		case 113:
			return "REGION_TAL_AURORA_BASIN";
	
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
	
		case 115:
			return "REGION_TAL_COCHINAY";
	
		case 116:
			return "REGION_TAL_MANZANITAPOST";
	
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
	
		case 118:
			return "REGION_TAL_TANNERSREACH";
	
		case 119:
			return "REGION_TAL_TRAPPER";
	
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
	
		case 121:
			return "REGION_GAP_TUMBLEWEED";
	
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
	
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
	
		case 124:
			return "REGION_RIO_FORT_MERCER";
	
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
	
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
	
		case 127:
			return "REGION_CHO_ARMADILLO";
	
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
	
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
	
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
	
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
	
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
	
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
	
		case 134:
			return "REGION_CHO_TRAPPER";
	
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
	
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
	
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
	
		case 138:
			return "REGION_HEN_HARRIET";
	
		case 139:
			return "REGION_CENTRALUNIONRR";
	
		default:
		
	}

	return "REGION_INVALID";
}

const char* func_399(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xD220 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_400(int iParam0) // Position - 0xD234 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_403(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_404(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_405(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_406(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_407(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_408(iParam0);

	if (num6 < 1 || num6 > func_409(num5, num4))
		return false;

	return true;
}

void func_401(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xD310 Hash - 0x2BEE335D ^0x2BEE335D
{
	func_410(func_357(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_402(var uParam0) // Position - 0xD32E Hash - 0x58FD8C3D ^0x7E71AD66
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

int func_403(int iParam0) // Position - 0xD38A Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_404(int iParam0) // Position - 0xD39C Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_405(int iParam0) // Position - 0xD3AE Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_406(int iParam0) // Position - 0xD3C1 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_407(int iParam0) // Position - 0xD3E6 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_408(int iParam0) // Position - 0xD3F9 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_409(int iParam0, int iParam1) // Position - 0xD40C Hash - 0x893AC59E ^0x893AC59E
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

void func_410(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xD4A6 Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_411(iParam0, iParam1, true))
	{
		num = func_407(iParam1);
		num2 = func_406(iParam0);
		num3 = func_406(iParam0) - func_406(iParam1);
		num4 = func_407(iParam0) - func_407(iParam1);
		num5 = func_408(iParam0) - func_408(iParam1);
		num6 = func_405(iParam0) - func_405(iParam1);
		num7 = func_404(iParam0) - func_404(iParam1);
		num8 = func_403(iParam0) - func_403(iParam1);
	}
	else
	{
		num = func_407(iParam0);
		num2 = func_406(iParam1);
		num3 = func_406(iParam1) - func_406(iParam0);
		num4 = func_407(iParam1) - func_407(iParam0);
		num5 = func_408(iParam1) - func_408(iParam0);
		num6 = func_405(iParam1) - func_405(iParam0);
		num7 = func_404(iParam1) - func_404(iParam0);
		num8 = func_403(iParam1) - func_403(iParam0);
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
	
		num5 = num5 + func_409(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_412(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

BOOL func_411(int iParam0, int iParam1, BOOL bParam2) // Position - 0xD6A8 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_400(iParam1) || !func_400(iParam0))
			return true;

	return iParam0 > iParam1;
}

float func_412(float fParam0, float fParam1, float fParam2) // Position - 0xD6D5 Hash - 0xDB08F514 ^0x78C0BF6F
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

