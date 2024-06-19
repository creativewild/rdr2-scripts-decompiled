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
	var uLocal_22 = 2;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 7;
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
#endregion

void main() // Position - 0x0 Hash - 0x89371CE1 ^0x89371CE1
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (func_1(&uLocal_19))
		func_2(&uLocal_19);

	func_3(&uLocal_19);
	return;
}

BOOL func_1(var uParam0) // Position - 0x23 Hash - 0x5FA5C411 ^0x3250FBD0
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
		return false;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_4(&uLocal_19, 0);
	func_5(uParam0);
	func_6();
	return true;
}

void func_2(var uParam0) // Position - 0x4E Hash - 0x890E54DB ^0x2C2C1998
{
	BOOL flag;

	flag = false;

	while (!flag)
	{
		if (func_7(uParam0))
			flag = true;
	
		func_8(uParam0);
		func_9(uParam0);
		func_10(uParam0);
		func_11(&(uParam0->f_18));
		BUILTIN::WAIT(0);
	}

	return;
}

void func_3(var uParam0) // Position - 0x8D Hash - 0xA6EAE6E5 ^0x4344BFA2
{
	func_12();
	func_13(uParam0);

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_4(var uParam0, Hash hParam1) // Position - 0xAE Hash - 0x4F8BE4B5 ^0x5AE41537
{
	uParam0->f_2 = hParam1;
	return;
}

int func_5(var uParam0) // Position - 0xBC Hash - 0x626ABAA4 ^0x626ABAA4
{
	int num;
	int num2;
	int i;

	num = 2;

	for (i = 1; i <= num - 1; i = i + 1)
	{
		num2 = func_14(i, 1);
	
		if (!func_15(uParam0, num2))
			return 0;
	}

	return 1;
}

void func_6() // Position - 0xF6 Hash - 0x785F931D ^0xEA441781
{
	if (!func_16())
		return;

	Global_1960823.f_3 = Global_1295666.f_16;
	Global_1960823.f_4 = Global_1960823;
	return;
}

BOOL func_7(var uParam0) // Position - 0x11F Hash - 0xFF9800D ^0x695F90D3
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return true;

	return false;
}

void func_8(var uParam0) // Position - 0x133 Hash - 0xEB2647C4 ^0x94478B67
{
	var eventData;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("UI_EVENT_CHANNEL_HUB")))
	{
		if (!UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("UI_EVENT_CHANNEL_HUB"), &eventData))
		{
		}
		else
		{
			func_17(uParam0, &eventData);
			UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("UI_EVENT_CHANNEL_HUB"));
		}
	}

	return;
}

void func_9(var uParam0) // Position - 0x16D Hash - 0x9A281DE ^0x9EEDD0B6
{
	BOOL isUiappRunningByHash;

	if (func_18(uParam0, 2))
		func_19(uParam0, 2, false);

	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("hub")))
		return;

	isUiappRunningByHash = UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("hub"));

	if (*uParam0 != isUiappRunningByHash)
	{
		*uParam0 = isUiappRunningByHash;
	
		if (isUiappRunningByHash)
			func_19(uParam0, 2, true);
	}

	return;
}

void func_10(var uParam0) // Position - 0x1BC Hash - 0xE867785D ^0x88EACE10
{
	Hash uiappCurrentActivityByHash;
	Hash hash;

	uiappCurrentActivityByHash = UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(joaat("hub"));
	hash = func_20(uParam0);

	if (uiappCurrentActivityByHash != hash)
	{
		if (hash != 0)
			func_21(uParam0, hash);
	
		func_4(uParam0, uiappCurrentActivityByHash);
		func_22(uParam0, uiappCurrentActivityByHash);
	}

	func_23(uParam0, uiappCurrentActivityByHash);
	return;
}

void func_11(var uParam0) // Position - 0x204 Hash - 0x4AABD26C ^0x8274283D
{
	if (!uParam0->f_3)
		return;

	uParam0->f_2 = func_24(uParam0);

	if (uParam0->f_2)
		uParam0->f_3 = 0;

	return;
}

void func_12() // Position - 0x22D Hash - 0x5E4ACB16 ^0x6526A541
{
	int num;

	if (!func_16())
		return;

	num = MISC::ABSI(Global_1295666.f_16 - Global_1960823.f_3);
	TELEMETRY::_TELEMETRY_HUB_NAVIGATION(Global_1960823.f_4, Global_1960823.f_5, num, Global_1960823.f_2);
	Global_1960823.f_1 = 0;
	func_25(&Global_1960823);
	return;
}

int func_13(var uParam0) // Position - 0x27A Hash - 0x7D420CB1 ^0x7D420CB1
{
	int num;
	int num2;
	int i;

	num = 2;

	for (i = 0; i < num; i = i + 1)
	{
		num2 = func_14(i, 1);
		func_26(uParam0, num2);
	}

	return 1;
}

int func_14(int iParam0, int iParam1) // Position - 0x2AA Hash - 0x5CAB7973 ^0xE8D40077
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return joaat("hub");
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_15(var uParam0, int iParam1) // Position - 0x2E1 Hash - 0x7FB80EFF ^0x7FB80EFF
{
	switch (iParam1)
	{
		case joaat("hub"):
			return func_27(uParam0);
	}

	return false;
}

BOOL func_16() // Position - 0x304 Hash - 0x51DF2BB8 ^0x7885E259
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 792347263) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, 792347263))
		return false;

	return Global_1960823.f_6;
}

void func_17(var uParam0, var uParam1) // Position - 0x33A Hash - 0x73DD6863 ^0x73DD6863
{
	switch (*uParam1)
	{
		case -2075827635:
			func_29(uParam1);
			break;
	
		case -1203660660:
			func_28(uParam0, uParam1);
			break;
	}

	return;
}

BOOL func_18(var uParam0, int iParam1) // Position - 0x36B Hash - 0xBD0B8CC9 ^0xE3B317D
{
	return func_30(uParam0->f_1, iParam1);
}

void func_19(var uParam0, int iParam1, BOOL bParam2) // Position - 0x37D Hash - 0xB2075C11 ^0x5EEC3FB6
{
	if (bParam2)
		func_31(&(uParam0->f_1), iParam1);
	else
		func_32(&(uParam0->f_1), iParam1);

	return;
}

var func_20(var uParam0) // Position - 0x3A1 Hash - 0xD73B9827 ^0x6B119A2B
{
	return uParam0->f_2;
}

void func_21(var uParam0, Hash hParam1) // Position - 0x3AD Hash - 0xEB69817E ^0xEB69817E
{
	switch (hParam1)
	{
		case joaat("hub"):
			func_33(uParam0);
			break;
	}

	return;
}

void func_22(var uParam0, Hash hParam1) // Position - 0x3CC Hash - 0x7364C08D ^0x7364C08D
{
	switch (hParam1)
	{
		case joaat("hub"):
			func_34(uParam0);
			break;
	}

	return;
}

void func_23(var uParam0, Hash hParam1) // Position - 0x3EC Hash - 0xEB69817E ^0xEB69817E
{
	switch (hParam1)
	{
		case joaat("hub"):
			func_35(uParam0);
			break;
	}

	return;
}

int func_24(var uParam0) // Position - 0x40B Hash - 0x9B27C2D6 ^0x32BDF39E
{
	Hash itemContextByIndex;
	int arrayCount;
	int i;
	Hash txdHash;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return 0;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);

	for (i = 0; i < arrayCount; i = i + 1)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, i);
	
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(itemContextByIndex))
		{
		}
		else
		{
			txdHash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(itemContextByIndex, uParam0->f_1);
		
			if (txdHash == 0)
			{
			}
			else if (!TXD::DOES_STREAMED_TXD_EXIST(txdHash))
			{
			}
			else if (!TXD::HAS_STREAMED_TXD_LOADED(txdHash))
			{
				return 0;
			}
		}
	}

	return 1;
}

void func_25(int iParam0) // Position - 0x487 Hash - 0x763584E3 ^0x3C2EB1A7
{
	*iParam0 = -1;
	iParam0->f_3 = 0;
	iParam0->f_5 = -1;
	iParam0->f_2 = 1894345440;
	return;
}

void func_26(var uParam0, int iParam1) // Position - 0x4A6 Hash - 0xEB69817E ^0xEB69817E
{
	switch (iParam1)
	{
		case joaat("hub"):
			func_36(uParam0);
			break;
	}

	return;
}

BOOL func_27(var uParam0) // Position - 0x4C5 Hash - 0x9F870F9A ^0x9F870F9A
{
	if (!func_37(uParam0))
		return 0;

	return 1;
}

void func_28(var uParam0, var uParam1) // Position - 0x4DC Hash - 0x8668898 ^0xFB35066E
{
	switch (uParam1->f_2)
	{
		case -2135129228:
		case -1195114281:
		case 407693523:
		case 1223038046:
			func_43(uParam0);
			break;
	
		case joaat("trade_7"):
			func_44();
			break;
	
		case joaat("BUCK"):
		case joaat("bear"):
		case joaat("fox"):
		case joaat("BEAVER"):
		case joaat("ELK"):
		case joaat("COUGAR"):
		case joaat("PANTHER"):
		case joaat("COYOTE"):
		case joaat("BOAR"):
		case joaat("bison"):
		case joaat("Ram"):
		case joaat("WOLF"):
		case joaat("MOOSE"):
		case joaat("ALLIGATOR"):
			func_41(uParam1->f_2);
			break;
	
		case joaat("net_playlist_nominated_series_medium"):
			func_46();
			break;
	
		case -283069378:
			func_45();
			break;
	
		case 1469315950:
			func_42();
			break;
	
		case 1907521504:
			func_38(1667056592);
			func_39(1667056592, false);
			func_40(uParam0, Global_1295666.f_16);
			break;
	}

	return;
}

void func_29(var uParam0) // Position - 0x5CA Hash - 0x646928F0 ^0x646928F0
{
	func_47(uParam0);
	return;
}

BOOL func_30(int iParam0, int iParam1) // Position - 0x5D8 Hash - 0x2ACCF512 ^0x4D8BE70B
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_31(int* piParam0, int iParam1) // Position - 0x5E8 Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_32(int* piParam0, int iParam1) // Position - 0x5F8 Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_33(var uParam0) // Position - 0x608 Hash - 0x734A6C4A ^0x98C73395
{
	func_38(1667056592);
	return;
}

int func_34(var uParam0) // Position - 0x619 Hash - 0x3A70A48B ^0x2D796C63
{
	func_48(uParam0);
	func_19(uParam0, 0, true);
	func_49(&(uParam0->f_14), 2000);
	func_50(uParam0);
	func_51(1667056592);
	return 1;
}

void func_35(var uParam0) // Position - 0x64B Hash - 0x39397DF ^0xA1FC360B
{
	if (MISC::ABSI(Global_1295666.f_16 - func_52(uParam0)) > 3)
		if (Global_1960823.f_5 == -1)
			func_51(1667056592);

	if (func_53(&(uParam0->f_14)))
	{
		func_19(uParam0, 0, true);
		func_19(uParam0, 1, true);
	}

	if (func_18(uParam0, 2))
	{
		func_19(uParam0, 0, true);
		func_19(uParam0, 1, true);
	}

	if (func_18(uParam0, 0))
	{
		func_54(&(uParam0->f_18));
		func_55(uParam0);
		func_56(&(uParam0->f_18), uParam0->f_3[1], "textureTxd");
		func_19(uParam0, 0, false);
	}

	if (func_18(uParam0, 1))
	{
		func_50(uParam0);
		func_19(uParam0, 1, false);
	}

	return;
}

void func_36(var uParam0) // Position - 0x6F9 Hash - 0x49584173 ^0x49584173
{
	func_33(uParam0);
	func_57(uParam0);
	return;
}

BOOL func_37(var uParam0) // Position - 0x70D Hash - 0xA526D6A2 ^0x29B55EB2
{
	uParam0->f_3[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", -2057449687);
	uParam0->f_3[1] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(uParam0->f_3[0], -1963454052);
	uParam0->f_3.f_3[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_3[0], 269688700, 0);
	uParam0->f_3.f_3[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_3[0], -1762771384, 2);
	uParam0->f_3.f_3[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(uParam0->f_3[0], -208399039, "");
	uParam0->f_3.f_3[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[0], "hubRewardsTileRankText", "");
	uParam0->f_3.f_3[4] = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_3[0], "hubRewardsTileRankTextColor", joaat("COLOR_WHITE"));
	uParam0->f_3.f_3[5] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3[0], "hubRewardsTileHasVipPass", false);
	uParam0->f_3.f_3[6] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3[0], "hubRewardsTilePromptEnabled", true);
	return true;
}

void func_38(int iParam0) // Position - 0x7F6 Hash - 0xE2C36577 ^0x74E612E9
{
	int num;

	if (func_16())
		return;

	if (Global_1960823.f_5 == -1)
		return;

	if (iParam0 == -1)
		return;

	if (Global_1960823.f_5 == -1)
		return;

	Global_1960823.f_5 != iParam0;
	num = MISC::ABSI(Global_1295666.f_16 - Global_1960823.f_3);
	TELEMETRY::_TELEMETRY_HUB_NAVIGATION(Global_1960823.f_4, Global_1960823.f_5, num, Global_1960823.f_2);
	Global_1960823.f_1 = 0;
	func_25(&Global_1960823);
	func_39(iParam0, false);
	return;
}

void func_39(int iParam0, BOOL bParam1) // Position - 0x877 Hash - 0xF73C9094 ^0x4EA54D66
{
	if (func_16())
		return;

	if (Global_1960823.f_1)
		return;

	Global_1960823 = iParam0;

	if (bParam1)
		Global_1960823.f_1 = 1;

	return;
}

void func_40(var uParam0, int iParam1) // Position - 0x8A7 Hash - 0x4F8BE4B5 ^0x951FC8E6
{
	uParam0->f_22 = iParam1;
	return;
}

void func_41(int iParam0) // Position - 0x8B5 Hash - 0xBD128089 ^0xBD128089
{
	switch (func_59(func_58(iParam0)))
	{
		case 0:
			func_61(func_58(iParam0));
			break;
	
		case 1:
			func_60();
			break;
	}

	return;
}

void func_42() // Position - 0x8ED Hash - 0x86EA288D ^0xA3CC22E5
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(true), 239629152, false) > 0)
	{
		func_64(func_63(1), 1120403456);
		return;
	}

	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(true), joaat("document_bounty_hunter_license"), false) > 0)
	{
		func_64(func_63(1), 1120403456);
		return;
	}

	func_64(1352.9501f, -1306.3589f, 75.9113f, 1120403456);
	return;
}

void func_43(var uParam0) // Position - 0x955 Hash - 0x63CEE886 ^0x711172DF
{
	var unk;
	BOOL flag;
	float num;
	var unk4;
	var unk7;
	var unk10;
	float num2;
	var unk11;
	var unk14;
	var unk15;

	if (func_65())
	{
		flag = false;
		num = -1f;
		unk7 = { func_66(255) };
	
		if (unk7.f_2 != 0)
		{
			func_67(unk7, &unk4, &unk10);
			num = func_68(Global_34, unk4);
		}
	
		num2 = -1f;
	
		if (Global_1051832.f_3752 != -1)
		{
			func_69(Global_1051832.f_3752, &unk14, &unk15, &unk11);
			num2 = func_68(Global_34, unk11);
		}
	
		if (num >= 0f && num2 >= 0f)
		{
			if (num < num2)
			{
				unk = { unk4 };
				flag = true;
			}
			else
			{
				unk = { unk11 };
				flag = true;
			}
		}
		else if (num >= 0f)
		{
			unk = { unk4 };
			flag = true;
		}
		else if (num2 >= 0f)
		{
			unk = { unk11 };
			flag = true;
		}
	
		if (flag)
			func_64(unk, 1120403456);
	}
	else
	{
		func_70();
		func_71();
		func_72(1061777683, 1816455607);
	}

	return;
}

void func_44() // Position - 0xA4E Hash - 0xC612A8AF ^0xD00B614B
{
	if (!func_73(9))
		func_64(2521.1f, -1241f, 51f, 1120403456);

	return;
}

void func_45() // Position - 0xA78 Hash - 0xA590C79E ^0x884DB4D
{
	var unk;

	if (func_73(9))
	{
		unk = { func_63(2) };
		func_64(unk, 1120403456);
	}

	return;
}

void func_46() // Position - 0xA9F Hash - 0x36C0F74D ^0x5CD7CA8E
{
	int num;

	func_70();
	func_71();
	num = UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(MISC::GET_HASH_KEY("social_club_feed"), MISC::GET_HASH_KEY("launch_to_missions"));
	return;
}

void func_47(var uParam0) // Position - 0xAC4 Hash - 0x981832C1 ^0xA7CB3371
{
	int num;

	num = uParam0->f_2;

	switch (num)
	{
		case joaat("trade_7"):
			if (!func_74(0, false, true) && !func_73(9))
				MISC::_0xDBDA48EC456ED908();
			break;
	
		case -283069378:
			if (!func_74(0, false, true) && func_73(9))
				MISC::_0xDBDA48EC456ED908();
			break;
	
		case 1223038046:
			if (!func_74(0, false, true))
				MISC::_0xDBDA48EC456ED908();
			break;
	
		default:
			MISC::_0xDBDA48EC456ED908();
			break;
	}

	return;
}

int func_48(var uParam0) // Position - 0xB40 Hash - 0xF03D39C9 ^0x1DF35A3E
{
	if (!func_75(&uParam0->f_3[1]))
		return 0;

	return 1;
}

void func_49(var uParam0, int iParam1) // Position - 0xB5C Hash - 0x4F8BE4B5 ^0xCB719C1
{
	uParam0->f_3 = iParam1;
	return;
}

void func_50(var uParam0) // Position - 0xB6A Hash - 0x786945D4 ^0x3A5A1C13
{
	var unk;

	unk = { func_76(true) };
	func_77(uParam0, &unk, unk.f_16);
	func_78(uParam0, MISC::VAR_STRING(2, &(unk.f_17)));
	func_79(uParam0, unk.f_33, unk.f_34);
	func_80(uParam0, unk.f_39);
	func_81(uParam0, unk.f_38);
	return;
}

void func_51(int iParam0) // Position - 0xBB9 Hash - 0x59E2A34A ^0xAA7CA69C
{
	if (func_16())
		return;

	if (iParam0 == -1)
		return;

	if (Global_1960823.f_5 != -1 && Global_1960823.f_5 != iParam0)
		func_38(Global_1960823.f_5);

	Global_1960823.f_3 = Global_1295666.f_16;
	Global_1960823.f_5 = iParam0;
	Global_1960823.f_4 = Global_1960823;
	return;
}

var func_52(var uParam0) // Position - 0xC15 Hash - 0xD73B9827 ^0x8E2F6628
{
	return uParam0->f_22;
}

BOOL func_53(var uParam0) // Position - 0xC21 Hash - 0x87514ED ^0x7CB7DB84
{
	if (uParam0->f_3 <= 0)
	{
		if (func_82(uParam0))
			func_83(uParam0);
	
		return false;
	}

	if (!func_82(uParam0))
	{
		func_84(uParam0, true);
		return true;
	}

	if (!(func_85(uParam0) >= uParam0->f_3))
		return false;

	func_86(uParam0);
	return true;
}

void func_54(var uParam0) // Position - 0xC73 Hash - 0x8B39927 ^0x56ACF101
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		return;

	func_87(uParam0);
	return;
}

void func_55(var uParam0) // Position - 0xC9F Hash - 0xDC44372E ^0x6A975A92
{
	int collectionSize;
	int collectionId;
	var itemData;
	int i;
	int num;
	int num2;
	int j;

	collectionId = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_2(&collectionSize);
	itemData.f_9 = joaat("SLOTID_NONE");
	num = 0;
	num2 = 0;
	j = 0;

	for (i = 0; i < collectionSize; i = i + 1)
	{
		!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(collectionId, i, &itemData);
		num2 = itemData.f_11;
	
		if (!func_88(&itemData))
		{
		}
		else if (!func_89(itemData.f_9))
		{
		}
		else
		{
			for (j = 0; j < num2; j = j + 1)
			{
				if (!func_90(itemData.f_4))
				{
				}
				else if (!func_91(uParam0, &itemData, num))
				{
				}
				else
				{
					num = num + 1;
				
					if (num >= 6)
						break;
				}
			}
		
			if (num >= 6)
				break;
		}
	}

	INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(collectionId);

	if (num == 0)
		if (func_92(uParam0, -1))
			num = num + 1;

	if (func_93(uParam0) > num)
		func_94(uParam0, num);

	return;
}

void func_56(var uParam0, Hash hParam1, char* sParam2) // Position - 0xD87 Hash - 0x7F4877B1 ^0xF2F3C33C
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam1))
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		return;

	uParam0->f_3 = 1;
	uParam0->f_2 = 0;
	uParam0->f_1 = sParam2;
	*uParam0 = hParam1;
	func_95(uParam0);
	return;
}

void func_57(var uParam0) // Position - 0xDC3 Hash - 0xD6BC1FB8 ^0x697B65F0
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3[0]))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3[0]);

	return;
}

int func_58(int iParam0) // Position - 0xDE4 Hash - 0xF824F741 ^0xF824F741
{
	switch (iParam0)
	{
		case joaat("BUCK"):
			return 2;
	
		case joaat("bear"):
			return 13;
	
		case joaat("fox"):
			return 3;
	
		case joaat("BEAVER"):
			return 5;
	
		case joaat("ELK"):
			return 9;
	
		case joaat("COUGAR"):
			return 0;
	
		case joaat("PANTHER"):
			return 11;
	
		case joaat("COYOTE"):
			return 10;
	
		case joaat("BOAR"):
			return 1;
	
		case joaat("bison"):
			return 8;
	
		case joaat("Ram"):
			return 12;
	
		case joaat("WOLF"):
			return 6;
	
		case joaat("MOOSE"):
			return 7;
	
		case joaat("ALLIGATOR"):
			return 4;
	
		default:
		
	}

	return 0;
}

int func_59(int iParam0) // Position - 0xE87 Hash - 0x9B22B183 ^0xECEB54C7
{
	if (UNLOCK::UNLOCK_IS_VISIBLE(func_96(&iParam0)))
		return 1;

	return 0;
}

void func_60() // Position - 0xEA1 Hash - 0xD7E7F2FB ^0x3A992D0E
{
	switch (func_97())
	{
		case 0:
			func_64(-1810.2f, -370.5f, 162.9f, 1120403456);
			break;
	
		case 1:
			func_64(Global_1051832.f_3765[39 /*17*/].f_1, 1120403456);
			break;
	
		case 2:
			func_98();
			break;
	}

	return;
}

void func_61(int iParam0) // Position - 0xF02 Hash - 0x36AF31C2 ^0xC10CF189
{
	switch (func_99(iParam0))
	{
		case 0:
			func_64(-1810.2f, -370.5f, 162.9f, 1120403456);
			break;
	
		case 1:
			func_64(Global_1051832.f_3765[39 /*17*/].f_1, 1120403456);
			break;
	
		case 2:
			func_64(Global_1051832.f_3765[39 /*17*/].f_1, 1120403456);
			break;
	
		case 3:
			func_70();
			func_71();
			func_100(17745825, false, 0, 0, true, false, false);
			break;
	
		case 4:
			func_98();
			break;
	}

	return;
}

int func_62(BOOL bParam0) // Position - 0xFA8 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_101() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

Vector3 func_63(int iParam0) // Position - 0xFE9 Hash - 0xFE5910AD ^0x4DFABEEE
{
	Blip blip;

	blip = func_102(iParam0);

	if (!MAP::DOES_BLIP_EXIST(blip))
		return 0f, 0f, 0f;

	return MAP::GET_BLIP_COORDS(blip);
}

void func_64(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x100F Hash - 0xAB0DFF30 ^0x28FBBF59
{
	MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(fParam0, iParam3);
	!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("hub"), -1037357065);
	return;
}

BOOL func_65() // Position - 0x1033 Hash - 0x56144156 ^0x129ADE48
{
	if (!NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return false;

	return func_103(false);
}

Vector3 func_66(int iParam0) // Position - 0x104C Hash - 0x4168FF99 ^0xE3960051
{
	if (iParam0 == 255)
		return Global_1144526[func_104() /*83*/].f_38;

	return Global_1144526[iParam0 /*83*/].f_38;
}

int func_67(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0x1078 Hash - 0xC2F100FF ^0xB51A29A
{
	var unk;
	var unk6;

	if (!func_105(&unk, uParam0))
		return 0;

	unk.f_2 = -1629816098;
	unk.f_3 = uParam0.f_2;
	unk.f_4 = 0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk6 = { unk };
		unk6.f_2 = -1420258246;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam3, &unk6);
		unk6 = { unk };
		unk6.f_2 = 1073571568;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &unk6);
		return 1;
	}

	return 0;
}

float func_68(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x10EE Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_69(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x110C Hash - 0x4B288E07 ^0x4B288E07
{
	return func_106(iParam0, "sHash", phParam1, "fHeading", pfParam2, "vPos", pvParam3);
}

void func_70() // Position - 0x1129 Hash - 0x47A3B6EA ^0xB6BA2297
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("hub")) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("hub")))
		return;

	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("hub"));
	return;
}

int func_71() // Position - 0x1159 Hash - 0xC573965E ^0x43439664
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")))
		return 0;

	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("pause_menu"));
	return 1;
}

void func_72(int iParam0, int iParam1) // Position - 0x118B Hash - 0xB7759761 ^0x42E2471E
{
	func_107(true, 0);
	Global_1940252.f_9 = 1;
	func_108(iParam0);
	Global_1940252.f_11647 = iParam1;
	return;
}

BOOL func_73(int iParam0) // Position - 0x11AF Hash - 0x5D73A58D ^0xC4F87AC8
{
	Hash unlockHash;
	int num;

	if (iParam0 == 0)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	unlockHash = func_109(iParam0);

	if (unlockHash == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
	{
		num = func_110(1, iParam0);
	
		if (num == 0)
			return false;
	
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
			return true;
	}

	return false;
}

BOOL func_74(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1209 Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_111())
			return true;
	
		if (Global_1072759.f_3 && !Global_1572887.f_10)
			if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1900460.f_67;
		else
			return Global_1900460.f_68;
	}

	if (iParam0 == 0 && func_113(func_112(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_114(func_112(0)))
	{
		case -1:
			return false;
	
		case 2:
			return iParam0 & 1 == 0;
	
		case 3:
			return iParam0 & 16 == 0;
	
		case 4:
			return iParam0 & 32 == 0;
	
		case 5:
			return iParam0 & 2 == 0;
	
		case 7:
			return iParam0 & 1024 == 0;
	
		default:
		
	}

	return false;
}

BOOL func_75(var uParam0) // Position - 0x137F Hash - 0x9B27C2D6 ^0x32BDF39E
{
	Hash itemContextByIndex;
	int arrayCount;
	int i;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);

	for (i = 0; i < arrayCount; i = i + 1)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, i);
	
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(itemContextByIndex))
		{
		}
		else
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(itemContextByIndex);
		}
	}

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(*uParam0);
	return true;
}

struct<40> func_76(BOOL bParam0) // Position - 0x13D8 Hash - 0x675C2A0A ^0x55B1DB29
{
	var unk;
	Hash hash;
	BOOL flag;
	var unk41;
	var unk43;

	unk.f_16 = joaat("COLOR_WHITE");
	unk.f_38 = 1;
	hash = func_115(0);
	flag = func_116();

	switch (func_117())
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, MISC::VAR_STRING(2, func_118(-600593841), hash), 128);
		
			if (flag)
				unk.f_16 = joaat("color_vip");
			else
				unk.f_16 = joaat("COLOR_WHITE");
		
			if (bParam0)
				unk41 = { func_119(1800005748) };
			else
				unk41 = { func_119(905305452) };
		
			unk.f_33 = unk41;
			unk.f_34 = unk41.f_1;
			unk43 = { func_119(1715681724) };
			unk.f_35 = unk43;
			unk.f_36 = unk43.f_1;
		
			if (flag)
				TEXT_LABEL_ASSIGN_STRING(&(unk.f_17), func_118(-2094745301), 128);
			else
				TEXT_LABEL_ASSIGN_STRING(&(unk.f_17), func_118(242987266), 128);
		
			unk.f_37 = flag;
			unk.f_38 = 1;
			unk.f_39 = flag;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, func_120(-563911624), 128);
			unk.f_16 = joaat("COLOR_RED");
		
			if (bParam0)
				unk41 = { func_119(-850412361) };
			else
				unk41 = { func_119(2062860436) };
		
			unk.f_33 = unk41;
			unk.f_34 = unk41.f_1;
			unk43 = { func_119(1715681724) };
			unk.f_35 = unk43;
			unk.f_36 = unk43.f_1;
			TEXT_LABEL_ASSIGN_STRING(&(unk.f_17), func_118(1010851584), 128);
			unk.f_37 = 0;
			unk.f_38 = 1;
			unk.f_39 = flag;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, MISC::VAR_STRING(2, func_118(-600593841), hash), 128);
		
			if (flag)
				unk.f_16 = joaat("color_vip");
			else
				unk.f_16 = joaat("COLOR_WHITE");
		
			if (bParam0)
				unk41 = { func_119(-57825929) };
			else
				unk41 = { func_119(1423614133) };
		
			unk.f_33 = unk41;
			unk.f_34 = unk41.f_1;
			unk43 = { func_119(1715681724) };
			unk.f_35 = unk43;
			unk.f_36 = unk43.f_1;
			TEXT_LABEL_ASSIGN_STRING(&(unk.f_17), func_118(-107182257), 128);
			unk.f_37 = flag;
			unk.f_38 = 1;
			unk.f_39 = flag;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, func_120(567391299), 128);
			unk.f_16 = joaat("COLOR_WHITE");
		
			if (bParam0)
				unk41 = { func_119(-1970558384) };
			else
				unk41 = { func_119(1219991266) };
		
			unk.f_33 = unk41;
			unk.f_34 = unk41.f_1;
			unk43 = { func_119(1715681724) };
			unk.f_35 = unk43;
			unk.f_36 = unk43.f_1;
			TEXT_LABEL_ASSIGN_STRING(&(unk.f_17), func_118(-952890825), 128);
			unk.f_37 = 0;
			unk.f_38 = 0;
			unk.f_39 = 0;
			break;
	}

	return unk;
}

void func_77(var uParam0, const char* sParam1, Hash hParam2) // Position - 0x167B Hash - 0x4D3AA545 ^0xBC6A7926
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3.f_3[3], sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3.f_3[4], hParam2);
	return;
}

void func_78(var uParam0, const char* sParam1) // Position - 0x16A1 Hash - 0xC9CC4E9B ^0x8319EC77
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3.f_3[0], sParam1);
	return;
}

void func_79(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x16B8 Hash - 0x718B8EBA ^0x7F9F3B11
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3.f_3[1], hParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3.f_3[2], hParam2);
	return;
}

void func_80(var uParam0, BOOL bParam1) // Position - 0x16DE Hash - 0xCCBA2C7A ^0x846B75EF
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3.f_3[5], bParam1);
	return;
}

void func_81(var uParam0, BOOL bParam1) // Position - 0x16F5 Hash - 0x3F143E9D ^0x4B5BA02A
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3.f_3[6], bParam1);
	return;
}

BOOL func_82(var uParam0) // Position - 0x170C Hash - 0x5001E582 ^0x5001E582
{
	return func_121(*uParam0, 1);
}

void func_83(var uParam0) // Position - 0x171C Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_84(var uParam0, BOOL bParam1) // Position - 0x1732 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_82(uParam0))
		func_86(uParam0);

	return;
}

int func_85(var uParam0) // Position - 0x1752 Hash - 0x113335E1 ^0xD2416829
{
	if (!func_82(uParam0))
		return 0;

	if (func_122(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_123() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

void func_86(var uParam0) // Position - 0x1798 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_124(uParam0, 0f);
	return;
}

int func_87(var uParam0) // Position - 0x17A7 Hash - 0x9B27C2D6 ^0x32BDF39E
{
	Hash itemContextByIndex;
	int arrayCount;
	int i;
	Hash txdHash;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return 0;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);

	for (i = 0; i < arrayCount; i = i + 1)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, i);
	
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(itemContextByIndex))
		{
		}
		else
		{
			txdHash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(itemContextByIndex, uParam0->f_1);
		
			if (txdHash == 0)
			{
			}
			else if (!TXD::DOES_STREAMED_TXD_EXIST(txdHash))
			{
			}
			else
			{
				TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(txdHash);
			}
		}
	}

	return 1;
}

BOOL func_88(Any* panParam0) // Position - 0x181B Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_89(int iParam0) // Position - 0x1851 Hash - 0x146AD031 ^0x5F6D8139
{
	if (iParam0 == 1045621973)
		return false;

	return true;
}

BOOL func_90(Hash hParam0) // Position - 0x1868 Hash - 0x12439F45 ^0x8F7547B8
{
	if (!func_125(hParam0, 0))
		return false;

	if (func_126(hParam0) == 785047730)
		return false;

	return true;
}

BOOL func_91(var uParam0, Any* panParam1, int iParam2) // Position - 0x1892 Hash - 0x40D1CBB4 ^0x7AE425A6
{
	var unk;
	var unk15;

	unk.f_9 = joaat("SLOTID_NONE");
	func_127(*panParam1, &unk, true, false, -1);

	if (!func_125(unk.f_4, 0))
		return false;

	if (func_128(unk.f_4))
		if (!func_129(panParam1, &unk15))
			return false;
	else if (func_130(unk.f_4))
		if (!func_131(panParam1, &unk15))
			return false;
	else
		return false;

	if (!func_132(uParam0, &unk15, iParam2))
		return false;

	return true;
}

BOOL func_92(var uParam0, int iParam1) // Position - 0x1919 Hash - 0x71A94088 ^0xF4987858
{
	var unk;
	var unk37;

	func_133(&unk);
	unk37 = unk.f_32;
	unk37.f_1 = unk.f_33;

	if (!func_132(uParam0, &unk37, iParam1))
		return false;

	return true;
}

int func_93(var uParam0) // Position - 0x1948 Hash - 0x6A88B3A8 ^0xB7A5DDF0
{
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_3[1]);
}

int func_94(var uParam0, int iParam1) // Position - 0x195B Hash - 0xA55835E4 ^0xE6A0AB95
{
	if (!func_134(&uParam0->f_3[1], iParam1))
		return 0;

	return 1;
}

void func_95(var uParam0) // Position - 0x1979 Hash - 0xF1BA5335 ^0x2E6EA242
{
	Hash itemContextByIndex;
	int arrayCount;
	int i;
	Hash txdHash;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);

	for (i = 0; i < arrayCount; i = i + 1)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, i);
	
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(itemContextByIndex))
		{
		}
		else
		{
			txdHash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(itemContextByIndex, uParam0->f_1);
		
			if (txdHash == 0)
			{
			}
			else if (!TXD::DOES_STREAMED_TXD_EXIST(txdHash))
			{
			}
			else
			{
				TXD::REQUEST_STREAMED_TXD(txdHash, true);
			}
		}
	}

	return;
}

Hash func_96(var uParam0) // Position - 0x19EC Hash - 0xD6B32345 ^0xD0BD94C4
{
	Hash hashKey;

	hashKey = 0;

	switch (*uParam0)
	{
		case 0:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_COUGAR_SIGHTING_MISSIONS");
			break;
	
		case 1:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BOAR_SIGHTING_MISSIONS");
			break;
	
		case 2:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BUCK_SIGHTING_MISSIONS");
			break;
	
		case 3:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_FOX_SIGHTING_MISSIONS");
			break;
	
		case 4:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_ALLIGATOR_SIGHTING_MISSIONS");
			break;
	
		case 5:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BEAVER_SIGHTING_MISSIONS");
			break;
	
		case 6:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_WOLF_SIGHTING_MISSIONS");
			break;
	
		case 7:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_MOOSE_SIGHTING_MISSIONS");
			break;
	
		case 8:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BISON_SIGHTING_MISSIONS");
			break;
	
		case 9:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_ELK_SIGHTING_MISSIONS");
			break;
	
		case 10:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_COYOTE_SIGHTING_MISSIONS");
			break;
	
		case 11:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_PANTHER_SIGHTING_MISSIONS");
			break;
	
		case 12:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_RAM_SIGHTING_MISSIONS");
			break;
	
		case 13:
			hashKey = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BEAR_SIGHTING_MISSIONS");
			break;
	}

	return hashKey;
}

int func_97() // Position - 0x1B0A Hash - 0xBDDDB943 ^0xBDDDB943
{
	if (func_135())
		return 2;

	if (!func_136(0) && !func_137(0))
		return 0;

	return 1;
}

void func_98() // Position - 0x1B36 Hash - 0x442A0DFC ^0x32BB1F1F
{
	!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("hub"), 1115220099);
	return;
}

int func_99(int iParam0) // Position - 0x1B50 Hash - 0xBE3E23A ^0xBE3E23A
{
	if (func_135())
		return 4;

	if (!func_136(0) && !func_137(0))
		return 0;

	if (func_136(0) && !func_137(0))
		return 1;

	if (UNLOCK::UNLOCK_IS_VISIBLE(func_138(&iParam0, 0)) && !UNLOCK::UNLOCK_IS_VISIBLE(func_139(&iParam0, 0)))
		return 2;

	return 3;
}

int func_100(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1BB6 Hash - 0xDA2A1E8C ^0x19FF9E67
{
	int num;
	var unk10;
	Hash scriptHash;
	var unk26;
	BOOL flag;
	int num2;
	BOOL flag2;
	BOOL flag3;
	Hash hash;

	if (func_140())
	{
		Global_1940252.f_11589 = hParam0;
		func_141(hParam0, 1, -142743235, 0, false);
		return 0;
	}

	if (!func_142(hParam0, bParam4))
		return 0;

	if (func_143(hParam0))
		return 0;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 108107462))
		return 0;

	flag = true;
	num2 = 1;
	num.f_4 = iParam3;
	num.f_5 = 1;

	if (hParam0 == -418848773)
		UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("player_menu", "mp_moonshine_selection");

	if (func_144(hParam0))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}

	if (func_145(hParam0, -2081717885))
		func_146(hParam0, unk10, num, unk26, flag, num2);
	else if (func_145(hParam0, -1909684001))
		func_147(hParam0, unk10, num, flag, num2);
	else if (func_145(hParam0, 587975446))
		func_148(hParam0, unk10);
	else if (func_145(hParam0, 566155764))
		if (!func_149(hParam0))
			return 0;

	if (func_150(hParam0))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_151(hParam0, bParam5, bParam6, bParam1))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_145(hParam0, -1227898937))
	{
		num.f_2 = hParam0;
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "doc_newspaper", 32);
		unk10.f_14 = 1024;
		unk10.f_15 = 1;
		func_152(unk10, 1);
		num2 = 0;
		flag = false;
	}
	else if (func_145(hParam0, -1472964441) || func_145(hParam0, -228153877) || func_145(hParam0, 566155764))
	{
	}
	else if (func_145(hParam0, 1919582297))
	{
		if (func_153() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_33, true) || !PED::IS_PED_ON_FOOT(Global_33))
			return 0;
	
		switch (hParam0)
		{
			case joaat("consumable_predator_bait"):
			case joaat("consumable_potent_predator_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_predator", 32);
				break;
		
			case -252071901:
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		
			case joaat("consumable_herbivore_bait"):
			case joaat("consumable_potent_herbivore_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_herbivore", 32);
				break;
		}
	
		num.f_1 = hParam0;
		num.f_3 = bParam1;
		unk10 = { num };
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_152(unk10, 0);
		flag = false;
	}
	else if (func_154(hParam0))
	{
		num.f_3 = 0;
		num.f_1 = hParam0;
		num.f_2 = 0;
		num = func_155(Global_1072759.f_28313.f_25.f_67);
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "net_player_wheel_item_use", 32);
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_152(unk10, 0);
		num2 = 1;
	}
	else if (func_156(hParam0) == joaat("CLOTHING"))
	{
		if (!func_157(hParam0))
		{
			func_158("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, true);
			return num2;
		}
	
		hash = func_159(hParam0);
	
		switch (hash)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				flag2 = func_160();
				break;
		
			default:
				flag2 = true;
				break;
		}
	
		if (!flag2)
		{
			if (func_161(PLAYER::PLAYER_ID()))
				func_158("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, true);
			else
				func_158("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return num2;
		}
	
		if (hash == -999503751)
		{
			if (Global_1953292.f_1676 != hParam0)
				func_162(20, hParam0, 0, 0, false);
		}
		else
		{
			switch (hash)
			{
				case -2061583405:
					func_164(hParam0);
					func_162(35, 0, 0, 0, false);
					return 1;
			
				case -1719060085:
					if (hParam0 == Global_1953292.f_1676.f_1[23 /*3*/])
					{
						func_165(Global_33, 260271636, 0, -358215195, true, true, true, true, false, true, true, false);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipGlovesFidget", true, 15);
						func_166(hParam0, false, false);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipGlovesFidget", true, 15);
						func_166(hParam0, true, false);
					}
					break;
			
				case -525676072:
				case -68128151:
				case 81053684:
					func_163(hParam0, false);
					return num2;
			
				case 119907797:
				case 1388798186:
					if (hParam0 == Global_1953292.f_1676.f_1[10 /*3*/])
					{
						func_165(Global_33, Global_1953292.f_83[10 /*12*/], 0, -358215195, true, true, true, true, false, true, true, false);
						func_166(hParam0, false, false);
						return 1;
					}
					else
					{
						func_166(hParam0, true, false);
						func_167(-2061583405, false);
					
						if (hash == 1388798186)
							func_167(119907797, false);
						else if (hash == 119907797)
							func_167(1388798186, false);
					}
					break;
			
				default:
					if (!func_145(hParam0, 160827531))
						break;
				
					func_163(hParam0, false);
					break;
			}
		
			func_165(Global_33, hParam0, 0, -358215195, true, true, true, false, false, true, true, false);
		}
	}
	else
	{
		switch (hParam0)
		{
			case joaat("kit_shaving_kit"):
				break;
		
			case joaat("upgrade_upg_mortar_pestle"):
			case -1448210800:
				func_181(true);
				break;
		
			case joaat("kit_camp"):
			case joaat("kit_camp_simple"):
				if (func_157(joaat("kit_camp")))
				{
					if (func_173(1, 1))
					{
						func_174(2, true);
					}
					else if (func_175(1))
					{
						func_158("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, true);
					}
					else if (func_176())
					{
						func_158("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, true);
					}
					else
					{
						if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
							func_177();
						else
							func_158("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
					
						func_178(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
					}
				}
				else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
				{
					func_158("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
					func_178(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
				}
				else if (func_176())
				{
					func_158("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, true);
				}
				else
				{
					func_158("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, true);
				}
				break;
		
			case joaat("kit_collectors_bag"):
				UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("Collectors"));
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("Collectors")) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "collectors_bag", 32);
					unk10.f_14 = 1024;
					func_152(unk10, 0);
				}
			
				return 1;
		
			case -1115561122:
				if (Global_1148185[PLAYER::PLAYER_ID() /*10*/].f_4)
					func_158("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, true);
				else
					func_182();
			
				return 1;
		
			case joaat("weapon_kit_camera"):
			case 332793555:
				if (func_179(Global_33, true, 0, false) != hParam0)
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, hParam0, false, 0, false, false);
			
				return 1;
		
			case joaat("kit_gun_oil"):
			case joaat("upgrade_upg_coffee_kit"):
				func_180(535, true);
				break;
		
			case joaat("kit_wardrobe"):
				if (func_101() != -1)
					break;
			
				if (!func_157(hParam0))
				{
					func_158("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, true);
					break;
				}
			
				flag2 = func_168(7, hParam0);
				flag3 = func_168(1, hParam0);
			
				if (flag3 && !flag2)
				{
					if (MAP::DOES_BLIP_EXIST(Global_17339))
						MAP::REMOVE_BLIP(&Global_17339);
				
					Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
					MAP::BLIP_ADD_MODIFIER(Global_17339, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
					func_158(MISC::VAR_STRING(0, -1680440926, Global_17339), 10000, 0, 0, 0, true);
					break;
				}
			
				if (!func_169(7))
				{
					func_158("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, true);
					break;
				}
			
				if (!flag2)
				{
					if (func_171(Global_33, func_170(7), false))
					{
						func_158("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, true);
					}
					else
					{
						if (MAP::DOES_BLIP_EXIST(Global_17339))
							MAP::REMOVE_BLIP(&Global_17339);
					
						Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_17339, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_158(MISC::VAR_STRING(0, -482898802, Global_17339), 10000, 0, 0, 0, true);
					}
				
					break;
				}
			
				scriptHash = joaat("player_wardrobe");
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					num.f_2 = 51499045;
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_wardrobe", 32);
					unk10.f_14 = 1024;
					unk10.f_15 = 1;
					func_152(unk10, 0);
				}
				break;
		
			case joaat("document_player_journal"):
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("document_player_journal"), 1928812891, 1, 0, -1082130432);
				flag = false;
				return 1;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				if (!WEAPON::_IS_WEAPON_BINOCULARS(func_179(Global_33, true, 0, false)))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, hParam0, false, 0, false, false);
			
				return 1;
		
			case 1259508039:
				func_107(true, 0);
				break;
		
			case 1401465909:
				UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("satchel"));
			
				if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("satchel_ui_event_handler"))
					UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(1976336482, 1261159557);
				else
					UIAPPS::LAUNCH_UIAPP_BY_HASH(1976336482);
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(698150113) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					num.f_3 = !(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != joaat("satchel_ui_event_handler"));
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "field_guide", 32);
					unk10.f_14 = 1024;
					func_152(unk10, 0);
				}
			
				return 1;
		
			case joaat("KIT_HANDHELD_CATALOG"):
				func_172();
				break;
		
			default:
				num2 = 0;
				break;
		}
	}

	if (flag)
		HUD::_0xBFFF81E12A745A5F();

	return num2;
}

int func_101() // Position - 0x2549 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

Blip func_102(int iParam0) // Position - 0x2557 Hash - 0x32DD6F0C ^0xF4923608
{
	return Global_1110244.f_268.f_32[iParam0 /*752*/].f_1;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_103(BOOL bParam0) // Position - 0x256F Hash - 0x9E8B020 ^0x4D351A4A
{
	var unk;
	int num;
	int num2;
	int i;
	Hash hash;
	int num3;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	i = 0;
	unk = { func_183(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, 1816455607, 0) };

	if (func_184(unk, &num, &num2, 0))
	{
		if (num2 > 0)
		{
			for (i = 0; i < num2; i = i + 1)
			{
				hash = func_185(i, num);
			
				if (!bParam0)
				{
					if (func_186(hash))
					{
					}
					else
					{
						goto 0xAA;
					}
				}
			
				if (!func_186(hash))
				{
				}
				else
				{
					num3 = 1;
					break;
				}
			}
		}
	
		func_187(num);
		return num3;
	}

	return 0;
}

int func_104() // Position - 0x2638 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

BOOL func_105(Any* panParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2647 Hash - 0xB6837E65 ^0x89A4EFE4
{
	int fileHandle;

	if (uParam1.f_1 == 0)
		return false;

	fileHandle = func_188(uParam1.f_1);

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	*panParam0 = fileHandle;
	panParam0->f_2 = -80782076;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
		return false;

	return true;
}

int func_106(int iParam0, char* sParam1, Hash* phParam2, char* sParam3, float* pfParam4, char* sParam5, Vector3* pvParam6) // Position - 0x26A1 Hash - 0x5851BC53 ^0x8A1263E0
{
	int num;

	num = func_189();
	num.f_2 = -738708473;
	num.f_3 = func_190(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return 0;

	num.f_2 = -1407851228;
	num.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(phParam2, &num);
	num.f_2 = 1059891245;
	num.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &num);
	num.f_2 = -99852754;
	num.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &num);
	return 1;
}

void func_107(BOOL bParam0, int iParam1) // Position - 0x2729 Hash - 0xCC16269 ^0xB563FF97
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

void func_108(int iParam0) // Position - 0x274B Hash - 0xD400177 ^0x917DE313
{
	int num;

	if (Global_1940252.f_11587 != iParam0)
	{
		Global_1940252.f_11587 = iParam0;
		Global_1940252.f_11597 = 1;
	}

	num = func_191();
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_11617, num);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_11616, num);
	func_192(Global_1940252.f_11587 != -283002878 && Global_1940252.f_11587 != -889932290);
	return;
}

Hash func_109(int iParam0) // Position - 0x27B3 Hash - 0xC02FF737 ^0x4B828969
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

int func_110(int iParam0, int iParam1) // Position - 0x2842 Hash - 0x751E6540 ^0x7AE49023
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

BOOL func_111() // Position - 0x2AE4 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_113(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

struct<2> func_112(int iParam0) // Position - 0x2B3C Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_113(var uParam0, var uParam1) // Position - 0x2B50 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_193(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_194(uParam0))
		return false;

	return true;
}

int func_114(var uParam0, var uParam1) // Position - 0x2B84 Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

Hash func_115(int iParam0) // Position - 0x2B8E Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_196(func_195(iParam0));
}

BOOL func_116() // Position - 0x2BA0 Hash - 0xDA88E2E5 ^0xD668EDEE
{
	int num;

	num = func_197();

	if (!func_198(num))
		return 0;

	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return 1;
}

int func_117() // Position - 0x2BCB Hash - 0x707F9D20 ^0x3DE0AEDC
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_199(1656173034)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_199(1656173034)))
		return 0;
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_199(-537144215)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_199(-537144215)))
		return 2;
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_199(1629055295)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_199(1629055295)))
		return 1;
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_199(965428371)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_199(965428371)))
		return 3;

	return 1;
}

char* func_118(int iParam0) // Position - 0x2C9D Hash - 0x46C31A24 ^0x2AAF0099
{
	int num;
	var unk5;

	num = func_200();
	num.f_2 = 9;
	num.f_3 = func_201(0);
	num.f_4 = iParam0;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&unk5, &num))
		return func_202(iParam0);

	return func_203(unk5);
}

struct<2> func_119(int iParam0) // Position - 0x2CDE Hash - 0x3D546670 ^0x451F4D05
{
	var unk;
	int num;

	num = func_200();
	num.f_3 = func_201(0);
	num.f_4 = iParam0;
	num.f_2 = 11;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &num))
		return func_204(iParam0);

	num.f_2 = 13;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(unk.f_1), &num))
		return unk;

	return unk;
}

const char* func_120(int iParam0) // Position - 0x2D35 Hash - 0xDB1FBFC ^0x8047FF62
{
	return MISC::VAR_STRING(2, func_118(iParam0));
}

BOOL func_121(int iParam0, int iParam1) // Position - 0x2D48 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_122(var uParam0) // Position - 0x2D57 Hash - 0x39705408 ^0x39705408
{
	return func_121(*uParam0, 2);
}

int func_123() // Position - 0x2D67 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

void func_124(var uParam0, float fParam1) // Position - 0x2D85 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_205() - fParam1;
	func_206(uParam0, 1);
	func_207(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_125(Hash hParam0, int iParam1) // Position - 0x2DAB Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_126(Hash hParam0) // Position - 0x2DC5 Hash - 0x38A4AA29 ^0x94A42DF6
{
	var outData;

	outData = 20;

	if (ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -153848696, &outData) > 0)
		return outData[0];

	return 0;
}

BOOL func_127(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x2DED Hash - 0x113CD144 ^0x113CD144
{
	return func_208(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_128(Hash hParam0) // Position - 0x2E03 Hash - 0x1B551CF7 ^0xC792EAB9
{
	return func_159(hParam0) == -126813555;
}

BOOL func_129(Any* panParam0, var uParam1) // Position - 0x2E17 Hash - 0x636FB5C9 ^0x636FB5C9
{
	var unk;

	if (!func_209(panParam0, &unk))
		return false;

	if (!func_210(panParam0, uParam1))
		return false;

	return true;
}

BOOL func_130(Hash hParam0) // Position - 0x2E40 Hash - 0x1B551CF7 ^0x9235FF01
{
	return func_159(hParam0) == 1946043663;
}

BOOL func_131(Any* panParam0, var uParam1) // Position - 0x2E54 Hash - 0x398E7DBE ^0xD18F4D19
{
	Hash hash;
	var unk;

	if (!func_209(panParam0, &hash))
		return false;

	if (!func_210(panParam0, uParam1))
		return false;

	if (func_211(hash))
	{
		func_212(&unk);
		uParam1->f_1 = unk.f_33;
		*uParam1 = unk.f_32;
		uParam1->f_2 = 1;
	}

	return true;
}

BOOL func_132(var uParam0, var uParam1, int iParam2) // Position - 0x2EA0 Hash - 0x8D5F823A ^0x34140269
{
	int arrayCount;
	var unk;
	var unk9;
	var unk16;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3[1]))
		return false;

	if (iParam2 < -1)
		return false;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_3[1]);

	if (iParam2 == -1 || iParam2 >= arrayCount)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "offer_item_", 64);
		TEXT_LABEL_APPEND_INT(&unk, arrayCount, 64);
		unk9 = 6;
	
		if (!func_213(&unk9, &uParam0->f_3[1], unk, uParam1))
			return false;
	
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_3[1], -1, "coupon_small_entry", unk9[0]);
	}
	else
	{
		if (!func_214(uParam0, iParam2, &unk16))
			return false;
	
		if (!func_215(&unk16, uParam1))
			return false;
	}

	return true;
}

void func_133(char* sParam0) // Position - 0x2F50 Hash - 0x50474786 ^0x68BD2206
{
	TEXT_LABEL_ASSIGN_STRING(sParam0, "COUPON_OFFER_NO_VALUE", 128);
	TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_16), "COUPON_OFFER_NO_VALUE_DESC", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
	return;
}

BOOL func_134(var uParam0, int iParam1) // Position - 0x2F9A Hash - 0x654F7CD5 ^0x29BD4A1F
{
	int arrayCount;
	int i;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);

	if (iParam1 < 0 || iParam1 >= arrayCount)
		return false;

	for (i = arrayCount; i >= iParam1; i = i + -1)
	{
		DATABINDING::_0x6318FB3BE37E11B3(*uParam0, iParam1);
	}

	return true;
}

BOOL func_135() // Position - 0x2FEE Hash - 0x33AEE5FF ^0x3FB4305F
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_216() };

	if (!func_113(unk))
		return false;

	switch (func_217(unk))
	{
		case -1485083887:
		case -1007768440:
		case -888098333:
		case -862235034:
		case -683590526:
		case -526464326:
		case -390920703:
		case -171479703:
		case 1036678516:
		case 1200532109:
		case 1292291919:
		case 1559697571:
		case 1848308415:
		case 1882251776:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_136(int iParam0) // Position - 0x3082 Hash - 0x44ADDC80 ^0x44ADDC80
{
	int num;

	num = func_218(iParam0);

	if (num != 0)
		return func_73(num);

	return false;
}

BOOL func_137(int iParam0) // Position - 0x30A2 Hash - 0x9D263419 ^0x214F0638
{
	Hash eInventoryItem;

	eInventoryItem = func_219(iParam0);

	if (func_125(eInventoryItem, 0))
		if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(true), eInventoryItem, false) > 0)
			return true;
		else
			return false;
	else
		return true;

	return false;
}

Hash func_138(var uParam0, int iParam1) // Position - 0x30DF Hash - 0x5D507F15 ^0x62A30119
{
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 458679075;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1848813677;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -196458416;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -463663296;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1084113577;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1796670491;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -646307557;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -2109368060;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 326651247;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -405566878;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 29257535;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 78935770;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 970130440;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 477228254;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

Hash func_139(var uParam0, int iParam1) // Position - 0x32F7 Hash - 0x5D507F15 ^0x3A5F5AB4
{
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1089915990;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -773408572;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -2082859740;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -889608768;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -909138717;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1835385888;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -771537204;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -366807494;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1843292837;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -804810882;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 189635081;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -2001092856;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1371968565;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1114581963;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

BOOL func_140() // Position - 0x350F Hash - 0x85414BC8 ^0x5EF38AB5
{
	if (Global_1940252.f_39 == 3)
		return true;

	return false;
}

BOOL func_141(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3526 Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_125(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_220(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_221(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk = { func_222(hParam0, bParam4, 0) };
	unk6 = { func_223(hParam0, unk, unk.f_4, bParam4) };
	return func_224(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_142(Hash hParam0, BOOL bParam1) // Position - 0x359E Hash - 0xF243367B ^0xCF999DBB
{
	BOOL flag;
	int num;

	flag = func_145(hParam0, 1816455607);

	if (!func_125(hParam0, 0))
		if (!flag)
			return false;

	if (Global_1940252.f_8)
		return false;

	if (hParam0 != 1259508039 && hParam0 != joaat("kit_camp") && hParam0 != joaat("kit_camp_simple") && bParam1)
	{
		num = func_225(hParam0);
	
		if (func_145(hParam0, 1147021565))
			num = num | 64;
	
		if (!func_226(true, num))
			return false;
	}

	if (hParam0 == -1448210800 || hParam0 == joaat("upgrade_upg_mortar_pestle"))
		if (func_227())
			return false;

	if (!flag && !func_228(hParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_143(Hash hParam0) // Position - 0x3670 Hash - 0x601AA14C ^0xEF1C7FBC
{
	if (func_154(hParam0))
		return false;

	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_62(false), hParam0, func_229(false)))
		return false;

	switch (hParam0)
	{
		case joaat("kit_camp"):
		case joaat("kit_camp_simple"):
			func_230(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
	
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_231() != -1)
			{
				func_158(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_231()), 10000, 0, 0, 0, true);
				func_233(-1);
			}
			break;
	}

	return true;
}

BOOL func_144(Hash hParam0) // Position - 0x36EF Hash - 0xBD978834 ^0xE4A74EA
{
	var unk;

	if (hParam0 == 17745825)
	{
		TEXT_LABEL_ASSIGN_STRING(&(unk.f_10), "legendary_animal_map", 32);
		unk.f_14 = 512;
		func_152(unk, 0);
		return true;
	}

	return false;
}

BOOL func_145(Hash hParam0, Hash hParam1) // Position - 0x3721 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_125(hParam0, 0))
		return func_235(func_234(hParam0), hParam1);

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

void func_146(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, BOOL bParam28, int iParam29) // Position - 0x3762 Hash - 0x5A3F4CC0 ^0x5A3F4CC0
{
	return;
}

void func_147(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, BOOL bParam27, int iParam28) // Position - 0x376A Hash - 0x3A6CFA ^0x3A6CFA
{
	return;
}

void func_148(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x3772 Hash - 0x3087D828 ^0x3087D828
{
	return;
}

BOOL func_149(Hash hParam0) // Position - 0x377A Hash - 0xCA7B09D7 ^0xF0D78144
{
	if (func_101() == 0 && func_237(func_236(hParam0), true, false) != 0)
	{
		func_158("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, true);
		return false;
	}

	return true;
}

BOOL func_150(Hash hParam0) // Position - 0x37B3 Hash - 0xC4C130FB ^0xC8101E3B
{
	if (func_238(hParam0, joaat("TAG_ITEM_PROPERTY")) == 1816455607)
	{
		func_239(0);
		func_241(func_240(hParam0));
		return true;
	}

	return false;
}

BOOL func_151(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x37E2 Hash - 0xD49E510D ^0x2607D5E4
{
	if (func_242(hParam0, bParam1, false, 0, -1082130432))
	{
		Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}

	switch (func_238(hParam0, -949239683))
	{
		case -1919515848:
			if (!bParam1)
			{
				func_256(hParam0);
				return true;
			}
			break;
	
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_245(hParam0);
				else
					func_250(hParam0);
			
				return true;
			}
			break;
	
		case -1337515701:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("pocket_watch_inspect_unholster"), 1, 0, -1082130432);
				return true;
			}
			break;
	
		case -1239610997:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1087288635, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_245(hParam0);
				else
					func_253(hParam0);
			
				return true;
			}
			break;
	
		case -793205628:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 136592566, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -273840653:
			if (!bParam1)
			{
				func_247(hParam0, true);
				return true;
			}
			break;
	
		case -262371497:
			if (!bParam1)
			{
				func_254(hParam0);
				return true;
			}
			break;
	
		case 89124942:
			if (!bParam1)
			{
				func_245(hParam0);
				return true;
			}
			break;
	
		case 238865292:
			if (!bParam1)
			{
				func_257(hParam0, bParam3);
				return true;
			}
			break;
	
		case 632545869:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, -1401979141, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case 845883585:
			if (!bParam1)
			{
				if (!func_243())
				{
					if (func_244(&Global_33))
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_hat"), 1, 0, -1082130432);
					else
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_no_hat"), 1, 0, -1082130432);
				
					return true;
				}
				else
				{
					func_158("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, true);
				}
			}
			break;
	
		case 881567935:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
	
		case 999632878:
			if (!bParam1)
			{
				func_248(hParam0, true);
				return true;
			}
			break;
	
		case 1130235258:
			if (!bParam1)
			{
				func_249(hParam0);
				return true;
			}
			break;
	
		case 1177617310:
			if (!bParam1)
			{
				func_258(hParam0, bParam3);
				return true;
			}
			break;
	
		case 1443104131:
			if (!bParam1)
			{
				func_255(hParam0);
				return true;
			}
			break;
	
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_245(hParam0);
				else
					func_246(hParam0);
			
				return true;
			}
			break;
	
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_245(hParam0);
				else
					func_251(hParam0);
			
				return true;
			}
			break;
	
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_245(hParam0);
				else
					func_252(hParam0);
			
				return true;
			}
			break;
	}

	return false;
}

void func_152(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x3BFF Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1939434.f_161 >= 10)
		return;

	if (!func_259(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_260(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939434[i /*16*/].f_10)))
		{
			Global_1939434[i /*16*/] = { uParam0 };
			Global_1939434.f_161 = Global_1939434.f_161 + 1;
			func_261(iParam16);
			return;
		}
	}

	return;
}

BOOL func_153() // Position - 0x3C9B Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1893611 & 2 != 0;
}

BOOL func_154(Hash hParam0) // Position - 0x3CAB Hash - 0xE969B321 ^0x8C585BB9
{
	if (!func_125(hParam0, 0))
		return false;

	if (func_156(hParam0) == joaat("emote"))
		return true;

	return false;
}

int func_155(var uParam0) // Position - 0x3CD5 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_262(uParam0);
}

int func_156(Hash hParam0) // Position - 0x3CE3 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_125(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_157(Hash hParam0) // Position - 0x3D0E Hash - 0xA0AC1BF ^0x3B7AC8C7
{
	if (hParam0 == 0)
		return false;

	if (func_156(hParam0) == joaat("CLOTHING"))
		func_159(hParam0) == -999503751;

	return true;
}

int func_158(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3D3D Hash - 0x8EBD6187 ^0x42F0F0AC
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

Hash func_159(Hash hParam0) // Position - 0x3D78 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_125(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_160() // Position - 0x3DA3 Hash - 0x94D65CA6 ^0x4569CEBD
{
	Player player;
	Ped mountOwnedByPlayer;
	Ped playerPed;
	Vector3 entityCoords;
	Vector3 entityCoords2;

	player = PLAYER::PLAYER_ID();
	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(player);
	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mountOwnedByPlayer) || PED::IS_PED_INJURED(mountOwnedByPlayer))
		return 0;

	if (PED::IS_PED_SWIMMING(playerPed) || PED::IS_PED_SWIMMING(mountOwnedByPlayer))
		return 0;

	if (PED::IS_PED_ON_MOUNT(playerPed))
		if (PED::_GET_RIDER_OF_MOUNT(mountOwnedByPlayer, false) != playerPed)
			return 0;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, false, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(mountOwnedByPlayer, false, false) };

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(playerPed, mountOwnedByPlayer))
		return 1;

	return 0;
}

BOOL func_161(Player plParam0) // Position - 0x3E56 Hash - 0xBF9BE0C1 ^0x883CF463
{
	Ped playerPed;
	Ped mountOwnedByPlayer;

	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(plParam0);

	if (PED::IS_PED_ON_MOUNT(playerPed))
		if (PED::_GET_RIDER_OF_MOUNT(mountOwnedByPlayer, false) == playerPed)
			return true;

	return false;
}

void func_162(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x3E88 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_263(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_264(num);
	return;
}

int func_163(Hash hParam0, BOOL bParam1) // Position - 0x3EBA Hash - 0x26B1C24E ^0x1E715211
{
	int num;

	if (!func_265())
		return 0;

	if (!func_266(hParam0))
		return 0;

	if (func_267(hParam0))
	{
		num = 0;
	
		if (func_159(hParam0) == 81053684 || func_145(hParam0, 160827531) && !func_145(hParam0, -1303648999))
			if (bParam1)
				func_268(&num, 2);
	
		return func_269(hParam0, num);
	}

	return 0;
}

void func_164(Hash hParam0) // Position - 0x3F31 Hash - 0x6BEB4307 ^0x6B28C66A
{
	int num;
	Hash hash;

	num = 10;
	hash = Global_1953292.f_1676.f_1[num /*3*/];

	if (hash == hParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipHatFidget", true, 15);
		func_165(Global_33, -2065815962, 0, -358215195, true, true, true, true, false, true, true, true);
		func_166(hParam0, false, false);
		return;
	}

	PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipHatFidget", true, 15);
	func_165(Global_33, hParam0, 0, -358215195, true, true, true, true, false, true, true, true);

	if (func_270(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
		func_271();
		func_263(128);
		return;
	}

	if (hash == Global_1953292.f_83[num /*12*/])
	{
		func_166(hParam0, true, false);
		return;
	}

	if (func_272(-2061583405, false))
	{
		if (func_273(hash))
			func_166(hash, false, false);
		else
			func_274(hash, true, true, false, false, false);
	
		func_166(hParam0, true, false);
		return;
	}

	if (func_273(hash))
	{
		func_166(hash, false, false);
		func_166(hParam0, true, false);
	}
	else if (func_273(hParam0))
	{
		if (hParam0 != func_275(0))
		{
			func_276(hParam0, hash, false, false, false);
			func_166(hParam0, false, false);
			func_166(hash, false, false);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
			func_263(128);
			func_166(hParam0, true, false);
		}
	}

	return;
}

int func_165(Ped pedParam0, Hash hParam1, Hash hParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11) // Position - 0x4088 Hash - 0x31745379 ^0x5F342BAB
{
	var unk;
	int num;

	if (hParam3 == -358215195)
	{
		unk = { func_222(hParam1, true, 0) };
		hParam3 = func_277(unk.f_4);
	
		if (hParam3 == -358215195)
			return 0;
	}

	if (!func_279(hParam1, hParam2, func_278(hParam3, 1), bParam4, true, false, true))
		return 0;

	func_280(true, bParam5, bParam9, true, bParam11);

	if (bParam10)
		if (func_281(hParam1, false))
			func_282(Global_1953292.f_1676.f_1[func_278(hParam3, 1) /*3*/], false, false);
		else
			func_282(hParam1, true, false);

	switch (hParam3)
	{
		case 1108822547:
			if (func_270(32768))
			{
				func_271();
				func_162(21, hParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam7 && hParam1 != Global_1953292.f_83[func_278(hParam3, 1) /*12*/])
				func_162(27, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
		return 1;

	num = func_283(hParam3);

	if (bParam4)
		num = num | 2;

	if (bParam8)
		func_284(&num, 4);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_162(19, 0, num, 0, false);
	}
	else
	{
		num = num | 1;
		func_162(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_166(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x41E1 Hash - 0x9789B209 ^0xF02FDDD
{
	var unk;
	var guid;

	unk = { func_222(hParam0, bParam2, 0) };
	guid = { func_223(hParam0, unk, unk.f_4, bParam2) };

	if (func_285(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_62(bParam2), &guid, bParam1);
	return;
}

Hash func_167(Hash hParam0, BOOL bParam1) // Position - 0x4231 Hash - 0xC283C021 ^0x9CE4FF09
{
	int i;
	Hash hash;
	Hash hash2;
	var guid;
	Hash outSlotId;
	var unk4;

	hash2 = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return 0;

	unk4 = { func_223(joaat("WARDROBE"), func_286(bParam1), joaat("SLOTID_WARDROBE"), bParam1) };

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_159(hash) == hParam0 || hParam0 == 81053684 && func_145(hash, 160827531))
		{
			guid = { func_223(hash, unk4, outSlotId, bParam1) };
		
			if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(func_62(bParam1), &guid))
			{
				hash2 = hash;
				INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_62(bParam1), &guid, false);
			}
		}
	}

	return hash2;
}

BOOL func_168(int iParam0, Hash hParam1) // Position - 0x42EC Hash - 0xC8DEF152 ^0xBE9C015A
{
	Ped mount;

	iParam0 = func_287(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	mount = func_170(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return 0;

	if (PED::IS_PED_SWIMMING(Global_33) || PED::IS_PED_SWIMMING(mount))
		return 0;

	if (PED::IS_PED_ON_MOUNT(Global_33))
		if (PED::_GET_RIDER_OF_MOUNT(mount, false) == Global_33)
			if (hParam1 == joaat("kit_wardrobe"))
				return 0;
		else
			return 0;

	if (func_288(iParam0))
		return 1;

	return 0;
}

BOOL func_169(int iParam0) // Position - 0x4393 Hash - 0x9F2526C ^0x74A3693D
{
	Ped ped;

	iParam0 = func_287(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_170(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_289())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

Ped func_170(int iParam0) // Position - 0x43EC Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_287(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

BOOL func_171(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x4418 Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

void func_172() // Position - 0x4482 Hash - 0x3118984E ^0x9DD7A6C6
{
	int num;

	if (func_290())
		return;

	if (func_291(8))
	{
		switch (Global_1051832.f_3649)
		{
			case 0:
				if (func_291(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
				
					func_292(16);
				}
			
				func_293(1);
				break;
		
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					break;
			
				func_292(8);
				func_293(0);
				break;
		}
	
		return;
	}

	if (func_294())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1915656.f_22504.f_1 = 1;
		Global_1051832.f_43 = 0;
		func_295();
	}
	else
	{
		num = func_297(func_296());
	
		if (num != -1)
		{
			func_158(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num), 10000, 0, 0, 0, true);
			Global_1051832.f_3648 = 0;
			Global_1051832.f_3649 = 0;
			func_298(0);
			func_233(-1);
		}
	}

	return;
}

BOOL func_173(int iParam0, int iParam1) // Position - 0x4579 Hash - 0x5D65A4D7 ^0x7C5646CA
{
	Any gangId;

	if (!func_299() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
		return false;

	if (!func_300(16))
		return false;

	if (func_301())
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
			return false;

	if (!func_302())
		return false;

	if (func_303(16))
		return false;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (iParam1 == 1 && !GANG::NETWORK_IS_GANG_ID_VALID(gangId) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	if (iParam0 == 1 && func_304(Global_1147183.f_8, 1))
		return false;

	if (func_176())
		return false;

	return true;
}

int func_174(int iParam0, BOOL bParam1) // Position - 0x4639 Hash - 0x31DB738A ^0x31DB738A
{
	if (bParam1)
		func_305();

	if (!func_306(bParam1, bParam1, !bParam1))
		return 0;

	func_307(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

BOOL func_175(int iParam0) // Position - 0x4675 Hash - 0xA059D395 ^0xAFACF28D
{
	return func_304(Global_1147183.f_8, iParam0);
}

BOOL func_176() // Position - 0x4689 Hash - 0x1BB0EADA ^0xDD84C79B
{
	int num;

	num = func_308(PLAYER::PLAYER_ID());

	if (num != -1)
		if (Global_1141332[num /*27*/].f_18.f_1 != 0 && func_304(Global_1141332[num /*27*/].f_18, 1))
			return true;

	return false;
}

void func_177() // Position - 0x46CB Hash - 0xEA92AA44 ^0xD024142D
{
	int num;
	int num2;

	num = { func_112(0) };

	if (func_113(num))
	{
		if (num == 6)
		{
			num2 = func_309(PLAYER::PLAYER_ID(), false);
		
			if (num2 != -1)
				if (func_310(num2) == joaat("posse_versus"))
					func_158("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, true);
				else if (num2 == 1)
					func_158("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, true);
				else
					func_158("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, true);
		}
		else
		{
			func_158("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, true);
		}
	}

	return;
}

void func_178(Any anParam0) // Position - 0x475B Hash - 0x89B6E65 ^0xA9E218C2
{
	var unk;

	unk.f_12 = -1;
	unk.f_12.f_1 = -1;
	unk.f_14 = 255;
	unk.f_15 = 255;
	unk.f_6 = anParam0;
	unk.f_4 = 56;
	func_312(unk, func_311(0, 8), false, false);
	return;
}

Hash func_179(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x47A0 Hash - 0xDD2F88C2 ^0x29E97850
{
	Hash weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

void func_180(int iParam0, BOOL bParam1) // Position - 0x47E2 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_313(iParam0, &num, &num2);

	if (!func_314(iParam0, num, num2, bParam1))
		return;

	func_315(num, num2);
	return;
}

void func_181(BOOL bParam0) // Position - 0x480F Hash - 0x5C051E8E ^0x5C051E8E
{
	if (func_101() != -1 || !bParam0 || func_316(Global_33))
	{
		func_317();
		return;
	}

	return;
}

void func_182() // Position - 0x483D Hash - 0x84DD5872 ^0x184C819C
{
	Player player;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(-741705372))
	{
		player = PLAYER::PLAYER_ID();
		func_318(1, player);
	}

	return;
}

struct<10> func_183(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x485E Hash - 0x440EE211 ^0xAE2816F9
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

BOOL func_184(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x4932 Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_185(int iParam0, int iParam1) // Position - 0x4953 Hash - 0x3644D28E ^0x6DB2088F
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

BOOL func_186(Hash hParam0) // Position - 0x4996 Hash - 0xF5B83F0D ^0x8A6C4405
{
	return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(func_319(hParam0, false));
}

int func_187(int iParam0) // Position - 0x49A9 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_188(int iParam0) // Position - 0x49CA Hash - 0xC3245347 ^0xC3245347
{
	int num;
	var unk;

	switch (iParam0)
	{
		case joaat("hennigans_stead_camp"):
		case joaat("rio_bravo_camp"):
		case joaat("roanoke_ridge_camp"):
		case joaat("great_plains_camp"):
		case joaat("cumberland_forest_camp"):
		case joaat("tall_trees_camp"):
		case joaat("cholla_springs_camp"):
		case joaat("grizzlies_camp"):
		case joaat("gaptooth_ridge_camp"):
		case joaat("bayou_nawas_camp"):
		case joaat("scarlett_meadows_camp"):
		case joaat("heartland_camp"):
		case joaat("big_valley_camp"):
			num = func_320(iParam0, 1);
			return Global_1147183.f_361[num];
	
		default:
		
	}

	return unk;
}

int func_189() // Position - 0x4A41 Hash - 0x4F5358E7 ^0x4EB0CC4F
{
	return Global_1072759.f_28418[48 /*4*/].f_3;
}

int func_190(int iParam0) // Position - 0x4A56 Hash - 0xB8EC44B7 ^0x241D648F
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

int func_191() // Position - 0x543E Hash - 0xE121FB43 ^0xE121FB43
{
	int i;

	for (i = 0; i < 12; i = i + 1)
	{
		if (Global_1940252.f_11564[i] == Global_1940252.f_11587)
			return i;
	}

	return 0;
}

void func_192(BOOL bParam0) // Position - 0x5474 Hash - 0x809E815 ^0xABB9FC5C
{
	if (bParam0)
	{
		HUD::_SHOW_PLAYER_CORES(true);
		HUD::_SHOW_HORSE_CORES(false);
	}
	else
	{
		HUD::_SHOW_PLAYER_CORES(false);
		HUD::_SHOW_HORSE_CORES(true);
	}

	return;
}

BOOL func_193(int iParam0) // Position - 0x5498 Hash - 0x5000025C ^0x5000025C
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

int func_194(int iParam0) // Position - 0x54D7 Hash - 0xE34A477A ^0xE34A477A
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

int func_195(int iParam0) // Position - 0x556D Hash - 0x6C2ECC6A ^0x6C2ECC6A
{
	switch (iParam0)
	{
		case 0:
			return func_321(Global_1292143.f_2983);
	
		case 1:
			return func_321(Global_1292143.f_2984);
	
		default:
		
	}

	return -1;
}

Hash func_196(int iParam0) // Position - 0x55A6 Hash - 0xBCD92AB4 ^0xBCD92AB4
{
	Hash hash;

	if (!func_322(iParam0))
		return 0;

	hash = func_323(iParam0);

	if (hash != -1)
		return hash;
	else
		return func_324(iParam0, true);

	return 0;
}

int func_197() // Position - 0x55DD Hash - 0x889968A6 ^0xCACDDEBA
{
	return func_325(-1052513930);
}

BOOL func_198(int iParam0) // Position - 0x55EE Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

Hash func_199(int iParam0) // Position - 0x55FA Hash - 0xE50A1F01 ^0x45EC39FB
{
	int num;
	Hash num2;

	num = func_200();
	num.f_2 = 15;
	num.f_3 = func_201(0);
	num.f_4 = iParam0;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num))
		return func_326(iParam0);

	return num2;
}

int func_200() // Position - 0x5634 Hash - 0x6AEA4C80 ^0xD398D983
{
	return Global_1072759.f_28418[52 /*4*/].f_3;
}

int func_201(int iParam0) // Position - 0x5649 Hash - 0x1CEE9807 ^0x1CEE9807
{
	switch (iParam0)
	{
		case 0:
			return Global_1292143.f_2983;
	
		case 1:
			return Global_1292143.f_2984;
	
		default:
		
	}

	return 0;
}

char* func_202(int iParam0) // Position - 0x567A Hash - 0xC6B40484 ^0xAF9C2554
{
	int num;
	var unk5;

	num = func_200();
	num.f_2 = 8;
	num.f_3 = iParam0;
	num.f_4 = 0;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&unk5, &num))
		return "";

	return func_203(unk5);
}

char* func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x56B4 Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

struct<2> func_204(int iParam0) // Position - 0x56C8 Hash - 0xE18426E1 ^0xAD9FD6DF
{
	var unk;
	int num;

	num = func_200();
	num.f_3 = iParam0;
	num.f_2 = 10;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &num))
		return unk;

	num.f_2 = 12;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(unk.f_1), &num))
		return unk;

	return unk;
}

float func_205() // Position - 0x5714 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_206(var uParam0, int iParam1) // Position - 0x5746 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_207(var uParam0, int iParam1) // Position - 0x5757 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_208(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x576C Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_62(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_209(Any* panParam0, var uParam1) // Position - 0x57A6 Hash - 0xA1CFAC7A ^0xFB586119
{
	var unk;

	*uParam1 = 0;

	if (!func_88(panParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_127(*panParam0, &unk, true, false, -1))
		return false;

	if (!func_125(unk.f_4, 0))
		return false;

	if (!func_327(unk.f_4))
		return false;

	*uParam1 = unk.f_4;
	return true;
}

BOOL func_210(Any* panParam0, var uParam1) // Position - 0x580B Hash - 0x1040FAB5 ^0xC31AF78C
{
	Hash key;
	var outData;
	int i;

	if (!func_209(panParam0, &key))
		return false;

	outData.f_8 = 10;
	outData.f_8.f_1.f_4 = 15;
	outData.f_8.f_1.f_36 = 10;
	outData.f_8.f_1.f_47.f_4 = 15;
	outData.f_8.f_1.f_47.f_36 = 10;
	outData.f_8.f_1.f_47.f_47.f_4 = 15;
	outData.f_8.f_1.f_47.f_47.f_36 = 10;
	outData.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
	outData.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_480 = 10;
	outData.f_480.f_1.f_4 = 10;
	outData.f_480.f_1.f_25.f_4 = 10;
	outData.f_480.f_1.f_25.f_25.f_4 = 10;
	outData.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
	outData.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
	outData.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	outData.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	outData.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	outData.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	outData.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	outData.f_732.f_2 = 5;
	outData.f_732.f_18 = 8;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_BY_NAME(key, &outData))
		return false;

	for (i = 0; i < 5; i = i + 1)
	{
		switch (outData.f_732.f_2[i /*3*/].f_2)
		{
			case -774197843:
				func_328(&outData.f_732.f_2[i /*3*/], &(uParam1->f_1), uParam1, true);
				break;
		}
	}

	if (func_329(panParam0))
	{
		uParam1->f_2 = 0;
	}
	else
	{
		uParam1->f_2 = 1;
	
		if (func_330(panParam0))
			uParam1->f_3 = 1;
		else if (func_331(*panParam0))
			uParam1->f_4 = 1;
	}

	return true;
}

BOOL func_211(Hash hParam0) // Position - 0x59DC Hash - 0xCCFFC573 ^0x9FE2B5F4
{
	int num;

	if (!func_125(hParam0, 0))
		return false;

	if (!func_130(hParam0))
		return false;

	if (!func_145(hParam0, MISC::GET_HASH_KEY("CI_TAG_OFFER_MYSTERY")))
		return false;

	num = func_319(hParam0, true);

	if (num != 0)
		return false;

	return true;
}

void func_212(char* sParam0) // Position - 0x5A2B Hash - 0x50474786 ^0xC299F685
{
	TEXT_LABEL_ASSIGN_STRING(sParam0, "HO_ITEM_MYSTERY_REWARD_NAME", 128);
	TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_16), "HO_ITEM_MYSTERY_REWARD_DESCRIPTION", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
	return;
}

BOOL func_213(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) // Position - 0x5A75 Hash - 0xD2DFDE65 ^0xE2ECBE5E
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
		return false;

	uParam0->[0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, &uParam2);
	uParam0->[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->[0], 440050042, *uParam10);
	uParam0->[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->[0], 1058850005, uParam10->f_1);
	uParam0->[3] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->[0], joaat("Enabled"), uParam10->f_2);
	uParam0->[4] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->[0], 1024435631, uParam10->f_3);
	uParam0->[5] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->[0], 596676017, uParam10->f_4);
	return true;
}

BOOL func_214(var uParam0, int iParam1, var uParam2) // Position - 0x5B0D Hash - 0xD7455C89 ^0x142B3CF
{
	int arrayCount;

	arrayCount = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_3[1]);

	if (iParam1 < 0 || iParam1 >= arrayCount)
		return false;

	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_3[1], iParam1);
	return true;
}

BOOL func_215(var uParam0, var uParam1) // Position - 0x5B49 Hash - 0xFBF308E5 ^0x40CA49E1
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
		return false;

	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 440050042, *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 1058850005, uParam1->f_1);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, joaat("Enabled"), uParam1->f_2);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 1024435631, uParam1->f_3);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 596676017, uParam1->f_4);
	return true;
}

struct<2> func_216() // Position - 0x5BB0 Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_112(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_112(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

int func_217(var uParam0, var uParam1) // Position - 0x5BFB Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_332(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_218(int iParam0) // Position - 0x5C27 Hash - 0xA1E2F9AA ^0xA1E2F9AA
{
	switch (iParam0)
	{
		case 0:
			return 7;
	
		case 1:
			return 6;
	
		case 2:
			return 4;
	
		case 3:
			return 3;
	
		case 4:
			return 5;
	
		default:
		
	}

	return 0;
}

Hash func_219(int iParam0) // Position - 0x5C6A Hash - 0x26530429 ^0xDDB94F1F
{
	switch (iParam0)
	{
		case 0:
			return 273608212;
	
		case 1:
			return 1384535894;
	
		case 2:
			return joaat("upgrade_camp_butcher_table");
	
		case 3:
			return joaat("document_bounty_hunter_license");
	
		case 4:
			return joaat("kit_collectors_bag");
	
		default:
		
	}

	return 0;
}

int func_220(Hash hParam0, Hash hParam1) // Position - 0x5CC1 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_333(func_234(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

BOOL func_221(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x5CED Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_334(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_220(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_335(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_336(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_337(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_338(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_339(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_62(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

struct<5> func_222(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x5E05 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_286(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_156(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_345(hParam0, -1823706425))
			{
				unk = { func_223(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_345(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_223(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_223(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_345(hParam0, -1653629781))
			{
				unk = { func_223(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_344(bParam1) };
		
			switch (func_159(hParam0))
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
			unk = { func_223(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_340(bParam1) };
		
			if (iParam2 && func_341(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_342(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_342(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_343(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_127(unk, &unk28, bParam1, false, -1))
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
			else if (func_345(hParam0, -1653629781))
			{
				unk = { func_223(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_223(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x6179 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_125(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_62(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_224(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x61AA Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_334(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_127(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_335(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_101() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_338(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_339(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_62(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_225(Hash hParam0) // Position - 0x62C8 Hash - 0x2F9A232D ^0xF8D1A587
{
	if (func_145(hParam0, 1573112293))
		return func_346(hParam0);

	if (func_145(hParam0, 1816455607))
		return func_347();

	if (func_348(hParam0))
		return func_349();

	switch (func_159(hParam0))
	{
		case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
		case 664784405:
		case joaat("CI_CATEGORY_EMOTE_GREETS"):
		case joaat("CI_CATEGORY_EMOTE_DANCES"):
			return func_358();
	
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_352();
	
		case -1823706425:
			if (hParam0 == -1115561122)
				return func_355();
			else
				return func_356();
			break;
	
		case -1520388130:
		case 1802292908:
			return func_351();
	
		case -1393202694:
		case 2041469314:
			return func_346(hParam0);
	
		case -854348463:
			return func_357();
	
		case -525676072:
			return func_352();
	
		case -77448735:
			if (func_350(hParam0))
				return func_346(hParam0);
			break;
	
		case 1779021115:
			if (hParam0 == joaat("weapon_kit_camera") || hParam0 == 332793555)
				return func_353();
		
			return func_354();
	
		default:
			if (func_125(hParam0, 0))
				if (func_145(hParam0, 1919582297))
					return func_359();
				else if (hParam0 == joaat("upgrade_upg_mortar_pestle") || hParam0 == -1448210800)
					return func_360();
				else if (hParam0 == joaat("kit_horse_brush"))
					return func_361();
				else if (func_145(hParam0, 1147021565))
					return func_362();
		
			return func_363();
	}

	return func_363();
}

BOOL func_226(BOOL bParam0, int iParam1) // Position - 0x648F Hash - 0xDE6C34D8 ^0x4950B3D1
{
	Ped mount;

	if (Global_1940199.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_33, true) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (func_101() == 0)
		if (func_364(131072))
			return false;

	if (!func_365(iParam1, 1))
		if (func_364(1024))
			return false;

	if (Global_1940199.f_16)
		return false;

	if (!func_365(iParam1, 2) && func_364(32))
		return false;

	if (!func_365(iParam1, 4))
		if (func_364(4096))
			return false;

	if (!func_365(iParam1, 8) && func_364(512))
		return false;

	if (!func_365(iParam1, 512) && !func_366(bParam0))
		return false;

	if (!func_365(iParam1, 262144) && !func_367(bParam0, func_365(iParam1, 524288)))
		return false;

	if (!func_365(iParam1, 64) && !func_368(bParam0, iParam1, true))
		return false;

	if (!func_365(iParam1, 128))
	{
		if (func_369(Global_33, SCRIPT_TASK_MOUNT_ANIMAL) || PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam0)
				func_158("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (!func_365(iParam1, 16))
	{
		if (func_370(Global_33))
		{
			mount = PED::GET_MOUNT(Global_33);
		
			if (!func_371(mount, true))
			{
				if (bParam0)
					func_158("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, true);
			
				return false;
			}
		}
	}

	if (!func_365(iParam1, 256) && func_364(8192))
		return false;

	if (!func_365(iParam1, 1024) && func_364(65536))
	{
		if (bParam0)
			func_158("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!func_365(iParam1, 2048))
		if (func_364(32768))
			return false;

	if (!func_365(iParam1, 4096))
		if (func_364(16384))
			return false;

	if (!func_365(iParam1, 8192))
		if (!func_364(16))
			return false;

	if (!func_365(iParam1, 67108864))
		if (!func_364(268435456))
			return false;

	if (!func_365(iParam1, 16384))
		if (func_364(256))
			return false;

	if (!func_365(iParam1, 32768))
	{
		if (func_372())
		{
			if (bParam0)
				func_158("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (!func_365(iParam1, 131072))
		if (!func_364(524288))
			return false;

	if (!func_365(iParam1, 65536))
		if (!func_364(262144))
			return false;

	if (!func_365(iParam1, 1048576))
		if (!func_364(2097152))
			return false;

	if (!func_365(iParam1, 2097152))
		if (!func_364(8388608))
			return false;

	if (!func_365(iParam1, 4194304))
		if (!func_364(16777216))
			return false;

	if (!func_365(iParam1, 8388608))
		if (func_364(33554432))
			return false;

	if (!func_365(iParam1, 16777216))
		if (func_364(67108864))
			return false;

	if (!func_365(iParam1, 33554432))
		if (func_364(134217728))
			return false;

	if (func_364(64))
		return false;
	else if (func_364(128))
		return false;
	else if (func_364(1048576))
		return false;
	else if (func_364(4))
		return false;

	if (!func_365(iParam1, 134217728))
		if (func_373(256))
			return false;

	if (!func_365(iParam1, 268435456))
		if (func_364(536870912))
			return false;

	if (!func_365(iParam1, 536870912))
		if (func_364(1073741824))
			return false;

	return true;
}

BOOL func_227() // Position - 0x68CB Hash - 0xC1143497 ^0x6DF3C037
{
	int scenarioPointTypePedIsUsing;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		num = scenarioPointTypePedIsUsing;
	
		if (num != joaat("world_player_dynamic_kneel") && num != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
			return true;
	}

	return false;
}

BOOL func_228(Hash hParam0, int iParam1) // Position - 0x6916 Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_125(hParam0, 0))
		return false;

	num = func_156(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_375(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_374(hParam0, 1))
				return false;
			break;
	}

	return func_376(hParam0, false, false, false) >= iParam1;
}

BOOL func_229(BOOL bParam0) // Position - 0x6999 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

Any func_230(int iParam0, int iParam1) // Position - 0x69C9 Hash - 0x2C0BA169 ^0xDCFC749C
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_1556.f_44.f_87);
}

int func_231() // Position - 0x69E0 Hash - 0x8190E5D8 ^0xF593603
{
	return Global_1915656.f_22504.f_5;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x69F1 Hash - 0xA17D549C ^0x22E1F439
{
	var unk;
	int num;

	switch (iParam0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
	
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
	
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
	
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
	
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
	
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
	
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
	
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
	
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
	
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
	
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
	
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
	
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
	
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
	
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
	
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
	
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
	
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
	
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
	
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
	
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
	
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
	
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
	
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
	
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
	
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
	
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
	
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
	
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
	
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
	
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
	
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
	
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
	
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
	
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
	
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
	
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
	
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
	
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
	
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
	
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
	
		case 46:
			unk = -1;
			unk.f_1 = -1;
			unk = { func_112(0) };
		
			if (!func_113(unk))
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			num = func_377(&unk, 1);
		
			if (num == -1)
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			if (!func_378(num, 461218520, true))
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			return func_380(func_379(num, 461218520));
	}

	return "";
}

void func_233(int iParam0) // Position - 0x6C8A Hash - 0xC421D95B ^0xE7B505B3
{
	Global_1915656.f_22504.f_5 = iParam0;
	return;
}

Hash func_234(Hash hParam0) // Position - 0x6C9D Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_235(Hash hParam0, Hash hParam1) // Position - 0x6CA7 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_333(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

int func_236(Hash hParam0) // Position - 0x6CDD Hash - 0x537A51B4 ^0x537A51B4
{
	int i;

	for (i = 0; i <= 49; i = i + 1)
	{
		if (func_381(i, hParam0))
			return i;
	}

	return -1;
}

int func_237(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6D09 Hash - 0x571E293 ^0x8A680264
{
	if (!func_382(iParam0))
		return 1;

	if (!func_383(iParam0))
		return 5;

	if (!bParam1 && Global_1220826.f_48[iParam0 /*21*/].f_17)
		if (bParam2 || Global_1220826.f_1.f_20 != 0)
			return 2;

	if (!bParam2 && !func_384(iParam0))
		return 3;

	if (func_385(iParam0) && !func_386())
		return 4;

	return 0;
}

int func_238(Hash hParam0, int iParam1) // Position - 0x6D8B Hash - 0x7A1C2599 ^0xFF9B5634
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

void func_239(int iParam0) // Position - 0x6DD5 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11599 = iParam0;
	return;
}

Hash func_240(Hash hParam0) // Position - 0x6DE6 Hash - 0x33F7D399 ^0x18C3F003
{
	if (!func_125(hParam0, 0))
		return 0;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(hParam0);
}

void func_241(Hash hParam0) // Position - 0x6E03 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11605 = hParam0;
	return;
}

BOOL func_242(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x6E14 Hash - 0x5AD1F9FD ^0x14415059
{
	Hash interactionAnimHash;

	switch (func_238(hParam0, -949239683))
	{
		case -1565009253:
			if (!bParam1)
			{
				interactionAnimHash = 1254219723;
			
				if (bParam2)
					interactionAnimHash = -2077441721;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1420737577:
			if (!bParam1)
			{
				interactionAnimHash = 2129866661;
			
				if (bParam2)
					interactionAnimHash = 1607869040;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1273369295:
			if (!bParam1)
			{
				interactionAnimHash = -27851152;
			
				if (bParam2)
					interactionAnimHash = -1340223099;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1229959999:
			if (!bParam1)
			{
				interactionAnimHash = 1159762194;
			
				if (bParam2)
					interactionAnimHash = -1791047090;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1050374492:
			if (!bParam1)
			{
				interactionAnimHash = 343713021;
			
				if (bParam2)
					interactionAnimHash = 760057945;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -873135685:
			if (!bParam1)
			{
				interactionAnimHash = -1418730365;
			
				if (bParam2)
					interactionAnimHash = -1570312122;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -164980960:
			if (!bParam1)
			{
				interactionAnimHash = -138141811;
			
				if (bParam2)
					interactionAnimHash = 2000759837;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 10252101:
			if (!bParam1)
			{
				interactionAnimHash = -1246302402;
			
				if (bParam2)
					interactionAnimHash = -1791047090;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 24248412:
			if (!bParam1)
			{
				interactionAnimHash = 1014486005;
			
				if (bParam2)
					interactionAnimHash = 416212934;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 82200319:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 733893097:
			if (!bParam1)
			{
				interactionAnimHash = 436157482;
			
				if (bParam2)
					interactionAnimHash = 1972630951;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 871191033:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1513351077:
			if (!bParam1)
			{
				interactionAnimHash = 889797228;
			
				if (bParam2)
					interactionAnimHash = -1043439814;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1712126263:
			if (!bParam1)
			{
				interactionAnimHash = 1589555562;
			
				if (bParam2)
					interactionAnimHash = -1424266966;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1894156335:
			if (!bParam1)
			{
				interactionAnimHash = 1801769345;
			
				if (bParam2)
					interactionAnimHash = 374699583;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	}

	return false;
}

BOOL func_243() // Position - 0x7167 Hash - 0x78092BAE ^0x48B67C15
{
	return Global_1953292.f_1676.f_1[1 /*3*/].f_1 == joaat("pomade");
}

BOOL func_244(Ped pedParam0) // Position - 0x7183 Hash - 0x224EC90C ^0x807A7E5C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pedParam0) || ENTITY::IS_ENTITY_DEAD(*pedParam0))
		return false;

	if (func_387(*pedParam0, joaat("HATS"), false))
		return true;

	return false;
}

void func_245(Hash hParam0) // Position - 0x71BC Hash - 0xA69012EC ^0xD86A3DAD
{
	Hash hash;

	hash = joaat("use_handfull_satchel_left_hand_quick");

	switch (func_388())
	{
		case 0:
			hash = joaat("use_handfull_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_handfull_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_handfull_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (func_145(hParam0, 1573112293))
			func_390(func_389(hParam0), true, 1);
	
		func_391(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_246(Hash hParam0) // Position - 0x7256 Hash - 0x26CEB274 ^0x13CF482F
{
	Hash hash;

	hash = 16939881;

	switch (func_388())
	{
		case 0:
			hash = 16939881;
			break;
	
		case 1:
			hash = -1165614444;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 968591133;
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_247(Hash hParam0, BOOL bParam1) // Position - 0x72D6 Hash - 0xE800B03C ^0x3799F51A
{
	Hash hash;

	hash = -45077177;

	switch (func_388())
	{
		case 0:
			if (bParam1)
				hash = -2137817968;
			else
				hash = -45077177;
			break;
	
		case 1:
			if (bParam1)
				hash = -1947358597;
			else
				hash = 36807409;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			if (bParam1)
				hash = -750686877;
			else
				hash = 1293288723;
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_248(Hash hParam0, BOOL bParam1) // Position - 0x7383 Hash - 0xE800B03C ^0xCB090F44
{
	Hash hash;

	hash = 1700817728;

	switch (func_388())
	{
		case 0:
			if (bParam1)
				hash = -447623645;
			else
				hash = 1700817728;
			break;
	
		case 1:
			if (bParam1)
				hash = 1880532390;
			else
				hash = -480771797;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			if (bParam1)
				hash = 468890170;
			else
				hash = 764367205;
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_249(Hash hParam0) // Position - 0x7430 Hash - 0x26CEB274 ^0x4A49C80C
{
	Hash hash;

	hash = joaat("use_large_bottle_combat_left_hand");

	switch (func_388())
	{
		case 0:
			hash = joaat("use_large_bottle_combat_left_hand");
			break;
	
		case 1:
			hash = joaat("use_large_bottle_combat_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_large_bottle_combat_rifle");
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_250(Hash hParam0) // Position - 0x74B0 Hash - 0x26CEB274 ^0x806B3C6E
{
	Hash hash;

	hash = 2105609037;

	switch (func_388())
	{
		case 0:
			hash = 2105609037;
			break;
	
		case 1:
			hash = -1595716047;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -457187977;
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_251(Hash hParam0) // Position - 0x7530 Hash - 0x26CEB274 ^0x76FE185
{
	Hash hash;

	hash = 1964324114;

	switch (func_388())
	{
		case 0:
			hash = 1964324114;
			break;
	
		case 1:
			hash = 1826089606;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -654111932;
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_252(Hash hParam0) // Position - 0x75B0 Hash - 0x26CEB274 ^0x271E98F3
{
	Hash hash;

	hash = -1530144981;

	switch (func_388())
	{
		case 0:
			hash = -1530144981;
			break;
	
		case 1:
			hash = -312546963;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -389189374;
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_253(Hash hParam0) // Position - 0x7630 Hash - 0x26CEB274 ^0x8287AC45
{
	Hash hash;

	hash = -1074475556;

	switch (func_388())
	{
		case 0:
			hash = -1074475556;
			break;
	
		case 1:
			hash = -1846586910;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 392506445;
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_254(Hash hParam0) // Position - 0x76B0 Hash - 0x26CEB274 ^0x26B03C92
{
	Hash hash;

	hash = joaat("use_stimulant_injection_quick_left_hand");

	switch (func_388())
	{
		case 0:
			hash = joaat("use_stimulant_injection_quick_left_hand");
			break;
	
		case 1:
			hash = joaat("use_stimulant_injection_quick_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_stimulant_injection_quick_left_hand_rifle");
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_255(Hash hParam0) // Position - 0x7730 Hash - 0x26CEB274 ^0x5D3C7B2A
{
	Hash hash;

	hash = joaat("quick_smoke_cigarette_left_hand");

	switch (func_388())
	{
		case 0:
			hash = joaat("quick_smoke_cigarette_left_hand");
			break;
	
		case 1:
			hash = joaat("quick_smoke_cigarette_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("quick_smoke_cigarette_rifle");
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_256(Hash hParam0) // Position - 0x77B0 Hash - 0x26CEB274 ^0xBFBE1D88
{
	Hash hash;

	hash = joaat("quick_smoke_cigar_left_hand");

	switch (func_388())
	{
		case 0:
			hash = joaat("quick_smoke_cigar_left_hand");
			break;
	
		case 1:
			hash = joaat("quick_smoke_cigar_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("quick_smoke_cigar_rifle");
			break;
	}

	if (hash != 0)
	{
		func_391(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_257(Hash hParam0, BOOL bParam1) // Position - 0x7830 Hash - 0x1923F90C ^0xE8AF292D
{
	Hash hash;

	hash = joaat("use_tonic_satchel_left_hand_quick");

	switch (func_388())
	{
		case 0:
			hash = joaat("use_tonic_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_tonic_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_tonic_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (!func_391(Global_33, hParam0, hash, 1, 0) && bParam1)
		{
			func_392(hParam0);
			func_393(hParam0, 1, false, 562618531);
		}
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

void func_258(Hash hParam0, BOOL bParam1) // Position - 0x78CE Hash - 0x1923F90C ^0xB46E99E1
{
	Hash hash;

	hash = joaat("use_tonic_potent_satchel_left_hand_quick");

	switch (func_388())
	{
		case 0:
			hash = joaat("use_tonic_potent_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_tonic_potent_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_tonic_potent_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (!func_391(Global_33, hParam0, hash, 1, bParam1) && bParam1)
		{
			func_392(hParam0);
			func_393(hParam0, 1, false, 562618531);
		}
	}
	else
	{
		func_392(hParam0);
		func_393(hParam0, 1, false, 562618531);
	}

	return;
}

BOOL func_259(int iParam0, int iParam1) // Position - 0x796D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_260(const char* sParam0) // Position - 0x797C Hash - 0x2124511C ^0xA40AAA4F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939434[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

void func_261(int iParam0) // Position - 0x79B6 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_259(iParam0, 1))
		func_394(1);

	return;
}

int func_262(int iParam0) // Position - 0x79CD Hash - 0x9D41E8C7 ^0x9D41E8C7
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 0;
	
		case 3:
			return 3;
	
		default:
		
	}

	return -1;
}

void func_263(BOOL bParam0) // Position - 0x7A0A Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1953292 = Global_1953292 || bParam0;
	return;
}

void func_264(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x7A1D Hash - 0x21CB5355 ^0x21CB5355
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
		case 23:
			if (Global_1953292.f_918 >= 25)
				return;
		
			if (func_395(iParam0))
			{
				for (i = 0; i < Global_1953292.f_918; i = i + 1)
				{
					num = (Global_1953292.f_923 + i) % 25;
				
					if (Global_1953292.f_736[num /*4*/] == iParam0 && Global_1953292.f_736[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_736[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_396(iParam0);
			Global_1953292.f_736[Global_1953292.f_924 /*4*/] = { iParam0 };
			Global_1953292.f_918 = Global_1953292.f_918 + 1;
			Global_1953292.f_924 = (Global_1953292.f_924 + 1) % 25;
			func_263(8);
			break;
	
		case 24:
		case 25:
			if (Global_1953292.f_919 >= 25)
				return;
		
			if (func_395(iParam0))
				return;
		
			func_396(iParam0);
			Global_1953292.f_635[Global_1953292.f_919 /*4*/] = { iParam0 };
			Global_1953292.f_919 = Global_1953292.f_919 + 1;
			func_263(8);
			break;
	
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953292.f_920 >= 20)
				return;
		
			if (func_395(iParam0))
			{
				for (i = 0; i < Global_1953292.f_920; i = i + 1)
				{
					num = (Global_1953292.f_921 + i) % 20;
				
					if (Global_1953292.f_837[num /*4*/] == iParam0 && Global_1953292.f_837[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_837[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			if (iParam0 == 34)
			{
				Global_1953292.f_930 = 1;
				Global_1953292.f_930.f_1 = iParam0.f_2;
				Global_1953292.f_930.f_2 = iParam0.f_3;
			}
		
			func_396(iParam0);
			Global_1953292.f_837[Global_1953292.f_922 /*4*/] = { iParam0 };
			Global_1953292.f_920 = Global_1953292.f_920 + 1;
			Global_1953292.f_922 = (Global_1953292.f_922 + 1) % 20;
			func_263(8);
			break;
	}

	return;
}

BOOL func_265() // Position - 0x7D19 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1953292.f_3502;
}

BOOL func_266(Hash hParam0) // Position - 0x7D28 Hash - 0x99FE2AE6 ^0xF1FAFBED
{
	if (func_397())
		return false;

	if (!func_125(hParam0, 0))
		return false;

	if (!func_228(hParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_267(Hash hParam0) // Position - 0x7D5E Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_398(hParam0);
}

void func_268(var uParam0, int iParam1) // Position - 0x7D6C Hash - 0xF55E891F ^0xF55E891F
{
	func_399(uParam0, iParam1);
	return;
}

int func_269(Hash hParam0, int iParam1) // Position - 0x7D7C Hash - 0xE35D1323 ^0x1EF44228
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_400(hParam0);

	if (func_159(hParam0) == -525676072 || func_145(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_401(&hash))
			if (flag)
				interactionAnimHash = func_402();
			else
				interactionAnimHash = func_403();
		else if (flag)
			interactionAnimHash = func_404();
		else
			interactionAnimHash = func_405();
	else if (func_406(&hash))
		if (func_145(hash, -1303648999) || func_159(hash) == -525676072)
			interactionAnimHash = func_402();
		else
			interactionAnimHash = func_403();
	else if (flag)
		interactionAnimHash = func_404();
	else
		interactionAnimHash = func_405();

	if (interactionAnimHash != 0)
	{
		Global_1953292.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

BOOL func_270(BOOL bParam0) // Position - 0x7E63 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1953292 && bParam0 != false;
}

void func_271() // Position - 0x7E74 Hash - 0x606B8FC3 ^0xEBA3545E
{
	Global_1953292.f_3485 = 0;
	Global_1953292.f_3485.f_1 = 0;
	Global_1953292.f_3485.f_8 = 0;
	Global_1953292.f_3485.f_2 = 0;
	Global_1953292.f_3485.f_3[0] = 0;
	Global_1953292.f_3485.f_3[1] = 0;
	Global_1953292.f_3485.f_3[2] = 0;
	Global_1953292.f_3485.f_3[3] = 0;
	Global_1953292.f_3485.f_9 = 0;
	Global_1953292.f_3485.f_10 = 0;
	Global_1953292.f_3485.f_11 = 0;

	if (Global_1953292.f_3485.f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(Global_1953292.f_3485.f_13);

	Global_1953292.f_3485.f_12 = 0;
	func_407(32768);
	func_408(1108822547, 8, 6);
	return;
}

BOOL func_272(int iParam0, BOOL bParam1) // Position - 0x7F2B Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_409(iParam0, false) < func_410(iParam0, bParam1);
}

BOOL func_273(Hash hParam0) // Position - 0x7F43 Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_411(hParam0, &unk);
}

void func_274(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x7F53 Hash - 0x20094A26 ^0x2C3F4D15
{
	Hash hash;
	BOOL flag;

	hash = func_159(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			if (func_145(hParam0, 1584357097))
				return;
		
			flag = func_412(hParam0, &(Global_1953292.f_3352.f_28), Global_1953292.f_3352.f_33.f_1, bParam1, bParam5);
			break;
	
		case -1719060085:
			flag = func_412(hParam0, &(Global_1953292.f_3352.f_31), 1, bParam1, bParam5);
			break;
	
		case -999503751:
			flag = func_412(hParam0, &(Global_1953292.f_3352.f_27), Global_1953292.f_3352.f_33, bParam1, bParam5);
			break;
	
		case -525676072:
			flag = func_412(hParam0, &(Global_1953292.f_3352.f_29), Global_1953292.f_3352.f_33.f_2, bParam1, bParam5);
			break;
	
		case 81053684:
			flag = func_412(hParam0, &(Global_1953292.f_3352.f_30), 1, bParam1, bParam5);
			break;
	
		case 119907797:
			flag = func_412(hParam0, &(Global_1953292.f_3352.f_32), 1, bParam1, bParam5);
			break;
	
		case 1388798186:
			flag = func_412(hParam0, &(Global_1953292.f_3352.f_33.f_7), 1, bParam1, bParam5);
			break;
	
		default:
			if (func_145(hParam0, 160827531))
				flag = func_412(hParam0, &(Global_1953292.f_3352.f_30), 1, bParam1, bParam5);
			break;
	}

	if (!flag)
		return;

	func_413();

	if (func_414(hash) || hash != -999503751 && func_145(hParam0, -166674229))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_62(bParam5), hParam0, 0);

	func_166(hParam0, bParam3, bParam5);

	if (bParam4)
		func_415(true, hParam0);

	if (bParam2)
		func_416(false, false);

	return;
}

Hash func_275(int iParam0) // Position - 0x8101 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_417();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

void func_276(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x812C Hash - 0x815ADAC6 ^0x815ADAC6
{
	if (func_418(hParam0, hParam1))
	{
		func_419(hParam0, hParam1, true, bParam2, bParam3, bParam4);
		return;
	}

	return;
}

Hash func_277(int iParam0) // Position - 0x8151 Hash - 0x10AF8248 ^0x31B33E5F
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1953292.f_83[i /*12*/].f_9 == iParam0)
			return func_420(i, 1);
	}

	return -358215195;
}

int func_278(Hash hParam0, int iParam1) // Position - 0x818C Hash - 0xFF013CB6 ^0xFF013CB6
{
	switch (hParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
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
	
		case 735520874:
			return 5;
	
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

BOOL func_279(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x835D Hash - 0x6F6F94C ^0x832D60DF
{
	var unk;
	int num;
	int i;

	func_421();

	if (iParam2 == 39)
	{
		unk = { func_222(hParam0, true, 0) };
		iParam2 = func_278(func_277(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_270(32768) && iParam2 == 10)
		func_422(1108822547);

	num = 0;

	if (bParam4)
		num = 3;

	if (func_281(hParam0, true))
		func_423(&(Global_1953292.f_1557), &hParam0, iParam2, bParam5);

	if (bParam6)
		func_424(iParam2);

	func_425(iParam2, num);
	func_426(&Global_1953292.f_1557.f_1[iParam2 /*3*/], 4, 6);
	func_426(&Global_1953292.f_1676.f_1[iParam2 /*3*/], 4, 6);
	func_427(&(Global_1953292.f_1557), hParam0, iParam2, true, num);

	if (hParam1 == 0)
		hParam1 = Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1;

	Global_1953292.f_1557.f_1[iParam2 /*3*/] = hParam0;
	Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1 = func_428(hParam0, iParam2, hParam1);

	if (bParam3)
	{
		for (i = 0; i < Global_1953292.f_2938; i = i + 1)
		{
			if (Global_1953292.f_2938.f_2[i /*2*/] >= 0 && Global_1953292.f_2938.f_2[i /*2*/] < 39)
			{
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/] = 0;
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_408(func_420(Global_1953292.f_2938.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_280(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x84FC Hash - 0x28B4597A ^0x28B4597A
{
	func_429(&(Global_1953292.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
	return;
}

BOOL func_281(Hash hParam0, BOOL bParam1) // Position - 0x8519 Hash - 0x927056E ^0xFA981333
{
	!func_125(hParam0, 0);

	if (!bParam1 && hParam0 == joaat("clothing_item_hair_none") || hParam0 == joaat("clothing_item_beard_none"))
		return false;

	if (func_145(hParam0, 265372629))
		return true;

	return false;
}

BOOL func_282(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8564 Hash - 0x59CF58B3 ^0xFDEE716A
{
	var unk;
	var unk5;
	Hash hash;

	unk5 = { func_222(hParam0, bParam2, 0) };

	if (func_281(hParam0, false))
	{
		hash = func_430(unk5, unk5.f_4, bParam2, -1);
	
		if (hash != 0)
		{
			unk5 = { func_222(hash, bParam2, 0) };
			unk = { func_223(hash, unk5, unk5.f_4, bParam2) };
			return func_431(unk, false, bParam2);
		}
	
		return true;
	}

	unk = { func_223(hParam0, unk5, unk5.f_4, bParam2) };
	return func_431(unk, bParam1, bParam2);
}

int func_283(Hash hParam0) // Position - 0x85ED Hash - 0x6D41B005 ^0x4F13B04D
{
	int num;
	int num2;

	num = 0;
	num2 = func_278(hParam0, 1);

	switch (hParam0)
	{
		case 1108822547:
			if (Global_1953292.f_1676.f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/] || Global_1953292.f_1557.f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/])
				num = 48;
			break;
	}

	return num;
}

void func_284(var uParam0, int iParam1) // Position - 0x8651 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

Hash func_285(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x8662 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_125(hParam0, 0))
		return 0;

	if (!bParam7 && func_220(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_223(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_62(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

struct<4> func_286(BOOL bParam0) // Position - 0x86E1 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_62(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_223(joaat("character"), func_432(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_223(joaat("character"), func_432(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_223(joaat("character"), func_432(), joaat("SLOTID_NONE"), bParam0);
}

int func_287(int iParam0) // Position - 0x8781 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

BOOL func_288(int iParam0) // Position - 0x879A Hash - 0x11215AF ^0x23164775
{
	Ped ped;

	iParam0 = func_287(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_170(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return false;

	if (func_433(ped))
		return true;

	return false;
}

int func_289() // Position - 0x87FB Hash - 0x38870270 ^0x38870270
{
	return Global_38.f_289.f_3222;
}

BOOL func_290() // Position - 0x880C Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1915656.f_22504.f_1;
}

BOOL func_291(int iParam0) // Position - 0x881D Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1051832.f_3648 && iParam0 != false;
}

void func_292(int iParam0) // Position - 0x8831 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1051832.f_3648 = Global_1051832.f_3648 - Global_1051832.f_3648 && iParam0;
	return;
}

void func_293(int iParam0) // Position - 0x8852 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1051832.f_3649 = iParam0;
	return;
}

BOOL func_294() // Position - 0x8863 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22504;
}

void func_295() // Position - 0x8872 Hash - 0x3C6E7275 ^0x31AA3C4E
{
	PAD::_SET_CONTROL_CONTEXT(4, joaat("HandheldCatalogue"));
	return;
}

BOOL func_296() // Position - 0x8884 Hash - 0x8D9A8CC3 ^0x8D9A8CC3
{
	return func_291(4);
}

int func_297(BOOL bParam0) // Position - 0x8891 Hash - 0x3D1D4A2D ^0x4A9294C0
{
	Player playerIndex;
	Vehicle vehiclePedIsUsing;
	Hash entityModel;
	int scenarioPointTypePedIsUsing;

	if (!func_434())
		return 3;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pause_menu")) > 0 && Global_1051832.f_3650 == 0 && !bParam0)
		return 45;

	if (Global_1915656.f_20638)
		return 10;

	if (Global_1051832.f_3738 != 0)
		return 0;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return 12;

	if (func_435(1106247680, 0) || PED::IS_PED_HOGTIED(Global_33) || PED::IS_PED_HOGTYING(Global_33))
		return 13;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33) || PED::IS_PED_IN_ANY_TRAIN(Global_33))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing))
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
		
			switch (entityModel)
			{
				case joaat("breach_cannon"):
				case joaat("gatling_gun"):
				case joaat("gatlingmaxim02"):
				case joaat("hotchkiss_cannon"):
					return 14;
			}
		}
	
		return 11;
	}

	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33) && !Global_1915656.f_22504.f_1)
		return 16;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return 17;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
		return 18;

	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
	
		if (scenarioPointTypePedIsUsing != joaat("world_player_dynamic_kneel") && scenarioPointTypePedIsUsing != joaat("prop_player_dynamic_seat_chair_table") && scenarioPointTypePedIsUsing != joaat("prop_player_seat_chair_dynamic"))
			return 19;
	}

	if (func_436(255))
		return 3;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return 44;

	if (Global_1108965.f_775.f_28 != -1 && Global_1108965.f_775.f_28 != 6 && Global_1108965.f_775.f_28 != 8)
		if (func_437(Global_1108965.f_775.f_28))
			return 36;
		else
			return 37;

	if (PED::_GET_PLAYER_PED_WATER_DEPTH(Global_33) >= 1f)
		return 22;

	if (Global_1572887.f_72.f_40 >= 11 && Global_1572887.f_72.f_40 < 15)
		return 42;

	if (PED::IS_PED_FALLING(Global_33) || PED::IS_PED_CLIMBING(Global_33) || PED::_IS_PED_SLIDING(Global_33) || PED::IS_PED_SWIMMING(Global_33))
		return 15;

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		return 21;

	if (func_438())
		return 43;

	return -1;
}

void func_298(int iParam0) // Position - 0x8AF0 Hash - 0x4270B4BA ^0x4270B4BA
{
	int num;

	if (!func_296())
		func_439(true);

	Global_1051832.f_3650 = iParam0;
	num = func_297(true);

	if (num != -1)
	{
		func_233(num);
		func_440(false);
	}
	else
	{
		func_440(true);
	}

	return;
}

BOOL func_299() // Position - 0x8B2E Hash - 0x2C6DE8F6 ^0xEC7C4E93
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_300(int iParam0) // Position - 0x8B4A Hash - 0x4D892971 ^0xA4BF78E0
{
	return func_304(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

BOOL func_301() // Position - 0x8B64 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_302() // Position - 0x8B78 Hash - 0x4B44C4C9 ^0x4B44C4C9
{
	return !func_300(2);
}

BOOL func_303(int iParam0) // Position - 0x8B86 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_304(int iParam0, int iParam1) // Position - 0x8BA7 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_305() // Position - 0x8BB6 Hash - 0x5281CE7E ^0x311564BB
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
		return;

	UIAPPS::_CLOSE_ALL_UIAPPS();
	return;
}

BOOL func_306(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8BCD Hash - 0xB9500D ^0xB9500D
{
	BOOL flag;

	flag = func_442(bParam2, func_441(), true, false, true, true, true, bParam0, bParam1);

	if (!flag)
		return false;

	return true;
}

void func_307(int iParam0) // Position - 0x8BF5 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1896762.f_365 = iParam0;
	return;
}

int func_308(Player plParam0) // Position - 0x8C06 Hash - 0xA7E5BCA7 ^0x9018D80B
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

int func_309(Player plParam0, BOOL bParam1) // Position - 0x8C36 Hash - 0x5FD9694A ^0x8A2402F0
{
	Player player;
	int i;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		player = plParam0;
	
		for (i = 0; i <= 7; i = i + 1)
		{
			if (Global_1205938.f_1[i /*26*/].f_1 != -1 && func_443(i, 64, player))
				if (bParam1)
					if (Global_1206497.f_78[i /*20*/] >= 2)
						return Global_1205938.f_1[i /*26*/].f_1;
				else if (Global_1206497.f_78[i /*20*/] >= 5)
					return Global_1205938.f_1[i /*26*/].f_1;
		}
	}

	return -1;
}

int func_310(int iParam0) // Position - 0x8CC0 Hash - 0x220835E3 ^0xD3CA642C
{
	if (iParam0 == -1)
		return 0;

	return Global_1206497.f_1[iParam0 /*4*/];
}

var func_311(int iParam0, int iParam1) // Position - 0x8CDC Hash - 0x42C305C ^0x81DF2F42
{
	return func_444(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_312(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0x8CFA Hash - 0x60237433 ^0x1CACDDD0
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
				func_445(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 5, &uParam19);
	return;
}

void func_313(int iParam0, var uParam1, var uParam2) // Position - 0x8D94 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_314(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x8DB0 Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_446(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_447(iParam0))
		return false;

	if (func_448(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_449(iParam0, 1) || func_450(32768))
		if (!func_449(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_451())
		return false;

	return true;
}

void func_315(int iParam0, int iParam1) // Position - 0x8E52 Hash - 0x978E21B ^0xA1438975
{
	var address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_316(Ped pedParam0) // Position - 0x8E76 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

void func_317() // Position - 0x8E91 Hash - 0x5516EB92 ^0x96671886
{
	Global_1913634.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913634.f_1581 = 1;
	return;
}

void func_318(int iParam0, Player plParam1) // Position - 0x8EAC Hash - 0xD1944A1 ^0xD3AC39CA
{
	Player player;

	player = plParam1;
	Global_1148185[player /*10*/].f_7 = Global_1148185[player /*10*/].f_7 || iParam0;
	return;
}

int func_319(Hash hParam0, BOOL bParam1) // Position - 0x8ECF Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_125(hParam0, 0))
		return func_452(func_234(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

int func_320(int iParam0, int iParam1) // Position - 0x8F27 Hash - 0xAC085F26 ^0xAC085F26
{
	switch (iParam0)
	{
		case joaat("hennigans_stead_camp"):
			return 8;
	
		case joaat("rio_bravo_camp"):
			return 9;
	
		case joaat("roanoke_ridge_camp"):
			return 10;
	
		case joaat("great_plains_camp"):
			return 6;
	
		case joaat("cumberland_forest_camp"):
			return 4;
	
		case joaat("tall_trees_camp"):
			return 12;
	
		case joaat("cholla_springs_camp"):
			return 3;
	
		case joaat("grizzlies_camp"):
			return 0;
	
		case joaat("gaptooth_ridge_camp"):
			return 5;
	
		case joaat("bayou_nawas_camp"):
			return 1;
	
		case joaat("scarlett_meadows_camp"):
			return 11;
	
		case joaat("heartland_camp"):
			return 7;
	
		case joaat("big_valley_camp"):
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_321(int iParam0) // Position - 0x8FCF Hash - 0x28D8184E ^0x28D8184E
{
	switch (iParam0)
	{
		case -2093379718:
			return 28;
	
		case -1692024648:
			return 24;
	
		case joaat("CHARACTER_RANK_TRADER"):
			return 11;
	
		case -1371940008:
			return 25;
	
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
			return 7;
	
		case -874931455:
			return 23;
	
		case joaat("CHARACTER_RANK"):
			return 0;
	
		case -575193412:
			return 19;
	
		case -550123659:
			return 32;
	
		case joaat("CHARACTER_RANK_VIP_SEASON_005"):
			return 14;
	
		case -362851054:
			return 29;
	
		case -361115047:
			return 22;
	
		case -296143963:
			return 18;
	
		case -244323351:
			return 30;
	
		case joaat("CHARACTER_RANK_VIP_SEASON_006"):
			return 17;
	
		case -122883667:
			return 27;
	
		case -108990605:
			return 26;
	
		case joaat("CHARACTER_RANK_COLLECTOR"):
			return 12;
	
		case joaat("CHARACTER_RANK_SEASON_005"):
			return 13;
	
		case 721639005:
			return 35;
	
		case 944566512:
			return 33;
	
		case 1289855691:
			return 36;
	
		case 1314790674:
			return 31;
	
		case 1364208910:
			return 20;
	
		case joaat("CHARACTER_RANK_MOONSHINER"):
			return 15;
	
		case joaat("CHARACTER_RANK_SEASON_006"):
			return 16;
	
		case 1589331582:
			return 34;
	
		case 1936286816:
			return 21;
	
		default:
		
	}

	return -1;
}

BOOL func_322(int iParam0) // Position - 0x9112 Hash - 0xEDE8ECF3 ^0xEDE8ECF3
{
	if (iParam0 < 0 || iParam0 > 36)
		return false;

	return true;
}

int func_323(int iParam0) // Position - 0x9131 Hash - 0xC3A4C269 ^0xC3A4C269
{
	if (!func_322(iParam0))
		return 0;

	return Global_1292143.f_3024[iParam0];
}

Hash func_324(int iParam0, BOOL bParam1) // Position - 0x9152 Hash - 0xAE8B7FA5 ^0xAE8B7FA5
{
	Hash hash;
	Hash xp;

	if (!func_322(iParam0))
		return 0;

	if (bParam1)
	{
		hash = func_453(iParam0);
	
		if (func_125(hash, 0))
		{
			if (iParam0 == 0)
				xp = func_454(255);
			else
				xp = func_285(hash, func_286(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
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
		hash = func_455(iParam0);
	
		if (func_125(hash, 0))
		{
			if (iParam0 == 0)
				xp = NETWORK::_NETWORK_GET_XP();
			else
				xp = func_285(hash, func_286(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
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

int func_325(int iParam0) // Position - 0x9211 Hash - 0xD22A9E5C ^0xB34DD1C2
{
	int num;
	int num2;

	num = func_200();
	num.f_2 = 23;
	num.f_3 = func_201(0);
	num.f_4 = iParam0;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num))
		return func_456(iParam0);

	return num2;
}

Hash func_326(int iParam0) // Position - 0x924B Hash - 0x17EF8E0F ^0x4DE4AF28
{
	int num;
	int num2;

	num = func_200();
	num.f_2 = 14;
	num.f_3 = iParam0;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num))
		return 0;

	return num2;
}

BOOL func_327(Hash hParam0) // Position - 0x9277 Hash - 0xB0090776 ^0x189C4477
{
	if (func_159(hParam0) == -126813555 || func_159(hParam0) == 1946043663)
		return true;

	return false;
}

int func_328(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x92A5 Hash - 0xA07F0B94 ^0x16A61A21
{
	Hash hashKey;
	Hash hashKey2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		return 0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
		return 0;

	hashKey = MISC::GET_HASH_KEY(uParam0->f_1);
	hashKey2 = MISC::GET_HASH_KEY(*uParam0);

	if (!TXD::DOES_STREAMED_TXD_EXIST(hashKey))
		return 0;

	if (!bParam3)
		if (TXD::HAS_STREAMED_TXD_LOADED(hashKey))
			if (!GRAPHICS::_IS_TEXTURE_IN_DICT(hashKey, hashKey2))
				return 0;

	*uParam1 = hashKey;
	*uParam2 = hashKey2;
	return 1;
}

BOOL func_329(Any* panParam0) // Position - 0x9318 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_88(panParam0))
		return false;

	return func_457(panParam0);
}

BOOL func_330(Any* panParam0) // Position - 0x9334 Hash - 0x15896E94 ^0x233B9D00
{
	var unk;

	if (!func_88(panParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_127(*panParam0, &unk, true, false, -1))
		return false;

	if (!func_125(unk.f_4, 0))
		return false;

	return func_458(unk.f_4);
}

BOOL func_331(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x9385 Hash - 0x8B86113C ^0x8B86113C
{
	if (!func_88(&uParam0))
		return false;

	if (func_457(&uParam0))
		return false;

	return func_460(func_459(uParam0));
}

BOOL func_332(int iParam0, var uParam1, Any* panParam2) // Position - 0x93B4 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_113(iParam0))
		return false;

	func_461(panParam2);

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

BOOL func_333(Hash hParam0, int iParam1) // Position - 0x94BF Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_334(Hash hParam0) // Position - 0x94D9 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_335(BOOL bParam0) // Position - 0x94EF Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_101() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_62(bParam0));
}

BOOL func_336(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x950D Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_220(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_462(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_337(Hash hParam0, var uParam1) // Position - 0x957A Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_223(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

int func_338(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x95CD Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_463(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_465(func_464(num, hParam0, panParam1), num, panParam1);
	else
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_339(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x9637 Hash - 0x4EE39F09 ^0x4C62B7DF
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

struct<4> func_340(BOOL bParam0) // Position - 0x96B5 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_62(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_223(923904168, func_286(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_223(923904168, func_286(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_223(923904168, func_286(bParam0), -740156546, false);
}

int func_341(Hash hParam0, BOOL bParam1) // Position - 0x9756 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_159(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_467();
		else
			return 1;

	return 0;
}

BOOL func_342(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x978D Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_285(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_343(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x97A8 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_468(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_344(BOOL bParam0) // Position - 0x97C9 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_62(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_223(271701509, func_286(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_223(271701509, func_286(bParam0), 12999093, false);
}

BOOL func_345(Hash hParam0, Hash hParam1) // Position - 0x9833 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_159(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_469(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

int func_346(Hash hParam0) // Position - 0x98A0 Hash - 0x5FC245A8 ^0x222CF07D
{
	if (func_125(hParam0, 0))
	{
		if (func_145(hParam0, -1242251796))
		{
			if (func_145(hParam0, 2060589226))
				return func_470();
		
			return func_471();
		}
		else if (func_145(hParam0, 1919582297))
		{
			return func_359();
		}
		else if (func_145(hParam0, 1647670816))
		{
			return func_472();
		}
		else if (func_145(hParam0, 1147021565))
		{
			return func_362();
		}
	}

	if (Global_1940085.f_12)
		return func_471();
	else
		return func_362();

	return func_362();
}

int func_347() // Position - 0x9942 Hash - 0x9F572D68 ^0x2EEFC18B
{
	return 225949718;
}

BOOL func_348(Hash hParam0) // Position - 0x994F Hash - 0x6FB27747 ^0x2F844672
{
	return hParam0 == 1401465909 || hParam0 == joaat("kit_collectors_bag");
}

int func_349() // Position - 0x996D Hash - 0x9F572D68 ^0x8D56AEC6
{
	return 1039657088;
}

BOOL func_350(Hash hParam0) // Position - 0x997A Hash - 0xE3FE29A5 ^0x72E17A42
{
	if (func_145(hParam0, 1147021565) || func_145(hParam0, -136654233) || func_145(hParam0, -524514947) || func_145(hParam0, -1238310989) || func_145(hParam0, 1765172170) || func_145(hParam0, 1490540191) || func_145(hParam0, 1573112293) || func_145(hParam0, -1242251796) || func_145(hParam0, 1919582297) || func_145(hParam0, -2085281117) || hParam0 == joaat("consumable_offal"))
		return true;

	return false;
}

int func_351() // Position - 0x9A3C Hash - 0x9F572D68 ^0xA5345381
{
	return 1039392896;
}

int func_352() // Position - 0x9A49 Hash - 0x9F572D68 ^0x10089971
{
	return 1039645941;
}

int func_353() // Position - 0x9A56 Hash - 0x9F572D68 ^0x84B652A2
{
	return 1039907016;
}

int func_354() // Position - 0x9A63 Hash - 0x9F572D68 ^0xB45F52D0
{
	return 1039902864;
}

int func_355() // Position - 0x9A70 Hash - 0x9F572D68 ^0x32AFB64F
{
	return 955497620;
}

int func_356() // Position - 0x9A7D Hash - 0x9F572D68 ^0x62D4A844
{
	return 1022861303;
}

int func_357() // Position - 0x9A8A Hash - 0x9F572D68 ^0xCF492FF4
{
	return 1039902720;
}

int func_358() // Position - 0x9A97 Hash - 0x9F572D68 ^0x2787CCF0
{
	return 972554239;
}

int func_359() // Position - 0x9AA4 Hash - 0x9F572D68 ^0x5429ED30
{
	return 905165831;
}

int func_360() // Position - 0x9AB1 Hash - 0x9F572D68 ^0x3F507FB0
{
	return 1038298244;
}

int func_361() // Position - 0x9ABE Hash - 0x9F572D68 ^0x3C6E2171
{
	return 1037713383;
}

int func_362() // Position - 0x9ACB Hash - 0x9F572D68 ^0x6DDEACEC
{
	return 1039645911;
}

int func_363() // Position - 0x9AD8 Hash - 0x9F572D68 ^0x30183CC8
{
	return 1039655040;
}

BOOL func_364(int iParam0) // Position - 0x9AE5 Hash - 0xA059D395 ^0xE5C5C571
{
	return func_304(Global_1940085.f_7, iParam0);
}

BOOL func_365(int iParam0, int iParam1) // Position - 0x9AF9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_366(BOOL bParam0) // Position - 0x9B08 Hash - 0x4C19DF92 ^0x10F2C282
{
	Entity entity;

	if (func_364(1))
	{
		if (bParam0)
			func_158("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_364(2) && MISC::GET_GAME_TIMER() >= Global_17395)
	{
		if (bParam0)
		{
			entity = func_473(Global_33);
		
			if (entity != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(entity))
				{
					func_158("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, true);
					return false;
				}
			}
		
			func_158("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
		}
	
		return false;
	}

	if (func_364(4194304))
		return false;

	return true;
}

BOOL func_367(BOOL bParam0, BOOL bParam1) // Position - 0x9B9B Hash - 0xDC513764 ^0x643F6F68
{
	var unk;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		PED::_0x6B67320E0D57856A(Global_33, &unk, 2, false);
	
		if (bParam1)
		{
			switch (unk.f_1)
			{
				case 4:
					return true;
			
				default:
				
			}
		}
	
		if (bParam0)
			func_158("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_368(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x9BEB Hash - 0xB3520FCB ^0xE74487EC
{
	Vehicle vehiclePedIsUsing;
	Hash entityModel;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
			return false;
	
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
	
		switch (entityModel)
		{
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
					func_158("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, true);
			
				return false;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
					func_158("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, true);
			
				return false;
		}
	
		if (!func_365(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_33))
			if (bParam2 || VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_33)
				return false;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_33))
	{
		return false;
	}

	return true;
}

BOOL func_369(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x9CD8 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_370(Ped pedParam0) // Position - 0x9D31 Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_371(Ped pedParam0, BOOL bParam1) // Position - 0x9D4E Hash - 0x6BE4D4B ^0xC7F6BBCD
{
	float entitySpeed;
	float num;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;
	
		if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
			return false;
	}

	entitySpeed = ENTITY::GET_ENTITY_SPEED(pedParam0);
	num = PED::_0xCA95924C893A0C91(pedParam0, entitySpeed);

	if (num <= 1.5f)
		return true;

	return false;
}

BOOL func_372() // Position - 0x9DA4 Hash - 0xC24BA3AE ^0xA4363903
{
	return Global_1940252.f_2 || Global_1940252 == 1;
}

BOOL func_373(int iParam0) // Position - 0x9DBE Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1958675 && iParam0 != false;
}

BOOL func_374(Hash hParam0, int iParam1) // Position - 0x9DCF Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_125(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_474(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_475("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_476(&unk, i, num, num2))
			{
			}
			else if (!func_477(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_478(num);
				return true;
			}
		}
	
		func_478(num);
	}

	return false;
}

BOOL func_375(Hash hParam0) // Position - 0x9E77 Hash - 0x52397408 ^0x52397408
{
	Hash hash;
	int num;
	int num2;

	if (!func_125(hParam0, 0))
		return false;

	hash = func_159(hParam0);

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

	num = func_479(hParam0);

	if (!(num == 0))
	{
		num2 = func_480(&(Global_17418.f_55.f_664.f_1354.f_5), num);
	
		if (num2 == -1)
			return true;
	}

	num = func_481(hParam0);
	num2 = func_480(&(Global_17418.f_55.f_664.f_1354.f_5), num);

	if (num2 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num2 /*17*/];
}

int func_376(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9F33 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_125(hParam0, 0))
		return 0;

	num = func_156(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_474(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_482(hParam0, false);
	}

	if (func_220(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_483(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_62(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

int func_377(var uParam0, int iParam1) // Position - 0x9FF5 Hash - 0x412E6219 ^0x412E6219
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (!func_113(*uParam0))
		return -1;

	num = -1;
	num6 = func_217(*uParam0);

	switch (*uParam0)
	{
		case 3:
			num4 = func_486(num6);
			num5 = func_487(num4);
		
			if (num5 == -1)
			{
			}
			else
			{
				num = func_488(num5);
			}
			break;
	
		case 4:
			num3 = num6;
			num2 = func_484(num3);
		
			if (num2 == -1)
			{
			}
			else
			{
				num = func_485(num2);
			}
			break;
	
		default:
			break;
	}

	return num;
}

BOOL func_378(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA078 Hash - 0x891BBFA0 ^0xB8158E5D
{
	return !MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_380(func_489(iParam0, iParam1, bParam2)));
}

struct<8> func_379(int iParam0, int iParam1) // Position - 0xA093 Hash - 0x21337FB2 ^0x21337FB2
{
	return func_489(iParam0, iParam1, true);
}

char* func_380(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xA0A4 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_381(int iParam0, Hash hParam1) // Position - 0xA0B8 Hash - 0x516C6848 ^0x6761C278
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && Global_1220826.f_48[iParam0 /*21*/].f_18[i] == hParam1)
			return true;
	}

	return false;
}

BOOL func_382(int iParam0) // Position - 0xA104 Hash - 0x2EBFDD04 ^0x2EBFDD04
{
	return iParam0 >= 0 && iParam0 < 50;
}

BOOL func_383(int iParam0) // Position - 0xA11A Hash - 0x6642AD8B ^0xEA8BECFA
{
	float num;
	int i;
	int j;

	if (Global_17418.f_2992 == 1)
	{
		if (iParam0 == -1)
			return false;
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (Global_17418.f_2992.f_1[i /*5*/].f_4 == 0)
			{
			}
			else if (_IS_NULL_VECTOR(Global_17418.f_2992.f_1[i /*5*/].f_1))
			{
			}
			else
			{
				for (j = 0; j <= 3; j = j + 1)
				{
					if (_IS_NULL_VECTOR(Global_1220826.f_48[iParam0 /*21*/][j /*4*/].f_1))
					{
					}
					else
					{
						num = func_491(Global_17418.f_2992.f_1[i /*5*/].f_1, Global_1220826.f_48[iParam0 /*21*/][j /*4*/].f_1);
					
						if (num < 300f)
							return false;
					}
				}
			}
		}
	}

	if (func_492(4))
		return false;

	if (func_386())
		return true;

	if (func_493())
		return false;

	if (func_494(1, 255))
		return false;

	if (func_113(func_216()) && Global_1220826.f_1.f_20 != 3)
		return false;

	return true;
}

BOOL func_384(int iParam0) // Position - 0xA22B Hash - 0xB6416185 ^0xCE440AEC
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && func_228(Global_1220826.f_48[iParam0 /*21*/].f_18[i], 1))
			return true;
	}

	return false;
}

BOOL func_385(int iParam0) // Position - 0xA279 Hash - 0xA37D16B6 ^0x8D2EEA9D
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && func_495(Global_1220826.f_48[iParam0 /*21*/].f_18[i]))
			return true;
	}

	return false;
}

BOOL func_386() // Position - 0xA2C6 Hash - 0x16C45944 ^0x16C45944
{
	return func_496(func_112(0));
}

BOOL func_387(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0xA2D7 Hash - 0xC5F24F4E ^0x107F90DC
{
	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;

	return PED::_IS_META_PED_USING_COMPONENT(pedParam0, hParam1);
}

int func_388() // Position - 0xA2FB Hash - 0x6AC5469B ^0xEA730EC
{
	Hash weaponHash;
	int weaponHash2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return 1;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash2, true, 1, false);

	if (weaponHash2 == joaat("WEAPON_UNARMED"))
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_497(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_33, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_497(weaponHash) || WEAPON::_IS_WEAPON_LASSO(weaponHash))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

int func_389(Hash hParam0) // Position - 0xA3EE Hash - 0x4DAA6E6F ^0x4DAA6E6F
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 27;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 29;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("provision_wldflwr_cardinal_flower"):
			return 44;
	
		case joaat("consumable_herb_sage"):
			return 35;
	
		case joaat("provision_wldflwr_creek_plum"):
			return 46;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_wldflwr_blood_flower"):
			return 43;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 32;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 52;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 21;
	
		case joaat("provision_wldflwr_chocolate_daisy"):
			return 45;
	
		case joaat("consumable_herb_yarrow"):
			return 53;
	
		case joaat("consumable_herb_wild_mint"):
			return 51;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_wldflwr_wisteria"):
			return 48;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 39;
	
		case joaat("provision_wldflwr_texas_blue_bonnet"):
			return 41;
	
		case joaat("consumable_herb_milkweed"):
			return 24;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 30;
	
		case joaat("consumable_herb_oregano"):
			return 28;
	
		case joaat("consumable_herb_red_raspberry"):
			return 34;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 50;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("provision_wldflwr_bitterweed"):
			return 42;
	
		case joaat("consumable_herb_wild_carrots"):
			return 49;
	
		case joaat("provision_wldflwr_agarita"):
			return 40;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_wldflwr_wild_rhubarb"):
			return 47;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 38;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	}

	return 0;
}

void func_390(int iParam0, BOOL bParam1, int iParam2) // Position - 0xA5C9 Hash - 0xA15BFFCE ^0xA15BFFCE
{
	Hash hash;
	int num;

	hash = func_498(iParam0);
	num = func_389(hash);

	if (num != iParam0)
		func_499(num, 4);

	if (!func_500(iParam0))
		return;

	if (func_501(iParam0))
		return;

	func_499(iParam0, 4);
	func_502(iParam0, bParam1);

	if (!func_503(iParam0))
		func_504(iParam0, true, false);

	if (bParam1)
		if (!func_74(0, false, true))
			func_505(true, 6);

	return;
}

BOOL func_391(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xA63F Hash - 0x1E0E4BC8 ^0xFC328A61
{
	if (TASK::CAN_START_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3))
	{
		TASK::START_TASK_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3, 0, -1082130432);
		Global_1940085.f_26 = 1;
		return true;
	}

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return false;
}

void func_392(Hash hParam0) // Position - 0xA678 Hash - 0xD8F93303 ^0x277E9FFE
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
	BOOL flag2;
	BOOL flag3;

	outData.f_1 = 20;

	if (func_145(hParam0, 1573112293) || func_145(hParam0, 672467738) || func_145(hParam0, -550842268))
		flag = true;

	if (func_156(hParam0) == joaat("consumable"))
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
				health = func_506(0, outData2.f_2);
				func_507(outData2.f_2);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_506(2, outData2.f_2);
				func_508(outData2.f_2, false);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_506(1, outData2.f_2);
				func_509(outData2.f_2);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_510(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_511(0, num, true, true, flag);
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_510(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_511(2, num2, true, true, flag);
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_510(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_511(1, num3, true, true, flag);
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_512(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_513(19, num4, true, true);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_512(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_513(20, num4, true, true);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_512(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_513(18, num4, true, true);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_512(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_513(0, num4, true, true);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_512(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_513(2, num4, true, true);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_512(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_513(1, num4, true, true);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_514(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3 || func_145(hParam0, -537818634))
			func_516(func_515(joaat("medicine_items_used")), 1);
	
		if (func_145(hParam0, -1457797660))
			func_516(func_515(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_516(func_515(joaat("DEADEYE_ITEMS_USED")), 1);
	
		switch (hParam0)
		{
			case -1735850413:
			case -241345764:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_SaloonSnack_00"), 1);
				break;
		}
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

int func_393(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xA9BC Hash - 0x6E56F3C0 ^0x23695AE
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;
	var unk2;

	if (!func_125(hParam0, 0))
		return 0;

	if (hParam3 == -142743235)
		if (func_517(hParam0))
			hParam3 = 562618531;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_474(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_518(hParam0, -iParam1, flag, flag2, flag3, false, false);
	
		return 0;
	}

	if (!func_228(hParam0, 1))
		return 0;

	statId = { func_519(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_376(hParam0, false, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_376(hParam0, false, false, false) - iParam1 < 0)
		{
			func_393(hParam0, func_376(hParam0, false, false, false), bParam2, hParam3);
			return 0;
		}
	}

	if (func_156(hParam0) == joaat("WEAPON"))
	{
		if (!func_520(hParam0, iParam1, false, hParam3))
			return 0;
	}
	else if (!func_141(hParam0, iParam1, hParam3, bParam2, false))
	{
		return 0;
	}
	else
	{
		unk2 = { func_222(hParam0, false, 0) };
	
		if (func_335(false) && unk2.f_4 == joaat("SLOTID_SATCHEL"))
			func_521(1, false, 0);
	}

	if (hParam0 == joaat("document_player_journal"))
		Global_1940085.f_21 = 0;

	if (!func_335(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_518(hParam0, -iParam1, flag, flag2, flag3, false, false);

	return 1;
}

void func_394(int iParam0) // Position - 0xAB6E Hash - 0xF3266748 ^0xF04BFAD5
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_395(int iParam0) // Position - 0xABB4 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1953292.f_595[iParam0] > 0;
}

void func_396(int iParam0) // Position - 0xABC9 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1953292.f_595[iParam0] = Global_1953292.f_595[iParam0] + 1;
	return;
}

BOOL func_397() // Position - 0xABE9 Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1953292.f_3503)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1953292.f_3501) < 1250)
		return true;

	if (func_522())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
		return true;

	return false;
}

BOOL func_398(Hash hParam0) // Position - 0xAC33 Hash - 0xF685E7E9 ^0xFF8FA3AF
{
	Hash hash;

	hash = func_159(hParam0);

	if (hash == 81053684 || hash == -525676072 || func_145(hParam0, 160827531) || func_145(hParam0, -1303648999))
		return 1;

	return 0;
}

void func_399(var uParam0, int iParam1) // Position - 0xAC83 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_400(Hash hParam0) // Position - 0xAC94 Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_406(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_401(var uParam0) // Position - 0xACBE Hash - 0xA1F57C1B ^0xFF498BD3
{
	if (-1829635046 == func_523(81053684))
		if (func_406(uParam0))
			return true;
	else if (func_524(-525676072, uParam0) || func_145(func_525(1742327865), -1303648999))
		if (func_406(uParam0))
			return true;

	return false;
}

Hash func_402() // Position - 0xAD1B Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_388())
	{
		case 0:
			num = joaat("mask_off_left_hand");
			break;
	
		case 1:
			num = joaat("mask_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_403() // Position - 0xAD72 Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_388())
	{
		case 0:
			num = joaat("bandana_off_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_404() // Position - 0xADC9 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_388())
	{
		case 0:
			num = joaat("mask_on_left_hand");
			break;
	
		case 1:
			num = joaat("mask_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_on_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_405() // Position - 0xAE20 Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_388())
	{
		case 0:
			num = joaat("bandana_on_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_on_left_hand_rifle");
			break;
	}

	return num;
}

BOOL func_406(var uParam0) // Position - 0xAE77 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_524(81053684, uParam0))
		return true;

	if (func_524(-525676072, uParam0))
		return true;

	return false;
}

void func_407(BOOL bParam0) // Position - 0xAEA4 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1953292 = Global_1953292 - Global_1953292 && bParam0;
	return;
}

void func_408(int iParam0, int iParam1, int iParam2) // Position - 0xAEBC Hash - 0x8A858A95 ^0x34E316B1
{
	Global_1953292.f_83[func_278(iParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_278(iParam0, 1) /*12*/].f_11 - Global_1953292.f_83[func_278(iParam0, 1) /*12*/].f_11 && iParam1;
	return;
}

int func_409(int iParam0, BOOL bParam1) // Position - 0xAEFB Hash - 0x402BF0A8 ^0xF803E7D2
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1953292.f_3352.f_28;
	
		case -1719060085:
			return Global_1953292.f_3352.f_31;
	
		case -999503751:
			if (bParam1)
				return Global_1953292.f_3352.f_27;
			else
				return func_526();
			break;
	
		case -525676072:
			return Global_1953292.f_3352.f_29;
	
		case 81053684:
			return Global_1953292.f_3352.f_30;
	
		case 119907797:
			return Global_1953292.f_3352.f_32;
	
		case 1388798186:
			return Global_1953292.f_3352.f_33.f_7;
	}

	return 0;
}

int func_410(int iParam0, BOOL bParam1) // Position - 0xAF9E Hash - 0x14DDA26B ^0x1E3E4A18
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -2061583405:
			num = Global_1953292.f_3352.f_33.f_1;
			break;
	
		case -1719060085:
			num = 1;
			break;
	
		case -999503751:
			num = Global_1953292.f_3352.f_33;
			break;
	
		case -525676072:
			num = Global_1953292.f_3352.f_33.f_2;
			break;
	
		case 81053684:
			num = 1;
			break;
	
		case 119907797:
			num = 1;
			break;
	
		case 1388798186:
			num = 1;
			break;
	
		default:
			return 0;
	}

	switch (iParam0)
	{
		case -999503751:
			if (num > 0 && !bParam1)
				num = num - 1;
			break;
	}

	return num;
}

BOOL func_411(Hash hParam0, var uParam1) // Position - 0xB04D Hash - 0x4A27386E ^0x953F277B
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1953292.f_3352.f_26)
	{
		if (hParam0 == Global_1953292.f_3352[*uParam1])
			return 1;
	
		*uParam1 = *uParam1 + 1;
	}

	return 0;
}

BOOL func_412(Hash hParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB08D Hash - 0x1A1DEF68 ^0x4083C3B3
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1953292.f_3352.f_26 >= 25)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_411(hash, &unk))
		return 0;

	if (!func_527(hParam0, 0))
		return 0;

	if (bParam3 && !func_528(hParam0, false, bParam4))
		return 0;

	Global_1953292.f_3352[Global_1953292.f_3352.f_26] = hash;
	Global_1953292.f_3352.f_26 = Global_1953292.f_3352.f_26 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

void func_413() // Position - 0xB11E Hash - 0xC3588B6F ^0x86C68CA5
{
	int i;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		Global_17418.f_55.f_664[i] = Global_1953292.f_3352[i];
	}

	Global_17418.f_55.f_664.f_27 = Global_1953292.f_3352.f_27;
	Global_17418.f_55.f_664.f_28 = Global_1953292.f_3352.f_28;
	Global_17418.f_55.f_664.f_29 = Global_1953292.f_3352.f_29;
	Global_17418.f_55.f_664.f_30 = Global_1953292.f_3352.f_30;
	Global_17418.f_55.f_664.f_31 = Global_1953292.f_3352.f_31;
	Global_17418.f_55.f_664.f_32 = Global_1953292.f_3352.f_32;
	Global_17418.f_55.f_664.f_26 = Global_1953292.f_3352.f_26;
	return;
}

BOOL func_414(Hash hParam0) // Position - 0xB1DC Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_530(func_529(hParam0));
}

void func_415(BOOL bParam0, Hash hParam1) // Position - 0xB1EE Hash - 0x147A58CF ^0xA61B9975
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num;
	int num2;
	Hash hash;
	Hash hash2;
	const char* str5;

	if (!func_125(hParam1, 0))
		return;

	num2 = -1;

	if (!func_531(hParam1, &str, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	if (bParam0)
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_532(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_533(4, num2))
		{
			str2 = "OUTFIT_STORED_LITERAL";
			str4 = func_380(func_534(num2));
		}
		else
		{
			hash = func_535(hParam1);
		
			if (func_125(hash, 0))
				hParam1 = hash;
		
			str2 = "ITEM_STORED";
			str4 = MISC::VAR_STRING(0, func_536(hParam1, false));
		}
	}
	else
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_532(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_533(4, num2))
		{
			str2 = "OUTFIT_REMOVED_LITERAL";
			str4 = func_380(func_534(num2));
		}
		else
		{
			hash2 = func_535(hParam1);
		
			if (func_125(hash2, 0))
				hParam1 = hash2;
		
			str2 = "ITEM_REMOVED";
			str4 = MISC::VAR_STRING(0, func_536(hParam1, false));
		}
	}

	str5 = func_537(MISC::VAR_STRING(10, str2, str4), num);
	func_538(str5, str.f_1, MISC::GET_HASH_KEY(str), 0, num, "Transaction_Feed_Sounds", str3, 0, true);
	return;
}

void func_416(BOOL bParam0, BOOL bParam1) // Position - 0xB351 Hash - 0xB768D4F2 ^0xD5E3296F
{
	if (bParam1)
		func_539();

	if (bParam0)
	{
		func_263(8);
		func_263(512);
	}
	else
	{
		func_263(8);
		func_263(16);
	}

	return;
}

int func_417() // Position - 0xB383 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

BOOL func_418(Hash hParam0, Hash hParam1) // Position - 0xB391 Hash - 0xFF44AA17 ^0xFF44AA17
{
	Hash hash;
	Hash hash2;

	hash = func_159(hParam1);
	hash2 = func_159(hParam0);

	if (hash == hash2)
		return true;

	if (func_540(hParam1) && func_540(hParam0))
		return true;

	return false;
}

void func_419(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xB3CD Hash - 0x786470E ^0x786470E
{
	func_541(hParam0, 0, 0, bParam3, bParam5);
	func_274(hParam1, true, bParam2, bParam4, bParam3, bParam5);
	return;
}

int func_420(int iParam0, int iParam1) // Position - 0xB3F0 Hash - 0xE1D12727 ^0xE86A8679
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
			return 735520874;
	
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

void func_421() // Position - 0xB63F Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1953292.f_1557 = Global_1953292.f_1676;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1953292.f_1557.f_1[i /*3*/] = { Global_1953292.f_1676.f_1[i /*3*/] };
	}

	return;
}

void func_422(int iParam0) // Position - 0xB686 Hash - 0x65A082AE ^0x65A082AE
{
	func_408(iParam0, 8, 6);
	return;
}

void func_423(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0xB697 Hash - 0xD9092964 ^0xFDAEF5
{
	int num;
	Hash hash;

	if (bParam3)
	{
		if (*uParam1 == 832230214 || *uParam1 == 30652334 || *uParam1 == 750544038)
		{
			num = 16;
		
			if (func_159(uParam0->f_1[num /*3*/]) != 1882579758)
				return;
		
			hash = func_542(uParam0->f_1[num /*3*/]);
		
			if (hash != 0 && hash != Global_1953292.f_83[iParam2 /*12*/])
			{
				*uParam1 = hash;
				return;
			}
		}
	
		if (!func_543(*uParam1, iParam2))
		{
			*uParam1 = Global_1953292.f_1676.f_1[iParam2 /*3*/];
			return;
		}
	}

	*uParam1 = Global_1953292.f_83[iParam2 /*12*/];
	return;
}

void func_424(int iParam0) // Position - 0xB745 Hash - 0x20214C72 ^0x20214C72
{
	func_544(&(Global_1953292.f_2938), iParam0);
	return;
}

void func_425(int iParam0, int iParam1) // Position - 0xB75A Hash - 0xDE0FB67D ^0xDE0FB67D
{
	if (iParam1 & 8 != 0)
		return;

	func_545(&(Global_1953292.f_2938), iParam0, iParam1);
	return;
}

void func_426(Hash hParam0, int iParam1, int iParam2) // Position - 0xB77D Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_427(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xB790 Hash - 0xF31ECD9B ^0x1CF13D77
{
	Hash hash;
	BOOL flag;

	hash = hParam1;
	flag = func_281(hash, true);

	if (bParam3 && func_145(uParam0->f_1[iParam2 /*3*/], 343781202))
		func_546(uParam0, uParam0->f_1[iParam2 /*3*/]);

	switch (func_420(iParam2, 1))
	{
		case -1944638739:
			func_562(uParam0, flag, hash, iParam4);
			break;
	
		case -1197751823:
			func_555(uParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_547(uParam0, hash, iParam2, iParam4);
			break;
	
		case -893163968:
			func_553(uParam0, flag, hash, iParam4);
			break;
	
		case -450913544:
			func_554(uParam0, flag, hash, iParam2, iParam4);
			break;
	
		case -426430150:
			func_559(uParam0, flag, iParam4);
			break;
	
		case -338487716:
			func_549(uParam0, hash, flag, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_558(uParam0, flag, hash, iParam4);
			break;
	
		case 304805134:
			func_556(uParam0, flag, hash, iParam4);
			break;
	
		case 788010710:
			func_560(uParam0, flag, hash, iParam4);
			break;
	
		case 1108822547:
			func_550(uParam0, flag, hash, iParam4);
			break;
	
		case 1145151482:
			func_557(uParam0, flag, hash, iParam4);
			break;
	
		case 1250092473:
			func_552(uParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_548(uParam0, hash, iParam2);
			break;
	
		case 1742327865:
			func_551(uParam0, flag, hash, iParam4);
			break;
	
		case 1958421083:
			func_561(uParam0, flag, hash, iParam4);
			break;
	}

	return;
}

Hash func_428(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xB929 Hash - 0xA84BB00 ^0xFB9157AD
{
	BOOL flag;

	flag = false;

	if (func_417() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	if (hParam2 == 289238755)
		return 289238755;

	if (hParam2 != 0 && func_563(hParam0, flag, hParam2) != -1)
		return hParam2;

	if (func_564(hParam0, func_420(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_429(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xB98A Hash - 0xDD68C02C ^0xDD68C02C
{
	int i;
	int num;
	BOOL flag;
	BOOL flag2;

	if (*iParam0 <= 0)
		return;

	num = -1;
	flag = false;

	if (bParam5)
	{
		num = func_565(Global_1953292.f_1676);
	
		if (bParam4)
			bParam4 = num == -1;
	}

	for (i = 0; i < *iParam0; i = i + 1)
	{
		if (func_270(4718592) && !func_566(func_159(Global_1953292.f_1557.f_1[iParam0->f_2[i /*2*/] /*3*/])))
		{
		}
		else
		{
			func_567(iParam0->f_2[i /*2*/], bParam1, bParam2, num);
			flag = true;
		}
	}

	if (!flag)
		return;

	if (bParam4)
	{
		flag2 = false;
	
		if (Global_1953292.f_1676 != 491602716 || !func_533(2, -1))
			flag2 = true;
		else if (!func_145(Global_1953292.f_1676, -166674229) && Global_1953292.f_1676 != 491602716 || !func_533(2, -1))
			flag2 = true;
	
		if (flag2)
		{
			Global_1953292.f_1676 = 491602716;
			Global_1953292.f_1557 = 491602716;
			func_568(491602716, 1, true);
			func_569(-1, false, 6);
			func_162(27, 0, 65536, 0, false);
		}
	}

	if (bParam3)
		func_416(false, true);

	return;
}

Hash func_430(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0xBAC9 Hash - 0x67107E64 ^0x67107E64
{
	return func_570(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_431(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xBADD Hash - 0x7D75927B ^0xD259228E
{
	var unk;

	if (!func_335(false))
		return func_571(&uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_127(uParam0, &unk, bParam5, false, -1))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_62(bParam5), &uParam0, bParam4))
		return false;

	return true;
}

struct<4> func_432() // Position - 0xBB51 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_433(Ped pedParam0) // Position - 0xBB5D Hash - 0xD9604B15 ^0x3B7B69F4
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (func_572(Global_33, pedParam0, false, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, pedParam0))
		return true;

	return false;
}

BOOL func_434() // Position - 0xBB95 Hash - 0xF83C2FD8 ^0xF6BA78F9
{
	int num;
	int num2;
	int num3;
	int num4;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("shop_anywhere_handheld")))
	{
		func_233(2);
		return false;
	}

	if (!func_301())
	{
		func_233(9);
		return false;
	}

	if (Global_1051832.f_92[34 /*75*/].f_1 & 128 != 0)
	{
		func_233(3);
		return false;
	}

	num = { func_112(0) };

	if (func_113(num))
	{
		num2 = -1;
	
		switch (num)
		{
			case 3:
			case 4:
				num4 = func_377(&num, 0);
			
				if (num4 != -1)
					if (func_378(num4, 461218520, false))
						num2 = 46;
				break;
		
			case 6:
				num3 = func_309(PLAYER::PLAYER_ID(), false);
			
				if (num3 != -1)
					num2 = func_573(num3);
				break;
		}
	
		if (num2 != -1)
		{
			func_233(num2);
			return false;
		}
	}

	if (func_574())
	{
		func_233(4);
		return false;
	}

	if (func_494(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && Global_1051832.f_92[34 /*75*/].f_49 & 1073741824 == 0)
	{
		func_233(5);
		return false;
	}

	if (func_575(131072, 255))
	{
		func_233(7);
		return false;
	}

	if (func_576())
	{
		func_233(8);
		return false;
	}

	return true;
}

BOOL func_435(int iParam0, int iParam1) // Position - 0xBCC9 Hash - 0x3ABC69C ^0xFF17F115
{
	if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33) || func_365(iParam1, 1024) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, Global_34, iParam0, iParam1) > 0)
		return true;

	return false;
}

BOOL func_436(Player plParam0) // Position - 0xBD14 Hash - 0xF72359AA ^0x3B19EB24
{
	if (plParam0 == 255)
		return Global_1102813.f_3 & 32 != 0;

	return func_575(32, plParam0);
}

BOOL func_437(int iParam0) // Position - 0xBD39 Hash - 0x77815697 ^0x77815697
{
	if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
		return true;

	return false;
}

BOOL func_438() // Position - 0xBD61 Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_439(BOOL bParam0) // Position - 0xBD86 Hash - 0xF247C818 ^0xF247C818
{
	if (bParam0)
		func_577(4);
	else
		func_292(4);

	return;
}

void func_440(BOOL bParam0) // Position - 0xBDA0 Hash - 0x97FAFE1E ^0x34EAEBB2
{
	if (!(bParam0 && Global_1915656.f_22504))
		if (bParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(2, joaat("KIT_HANDHELD_CATALOG"));
		else
			INVENTORY::_INVENTORY_DISABLE_ITEM(2, joaat("KIT_HANDHELD_CATALOG"), 0);

	Global_1915656.f_22504 = bParam0;
	return;
}

BOOL func_441() // Position - 0xBDE0 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20643;
}

BOOL func_442(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xBDEF Hash - 0x13FC6F30 ^0x85A59BCD
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

	if (func_578())
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

BOOL func_443(int iParam0, int iParam1, Player plParam2) // Position - 0xC016 Hash - 0x8F4D222D ^0x8F4D222D
{
	return func_304(Global_1206166[plParam2 /*10*/][iParam0], iParam1);
}

var func_444(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0xC030 Hash - 0x63C3F71D ^0x3019B977
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

	if (func_579() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_580());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_580());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_580());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_581(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_582(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_583(i) != 1)
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
					if (!func_584(player2))
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

int func_445(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0xC3C3 Hash - 0xDF93FBF9 ^0x193910B6
{
	if (!func_585(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

BOOL func_446(int iParam0, int iParam1) // Position - 0xC3F3 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_447(int iParam0) // Position - 0xC40B Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_449(iParam0, 4))
		return false;

	return true;
}

BOOL func_448(int iParam0) // Position - 0xC422 Hash - 0x7F4C96B ^0x650690F6
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

BOOL func_449(int iParam0, int iParam1) // Position - 0xC4EE Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_450(int iParam0) // Position - 0xC507 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_451() // Position - 0xC51A Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_301())
		return false;

	return Global_1904402.f_8873;
}

int func_452(Hash hParam0, BOOL bParam1) // Position - 0xC535 Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_333(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

Hash func_453(int iParam0) // Position - 0xC56E Hash - 0xB8EC44B7 ^0xFD8B1C5A
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

Hash func_454(int iParam0) // Position - 0xC707 Hash - 0xFBE6ACAA ^0xC8FB295B
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		return NETWORK::_NETWORK_GET_RANK();

	return Global_1155150[iParam0 /*30*/];
}

Hash func_455(int iParam0) // Position - 0xC733 Hash - 0xB8EC44B7 ^0xFB7D0806
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

int func_456(int iParam0) // Position - 0xC8CC Hash - 0x49D04FBF ^0x304D2D69
{
	int num;
	int num2;

	num = func_200();
	num.f_2 = 22;
	num.f_3 = iParam0;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num))
		return 0;

	return num2;
}

BOOL func_457(Any* panParam0) // Position - 0xC8F8 Hash - 0x7865E948 ^0x92258F24
{
	if (!func_88(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

BOOL func_458(var uParam0) // Position - 0xC914 Hash - 0x6E01F166 ^0xA3B75EFC
{
	return UNLOCK::_UNLOCK_IS_NEW(func_586(uParam0));
}

int func_459(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xC926 Hash - 0x8F656380 ^0x6EA8E62C
{
	if (!func_88(&uParam0))
		return 0;

	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

BOOL func_460(int iParam0) // Position - 0xC942 Hash - 0xEDFD4796 ^0x397F66B9
{
	if (iParam0 <= 0)
		return false;

	return NETWORK::GET_CLOUD_TIME_AS_INT() + func_587() > iParam0;
}

void func_461(Any* panParam0) // Position - 0xC960 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_462(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0xC976 Hash - 0x8E6DB586 ^0xC3CF8308
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
				anParam0->[i /*6*/] = { func_432() };
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

BOOL func_463(Hash hParam0, Any* panParam1) // Position - 0xCA8D Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_588(panParam1->f_8, hParam0, num, 2048) || func_588(panParam1->f_8, hParam0, num, 32768) || func_588(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_588(panParam1->f_8, hParam0, num, 4) || func_588(panParam1->f_8, hParam0, num, 256) || func_588(panParam1->f_8, hParam0, num, 65536) || func_588(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_588(panParam1->f_8, hParam0, num, 1) || func_588(panParam1->f_8, hParam0, num, 8) || func_588(panParam1->f_8, hParam0, num, 65536) || func_588(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_588(panParam1->f_8, hParam0, num, 1) || func_588(panParam1->f_8, hParam0, num, 16) || func_588(panParam1->f_8, hParam0, num, 2) || func_588(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_588(panParam1->f_8, hParam0, num, 8) || func_588(panParam1->f_8, hParam0, num, 4096) || func_588(panParam1->f_8, hParam0, num, 256) || func_588(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_464(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xCC63 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_465(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xCC7A Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_589(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_589(iParam1, 2, 0, 0);
	return -1;
}

int func_466(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xCCC3 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_589(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

int func_467() // Position - 0xCCDF Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_590(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_468(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0xCCFC Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_62(false);
	*panParam1 = { func_223(hParam0, func_340(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_469(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0xCD41 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

int func_470() // Position - 0xCD74 Hash - 0x9F572D68 ^0xCC7CA376
{
	return 1037647863;
}

int func_471() // Position - 0xCD81 Hash - 0x9F572D68 ^0x8E00D7CB
{
	return 1037746167;
}

int func_472() // Position - 0xCD8E Hash - 0x9F572D68 ^0x32E0A00A
{
	return 1035451607;
}

Entity func_473(Ped pedParam0) // Position - 0xCD9B Hash - 0x3D354C79 ^0x6A3F9034
{
	int lootTarget;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 0, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 2, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 1, &lootTarget, 1, 0) != 0)
		return lootTarget;

	return 0;
}

Hash func_474(Hash hParam0, int iParam1) // Position - 0xCDFB Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_125(hParam0, 0))
		return 0;

	num = func_156(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_145(hParam0, 1399091007))
	{
		func_591(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_475(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0xCE75 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_62(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_476(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xCE9C Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_477(Hash hParam0) // Position - 0xCED7 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_478(int iParam0) // Position - 0xCEF2 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_479(Hash hParam0) // Position - 0xCF13 Hash - 0xB8EC44B7 ^0x72487142
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

int func_480(var uParam0, int iParam1) // Position - 0xCFF6 Hash - 0x6AC2726E ^0xDB215040
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

int func_481(Hash hParam0) // Position - 0xD033 Hash - 0xD114ACC1 ^0x3428F85C
{
	Hash hash;

	hash = func_159(hParam0);

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

int func_482(Hash hParam0, BOOL bParam1) // Position - 0xD0A0 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_592(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_593(&unk, func_340(false));

	if (!func_594(&unk, &num, &num2, false))
		return 0;

	func_478(num);
	return num2;
}

struct<4> func_483(Hash hParam0, BOOL bParam1) // Position - 0xD0FF Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_222(hParam0, bParam1, 0) };
	return func_223(hParam0, unk, unk.f_4, bParam1);
}

int func_484(int iParam0) // Position - 0xD124 Hash - 0x7569022C ^0xD5B8EAC7
{
	int num;
	int num2;

	num = -1;

	if (func_595(&num2, iParam0))
		num = func_596() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_485(int iParam0) // Position - 0xD14F Hash - 0xEEAE9B95 ^0xC5F953AD
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_1;
}

int func_486(int iParam0) // Position - 0xD16B Hash - 0xB8EC44B7 ^0xE8991785
{
	switch (iParam0)
	{
		case 0:
			return 1336837986;
	
		case 1:
			return 2124631622;
	
		case 2:
			return joaat("ROBBERY_TRAIN");
	
		case 3:
			return 1443764480;
	
		case 4:
			return -668110249;
	
		case 5:
			return -1381389849;
	
		case 6:
			return 536699577;
	
		case 7:
			return 541147288;
	
		case 8:
			return 377122918;
	
		case 9:
			return 1158195437;
	
		case 10:
			return joaat("AMBUSH");
	
		case 11:
			return -621956193;
	
		case 12:
			return joaat("GANG_EVENT_SHOWDOWN");
	
		case 13:
			return joaat("GANG_EVENT_IMPROMPTU_RACE");
	
		case 14:
			return -867762478;
	
		case 15:
			return 602097925;
	
		case 16:
			return joaat("TRAIN_ESCORT");
	
		case 17:
			return joaat("IWD_1V1");
	
		case 18:
			return joaat("IWD_PVP");
	
		case 19:
			return joaat("IWD_INF");
	
		case 20:
			return joaat("IWD_PF");
	
		case 21:
			return joaat("IWD_PLF");
	
		case 22:
			return joaat("ASSASSINATION");
	
		case 23:
			return joaat("ASSASSINATION_TRACKING");
	
		case 24:
			return joaat("ASSASSINATION_PVP_PLAYER");
	
		case 25:
			return joaat("ASSASSINATION_PVP_POSSE");
	
		case 26:
			return joaat("COACH_HOLDUP_ROBBERY");
	
		case 27:
			return joaat("COACH_HOLDUP_KIDNAPPING");
	
		case 28:
			return joaat("IWD_F");
	
		case 30:
			return 1518877519;
	
		default:
		
	}

	return 0;
}

int func_487(int iParam0) // Position - 0xD320 Hash - 0x268EF4F6 ^0x268EF4F6
{
	int num;

	num = func_598(0, func_597() - 1, &iParam0);

	if (num == -1)
		return -1;

	return func_599(num);
}

int func_488(int iParam0) // Position - 0xD347 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

struct<8> func_489(int iParam0, int iParam1, BOOL bParam2) // Position - 0xD35A Hash - 0x97F184D3 ^0xF316A8E
{
	var unk;
	var unk6;

	if (!func_600(iParam0))
		return unk6;

	if (!func_601(&unk))
		return unk6;

	if (!func_602(unk, &(unk.f_1), 13, 0, 0, 1))
		return unk6;

	if (!func_602(unk, &(unk.f_1), 14, iParam0, 0, 1))
		return unk6;

	if (!func_602(unk, &(unk.f_1), 19, 0, 0, 1))
		return unk6;

	if (!func_602(unk, &(unk.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
	
		return unk6;
	}

	return func_603(unk);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xD40D Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_491(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xD437 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_492(int iParam0) // Position - 0xD455 Hash - 0xC86BC762 ^0xC86BC762
{
	return func_304(Global_1220826.f_1196, iParam0);
}

BOOL func_493() // Position - 0xD46A Hash - 0xD2F03408 ^0xD2F03408
{
	return Global_263042[Global_1295666 /*65*/] > 2;
}

BOOL func_494(int iParam0, int iParam1) // Position - 0xD47E Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

BOOL func_495(Hash hParam0) // Position - 0xD4BA Hash - 0x25F0A9E7 ^0x25F0A9E7
{
	if (func_604(hParam0) == -1)
		return false;

	return true;
}

BOOL func_496(var uParam0, var uParam1) // Position - 0xD4D1 Hash - 0x213CF43D ^0x213CF43D
{
	return func_605(uParam0, 1, 4);
}

BOOL func_497(Hash hParam0) // Position - 0xD4E3 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

Hash func_498(int iParam0) // Position - 0xD4F1 Hash - 0xBA965109 ^0xA132DCEE
{
	switch (iParam0)
	{
		case 2:
			return joaat("consumable_herb_ginseng");
	
		case 3:
			return joaat("consumable_herb_ginseng");
	
		case 4:
			return joaat("consumable_herb_bay_bolete");
	
		case 5:
			return joaat("consumable_herb_black_berry");
	
		case 6:
			return joaat("consumable_herb_currant");
	
		case 7:
			return joaat("consumable_herb_burdock_root");
	
		case 8:
			return joaat("consumable_herb_chanterelles");
	
		case 11:
			return joaat("consumable_herb_common_bulrush");
	
		case 12:
			return joaat("consumable_herb_creeping_thyme");
	
		case 13:
			return joaat("consumable_herb_sage");
	
		case 15:
			return joaat("consumable_herb_english_mace");
	
		case 16:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 18:
			return joaat("consumable_herb_currant");
	
		case 19:
			return -241666815;
	
		case 20:
			return joaat("consumable_herb_sage");
	
		case 21:
			return joaat("consumable_herb_indian_tobacco");
	
		case 24:
			return joaat("consumable_herb_milkweed");
	
		case 27:
			return joaat("consumable_herb_oleander_sage");
	
		case 28:
			return joaat("consumable_herb_oregano");
	
		case 29:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 30:
			return joaat("consumable_herb_prairie_poppy");
	
		case 32:
			return joaat("consumable_herb_rams_head");
	
		case 34:
			return joaat("consumable_herb_red_raspberry");
	
		case 35:
			return joaat("consumable_herb_sage");
	
		case 38:
			return joaat("consumable_herb_vanilla_flower");
	
		case 39:
			return joaat("consumable_herb_violet_snowdrop");
	
		case 40:
			return joaat("provision_wldflwr_agarita");
	
		case 41:
			return joaat("provision_wldflwr_texas_blue_bonnet");
	
		case 42:
			return joaat("provision_wldflwr_bitterweed");
	
		case 43:
			return joaat("provision_wldflwr_blood_flower");
	
		case 44:
			return joaat("provision_wldflwr_cardinal_flower");
	
		case 45:
			return joaat("provision_wldflwr_chocolate_daisy");
	
		case 46:
			return joaat("provision_wldflwr_creek_plum");
	
		case 47:
			return joaat("provision_wldflwr_wild_rhubarb");
	
		case 48:
			return joaat("provision_wldflwr_wisteria");
	
		case 49:
			return joaat("consumable_herb_wild_carrots");
	
		case 50:
			return joaat("consumable_herb_wild_feverfew");
	
		case 51:
			return joaat("consumable_herb_wild_mint");
	
		case 52:
			return joaat("consumable_herb_wintergreen_berry");
	
		case 53:
			return joaat("consumable_herb_yarrow");
	
		default:
			break;
	}

	return 0;
}

void func_499(int iParam0, BOOL bParam1) // Position - 0xD7AC Hash - 0xFA676C9B ^0xFA676C9B
{
	if (!func_500(iParam0))
		return;

	Global_17418[iParam0] = Global_17418[iParam0] || bParam1;
	return;
}

BOOL func_500(int iParam0) // Position - 0xD7D2 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_501(int iParam0) // Position - 0xD7DF Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_500(iParam0))
		return false;

	return func_606(iParam0, 4, true);
}

void func_502(int iParam0, BOOL bParam1) // Position - 0xD7FD Hash - 0xF33798D9 ^0x8C787B55
{
	if (!func_500(iParam0))
		return;

	if (func_607(iParam0))
		return;

	func_499(iParam0, 2);

	if (bParam1)
		if (!func_74(0, false, true))
			func_608(true, 1017438712);

	return;
}

BOOL func_503(int iParam0) // Position - 0xD840 Hash - 0x94F42F3F ^0x94F42F3F
{
	if (!func_500(iParam0))
		return false;

	return func_606(iParam0, true, true);
}

void func_504(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD85E Hash - 0x65D4C438 ^0x65D4C438
{
	if (!func_500(iParam0))
		return;

	if (func_503(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_609(iParam0);

	if (!bParam1)
		func_610(iParam0);

	func_499(iParam0, true);
	func_502(iParam0, true);

	if (bParam2)
		if (!func_74(0, false, true))
			func_505(true, 6);

	return;
}

void func_505(BOOL bParam0, int iParam1) // Position - 0xD8C0 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_611(&Global_0, 8);

	if (!func_612() || func_101() != -1)
		return;

	func_611(&Global_0, 1);
	return;
}

float func_506(int iParam0, int iParam1) // Position - 0xD906 Hash - 0x882BA7B3 ^0xDE52A593
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
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			num = 50;
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_33);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_33);
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

void func_507(int iParam0) // Position - 0xD9BB Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_613(2);
	func_614(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_508(int iParam0, BOOL bParam1) // Position - 0xD9F8 Hash - 0x71081FC9 ^0xE795FB69
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_615(2);
	func_616(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_509(int iParam0) // Position - 0xDA2D Hash - 0x265AFF44 ^0xE695F6B4
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_617(2);
	func_618(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

float func_510(float fParam0, float fParam1) // Position - 0xDA6A Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_511(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDA98 Hash - 0xF1ADCC2F ^0xF1ADCC2F
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_619(iParam0, fParam1, true);

	func_621(iParam0, func_620(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_512(float fParam0, int iParam1) // Position - 0xDAD1 Hash - 0x4EDD98F5 ^0x4EDD98F5
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

int func_513(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDB23 Hash - 0xAC70E962 ^0x1F9746E0
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_622(iParam0, fParam1, bParam2, bParam3);
}

void func_514(float fParam0, BOOL bParam1) // Position - 0xDB47 Hash - 0xF3A2F5AE ^0x22F56C08
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_623())
		func_624(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_180(109, false);
	}

	return;
}

struct<2> func_515(int iParam0) // Position - 0xDB9F Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_516(var uParam0, var uParam1, int iParam2) // Position - 0xDBAF Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_517(Hash hParam0) // Position - 0xDBCC Hash - 0x1B551CF7 ^0xD3BB1F31
{
	return func_156(hParam0) == joaat("consumable");
}

void func_518(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xDBE0 Hash - 0x81C6837 ^0x21B516A3
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

	if (!func_125(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_625() || bParam6)
	{
		func_626(hParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
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
	else if (bParam2 && func_628(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_156(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_145(hParam0, -1982291600) && !func_145(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	hash = func_159(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || hash == -1674363638 || hash == 252325943 || hash == 829857647 || hash == -636562458 || hash == 1341188928 || hash == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_531(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
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

	if (func_145(hParam0, 474910316))
	{
		str4 = func_629(hParam0);
	
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

	if (func_145(hParam0, 1816585950))
		num4 = joaat("color_objective");

	if (func_630(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_yellow");
		else
			num4 = joaat("color_yellowdark");

	hash2 = func_536(hParam0, false);

	if (func_631(hash) && func_145(hParam0, -306684263) && hash2 != 0)
	{
		hash2 = func_632(hParam0);
	}
	else if (func_156(hParam0) == joaat("CLOTHING"))
	{
		hash3 = func_535(hParam0);
	
		if (func_125(hash3, 0))
			hash2 = func_536(hash3, false);
	}

	if (func_633(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_634(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_537(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash2), value), num4);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash2);

	if (hash == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || hash == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || hash == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || hash == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_635(hParam0, -442898163));

	if (hash == -126813555 || hash == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_636(hParam0, &unk7))
			str5 = func_638(func_637(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_538(str5, str.f_1, MISC::GET_HASH_KEY(str), num5, num4, str3, str2, 0, true);
	return;
}

struct<2> func_519(Hash hParam0) // Position - 0xE0BA Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_125(hParam0, 0))
		return unk;

	if (func_145(hParam0, -305066475))
		if (func_101() == -1)
			if (func_145(hParam0, -537818634))
				return func_515(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_515(joaat("deadeye_items"));
	else if (func_145(hParam0, -537818634))
		return func_515(joaat("medicine_items"));

	if (func_145(hParam0, 2084895747))
		return func_515(joaat("lock_breaker_items"));

	return unk3;
}

BOOL func_520(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xE14E Hash - 0x4C808C39 ^0x99CF3799
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

	unk = { func_592(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam2)
		func_593(&unk, func_340(false));

	if (!func_594(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_476(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_224(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_478(num);
	num3 < iParam1;
	return true;
}

void func_521(int iParam0, BOOL bParam1, int iParam2) // Position - 0xE21A Hash - 0x2B098F6F ^0x2F7D859F
{
	Global_1940252.f_5 = iParam0;
	Global_1940252.f_37 = iParam2;

	if (bParam1 || func_639() && iParam2 == 0)
	{
		func_640(1);
		func_641(1);
	}

	return;
}

BOOL func_522() // Position - 0xE254 Hash - 0x7545CCE6 ^0x7545CCE6
{
	int num;

	num = Global_1953292.f_595[8];
	num = num + Global_1953292.f_595[10];
	num = num + Global_1953292.f_595[1];
	num = num + Global_1953292.f_595[2];
	num = num + Global_1953292.f_595[5];
	num = num + Global_1953292.f_595[25];
	num = num + Global_1953292.f_595[23];
	num = num + Global_1953292.f_595[18];
	num = num + Global_1953292.f_595[19];
	return num > 0;
}

int func_523(Hash hParam0) // Position - 0xE2EA Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_278(func_642(hParam0), 1);

	if (num != 39)
		return Global_1953292.f_1676.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_524(Hash hParam0, var uParam1) // Position - 0xE319 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_278(func_642(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1953292.f_1676.f_1[num /*3*/] != 0 && Global_1953292.f_1676.f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = Global_1953292.f_1676.f_1[num /*3*/];
	
		if (func_159(hash) == hParam0 || hParam0 == 81053684 && func_145(hash, 160827531))
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

Hash func_525(Hash hParam0) // Position - 0xE3AF Hash - 0x90D51E83 ^0x1291FDBE
{
	return Global_1953292.f_1676.f_1[func_278(hParam0, 1) /*3*/];
}

int func_526() // Position - 0xE3C9 Hash - 0x16CCC184 ^0xB63B6FF6
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_159(hash) == -999503751)
			if (func_643() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_527(Hash hParam0, int iParam1) // Position - 0xE41A Hash - 0x564F798F ^0xBDC94FF5
{
	if (iParam1 == 0)
		iParam1 = func_644(false);

	if (func_159(hParam0) == -999503751 && func_532(hParam0) != -1)
		return true;

	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return func_145(hParam0, -287432114);
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return func_145(hParam0, -133342564);

	return false;
}

BOOL func_528(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE483 Hash - 0xFC1A4C7A ^0x2FD92EB6
{
	var unk;
	var guid;

	unk = { func_222(hParam0, bParam2, 0) };
	guid = { func_223(hParam0, unk, unk.f_4, bParam2) };

	if (func_285(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_62(bParam2), &guid, bParam1);
	return true;
}

int func_529(Hash hParam0) // Position - 0xE4D5 Hash - 0xFFB858B2 ^0xFFB858B2
{
	switch (hParam0)
	{
		case -2061583405:
			return 2;
	
		case -1719060085:
			return 16;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 4;
	
		case 81053684:
			return 8;
	
		case 119907797:
			return 32;
	
		case 1388798186:
			return 64;
	
		default:
		
	}

	return 0;
}

BOOL func_530(int iParam0) // Position - 0xE530 Hash - 0x8364EAF ^0x20FEFCB3
{
	return Global_1953292.f_3352.f_33.f_6 && iParam0 != false;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_531(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0xE548 Hash - 0x92B705D3 ^0xB783F681
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

int func_532(Hash hParam0) // Position - 0xE63B Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (hParam0)
	{
		case -2011879201:
			return 5;
	
		case -1323870201:
			return 8;
	
		case -1063340820:
			return 6;
	
		case -808817534:
			return 3;
	
		case 97391779:
			return 2;
	
		case 217155793:
			return 1;
	
		case 491602716:
			return 0;
	
		case 967218463:
			return 10;
	
		case 1270922359:
			return 4;
	
		case 1632140501:
			return 9;
	
		case 2127262701:
			return 7;
	
		default:
		
	}

	return -1;
}

BOOL func_533(BOOL bParam0, int iParam1) // Position - 0xE6BD Hash - 0xFE9F4A91 ^0x51AAAD17
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		return Global_17418.f_55.f_664.f_33[iParam1 /*120*/] && bParam0 != false;

	return false;
}

struct<8> func_534(int iParam0) // Position - 0xE700 Hash - 0xAAC9C045 ^0xE6DD002E
{
	var unk;

	if (func_533(4, iParam0))
		return Global_17418.f_2645[iParam0 /*8*/];

	TEXT_LABEL_ASSIGN_STRING(&unk, HUD::GET_STRING_FROM_HASH_KEY(func_645(iParam0)), 64);
	return unk;
}

Hash func_535(Hash hParam0) // Position - 0xE735 Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_646(hParam0);

	if (num == 0)
		return 0;

	unk = { func_183(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_184(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_647(outKey))
			{
				func_187(collectionId);
				return outKey;
			}
		}
	
		func_187(collectionId);
	}

	return 0;
}

Hash func_536(Hash hParam0, BOOL bParam1) // Position - 0xE7BA Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_125(hParam0, 0))
		return 0;

	hash = func_648(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

const char* func_537(const char* sParam0, int iParam1) // Position - 0xE7E8 Hash - 0x9E99F03 ^0x8C5384D5
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_538(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xE802 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_649(sParam0, sParam1, hParam2);
	return num2;
}

void func_539() // Position - 0xE865 Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_1953292.f_1046 = 0;
	return;
}

BOOL func_540(Hash hParam0) // Position - 0xE875 Hash - 0xC36143B1 ^0xD0F863A4
{
	if (!func_125(hParam0, 0))
		return false;

	if (func_145(hParam0, 160827531) || func_159(hParam0) == 81053684)
		return true;

	return false;
}

void func_541(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE8B1 Hash - 0xB56128A7 ^0x710CD125
{
	BOOL flag;
	var unk;
	var unk120;
	int i;
	Hash hash;

	flag = false;

	switch (func_159(hParam0))
	{
		case -2061583405:
			flag = func_650(hParam0, &(Global_1953292.f_3352.f_28), bParam4);
			break;
	
		case -1719060085:
			flag = func_650(hParam0, &(Global_1953292.f_3352.f_31), bParam4);
			break;
	
		case -999503751:
			flag = func_650(hParam0, &(Global_1953292.f_3352.f_27), bParam4);
		
			if (func_145(hParam0, -166674229))
			{
				unk.f_1 = 39;
			
				if (func_651(&unk, hParam0, &unk120, false, true, false, 0, false, true, 8))
				{
					for (i = 0; i < 39; i = i + 1)
					{
						hash = unk.f_1[i /*3*/];
					
						if (func_125(hash, 0))
							func_541(hash, false, false, false, false);
					}
				}
			}
			break;
	
		case -525676072:
			flag = func_650(hParam0, &(Global_1953292.f_3352.f_29), bParam4);
			break;
	
		case 81053684:
			flag = func_650(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	
		case 119907797:
			flag = func_650(hParam0, &(Global_1953292.f_3352.f_32), bParam4);
			break;
	
		case 1388798186:
			flag = func_650(hParam0, &(Global_1953292.f_3352.f_33.f_7), bParam4);
			break;
	
		default:
			if (func_145(hParam0, 160827531))
				flag = func_650(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	}

	if (bParam3 && flag)
		func_415(false, hParam0);

	if (bParam2)
		func_413();

	if (bParam1)
		func_416(false, false);

	return;
}

Hash func_542(Hash hParam0) // Position - 0xEA37 Hash - 0xDBA8DC27 ^0x5C33F2A1
{
	int num;
	var unk;

	func_652(&unk, 9044914, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&unk);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&unk))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &unk, -1168434056))
			return 0;
	
		return num;
	}

	return 0;
}

BOOL func_543(Hash hParam0, int iParam1) // Position - 0xEA7B Hash - 0x926B5C1A ^0xC9C8B467
{
	Hash hash;

	hash = func_159(Global_1953292.f_1676.f_1[iParam1 /*3*/]);

	if (func_159(hParam0) == hash)
		return true;
	else if (hParam0 == -992705550)
		return func_145(Global_1953292.f_1676.f_1[iParam1 /*3*/], 160827531);
	else if (hParam0 == 491480257)
		return hash == -2061583405 || hash == 2086043523;
	else if (hParam0 == -1789518572)
		return hash == -923693316;
	else if (hParam0 == -275040139)
		return hash == 1882579758;

	return false;
}

void func_544(int iParam0, int iParam1) // Position - 0xEB22 Hash - 0xF4504E91 ^0x84D29029
{
	int i;
	int num;
	var unk;

	unk = 39;

	for (i = 0; i < 16; i = i + 1)
	{
		Global_1953292.f_2938.f_35[i /*2*/] = { unk };
	
		if (i < *iParam0)
		{
			if (func_653(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_653(&iParam0->f_2[i /*2*/], 1))
					func_654(&iParam0->f_2[i /*2*/], 2, 6);
			
				Global_1953292.f_2938.f_35[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { Global_1953292.f_2938.f_35[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_545(int iParam0, int iParam1, int iParam2) // Position - 0xEC1F Hash - 0x917A9738 ^0x1D68250E
{
	int i;
	int j;

	if (*iParam0 + 1 >= 16)
		return;

	if (!func_655(iParam0, 1))
		func_656(iParam0, 1);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		if (iParam0->f_2[i /*2*/] == iParam1)
		{
			iParam0->f_2[i /*2*/].f_1 = iParam2;
			return;
		}
	
		if (Global_1953292.f_83[iParam0->f_2[i /*2*/] /*12*/].f_2 > Global_1953292.f_83[iParam1 /*12*/].f_2)
		{
			for (j = *iParam0; j >= i + 1; j = j + -1)
			{
				iParam0->f_2[j /*2*/] = { iParam0->f_2[j - 1 /*2*/] };
			}
		
			iParam0->f_2[i /*2*/] = iParam1;
			iParam0->f_2[i /*2*/].f_1 = iParam2;
			*iParam0 = *iParam0 + 1;
			return;
		}
	}

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

void func_546(var uParam0, var uParam1) // Position - 0xED05 Hash - 0xEEF7C6EF ^0xEFE4EF7D
{
	int num;
	int num2;
	int num3;

	num = func_657(0);
	num.f_1 = uParam1;
	num.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
		return;

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, 1409451727))
		{
		}
		else
		{
			num3 = func_278(num2, 1);
		
			if (num3 < 0 || num3 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("Component")))
			{
			}
			else if (uParam0->f_1[num3 /*3*/] != num2)
			{
			}
			else
			{
				uParam0->f_1[num3 /*3*/] = Global_1953292.f_83[num3 /*12*/];
				uParam0->f_1[num3 /*3*/].f_1 = 0;
				func_425(num3, 0);
			}
		}
	}

	return;
}

void func_547(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xEDB8 Hash - 0x47EC47B2 ^0xCC3EAB2D
{
	int num;
	Hash hash;

	if (hParam1 == -230310728 || hParam1 == 1326838792)
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	num = 10;
	hash = func_159(uParam0->f_1[num /*3*/]);

	if (hash == 119907797)
	{
		if (func_145(hParam1, 458991572))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
	}
	else if (hash == 2086043523)
	{
		if (func_145(hParam1, -93469181))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
	}
	else if (hash == -525676072)
	{
		if (func_145(hParam1, -93469181))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
	}

	num = 11;

	if (func_145(uParam0->f_1[num /*3*/], -1446529222) && func_145(hParam1, -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam1, -93469181) && func_145(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	return;
}

void func_548(var uParam0, Hash hParam1, int iParam2) // Position - 0xEF8D Hash - 0xC8C81F63 ^0xED719640
{
	if (hParam1 == joaat("clothing_item_m_beard_stubble"))
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	return;
}

void func_549(var uParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0xEFD2 Hash - 0x1075AB8B ^0xF324283C
{
	int num;
	Hash hash;

	func_425(1, iParam3);

	if (bParam2)
		return;

	num = 12;
	hash = uParam0->f_1[num /*3*/];

	if (!func_281(hash, false) && func_145(hash, -180472385))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 10;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_159(hash) == 2086043523 && func_145(hParam1, -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	return;
}

void func_550(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF09B Hash - 0xA81215F7 ^0xA81215F7
{
	switch (func_159(hParam2))
	{
		case -525676072:
			func_658(uParam0, bParam1, iParam3);
			break;
	
		case 2086043523:
			func_659(uParam0, bParam1, iParam3);
			break;
	}

	return;
}

void func_551(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF0D5 Hash - 0x7B358321 ^0x3A779D22
{
	int num;

	num = 18;

	if (func_159(uParam0->f_1[num /*3*/]) == 912453393)
		func_425(num, iParam3);

	func_425(1, iParam3);

	if (bParam1)
		return;

	if (func_540(hParam2))
		func_660(uParam0, bParam1, iParam3);

	num = 11;

	if (func_145(hParam2, -180472385) && !func_281(uParam0->f_1[num /*3*/], false))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	if (func_145(hParam2, -1303648999))
		return;

	num = 16;

	if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_425(num, iParam3);
		num = 20;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_425(num, iParam3);
	}
	else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[num /*3*/].f_1 = -1539589426;
		func_425(num, iParam3);
		num = 20;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_425(num, iParam3);
	}

	return;
}

void func_552(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF215 Hash - 0x6DFFA234 ^0x160F223D
{
	int num;
	int metapedType;
	Hash hash;
	int num2;
	int num3;

	num = 12;
	metapedType = 0;

	if (func_417() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	if (joaat("neckties") == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(uParam0->f_1[num /*3*/], metapedType, true))
	{
		if (bParam1 || func_145(hParam2, 1872585553) || func_159(hParam2) == 1882579758)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
	}

	hash = uParam0->f_1[num /*3*/];

	if (!func_281(hash, false) && !func_145(hash, -1303648999) && func_145(hParam2, -1527414429))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 17;

	if (!func_281(uParam0->f_1[num /*3*/], false) && func_145(hParam2, 1467402774))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 29;

	if (!func_281(uParam0->f_1[num /*3*/], false) && func_145(hParam2, 1126863852))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 34;
	hash = uParam0->f_1[num /*3*/];

	if (func_159(hash) == 1759215194 && func_159(hParam2) == 1882579758)
	{
		uParam0->f_1[num /*3*/] = func_542(hParam2);
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}
	else if (func_661(hash, bParam1, metapedType))
	{
		hash = uParam0->f_1[18 /*3*/];
		num2 = 0;
	
		if (func_159(hash) == 912453393 && func_662(32))
			num2 = num2 | 1;
	
		if (func_145(hParam2, 525391395))
			num2 = num2 | 2;
	
		hash = func_663(Global_1953292.f_83[num /*12*/].f_9, num2);
	
		if (hash != 0)
		{
			uParam0->f_1[num /*3*/] = hash;
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
			func_560(uParam0, false, hash, iParam3);
		}
	}

	num = 21;

	if (!func_281(uParam0->f_1[num /*3*/], false) && func_145(hParam2, 196770179))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num3 = 23;

	if (!func_281(uParam0->f_1[num /*3*/], false) || uParam0->f_1[num3 /*3*/] != Global_1953292.f_83[num3 /*12*/] && func_145(uParam0->f_1[num3 /*3*/], -1655064541))
		func_664(uParam0, iParam3);

	return;
}

void func_553(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF4FE Hash - 0x7E0722A ^0xAB26183C
{
	int num;

	if (bParam1)
		return;

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam2, 358628372))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	return;
}

void func_554(var uParam0, BOOL bParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0xF55D Hash - 0xB459802F ^0xB459802F
{
	switch (func_159(hParam2))
	{
		case 698653232:
			func_665(uParam0, bParam1, hParam2, iParam4);
			break;
	
		case 912453393:
			func_666(uParam0, bParam1, iParam3, iParam4);
			break;
	}

	return;
}

void func_555(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF59B Hash - 0x22CB819F ^0x22CB819F
{
	switch (func_159(hParam2))
	{
		case -1080198344:
		case 1868067663:
			func_667(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 294388917:
			func_668(uParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_556(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF5DF Hash - 0x3C314B3B ^0x50027DDE
{
	int num;

	num = 18;

	if (func_159(uParam0->f_1[num /*3*/]) == 912453393)
		func_425(num, iParam3);

	if (bParam1)
		return;

	num = 23;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam2, 1537768121))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_664(uParam0, iParam3);

	return;
}

void func_557(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF67B Hash - 0xEA1EEC9C ^0x89D8E054
{
	int num;

	if (!bParam1)
	{
		num = 21;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			if (func_145(uParam0->f_1[num /*3*/], 1537768121))
			{
				uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
				uParam0->f_1[num /*3*/].f_1 = 0;
			}
		
			func_425(num, iParam3);
		}
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_145(hParam2, -1655064541))
			func_664(uParam0, iParam3);
		else
			func_425(num, iParam3 | 16);

	num = 20;

	if (uParam0->f_1[num /*3*/].f_1 != -529972961)
		return;

	uParam0->f_1[num /*3*/].f_1 = joaat("base");
	func_425(num, iParam3);
	num = 25;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_425(num, iParam3);

	num = 28;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_425(num, iParam3);

	return;
}

void func_558(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF78A Hash - 0x69302866 ^0x620ADA80
{
	int num;

	if (bParam1)
		return;

	if (func_669(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_145(hParam2, -1230785684))
	{
		num = 27;
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 32;

	if (!func_281(uParam0->f_1[num /*3*/], false) && func_145(hParam2, 1016511012))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	return;
}

void func_559(var uParam0, BOOL bParam1, int iParam2) // Position - 0xF829 Hash - 0xAEDF8511 ^0x27A01C51
{
	int num;

	if (bParam1)
		return;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(uParam0->f_1[num /*3*/], 358628372))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	return;
}

void func_560(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF88E Hash - 0x81434F3 ^0x81434F3
{
	switch (func_159(hParam2))
	{
		case -1740828670:
			func_674(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 344283346:
			func_675(uParam0, bParam1, iParam3);
			break;
	
		case 502936876:
			func_673(uParam0, bParam1, iParam3);
			break;
	
		case 684307653:
			func_672(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1223979091:
		case 2047428024:
			func_671(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1759215194:
			func_670(uParam0, iParam3);
			break;
	}

	return;
}

void func_561(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF91E Hash - 0x22CB819F ^0x22CB819F
{
	switch (func_159(hParam2))
	{
		case -923693316:
			func_677(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1769055947:
			func_676(uParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_562(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF95C Hash - 0x60D806B ^0x98705F22
{
	int num;
	Hash hash;

	if (bParam1)
	{
		func_678(uParam0, iParam3, false, true);
		return;
	}

	num = 35;
	hash = uParam0->f_1[num /*3*/];

	if (func_145(hParam2, 813132419) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_159(hash) == -923693316)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	if (func_145(hParam2, -1650340550) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_159(hash) == 1769055947)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 37;

	if (func_145(hParam2, -1278198125) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	return;
}

int func_563(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0xFA8B Hash - 0xD6995ACD ^0x328CFE7D
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, true); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, true) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_564(Hash hParam0, Hash hParam1, var uParam2) // Position - 0xFACD Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

int func_565(Hash hParam0) // Position - 0xFADE Hash - 0x6EEB52D0 ^0x6EEB52D0
{
	int num;

	num = func_532(hParam0);

	if (num != -1)
		return num;

	return -1;
}

BOOL func_566(Hash hParam0) // Position - 0xFAFA Hash - 0x1DB3839 ^0xD5C14C10
{
	return hParam0 == -1839668642 || hParam0 == -1415811768 || hParam0 == 231148558 || hParam0 == -1674363638 || hParam0 == 252325943 || hParam0 == 1216664798 || hParam0 == 1341188928 || hParam0 == 829857647 || hParam0 == -636562458 || hParam0 == 1115104855;
}

void func_567(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0xFB88 Hash - 0x3079C542 ^0x5D29A697
{
	if (bParam1)
		Global_1953292.f_1676.f_1[iParam0 /*3*/] = { Global_1953292.f_1557.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (iParam3 == -1)
		iParam3 = Global_17418.f_55.f_664.f_1777;

	func_679(&Global_1953292.f_1676.f_1[iParam0 /*3*/], iParam0, iParam3);
	return;
}

BOOL func_568(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xFBE4 Hash - 0xECEF3502 ^0x2D53122C
{
	var unk;
	var unk6;

	unk = { func_222(hParam0, bParam2, 0) };
	unk6 = { func_223(hParam0, unk, unk.f_4, bParam2) };
	return func_431(unk6, iParam1, bParam2);
}

void func_569(int iParam0, BOOL bParam1, int iParam2) // Position - 0xFC19 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_680(&(Global_1953292.f_1557), iParam0);
	func_681(2, iParam0, 6);

	if (bParam1)
		func_416(false, true);

	return;
}

int func_570(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0xFC41 Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_682(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

int func_571(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0xFC6F Hash - 0x85BC54D5 ^0xA60D4F06
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

	if (!func_127(*panParam0, &unk, true, false, -1))
		return num;

	if (unk.f_10 == iParam1)
		return num;

	if (unk.f_13)
		return num;

	num2 = func_156(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_683(*panParam0, true, false) };
		unk15.f_10 = iParam1;
		num = func_684(joaat("UPDATE"), &unk15, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("coach"))
	{
		unk44 = { func_685(*panParam0, true, false) };
		unk44.f_10 = iParam1;
		num = func_686(joaat("UPDATE"), &unk44, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk70 = { func_687(*panParam0, true, false) };
		unk70.f_10 = iParam1;
		num = func_688(joaat("UPDATE"), &unk70, bParam2);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk88 = { func_689(&unk, false) };
		unk88.f_10 = iParam1;
		num = func_338(joaat("UPDATE"), &unk88, bParam2);
	
		if (num == -1)
			return num;
	}

	return num;
}

float func_572(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFDB2 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

int func_573(int iParam0) // Position - 0xFDFA Hash - 0x669CB4E1 ^0x669CB4E1
{
	switch (iParam0)
	{
		case 0:
			return 24;
	
		case 1:
			return 25;
	
		case 2:
			return 26;
	
		case 3:
			return 27;
	
		case 4:
			return 28;
	
		case 5:
			return 29;
	
		case 6:
			return 30;
	
		case 7:
			return 34;
	
		case 11:
			return 31;
	
		case 12:
			return 32;
	
		case 13:
			return 33;
	
		case 14:
			return 35;
	
		case 15:
			return 41;
	
		case 16:
			return 39;
	
		case 17:
			return 40;
	
		case 18:
			return 38;
	
		default:
		
	}

	if (func_310(iParam0) == joaat("posse_versus"))
		return 37;

	return 23;
}

BOOL func_574() // Position - 0xFECF Hash - 0xDF34329C ^0xA25E1085
{
	if (func_111() || Global_1572887.f_72.f_40 > 10 || func_690())
		if (!func_386() && Global_265213.f_122484.f_80.f_16.f_2 != -504335712 && !func_691(Global_265213.f_122484.f_80.f_16.f_3))
			return true;

	return false;
}

BOOL func_575(int iParam0, Player plParam1) // Position - 0xFF39 Hash - 0xAF32F835 ^0x6534FA19
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

BOOL func_576() // Position - 0xFF65 Hash - 0x62AD6655 ^0x124ACCA1
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();
	return Global_1051832.f_3279 == frameCount || Global_1051832.f_3279 == frameCount - 1;
}

void func_577(int iParam0) // Position - 0xFF8F Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1051832.f_3648 = Global_1051832.f_3648 || iParam0;
	return;
}

BOOL func_578() // Position - 0xFFA8 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

int func_579() // Position - 0xFFC4 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_580() // Position - 0xFFD2 Hash - 0x306ACA3A ^0x3EB574A2
{
	return "unnamed";
}

BOOL func_581(int iParam0) // Position - 0xFFDE Hash - 0x4DC60367 ^0x4DC60367
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

BOOL func_582(int iParam0) // Position - 0x10085 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_692(36, iParam0);
}

int func_583(int iParam0) // Position - 0x100A3 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_584(Player plParam0) // Position - 0x100EE Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_693(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_694(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_585(var uParam0) // Position - 0x10133 Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

Hash func_586(Hash hParam0) // Position - 0x10148 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_587() // Position - 0x10152 Hash - 0xD8853F79 ^0x219536E8
{
	int value;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 135369362))
		return 604800;

	value = 604800;

	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-475019843, 135369362, &value))
		return 604800;

	return value;
}

BOOL func_588(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x10196 Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_304(iParam2, iParam3))
		return true;

	return false;
}

void func_589(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x101AE Hash - 0x3169A239 ^0x47E831EC
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

	func_695(iParam0, iParam1, iParam2, iParam3);
	return;
}

int func_590(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1024C Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_696(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(bParam1), hParam0, bParam3);
}

void func_591(Hash hParam0, var uParam1, var uParam2) // Position - 0x1027F Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_592(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1048B Hash - 0x90CCF0F4 ^0xA5F3D799
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

void func_593(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x10569 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_594(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x10584 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_62(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_595(Any* panParam0, int iParam1) // Position - 0x105A9 Hash - 0x34992178 ^0x98B18966
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_596() // Position - 0x105E0 Hash - 0x33EB0DBC ^0xEC692AA0
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

int func_597() // Position - 0x10618 Hash - 0x1B9090CC ^0x1B9090CC
{
	return Global_1110244.f_3667.f_938;
}

int func_598(int iParam0, int iParam1, var uParam2) // Position - 0x1062A Hash - 0x4D6E9A17 ^0x4D6E9A17
{
	int num;

	if (iParam0 > iParam1)
		return -1;

	num = (iParam0 + iParam1) / 2;

	if (*uParam2 < Global_1110244.f_3667.f_729[num /*2*/])
		return func_598(iParam0, num - 1, uParam2);

	if (*uParam2 > Global_1110244.f_3667.f_729[num /*2*/])
		return func_598(num + 1, iParam1, uParam2);

	return num;
}

int func_599(int iParam0) // Position - 0x10694 Hash - 0xC69036C ^0xCCA4B427
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

BOOL func_600(int iParam0) // Position - 0x106AC Hash - 0x7EE3A984 ^0x7EE3A984
{
	return iParam0 > -1 && iParam0 < 83;
}

BOOL func_601(Any* panParam0) // Position - 0x106C2 Hash - 0x5AEEE194 ^0x97DC092A
{
	int fileHandle;
	var src;

	fileHandle = func_697();

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_602(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* piParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x106FB Hash - 0x9BC890AF ^0xDF6320E0
{
	uParam0.f_2 = iParam6;
	uParam0.f_3 = iParam7;
	uParam0.f_4 = iParam8;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(piParam5, &uParam0))
		return false;

	return true;
}

struct<8> func_603(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x10726 Hash - 0x481BF462 ^0x481BF462
{
	return func_698(uParam0, 52, 1);
}

int func_604(Hash hParam0) // Position - 0x10739 Hash - 0x3EE73043 ^0x3EE73043
{
	switch (hParam0)
	{
		case joaat("document_abandoned_loot_map_intro_tumbleweed_2"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_1"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_4"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_3"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_5"):
			return 3;
	
		case joaat("document_abandoned_loot_map_intro_valentine_5"):
		case joaat("document_abandoned_loot_map_intro_valentine_2"):
		case joaat("document_abandoned_loot_map_intro_valentine_1"):
		case joaat("document_abandoned_loot_map_intro_valentine_4"):
		case joaat("document_abandoned_loot_map_intro_valentine_3"):
			return 1;
	
		case joaat("document_abandoned_loot_map_intro_blackwater_5"):
		case joaat("document_abandoned_loot_map_intro_blackwater_2"):
		case joaat("document_abandoned_loot_map_intro_blackwater_4"):
		case joaat("document_abandoned_loot_map_intro_blackwater_3"):
		case joaat("document_abandoned_loot_map_intro_blackwater_1"):
			return 2;
	
		case joaat("document_abandoned_loot_map_intro_rhodes_2"):
		case joaat("document_abandoned_loot_map_intro_rhodes_3"):
		case joaat("document_abandoned_loot_map_intro_rhodes_1"):
		case joaat("document_abandoned_loot_map_intro_rhodes_4"):
		case joaat("document_abandoned_loot_map_intro_rhodes_5"):
			return 0;
	
		default:
		
	}

	return -1;
}

BOOL func_605(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x107D2 Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_113(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_699(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_606(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1080D Hash - 0x77ECC81C ^0xEFBF0FBE
{
	if (bParam2)
		if (!func_500(iParam0))
			return false;

	if (Global_1572887.f_14 != -1)
		return Global_17418[iParam0] && bParam1 != false;

	return Global_38.f_4675[iParam0] && bParam1 != false;
}

BOOL func_607(int iParam0) // Position - 0x10850 Hash - 0xE139661B ^0xE139661B
{
	if (!func_500(iParam0))
		return false;

	return func_606(iParam0, 2, true);
}

int func_608(BOOL bParam0, int iParam1) // Position - 0x1086E Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_700())
		return 0;

	if (!func_301())
		return 0;

	Global_0 = iParam1;

	if (bParam0)
		func_611(&Global_0, 8);

	func_611(&Global_0, 1);
	return 1;
}

BOOL func_609(int iParam0) // Position - 0x108C4 Hash - 0xA376F75 ^0xA376F75
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return 1;
	
		default:
			return 0;
	}

	return 0;
}

void func_610(int iParam0) // Position - 0x10931 Hash - 0x3B9D9F25 ^0x3B9D9F25
{
	switch (iParam0)
	{
		case 2:
			func_180(243, false);
			break;
	
		case 3:
			func_180(244, false);
			break;
	
		case 4:
			func_180(263, false);
			break;
	
		case 5:
			func_180(239, false);
			break;
	
		case 6:
			func_180(259, false);
			break;
	
		case 7:
			func_180(256, false);
			break;
	
		case 8:
			func_180(264, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_180(267, false);
			break;
	
		case 13:
			func_180(250, false);
			break;
	
		case 15:
			func_180(246, false);
			break;
	
		case 16:
			func_180(240, false);
			break;
	
		case 18:
			func_180(258, false);
			break;
	
		case 19:
			func_180(251, false);
			break;
	
		case 20:
			func_180(252, false);
			break;
	
		case 21:
			func_180(257, false);
			break;
	
		case 24:
			func_180(247, false);
			break;
	
		case 27:
			func_180(249, false);
			break;
	
		case 28:
			func_180(268, false);
			break;
	
		case 29:
			func_180(265, false);
			break;
	
		case 30:
			func_180(260, false);
			break;
	
		case 32:
			func_180(266, false);
			break;
	
		case 34:
			func_180(241, false);
			break;
	
		case 35:
			func_180(253, false);
			break;
	
		case 38:
			func_180(248, false);
			break;
	
		case 39:
			func_180(254, false);
			break;
	
		case 49:
			func_180(261, false);
			break;
	
		case 50:
			func_180(255, false);
			break;
	
		case 51:
			func_180(269, false);
			break;
	
		case 52:
			func_180(242, false);
			break;
	
		case 53:
			func_180(245, false);
			break;
	}

	return;
}

void func_611(int iParam0, int iParam1) // Position - 0x10B37 Hash - 0x53A96DDB ^0xB6A79257
{
	iParam0->f_2 = iParam0->f_2 || iParam1;
	return;
}

BOOL func_612() // Position - 0x10B4A Hash - 0x65674CA9 ^0xC0D8F466
{
	return true;
}

int func_613(int iParam0) // Position - 0x10B69 Hash - 0x262796A6 ^0x32C91F91
{
	if (iParam0 == 2)
		iParam0 = func_701(1);

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

void func_614(float fParam0, Ped pedParam1) // Position - 0x10BA9 Hash - 0x81B8D237 ^0xD25A4B21
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

int func_615(int iParam0) // Position - 0x10BED Hash - 0x3229E1B0 ^0x75954C0C
{
	if (iParam0 == 2)
		iParam0 = func_701(1);

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

void func_616(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10C31 Hash - 0x5072E518 ^0x6DDAEE0A
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_702(player))
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

int func_617(int iParam0) // Position - 0x10CE2 Hash - 0x3229E1B0 ^0x4F226FB4
{
	if (iParam0 == 2)
		iParam0 = func_701(1);

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

void func_618(float fParam0, Ped pedParam1) // Position - 0x10D26 Hash - 0xFCEEE112 ^0xFADF1B0E
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

float func_619(int iParam0, float fParam1, BOOL bParam2) // Position - 0x10D68 Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_703();
	func_704(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_705(iParam0, 2);

	if (func_707(num, func_706(iParam0, 2), true))
	{
		func_708(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_180(103, bParam2);
		return 0f;
	}

	func_709(iParam0, func_703(), 2);
	func_708(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_620(int iParam0, int iParam1) // Position - 0x10DD1 Hash - 0x76523351 ^0x92907141
{
	if (iParam1 == 2)
		iParam1 = func_701(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_621(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x10E1D Hash - 0xF5F03980 ^0x83C208D5
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_701(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_710(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_711(iParam0, 7000, iParam5);
	
		func_712(ped, iParam0, fParam1);
		func_713(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

int func_622(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10E9B Hash - 0xFF5C68E3 ^0x564C72DE
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_714(iParam0))
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
				effectName = func_715(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_507(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_715(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_716(joaat("STATUS_EFFECT__TRACKING"));
			func_509(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_715(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_508(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_717(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_716(joaat("STATUS_EFFECT__POISON"));
			func_717(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_717(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_623() // Position - 0x11051 Hash - 0x57305A7F ^0x41946F5D
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_718(Global_1956875.f_1431.f_107, false);
}

void func_624(float fParam0, int iParam1) // Position - 0x1107A Hash - 0x6AFE3513 ^0x6AFE3513
{
	float num;
	int num2;
	int num3;

	num = func_719(13, 2);
	num2 = func_720(num);
	num = num + fParam0;
	num = func_721(num, 0f, 100f);
	num3 = func_720(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_703();
		func_722(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_723(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

BOOL func_625() // Position - 0x110ED Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_626(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x110FA Hash - 0x3B7A5BE9 ^0xEE7A100D
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

var func_627(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1121D Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_628(Hash hParam0, int iParam1) // Position - 0x11234 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_125(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

char* func_629(Hash hParam0) // Position - 0x11253 Hash - 0xFBA883FB ^0x9580FF57
{
	if (func_145(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_145(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_145(hParam0, 143267379))
		return "collectible_coins";

	if (func_145(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_145(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_145(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_145(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_145(hParam0, 781094263))
		return "collectible_flowers";

	if (func_145(hParam0, -352095726) || func_145(hParam0, -2014783736) || func_145(hParam0, -545064757) || func_145(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_630(Hash hParam0) // Position - 0x1134E Hash - 0x12CDDB68 ^0xF31C74A7
{
	if (func_145(hParam0, -189374246))
		if (func_724(hParam0, -1305775593) || func_724(hParam0, 1384151091) || func_724(hParam0, 2075388272) || func_724(hParam0, -1738780413))
			return true;

	if (func_145(hParam0, -753854379) || func_145(hParam0, 173360570))
		return true;

	return false;
}

BOOL func_631(Hash hParam0) // Position - 0x113CD Hash - 0x339D45CE ^0x339D45CE
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

Hash func_632(Hash hParam0) // Position - 0x113F4 Hash - 0x9C7FC6B8 ^0x60951C4B
{
	var outData;
	int i;

	if (!func_125(hParam0, 0))
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

BOOL func_633(Hash hParam0, Hash hParam1) // Position - 0x11462 Hash - 0x34B85114 ^0x6986CE99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return true;

	return false;
}

int func_634(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x11493 Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_125(hParam0, 0) && !func_333(func_234(hParam0), 2))
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

 func_635(Hash hParam0, int iParam1) // Position - 0x114F2 Hash - 0x7C967237 ^0x7C967237
{
	 num;

	num = func_725(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_636(Hash hParam0, char* sParam1) // Position - 0x11510 Hash - 0xE779657E ^0x44FD4FF7
{
	int lengthOfLiteralString;
	var unk;

	if (!func_125(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_726(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_327(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_727(hParam0), 128);

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

const char* func_637(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x1158D Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_638(const char* sParam0, int iParam1) // Position - 0x115A1 Hash - 0xB0CFF0C3 ^0xD74DB063
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_537(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

BOOL func_639() // Position - 0x115D7 Hash - 0xA30B23E7 ^0xAB29D7A2
{
	if (Global_1940252.f_11596 != Global_1940252.f_41.f_203 - 1 || func_729(func_728(0), Global_1940252.f_11588, false, true, true) > 0 || Global_1940252.f_11596 == 15)
		return true;

	func_730(0);

	if (Global_1940252.f_7)
		return true;

	return false;
}

void func_640(int iParam0) // Position - 0x11636 Hash - 0x29A8F290 ^0x82294867
{
	Global_1940252.f_11 = iParam0;
	return;
}

void func_641(int iParam0) // Position - 0x11646 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1940252.f_10 = iParam0;
	return;
}

Hash func_642(Hash hParam0) // Position - 0x11656 Hash - 0xADA620BC ^0xEF3A3B3A
{
	int outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_277(outSlotId);
}

Hash func_643() // Position - 0x11679 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1953292.f_1676;
}

int func_644(BOOL bParam0) // Position - 0x11688 Hash - 0x4F98C57 ^0x1385EECF
{
	var unk;
	int num;
	var unk15;
	Hash hash;
	int num2;
	int num3;
	var unk19;

	unk.f_9 = joaat("SLOTID_NONE");
	num = 0;
	unk15 = { func_223(joaat("WARDROBE"), func_286(true), joaat("SLOTID_WARDROBE"), true) };
	hash = func_430(unk15, 552979403, true, -1);

	if (hash != 0)
	{
		if (hash == joaat("clothing_mp_female_player_character"))
			num = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
		else if (hash == joaat("clothing_mp_male_player_character"))
			num = joaat("MPC_PLAYER_TYPE_MP_MALE");
	
		return num;
	}

	unk19 = { func_592(0, joaat("SLOTID_NONE"), 552979403, joaat("SLOTID_NONE"), 0, 0, 0) };

	if (func_594(&unk19, &num2, &num3, true))
	{
		if (num3 > 0 && func_476(&unk, 0, num2, num3))
		{
			if (unk.f_4 == joaat("clothing_mp_female_player_character"))
			{
				num = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
			}
			else if (unk.f_4 == joaat("clothing_mp_male_player_character"))
			{
				num = joaat("MPC_PLAYER_TYPE_MP_MALE");
			}
			else
			{
				func_478(num2);
				return 0;
			}
		
			if (bParam0)
				func_431(unk, true, false);
		
			func_478(num2);
			return num;
		}
	
		func_478(num2);
	}

	return 0;
}

Hash func_645(int iParam0) // Position - 0x11795 Hash - 0xB8EC44B7 ^0x7FF5C9C2
{
	switch (iParam0)
	{
		case 1:
			return 217155793;
	
		case 2:
			return 97391779;
	
		case 3:
			return -808817534;
	
		case 4:
			return 1270922359;
	
		case 5:
			return -2011879201;
	
		case 6:
			return -1063340820;
	
		case 7:
			return 2127262701;
	
		case 8:
			return -1323870201;
	
		case 9:
			return 1632140501;
	
		case 10:
			return 967218463;
	
		default:
		
	}

	return 0;
}

int func_646(Hash hParam0) // Position - 0x11832 Hash - 0xE1F3DDAE ^0xC8D3B326
{
	var outData;
	int num;

	if (!func_125(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

BOOL func_647(Hash hParam0) // Position - 0x1186C Hash - 0x5E6E1858 ^0xE905275C
{
	!func_125(hParam0, 0);

	if (func_145(hParam0, -393037696))
		return true;

	return false;
}

Hash func_648(Hash hParam0, BOOL bParam1) // Position - 0x11892 Hash - 0xBBDA5425 ^0xDFF2513
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

void func_649(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x11934 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_650(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x11965 Hash - 0x88E96348 ^0x46451541
{
	int i;
	BOOL flag;

	if (*iParam1 <= 0)
	{
		*iParam1 = 0;
		return false;
	}

	if (Global_1953292.f_3352.f_26 <= 1)
	{
		Global_1953292.f_3352.f_26 = 0;
		*iParam1 = 0;
		Global_1953292.f_3352[0] = 0;
		return true;
	}

	for (i = 0; i <= Global_1953292.f_3352.f_26 - 1; i = i + 1)
	{
		if (hParam0 == Global_1953292.f_3352[i])
			flag = true;
	
		if (flag && i < Global_1953292.f_3352.f_26 - 1)
			Global_1953292.f_3352[i] = Global_1953292.f_3352[i + 1];
	}

	if (flag)
	{
		Global_1953292.f_3352.f_26 = Global_1953292.f_3352.f_26 - 1;
		*iParam1 = *iParam1 - 1;
		Global_1953292.f_3352[Global_1953292.f_3352.f_26] = 0;
		func_528(hParam0, true, bParam2);
	}

	return flag;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_651(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6, BOOL bParam7, BOOL bParam8, int iParam9) // Position - 0x11A45 Hash - 0xF5A6EBD3 ^0xB19C08FF
{
	Hash hash;
	int num;
	BOOL flag;
	Hash hash2;
	int num2;
	int num3;

	num3 = 0;
	num2 = func_657(iParam6);
	num2.f_1 = hParam1;
	num2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num2);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num2, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 2049745650);
	*uParam2 = flag;

	if (!flag && !bParam3)
		func_732(uParam0, func_731(hash), true, true, bParam7);

	if (flag)
	{
		if (iParam9 != 8)
			func_424(-1);
	
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, -1212855483))
			num3 = func_731(hash);
	}

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1409451727))
		{
		}
		else
		{
			hash2 = hash;
			num = func_278(hash2, 1);
		
			if (num < 0 || num > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, joaat("Component")))
			{
			}
			else
			{
				uParam0->f_1[num /*3*/] = hash;
			
				if (flag)
					func_733(hash2, 16, 6);
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1441384))
						uParam0->f_1[num /*3*/].f_1 = joaat("base");
					else
						goto 0x16A;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1194786549))
					if (func_734(hash2) && func_564(uParam0->f_1[num /*3*/], hash2, &hash))
						uParam0->f_1[num /*3*/].f_1 = hash;
				else
					uParam0->f_1[num /*3*/].f_1 = hash;
			}
		}
	}

	num = 16;

	if (flag)
	{
		if (!bParam8)
			func_736(uParam0, num3, func_735(hParam1) != 0, iParam9);
	}
	else if (func_417() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_735(uParam0->f_1[34 /*3*/]) == 0 && !func_270(32) && !func_270(64))
	{
		uParam0->f_1[num /*3*/] = func_663(-1293064293, 0);
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_427(uParam0, uParam0->f_1[num /*3*/], num, false, iParam9);
	}

	if (bParam4)
		*uParam0 = hParam1;

	return true;
}

void func_652(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4, Hash hParam5) // Position - 0x11C74 Hash - 0x2E9AB941 ^0x44CE1BA8
{
	*panParam0 = iParam1;
	panParam0->f_1 = iParam2;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = iParam4;
	panParam0->f_4 = hParam5;
	panParam0->f_6 = 0;
	panParam0->f_5 = 0;
	return;
}

BOOL func_653(var uParam0, int iParam1) // Position - 0x11CA3 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_654(var uParam0, int iParam1, int iParam2) // Position - 0x11CB4 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_655(int iParam0, int iParam1) // Position - 0x11CC7 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_656(int iParam0, int iParam1) // Position - 0x11CD8 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

int func_657(int iParam0) // Position - 0x11CEB Hash - 0x4840ACEF ^0x81C8BA00
{
	if (iParam0 == 0)
		iParam0 = func_417();

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return -1806335803;
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return -971050805;

	return 0;
}

void func_658(var uParam0, BOOL bParam1, int iParam2) // Position - 0x11D27 Hash - 0x3F8569B2 ^0x210C3509
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 12;
	hash = uParam0->f_1[num /*3*/];

	if (func_145(hash, 160827531) || func_159(hash) == 81053684)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	return;
}

void func_659(var uParam0, BOOL bParam1, int iParam2) // Position - 0x11D8A Hash - 0x5D9C216F ^0x7A27103D
{
	int num;

	if (bParam1)
		return;

	num = 11;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(uParam0->f_1[num /*3*/], -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	return;
}

void func_660(var uParam0, BOOL bParam1, int iParam2) // Position - 0x11DEF Hash - 0xD866F2E0 ^0x10CD7BBC
{
	int num;

	if (bParam1)
		return;

	num = 10;

	if (-525676072 == func_159(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	return;
}

BOOL func_661(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x11E3C Hash - 0x1514A216 ^0x8B5540D1
{
	Hash hash;

	hash = func_159(hParam0);

	if (iParam2 == 0)
		return hash == 1759215194 || hash == 344283346;

	return !bParam1 && hash == -1740828670 || hash == 344283346;
}

BOOL func_662(int iParam0) // Position - 0x11E89 Hash - 0xB39D195A ^0x26136171
{
	return Global_17418.f_55.f_664.f_1734 && iParam0 != false;
}

Hash func_663(int iParam0, int iParam1) // Position - 0x11EA1 Hash - 0xD36D7E4E ^0x5FDE473
{
	int num;
	int num2;
	int num3;
	var unk;

	num3 = 0;
	unk = { func_592(0, joaat("SLOTID_NONE"), iParam0, joaat("SLOTID_NONE"), 0, 0, 0) };

	if (func_594(&unk, &num, &num2, true))
	{
		if (num2 > 0)
			num3 = func_737(num, num2, iParam1);
	
		func_478(num);
	}

	return num3;
}

void func_664(var uParam0, int iParam1) // Position - 0x11EEE Hash - 0x91DC8CCD ^0x83C6C8B8
{
	int num;
	BOOL flag;

	num = 16;
	flag = false;

	if (func_417() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	func_425(num, iParam1);

	if (uParam0->f_1[num /*3*/].f_1 == -1539589426 || uParam0->f_1[num /*3*/].f_1 == 1334603721)
		return;

	if (uParam0->f_1[num /*3*/].f_1 == 0 || uParam0->f_1[num /*3*/].f_1 == joaat("base"))
	{
		if (func_563(uParam0->f_1[num /*3*/], flag, -1539589426) >= 0)
		{
			uParam0->f_1[num /*3*/].f_1 = -1539589426;
			return;
		}
	}

	if (func_563(uParam0->f_1[num /*3*/], flag, 1334603721) >= 0)
		uParam0->f_1[num /*3*/].f_1 = 1334603721;

	return;
}

void func_665(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x11FB4 Hash - 0x40A062A0 ^0xFAF44654
{
	int num;

	if (bParam1)
		return;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam2, -1527414429) && !func_145(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/].f_1 == 1530758430 || uParam0->f_1[num /*3*/].f_1 == 1334603721 && func_145(hParam2, -985549034))
	{
		if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_425(num, iParam3);
		}
		else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[num /*3*/].f_1 = -1539589426;
			func_425(num, iParam3);
		}
	}

	return;
}

void func_666(var uParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x120BC Hash - 0xACD9DBFF ^0x9A6E665B
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		num = 34;
		hash = uParam0->f_1[num /*3*/];
	
		if (func_145(hash, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_425(iParam2, iParam3);
		}
		else
		{
			num = 35;
			hash = uParam0->f_1[num /*3*/];
		
			if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_159(hash))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_425(iParam2, iParam3);
			}
		}
	}

	return;
}

void func_667(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1219E Hash - 0xCE5028CB ^0xB60DB9E1
{
	int num;
	Hash hash;

	num = 16;
	func_425(num, iParam3);
	num = 18;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_145(hParam2, 1889502862) && func_159(hash) == 698653232)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
		else if (func_145(hParam2, 449467137) && func_159(hash) == 912453393)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
		else
		{
			func_425(num, iParam3);
		}
	}

	if (bParam1)
	{
		num = 21;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			func_425(num, iParam3);
			func_556(uParam0, false, uParam0->f_1[num /*3*/], iParam3);
		}
	
		num = 17;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
		{
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
	
		return;
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam2, 1126863852))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam2, -985549034))
		if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
			uParam0->f_1[num /*3*/].f_1 = -1539589426;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam2, -1527414429) && !func_145(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	return;
}

void func_668(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1240B Hash - 0xECEB911D ^0x9A8DDBFB
{
	int num;

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_425(num, iParam3);

	if (bParam1)
		return;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && !func_145(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 13;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 25;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam2, 675650051))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	return;
}

BOOL func_669(int iParam0) // Position - 0x1251F Hash - 0xF59F0C09 ^0x24088083
{
	return Global_1953292.f_1676.f_1[func_278(iParam0, 1) /*3*/] != Global_1953292.f_83[func_278(iParam0, 1) /*12*/];
}

void func_670(var uParam0, int iParam1) // Position - 0x12549 Hash - 0xCA6DCF0B ^0x61DC2CB2
{
	int num;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam1);
	}

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_425(num, iParam1);

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_145(uParam0->f_1[num /*3*/], -928740153))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	
		func_425(num, iParam1);
	}

	return;
}

void func_671(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x12614 Hash - 0xDFA7EB0B ^0x40890D8A
{
	int num;
	Hash hash;
	BOOL flag;
	BOOL flag2;

	if (bParam1)
		return;

	flag = false;
	flag2 = false;

	if (func_417() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag2 = true;

	if (func_417() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_159(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[num /*3*/] = func_663(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
	}

	num = 36;
	func_425(num, iParam3);

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam2, -1473580422))
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_145(hash, 1469783911))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
		}
		else if (func_563(uParam0->f_1[num /*3*/], flag2, -2081918609) != -1)
		{
			uParam0->f_1[num /*3*/].f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_159(hash) == 912453393)
		{
			flag = true;
		
			if (func_145(hParam2, 1583165364))
			{
				uParam0->f_1[num /*3*/].f_1 = -2081918609;
				func_425(num, iParam3);
			}
		}
	}

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/])
		if (func_159(hash) == 1868067663 && func_145(hParam2, -1016441646))
			func_738(uParam0, num, iParam3);
		else if (flag)
			func_425(num, iParam3);

	num = 34;

	if (1759215194 == func_159(uParam0->f_1[num /*3*/]))
		func_425(16, iParam3);

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam2, -1650340550))
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_159(hash) == 1769055947)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
	}

	return;
}

void func_672(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x128BC Hash - 0xB469B457 ^0x8B431766
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	if (func_417() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_159(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[num /*3*/] = func_663(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_145(uParam0->f_1[num /*3*/], -2093434733))
			func_678(uParam0, iParam3, true, false);
		else if (func_145(hParam2, 1718965018))
			uParam0->f_1[num /*3*/].f_1 = joaat("base");

	func_425(num, iParam3);
	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_145(hash, 1090938458) && func_145(hParam2, 475297062))
			func_738(uParam0, num, iParam3);
	}

	return;
}

void func_673(var uParam0, BOOL bParam1, int iParam2) // Position - 0x12A1D Hash - 0xBF53216D ^0xF222A515
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	func_425(36, iParam2);
	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	if (func_417() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/])
		{
			num = 16;
			uParam0->f_1[num /*3*/] = func_663(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam2);
		}
	}

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_145(hash, 353024991))
		func_738(uParam0, num, iParam2);

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_159(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	return;
}

void func_674(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x12BD2 Hash - 0xA299C777 ^0x2B6FCFBA
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_159(hash) == 294388917)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 18;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_159(hash) == 912453393)
		{
			if (uParam0->f_1[num /*3*/].f_1 != joaat("base"))
			{
				uParam0->f_1[num /*3*/].f_1 = joaat("base");
				func_425(num, iParam3);
			}
		}
		else
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_425(num, iParam3);
		}
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_145(uParam0->f_1[num /*3*/], -2093434733))
			func_678(uParam0, iParam3, true, false);
		else if (func_145(hParam2, 1718965018))
			uParam0->f_1[num /*3*/].f_1 = joaat("base");

	return;
}

void func_675(var uParam0, BOOL bParam1, int iParam2) // Position - 0x12E0D Hash - 0x1E46B0A9 ^0x1BAB244E
{
	int num;

	if (bParam1)
		return;

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_738(uParam0, num, iParam2);

	num = 21;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_145(uParam0->f_1[num /*3*/], -2093434733))
		{
			func_678(uParam0, iParam2, true, false);
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_425(num, iParam2);
		}
	}

	return;
}

void func_676(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x13005 Hash - 0x5B6170DC ^0xD9A8FB92
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 34;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_425(num, iParam3);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/].f_1 = -2081918609;
		func_425(num, iParam3);
	}

	num = 37;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hParam2, -1278198125))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (912453393 == func_159(hash) && uParam0->f_1[num /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[num /*3*/].f_1 = -2081918609;
			func_425(num, iParam3);
		}
	}

	return;
}

void func_677(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x13122 Hash - 0x24AAAC6C ^0x8A4DF257
{
	int num;

	if (bParam1)
		return;

	num = 37;

	if (func_145(hParam2, -1278198125) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam3);
	}

	return;
}

void func_678(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13181 Hash - 0x5D4D0F7B ^0xD4757168
{
	int num;

	num = 36;

	if (bParam2)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam1);
	}

	num = 37;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam1);
	}

	num = 38;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam1);
	}

	num = 35;

	if (bParam3 && -923693316 == func_159(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam1);
	}

	return;
}

void func_679(Hash hParam0, int iParam1, int iParam2) // Position - 0x13278 Hash - 0x9DADBD7B ^0xD8EA8C97
{
	Global_17418.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	return;
}

void func_680(var uParam0, int iParam1) // Position - 0x1329C Hash - 0x9E628A6B ^0xBF78A72D
{
	int i;

	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_679(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_681(BOOL bParam0, int iParam1, int iParam2) // Position - 0x132ED Hash - 0x2B8C80AA ^0xBEDF1A8D
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		Global_17418.f_55.f_664.f_33[iParam1 /*120*/] = Global_17418.f_55.f_664.f_33[iParam1 /*120*/] || bParam0;

	return;
}

BOOL func_682(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x13338 Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_62(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return false;

	if (!func_208(&outGuid, panParam2, bParam3, false, iParam4))
		return false;

	return true;
}

struct<29> func_683(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x13386 Hash - 0xAF17ACBD ^0xCD0691E1
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_62(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_689(&unk30, bParam5) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_684(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x13421 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_463(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_465(func_739(num, hParam0, panParam1), num, panParam1);
	else
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

struct<26> func_685(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1348B Hash - 0x614973B0 ^0xCAE61311
{
	var unk;
	var unk27;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk27.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_62(bParam4), &uParam0, &unk27, 24, 1))
		return unk;

	unk = { func_689(&unk27, bParam5) };
	unk.f_17 = { unk27.f_15 };
	unk.f_25 = unk27.f_23;
	return unk;
}

int func_686(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1350E Hash - 0xD42DE772 ^0x5BC8E38A
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_465(func_740(num, hParam0, panParam1), num, panParam1);
	else
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

struct<18> func_687(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1355E Hash - 0x5B9BBF8B ^0x19F03106
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_62(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_689(&unk19, bParam5) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_688(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x135D3 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_463(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_465(func_741(num, hParam0, panParam1), num, panParam1);
	else
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18), num, panParam1);

	return -1;
}

struct<17> func_689(var uParam0, BOOL bParam1) // Position - 0x1363D Hash - 0x76921103 ^0xA9DF955B
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
		unk.f_15 = func_220(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_432() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_690() // Position - 0x136BE Hash - 0xA584E02B ^0xA584E02B
{
	return func_113(Global_1051268);
}

BOOL func_691(int iParam0) // Position - 0x136D0 Hash - 0x92B1FA90 ^0xB975289D
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_692(int iParam0, int iParam1) // Position - 0x13718 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_742(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_104())
		return func_742(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_742(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_693(Player plParam0) // Position - 0x1378C Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_694(Player plParam0) // Position - 0x137A9 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_743(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_744(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_695(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1382C Hash - 0xBC161045 ^0xD3B33F74
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

	func_745(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

BOOL func_696(Hash hParam0) // Position - 0x13908 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_697() // Position - 0x13916 Hash - 0x451321BF ^0xEF0A3B85
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

struct<8> func_698(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0x1392B Hash - 0x1A324EB1 ^0xE8AB3DDD
{
	var unk;

	uParam0.f_2 = iParam5;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, &uParam0);
	return unk;
}

int func_699(int iParam0, var uParam1) // Position - 0x13949 Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_217(iParam0);

	return -1;
}

BOOL func_700() // Position - 0x13963 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

int func_701(int iParam0) // Position - 0x13972 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_747(func_746(iParam0));
}

BOOL func_702(Player plParam0) // Position - 0x13984 Hash - 0xD9DF34E9 ^0x1EDCC4EC
{
	float num;

	num = func_748(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

int func_703() // Position - 0x1399F Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_704(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x139AB Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_749(*uParam0);
	i = func_750(*uParam0);
	j = func_751(*uParam0);
	k = func_752(*uParam0);
	l = func_753(*uParam0);
	m = func_754(*uParam0);

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
	
		num3 = func_755(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_756(uParam0, m, l, k, j, i, num);
	return;
}

int func_705(int iParam0, int iParam1) // Position - 0x13B1E Hash - 0xAECFF2CE ^0x28AB7A26
{
	if (iParam1 == 2)
		iParam1 = func_701(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

int func_706(int iParam0, int iParam1) // Position - 0x13B6E Hash - 0xAECFF2CE ^0xA6B4AB7D
{
	if (iParam1 == 2)
		iParam1 = func_701(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

BOOL func_707(int iParam0, int iParam1, BOOL bParam2) // Position - 0x13BC0 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_757(iParam1) || !func_757(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_708(int iParam0, int iParam1, int iParam2) // Position - 0x13BED Hash - 0x7E1E307C ^0xC0CC80A4
{
	if (iParam2 == 2)
		iParam2 = func_701(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_709(int iParam0, int iParam1, int iParam2) // Position - 0x13C43 Hash - 0x7E1E307C ^0x81E4DDD9
{
	if (iParam2 == 2)
		iParam2 = func_701(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_710(Ped pedParam0, int iParam1, float fParam2) // Position - 0x13C99 Hash - 0xD72B3B3A ^0x22A28347
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_758(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_711(int iParam0, int iParam1, int iParam2) // Position - 0x13CEE Hash - 0x9FB0AAD8 ^0x433FFF3E
{
	if (iParam2 == 2)
		iParam2 = func_701(2);

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

void func_712(Ped pedParam0, int iParam1, float fParam2) // Position - 0x13D4F Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_759(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_760(iParam1), fParam2, -1);

	return;
}

void func_713(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x13D7B Hash - 0xD1E7435D ^0x45C01A35
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_701(2);

	num = Global_1295666.f_16;
	func_761(iParam0, fParam1, iParam3);

	if (bParam2)
		func_762(iParam0, num, iParam3);

	return;
}

BOOL func_714(int iParam0) // Position - 0x13DB1 Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_715(int iParam0) // Position - 0x13DE0 Hash - 0xFB90D1AE ^0xB8A7A5E8
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

void func_716(int iParam0) // Position - 0x13E1A Hash - 0x5D78382 ^0x8F13B3A8
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
		num3 = func_763(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_764(num);
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

void func_717(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13EEA Hash - 0x5C29635D ^0x5C29635D
{
	func_621(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

BOOL func_718(int iParam0, BOOL bParam1) // Position - 0x13F04 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_707(func_703(), iParam0, bParam1);
}

float func_719(int iParam0, int iParam1) // Position - 0x13F18 Hash - 0x422268C7 ^0x22464E0E
{
	if (iParam1 == 2)
		iParam1 = func_701(1);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_26[iParam0];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_26[iParam0];
	
		default:
		
	}

	return -1f;
}

int func_720(float fParam0) // Position - 0x13F64 Hash - 0x991CF40A ^0x6EC613A5
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_721(float fParam0, float fParam1, float fParam2) // Position - 0x13F8F Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_722(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x13FB6 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_749(*iParam0);
	i = func_750(*iParam0);
	num2 = func_751(*iParam0);
	j = func_752(*iParam0);
	k = func_753(*iParam0);
	l = func_754(*iParam0);

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

	for (m = func_755(i, num); num2 > m; m = func_755(i, num))
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

	func_756(iParam0, l, k, j, num2, i, num);
	return;
}

int func_723(int iParam0, float fParam1, int iParam2) // Position - 0x1413F Hash - 0x91D240B ^0x31A81242
{
	if (!func_765(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_701(2);

	func_766(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

BOOL func_724(Hash hParam0, Hash hParam1) // Position - 0x14190 Hash - 0xCB56AA2F ^0x760BB648
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

int func_725(Hash hParam0, int iParam1) // Position - 0x141B7 Hash - 0x193BF536 ^0xD3271214
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

char* func_726(Hash hParam0) // Position - 0x14205 Hash - 0xCA1D700 ^0x470B3C64
{
	Hash labelHash;

	if (!func_125(hParam0, 0))
		return "";

	labelHash = func_536(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

char* func_727(Hash hParam0) // Position - 0x14239 Hash - 0x3E227180 ^0x42691714
{
	Hash labelHash;

	if (!func_125(hParam0, 0))
		return "";

	labelHash = func_632(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

Ped func_728(int iParam0) // Position - 0x1426C Hash - 0x829B7265 ^0xE21C4F30
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_729(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1427C Hash - 0x586BF778 ^0x586BF778
{
	int num;

	num = func_376(hParam1, bParam2, false, false);
	num = num + func_767(pedParam0, hParam1);

	if (bParam3)
		num = num + func_768(hParam1, bParam4);

	return num;
}

void func_730(int iParam0) // Position - 0x142B1 Hash - 0x1B4614B0 ^0x73E476F0
{
	if (!func_125(Global_1940252.f_11588, 0))
		Global_1940252.f_7 = iParam0;
	else if (func_238(Global_1940252.f_11588, 1224357681) != 0 && Global_1940252.f_11587 != 0 && Global_1940252.f_11587 != -2074770370 && !Global_1915656.f_20638 && !Global_1915656.f_22504.f_1)
		Global_1940252.f_7 = 1;
	else
		Global_1940252.f_7 = 0;

	return;
}

int func_731(int iParam0) // Position - 0x14336 Hash - 0x34CDD129 ^0x4B6C5D
{
	switch (iParam0)
	{
		case -1932005642:
			return 131072;
	
		case -1925540957:
			return 65536;
	
		case -1886898087:
			return 32880;
	
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
	
		case -1678578495:
			return 32768;
	
		case -1629261761:
			return 2049;
	
		case -1283403230:
			return 4096;
	
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
	
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
	
		case -1062102573:
			return 65601;
	
		case -915377750:
			return 2048;
	
		case -884591393:
			return 96;
	
		case -803648582:
			return 128;
	
		case -663436545:
			return 112;
	
		case -597281578:
			return 524288;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
	
		case -376594188:
			return -1;
	
		case -366477279:
			return 0;
	
		case -141044514:
			return 8304;
	
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
	
		case 75507907:
			return 16384;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
	
		case 351949263:
			return 262144;
	
		case 396349281:
			return 2097152;
	
		case 465720259:
			return 1048576;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
	
		case 836721350:
			return 40960;
	
		case 884232794:
			return 16496;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
	
		case 1024778115:
			return 8192;
	
		case 1042019528:
			return 2160;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
	
		case 2050534155:
			return 48;
	
		default:
		
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
void func_732(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x144D7 Hash - 0x7FE551F ^0xCF526C14
{
	int i;
	Hash hash;
	Hash hash2;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_769(&uParam0->f_1[i /*3*/], 2))
		{
			if (func_770(i, iParam1))
			{
				hash2 = { func_771(i, -1) };
			
				if (!bParam4 && hash2 != Global_1953292.f_83[i /*12*/] && hash2 != 0 && uParam0->f_1[i /*3*/] != hash2 || uParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					uParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_772(i, 4))
					func_773(i, 4, 6);
			}
			else
			{
				if (bParam3)
					func_774(i, 4, 6);
			
				goto 0xCD;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1953292.f_83[i /*12*/];
			uParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

void func_733(Hash hParam0, int iParam1, int iParam2) // Position - 0x145B0 Hash - 0x10354A04 ^0x626AEEF7
{
	Global_1953292.f_83[func_278(hParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_278(hParam0, 1) /*12*/].f_11 || iParam1;
	return;
}

BOOL func_734(Hash hParam0) // Position - 0x145DD Hash - 0xA5B8FD07 ^0xA62D1647
{
	int num;
	var unk;

	Global_1953292.f_1039.f_2 = 0;
	num = 1226838104;
	func_652(&(Global_1953292.f_1039), num, -367421157, 1409451727, 1, hParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953292.f_1039));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1953292.f_1039), 1409451727))
		return false;

	return true;
}

int func_735(Hash hParam0) // Position - 0x14636 Hash - 0xE1F3DDAE ^0x5813B139
{
	var outData;
	int num;

	if (!func_125(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, 761377030, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

void func_736(var uParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x14670 Hash - 0x5B22F0B4 ^0xB19405C9
{
	int i;
	BOOL flag;

	if (func_145(uParam0->f_1[34 /*3*/], -166674229))
		return;

	for (i = 0; i < 39; i = i + 1)
	{
		flag = func_772(i, 16);
	
		if (flag)
			func_773(i, 16, 9);
	
		if (Global_1953292.f_83[i /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[i /*3*/] == 0)
		{
		}
		else
		{
			if (flag)
				func_425(i, iParam3);
		
			if (!bParam2 && func_735(uParam0->f_1[i /*3*/]) != 0)
			{
			}
			else if (func_770(i, iParam1) && !flag)
			{
				uParam0->f_1[i /*3*/] = Global_1953292.f_83[i /*12*/];
				uParam0->f_1[i /*3*/].f_1 = 0;
				func_427(uParam0, uParam0->f_1[i /*3*/], i, true, iParam3);
				func_425(i, iParam3);
			}
			else if (flag && !bParam2)
			{
				func_427(uParam0, uParam0->f_1[i /*3*/], i, false, iParam3);
			}
		}
	}

	return;
}

int func_737(int iParam0, int iParam1, int iParam2) // Position - 0x1477C Hash - 0xFE41A884 ^0x917B03C
{
	int i;
	var unk;
	Hash hash;
	int metapedType;

	unk.f_9 = joaat("SLOTID_NONE");
	metapedType = 0;

	if (func_417() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	iParam2 = iParam2 | 28;

	for (i = 0; i < iParam1; i = i + 1)
	{
		if (!func_476(&unk, i, iParam0, iParam1))
		{
		}
		else if (func_775(unk.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(unk.f_4, metapedType, true) == 0)
		{
		}
		else if (func_735(unk.f_4) != 0)
		{
		}
		else if (func_145(unk.f_4, -166674229))
		{
		}
		else if (func_145(unk.f_4, 525391395))
		{
		}
		else
		{
			hash = func_159(unk.f_4);
		
			if (func_777(iParam2, func_776(hash)))
			{
			}
			else
			{
				return unk.f_4;
			}
		}
	}

	return 0;
}

void func_738(var uParam0, int iParam1, int iParam2) // Position - 0x14849 Hash - 0x9F574CE5 ^0xC9B47479
{
	int num;

	if (func_145(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_546(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953292.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_425(iParam1, iParam2);
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_425(num, iParam2);
	}

	return;
}

BOOL func_739(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x148DD Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_740(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x148F4 Hash - 0xB063C902 ^0x8DB8ACCE
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

BOOL func_741(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1490B Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_742(Any* panParam0, int iParam1, int iParam2) // Position - 0x14922 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

void func_743(Player plParam0) // Position - 0x14959 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_744(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_744(Player plParam0) // Position - 0x149C5 Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

void func_745(int iParam0) // Position - 0x14A00 Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_778(&(iParam0->f_4));
	return;
}

BOOL func_746(int iParam0) // Position - 0x14A23 Hash - 0x745CE6FE ^0x745CE6FE
{
	return func_742(&(Global_1956875.f_1565), iParam0, 1);
}

int func_747(BOOL bParam0) // Position - 0x14A39 Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return 1;

	return 0;
}

float func_748(Player plParam0) // Position - 0x14A4B Hash - 0x67CAB99C ^0xC9B69B05
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_779(2);
}

int func_749(int iParam0) // Position - 0x14A61 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_750(int iParam0) // Position - 0x14A86 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_751(int iParam0) // Position - 0x14A99 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_752(int iParam0) // Position - 0x14AAC Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_753(int iParam0) // Position - 0x14ABF Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_754(int iParam0) // Position - 0x14AD1 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_755(int iParam0, int iParam1) // Position - 0x14AE3 Hash - 0x893AC59E ^0x893AC59E
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

void func_756(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x14B7D Hash - 0xA65AB937 ^0xA65AB937
{
	func_781(iParam0, iParam6);
	func_782(iParam0, iParam5);
	func_783(iParam0, iParam4);
	func_784(iParam0, iParam3);
	func_785(iParam0, iParam2);
	func_786(iParam0, iParam1);
	return;
}

BOOL func_757(int iParam0) // Position - 0x14BB5 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_754(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_753(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_752(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_749(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_750(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_751(iParam0);

	if (num6 < 1 || num6 > func_755(num5, num4))
		return false;

	return true;
}

int func_758(int iParam0) // Position - 0x14C91 Hash - 0x26AB94C2 ^0x26AB94C2
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

char* func_759(int iParam0) // Position - 0x14CC0 Hash - 0xFB90D1AE ^0x453DC3AE
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

char* func_760(int iParam0) // Position - 0x14CFA Hash - 0xFB90D1AE ^0x11573F8F
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

void func_761(int iParam0, float fParam1, int iParam2) // Position - 0x14D34 Hash - 0xB327C991 ^0xFEB529B
{
	if (iParam2 == 2)
		iParam2 = func_701(2);

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

void func_762(int iParam0, int iParam1, int iParam2) // Position - 0x14D86 Hash - 0x7E1E307C ^0x5642EBD7
{
	if (iParam2 == 2)
		iParam2 = func_701(2);

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

int func_763(int iParam0, int iParam1) // Position - 0x14DDC Hash - 0x26934C66 ^0x26934C66
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
int func_764(int iParam0) // Position - 0x155DD Hash - 0x85160494 ^0x6688B38
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_787(iParam0))
		return 0;

	num = func_763(iParam0, 1);

	if (!func_788(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_789(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_790(iParam0, num2))
		{
			case 0:
				func_791(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_791(num2, iParam0, i);
						func_792(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_792(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_793(num2, 1);
		func_794(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_795(num3, 0);
		
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
	func_796(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

BOOL func_765(int iParam0) // Position - 0x1586D Hash - 0x969D658D ^0x969D658D
{
	if (func_714(iParam0))
		return true;
	else if (func_797(iParam0))
		return true;

	return false;
}

void func_766(int iParam0, float fParam1, int iParam2) // Position - 0x15893 Hash - 0xF69206DE ^0x1EC60A3A
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_701(1);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_26[iParam0] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_767(Ped pedParam0, Hash hParam1) // Position - 0x158EF Hash - 0x83F00AF7 ^0x32031FF8
{
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (func_798(hParam1))
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
			return func_799(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
		}
	}

	return 0;
}

int func_768(Hash hParam0, BOOL bParam1) // Position - 0x1594D Hash - 0x19ACB934 ^0xDEF82372
{
	if (!bParam1 || func_800())
		return func_285(hParam0, func_286(true), -2015960939, true, true, false);

	return 0;
}

BOOL func_769(var uParam0, int iParam1) // Position - 0x1597C Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_770(int iParam0, int iParam1) // Position - 0x1598D Hash - 0xEE6DCA90 ^0xB0C7528A
{
	if (iParam0 < 0 || iParam0 >= 39)
		return false;

	return Global_1953292.f_83[iParam0 /*12*/].f_10 && iParam1 != false;
}

Vector3 func_771(int iParam0, int iParam1) // Position - 0x159BC Hash - 0xC0396140 ^0x90919964
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

BOOL func_772(int iParam0, int iParam1) // Position - 0x159EF Hash - 0xECB143B0 ^0xBA414228
{
	return Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1 != false;
}

void func_773(int iParam0, int iParam1, int iParam2) // Position - 0x15A08 Hash - 0xF59FAE7F ^0x9B3AA80E
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 - Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1;
	return;
}

void func_774(int iParam0, int iParam1, int iParam2) // Position - 0x15A38 Hash - 0x5033A276 ^0xAD3736DE
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 || iParam1;
	return;
}

BOOL func_775(Hash hParam0) // Position - 0x15A5B Hash - 0x620CA239 ^0xCC576E0
{
	return hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != -230310728 && hParam0 != 1326838792 && !func_647(hParam0);
}

int func_776(Hash hParam0) // Position - 0x15A91 Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case -1740828670:
			return 8;
	
		case 344283346:
			return 16;
	
		case 502936876:
			return 1;
	
		case 684307653:
			return 2;
	
		case 1759215194:
			return 4;
	
		default:
		
	}

	return 0;
}

BOOL func_777(int iParam0, int iParam1) // Position - 0x15AD6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_778(var uParam0) // Position - 0x15AE5 Hash - 0x58FD8C3D ^0x7E71AD66
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

int func_779(int iParam0) // Position - 0x15B40 Hash - 0xF103C6A6 ^0xF103C6A6
{
	switch (iParam0)
	{
		case 0:
			return func_613(2) * 2;
	
		case 1:
			return func_617(2) * 2;
	
		case 2:
			return func_615(2) * 2;
	
		default:
		
	}

	return -1;
}

var func_780(BOOL bParam0, var uParam1, var uParam2) // Position - 0x15B81 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_781(var uParam0, int iParam1) // Position - 0x15B98 Hash - 0xD05180BA ^0x39589262
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

void func_782(var uParam0, int iParam1) // Position - 0x15C1E Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_783(var uParam0, int iParam1) // Position - 0x15C5A Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_750(*uParam0);
	num2 = func_749(*uParam0);

	if (iParam1 < 1 || iParam1 > func_755(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_784(var uParam0, int iParam1) // Position - 0x15CAD Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_785(var uParam0, int iParam1) // Position - 0x15CE8 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_786(var uParam0, int iParam1) // Position - 0x15D21 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_787(int iParam0) // Position - 0x15D59 Hash - 0xFFB3C2F0 ^0xFFB3C2F0
{
	int num;

	num = func_763(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_788(int iParam0) // Position - 0x15D81 Hash - 0x2BE93DAE ^0x2BE93DAE
{
	int num;

	num = func_789(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

int func_789(int iParam0, int iParam1) // Position - 0x15DA9 Hash - 0x89B5041A ^0x89B5041A
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

int func_790(int iParam0, int iParam1) // Position - 0x16460 Hash - 0x39669B5F ^0xB47C98D2
{
	Player player;
	Player player2;
	int num;

	player = func_801(iParam0);
	player2 = Global_1295666;
	num = func_793(iParam1, 1);

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

int func_791(int iParam0, int iParam1, int iParam2) // Position - 0x164E3 Hash - 0xE22C7CA2 ^0xE22C7CA2
{
	int num;
	int num2;

	if (!func_787(iParam1))
		return 0;

	if (!func_802(iParam0))
		return 0;

	num = func_793(iParam0, 1);
	func_803(iParam0, iParam1, iParam2);

	if (func_804(Global_1156111.f_35859.f_3116[num /*31*/]) && func_805(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_806(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_807(num2))
			if (func_808(num2, num2.f_1, num2.f_2))
				func_809(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_810(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_810(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_792(int iParam0) // Position - 0x165DB Hash - 0xBACBE486 ^0xD8F73B9E
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_793(int iParam0, int iParam1) // Position - 0x165F1 Hash - 0x9DD4188 ^0x9DD4188
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

void func_794(int iParam0, int iParam1) // Position - 0x16EA2 Hash - 0x73AEC1AE ^0x984E1AE9
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_795(int iParam0, int iParam1) // Position - 0x16ED1 Hash - 0x3B92C3EA ^0xE3D6CCE1
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_796(int iParam0) // Position - 0x16EED Hash - 0x430DB350 ^0x725C69ED
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

BOOL func_797(int iParam0) // Position - 0x16F1B Hash - 0x830CD3BA ^0x830CD3BA
{
	switch (iParam0)
	{
		case 12:
			return true;
	
		case 13:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_798(Hash hParam0) // Position - 0x16F40 Hash - 0xDB8363F2 ^0xB30A7F5C
{
	if (!func_633(hParam0, 1955773996))
		return false;

	if (!func_811(hParam0, 1))
		return false;

	return true;
}

int func_799(int iParam0, Hash hParam1) // Position - 0x16F6B Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_125(hParam1, 0))
		return 0;

	guid = { func_812(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_800() // Position - 0x16FA9 Hash - 0xC82BB3B3 ^0x6740E474
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_813(vehicleOwnedByPlayer))
		return false;

	return true;
}

Player func_801(int iParam0) // Position - 0x16FF8 Hash - 0xF3F3BDC0 ^0xF3F3BDC0
{
	if (func_814(iParam0))
		return func_815(iParam0) % 32;

	return Global_1295666;
}

BOOL func_802(int iParam0) // Position - 0x17019 Hash - 0xE6FB7F28 ^0xE6FB7F28
{
	int num;

	num = func_793(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

int func_803(int iParam0, int iParam1, int iParam2) // Position - 0x17041 Hash - 0xAE2CC17B ^0x2CD7F4CE
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

	num = func_763(iParam1, 1);
	num2 = func_793(iParam0, 1);
	num3 = func_789(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return 0;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return 1;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_816(num4, 1);
	
		if (!func_817(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_818(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_819(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_820(num6))
		{
		}
		else
		{
			num7 = func_821(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_822(num6);
			}
		}
	}

	return 1;
}

BOOL func_804(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x17232 Hash - 0x911ECD26 ^0x92039873
{
	return uParam0.f_4 != 0;
}

BOOL func_805(int iParam0, int iParam1) // Position - 0x17240 Hash - 0xBA8D4E8F ^0x2A068003
{
	int num;

	if (!func_802(iParam0))
		return false;

	if (!func_823(iParam1))
		return false;

	num = func_824(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_806(int iParam0) // Position - 0x17280 Hash - 0x4827F1DB ^0x96104558
{
	int num;
	var unk;

	num = func_825(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_807(int iParam0, var uParam1, var uParam2) // Position - 0x172BC Hash - 0xB201D59F ^0xA3399F39
{
	if (!func_802(iParam0))
		return false;

	if (!func_787(iParam0.f_1))
		return false;

	if (!func_826(iParam0.f_2))
		return false;

	return true;
}

BOOL func_808(int iParam0, int iParam1, int iParam2) // Position - 0x172F3 Hash - 0xAE2CC17B ^0x2CD7F4CE
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

	num = func_763(iParam1, 1);
	num2 = func_793(iParam0, 1);
	num3 = func_789(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_816(num4, 1);
	
		if (!func_817(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_818(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_827(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_820(num6))
		{
		}
		else if (!func_828(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_821(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_829(num6);
			}
		}
	}

	func_830(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_809(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x17521 Hash - 0x562CA30C ^0x562CA30C
{
	int num;

	if (!func_823(iParam0))
		return;

	num = func_824(iParam0, 1);

	if (!func_802(iParam1))
		return;

	if (!func_787(iParam2))
		return;

	if (!func_826(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_810(int iParam0) // Position - 0x175A0 Hash - 0x9AA5A92B ^0xCC01F112
{
	int num;

	if (!func_823(iParam0))
		return;

	num = func_824(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

BOOL func_811(Hash hParam0, int iParam1) // Position - 0x175F5 Hash - 0xC9BD5171 ^0xC9BD5171
{
	int num;

	num = func_831(hParam0);

	if (num == -1)
		return false;

	return num > iParam1;
}

struct<4> func_812(int iParam0, Hash hParam1) // Position - 0x17614 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_832(iParam0) };
	return func_833(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_813(Vehicle veParam0) // Position - 0x17636 Hash - 0xDEF9F967 ^0x717FC3F4
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("huntercart01"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_814(int iParam0) // Position - 0x17655 Hash - 0x56C0B35E ^0x56C0B35E
{
	int num;

	num = func_763(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

int func_815(int iParam0) // Position - 0x1767C Hash - 0x37C30FDA ^0x37C30FDA
{
	int num;

	num = func_763(iParam0, 1);

	if (func_814(iParam0))
		return num - 2;
	else if (func_834(iParam0))
		return num - 130;
	else if (func_835(iParam0))
		return num - 166;
	else if (func_836(iParam0))
		return num - 167;
	else if (func_837(iParam0))
		return num - 172;
	else if (func_838(iParam0))
		return num - 180;
	else if (func_839(iParam0))
		return num - 150;

	return -1;
}

int func_816(int iParam0, int iParam1) // Position - 0x17716 Hash - 0x40BB17AB ^0x40BB17AB
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

BOOL func_817(int iParam0) // Position - 0x17B4F Hash - 0x2139C0B7 ^0x2139C0B7
{
	int num;

	num = func_816(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_818(int iParam0) // Position - 0x17B77 Hash - 0xA8A8D579 ^0x9F2476FB
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_840(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_819(int iParam0) // Position - 0x17BA6 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_817(iParam0))
		return;

	num = func_816(iParam0, 1);

	if (!func_841(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_842(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_843(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_820(int iParam0) // Position - 0x17D85 Hash - 0xD61CC19E ^0xD61CC19E
{
	int num;

	num = func_821(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_821(int iParam0, int iParam1) // Position - 0x17DAD Hash - 0x49B3A5C3 ^0x49B3A5C3
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

void func_822(int iParam0) // Position - 0x180BD Hash - 0xFC2A3E07 ^0xFD4CE356
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_845();
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
			func_844();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_848(func_847(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_841(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_841(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_846(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_846(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_180(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_846(iParam0));
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
			func_849();
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
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_846(iParam0));
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

BOOL func_823(int iParam0) // Position - 0x182CC Hash - 0x13096A7F ^0x13096A7F
{
	int num;

	num = func_824(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_824(int iParam0, int iParam1) // Position - 0x182F3 Hash - 0xD3D45784 ^0xD3D45784
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

int func_825(int iParam0) // Position - 0x18350 Hash - 0x76D9051B ^0xE68FE534
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_850(iParam0);
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
		num3 = func_793(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_851(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_852(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

BOOL func_826(int iParam0) // Position - 0x18494 Hash - 0x7B05DC41 ^0x7B05DC41
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

void func_827(int iParam0) // Position - 0x184B2 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_817(iParam0))
		return;

	num = func_816(iParam0, 1);

	if (!func_841(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_842(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_843(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_828(int iParam0) // Position - 0x18607 Hash - 0x9886804F ^0x893AF3E4
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_853(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_829(int iParam0) // Position - 0x18630 Hash - 0xE1E3399D ^0xAAA920BB
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
			func_845();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_844();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_847(iParam0);
			func_855(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_841(16);
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
			func_841(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_846(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_846(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_180(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_847(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_854(iParam0, 0));
			func_855(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_854(iParam0, 1));
			func_855(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_854(iParam0, 2));
			func_855(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_854(iParam0, 3));
			func_855(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_846(iParam0));
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
			func_856();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_847(iParam0);
			func_855(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_846(iParam0));
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

void func_830(int iParam0) // Position - 0x188CB Hash - 0x4D7CA01F ^0xE11E9732
{
	char* audioName;
	char* audioRef;

	if (iParam0 == 0)
		return;

	audioName = func_857(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioName))
		return;

	audioRef = func_858(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioRef))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(audioName, Global_1295666.f_3, audioRef, false, 0, 0);
	return;
}

int func_831(Hash hParam0) // Position - 0x18915 Hash - 0x1E74E236 ^0xF004CA87
{
	int outSatchelItemSize;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	return outSatchelItemSize;
}

struct<5> func_832(int iParam0) // Position - 0x1892F Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_833(iParam0, joaat("character"), func_432(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_833(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x1895C Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_125(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

BOOL func_834(int iParam0) // Position - 0x18989 Hash - 0xCDD61996 ^0xCDD61996
{
	int num;

	num = func_763(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_835(int iParam0) // Position - 0x189B1 Hash - 0x5052208B ^0x5052208B
{
	int num;

	num = func_763(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_836(int iParam0) // Position - 0x189D9 Hash - 0x7F6CD4C4 ^0x7F6CD4C4
{
	int num;

	num = func_763(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_837(int iParam0) // Position - 0x18A01 Hash - 0xD766BF57 ^0xD766BF57
{
	int num;

	num = func_763(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_838(int iParam0) // Position - 0x18A29 Hash - 0x58B99E54 ^0x58B99E54
{
	int num;

	num = func_763(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_839(int iParam0) // Position - 0x18A51 Hash - 0xA1A1461E ^0xA1A1461E
{
	int num;

	num = func_763(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

float func_840(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x18A79 Hash - 0xFE4D9153 ^0xACBF575D
{
	var unk;
	float num;

	if (func_859(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_841(int iParam0) // Position - 0x18AAF Hash - 0xCFB57BFC ^0xD6F1E06
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

BOOL func_842(int iParam0) // Position - 0x18B1E Hash - 0x3374FEFF ^0x3374FEFF
{
	int num;

	num = func_843(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_843(int iParam0, int iParam1) // Position - 0x18B45 Hash - 0xAF8796DC ^0xAF8796DC
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

void func_844() // Position - 0x18BA2 Hash - 0x8482C9D6 ^0xF644936D
{
	BOOL value;
	BOOL value2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, value);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_304(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			value2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, value2);
	return;
}

void func_845() // Position - 0x18C04 Hash - 0x1EC790D6 ^0xC31DC9FE
{
	BOOL value;

	value = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, value);
	return;
}

char* func_846(int iParam0) // Position - 0x18C34 Hash - 0x769F9DA5 ^0x7EB0AC17
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

int func_847(int iParam0) // Position - 0x18C7B Hash - 0x21FAF347 ^0xA1AE9E4F
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

void func_848(int iParam0) // Position - 0x18CB6 Hash - 0x2CE3A2A0 ^0xF0457356
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

void func_849() // Position - 0x18CF6 Hash - 0xFDAE0587 ^0x5AB4C733
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

int func_850(int iParam0) // Position - 0x18D16 Hash - 0x7AD8D3DF ^0x2C577CC4
{
	int num;

	if (!func_823(iParam0))
		return -1;

	num = func_824(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_851(int iParam0, int iParam1) // Position - 0x18D45 Hash - 0xB2431B7B ^0xEC29640E
{
	int num;
	Player player;
	int num2;
	int num3;
	var unk;

	if (!func_802(iParam0))
		return false;

	num = func_793(iParam0, 1);
	num2 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_804(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num3 = Global_1156111.f_35859.f_9286[func_824(num2, 1) /*3*/];
		unk = { func_852(num3) };
	
		if (num3 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			player = func_801(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			player = func_801(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_860())
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
		
			player = func_801(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			player = func_801(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (player != Global_1295666 && !func_584(Global_1295666.f_149[player]))
				return false;
		
			if (!func_575(512, player))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_860() && !func_861())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_852(int iParam0) // Position - 0x1901A Hash - 0xCDBF4D5E ^0x8519EC8B
{
	int num;

	num = func_793(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_853(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0x1903E Hash - 0xFE4D9153 ^0x67064BE4
{
	var unk;
	BOOL flag;

	if (func_859(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_854(int iParam0, int iParam1) // Position - 0x19074 Hash - 0x55E6586F ^0xEC0529DB
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

void func_855(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x190CC Hash - 0x4DFFD3F3 ^0xFBF31414
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

void func_856() // Position - 0x19151 Hash - 0x54572B7C ^0x904B9528
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_857(int iParam0) // Position - 0x19176 Hash - 0xAF3578AA ^0xE48FD15D
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_858(int iParam0) // Position - 0x19196 Hash - 0xAF3578AA ^0x63A022B7
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_859(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x191B6 Hash - 0xBD123D0 ^0xD5CDFAB
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
		uParam2->f_10.f_3 = func_862(num2);
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

BOOL func_860() // Position - 0x193D7 Hash - 0x4228A1C2 ^0x4A2C267D
{
	return Global_1572887.f_7;
}

BOOL func_861() // Position - 0x193E5 Hash - 0x7C45C36E ^0x2F146C3F
{
	if (!Global_1048577)
		return false;

	if (!func_113(func_112(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_691(*Global_524288.f_39632))
		return true;

	return false;
}

int func_862(int iParam0) // Position - 0x19430 Hash - 0xF3C27EA9 ^0xF3C27EA9
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

