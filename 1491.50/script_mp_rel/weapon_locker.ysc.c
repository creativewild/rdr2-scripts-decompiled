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
	var uLocal_35 = 4;
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
	var uLocal_116 = 0;
	var uLocal_117 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xDDBA7A76 ^0xDDBA7A76
{
	func_1();

	if (func_2(&uLocal_13) == 1)
		func_3(&uLocal_13);

	if (func_4(&uLocal_13) == 1)
		func_3(&uLocal_13);

	func_5(&uLocal_13);
	func_3(&uLocal_13);
	return;
}

void func_1() // Position - 0x38 Hash - 0xCE5FB49E ^0xB615C233
{
	TELEMETRY::_TELEMETRY_START_GUN_LOCKER_INTERACTION();
	return;
}

int func_2(int* piParam0) // Position - 0x44 Hash - 0x39D14676 ^0xB6FC5809
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
		return 1;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_6(piParam0, -2017342099);

	if (!func_7(piParam0))
		return 1;

	if (!func_8(piParam0))
		return 1;

	func_9(piParam0, -488492526);
	func_10(piParam0);
	return 0;
}

void func_3(var uParam0) // Position - 0x95 Hash - 0x43341CEF ^0x3945B68D
{
	func_11(false, -1343026476);
	func_12();
	func_13(uParam0);
	!func_14(uParam0);
	!func_15(uParam0);

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

int func_4(var uParam0) // Position - 0xD4 Hash - 0x59156147 ^0xF594BF58
{
	if (!func_16(joaat("weapon_locker")))
		return 1;

	return 0;
}

void func_5(int* piParam0) // Position - 0xEE Hash - 0xF29ACF4F ^0x3E713E52
{
	BOOL flag;

	flag = false;

	while (!flag)
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			flag = true;
	
		if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("weapon_locker")))
			flag = true;
	
		if (!flag)
		{
			func_17(piParam0);
			func_9(piParam0, UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(joaat("weapon_locker")));
			func_18(piParam0);
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_6(int* piParam0, Hash hParam1) // Position - 0x142 Hash - 0x4F8BE4B5 ^0x2E599B99
{
	piParam0->f_1 = hParam1;
	return;
}

BOOL func_7(int* piParam0) // Position - 0x150 Hash - 0x4267EC61 ^0x1D77F4A1
{
	piParam0->f_93 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "weapon_locker");

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_93))
		return false;

	piParam0->f_93.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(piParam0->f_93, "header_text", MISC::VAR_STRING(2, "WL_HEADER"));
	piParam0->f_93.f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(piParam0->f_93, "footer_text", "");
	piParam0->f_93.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(piParam0->f_93, "footer_color", joaat("COLOR_WHITE"));
	return true;
}

BOOL func_8(int* piParam0) // Position - 0x1B7 Hash - 0xA1A7C0C6 ^0xED0D857A
{
	var unk;
	char* str;
	int i;

	if (!func_19(piParam0, &(piParam0->f_93)))
		return false;

	if (!func_20(&(piParam0->f_2.f_2), &(piParam0->f_2), &unk))
		return false;

	if (func_21(&(piParam0->f_2.f_13), &(piParam0->f_2)))
	{
		func_22(&(piParam0->f_2.f_13), &(piParam0->f_2.f_20));
	
		for (i = 0; i < 4; i = i + 1)
		{
			str = func_23(i);
			str = MISC::VAR_STRING(2, str);
			!func_24(&(piParam0->f_2.f_13), &(piParam0->f_2.f_20), str);
		}
	}
	else
	{
		return false;
	}

	return true;
}

void func_9(int* piParam0, Hash hParam1) // Position - 0x24B Hash - 0x788316B1 ^0x788316B1
{
	if (_STOPWATCH_IS_INITIALIZED(piParam0) != hParam1)
	{
		func_6(piParam0, hParam1);
		func_26(piParam0, _STOPWATCH_IS_INITIALIZED(piParam0));
		func_27(piParam0, _STOPWATCH_IS_INITIALIZED(piParam0));
	}

	func_28(piParam0, _STOPWATCH_IS_INITIALIZED(piParam0));
	func_29(piParam0, _STOPWATCH_IS_INITIALIZED(piParam0));
	return;
}

void func_10(int* piParam0) // Position - 0x296 Hash - 0xC8DECEBD ^0x4DAD58E3
{
	WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, true, false);
	return;
}

int func_11(BOOL bParam0, Hash hParam1) // Position - 0x2A9 Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_30())
		return 0;

	if (!func_31())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_32(&Global_0, 8);

	func_32(&Global_0, 1);
	return 1;
}

void func_12() // Position - 0x2FF Hash - 0xCE5FB49E ^0xE3F45977
{
	TELEMETRY::_TELEMETRY_GUN_LOCKER();
	return;
}

void func_13(var uParam0) // Position - 0x30B Hash - 0x71BA7F31 ^0x6F852D7
{
	if (!UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("weapon_locker")))
		return;

	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("weapon_locker"));
	return;
}

BOOL func_14(var uParam0) // Position - 0x32C Hash - 0xFE183358 ^0x42F89323
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_93))
		return false;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_93);
	return true;
}

BOOL func_15(var uParam0) // Position - 0x34D Hash - 0x2C6DB77F ^0x2C6DB77F
{
	!func_33(uParam0);
	return true;
}

BOOL func_16(Hash hParam0) // Position - 0x360 Hash - 0x234EED56 ^0x8024E666
{
	if (!UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH(hParam0))
		return false;

	switch (UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("weapon_locker")))
	{
		case 0:
			return true;
	
		case 1:
			return false;
	
		case 2:
			return false;
	
		default:
		
	}

	return false;
}

void func_17(int* piParam0) // Position - 0x3A4 Hash - 0xBF54577C ^0x7634125B
{
	var eventData;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(1600976403))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(1600976403, &eventData))
		{
			func_34(piParam0, &eventData);
			UIEVENTS::EVENTS_UI_POP_MESSAGE(1600976403);
		}
	}

	if (func_35(piParam0))
	{
		eventData = { func_36(piParam0) };
		func_34(piParam0, &eventData);
		func_37(piParam0);
	}

	return;
}

void func_18(int* piParam0) // Position - 0x3FB Hash - 0x5E41C331 ^0x5E41C331
{
	var unk;

	if (func_35(piParam0))
	{
		unk = { func_36(piParam0) };
		func_34(piParam0, &unk);
		func_37(piParam0);
	}

	return;
}

BOOL func_19(int* piParam0, var uParam1) // Position - 0x424 Hash - 0xE59DC8FB ^0x5F31E416
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	piParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, "weapons_page");

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2))
		return false;

	piParam0->f_2.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(piParam0->f_2, "weapon_list");

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_1))
		DATABINDING::_0x3BF0767CF33FCC88(piParam0->f_2.f_1);

	piParam0->f_2.f_89 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(piParam0->f_2, "weapon_list_hint_visible", false);
	piParam0->f_2.f_90 = DATABINDING::_DATABINDING_ADD_DATA_HASH(piParam0->f_2, "weapon_list_hint_label", 0);
	return true;
}

BOOL func_20(var uParam0, var uParam1, var uParam2) // Position - 0x4A6 Hash - 0x91007215 ^0x2A81DEE8
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam1, "weapon_stat_visible", *uParam2);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponPowerNew", uParam2->f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponRangeNew", uParam2->f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponAccuracyNew", uParam2->f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponFireRateNew", uParam2->f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponReloadNew", uParam2->f_5);
	return true;
}

BOOL func_21(var uParam0, var uParam1) // Position - 0x52F Hash - 0x88D1B83B ^0x12E852F0
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabCount", 0);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam1, "tabName", "");
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabIndex", 0);
	uParam0->f_5 = 1;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	return true;
}

void func_22(var uParam0, var uParam1) // Position - 0x58A Hash - 0x44D537E6 ^0x9ABAA9D1
{
	int i;

	uParam0->f_4 = 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		uParam1->[i /*17*/].f_16 = 0;
		TEXT_LABEL_ASSIGN_STRING(&uParam1->[i /*17*/], "", 128);
	}

	return;
}

char* func_23(int iParam0) // Position - 0x5BE Hash - 0xE5247562 ^0x762BD2FF
{
	switch (iParam0)
	{
		case 0:
			return "WL_FILTER_ALL";
	
		case 1:
			return "WL_FILTER_LOCKER";
	
		case 2:
			return "WL_FILTER_HORSE";
	
		case 3:
			return "WL_FILTER_EQUIPPED";
	
		default:
		
	}

	return "INVALID_LABEL";
}

BOOL func_24(var uParam0, var uParam1, char* sParam2) // Position - 0x606 Hash - 0x3F86B342 ^0x3FBEC4DB
{
	var unk;

	unk = *uParam1;

	if (uParam0->f_4 >= unk)
		return false;

	if (!uParam0->f_5)
		return false;

	uParam1->[uParam0->f_4 /*17*/] = { func_38(sParam2) };
	uParam1->[uParam0->f_4 /*17*/].f_16 = 0;
	uParam0->f_4 = uParam0->f_4 + 1;
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_1, uParam0->f_4);
	return true;
}

Hash _STOPWATCH_IS_INITIALIZED(int* piParam0) // Position - 0x65F Hash - 0xD73B9827 ^0x2D8CE86B
{
	return piParam0->f_1;
}

void func_26(int* piParam0, int iParam1) // Position - 0x66B Hash - 0xEB69817E ^0xEB69817E
{
	switch (iParam1)
	{
		case -488492526:
			func_39(piParam0);
			break;
	}

	return;
}

void func_27(int* piParam0, int iParam1) // Position - 0x68A Hash - 0x930D7E6D ^0xC9A3AECF
{
	switch (iParam1)
	{
		case -488492526:
			func_40(&(piParam0->f_2.f_13));
			break;
	}

	return;
}

void func_28(int* piParam0, int iParam1) // Position - 0x6AD Hash - 0xEB69817E ^0xEB69817E
{
	switch (iParam1)
	{
		case -488492526:
			func_41(piParam0);
			break;
	}

	return;
}

void func_29(int* piParam0, int iParam1) // Position - 0x6CC Hash - 0x3A07F25D ^0x1ACFF39E
{
	switch (iParam1)
	{
		case -488492526:
			func_42(&(piParam0->f_2.f_13), &(piParam0->f_2.f_20));
			break;
	}

	return;
}

BOOL func_30() // Position - 0x6F5 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

BOOL func_31() // Position - 0x704 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_32(Hash hParam0, int iParam1) // Position - 0x718 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_33(var uParam0) // Position - 0x72B Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_34(int* piParam0, Any* panParam1) // Position - 0x734 Hash - 0x1C8F06F ^0x1A0A36F7
{
	int num;

	num = panParam1->f_2;

	switch (*panParam1)
	{
		case -1740156697:
			if (func_44(&(piParam0->f_2.f_13)))
			{
			}
			else
			{
				func_45(piParam0, panParam1);
			
				switch (num)
				{
					case -2060496899:
					case -1694113483:
					case -1174213347:
					case -337881065:
						!func_46(piParam0, &(panParam1->f_3));
						!func_47(&(piParam0->f_2.f_2), &(panParam1->f_3));
						break;
				}
			
				func_48(piParam0, num);
			}
			break;
	
		case -1203660660:
			switch (num)
			{
				case -1756222973:
					if (func_49(&(panParam1->f_3), 3))
						func_50(piParam0, 0, true);
					break;
			
				case -1313710397:
					if (func_49(&(panParam1->f_3), 2))
						func_50(piParam0, 0, true);
					break;
			
				case -1103499950:
					if (func_52(&(panParam1->f_3)))
						func_50(piParam0, 0, true);
					break;
			
				case -1073027202:
					if (func_51(&(panParam1->f_3)))
						func_50(piParam0, 0, true);
					break;
			
				case -946029012:
					if (func_49(&(panParam1->f_3), 10))
						func_50(piParam0, 0, true);
					break;
			
				case -466398939:
					if (func_49(&(panParam1->f_3), 7))
						func_50(piParam0, 0, true);
					break;
			
				case -260514364:
					if (func_49(&(panParam1->f_3), 8))
						func_50(piParam0, 0, true);
					break;
			
				case 941907253:
					if (func_49(&(panParam1->f_3), 4))
						func_50(piParam0, 0, true);
					break;
			
				case 1554581363:
					if (func_49(&(panParam1->f_3), 9))
						func_50(piParam0, 0, true);
					break;
			}
			break;
	
		case -722926211:
		case 703281244:
			switch (num)
			{
				case 752670436:
					func_40(&(piParam0->f_2.f_13));
					func_53(piParam0);
					break;
			}
			break;
	
		case -632467210:
			func_43(piParam0);
			break;
	}

	return;
}

BOOL func_35(int* piParam0) // Position - 0x92A Hash - 0x8B3FCE29 ^0xB129AA27
{
	return piParam0->f_97 != 0;
}

struct<4> func_36(int* piParam0) // Position - 0x938 Hash - 0x612706C5 ^0x61578FF2
{
	return piParam0->f_97;
}

void func_37(int* piParam0) // Position - 0x946 Hash - 0x52F2889C ^0x740EBF6F
{
	var unk;

	piParam0->f_97 = 0;
	piParam0->f_97.f_2 = 0;
	piParam0->f_97.f_1 = 0;
	piParam0->f_97.f_3 = unk;
	return;
}

struct<16> func_38(char* sParam0) // Position - 0x969 Hash - 0x31426419 ^0x31426419
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 128);
	return unk;
}

void func_39(int* piParam0) // Position - 0x97C Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_40(var uParam0) // Position - 0x984 Hash - 0xE2C7635E ^0xEEC0A9C3
{
	if (!func_54(uParam0))
		return;

	uParam0->f_6 = 1;
	return;
}

void func_41(int* piParam0) // Position - 0x99E Hash - 0x6F9EB04 ^0xF6D7AD79
{
	int num;

	if (func_44(&(piParam0->f_2.f_13)))
		func_50(piParam0, 0, true);

	if (func_55(piParam0, 0))
	{
		func_50(piParam0, 0, false);
		num = func_56(piParam0);
		!func_57(piParam0, num);
		func_58(piParam0);
		func_59(piParam0, num);
		func_60(piParam0, num);
	}

	return;
}

void func_42(var uParam0, var uParam1) // Position - 0x9F7 Hash - 0xBB13EC44 ^0xFE6B4478
{
	int num;

	if (!func_54(uParam0))
	{
		uParam0->f_6 = 0;
		return;
	}

	if (!func_44(uParam0))
		return;

	num = func_61(uParam0);

	if (!func_62(uParam0, num))
	{
		uParam0->f_6 = 0;
		return;
	}

	func_63(uParam0, uParam1, num);
	uParam0->f_6 = 0;
	return;
}

int func_43(int* piParam0) // Position - 0xA49 Hash - 0xDB5B81B0 ^0xCB78CD36
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_93.f_2))
		return 0;

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(piParam0->f_93.f_2, "");
	return 1;
}

BOOL func_44(var uParam0) // Position - 0xA70 Hash - 0xD73B9827 ^0xA4E0D7D7
{
	return uParam0->f_6;
}

int func_45(int* piParam0, Any* panParam1) // Position - 0xA7C Hash - 0x4C18E88C ^0xD526F5E2
{
	if (*panParam1 == 0)
		return 0;

	MISC::COPY_SCRIPT_STRUCT(&(piParam0->f_101), panParam1, 4);
	return 1;
}

BOOL func_46(int* piParam0, var uParam1) // Position - 0xA9B Hash - 0x6F4909FF ^0x973D50D5
{
	Hash hash;
	Hash hash2;
	var unk;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item");
	hash2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item_slot");
	unk = { func_65(hash, func_64(false), hash2, false) };

	if (!func_66(&unk))
		return false;

	func_67(piParam0, unk);
	return true;
}

BOOL func_47(var uParam0, var uParam1) // Position - 0xAF8 Hash - 0x78C12D57 ^0xDCBB6374
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_damage"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_range"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_accuracy"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_firerate"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_reload"));
	return true;
}

void func_48(int* piParam0, int iParam1) // Position - 0xB6F Hash - 0x72C9FF4E ^0x72C9FF4E
{
	switch (iParam1)
	{
		case -2060496899:
		case -1694113483:
		case -1174213347:
		case -337881065:
			if (!func_68(piParam0, iParam1))
				func_43(piParam0);
			break;
	
		default:
			func_43(piParam0);
			break;
	}

	return;
}

BOOL func_49(var uParam0, int iParam1) // Position - 0xBB7 Hash - 0x869F6CEE ^0x93F5083C
{
	Hash hash;
	Hash hash2;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");

	if (!func_69(hash, 0))
		return false;

	hash2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");

	if (!func_70(hash, hash2, iParam1))
		return false;

	return true;
}

void func_50(int* piParam0, int iParam1, BOOL bParam2) // Position - 0xC0A Hash - 0x7FDB839F ^0x7FDB839F
{
	if (bParam2)
		func_71(piParam0, iParam1);
	else
		func_72(piParam0, iParam1);

	return;
}

BOOL func_51(var uParam0) // Position - 0xC2A Hash - 0xC8C4CA88 ^0xEA1EE0CE
{
	Hash hash;
	Hash hash2;
	var unk;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");

	if (!func_69(hash, 0))
		return false;

	hash2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	unk = { func_65(hash, func_64(false), hash2, false) };

	if (!func_66(&unk))
		return false;

	if (!func_73(&unk))
		return false;

	return true;
}

BOOL func_52(var uParam0) // Position - 0xC99 Hash - 0xC8C4CA88 ^0xEA1EE0CE
{
	Hash hash;
	Hash hash2;
	var unk;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");

	if (!func_69(hash, 0))
		return false;

	hash2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	unk = { func_65(hash, func_64(false), hash2, false) };

	if (!func_66(&unk))
		return false;

	if (!func_74(&unk))
		return false;

	return true;
}

void func_53(int* piParam0) // Position - 0xD08 Hash - 0x9D05C6E9 ^0x63B30965
{
	func_75(&(piParam0->f_2.f_9));
	return;
}

BOOL func_54(var uParam0) // Position - 0xD1A Hash - 0xD73B9827 ^0x6B2CFE8C
{
	return uParam0->f_5;
}

BOOL func_55(int* piParam0, int iParam1) // Position - 0xD26 Hash - 0x320397CF ^0x320397CF
{
	return func_76(*piParam0, iParam1);
}

int func_56(int* piParam0) // Position - 0xD37 Hash - 0xABAE7049 ^0x643A9901
{
	return func_61(&(piParam0->f_2.f_13));
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_57(int* piParam0, int iParam1) // Position - 0xD49 Hash - 0xF49BA925 ^0x23D418B7
{
	int num;
	int num2;
	var unk;
	int num3;
	int num4;
	int i;
	int j;

	if (!func_77("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), true))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	num4 = 0;

	for (j = 0; j < 7; j = j + 1)
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_78(&unk, i, num, num2))
			{
			}
			else if (!func_79(unk.f_4))
			{
			}
			else if (func_80(unk.f_4) != j)
			{
			}
			else
			{
				num3 = func_81(&unk);
			
				if (iParam1 != 0)
				{
					switch (num3)
					{
						case -1:
							goto 0xED;
					
						case 0:
							if (iParam1 != 3)
							{
							}
							else
							{
								break;
							}
					
						case 1:
							if (iParam1 != 2)
							{
							}
							else
							{
								break;
							}
					
						case 2:
							if (iParam1 != 1)
							{
							}
							else
							{
								break;
							}
					}
				}
			
				if (!func_82(piParam0, num4, unk.f_4, unk.f_9, num3, iParam1))
				{
				}
				else
				{
					num4 = num4 + 1;
				}
			}
		}
	}

	!func_83(piParam0, num4);
	!func_84(num);
	return true;
}

void func_58(int* piParam0) // Position - 0xE62 Hash - 0x6BC77294 ^0x50F57D6A
{
	int num;

	num = func_85(piParam0);
	func_86(&(piParam0->f_2.f_2), func_85(piParam0) > 0);

	if (num == 0)
		func_87(&(piParam0->f_2.f_2));

	return;
}

void func_59(int* piParam0, int iParam1) // Position - 0xE96 Hash - 0xAE4BEAC3 ^0x9BCA38B4
{
	int num;

	num = func_85(piParam0);

	switch (iParam1)
	{
		case 1:
			func_88(piParam0, num == 0);
			func_89(piParam0, -2012945523);
			break;
	
		case 2:
			func_88(piParam0, num == 0);
			func_89(piParam0, -1705332461);
			break;
	
		default:
			func_88(piParam0, false);
			break;
	}

	return;
}

void func_60(int* piParam0, int iParam1) // Position - 0xEF9 Hash - 0xFC05C2C5 ^0x48308472
{
	int num;
	int num2;

	num = func_85(piParam0);

	if (num > 0)
	{
		num2 = -1740156697;
	
		if (func_44(&(piParam0->f_2.f_13)))
		{
			num2.f_1 = 0;
		}
		else
		{
			num2.f_1 = func_90(piParam0);
		
			if (num2.f_1 >= num)
				num2.f_1 = num - 1;
		}
	
		num2.f_2 = func_91(iParam1);
		!func_92(piParam0, num2.f_1, &(num2.f_3));
		!func_93(piParam0, &num2);
	}

	return;
}

int func_61(var uParam0) // Position - 0xF6E Hash - 0x3FA5F351 ^0xA0540300
{
	if (!uParam0->f_5)
		return -1;

	return DATABINDING::DATABINDING_READ_INT(uParam0->f_3);
}

BOOL func_62(var uParam0, int iParam1) // Position - 0xF8A Hash - 0xF0742CAB ^0xB714B430
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_4)
		return false;

	return true;
}

void func_63(var uParam0, var uParam1, int iParam2) // Position - 0xFAB Hash - 0xF2771BB ^0xF2771BB
{
	func_95(uParam0, func_94(uParam1, iParam2));
	func_96(uParam1, iParam2);
	return;
}

struct<4> func_64(BOOL bParam0) // Position - 0xFC9 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_97(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_65(923904168, func_98(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_65(923904168, func_98(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_65(923904168, func_98(bParam0), -740156546, false);
}

struct<4> func_65(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x106A Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_69(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_97(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_66(Any* panParam0) // Position - 0x109B Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

int func_67(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x10D1 Hash - 0xDD467B3A ^0x51484473
{
	if (!func_66(&uParam1))
		return 0;

	MISC::COPY_SCRIPT_STRUCT(&(piParam0->f_2.f_9), &uParam1, 4);
	return 1;
}

BOOL func_68(int* piParam0, int iParam1) // Position - 0x10F5 Hash - 0xF3B474D4 ^0x77E944D3
{
	char* str;
	var guid;
	var unk4;

	switch (iParam1)
	{
		case -2060496899:
			str = "WL_NUMBER_EQUIPPED";
			break;
	
		case -1694113483:
			str = "WL_NUMBER_STORED_IN_WL";
			break;
	
		case -1174213347:
			break;
	
		case -337881065:
			str = "WL_NUMBER_STOWED_ON_HORSE";
			break;
	
		default:
			return false;
	}

	guid = { func_99(piParam0) };

	if (func_66(&guid))
	{
		unk4.f_9 = joaat("SLOTID_NONE");
	
		if (INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(2, &guid, &unk4, 22, 1))
		{
		}
	
		switch (func_100(&guid))
		{
			case 3:
				func_101(piParam0, MISC::VAR_STRING(2, "WL_FOOTER_ALWAYS_MELEE"));
				return true;
		
			case 4:
			case 5:
				func_101(piParam0, MISC::VAR_STRING(2, "WL_FOOTER_ALWAYS_SIDEARMS"));
				return true;
		}
	}

	if (func_85(piParam0) > 0)
		func_101(piParam0, MISC::VAR_STRING(2, str, func_85(piParam0)));
	else
		func_43(piParam0);

	return true;
}

BOOL func_69(Hash hParam0, int iParam1) // Position - 0x11EB Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_70(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x1205 Hash - 0xA8CE30A8 ^0xCD75D6AA
{
	int num;
	var guid;
	var unk4;
	int num2;
	var unk26;
	var weaponGuid;
	BOOL flag;
	var weaponGuid2;
	var unk54;
	int attachPoint;
	int num3;
	int num4;
	int i;

	guid = { func_65(hParam0, func_64(false), hParam1, false) };
	unk4.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(2, &guid, &unk4, 22, 1))
		return false;

	num = unk4.f_14;
	unk26.f_9 = joaat("SLOTID_NONE");

	if (WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_33, iParam2, &weaponGuid))
	{
		if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(2, &weaponGuid, &unk26, 22, 1))
			return false;
	
		num2 = unk26.f_14;
	}

	flag = false;

	if (func_79(unk26.f_4))
	{
		unk54.f_9 = joaat("SLOTID_NONE");
		num4 = func_102(hParam0);
	
		for (i = 0; i < num4; i = i + 1)
		{
			if (i >= num4 - 1)
			{
			}
			else if (!func_103(hParam0, i, &num3))
			{
			}
			else if (iParam2 != num3)
			{
			}
			else if (!func_103(hParam0, i + 1, &attachPoint))
			{
			}
			else if (!func_104(attachPoint))
			{
			}
			else
			{
				if (WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_33, attachPoint, &weaponGuid2))
				{
					if (INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(2, &weaponGuid2, &unk54, 22, 1))
					{
						if (func_79(unk54.f_4))
						{
						}
						else
						{
							goto 0x121;
						}
					}
				
					goto 0x13C;
				}
			
				if (func_105(&unk26, &attachPoint, true))
				{
					flag = true;
					break;
				}
			
				break;
			}
		}
	}

	if (func_81(&unk4) == 2)
		func_106(unk4.f_4);

	if (func_105(&guid, &iParam2, false))
	{
	}

	if (!flag)
	{
		if (func_66(&weaponGuid))
		{
			if (func_107(hParam0, num2, num))
			{
				if (func_105(&unk26, &num, true))
				{
				}
			}
		}
	}

	return true;
}

void func_71(int* piParam0, int iParam1) // Position - 0x13A7 Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_72(int* piParam0, int iParam1) // Position - 0x13B7 Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

BOOL func_73(Any* panParam0) // Position - 0x13C7 Hash - 0xAFCAF388 ^0x4327E6FC
{
	var guid2;

	guid2.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(2, panParam0, &guid2, 22, 1))
		return false;

	guid2.f_21 = 0;

	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(2, panParam0, &guid2, 22))
		return false;

	func_108(guid2.f_4);

	if (guid2.f_14 >= 0)
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, guid2.f_14, false, false);

	return true;
}

BOOL func_74(Any* panParam0) // Position - 0x142F Hash - 0x6D937665 ^0x19D1230
{
	var guid2;

	guid2.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(2, panParam0, &guid2, 22, 1))
		return false;

	guid2.f_21 = 1;

	if (func_81(&guid2) == 2)
		func_106(guid2.f_4);

	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(2, panParam0, &guid2, 22))
		return false;

	if (guid2.f_14 >= 0)
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, guid2.f_14, false, false);

	return true;
}

void func_75(var uParam0) // Position - 0x14A1 Hash - 0xA4B72113 ^0x62A5EAE1
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

BOOL func_76(int iParam0, int iParam1) // Position - 0x14BC Hash - 0x2ACCF512 ^0x4D8BE70B
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

BOOL func_77(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x14CC Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_97(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_78(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x14F3 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_79(Hash hParam0) // Position - 0x152E Hash - 0xC7E25F4D ^0xAFFF9E4
{
	if (!func_69(hParam0, 0))
		return false;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	if (!WEAPON::IS_WEAPON_A_GUN(hParam0) && !WEAPON::IS_WEAPON_BOW(hParam0))
		return false;

	return true;
}

int func_80(Hash hParam0) // Position - 0x156E Hash - 0x76E14D17 ^0x4414B921
{
	if (!func_79(hParam0))
		return -1;

	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
		return 0;
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
		return 1;
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
		return 2;
	else if (WEAPON::IS_WEAPON_REPEATER(hParam0))
		return 3;
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
		return 4;
	else if (WEAPON::IS_WEAPON_BOW(hParam0))
		return 5;

	return 6;
}

int func_81(Any* panParam0) // Position - 0x15E2 Hash - 0x6C394E5B ^0x7B6DE1CF
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(2, panParam0, &unk, 22, 1))
		return -1;

	if (!unk.f_21)
		return 2;
	else if (unk.f_21 && unk.f_14 != -1)
		return 0;
	else if (unk.f_21 && unk.f_14 == -1)
		return 1;

	return -1;
}

BOOL func_82(int* piParam0, int iParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5) // Position - 0x164C Hash - 0xD21C18BB ^0x62ADA237
{
	var unk;
	BOOL flag;
	var unk57;

	if (!func_79(hParam2))
		return false;

	unk = 1;
	unk.f_1 = 1;
	unk.f_2 = joaat("COLOR_WHITE");
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_10 = -1;
	unk.f_11 = -1;
	unk.f_12 = -1;

	if (!func_109(hParam2, hParam3, &unk, iParam4, iParam5))
		return false;

	flag = true;

	if (iParam1 < func_85(piParam0))
		if (func_92(piParam0, iParam1, &unk57))
			if (func_110(&unk57, &unk))
				flag = false;

	if (flag)
		if (!func_111(piParam0, &unk))
			return false;

	return true;
}

BOOL func_83(int* piParam0, int iParam1) // Position - 0x16F9 Hash - 0x560E2AF7 ^0x9D1AD6D2
{
	int arrayCount;
	int i;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_1))
		return false;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2.f_1);

	if (arrayCount == 0)
		return true;

	if (iParam1 < 0 || iParam1 > arrayCount)
		return false;

	for (i = arrayCount; i >= iParam1; i = i + -1)
	{
		DATABINDING::_0x6318FB3BE37E11B3(piParam0->f_2.f_1, i);
	}

	return true;
}

BOOL func_84(int iParam0) // Position - 0x1760 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return false;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return false;

	return true;
}

int func_85(int* piParam0) // Position - 0x1781 Hash - 0xFD4DED7A ^0x92C076E3
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_1))
		return 0;

	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2.f_1);
}

int func_86(var uParam0, BOOL bParam1) // Position - 0x17A5 Hash - 0xB3DF0E1C ^0xE65853BC
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return 0;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, bParam1);
	return 1;
}

int func_87(var uParam0) // Position - 0x17C7 Hash - 0xED70156C ^0x333CDC1B
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, 0);
	return 1;
}

int func_88(int* piParam0, BOOL bParam1) // Position - 0x17FD Hash - 0x9DB1EDD0 ^0x59221957
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_89))
		return 0;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(piParam0->f_2.f_89, bParam1);
	return 1;
}

int func_89(int* piParam0, Hash hParam1) // Position - 0x1824 Hash - 0x9DB1EDD0 ^0x446BDE93
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_90))
		return 0;

	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(piParam0->f_2.f_90, hParam1);
	return 1;
}

var func_90(int* piParam0) // Position - 0x184B Hash - 0x92708AC8 ^0x45EC47E6
{
	return piParam0->f_101.f_1;
}

int func_91(int iParam0) // Position - 0x1859 Hash - 0x51E02475 ^0xE44745B7
{
	switch (iParam0)
	{
		case 0:
			return -1174213347;
	
		case 1:
			return -1694113483;
	
		case 2:
			return -337881065;
	
		case 3:
			return -2060496899;
	
		default:
		
	}

	return 0;
}

BOOL func_92(int* piParam0, int iParam1, var uParam2) // Position - 0x18A2 Hash - 0x2E483C5E ^0x742FA5DB
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_1))
		return false;

	if (iParam1 < 0 || iParam1 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2.f_1))
		return false;

	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(piParam0->f_2.f_1, iParam1);
	return true;
}

BOOL func_93(int* piParam0, Any* panParam1) // Position - 0x18EA Hash - 0x3487559 ^0x3AAE0C22
{
	if (*panParam1 == 0)
		return false;

	if (piParam0->f_97 != 0)
		return false;

	MISC::COPY_SCRIPT_STRUCT(&(piParam0->f_97), panParam1, 4);
	return true;
}

const char* func_94(var uParam0, int iParam1) // Position - 0x1915 Hash - 0xC767DD4A ^0xC767DD4A
{
	return func_112(uParam0->[iParam1 /*17*/]);
}

void func_95(var uParam0, const char* sParam1) // Position - 0x192A Hash - 0xECC53981 ^0x5112C04E
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, sParam1);
	return;
}

void func_96(var uParam0, int iParam1) // Position - 0x193C Hash - 0x95A796D0 ^0x554728C0
{
	uParam0->[iParam1 /*17*/].f_16 = 1;
	return;
}

int func_97(BOOL bParam0) // Position - 0x194D Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_113() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_98(BOOL bParam0) // Position - 0x198E Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_97(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_65(joaat("character"), func_114(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_65(joaat("character"), func_114(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_65(joaat("character"), func_114(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_99(int* piParam0) // Position - 0x1A2E Hash - 0xDE5BB377 ^0x3EE7A827
{
	return piParam0->f_2.f_9;
}

int func_100(Any* panParam0) // Position - 0x1A3E Hash - 0x2B3B8F75 ^0x4C466798
{
	var unk;
	int num;

	if (!func_66(panParam0))
		return 1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_97(false), panParam0, &unk, 22, 1))
		return 2;

	num = unk.f_14;

	switch (num)
	{
		case 2:
			return 5;
	
		case 3:
			return 4;
	
		case 4:
			return 3;
	
		default:
		
	}

	return 0;
}

int func_101(int* piParam0, const char* sParam1) // Position - 0x1AA8 Hash - 0x9DB1EDD0 ^0x99738790
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_93.f_2))
		return 0;

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(piParam0->f_93.f_2, sParam1);
	return 1;
}

int func_102(Hash hParam0) // Position - 0x1ACF Hash - 0xC16F1A8F ^0x8840A47D
{
	if (!func_69(hParam0, 0))
		return 0;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_BOW(hParam0))
		return 2;
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(hParam0))
		return 2;
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		return 2;
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0))
		return 1;

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_103(Hash hParam0, int iParam1, var uParam2) // Position - 0x1B32 Hash - 0xB704E052 ^0x5396E9BD
{
	if (!func_69(hParam0, 0))
		return false;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	if (WEAPON::IS_WEAPON_BOW(hParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = 8;
				return true;
		
			case 1:
				*uParam2 = 7;
				return true;
		
			default:
				goto 0xC6;
		}
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(hParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = 10;
				return true;
		
			case 1:
				*uParam2 = 9;
				return true;
		
			default:
				goto 0xC6;
		}
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = 2;
				return true;
		
			case 1:
				*uParam2 = 3;
				return true;
		
			default:
				goto 0xC6;
		}
	}
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0))
	{
		*uParam2 = 4;
		return true;
	}

	return false;
}

BOOL func_104(int iParam0) // Position - 0x1BFC Hash - 0x6DFE5D10 ^0x6DFE5D10
{
	switch (iParam0)
	{
		case 3:
			return func_115();
	}

	return true;
}

BOOL func_105(Any* panParam0, var uParam1, BOOL bParam2) // Position - 0x1C1D Hash - 0x7C6E5180 ^0x56AEA88D
{
	var guid2;
	var data;
	var outData;
	Hash labelHash;
	var unk42;
	var unk50;

	guid2.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(2, panParam0, &guid2, 22, 1))
		return false;

	guid2.f_21 = 1;

	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(2, panParam0, &guid2, 22))
		return false;

	data.f_7 = 752097756;
	data.f_8 = 1056964608;
	data.f_9 = 1065353216;
	data.f_4 = guid2.f_4;
	data = { guid2 };
	data.f_6 = *uParam1;
	data.f_12 = 1;

	if (WEAPON::GIVE_WEAPON_TO_PED_WITH_OPTIONS(Global_33, &data, &outData))
	{
	}
	else
	{
		return false;
	}

	if (bParam2)
	{
		if (func_116(data.f_6, &labelHash))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk42, func_117(data.f_4), 64);
			TEXT_LABEL_ASSIGN_STRING(&unk50, HUD::GET_STRING_FROM_HASH_KEY(labelHash), 64);
			func_118(MISC::VAR_STRING(42, "WL_TICKER_EQUIPPED_TO", &unk42, &unk50), -2, 0, 0, 0, true);
		}
	}

	return true;
}

int func_106(Hash hParam0) // Position - 0x1CF8 Hash - 0x18CA11FF ^0xC1431CC
{
	if (!func_69(hParam0, 0))
		return 0;

	TELEMETRY::_TELEMETRY_GUN_LOCKER_WEAPON_REMOVED(hParam0);
	return 1;
}

BOOL func_107(Hash hParam0, int iParam1, int iParam2) // Position - 0x1D16 Hash - 0x5C8BF594 ^0x1DEC2D2D
{
	if (!func_69(hParam0, 0))
		return false;

	if (WEAPON::_IS_WEAPON_TWO_HANDED(hParam0))
	{
		if (iParam1 == 10 && iParam2 == 9)
			return true;
	
		if (iParam2 == 10 && iParam1 == 9)
			return true;
	}

	return false;
}

int func_108(Hash hParam0) // Position - 0x1D63 Hash - 0x18CA11FF ^0x78622C76
{
	if (!func_69(hParam0, 0))
		return 0;

	TELEMETRY::_TELEMETRY_GUN_LOCKER_WEAPON_STORED(hParam0);
	return 1;
}

BOOL func_109(Hash hParam0, Hash hParam1, var uParam2, int iParam3, int iParam4) // Position - 0x1D81 Hash - 0xCD4055B2 ^0xF62EEABC
{
	var unk;

	if (!func_79(hParam0))
		return false;

	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_97(true), hParam0, false) > 1)
		if (func_119(hParam1, &(uParam2->f_31), &(uParam2->f_30)))
			uParam2->f_32 = 1;

	uParam2->f_4 = 1600976403;

	switch (iParam4)
	{
		case 0:
			uParam2->f_5 = -1174213347;
			break;
	
		case 1:
			uParam2->f_5 = -1694113483;
			break;
	
		case 2:
			uParam2->f_5 = -337881065;
			break;
	
		case 3:
			uParam2->f_5 = -2060496899;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_16), func_117(hParam0), 64);
	!func_120(hParam0, &unk);
	uParam2->f_33 = unk;
	uParam2->f_34 = unk.f_1;
	uParam2->f_35 = unk.f_4;
	uParam2->f_36 = unk.f_2;
	uParam2->f_37 = unk.f_3;
	uParam2->f_8 = 0;
	uParam2->f_9 = 0;

	if (!func_121(hParam0, hParam1, uParam2))
		return false;

	if (!func_122(iParam3, uParam2))
		return false;

	uParam2->f_54 = hParam0;
	uParam2->f_55 = hParam1;
	return true;
}

BOOL func_110(var uParam0, var uParam1) // Position - 0x1E90 Hash - 0xDA25DB62 ^0xC69E97FC
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0), *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1), uParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2), uParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(57), uParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(58), uParam1->f_4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(60), uParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(59), uParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(61), uParam1->f_7);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(63), uParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(64), uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(9), uParam1->f_30);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(10), uParam1->f_31);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(11), uParam1->f_32);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(15), &(uParam1->f_16));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(21), uParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(22), uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(23), uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_damage", uParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_range", uParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_accuracy", uParam1->f_35);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_firerate", uParam1->f_36);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_reload", uParam1->f_37);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_label", uParam1->f_40);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_enabled", uParam1->f_38);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_visible", uParam1->f_39);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_hash", uParam1->f_41);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_label", uParam1->f_44);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam1->f_42);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_visible", uParam1->f_43);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_hash", uParam1->f_45);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_label", uParam1->f_48);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_enabled", uParam1->f_46);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_visible", uParam1->f_47);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_hash", uParam1->f_49);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_label", uParam1->f_52);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_enabled", uParam1->f_50);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_visible", uParam1->f_51);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_hash", uParam1->f_53);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item", uParam1->f_54);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot", uParam1->f_55);
	return true;
}

BOOL func_111(int* piParam0, var uParam1) // Position - 0x211E Hash - 0x8E51C065 ^0xAC1C8CCC
{
	var unk;
	Any any;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2))
		return false;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_1))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, "Entry_", 64);
	TEXT_LABEL_APPEND_INT(&unk, DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2.f_1), 64);
	func_124(&any, piParam0->f_2.f_1, unk, uParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(piParam0->f_2.f_1, -1, "pm_dynamic_text_and_end_image", any);
	return true;
}

const char* func_112(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x2184 Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_113() // Position - 0x2198 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

struct<4> func_114() // Position - 0x21A6 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_115() // Position - 0x21B2 Hash - 0xDA3B673C ^0xDA3B673C
{
	if (!func_125())
		return 0;

	if (func_126() < 2)
		return 0;

	return 1;
}

BOOL func_116(int iParam0, var uParam1) // Position - 0x21D3 Hash - 0xBF79061C ^0x5E68774D
{
	switch (iParam0)
	{
		case 2:
			*uParam1 = 258571561;
			return true;
	
		case 3:
			*uParam1 = -2078679563;
			return true;
	
		case 4:
			*uParam1 = 825261881;
			return true;
	
		case 9:
			*uParam1 = 1282885388;
			return true;
	
		case 10:
			*uParam1 = -1522249011;
			return true;
	
		default:
		
	}

	return false;
}

char* func_117(Hash hParam0) // Position - 0x223E Hash - 0x65E4FFBF ^0x7F50656
{
	Hash labelHash;

	if (!func_69(hParam0, 0))
		return "";

	labelHash = func_127(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

int func_118(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x2270 Hash - 0x8EBD6187 ^0x42F0F0AC
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
	num2 = UIFEED::_UI_FEED_POST_FEED_TICKER(&num, &unk13, bParam5);
	return num2;
}

BOOL func_119(int iParam0, var uParam1, var uParam2) // Position - 0x22AB Hash - 0x21DE9E13 ^0x46746579
{
	switch (iParam0)
	{
		case joaat("SLOTID_WEAPON_1"):
			*uParam2 = joaat("menu_textures");
			*uParam1 = joaat("Diamond");
			return true;
	
		case joaat("SLOTID_WEAPON_0"):
			*uParam2 = joaat("menu_textures");
			*uParam1 = joaat("club");
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_120(Hash hParam0, var uParam1) // Position - 0x22F0 Hash - 0x17859023 ^0x577ED9D5
{
	int outData;
	var outData2;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	float value;
	var statId;
	int i;
	int num6;
	int num7;
	int num8;
	var unk29;
	var unk34;
	int num9;
	int j;
	Hash hash;
	Hash key;
	int num10;
	int num11;
	int num12;

	if (!func_69(hParam0, 0))
		return false;

	if (!func_128(hParam0))
		return false;

	outData.f_1 = 20;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &outData))
		return false;

	if (outData <= 0)
		return false;

	value = 100f;
	statId = { func_129(joaat("Skill"), WEAPON::_GET_WEAPON_STAT_ID(hParam0)) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::STAT_ID_GET_FLOAT(&statId, &value);

	for (i = 0; i < outData; i = i + 1)
	{
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
		{
			if (outData2.f_1 == -266488916)
				num = num + outData2.f_2;
			else if (outData2.f_1 == 1648497600)
				num2 = num2 + outData2.f_2;
			else if (outData2.f_1 == -1856731002)
				num3 = num3 + outData2.f_2;
			else if (outData2.f_1 == 2038990430)
				num4 = num4 + outData2.f_2;
			else if (outData2.f_1 == 983649838)
				num5 = num5 + outData2.f_2;
		
			if (outData2.f_1 == 1465168878)
				num2 = num2 + BUILTIN::FLOOR(BUILTIN::TO_FLOAT(outData2.f_2) * (value / 100f));
			else if (outData2.f_1 == -1103443887)
				num4 = num4 + BUILTIN::FLOOR(BUILTIN::TO_FLOAT(outData2.f_2) * (value / 100f));
			else if (outData2.f_1 == -800430237)
				num5 = num5 + BUILTIN::FLOOR(BUILTIN::TO_FLOAT(outData2.f_2) * (value / 100f));
		}
	}

	num6 = 0;
	num7 = 0;
	num8 = 0;
	unk29 = { func_130(hParam0, false, 0) };
	unk34 = { func_65(hParam0, unk29, unk29.f_4, false) };
	num9 = func_131(hParam0);

	for (j = 0; j < num9; j = j + 1)
	{
		hash = func_132(hParam0, j);
	
		if (hash != 0)
		{
			key = func_133(unk34, hash, false, -1);
		
			if (func_69(key, 0))
			{
				if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(key, &outData))
				{
					i = 0;
				
					for (i = 0; i < outData; i = i + 1)
					{
						if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
						{
						}
						else if (outData2.f_1 == 1999781523)
						{
							num6 = num6 + outData2.f_2;
						}
						else if (outData2.f_1 == 1173003838)
						{
							num8 = num8 + outData2.f_2;
						}
						else if (outData2.f_1 == -1657343230)
						{
							num7 = num7 + outData2.f_2;
						}
					}
				}
			}
		}
	}

	num10 = num + num6;
	num11 = num2 + num7;
	num12 = num5 + num8;
	*uParam1 = num10;
	uParam1->f_1 = num11;
	uParam1->f_4 = num12;
	uParam1->f_2 = num3;
	uParam1->f_3 = num4;
	return true;
}

BOOL func_121(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x258F Hash - 0x80B06029 ^0xB90DAFD2
{
	var unk;
	int num;
	int num2;
	int i;

	if (!func_79(hParam0))
		return false;

	unk = { func_65(hParam0, func_64(false), hParam1, false) };

	if (!func_66(&unk))
		return false;

	if (!func_134(hParam0, joaat("SLOTID_WEAPON_0"), true))
		if (!func_134(hParam0, joaat("SLOTID_WEAPON_1"), true))
			return false;

	num2 = func_102(hParam0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (!func_103(hParam0, i, &num))
		{
		}
		else if (i == 0)
		{
			uParam2->f_39 = func_104(num);
			uParam2->f_38 = func_135(&unk, num) == 0;
			!func_136(num, &(uParam2->f_40));
			!func_137(num, &(uParam2->f_41));
		}
		else if (i == 1)
		{
			uParam2->f_43 = func_104(num);
			uParam2->f_42 = func_135(&unk, num) == 0;
			!func_136(num, &(uParam2->f_44));
			!func_137(num, &(uParam2->f_45));
		}
	}

	uParam2->f_47 = 1;
	uParam2->f_46 = func_138(&unk) == 0;
	uParam2->f_48 = 1039601264;
	uParam2->f_49 = -1073027202;
	uParam2->f_51 = 1;
	uParam2->f_50 = func_139(&unk) == 0;
	uParam2->f_52 = 1901059961;
	uParam2->f_53 = -1103499950;
	return true;
}

BOOL func_122(int iParam0, var uParam1) // Position - 0x26D3 Hash - 0x8F8F2DCE ^0x4A02DC45
{
	var unk;
	var unk2;

	if (!func_140(iParam0, &unk, &unk2))
	{
		uParam1->f_26 = 0;
		return false;
	}

	uParam1->f_26 = 1;
	uParam1->f_25 = unk;
	uParam1->f_24 = unk2;
	return true;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x2704 Hash - 0xA17D549C ^0xC53BD9F5
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

int func_124(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) // Position - 0x2C12 Hash - 0x27FA019 ^0x70AAFC1E
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam1))
		return 0;

	func_141(uParam0, hParam1, uParam2, *uParam10);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return 0;

	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(9), uParam10->f_30);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(10), uParam10->f_31);
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(11), uParam10->f_32);
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_damage", uParam10->f_33);
	uParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_range", uParam10->f_34);
	uParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_accuracy", uParam10->f_35);
	uParam0->f_32 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_firerate", uParam10->f_36);
	uParam0->f_33 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_reload", uParam10->f_37);
	uParam0->f_38 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_toggle_label", uParam10->f_40);
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_toggle_enabled", uParam10->f_38);
	uParam0->f_40 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_toggle_visible", uParam10->f_39);
	uParam0->f_41 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_toggle_hash", uParam10->f_41);
	uParam0->f_34 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_option_label", uParam10->f_44);
	uParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam10->f_42);
	uParam0->f_36 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_option_visible", uParam10->f_43);
	uParam0->f_37 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_option_hash", uParam10->f_45);
	uParam0->f_42 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dleft_label", uParam10->f_48);
	uParam0->f_43 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dleft_enabled", uParam10->f_46);
	uParam0->f_44 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dleft_visible", uParam10->f_47);
	uParam0->f_45 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dleft_hash", uParam10->f_49);
	uParam0->f_46 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dright_label", uParam10->f_52);
	uParam0->f_47 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dright_enabled", uParam10->f_50);
	uParam0->f_48 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dright_visible", uParam10->f_51);
	uParam0->f_49 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dright_hash", uParam10->f_53);
	uParam0->f_50 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "inventory_item", uParam10->f_54);
	uParam0->f_51 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "inventory_item_slot", uParam10->f_55);
	return 1;
}

BOOL func_125() // Position - 0x2E3E Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_142(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_126() // Position - 0x2E5B Hash - 0x205D6BC ^0x1F9D7A3E
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_77("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_78(&unk, i, num, num2))
			{
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4))
			{
				num3 = num3 + 1;
			}
		}
	
		func_84(num);
	}

	return num3;
}

Hash func_127(Hash hParam0, BOOL bParam1) // Position - 0x2EC5 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_69(hParam0, 0))
		return 0;

	hash = func_143(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

BOOL func_128(Hash hParam0) // Position - 0x2EF3 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_144(hParam0) == joaat("WEAPON");
}

struct<2> func_129(int iParam0, Hash hParam1) // Position - 0x2F07 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = hParam1;
	return num;
}

struct<5> func_130(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x2F1D Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_98(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_144(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_150(hParam0, -1823706425))
			{
				unk = { func_65(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_150(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_65(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_65(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_150(hParam0, -1653629781))
			{
				unk = { func_65(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_148(bParam1) };
		
			switch (func_149(hParam0))
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
			unk = { func_65(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_64(bParam1) };
		
			if (iParam2 && func_145(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_146(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_146(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_147(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_151(unk, &unk28, bParam1, false, -1))
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
			else if (func_150(hParam0, -1653629781))
			{
				unk = { func_65(1384535894, unk, 1784584921, bParam1) };
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

int func_131(Hash hParam0) // Position - 0x3291 Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_69(hParam0, 0))
		return 0;

	category = func_149(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

Hash func_132(Hash hParam0, int iParam1) // Position - 0x32C0 Hash - 0x45A11D7D ^0x9148E520
{
	Hash category;
	int outSlotId;

	if (hParam0 != 0)
	{
		category = func_149(hParam0);
	
		if (category != 0)
			if (iParam1 >= 0 && iParam1 < func_131(hParam0))
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, iParam1, &outSlotId))
					return outSlotId;
	}

	return 0;
}

Hash func_133(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0x3304 Hash - 0x67107E64 ^0x67107E64
{
	return func_152(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_134(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x3318 Hash - 0x8216624 ^0x8887A1DF
{
	var unk;
	var unk23;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_69(hParam0, 0))
		return false;

	if (!func_153(hParam0, &unk23, &unk, hParam1))
		return false;

	if (!bParam2)
		if (func_147(hParam0, &unk, hParam1))
			return false;

	return true;
}

int func_135(Any* panParam0, int iParam1) // Position - 0x336A Hash - 0xAED9A956 ^0xB2CD34FD
{
	var unk;
	var weaponGuid;

	if (!func_66(panParam0))
		return 1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_97(false), panParam0, &unk, 22, 1))
		return 2;

	!WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_33, iParam1, &weaponGuid);

	if (func_81(panParam0) == 0)
	{
		if (func_66(&weaponGuid))
			if (func_154(panParam0, &weaponGuid))
				return 3;
	
		switch (func_155(panParam0))
		{
			case 3:
				return 5;
		}
	}

	if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4) && iParam1 == 9)
		if (!func_115())
			return 4;

	return 0;
}

BOOL func_136(int iParam0, var uParam1) // Position - 0x3413 Hash - 0xBF79061C ^0x2FF680E
{
	switch (iParam0)
	{
		case 2:
			*uParam1 = 1588146127;
			return true;
	
		case 3:
			*uParam1 = -327947319;
			return true;
	
		case 4:
			*uParam1 = 1000849983;
			return true;
	
		case 7:
		case 9:
			*uParam1 = 297513196;
			return true;
	
		case 8:
		case 10:
			*uParam1 = 108789798;
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_137(int iParam0, var uParam1) // Position - 0x348A Hash - 0xBF79061C ^0xA1A2349D
{
	switch (iParam0)
	{
		case 2:
			*uParam1 = -1313710397;
			return true;
	
		case 3:
			*uParam1 = -1756222973;
			return true;
	
		case 4:
			*uParam1 = 941907253;
			return true;
	
		case 7:
			*uParam1 = -466398939;
			return true;
	
		case 8:
			*uParam1 = -260514364;
			return true;
	
		case 9:
			*uParam1 = 1554581363;
			return true;
	
		case 10:
			*uParam1 = -946029012;
			return true;
	
		default:
		
	}

	return false;
}

int func_138(Any* panParam0) // Position - 0x3519 Hash - 0x2B3B8F75 ^0x4C466798
{
	var unk;

	if (!func_66(panParam0))
		return 1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_97(false), panParam0, &unk, 22, 1))
		return 2;

	if (func_81(panParam0) == 2)
		return 3;

	if (func_81(panParam0) == 0)
	{
		switch (func_155(panParam0))
		{
			case 1:
				return 1;
		
			case 2:
				return 2;
		
			case 3:
				return 4;
		}
	}

	return 0;
}

int func_139(Any* panParam0) // Position - 0x35A2 Hash - 0x2B3B8F75 ^0x4C466798
{
	var unk;

	if (!func_66(panParam0))
		return 1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_97(false), panParam0, &unk, 22, 1))
		return 1;

	if (func_81(panParam0) == 1)
		return 3;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(unk.f_4))
		return 5;

	if (func_81(panParam0) == 0)
	{
		switch (func_155(panParam0))
		{
			case 1:
				return 1;
		
			case 2:
				return 2;
		
			case 3:
				return 4;
		}
	}

	return 0;
}

BOOL func_140(int iParam0, var uParam1, var uParam2) // Position - 0x363A Hash - 0xBB027699 ^0x2CBE1AB0
{
	switch (iParam0)
	{
		case 0:
			*uParam2 = joaat("menu_textures");
			*uParam1 = joaat("menu_icon_holster");
			return true;
	
		case 1:
			*uParam2 = joaat("menu_textures");
			*uParam1 = joaat("menu_icon_on_horse");
			return true;
	
		case 2:
			*uParam2 = joaat("menu_textures");
			*uParam1 = -229529296;
			return true;
	
		default:
		
	}

	return false;
}

void func_141(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39) // Position - 0x3699 Hash - 0xD32DFB07 ^0x2C8C831
{
	func_156(uParam0, hParam1, uParam2, uParam10);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(15), &(uParam10.f_16));
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(21), uParam10.f_24);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(22), uParam10.f_25);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(23), uParam10.f_26);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(24), uParam10.f_27);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(25), uParam10.f_28);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(26), uParam10.f_29);
	return;
}

int func_142(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3746 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_157(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_97(bParam1), hParam0, bParam3);
}

Hash func_143(Hash hParam0, BOOL bParam1) // Position - 0x3779 Hash - 0xBBDA5425 ^0x53FE7679
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

int func_144(Hash hParam0) // Position - 0x381B Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_69(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

int func_145(Hash hParam0, BOOL bParam1) // Position - 0x3846 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_149(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_125();
		else
			return true;

	return false;
}

BOOL func_146(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x387D Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_158(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_147(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x3898 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_153(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_148(BOOL bParam0) // Position - 0x38B9 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_97(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_65(271701509, func_98(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_65(271701509, func_98(bParam0), 12999093, false);
}

Hash func_149(Hash hParam0) // Position - 0x3923 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_69(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_150(Hash hParam0, Hash hParam1) // Position - 0x394E Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_149(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_159(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_151(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x39BB Hash - 0x113CD144 ^0x113CD144
{
	return func_160(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_152(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x39D1 Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_161(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

BOOL func_153(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x39FF Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_97(false);
	*panParam1 = { func_65(hParam0, func_64(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_154(Any* panParam0, var uParam1) // Position - 0x3A44 Hash - 0x361C7388 ^0xEA068BC1
{
	if (*panParam0 == *uParam1 && panParam0->f_1 == uParam1->f_1 && panParam0->f_2 == uParam1->f_2 && panParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

int func_155(Any* panParam0) // Position - 0x3A85 Hash - 0x2B3B8F75 ^0x4C466798
{
	var unk;
	int num;

	if (!func_66(panParam0))
		return 1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_97(false), panParam0, &unk, 22, 1))
		return 2;

	num = unk.f_14;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4))
		if (num == 2)
			return 3;
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(unk.f_4))
		if (num == 4)
			return 3;

	return 0;
}

void func_156(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25) // Position - 0x3AF6 Hash - 0x281BEE62 ^0xC04633BE
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, &uParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0), bParam10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1), bParam10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2), bParam10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(57), bParam10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(58), bParam10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(60), bParam10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(59), bParam10.f_6);

	if (bParam10.f_7 == 0)
		bParam10.f_7 = joaat("IB_SELECT");

	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(61), bParam10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(62), "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(63), bParam10.f_8);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(64), bParam10.f_9);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(65), bParam10.f_10);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(71), bParam10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(66), bParam10.f_12);

	if (bParam10.f_13 == 0)
		bParam10.f_13 = joaat("IB_SELECT");

	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(68), bParam10.f_13);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(69), bParam10.f_14);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(70), bParam10.f_15);
	return;
}

BOOL func_157(Hash hParam0) // Position - 0x3C89 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_158(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x3C97 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_69(hParam0, 0))
		return 0;

	if (!bParam7 && func_162(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_65(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_97(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_97(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_159(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x3D16 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_160(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x3D49 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_97(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_161(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x3D83 Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_97(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return false;

	if (!func_160(&outGuid, panParam2, bParam3, false, iParam4))
		return false;

	return true;
}

int func_162(Hash hParam0, Hash hParam1) // Position - 0x3DD1 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_164(func_163(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

Hash func_163(Hash hParam0) // Position - 0x3DFD Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_164(Hash hParam0, int iParam1) // Position - 0x3E07 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

