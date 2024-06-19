#region Local Var
	BOOL bLocal_0 = 0;
	Hash hLocal_1 = 0;
	Any anLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE11E8660 ^0xE1C2806D
{
	bLocal_0 = 1;
	anLocal_2 = anScriptParam_0;
	uLocal_3 = anScriptParam_0.f_1;
	iLocal_4 = anScriptParam_0.f_2;
	func_1();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2();

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}

	func_2();
	return;
}

void func_1() // Position - 0x56 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x5E Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_2);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x83 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_1 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_1) == 0)
			return bLocal_0;
		else
			return true;

	return bLocal_0;
}

void func_4() // Position - 0xAC Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xB4 Hash - 0x3D22DF46 ^0xED7FF9EC
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_ERRORS); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_ERRORS, i))
		{
			case -843555838:
				func_11(i);
				break;
		
			case -456923784:
				func_10(i);
				break;
		
			case -45008988:
				func_9(i);
				break;
		}
	}

	return;
}

void func_6() // Position - 0x10C Hash - 0xE823F94C ^0xB59CD543
{
	if (PED::IS_PED_INJURED(Global_35) || !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		bLocal_0 = false;
		return;
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("objectexchange")))
	{
		func_12(12.5f, true, false, true);
		func_13(10f, true);
	
		switch (iLocal_4)
		{
			case joaat("prop_player_eat_almonds_counter"):
				func_14(-241345764, true);
				break;
		
			case joaat("PROP_PLAYER_EAT_PICKLED_EGG"):
				func_14(-1735850413, true);
				break;
		}
	}

	return;
}

void func_7() // Position - 0x185 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_8() // Position - 0x18D Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x199 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_15(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x1C1 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_16(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x1E9 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_17(&eventData);
	}

	return;
}

void func_12(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x211 Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_18() == false)
	{
		func_19(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_20(0);

	if (bParam1)
		func_21(num);

	if (num >= 100f - 1f)
		func_22();

	if (bParam2)
		fParam0 = func_23(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_25(0, func_24(fParam0, -100f, 100f), bParam1);
	return;
}

void func_13(float fParam0, BOOL bParam1) // Position - 0x283 Hash - 0xDA7BE4BE ^0xDA7BE4BE
{
	float num;
	int num2;
	int num3;
	float num4;
	float num5;

	num = func_26(13);

	if (fParam0 > 10f)
		fParam0 = 10f;

	if (!func_27(17))
		return;

	if (func_28())
	{
		num2 = func_29(num);
		num = num + fParam0;
		num3 = func_29(num);
	
		if (num2 != num3)
		{
			Global_1347477.f_195 = func_30();
			func_31(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, false);
		}
	
		func_32(&num4, &num5);
		func_33(13, func_24(num, num4, num5));
	}

	if (bParam1)
	{
		Global_40.f_11095.f_66 = Global_40.f_11095.f_66 + 1;
	
		if (5 == Global_40.f_11095.f_66)
			func_34(94, false);
	}

	return;
}

void func_14(Hash hParam0, BOOL bParam1) // Position - 0x334 Hash - 0x87EB26BF ^0x55136C8F
{
	int outData;
	var outData2;
	int i;
	float health;
	float deadeye;
	float stamina;
	float num;
	float num2;
	float num3;
	float num4;
	BOOL flag;
	var unk28;
	var unk29;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	outData.f_1 = 20;

	if (func_35(hParam0, 1573112293) || func_35(hParam0, 672467738) || func_35(hParam0, -550842268))
		flag = true;

	if (func_36(hParam0) == joaat("consumable"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &outData);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	
		for (i = 0; i < outData; i = i + 1)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
			{
			}
			else if (-943921969 == outData2.f_1)
			{
				health = func_37(0, outData2.f_2);
				func_38(outData2.f_2, true);
				func_39(0, 7000);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_37(2, outData2.f_2);
				func_40(outData2.f_2);
				func_39(2, 7000);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_37(1, outData2.f_2);
				func_41(outData2.f_2);
				func_39(1, 7000);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_42(outData2.f_2, outData2.f_5);
			
				if (func_43(&unk28, &unk29, num))
				{
					func_12(num, true, flag, bParam1);
					func_39(0, 7000);
				}
			
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_42(outData2.f_2, outData2.f_5);
			
				if (func_43(&unk28, &unk29, num2))
				{
					func_44(num2, true, flag, bParam1);
					func_39(2, 7000);
				}
			
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_42(outData2.f_2, outData2.f_5);
			
				if (func_43(&unk28, &unk29, num3))
				{
					func_45(num3, true, flag, bParam1);
					func_39(1, 7000);
				}
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_46(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_47(19, num4);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_46(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_47(20, num4);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_46(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_47(18, num4);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_46(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_47(0, num4);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_46(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_47(2, num4);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_46(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_47(1, num4);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_13(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3)
			if (num > 0f || health > 0f)
				flag4 = true;
	
		if (flag4 || func_35(hParam0, -537818634))
			func_49(func_48(joaat("medicine_items_used")), 1);
	
		if (func_35(hParam0, -1457797660))
			func_49(func_48(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_49(func_48(joaat("DEADEYE_ITEMS_USED")), 1);
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

void func_15(var uParam0) // Position - 0x6A4 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_16(var uParam0) // Position - 0x6AC Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_17(var uParam0) // Position - 0x6B4 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_18() // Position - 0x6BC Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_19(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6CA Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_23(iParam0, fParam1, true);

	func_51(iParam0, func_50(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_20(int iParam0) // Position - 0x6F9 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

void func_21(float fParam0) // Position - 0x70B Hash - 0x49ED0D17 ^0x957A9D54
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

void func_22() // Position - 0x73A Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

float func_23(int iParam0, float fParam1, BOOL bParam2) // Position - 0x767 Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_30();
	func_52(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_53(iParam0, 2);

	if (func_55(num, func_54(iParam0, 2), true))
	{
		func_56(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_34(88, bParam2);
		return 0f;
	}

	func_57(iParam0, func_30(), 2);
	func_56(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_24(float fParam0, float fParam1, float fParam2) // Position - 0x7D0 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_25(int iParam0, float fParam1, BOOL bParam2) // Position - 0x7F7 Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_18() != -1)
		return;

	if (!func_27(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_58(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_59(iParam0), value);
	func_61(func_60(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_62(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_34(84, true);

	if (fParam1 <= -99.999f)
		func_34(func_63(iParam0), true);

	variableName = func_64(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

float func_26(int iParam0) // Position - 0x8D0 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

BOOL func_27(int iParam0) // Position - 0x8E4 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_65(iParam0))
		return false;

	return func_66(iParam0);
}

BOOL func_28() // Position - 0x900 Hash - 0xF6B2CBD4 ^0x78757C46
{
	if (func_18() != -1)
		return false;

	if (Global_1347477.f_200)
		return false;

	if (Global_1347477.f_195 == -15)
		return true;

	return func_67(Global_1347477.f_195, false);
}

int func_29(float fParam0) // Position - 0x93C Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

int func_30() // Position - 0x957 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x963 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_68(*iParam0);
	i = func_69(*iParam0);
	num2 = func_70(*iParam0);
	j = func_71(*iParam0);
	k = func_72(*iParam0);
	l = func_73(*iParam0);

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

	for (m = func_74(i, num); num2 > m; m = func_74(i, num))
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

	func_75(iParam0, l, k, j, num2, i, num);
	return;
}

void func_32(var uParam0, var uParam1) // Position - 0xAEB Hash - 0x9E01892C ^0x3EC1D72C
{
	if (!func_76())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}

	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
	return;
}

void func_33(int iParam0, float fParam1) // Position - 0xB24 Hash - 0x2B3CA3FB ^0xB7282B52
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_78(1, flag, true, str);
		func_79(!flag, fParam1 < 0f, flag);
		num = func_58(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_80();
	}
	else if (iParam0 == 10)
	{
		num = func_58(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_58(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

void func_34(int iParam0, BOOL bParam1) // Position - 0xBF8 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_81(iParam0, &num, &num2);

	if (!func_82(iParam0, num, num2, bParam1))
		return;

	func_83(num, num2);
	return;
}

BOOL func_35(Hash hParam0, Hash hParam1) // Position - 0xC25 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

int func_36(Hash hParam0) // Position - 0xC56 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_84(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

float func_37(int iParam0, int iParam1) // Position - 0xC81 Hash - 0x882BA7B3 ^0xDE52A593
{
	int num;
	float pedStamina;
	float pedMaxStamina;
	float num2;
	float num3;

	if (iParam1 == -1)
	{
		num2 = pedMaxStamina - pedStamina;
		return num2 / 2f;
	}

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			num = 50;
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_35);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_35);
			num = 8;
			break;
	
		case 2:
			pedStamina = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			pedMaxStamina = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			num = 14;
			break;
	}

	num3 = (float)num * iParam1 + pedStamina;

	if (num3 > pedMaxStamina)
		num2 = pedMaxStamina - pedStamina;
	else
		num2 = num3 - pedStamina;

	return num2 / 2f;
}

void func_38(int iParam0, BOOL bParam1) // Position - 0xD36 Hash - 0x9D46840B ^0xDAAD5146
{
	int value;
	int healthAmount;

	value = 50 * iParam0;
	healthAmount = value + ENTITY::GET_ENTITY_HEALTH(Global_35);

	if (bParam1 && value < 0)
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(value), 0, 0);
	else if (iParam0 <= 0 || healthAmount > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	else
		ENTITY::SET_ENTITY_HEALTH(Global_35, healthAmount, 0);

	return;
}

void func_39(int iParam0, int iParam1) // Position - 0xDA7 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_40(int iParam0) // Position - 0xDC0 Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

void func_41(int iParam0) // Position - 0xDDB Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_18() != -1)
		return;

	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		num = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT(iParam0 * num));
	}

	return;
}

float func_42(int iParam0, float fParam1) // Position - 0xE18 Hash - 0xDF35DF4B ^0x834D2C65
{
	return func_85(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

BOOL func_43(var uParam0, var uParam1, float fParam2) // Position - 0xE2C Hash - 0xEC9C2B00 ^0xEC9C2B00
{
	if (func_18() != -1)
		return true;

	if (!func_86(0))
		return true;

	if (fParam2 <= 0f)
		return true;

	if (*uParam0)
		return !*uParam1;

	*uParam0 = 1;

	if (!Global_1347477.f_191.f_3)
	{
		func_87(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}

	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
		Global_1347477.f_191.f_1 = 0;

	Global_1347477.f_191.f_1 = Global_1347477.f_191.f_1 + 1;

	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_34(0, true);
			Global_1347477.f_191.f_2 = MISC::GET_GAME_TIMER() + 480000;
		}
	
		func_87(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}

	Global_1347477.f_191 = MISC::GET_GAME_TIMER() + 480000;
	*uParam1 = 0;
	return true;
}

void func_44(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF16 Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_18() == false)
	{
		func_19(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_20(2);

	if (bParam1)
		func_21(num);

	if (bParam2)
		fParam0 = func_23(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_25(2, func_24(fParam0, -100f, 100f), bParam1);
	return;
}

void func_45(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF77 Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_18() == false)
	{
		func_19(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_20(1);

	if (bParam1)
		func_21(num);

	if (bParam2)
		fParam0 = func_23(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_25(1, func_24(fParam0, -100f, 100f), bParam1);
	return;
}

float func_46(float fParam0, int iParam1) // Position - 0xFD8 Hash - 0x4EDD98F5 ^0x4EDD98F5
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

void func_47(int iParam0, float fParam1) // Position - 0x102A Hash - 0xE703ECFF ^0xBDAEF876
{
	Ped ped;
	char* effectName;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_88(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return;

	fParam1 = fParam1 * (1f + Global_40.f_11095.f_70);

	switch (iParam0)
	{
		case 0:
			effectName = func_89(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_90(-1);
			func_91(false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
	
		case 1:
			effectName = func_89(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_92(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
	
		case 2:
			effectName = func_89(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_93(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_94(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_94(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_94(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

struct<2> func_48(int iParam0) // Position - 0x11BD Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_49(var uParam0, var uParam1, int iParam2) // Position - 0x11CD Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

float func_50(int iParam0, int iParam1) // Position - 0x11DD Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_95();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/];
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_51(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1228 Hash - 0x599AB9EC ^0xC6829060
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_95();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_96(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_97(ped, iParam0, fParam1);
	func_98(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_59(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

void func_52(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x12D9 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_68(*uParam0);
	i = func_69(*uParam0);
	j = func_70(*uParam0);
	k = func_71(*uParam0);
	l = func_72(*uParam0);
	m = func_73(*uParam0);

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
	
		num3 = func_74(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_75(uParam0, m, l, k, j, i, num);
	return;
}

int func_53(int iParam0, int iParam1) // Position - 0x144C Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_95();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

int func_54(int iParam0, int iParam1) // Position - 0x149B Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_95();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

BOOL func_55(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14EC Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_99(iParam1) || !func_99(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_56(int iParam0, int iParam1, int iParam2) // Position - 0x1519 Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_95();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_57(int iParam0, int iParam1, int iParam2) // Position - 0x156E Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_95();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_58(int iParam0) // Position - 0x15C3 Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_59(int iParam0) // Position - 0x15E7 Hash - 0x26AB94C2 ^0x26AB94C2
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

int func_60(int iParam0) // Position - 0x1616 Hash - 0x5163992 ^0x5163992
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 3;
	
		default:
		
	}

	return 0;
}

void func_61(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1645 Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_100(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_62(int iParam0) // Position - 0x1695 Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_63(int iParam0) // Position - 0x16B9 Hash - 0x68BC9945 ^0x68BC9945
{
	switch (iParam0)
	{
		case 0:
			return 87;
	
		case 1:
			return 85;
	
		case 2:
			return 86;
	
		default:
		
	}

	return -1;
}

char* func_64(int iParam0) // Position - 0x16EB Hash - 0x237539ED ^0x237539ED
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

BOOL func_65(int iParam0) // Position - 0x1722 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_66(int iParam0) // Position - 0x1735 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_67(int iParam0, BOOL bParam1) // Position - 0x175F Hash - 0x10DE2364 ^0x10DE2364
{
	return func_55(func_30(), iParam0, bParam1);
}

int func_68(int iParam0) // Position - 0x1773 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_69(int iParam0) // Position - 0x1798 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_70(int iParam0) // Position - 0x17AB Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_71(int iParam0) // Position - 0x17BE Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_72(int iParam0) // Position - 0x17D1 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_73(int iParam0) // Position - 0x17E3 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_74(int iParam0, int iParam1) // Position - 0x17F5 Hash - 0x893AC59E ^0x893AC59E
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

void func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x188F Hash - 0xA65AB937 ^0xA65AB937
{
	func_102(iParam0, iParam6);
	func_103(iParam0, iParam5);
	func_104(iParam0, iParam4);
	func_105(iParam0, iParam3);
	func_106(iParam0, iParam2);
	func_107(iParam0, iParam1);
	return;
}

BOOL func_76() // Position - 0x18C7 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

var func_77(BOOL bParam0, var uParam1, var uParam2) // Position - 0x18E6 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_78(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x18FD Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_79(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1941 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_100(0, 1, bParam0, bParam1);
	str = MISC::VAR_STRING(2, str);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);

	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}

	return;
}

void func_80() // Position - 0x1A35 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_108();
	func_109();
	func_110();
	return;
}

void func_81(int iParam0, var uParam1, var uParam2) // Position - 0x1A4C Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_82(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1A68 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_111(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_112(iParam0))
		return false;

	if (func_113(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_114(iParam0, 1) || func_115(32768))
		if (!func_114(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_116())
		return false;

	return true;
}

void func_83(int iParam0, int iParam1) // Position - 0x1B0A Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_84(Hash hParam0, int iParam1) // Position - 0x1B2E Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

float func_85(float fParam0, float fParam1) // Position - 0x1B48 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 200f;

	return (fParam0 / 8f) * 200f;
}

BOOL func_86(int iParam0) // Position - 0x1B76 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_117())
		return false;

	return func_118(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_87(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1B98 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_119(pedParam0, &str);
}

BOOL func_88(int iParam0) // Position - 0x1BDF Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_89(int iParam0) // Position - 0x1C0E Hash - 0x40C443CA ^0x40C443CA
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

void func_90(int iParam0) // Position - 0x1C45 Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_120(2);
	func_121(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_91(BOOL bParam0) // Position - 0x1C82 Hash - 0x9114E741 ^0x8984E174
{
	if (func_18() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_34(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_34(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_122(1, bParam0, true);
	func_80();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

void func_92(int iParam0) // Position - 0x1CF0 Hash - 0x89FD216F ^0xA46E837F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_123(2);
	func_124(BUILTIN::TO_FLOAT(iParam0 * num));
	return;
}

void func_93(int iParam0) // Position - 0x1D2C Hash - 0x265AFF44 ^0x6BC758B3
{
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PLAYER::_0x57D9991DC1334151(player);

	num = func_125(2);
	func_126(BUILTIN::TO_FLOAT(iParam0 * num), false);
	return;
}

void func_94(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1D69 Hash - 0x5C29635D ^0x5C29635D
{
	func_51(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

int func_95() // Position - 0x1D83 Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_127())
		return 1;

	return 0;
}

void func_96(int iParam0, int iParam1, int iParam2) // Position - 0x1D97 Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_95();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_97(Ped pedParam0, int iParam1, float fParam2) // Position - 0x1DE8 Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_64(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_128(iParam1), fParam2, -1);

	return;
}

void func_98(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x1E14 Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_95();

	gameTimer = MISC::GET_GAME_TIMER();
	func_129(iParam0, fParam1, iParam3);

	if (bParam2)
		func_130(iParam0, gameTimer, iParam3);

	return;
}

BOOL func_99(int iParam0) // Position - 0x1E47 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_73(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_72(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_71(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_68(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_69(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_70(iParam0);

	if (num6 < 1 || num6 > func_74(num5, num4))
		return false;

	return true;
}

char* func_100(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1F23 Hash - 0xF4510392 ^0x604A4922
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					else
						return bParam3 ? "PMPLAYER_CONDITION_TEMPERATURE_COLD" : "PMPLAYER_CONDITION_TEMPERATURE_HOT";
					break;
			
				case 2:
					return bParam2 ? "PMPLAYER_CONDITION_HONOR_GOOD" : "PMPLAYER_CONDITION_HONOR_BAD";
			}
			break;
	
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
			
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
			
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
			
				default:
					break;
			}
			break;
	}

	return "";
}

var func_101(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1FC8 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_102(var uParam0, int iParam1) // Position - 0x1FDF Hash - 0xD05180BA ^0x39589262
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

void func_103(var uParam0, int iParam1) // Position - 0x2065 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_104(var uParam0, int iParam1) // Position - 0x20A1 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_69(*uParam0);
	num2 = func_68(*uParam0);

	if (iParam1 < 1 || iParam1 > func_74(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_105(var uParam0, int iParam1) // Position - 0x20F4 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_106(var uParam0, int iParam1) // Position - 0x212F Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_107(var uParam0, int iParam1) // Position - 0x2168 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

float func_108() // Position - 0x21A0 Hash - 0xB0642BCC ^0x4D6FEEA4
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_131())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_20(2);

	if (Global_1347477.f_119)
		return func_20(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_132();
	num3 = func_133();
	num4 = func_134();
	num5 = func_135();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_136());
	num8 = func_20(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_137(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_138(3, num9, num9 > 100f);
	return func_24(num8, -100f, 100f);
}

float func_109() // Position - 0x22C9 Hash - 0x951B1CCC ^0x7B312694
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_131())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_20(1);

	if (Global_1347477.f_119)
		return func_20(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_132();
	num3 = func_133();
	num4 = func_134();
	num5 = func_135();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_136());
	num8 = func_20(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_137(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_138(2, num9, num9 > 100f);
	return func_24(num8, -100f, 100f);
}

float func_110() // Position - 0x23F2 Hash - 0x4D146F4A ^0xFC60D2FE
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_131())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_20(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_139())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_140())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_20(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_132();
	num3 = func_133();
	num4 = func_134();
	num5 = func_135();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_136());
	num8 = func_20(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_137(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_138(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_20(0);

	return func_24(num8, -100f, 100f);
}

BOOL func_111(int iParam0, int iParam1) // Position - 0x2599 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_18() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_112(int iParam0) // Position - 0x25CC Hash - 0x3E25647A ^0x3E25647A
{
	if (func_18() != -1)
		if (func_114(iParam0, 4))
			return false;
	else if (func_114(iParam0, 2))
		return false;

	return true;
}

BOOL func_113(int iParam0) // Position - 0x25FC Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_114(iParam0, 65536) && !func_114(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_114(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_114(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_114(int iParam0, int iParam1) // Position - 0x26A8 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_115(int iParam0) // Position - 0x26C1 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_116() // Position - 0x26D4 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_117() // Position - 0x26E3 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_18() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_118(int iParam0, BOOL bParam1) // Position - 0x2708 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_141(iParam0))
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

BOOL func_119(Ped pedParam0, Any* panParam1) // Position - 0x2739 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

int func_120(int iParam0) // Position - 0x2749 Hash - 0x7401DE8A ^0xC8FAA995
{
	if (iParam0 == 2)
		iParam0 = func_95();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850;
	
		case 1:
			return Global_1954819.f_866.f_115;
	
		default:
		
	}

	return -1;
}

void func_121(float fParam0, Ped pedParam1) // Position - 0x2788 Hash - 0x2062487E ^0xADB8AE45
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

void func_122(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x27CA Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

int func_123(int iParam0) // Position - 0x27FA Hash - 0x4B3CC2BE ^0x5B1CA90F
{
	if (iParam0 == 2)
		iParam0 = func_95();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_2;
	
		case 1:
			return Global_1954819.f_866.f_115.f_2;
	
		default:
		
	}

	return -1;
}

void func_124(float fParam0) // Position - 0x283D Hash - 0xEBF0A2AB ^0x54370C29
{
	Ped ped;

	if (fParam0 == 0f)
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::_CHANGE_PED_STAMINA(ped, fParam0);
	return;
}

int func_125(int iParam0) // Position - 0x2877 Hash - 0x4B3CC2BE ^0x6D5E7BC6
{
	if (iParam0 == 2)
		iParam0 = func_95();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_1;
	
		case 1:
			return Global_1954819.f_866.f_115.f_1;
	
		default:
		
	}

	return -1;
}

void func_126(float fParam0, BOOL bParam1) // Position - 0x28BA Hash - 0x1FE7F29A ^0xE2FCD967
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 0);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

BOOL func_127() // Position - 0x294E Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

char* func_128(int iParam0) // Position - 0x295D Hash - 0x610AD409 ^0x541E06E1
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

void func_129(int iParam0, float fParam1, int iParam2) // Position - 0x2997 Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_95();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_130(int iParam0, int iParam1, int iParam2) // Position - 0x29E8 Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_95();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_131() // Position - 0x2A3D Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_132() // Position - 0x2A59 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_26(13);
	num2 = func_29(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_133() // Position - 0x2A9C Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_134() // Position - 0x2AB7 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_142())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_135() // Position - 0x2AD6 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_136() // Position - 0x2B18 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_137(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2B26 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_100(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_138(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2B72 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_100(iParam0, 2, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[2], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);

	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}

	return;
}

BOOL func_139() // Position - 0x2CB8 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_26(12) <= -99f;
}

BOOL func_140() // Position - 0x2CCC Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_26(12) >= 99f;
}

int func_141(int iParam0) // Position - 0x2CE0 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_143(iParam0))
		return -1;

	return func_144(iParam0);
}

BOOL func_142() // Position - 0x2CFC Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_143(int iParam0) // Position - 0x2D0D Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_144(int iParam0) // Position - 0x2D40 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_145(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_145(int iParam0) // Position - 0x2D81 Hash - 0x6EC15CF9 ^0xE613EBE0
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

