#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
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
	var uLocal_23 = 4;
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
#endregion

void main() // Position - 0x0 Hash - 0xDDBA7A76 ^0xDDBA7A76
{
	func_1();

	if (func_2(&uLocal_0) == 1)
		func_3(&uLocal_0);

	if (func_4(&uLocal_0) == 1)
		func_3(&uLocal_0);

	func_5(&uLocal_0);
	func_3(&uLocal_0);
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

void func_3(var uParam0) // Position - 0x95 Hash - 0x149DF29D ^0xBCCAA9D2
{
	func_11(false, -1);
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

int func_4(var uParam0) // Position - 0xCF Hash - 0x59156147 ^0xF594BF58
{
	if (!func_16(joaat("weapon_locker")))
		return 1;

	return 0;
}

void func_5(int* piParam0) // Position - 0xE9 Hash - 0xF29ACF4F ^0x3E713E52
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

void func_6(int* piParam0, Hash hParam1) // Position - 0x13D Hash - 0x4F8BE4B5 ^0x2E599B99
{
	piParam0->f_1 = hParam1;
	return;
}

BOOL func_7(int* piParam0) // Position - 0x14B Hash - 0x4267EC61 ^0xC765850E
{
	piParam0->f_94 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "weapon_locker");

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_94))
		return false;

	piParam0->f_94.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(piParam0->f_94, "header_text", MISC::VAR_STRING(2, "WL_HEADER"));
	piParam0->f_94.f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(piParam0->f_94, "footer_text", "");
	piParam0->f_94.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(piParam0->f_94, "footer_color", joaat("COLOR_WHITE"));
	return true;
}

BOOL func_8(int* piParam0) // Position - 0x1B2 Hash - 0xA1A7C0C6 ^0x204C3E59
{
	var unk;
	char* str;
	int i;

	if (!func_19(piParam0, &(piParam0->f_94)))
		return false;

	if (!func_20(&(piParam0->f_2.f_2), &(piParam0->f_2), &unk))
		return false;

	if (func_21(&(piParam0->f_2.f_13), &(piParam0->f_2), 1673159803))
	{
		func_22(&(piParam0->f_2.f_13));
	
		for (i = 0; i < 4; i = i + 1)
		{
			str = func_23(i);
			str = MISC::VAR_STRING(2, str);
			!func_24(&(piParam0->f_2.f_13), &(piParam0->f_2.f_21), i, str);
		}
	}
	else
	{
		return false;
	}

	return true;
}

void func_9(int* piParam0, Hash hParam1) // Position - 0x247 Hash - 0x788316B1 ^0x788316B1
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

void func_10(int* piParam0) // Position - 0x292 Hash - 0xBD922E20 ^0x26455A55
{
	var weaponGuid;
	var unk4;
	int i;
	Hash hash;

	unk4.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < 29; i = i + 1)
	{
		hash = func_30(Global_35, i, true, false);
	
		if (func_31(hash))
			if (WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, i, &weaponGuid) && INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, &weaponGuid, &unk4, 22, 1))
				if (!unk4.f_21)
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, i, false, false);
	}

	WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, true, false);
	return;
}

void func_11(BOOL bParam0, int iParam1) // Position - 0x315 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_32(&Global_0, 8);

	if (!func_33() || func_34() != -1)
		return;

	func_32(&Global_0, 1);
	return;
}

void func_12() // Position - 0x35B Hash - 0xCE5FB49E ^0xE3F45977
{
	TELEMETRY::_TELEMETRY_GUN_LOCKER();
	return;
}

void func_13(var uParam0) // Position - 0x367 Hash - 0xDA6BE269 ^0x755802F6
{
	if (!UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("weapon_locker")))
		return;

	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("weapon_locker"));
	GRAPHICS::_0x26DD2FB0A88CC412("WheelHUDIn", "WheelHUDOut", 0, 0);
	MISC::SET_TIME_SCALE(1f);
	return;
}

BOOL func_14(var uParam0) // Position - 0x399 Hash - 0xFE183358 ^0x75F042AE
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_94))
		return false;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_94);
	return true;
}

BOOL func_15(var uParam0) // Position - 0x3BA Hash - 0x2C6DB77F ^0x2C6DB77F
{
	!func_35(uParam0);
	return true;
}

BOOL func_16(Hash hParam0) // Position - 0x3CD Hash - 0x234EED56 ^0x8024E666
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

void func_17(int* piParam0) // Position - 0x411 Hash - 0xBF54577C ^0x7634125B
{
	var eventData;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(1600976403))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(1600976403, &eventData))
		{
			func_36(piParam0, &eventData);
			UIEVENTS::EVENTS_UI_POP_MESSAGE(1600976403);
		}
	}

	if (func_37(piParam0))
	{
		eventData = { func_38(piParam0) };
		func_36(piParam0, &eventData);
		func_39(piParam0);
	}

	return;
}

void func_18(int* piParam0) // Position - 0x468 Hash - 0x5E41C331 ^0x5E41C331
{
	var unk;

	if (func_37(piParam0))
	{
		unk = { func_38(piParam0) };
		func_36(piParam0, &unk);
		func_39(piParam0);
	}

	return;
}

BOOL func_19(int* piParam0, var uParam1) // Position - 0x491 Hash - 0x380A8E8F ^0x94E6D2F7
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	piParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, "weapons_page");

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2))
		return false;

	piParam0->f_2.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(piParam0->f_2, "weapon_list");

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_1))
		DATABINDING::_0x3BF0767CF33FCC88(piParam0->f_2.f_1);

	piParam0->f_2.f_90 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(piParam0->f_2, "weapon_list_hint_visible", false);
	piParam0->f_2.f_91 = DATABINDING::_DATABINDING_ADD_DATA_HASH(piParam0->f_2, "weapon_list_hint_label", 0);
	return true;
}

BOOL func_20(var uParam0, var uParam1, var uParam2) // Position - 0x513 Hash - 0xEDCEF3A5 ^0xDAC1772A
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

BOOL func_21(var uParam0, var uParam1, int iParam2) // Position - 0x59C Hash - 0x4132DB80 ^0x9F7DAD71
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabCount", 0);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam1, "tabName", "");
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabIndex", 0);
	uParam0->f_7 = iParam2;
	uParam0->f_5 = 1;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	return true;
}

void func_22(var uParam0) // Position - 0x600 Hash - 0xBA5A1D5A ^0x4F00F904
{
	uParam0->f_4 = 0;
	return;
}

char* func_23(int iParam0) // Position - 0x60D Hash - 0xE5247562 ^0x35761C5
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

BOOL func_24(var uParam0, var uParam1, int iParam2, char* sParam3) // Position - 0x655 Hash - 0xFB56C236 ^0x52F73A10
{
	var unk;

	unk = *uParam1;

	if (uParam0->f_4 >= unk)
		return false;

	if (!uParam0->f_5)
		return false;

	uParam1->[uParam0->f_4 /*17*/] = iParam2;
	uParam1->[uParam0->f_4 /*17*/].f_1 = { func_40(sParam3) };
	uParam0->f_4 = uParam0->f_4 + 1;
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_1, uParam0->f_4);
	return true;
}

Hash _STOPWATCH_IS_INITIALIZED(int* piParam0) // Position - 0x6AF Hash - 0xD73B9827 ^0x2D8CE86B
{
	return piParam0->f_1;
}

void func_26(int* piParam0, int iParam1) // Position - 0x6BB Hash - 0xEB69817E ^0xEB69817E
{
	switch (iParam1)
	{
		case -488492526:
			func_41(piParam0);
			break;
	}

	return;
}

void func_27(int* piParam0, int iParam1) // Position - 0x6DA Hash - 0x930D7E6D ^0xC9A3AECF
{
	switch (iParam1)
	{
		case -488492526:
			func_42(&(piParam0->f_2.f_13));
			break;
	}

	return;
}

void func_28(int* piParam0, int iParam1) // Position - 0x6FD Hash - 0xEB69817E ^0xEB69817E
{
	switch (iParam1)
	{
		case -488492526:
			func_43(piParam0);
			break;
	}

	return;
}

void func_29(int* piParam0, int iParam1) // Position - 0x71C Hash - 0x3A07F25D ^0xFE90C07D
{
	switch (iParam1)
	{
		case -488492526:
			func_44(&(piParam0->f_2.f_13), &(piParam0->f_2.f_21));
			break;
	}

	return;
}

Hash func_30(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x745 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	Hash weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

BOOL func_31(Hash hParam0) // Position - 0x76B Hash - 0xC7E25F4D ^0xAFFF9E4
{
	if (!func_45(hParam0, 0))
		return false;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	if (!WEAPON::IS_WEAPON_A_GUN(hParam0) && !WEAPON::IS_WEAPON_BOW(hParam0))
		return false;

	return true;
}

void func_32(Hash hParam0, int iParam1) // Position - 0x7AB Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_33() // Position - 0x7BE Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_34() // Position - 0x7DD Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_35(var uParam0) // Position - 0x7EB Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_36(int* piParam0, Any* panParam1) // Position - 0x7F4 Hash - 0x1C8F06F ^0x1A0A36F7
{
	int num;

	num = panParam1->f_2;

	switch (*panParam1)
	{
		case -1740156697:
			if (func_47(&(piParam0->f_2.f_13)))
			{
			}
			else
			{
				func_48(piParam0, panParam1);
			
				switch (num)
				{
					case -2060496899:
					case -1694113483:
					case -1174213347:
					case -337881065:
						!func_49(piParam0, &(panParam1->f_3));
						!func_50(&(piParam0->f_2.f_2), &(panParam1->f_3));
						break;
				}
			
				func_51(piParam0, num);
			}
			break;
	
		case -1203660660:
			switch (num)
			{
				case -1756222973:
					if (func_52(&(panParam1->f_3), 3))
						func_53(piParam0, 0, true);
					break;
			
				case -1313710397:
					if (func_52(&(panParam1->f_3), 2))
						func_53(piParam0, 0, true);
					break;
			
				case -1103499950:
					if (func_55(&(panParam1->f_3)))
						func_53(piParam0, 0, true);
					break;
			
				case -1073027202:
					if (func_54(&(panParam1->f_3)))
						func_53(piParam0, 0, true);
					break;
			
				case -946029012:
					if (func_52(&(panParam1->f_3), 10))
						func_53(piParam0, 0, true);
					break;
			
				case -466398939:
					if (func_52(&(panParam1->f_3), 7))
						func_53(piParam0, 0, true);
					break;
			
				case -260514364:
					if (func_52(&(panParam1->f_3), 8))
						func_53(piParam0, 0, true);
					break;
			
				case 941907253:
					if (func_52(&(panParam1->f_3), 4))
						func_53(piParam0, 0, true);
					break;
			
				case 1554581363:
					if (func_52(&(panParam1->f_3), 9))
						func_53(piParam0, 0, true);
					break;
			}
			break;
	
		case -722926211:
		case 703281244:
			switch (num)
			{
				case 752670436:
					func_42(&(piParam0->f_2.f_13));
					func_56(piParam0);
					break;
			}
			break;
	
		case -632467210:
			func_46(piParam0);
			break;
	}

	return;
}

BOOL func_37(int* piParam0) // Position - 0x9EA Hash - 0x8B3FCE29 ^0x8A02B15F
{
	return piParam0->f_98 != 0;
}

struct<4> func_38(int* piParam0) // Position - 0x9F8 Hash - 0x612706C5 ^0x31BA83A8
{
	return piParam0->f_98;
}

void func_39(int* piParam0) // Position - 0xA06 Hash - 0x52F2889C ^0xCD496105
{
	var unk;

	piParam0->f_98 = 0;
	piParam0->f_98.f_2 = 0;
	piParam0->f_98.f_1 = 0;
	piParam0->f_98.f_3 = unk;
	return;
}

struct<16> func_40(char* sParam0) // Position - 0xA29 Hash - 0x31426419 ^0x31426419
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 128);
	return unk;
}

void func_41(int* piParam0) // Position - 0xA3C Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_42(var uParam0) // Position - 0xA44 Hash - 0x4616217C ^0x9EF933C7
{
	if (!uParam0->f_5)
		return;

	uParam0->f_6 = 1;
	return;
}

void func_43(int* piParam0) // Position - 0xA5C Hash - 0x6F9EB04 ^0xF6D7AD79
{
	int num;

	if (func_47(&(piParam0->f_2.f_13)))
		func_53(piParam0, 0, true);

	if (func_57(piParam0, 0))
	{
		func_53(piParam0, 0, false);
		num = func_58(piParam0);
		!func_59(piParam0, num);
		func_60(piParam0);
		func_61(piParam0, num);
		func_62(piParam0, num);
	}

	return;
}

void func_44(var uParam0, var uParam1) // Position - 0xAB5 Hash - 0xD65D5CE6 ^0xABE4F0F5
{
	int num;
	int num2;
	int num3;
	int num4;

	if (!uParam0->f_6)
		return;

	if (!uParam0->f_5)
	{
		uParam0->f_6 = 0;
		return;
	}

	num = func_63(uParam0);

	if (num == -1)
	{
		uParam0->f_6 = 0;
		return;
	}

	num2 = *uParam1;
	num3 = func_64(uParam0);
	num4 = num3 - 1;

	if (num < 0 || num > num4)
	{
		uParam0->f_6 = 0;
		return;
	}

	if (num2 < num3)
	{
		uParam0->f_6 = 0;
		return;
	}

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, &(uParam1->[num /*17*/].f_1));
	uParam0->f_6 = 0;
	return;
}

BOOL func_45(Hash hParam0, int iParam1) // Position - 0xB3F Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_46(int* piParam0) // Position - 0xB59 Hash - 0xDB5B81B0 ^0x2354C26E
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_94.f_2))
		return 0;

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(piParam0->f_94.f_2, "");
	return 1;
}

BOOL func_47(var uParam0) // Position - 0xB80 Hash - 0xD73B9827 ^0xA4E0D7D7
{
	return uParam0->f_6;
}

int func_48(int* piParam0, Any* panParam1) // Position - 0xB8C Hash - 0x4C18E88C ^0x780715C5
{
	if (*panParam1 == 0)
		return 0;

	MISC::COPY_SCRIPT_STRUCT(&(piParam0->f_102), panParam1, 4);
	return 1;
}

BOOL func_49(int* piParam0, var uParam1) // Position - 0xBAB Hash - 0x6F4909FF ^0x6E23C39B
{
	Hash hash;
	Hash hash2;
	var unk;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item");
	hash2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item_slot");
	unk = { func_66(hash, func_65(false), hash2, false) };

	if (!func_67(&unk))
		return false;

	func_68(piParam0, unk);
	return true;
}

BOOL func_50(var uParam0, var uParam1) // Position - 0xC08 Hash - 0x78C12D57 ^0x44C6EF83
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

void func_51(int* piParam0, int iParam1) // Position - 0xC7F Hash - 0x72C9FF4E ^0x72C9FF4E
{
	switch (iParam1)
	{
		case -2060496899:
		case -1694113483:
		case -1174213347:
		case -337881065:
			if (!func_69(piParam0, iParam1))
				func_46(piParam0);
			break;
	
		default:
			func_46(piParam0);
			break;
	}

	return;
}

BOOL func_52(var uParam0, int iParam1) // Position - 0xCC7 Hash - 0x869F6CEE ^0xCF846BE3
{
	Hash hash;
	Hash hash2;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");

	if (!func_45(hash, 0))
		return false;

	hash2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");

	if (!func_70(hash, hash2, iParam1))
		return false;

	return true;
}

void func_53(int* piParam0, int iParam1, BOOL bParam2) // Position - 0xD1A Hash - 0x7FDB839F ^0x7FDB839F
{
	if (bParam2)
		func_71(piParam0, iParam1);
	else
		func_72(piParam0, iParam1);

	return;
}

BOOL func_54(var uParam0) // Position - 0xD3A Hash - 0xC8C4CA88 ^0x60BD1CF2
{
	Hash hash;
	Hash hash2;
	var unk;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");

	if (!func_45(hash, 0))
		return false;

	hash2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	unk = { func_66(hash, func_65(false), hash2, false) };

	if (!func_67(&unk))
		return false;

	if (!func_73(&unk))
		return false;

	return true;
}

BOOL func_55(var uParam0) // Position - 0xDA9 Hash - 0xC8C4CA88 ^0x60BD1CF2
{
	Hash hash;
	Hash hash2;
	var unk;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");

	if (!func_45(hash, 0))
		return false;

	hash2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	unk = { func_66(hash, func_65(false), hash2, false) };

	if (!func_67(&unk))
		return false;

	if (!func_74(&unk))
		return false;

	return true;
}

void func_56(int* piParam0) // Position - 0xE18 Hash - 0x9D05C6E9 ^0x63B30965
{
	func_75(&(piParam0->f_2.f_9));
	return;
}

BOOL func_57(int* piParam0, int iParam1) // Position - 0xE2A Hash - 0x320397CF ^0x320397CF
{
	return func_76(*piParam0, iParam1);
}

int func_58(int* piParam0) // Position - 0xE3B Hash - 0xCE3AB88B ^0xAF8EC95B
{
	return func_77(&(piParam0->f_2.f_13), &(piParam0->f_2.f_21));
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_59(int* piParam0, int iParam1) // Position - 0xE53 Hash - 0xF49BA925 ^0x7345E399
{
	int num;
	int num2;
	var unk;
	int num3;
	int num4;
	int i;
	int j;

	if (!func_78("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), true))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	num4 = 0;

	for (j = 0; j < 7; j = j + 1)
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_79(&unk, i, num, num2))
			{
			}
			else if (!func_31(unk.f_4))
			{
			}
			else if (func_80(unk.f_4, unk.f_9))
			{
			}
			else if (func_81(unk.f_4) != j)
			{
			}
			else
			{
				num3 = func_82(&unk);
			
				if (iParam1 != 0)
				{
					switch (num3)
					{
						case -1:
							goto 0xFF;
					
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
			
				if (!func_83(piParam0, num4, unk.f_4, unk.f_9, num3, iParam1))
				{
				}
				else
				{
					num4 = num4 + 1;
				}
			}
		}
	}

	!func_84(piParam0, num4);
	!func_85(num);
	return true;
}

void func_60(int* piParam0) // Position - 0xF7E Hash - 0x6BC77294 ^0x50F57D6A
{
	int num;

	num = func_86(piParam0);
	func_87(&(piParam0->f_2.f_2), func_86(piParam0) > 0);

	if (num == 0)
		func_88(&(piParam0->f_2.f_2));

	return;
}

void func_61(int* piParam0, int iParam1) // Position - 0xFB2 Hash - 0xAE4BEAC3 ^0x9BCA38B4
{
	int num;

	num = func_86(piParam0);

	switch (iParam1)
	{
		case 1:
			func_89(piParam0, num == 0);
			func_90(piParam0, -2012945523);
			break;
	
		case 2:
			func_89(piParam0, num == 0);
			func_90(piParam0, -1705332461);
			break;
	
		default:
			func_89(piParam0, false);
			break;
	}

	return;
}

void func_62(int* piParam0, int iParam1) // Position - 0x1015 Hash - 0xFC05C2C5 ^0x48308472
{
	int num;
	int num2;

	num = func_86(piParam0);

	if (num > 0)
	{
		num2 = -1740156697;
	
		if (func_47(&(piParam0->f_2.f_13)))
		{
			num2.f_1 = 0;
		}
		else
		{
			num2.f_1 = func_91(piParam0);
		
			if (num2.f_1 >= num)
				num2.f_1 = num - 1;
		}
	
		num2.f_2 = func_92(iParam1);
		!func_93(piParam0, num2.f_1, &(num2.f_3));
		!func_94(piParam0, &num2);
	}

	return;
}

int func_63(var uParam0) // Position - 0x108A Hash - 0x3FA5F351 ^0xA0540300
{
	if (!uParam0->f_5)
		return -1;

	return DATABINDING::DATABINDING_READ_INT(uParam0->f_3);
}

int func_64(var uParam0) // Position - 0x10A6 Hash - 0xD73B9827 ^0xC9499D4A
{
	return uParam0->f_4;
}

struct<4> func_65(BOOL bParam0) // Position - 0x10B2 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_95(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_66(923904168, func_96(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_66(923904168, func_96(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_66(923904168, func_96(bParam0), -740156546, false);
}

struct<4> func_66(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1147 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_45(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_95(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_67(Any* panParam0) // Position - 0x1178 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

int func_68(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x11AE Hash - 0xDD467B3A ^0x51484473
{
	if (!func_67(&uParam1))
		return 0;

	MISC::COPY_SCRIPT_STRUCT(&(piParam0->f_2.f_9), &uParam1, 4);
	return 1;
}

BOOL func_69(int* piParam0, int iParam1) // Position - 0x11D2 Hash - 0xF3B474D4 ^0x1C1E9E7F
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

	guid = { func_97(piParam0) };

	if (func_67(&guid))
	{
		unk4.f_9 = joaat("SLOTID_NONE");
	
		if (INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, &guid, &unk4, 22, 1))
		{
		}
	
		switch (func_98(&guid))
		{
			case 3:
				func_99(piParam0, MISC::VAR_STRING(2, "WL_FOOTER_ALWAYS_MELEE"));
				return true;
		
			case 4:
				if (!func_100(func_30(Global_35, 2, true, false)))
					func_99(piParam0, MISC::VAR_STRING(2, "WL_FOOTER_ALWAYS_SIDEARMS"));
			
				return true;
		
			case 5:
				func_99(piParam0, MISC::VAR_STRING(2, "WL_FOOTER_ALWAYS_SIDEARMS"));
				return true;
		}
	}

	if (func_86(piParam0) > 0)
		func_99(piParam0, MISC::VAR_STRING(2, str, func_86(piParam0)));
	else
		func_46(piParam0);

	return true;
}

BOOL func_70(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x12F1 Hash - 0x10454CC8 ^0x471C3D01
{
	int num;
	var guid;
	var unk4;
	int attachPoint;
	var unk26;
	var weaponGuid;
	Hash weaponHash;

	guid = { func_66(hParam0, func_65(false), hParam1, false) };
	unk4.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, &guid, &unk4, 22, 1))
		return false;

	num = unk4.f_14;
	unk26.f_9 = joaat("SLOTID_NONE");

	if (WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, iParam2, &weaponGuid) && func_31(func_30(Global_35, iParam2, true, false)))
	{
		if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, &weaponGuid, &unk26, 22, 1))
			return false;
	
		weaponHash = func_30(Global_35, iParam2, true, false);
		attachPoint = unk26.f_14;
	}
	else if (WEAPON::IS_WEAPON_BOW(hParam0) || WEAPON::_IS_WEAPON_TWO_HANDED(hParam0))
	{
		if (WEAPON::IS_WEAPON_BOW(hParam0))
		{
			switch (num)
			{
				case 7:
					attachPoint = 10;
					break;
			
				case 8:
					attachPoint = 9;
					break;
			}
		}
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(hParam0))
		{
			switch (num)
			{
				case 9:
					attachPoint = 8;
					break;
			
				case 10:
					attachPoint = 7;
					break;
			}
		}
	
		weaponHash = func_30(Global_35, attachPoint, true, false);
	
		if (WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, attachPoint, &weaponGuid) && func_31(weaponHash))
		{
			if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, &weaponGuid, &unk26, 22, 1))
				return false;
		
			if (WEAPON::IS_WEAPON_BOW(weaponHash))
			{
				switch (attachPoint)
				{
					case 7:
						num = 8;
						break;
				
					case 8:
						num = 7;
						break;
				}
			}
			else if (WEAPON::_IS_WEAPON_TWO_HANDED(hParam0))
			{
				switch (attachPoint)
				{
					case 9:
						num = 10;
						break;
				
					case 10:
						num = 9;
						break;
				}
			}
		}
	}

	if (func_82(&unk4) == 2)
		func_101(unk4.f_4);

	if (func_102(&guid, &iParam2, true))
	{
	}

	if (func_67(&weaponGuid))
	{
		if (func_103(weaponHash, attachPoint, num))
		{
			if (func_102(&unk26, &num, true))
			{
			}
		}
	}

	return true;
}

void func_71(int* piParam0, int iParam1) // Position - 0x14DF Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_72(int* piParam0, int iParam1) // Position - 0x14EF Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

BOOL func_73(Any* panParam0) // Position - 0x14FF Hash - 0xCFBF989 ^0x4D4C60C0
{
	var guid2;

	guid2.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, panParam0, &guid2, 22, 1))
		return false;

	guid2.f_21 = 0;

	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(1, panParam0, &guid2, 22))
		return false;

	func_104(guid2.f_4);

	if (ENTITY::DOES_ENTITY_EXIST(func_105(0)) && func_100(WEAPON::_0xAFFD0CCF31F469B8(func_105(0))) && WEAPON::_0xAFFD0CCF31F469B8(func_105(0)) == guid2.f_4)
		WEAPON::_0xD4C6E24D955FF061(func_105(0));

	if (ENTITY::DOES_ENTITY_EXIST(func_105(1)) && func_100(WEAPON::_0xAFFD0CCF31F469B8(func_105(1))) && WEAPON::_0xAFFD0CCF31F469B8(func_105(1)) == guid2.f_4)
		WEAPON::_0xD4C6E24D955FF061(func_105(1));

	if (guid2.f_14 >= 0)
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, guid2.f_14, false, false);

	return true;
}

BOOL func_74(Any* panParam0) // Position - 0x15DB Hash - 0x4E2EC9F2 ^0xF5FB385
{
	var guid2;

	guid2.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, panParam0, &guid2, 22, 1))
		return false;

	guid2.f_21 = 1;

	if (func_82(&guid2) == 2)
		func_101(guid2.f_4);

	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(1, panParam0, &guid2, 22))
		return false;

	if (guid2.f_14 >= 0)
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, guid2.f_14, false, false);

	return true;
}

void func_75(var uParam0) // Position - 0x164D Hash - 0xA4B72113 ^0x62A5EAE1
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

BOOL func_76(int iParam0, int iParam1) // Position - 0x1668 Hash - 0x2ACCF512 ^0x4D8BE70B
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

int func_77(var uParam0, var uParam1) // Position - 0x1678 Hash - 0x5C953B81 ^0x84BC9705
{
	int num;
	int num2;

	if (!uParam0->f_5)
		return -1;

	num = *uParam1;
	num2 = DATABINDING::DATABINDING_READ_INT(uParam0->f_3);

	if (num2 < 0 || num2 >= num)
		return -1;

	return uParam1->[num2 /*17*/];
}

BOOL func_78(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x16B7 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_95(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_79(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x16DE Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_80(Hash hParam0, Hash hParam1) // Position - 0x1719 Hash - 0x1D2EEF87 ^0x3550B9DE
{
	var unk;
	var unk23;

	if (!func_100(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_106(hParam0, &unk23, &unk, hParam1))
		return false;

	return func_107(hParam0, &unk, hParam1);
}

int func_81(Hash hParam0) // Position - 0x175C Hash - 0x76E14D17 ^0x4414B921
{
	if (!func_31(hParam0))
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

int func_82(Any* panParam0) // Position - 0x17D0 Hash - 0x960F6E3 ^0x561342A2
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, panParam0, &unk, 22, 1))
		return -1;

	if (!unk.f_21)
		return 2;
	else if (unk.f_21 && unk.f_14 != -1)
		return 0;
	else if (unk.f_21 && unk.f_14 == -1)
		return 1;

	return -1;
}

BOOL func_83(int* piParam0, int iParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5) // Position - 0x183A Hash - 0xD21C18BB ^0x62ADA237
{
	var unk;
	BOOL flag;
	var unk48;

	if (!func_31(hParam2))
		return false;

	unk = 1;
	unk.f_1 = 1;
	unk.f_2 = joaat("COLOR_WHITE");
	unk.f_4 = -1;
	unk.f_5 = -1134602452;
	unk.f_6 = 1276832712;

	if (!func_108(hParam2, hParam3, &unk, iParam4, iParam5))
		return false;

	flag = true;

	if (iParam1 < func_86(piParam0))
		if (func_93(piParam0, iParam1, &unk48))
			if (func_109(&unk48, &unk))
				flag = false;

	if (flag)
		if (!func_110(piParam0, &unk))
			return false;

	return true;
}

BOOL func_84(int* piParam0, int iParam1) // Position - 0x18DD Hash - 0x560E2AF7 ^0x9D1AD6D2
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

BOOL func_85(int iParam0) // Position - 0x1944 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return false;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return false;

	return true;
}

int func_86(int* piParam0) // Position - 0x1965 Hash - 0xFD4DED7A ^0x92C076E3
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_1))
		return 0;

	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2.f_1);
}

int func_87(var uParam0, BOOL bParam1) // Position - 0x1989 Hash - 0xB3DF0E1C ^0xE65853BC
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return 0;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, bParam1);
	return 1;
}

int func_88(var uParam0) // Position - 0x19AB Hash - 0xED70156C ^0x333CDC1B
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, 0);
	return 1;
}

int func_89(int* piParam0, BOOL bParam1) // Position - 0x19E1 Hash - 0x9DB1EDD0 ^0x6FB456A5
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_90))
		return 0;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(piParam0->f_2.f_90, bParam1);
	return 1;
}

int func_90(int* piParam0, Hash hParam1) // Position - 0x1A08 Hash - 0x9DB1EDD0 ^0x199DB15D
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_91))
		return 0;

	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(piParam0->f_2.f_91, hParam1);
	return 1;
}

var func_91(int* piParam0) // Position - 0x1A2F Hash - 0x92708AC8 ^0x90AE47C7
{
	return piParam0->f_102.f_1;
}

int func_92(int iParam0) // Position - 0x1A3D Hash - 0x51E02475 ^0xE44745B7
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

BOOL func_93(int* piParam0, int iParam1, var uParam2) // Position - 0x1A86 Hash - 0x2E483C5E ^0x742FA5DB
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_1))
		return false;

	if (iParam1 < 0 || iParam1 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2.f_1))
		return false;

	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(piParam0->f_2.f_1, iParam1);
	return true;
}

BOOL func_94(int* piParam0, Any* panParam1) // Position - 0x1ACE Hash - 0x3487559 ^0xF52C6E32
{
	if (*panParam1 == 0)
		return false;

	if (piParam0->f_98 != 0)
		return false;

	MISC::COPY_SCRIPT_STRUCT(&(piParam0->f_98), panParam1, 4);
	return true;
}

int func_95(BOOL bParam0) // Position - 0x1AF9 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_34() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_96(BOOL bParam0) // Position - 0x1B3A Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_66(joaat("character"), func_111(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_97(int* piParam0) // Position - 0x1B56 Hash - 0xDE5BB377 ^0x3EE7A827
{
	return piParam0->f_2.f_9;
}

int func_98(Any* panParam0) // Position - 0x1B66 Hash - 0x2B3B8F75 ^0x4C466798
{
	var unk;
	int num;

	if (!func_67(panParam0))
		return 1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(false), panParam0, &unk, 22, 1))
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

int func_99(int* piParam0, const char* sParam1) // Position - 0x1BD0 Hash - 0x9DB1EDD0 ^0x227BE28F
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_94.f_2))
		return 0;

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(piParam0->f_94.f_2, sParam1);
	return 1;
}

BOOL func_100(Hash hParam0) // Position - 0x1BF7 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_101(Hash hParam0) // Position - 0x1C12 Hash - 0x18CA11FF ^0xC1431CC
{
	if (!func_45(hParam0, 0))
		return 0;

	TELEMETRY::_TELEMETRY_GUN_LOCKER_WEAPON_REMOVED(hParam0);
	return 1;
}

BOOL func_102(Any* panParam0, var uParam1, BOOL bParam2) // Position - 0x1C30 Hash - 0xEDDBA09E ^0xC02A2F2C
{
	var guid2;
	var data;
	var outData;
	Hash labelHash;
	var unk42;
	var unk50;

	guid2.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(1, panParam0, &guid2, 22, 1))
		return false;

	guid2.f_21 = 1;

	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(1, panParam0, &guid2, 22))
		return false;

	data.f_7 = 752097756;
	data.f_8 = 1056964608;
	data.f_9 = 1065353216;
	data.f_4 = guid2.f_4;
	data = { guid2 };
	data.f_6 = *uParam1;
	data.f_12 = 1;

	if (WEAPON::GIVE_WEAPON_TO_PED_WITH_OPTIONS(Global_35, &data, &outData))
	{
	}
	else
	{
		return false;
	}

	if (bParam2)
	{
		if (func_112(data.f_6, &labelHash))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk42, func_113(data.f_4), 64);
			TEXT_LABEL_ASSIGN_STRING(&unk50, HUD::GET_STRING_FROM_HASH_KEY(labelHash), 64);
			func_114(MISC::VAR_STRING(42, "WL_TICKER_EQUIPPED_TO", &unk42, &unk50), -2, 0, 0, 0, true);
		}
	}

	return true;
}

BOOL func_103(Hash hParam0, int iParam1, int iParam2) // Position - 0x1D0B Hash - 0x6FE28036 ^0xAAE164D3
{
	if (!func_45(hParam0, 0))
		return false;

	if (WEAPON::IS_WEAPON_BOW(hParam0))
	{
		if (iParam1 == 8 && iParam2 == 7)
			return true;
	
		if (iParam2 == 8 && iParam1 == 7)
			return true;
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(hParam0))
	{
		if (iParam1 == 10 && iParam2 == 9)
			return true;
	
		if (iParam2 == 10 && iParam1 == 9)
			return true;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
	{
		if (iParam1 == 3 && iParam2 == 2)
			return true;
	
		if (iParam2 == 3 && iParam1 == 2)
			return true;
	}

	return false;
}

int func_104(Hash hParam0) // Position - 0x1DC2 Hash - 0x18CA11FF ^0x78622C76
{
	if (!func_45(hParam0, 0))
		return 0;

	TELEMETRY::_TELEMETRY_GUN_LOCKER_WEAPON_STORED(hParam0);
	return 1;
}

Ped func_105(int iParam0) // Position - 0x1DE0 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_115(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_106(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x1E0C Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_95(false);
	*panParam1 = { func_66(hParam0, func_65(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_107(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1E51 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_106(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

BOOL func_108(Hash hParam0, Hash hParam1, var uParam2, int iParam3, int iParam4) // Position - 0x1E72 Hash - 0xCD4055B2 ^0xB03968E3
{
	var unk;

	if (!func_31(hParam0))
		return false;

	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_95(true), hParam0, false) > 1)
		if (func_116(hParam1, &(uParam2->f_22), &(uParam2->f_21)))
			uParam2->f_23 = 1;

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

	TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_10), func_113(hParam0), 64);
	!func_117(hParam0, &unk, hParam1);
	uParam2->f_24 = unk;
	uParam2->f_25 = unk.f_1;
	uParam2->f_26 = unk.f_4;
	uParam2->f_27 = unk.f_2;
	uParam2->f_28 = unk.f_3;
	uParam2->f_8 = 0;
	uParam2->f_9 = 0;

	if (!func_118(hParam0, hParam1, uParam2))
		return false;

	if (!func_119(iParam3, uParam2))
		return false;

	uParam2->f_45 = hParam0;
	uParam2->f_46 = hParam1;
	return true;
}

BOOL func_109(var uParam0, var uParam1) // Position - 0x1F83 Hash - 0xDA25DB62 ^0xC69E97FC
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0), *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1), uParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2), uParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(53), uParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(54), uParam1->f_4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(56), uParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(55), uParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(57), uParam1->f_7);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(58), uParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(59), uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(9), uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(10), uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(11), uParam1->f_23);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(15), &(uParam1->f_10));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(21), uParam1->f_18);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(22), uParam1->f_19);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(23), uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_damage", uParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_range", uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_accuracy", uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_firerate", uParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_reload", uParam1->f_28);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_label", uParam1->f_31);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_enabled", uParam1->f_29);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_visible", uParam1->f_30);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_hash", uParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_label", uParam1->f_35);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_visible", uParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_hash", uParam1->f_36);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_label", uParam1->f_39);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_enabled", uParam1->f_37);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_visible", uParam1->f_38);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_hash", uParam1->f_40);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_label", uParam1->f_43);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_enabled", uParam1->f_41);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_visible", uParam1->f_42);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_hash", uParam1->f_44);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item", uParam1->f_45);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot", uParam1->f_46);
	return true;
}

BOOL func_110(int* piParam0, var uParam1) // Position - 0x2211 Hash - 0x8E51C065 ^0xDA1D07DD
{
	var unk;
	Any any;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2))
		return false;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(piParam0->f_2.f_1))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, "Entry_", 64);
	TEXT_LABEL_APPEND_INT(&unk, DATABINDING::_DATABINDING_GET_ARRAY_COUNT(piParam0->f_2.f_1), 64);
	func_121(&any, piParam0->f_2.f_1, unk, uParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(piParam0->f_2.f_1, -1, "pm_dynamic_text_and_end_image", any);
	return true;
}

struct<4> func_111() // Position - 0x2277 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_112(int iParam0, var uParam1) // Position - 0x2283 Hash - 0xBF79061C ^0x5E68774D
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
	
		case 7:
		case 9:
			*uParam1 = 1282885388;
			return true;
	
		case 8:
		case 10:
			*uParam1 = -1522249011;
			return true;
	
		default:
		
	}

	return false;
}

char* func_113(Hash hParam0) // Position - 0x22FA Hash - 0xAB6C13C3 ^0xD557D7C8
{
	if (!func_45(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_122(hParam0));
}

int func_114(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x231C Hash - 0x8EBD6187 ^0x42F0F0AC
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

int func_115(int iParam0) // Position - 0x2357 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_116(int iParam0, var uParam1, var uParam2) // Position - 0x2370 Hash - 0x21DE9E13 ^0x46746579
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

BOOL func_117(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x23B5 Hash - 0xF354922F ^0xF4D98DB4
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
	int num9;
	int j;
	Hash hash;
	Hash key;
	int num10;
	int num11;
	int num12;

	if (!func_45(hParam0, 0))
		return false;

	if (!func_123(hParam0))
		return false;

	outData.f_1 = 20;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &outData))
		return false;

	if (outData <= 0)
		return false;

	value = 100f;
	statId = { func_124(joaat("Skill"), WEAPON::_GET_WEAPON_STAT_ID(hParam0)) };

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
	unk29 = { func_66(hParam0, func_65(false), hParam2, false) };
	num9 = func_125(hParam0);

	for (j = 0; j < num9; j = j + 1)
	{
		hash = func_126(hParam0, j);
	
		if (hash != 0)
		{
			key = func_127(unk29, hash, false);
		
			if (func_45(key, 0))
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

BOOL func_118(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x2646 Hash - 0xA5200602 ^0xA5200602
{
	var unk;
	int num;
	int num2;
	int i;

	if (!func_31(hParam0))
		return false;

	unk = { func_66(hParam0, func_65(false), hParam1, false) };

	if (!func_67(&unk))
		return false;

	if (func_80(hParam0, hParam1))
		return false;

	num2 = func_128(hParam0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (!func_129(hParam0, i, &num))
		{
		}
		else if (i == 0)
		{
			uParam2->f_30 = func_130(num);
			uParam2->f_29 = uParam2->f_30 && func_131(&unk, num) == 0;
			!func_132(num, &(uParam2->f_31));
			!func_133(num, &(uParam2->f_32));
		}
		else if (i == 1)
		{
			uParam2->f_34 = func_130(num);
			uParam2->f_33 = uParam2->f_34 && func_131(&unk, num) == 0;
			!func_132(num, &(uParam2->f_35));
			!func_133(num, &(uParam2->f_36));
		}
	}

	uParam2->f_38 = 1;
	uParam2->f_37 = func_134(&unk) == 0;
	uParam2->f_39 = 1039601264;
	uParam2->f_40 = -1073027202;
	uParam2->f_42 = 1;
	uParam2->f_41 = func_135(&unk) == 0;
	uParam2->f_43 = 1901059961;
	uParam2->f_44 = -1103499950;
	return true;
}

BOOL func_119(int iParam0, var uParam1) // Position - 0x2787 Hash - 0x8F8F2DCE ^0x3E0F5354
{
	var unk;
	var unk2;

	if (!func_136(iParam0, &unk, &unk2))
	{
		uParam1->f_20 = 0;
		return false;
	}

	uParam1->f_20 = 1;
	uParam1->f_19 = unk;
	uParam1->f_18 = unk2;
	return true;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x27B8 Hash - 0xA17D549C ^0xE99925D9
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

int func_121(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) // Position - 0x2C10 Hash - 0x807505B8 ^0x67A61C28
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam1))
		return 0;

	func_137(uParam0, hParam1, uParam2, *uParam10);

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return 0;

	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(9), uParam10->f_21);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(10), uParam10->f_22);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(11), uParam10->f_23);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_damage", uParam10->f_24);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_range", uParam10->f_25);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_accuracy", uParam10->f_26);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_firerate", uParam10->f_27);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_reload", uParam10->f_28);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_toggle_label", uParam10->f_31);
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_toggle_enabled", uParam10->f_29);
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_toggle_visible", uParam10->f_30);
	uParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_toggle_hash", uParam10->f_32);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_option_label", uParam10->f_35);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam10->f_33);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_option_visible", uParam10->f_34);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_option_hash", uParam10->f_36);
	uParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dleft_label", uParam10->f_39);
	uParam0->f_32 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dleft_enabled", uParam10->f_37);
	uParam0->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dleft_visible", uParam10->f_38);
	uParam0->f_34 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dleft_hash", uParam10->f_40);
	uParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dright_label", uParam10->f_43);
	uParam0->f_36 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dright_enabled", uParam10->f_41);
	uParam0->f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dright_visible", uParam10->f_42);
	uParam0->f_38 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dright_hash", uParam10->f_44);
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "inventory_item", uParam10->f_45);
	uParam0->f_40 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "inventory_item_slot", uParam10->f_46);
	return 1;
}

Hash func_122(Hash hParam0) // Position - 0x2E3C Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_45(hParam0, 0))
		return 0;

	return hParam0;
}

BOOL func_123(Hash hParam0) // Position - 0x2E55 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_138(hParam0) == joaat("WEAPON");
}

struct<2> func_124(int iParam0, Hash hParam1) // Position - 0x2E69 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = hParam1;
	return num;
}

int func_125(Hash hParam0) // Position - 0x2E7F Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_45(hParam0, 0))
		return 0;

	category = func_139(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

Hash func_126(Hash hParam0, int iParam1) // Position - 0x2EAE Hash - 0x45A11D7D ^0x9148E520
{
	Hash category;
	int outSlotId;

	if (hParam0 != 0)
	{
		category = func_139(hParam0);
	
		if (category != 0)
			if (iParam1 >= 0 && iParam1 < func_125(hParam0))
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, iParam1, &outSlotId))
					return outSlotId;
	}

	return 0;
}

Hash func_127(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x2EF2 Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_140(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

int func_128(Hash hParam0) // Position - 0x2F20 Hash - 0xC16F1A8F ^0x8840A47D
{
	if (!func_45(hParam0, 0))
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
BOOL func_129(Hash hParam0, int iParam1, var uParam2) // Position - 0x2F83 Hash - 0xB704E052 ^0x5396E9BD
{
	if (!func_45(hParam0, 0))
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

int func_130(int iParam0) // Position - 0x304D Hash - 0x6DFE5D10 ^0x6DFE5D10
{
	switch (iParam0)
	{
		case 3:
			return func_141();
	}

	return true;
}

int func_131(Any* panParam0, int iParam1) // Position - 0x306E Hash - 0xAED9A956 ^0xB2CD34FD
{
	var unk;
	var weaponGuid;

	if (!func_67(panParam0))
		return 1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(false), panParam0, &unk, 22, 1))
		return 2;

	!WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, iParam1, &weaponGuid);

	if (func_82(panParam0) == 0)
		if (func_67(&weaponGuid))
			if (func_142(panParam0, &weaponGuid))
				return 3;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4) && iParam1 == 3)
	{
		if (!func_141())
			return 4;
	
		if (func_82(panParam0) == 0)
			if (!func_100(func_30(Global_35, iParam1, true, false)))
				return 4;
		else if (!func_100(func_30(Global_35, 2, true, false)))
			return 4;
	}

	return 0;
}

BOOL func_132(int iParam0, var uParam1) // Position - 0x3137 Hash - 0xBF79061C ^0x2FF680E
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

BOOL func_133(int iParam0, var uParam1) // Position - 0x31AE Hash - 0xBF79061C ^0xA1A2349D
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

int func_134(Any* panParam0) // Position - 0x323D Hash - 0x2B3B8F75 ^0x4C466798
{
	var unk;

	if (!func_67(panParam0))
		return 1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(false), panParam0, &unk, 22, 1))
		return 2;

	if (func_82(panParam0) == 2)
		return 3;

	if (func_82(panParam0) == 0)
	{
		switch (func_143(panParam0))
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

int func_135(Any* panParam0) // Position - 0x32C6 Hash - 0x2B3B8F75 ^0x4C466798
{
	var unk;

	if (!func_67(panParam0))
		return 1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(false), panParam0, &unk, 22, 1))
		return 1;

	if (func_82(panParam0) == 1)
		return 3;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(unk.f_4))
		return 5;

	if (func_82(panParam0) == 0)
	{
		switch (func_143(panParam0))
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

BOOL func_136(int iParam0, var uParam1, var uParam2) // Position - 0x335E Hash - 0xBB027699 ^0x2CBE1AB0
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

void func_137(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x33BD Hash - 0x7B0DBE05 ^0x2CBBC8EE
{
	func_144(uParam0, hParam1, uParam2, uParam10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(15), &(uParam10.f_10));
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(21), uParam10.f_18);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(22), uParam10.f_19);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(23), uParam10.f_20);
	return;
}

int func_138(Hash hParam0) // Position - 0x342B Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_45(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

Hash func_139(Hash hParam0) // Position - 0x3456 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_45(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_140(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x3481 Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_95(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_145(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

BOOL func_141() // Position - 0x34C5 Hash - 0x3DC96CE4 ^0x3DC96CE4
{
	if (!func_146(24))
		return 0;

	if (func_147() < 2)
		return 0;

	return 1;
}

BOOL func_142(Any* panParam0, var uParam1) // Position - 0x34E8 Hash - 0x361C7388 ^0xEA068BC1
{
	if (*panParam0 == *uParam1 && panParam0->f_1 == uParam1->f_1 && panParam0->f_2 == uParam1->f_2 && panParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

int func_143(Any* panParam0) // Position - 0x3529 Hash - 0x2B3B8F75 ^0x4C466798
{
	var unk;
	int num;
	var weaponGuid;
	var unk26;

	if (!func_67(panParam0))
		return 1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(false), panParam0, &unk, 22, 1))
		return 2;

	num = unk.f_14;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4))
	{
		WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, 2, &weaponGuid);
		unk26.f_9 = joaat("SLOTID_NONE");
		INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_95(false), &weaponGuid, &unk26, 22, 1);
	
		if (num == 3)
			if (!func_100(unk26.f_4) || func_80(unk26.f_4, unk26.f_9))
				return 3;
	
		if (num == 2)
			return 3;
	}
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(unk.f_4))
	{
		if (num == 4)
			return 3;
	}

	return 0;
}

void func_144(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19) // Position - 0x35ED Hash - 0x870C1583 ^0xC6938A5E
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, &uParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0), bParam10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1), bParam10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2), bParam10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(53), bParam10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(54), bParam10.f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(56), bParam10.f_5);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(55), bParam10.f_6);

	if (bParam10.f_7 == 0)
		bParam10.f_7 = joaat("IB_SELECT");

	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(57), bParam10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(58), bParam10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(59), bParam10.f_9);
	return;
}

BOOL func_145(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x36DE Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_95(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_146(int iParam0) // Position - 0x370E Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_148(iParam0))
		return false;

	return func_149(iParam0);
}

int func_147() // Position - 0x372A Hash - 0x205D6BC ^0xA95E817
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_78("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_79(&unk, i, num, num2))
			{
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4))
			{
				num3 = num3 + 1;
			}
		}
	
		func_85(num);
	}

	return num3;
}

BOOL func_148(int iParam0) // Position - 0x3794 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_149(int iParam0) // Position - 0x37A7 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

