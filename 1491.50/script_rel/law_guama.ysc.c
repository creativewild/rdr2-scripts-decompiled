#region Local Var
	var uLocal_0 = -384354290;
	var uLocal_1 = -384354290;
	var uLocal_2 = -1230516683;
	var uLocal_3 = 0;
	var uLocal_4 = 3;
	var uLocal_5 = -384354290;
	var uLocal_6 = -384354290;
	var uLocal_7 = -1230516683;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 5;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 5;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 4;
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
	var uLocal_39 = -1082130432;
	var uLocal_40 = 5000;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -384354290;
	var uLocal_48 = -384354290;
	var uLocal_49 = -1230516683;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 5;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 5;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 4;
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
	var uLocal_81 = -1082130432;
	var uLocal_82 = 5000;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = -384354290;
	var uLocal_90 = -384354290;
	var uLocal_91 = -1230516683;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 5;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 5;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 4;
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
	var uLocal_123 = -1082130432;
	var uLocal_124 = 5000;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 1;
	var uLocal_133 = -1;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	BOOL bLocal_136 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x99775FB2 ^0xBAEF685D
{
	BOOL flag;

	uScriptParam_0 = uScriptParam_0;
	func_1(&uLocal_0);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_2(&uLocal_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (true)
	{
		if (!func_3(0, false, true) || Global_1415405.f_5)
			flag = true;
	
		if (func_4(&uLocal_0))
		{
			func_5(&uLocal_0);
		}
		else if (flag)
		{
			if (!bLocal_136)
				if (func_6(&uLocal_0))
					bLocal_136 = true;
		
			if (Global_1415405.f_4)
				if (!LAW::_0xF46108C50A22B029())
					LAW::_0x7803436E68C32B26();
			else if (LAW::_0xF46108C50A22B029())
				LAW::_0x29CD4896ECB66C12();
		
			func_5(&uLocal_0);
		}
		else if (bLocal_136)
		{
			if (func_7(&uLocal_0))
			{
				if (LAW::_0xF46108C50A22B029())
					LAW::_0x29CD4896ECB66C12();
			
				bLocal_136 = false;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1(var uParam0) // Position - 0xBD Hash - 0xD1FAA0D9 ^0x8A4E318A
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		uParam0->f_4[i /*42*/].f_29 = i;
	}

	return;
}

void func_2(var uParam0) // Position - 0xE3 Hash - 0xC70A7068 ^0x83DCB54A
{
	int i;

	if (LAW::_0xF46108C50A22B029())
		LAW::_0x29CD4896ECB66C12();

	for (i = 0; i < 3; i = i + 1)
	{
		func_8(&uParam0->f_4[i /*42*/], uParam0);
		func_9(&uParam0->f_4[i /*42*/], 0);
	}

	func_10(uParam0);
	return;
}

BOOL func_3(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x129 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_11())
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
		num = func_12(Global_1898164.f_1[0 /*5*/]);
	
		if (func_13(num) && func_14(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_15(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_4(var uParam0) // Position - 0x32D Hash - 0x2D5EB02B ^0xC5B5DC7F
{
	if (uParam0->f_3 == 4)
		return true;

	return false;
}

void func_5(var uParam0) // Position - 0x342 Hash - 0xB3453B53 ^0x3BE9EAC0
{
	switch (uParam0->f_3)
	{
		case 1:
			if (func_16(uParam0))
				func_17(uParam0, 2);
			break;
	
		case 2:
			func_18(uParam0, 1);
			func_17(uParam0, 3);
			break;
	
		case 3:
			if (!func_19(uParam0, false))
				func_17(uParam0, 0);
			break;
	
		case 4:
			if (!func_19(uParam0, true))
			{
				func_10(uParam0);
				func_17(uParam0, 0);
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_6(var uParam0) // Position - 0x3C3 Hash - 0x36680C55 ^0x2CEB059C
{
	if (uParam0->f_3 == 0)
	{
		func_17(uParam0, 1);
		return true;
	}

	return false;
}

BOOL func_7(var uParam0) // Position - 0x3DF Hash - 0xA5A819FE ^0x228ADF2F
{
	if (uParam0->f_3 == 3)
	{
		func_17(uParam0, 4);
		func_20(uParam0);
		return true;
	}

	return false;
}

void func_8(var uParam0, var uParam1) // Position - 0x401 Hash - 0xC7BABAC2 ^0x436720F4
{
	if (PED::DOES_GROUP_EXIST(uParam0->f_18))
		PED::REMOVE_GROUP(uParam0->f_18);

	if (func_21(uParam0->f_3))
	{
		func_22(uParam0->f_3);
		func_23(uParam0->f_3);
	}

	func_24(uParam0);
	MISC::CLEAR_BIT(&(uParam1->f_134), uParam0->f_41);

	if (MAP::DOES_BLIP_EXIST(uParam0->f_21))
		MAP::REMOVE_BLIP(&(uParam0->f_21));

	if (func_25(&(uParam0->f_36)))
		func_26(&(uParam0->f_36));

	if (func_25(&(uParam0->f_30)))
		func_26(&(uParam0->f_30));

	if (func_27(uParam0->f_30.f_3))
		func_28(&(uParam0->f_30.f_3), true, true);

	return;
}

void func_9(var uParam0, int iParam1) // Position - 0x4A1 Hash - 0x4F8BE4B5 ^0x42D701FD
{
	uParam0->f_20 = iParam1;
	return;
}

void func_10(var uParam0) // Position - 0x4AF Hash - 0x5631B91F ^0xE6BE9422
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_2);
	return;
}

BOOL func_11() // Position - 0x4CE Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_12(int iParam0) // Position - 0x521 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_15(iParam0))
		return -1;

	return func_30(func_29(iParam0));
}

BOOL func_13(int iParam0) // Position - 0x541 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x557 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_15(int iParam0) // Position - 0x566 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_16(var uParam0) // Position - 0x599 Hash - 0x78B0B2C0 ^0xD5F151F0
{
	STREAMING::REQUEST_MODEL(*uParam0, false);
	STREAMING::REQUEST_MODEL(uParam0->f_1, false);
	STREAMING::REQUEST_MODEL(uParam0->f_2, false);

	if (!STREAMING::HAS_MODEL_LOADED(*uParam0) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_1) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_2))
		return false;

	return true;
}

void func_17(var uParam0, int iParam1) // Position - 0x5E9 Hash - 0x516CE1EC ^0x9886A3E3
{
	if (iParam1 == 4)
		func_18(uParam0, 12);

	uParam0->f_3 = iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x605 Hash - 0x5C0AB330 ^0xB57F7AD0
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_9(&uParam0->f_4[i /*42*/], iParam1);
	}

	return;
}

BOOL func_19(var uParam0, BOOL bParam1) // Position - 0x62D Hash - 0xDBE775D7 ^0x99A674F9
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_31(&uParam0->f_4[i /*42*/], uParam0);
	}

	if (!bParam1)
		if (func_32(uParam0, 0))
			return false;
	else if (func_33(uParam0))
		return false;

	return true;
}

void func_20(var uParam0) // Position - 0x67A Hash - 0xCC75B87D ^0xCC75B87D
{
	func_34();
	return;
}

BOOL func_21(ItemSet isParam0, var uParam1) // Position - 0x686 Hash - 0x9967FFCD ^0x430CBEB2
{
	return ITEMSET::IS_ITEMSET_VALID(isParam0);
}

void func_22(var uParam0, var uParam1) // Position - 0x694 Hash - 0x3B472572 ^0x3B472572
{
	int i;
	int num;
	ScrHandle handle;

	if (!func_21(uParam0))
		return;

	num = func_35(uParam0);

	for (i = 0; i < num; i = i + 1)
	{
		func_36(uParam0);
		handle = func_37(uParam0, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(handle))
			func_38(&handle, false);
	}

	return;
}

void func_23(ItemSet isParam0, var uParam1) // Position - 0x6EB Hash - 0xC13C9640 ^0x5AD70346
{
	if (ITEMSET::IS_ITEMSET_VALID(isParam0))
		ITEMSET::DESTROY_ITEMSET(isParam0);

	return;
}

void func_24(var uParam0) // Position - 0x702 Hash - 0xDBE847DB ^0x888D4945
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[i]))
			func_38(&uParam0->f_5[i], false);
	}

	return;
}

BOOL func_25(var uParam0) // Position - 0x738 Hash - 0x5001E582 ^0x5001E582
{
	return func_39(*uParam0, 1);
}

void func_26(var uParam0) // Position - 0x748 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_27(int iParam0) // Position - 0x75E Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_28(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x79D Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_27(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_40(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_41(num);
	*uParam0 = 0;
	return;
}

BOOL func_29(int iParam0) // Position - 0x7F1 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_30(BOOL bParam0) // Position - 0x82F Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

void func_31(var uParam0, var uParam1) // Position - 0x842 Hash - 0x7C9A592C ^0xC496EE2E
{
	BOOL flag;

	switch (uParam0->f_20)
	{
		case 1:
			if (func_42(uParam0, uParam1, false))
				func_9(uParam0, 4);
			break;
	
		case 4:
			if (func_43(uParam0))
				func_9(uParam0, 5);
			break;
	
		case 5:
			if (func_44(uParam0))
			{
				func_9(uParam0, 10);
			}
			else if (func_45(uParam0))
			{
				func_46(uParam0);
				uParam0->f_23 = MISC::GET_GAME_TIMER();
				func_9(uParam0, 6);
			}
			else if (!func_47(uParam0))
			{
				func_9(uParam0, 4);
			}
			break;
	
		case 6:
			if (!func_48(uParam0) || MISC::GET_GAME_TIMER() > uParam0->f_23 + 10000)
			{
				func_49(uParam0);
				func_9(uParam0, 4);
			}
			break;
	
		case 7:
			if (!func_50(uParam0) || MISC::GET_GAME_TIMER() > uParam0->f_24 + 30000)
			{
				func_51(uParam0);
				func_9(uParam0, 4);
			}
			break;
	
		case 8:
			uParam0->f_27 = MISC::GET_GAME_TIMER();
		
			if (!func_52(uParam0->f_3))
				func_9(uParam0, 4);
			break;
	
		case 9:
			break;
	
		case 10:
			if (func_42(uParam0, uParam1, true))
				func_9(uParam0, 4);
			break;
	
		case 11:
			func_8(uParam0, uParam1);
			func_9(uParam0, 1);
			break;
	
		case 12:
			func_8(uParam0, uParam1);
			func_9(uParam0, 0);
			break;
	
		default:
			break;
	}

	if (uParam0->f_20 != 0)
	{
		if (uParam0->f_20 != 11 && uParam0->f_20 != 1 && uParam0->f_20 != 12)
		{
			func_53(uParam0->f_3);
			func_54(uParam0);
		
			if (!func_55(uParam0))
			{
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				MISC::CLEAR_BIT(&(uParam1->f_134), uParam0->f_41);
				func_9(uParam0, 11);
			}
			else if (func_56(uParam0))
			{
				func_9(uParam0, 11);
			}
			else if (uParam0->f_20 != 8)
			{
				if (func_52(uParam0->f_3))
					func_9(uParam0, 8);
				else if (uParam1->f_132 && !uParam0->f_39 && !func_57(Global_35, 0))
					flag = true;
			}
		}
	}

	if (!flag)
	{
		func_58(uParam0);
	
		if (uParam1->f_132 && uParam0->f_39)
			func_59(uParam0);
	}
	else
	{
		func_60(uParam0);
	}

	return;
}

BOOL func_32(var uParam0, int iParam1) // Position - 0xA9F Hash - 0x42A9DDEA ^0xA4D9B8C9
{
	int i;
	BOOL num;

	num = 1;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_55(&uParam0->f_4[i /*42*/]) || uParam0->f_4[i /*42*/].f_20 != iParam1)
			num = 0;
	}

	return num;
}

BOOL func_33(var uParam0) // Position - 0xAE4 Hash - 0x764E3165 ^0xF1CD7DFA
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (uParam0->f_4[i /*42*/].f_20 != 0)
			return false;
	}

	return true;
}

void func_34() // Position - 0xB11 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

int func_35(ItemSet isParam0, var uParam1) // Position - 0xB25 Hash - 0xDB7C630E ^0x127DD6A3
{
	if (!func_21(isParam0))
		return 0;

	return ITEMSET::GET_ITEMSET_SIZE(isParam0);
}

void func_36(ItemSet isParam0, var uParam1) // Position - 0xB43 Hash - 0xA0E1F6F8 ^0x34B4CF89
{
	if (!func_21(isParam0))
		return;

	ITEMSET::CLEAN_ITEMSET(isParam0);
	return;
}

Ped func_37(ItemSet isParam0, var uParam1, int iParam2) // Position - 0xB60 Hash - 0x3D0017DD ^0xA5F3A59B
{
	ScrHandle indexedItemInItemset;
	ScrHandle handle;

	if (!func_21(isParam0))
		return 0;

	indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam2, isParam0);
	handle = indexedItemInItemset;
	return handle;
}

void func_38(Ped* ppedParam0, BOOL bParam1) // Position - 0xB88 Hash - 0x7E90C208 ^0xFFD66E48
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*ppedParam0))
			return;
	
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*ppedParam0, false))
			return;
	
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
		}
		else
		{
			!ENTITY::IS_ENTITY_DEAD(*ppedParam0) && PED::IS_PED_IN_ANY_VEHICLE(*ppedParam0, true);
			PED::DELETE_PED(ppedParam0);
		}
	}

	return;
}

BOOL func_39(int iParam0, int iParam1) // Position - 0xBE2 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_40(int iParam0) // Position - 0xBF1 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_41(int iParam0) // Position - 0xBFB Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_61(iParam0))
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

BOOL func_42(var uParam0, var uParam1, BOOL bParam2) // Position - 0xCAE Hash - 0xAF878BFC ^0xC197806C
{
	int gameTimer;
	int offset;
	Vector3 entityCoords;
	float entityHeading;
	var unk3;
	Ped ped;
	Ped ped2;
	Ped pedAsGroupLeader;
	ePedType type;
	ePedType type2;
	BOOL flag;
	BOOL flag2;
	int i;

	gameTimer = MISC::GET_GAME_TIMER();

	if (uParam0->f_25 > 0 && gameTimer < uParam0->f_25 + 120000 || gameTimer < uParam0->f_26 + 5000)
		return false;

	if (func_62(PLAYER::PLAYER_ID(), true, false, true))
	{
	}

	uParam0->f_26 = gameTimer;

	if (!func_21(uParam0->f_3))
		uParam0->f_3 = { func_63() };

	if (!PED::DOES_GROUP_EXIST(uParam0->f_18))
	{
		uParam0->f_18 = PED::CREATE_GROUP(0);
		PED::SET_GROUP_FORMATION(uParam0->f_18, uParam0->f_19);
	}

	type2 = uParam0->f_2;

	if (bParam2)
	{
		if (PED::DOES_GROUP_EXIST(uParam0->f_18))
		{
			pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(pedAsGroupLeader, false, false) };
				entityHeading = ENTITY::GET_ENTITY_HEADING(pedAsGroupLeader);
				flag2 = true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else if (!func_64(&offset, &entityCoords, &entityHeading, uParam1))
	{
		return false;
	}
	else
	{
		uParam0->f_39 = 0;
	}

	if (BUILTIN::VDIST(entityCoords, ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) < 30f)
		return false;

	if (!MAP::DOES_BLIP_EXIST(uParam0->f_21))
		uParam0->f_21 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_OBJECTIVE"), entityCoords);

	for (i = 0; i < 5; i = i + 1)
	{
		flag = false;
	
		if (bParam2)
		{
			ped2 = func_37(uParam0->f_3, i);
		
			if (!ENTITY::IS_ENTITY_DEAD(ped2))
				flag = true;
		}
	
		if (!flag)
		{
			if (i == 0 && !flag2)
				type = *uParam0;
			else
				type = uParam0->f_1;
		
			unk3 = { entityCoords + { 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f) } };
			entityHeading = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
			ped = func_65(type, unk3, entityHeading, true, true, 0, true, true, true, false, false, false, false);
		
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <= 50)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[i]))
					func_66(&uParam0->f_5[i], true, false, true);
			
				uParam0->f_5[i] = func_65(type2, unk3, entityHeading, true, true, 0, true, true, true, false, false, false, false);
				PED::SET_PED_ONTO_MOUNT(ped, uParam0->f_5[i], -1, true);
			}
		
			func_67(uParam0->f_3, ped);
			PED::SET_PED_CONFIG_FLAG(ped, 279, true);
		
			if (i == 0 && !flag2)
				PED::SET_PED_AS_GROUP_LEADER(func_37(uParam0->f_3, i), uParam0->f_18, false);
			else
				PED::SET_PED_AS_GROUP_MEMBER(func_37(uParam0->f_3, i), uParam0->f_18);
		
			PED::_0xA8A95CECB1906EA2(uParam0->f_18, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(ped, BF_DisableFleeFromCombat, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(ped, BF_AlwaysFight, true);
			PED::SET_PED_CONFIG_FLAG(ped, 49, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(ped, BF_CanBust, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(ped, BF_CanInvestigate, true);
			PED::SET_PED_SEEING_RANGE(ped, 17f);
			PED::SET_PED_ID_RANGE(ped, 17f);
		}
	}

	if (!bParam2)
	{
		uParam0->f_41 = offset;
		MISC::SET_BIT(&(uParam1->f_134), offset);
	}

	if (uParam1->f_132)
	{
		if (func_25(&(uParam0->f_36)))
			func_26(&(uParam0->f_36));
	
		func_68(uParam0);
	}

	return true;
}

BOOL func_43(var uParam0) // Position - 0xFA8 Hash - 0x7D783937 ^0xE929E3C6
{
	Ped pedAsGroupLeader;

	pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);

	if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader))
		TASK::TASK_MOVE_IN_TRAFFIC(pedAsGroupLeader, 1f, 4, 0);

	return true;
}

BOOL func_44(var uParam0) // Position - 0xFCE Hash - 0x7B56A497 ^0x948E534C
{
	int gameTimer;
	Ped pedAsGroupLeader;

	gameTimer = MISC::GET_GAME_TIMER();

	if (gameTimer < uParam0->f_27 + 90000 || gameTimer < uParam0->f_28 + 5000)
		return false;

	uParam0->f_28 = gameTimer;

	if (func_35(uParam0->f_3) < 5)
	{
		pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	
		if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader) && !Global_1935630.f_12)
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(pedAsGroupLeader, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) >= 60f)
				return true;
	}

	return false;
}

BOOL func_45(var uParam0) // Position - 0x1056 Hash - 0xF2FF2696 ^0x66C7C74D
{
	Ped pedAsGroupLeader;
	int gameTimer;

	if (func_3(0, false, true) || !Global_1415405.f_4)
		return false;

	pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	gameTimer = MISC::GET_GAME_TIMER();

	if (gameTimer < uParam0->f_22 + 10000)
		return false;

	uParam0->f_22 = gameTimer;

	if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader) && !Global_1935630.f_12)
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(pedAsGroupLeader, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) <= 30f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedAsGroupLeader, Global_35, 3423))
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <= 40)
				return true;

	return false;
}

int func_46(var uParam0) // Position - 0x10F5 Hash - 0xAF3F8AD5 ^0xBCE04955
{
	Ped pedAsGroupLeader;

	pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);

	if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader) && !Global_1935630.f_12)
	{
		TASK::TASK_GOTO_ENTITY_OFFSET(pedAsGroupLeader, Global_35, -1, 15f, 0, 1f, 2);
		return 1;
	}

	return 0;
}

BOOL func_47(var uParam0) // Position - 0x1134 Hash - 0xF4BB602C ^0x9934C2C
{
	Ped pedAsGroupLeader;
	int scriptTaskStatus;

	pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);

	if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader))
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedAsGroupLeader, -1665583462, true);
	
		if (scriptTaskStatus == 0 || scriptTaskStatus == 1)
			return true;
	}

	return false;
}

BOOL func_48(var uParam0) // Position - 0x1174 Hash - 0xF4BB602C ^0xA7597B7A
{
	Ped pedAsGroupLeader;
	int scriptTaskStatus;

	pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);

	if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader))
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedAsGroupLeader, SCRIPT_TASK_GOTO_ENTITY_OFFSET, true);
	
		if (scriptTaskStatus == 0 || scriptTaskStatus == 1)
			return true;
	}

	return false;
}

void func_49(var uParam0) // Position - 0x11B4 Hash - 0xD435500B ^0x8D22055C
{
	Ped pedAsGroupLeader;
	int scriptTaskStatus;

	pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);

	if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader))
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedAsGroupLeader, SCRIPT_TASK_GOTO_ENTITY_OFFSET, true);
	
		if (scriptTaskStatus != 7 && scriptTaskStatus != 8)
			TASK::CLEAR_PED_TASKS(pedAsGroupLeader, true, false);
	}

	return;
}

BOOL func_50(var uParam0) // Position - 0x11F7 Hash - 0xA6823F26 ^0xAC726659
{
	int num;
	Ped ped;
	int i;
	int scriptTaskStatus;

	num = func_35(uParam0->f_3);

	for (i = 0; i < num; i = i + 1)
	{
		ped = func_37(uParam0->f_3, i);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(ped, SCRIPT_TASK_WANDER_IN_AREA, true);
		
			if (scriptTaskStatus == 0 || scriptTaskStatus == 1)
				return true;
		}
	}

	return false;
}

void func_51(var uParam0) // Position - 0x125A Hash - 0x3804F826 ^0xC67490EC
{
	int num;
	Ped ped;
	int i;
	int scriptTaskStatus;

	num = func_35(uParam0->f_3);

	for (i = 0; i < num; i = i + 1)
	{
		ped = func_37(uParam0->f_3, i);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(ped, SCRIPT_TASK_WANDER_IN_AREA, true);
		
			if (scriptTaskStatus != 7 && scriptTaskStatus != 8)
				TASK::CLEAR_PED_TASKS(ped, true, false);
		}
	}

	return;
}

BOOL func_52(var uParam0, var uParam1) // Position - 0x12C0 Hash - 0xE1FA2B9F ^0xE1FA2B9F
{
	int i;
	Ped ped;

	if (!func_21(uParam0))
		return false;

	for (i = 0; i < func_35(uParam0); i = i + 1)
	{
		ped = func_37(uParam0, i);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped))
			if (!ENTITY::IS_ENTITY_DEAD(ped))
				if (ENTITY::IS_ENTITY_A_PED(ped))
					if (PED::IS_PED_IN_COMBAT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped), 0))
						return true;
	}

	return false;
}

void func_53(ItemSet isParam0, var uParam1) // Position - 0x132C Hash - 0x69072C5B ^0x3AC27111
{
	ItemSet itemset;
	int i;
	Ped ped;
	ScrHandle indexedItemInItemset;

	if (!func_21(isParam0))
		return;

	itemset = ITEMSET::CREATE_ITEMSET(false);

	for (i = 0; i < func_35(isParam0); i = i + 1)
	{
		ped = func_37(isParam0, i);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped))
		{
			if (ENTITY::IS_ENTITY_A_PED(ped))
			{
				if (ENTITY::IS_ENTITY_DEAD(ped))
				{
					ITEMSET::ADD_TO_ITEMSET(ped, itemset);
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&ped);
				}
			}
		}
	}

	for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(itemset); i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset);
		ITEMSET::REMOVE_FROM_ITEMSET(indexedItemInItemset, isParam0);
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return;
}

void func_54(var uParam0) // Position - 0x13C8 Hash - 0xBEB1EEEE ^0xFDB8BBB0
{
	Ped pedAsGroupLeader;
	int hasLeader;
	int numberOfFollowers;
	Ped pedAsGroupMember;

	if (PED::DOES_GROUP_EXIST(uParam0->f_18) && PED::_0x0455546F23FF08E4(uParam0->f_18))
	{
		pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	
		if (ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader))
		{
			PED::GET_GROUP_SIZE(uParam0->f_18, &hasLeader, &numberOfFollowers);
		
			if (numberOfFollowers > 0)
			{
				pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(uParam0->f_18, MISC::GET_RANDOM_INT_IN_RANGE(0, hasLeader + numberOfFollowers));
			
				if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupMember))
					PED::SET_PED_AS_GROUP_LEADER(pedAsGroupMember, uParam0->f_18, false);
			}
		}
	}

	return;
}

BOOL func_55(var uParam0) // Position - 0x1436 Hash - 0x6A8AD0A9 ^0x596736FA
{
	int numberOfFollowers;
	int hasLeader;

	PED::GET_GROUP_SIZE(uParam0->f_18, &hasLeader, &numberOfFollowers);

	if (!func_21(uParam0->f_3) || func_35(uParam0->f_3) == 0 || !PED::DOES_GROUP_EXIST(uParam0->f_18) || !PED::_0x0455546F23FF08E4(uParam0->f_18) || numberOfFollowers == 0 && hasLeader == 0)
		return false;

	return true;
}

BOOL func_56(var uParam0) // Position - 0x14A0 Hash - 0xDDBC1B5E ^0x9324DE22
{
	if (!func_52(uParam0->f_3) && func_69(uParam0))
		return true;

	return false;
}

BOOL func_57(Ped pedParam0, Ped pedParam1) // Position - 0x14C6 Hash - 0xB1778072 ^0xDB718768
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_IN_COMBAT(pedParam0, pedParam1))
			return true;

	return false;
}

void func_58(var uParam0) // Position - 0x14E8 Hash - 0x58ADE053 ^0xC80210EC
{
	if (func_27(uParam0->f_30.f_3))
	{
		func_28(&(uParam0->f_30.f_3), true, true);
		func_34();
	}

	return;
}

void func_59(var uParam0) // Position - 0x150D Hash - 0x1406AD6 ^0x245705C9
{
	Ped pedAsGroupLeader;

	pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);

	if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader) && !Global_1935630.f_12 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(pedAsGroupLeader, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) < 100f)
		if (func_25(&(uParam0->f_36)))
			func_70(&(uParam0->f_36));
	else if (!func_25(&(uParam0->f_36)))
		func_71(&(uParam0->f_36), false);
	else if (func_72(&(uParam0->f_36)))
		func_73(&(uParam0->f_36));

	if (func_74(&(uParam0->f_36)) >= 30000)
	{
		func_26(&(uParam0->f_36));
		uParam0->f_39 = 0;
		func_68(uParam0);
	}

	return;
}

void func_60(var uParam0) // Position - 0x15B7 Hash - 0x63D9231F ^0x38FB013D
{
	Ped pedAsGroupLeader;

	pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);

	if (func_27(uParam0->f_30.f_3))
	{
		if (func_75(uParam0->f_30.f_3, true))
		{
			uParam0->f_39 = 1;
		
			if (!func_25(&(uParam0->f_30)))
				func_71(&(uParam0->f_30), false);
			else if (func_72(&(uParam0->f_30)))
				func_73(&(uParam0->f_30));
		
			if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader))
				func_76(pedAsGroupLeader, joaat("INPUT_FOCUS_CAM"));
		}
	}

	if (func_74(&(uParam0->f_30)) >= uParam0->f_30.f_5)
	{
		func_26(&(uParam0->f_30));
		func_58(uParam0);
	}

	return;
}

BOOL func_61(int iParam0) // Position - 0x1648 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_77(iParam0, 2);
}

BOOL func_62(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1657 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_78(bParam1, bParam2, bParam3);

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

struct<2> func_63() // Position - 0x178C Hash - 0xCC5E9A3 ^0x9986A6C1
{
	ItemSet itemset;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	return itemset;
}

BOOL func_64(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x179F Hash - 0x2ACFE346 ^0x4CD0CAF3
{
	eStackSize stackSize;
	int bitShift;
	int num;
	int num2;

	stackSize = func_79();

	if (func_80(stackSize, &bitShift, &num))
	{
		num2 = func_81(uParam3->f_134, num - bitShift, 2, BUILTIN::SHIFT_LEFT(1, bitShift));
		*uParam0 = num2;
	
		if (func_82(*uParam0, uParam1, uParam2))
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), *uParam1) >= 30f)
				return true;
	}

	return false;
}

Ped func_65(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1803 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_83(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_66(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1845 Hash - 0xEB76F1D1 ^0xF1B7E213
{
	if (!ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
		return;

	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*ppedParam0))
		return;

	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*ppedParam0, false))
		return;

	if (!PED::IS_PED_INJURED(*ppedParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false);
	
		if (!bParam3)
			TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
	
		PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
	
		if (bParam2)
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
	}

	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	return;
}

void func_67(ItemSet isParam0, var uParam1, Ped pedParam2) // Position - 0x18B3 Hash - 0x63B2A27D ^0x4E1BEF1C
{
	if (!func_21(isParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return;

	if (!func_84(isParam0, pedParam2))
		ITEMSET::ADD_TO_ITEMSET(pedParam2, isParam0);

	return;
}

void func_68(var uParam0) // Position - 0x18EE Hash - 0xBD694EEC ^0x6D012303
{
	Ped pedAsGroupLeader;

	pedAsGroupLeader = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);

	if (!ENTITY::IS_ENTITY_DEAD(pedAsGroupLeader) && !func_27(uParam0->f_30.f_3))
	{
		uParam0->f_30.f_3 = func_85("GUAMA_PATROL_HINT", joaat("INPUT_FOCUS_CAM"), pedAsGroupLeader, 1, 0, true, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
		uParam0->f_30.f_4 = 50f;
		func_86(uParam0->f_30.f_3, uParam0->f_30.f_4, true);
	
		if (func_25(&(uParam0->f_30)))
			func_26(&(uParam0->f_30));
	}

	return;
}

BOOL func_69(var uParam0) // Position - 0x197B Hash - 0x10426722 ^0xB9580D89
{
	Ped pedIndexFromEntityIndex;

	if (func_21(uParam0->f_3) && !Global_1935630.f_12)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_87(uParam0->f_3, Global_35));
	
		if (!ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex))
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(pedIndexFromEntityIndex, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) >= 300f && ENTITY::IS_ENTITY_OCCLUDED(pedIndexFromEntityIndex))
				return true;
	}

	return false;
}

void func_70(var uParam0) // Position - 0x19E7 Hash - 0x2B2F09DF ^0x183AF97A
{
	!func_25(uParam0);

	if (!func_72(uParam0))
	{
		uParam0->f_2 = func_88() - uParam0->f_1;
		func_89(uParam0, 2);
	}

	return;
}

void func_71(var uParam0, BOOL bParam1) // Position - 0x1A17 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_25(uParam0))
		func_90(uParam0);

	return;
}

BOOL func_72(var uParam0) // Position - 0x1A37 Hash - 0x39705408 ^0x39705408
{
	return func_39(*uParam0, 2);
}

void func_73(var uParam0) // Position - 0x1A47 Hash - 0x104B2E99 ^0xE5DC1BE8
{
	!func_25(uParam0);

	if (func_72(uParam0))
	{
		uParam0->f_1 = func_88() - uParam0->f_2;
		uParam0->f_2 = 0f;
		func_91(uParam0, 2);
	}

	return;
}

int func_74(var uParam0) // Position - 0x1A7B Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_25(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_72(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_92() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_75(int iParam0, BOOL bParam1) // Position - 0x1ACE Hash - 0x21336878 ^0xD8C1D129
{
	int num;

	if (bParam1 && !func_27(iParam0))
		return false;

	num = func_40(iParam0);

	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1945188[num /*18*/].f_3))
		return PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_1945188[num /*18*/].f_4);

	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[num /*18*/].f_3);
}

void func_76(Ped pedParam0, eControlAction ecaParam1) // Position - 0x1B25 Hash - 0xDB7B225C ^0x35C0BC39
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		return;
	}
	else
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, ecaParam1))
			CAM::SET_GAMEPLAY_ENTITY_HINT(pedParam0, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, ecaParam1))
			CAM::STOP_GAMEPLAY_HINT(false);
	}

	return;
}

BOOL func_77(int iParam0, int iParam1) // Position - 0x1B6C Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_78(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B8D Hash - 0xC9655EC3 ^0x88C9AFE1
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

eStackSize func_79() // Position - 0x1C2B Hash - 0x6F675765 ^0x1F8D8FC2
{
	eStackSize stackSize;
	eStackSize stackSize2;
	float num;
	Vector3 entityCoords;
	int i;
	Vector3 volumeCoords;
	float num2;

	stackSize = func_93();

	if (stackSize != -1)
		return stackSize;

	stackSize2 = -1;
	num = 999999.9f;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };

	if (_IS_NULL_VECTOR(entityCoords))
		return -1;

	i = 57;

	for (i = 0; i < 61; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[i /*35*/].f_3))
		{
			volumeCoords = { 0f, 0f, 0f };
			volumeCoords = { VOLUME::GET_VOLUME_COORDS(Global_1888801[i /*35*/].f_3) };
			num2 = BUILTIN::VDIST2(entityCoords, volumeCoords);
		
			if (num2 < num)
			{
				stackSize2 = i;
				num = num2;
			}
		}
	}

	if (stackSize2 == 57)
		stackSize2 = 57;
	else if (stackSize2 == 61)
		stackSize2 = 61;

	return stackSize2;
}

BOOL func_80(eStackSize essParam0, var uParam1, var uParam2) // Position - 0x1CE4 Hash - 0x6ABAC091 ^0x6ABAC091
{
	switch (essParam0)
	{
		case 57:
			*uParam1 = 8;
			*uParam2 = 13;
			return true;
	
		case 59:
			*uParam1 = 0;
			*uParam2 = 2;
			return true;
	
		case 60:
		case 61:
			*uParam1 = 3;
			*uParam2 = 7;
			return true;
	}

	return false;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1D3C Hash - 0xA6729010 ^0x84FF9B25
{
	int randomIntInRange;
	int startRange;
	int i;
	int endRange;
	var unk;

	iParam1 > 32;
	startRange = func_95(iParam3);

	if (iParam2 == 0)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(startRange, iParam1);
		return randomIntInRange;
	}

	unk = 32;

	for (i = startRange; i <= (startRange + iParam1) - 1; i = i + 1)
	{
		if (iParam2 == 1 && MISC::IS_BIT_SET(iParam0, i) || iParam2 == 2 && !MISC::IS_BIT_SET(iParam0, i))
		{
			unk[endRange] = i;
			endRange = endRange + 1;
		}
	}

	if (endRange == 0)
		return -1;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	return unk[randomIntInRange];
}

BOOL func_82(int iParam0, var uParam1, var uParam2) // Position - 0x1DDA Hash - 0x6BF2FA05 ^0x6BF2FA05
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 3787.7183f, -3954.1448f, 41.288f };
			*uParam2 = 354.6375f;
			return true;
	
		case 1:
			*uParam1 = { 3882.9797f, -3730.864f, 43.6833f };
			*uParam2 = 116.3379f;
			return true;
	
		case 3:
			*uParam1 = { 3972.9211f, -3874.57f, 65.7122f };
			*uParam2 = 123.0235f;
			return true;
	
		case 4:
			*uParam1 = { 3998.8748f, -3721.0186f, 67.4743f };
			*uParam2 = 206.3015f;
			return true;
	
		case 5:
			*uParam1 = { 4136.172f, -3683.9062f, 156.7324f };
			*uParam2 = 85.041f;
			return true;
	
		case 6:
			*uParam1 = { 4228.8887f, -3659.8025f, 172.7372f };
			*uParam2 = 17.8561f;
			return true;
	
		case 8:
			*uParam1 = { 3856.5547f, -3577.237f, 53.4467f };
			*uParam2 = 167.0775f;
			return true;
	
		case 9:
			*uParam1 = { 4070.433f, -3437.8567f, 86.5179f };
			*uParam2 = 357.3192f;
			return true;
	
		case 10:
			*uParam1 = { 3904.9038f, -3224.065f, 45.5342f };
			*uParam2 = 195.7186f;
			return true;
	
		case 11:
			*uParam1 = { 3853.244f, -3476.8257f, 44.6443f };
			*uParam2 = 59.1071f;
			return true;
	
		case 12:
			*uParam1 = { 3989.41f, -3338.172f, 64.3645f };
			*uParam2 = 85.9682f;
			return true;
	}

	return false;
}

void func_83(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1FA3 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_96(eptParam1))
		{
			func_97(pedParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
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
			func_98(pedParam0, 0, true);
	
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
			func_99(pedParam0, false);
			flag = true;
		}
	
		func_100(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_84(ItemSet isParam0, var uParam1, Ped pedParam2) // Position - 0x2084 Hash - 0x58212FA0 ^0xA1AC9163
{
	if (!func_21(isParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return false;

	return ITEMSET::IS_IN_ITEMSET(pedParam2, isParam0);
}

// Unhandled jump detected. Output should be considered invalid
int func_85(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x20B2 Hash - 0xA9244E74 ^0xC0A4C4ED
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_77(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (pedParam2 == Global_1945188[i /*18*/].f_11 && hParam1 == Global_1945188[i /*18*/].f_4)
					if (iParam3 <= Global_1945188[i /*18*/])
						return i;
			
				goto 0x8C;
			}
		}
	
		if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_101(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_86(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2189 Hash - 0x9018D919 ^0x90AC92B6
{
	int num;

	if (bParam2 && !func_27(iParam0))
		return;

	if (fParam1 <= 0f)
		return;

	num = func_40(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	Global_1945188[num /*18*/].f_9 = fParam1;
	HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(Global_1945188[num /*18*/].f_3, fParam1);
	return;
}

Ped func_87(var uParam0, var uParam1, Ped pedParam2) // Position - 0x21E8 Hash - 0x3BC5AB16 ^0x3BC5AB16
{
	Ped ped;
	int i;
	Ped ped2;

	if (!func_21(uParam0))
		return ped;

	for (i = 0; i < func_35(uParam0); i = i + 1)
	{
		ped2 = func_37(uParam0, i);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped2))
			if (!ENTITY::IS_ENTITY_DEAD(ped2))
				if (i == 0 || func_102(ped2, pedParam2, true, true) < func_102(ped, pedParam2, true, true))
					ped = ped2;
	}

	return ped;
}

float func_88() // Position - 0x2261 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_89(var uParam0, int iParam1) // Position - 0x2293 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_90(var uParam0) // Position - 0x22A4 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_103(uParam0, 0f);
	return;
}

void func_91(var uParam0, int iParam1) // Position - 0x22B3 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_92() // Position - 0x22C8 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

eStackSize func_93() // Position - 0x22E6 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x22F4 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_95(int iParam0) // Position - 0x231E Hash - 0xF81FC77E ^0xDB0C7945
{
	int num;
	int num2;

	num = 0;
	num2 = iParam0;

	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		num = num + 1;
	}

	return num;
}

BOOL func_96(ePedType eptParam0) // Position - 0x2347 Hash - 0x5000025C ^0x5000025C
{
	switch (eptParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return true;
	
		default:
		
	}

	return false;
}

void func_97(Ped pedParam0, Hash hParam1) // Position - 0x279A Hash - 0x961AF1E5 ^0xC56587DC
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_104(pedParam0, hParam1))
		{
			if (func_105(pedParam0, hParam1))
			{
				if (func_106(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_107(pedParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);
				PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
			}
		
			PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 9);
		}
	}

	return;
}

void func_98(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x2841 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_99(Ped pedParam0, BOOL bParam1) // Position - 0x2871 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_100(Ped pedParam0, int iParam1) // Position - 0x28B6 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

void func_101(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x28DD Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = iParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = pedParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam1);

	if (hParam23 != 0)
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam23);

	HUD::_UI_PROMPT_SET_TEXT(prompt, sParam2);

	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, fParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, pedParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
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
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1945188[iParam0 /*18*/].f_3 = prompt;
	func_108(iParam0, true);
	func_109(iParam0, true);
	func_110(iParam0, 128);
	return;
}

float func_102(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2B83 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

void func_103(var uParam0, float fParam1) // Position - 0x2BCB Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_88() - fParam1;
	func_89(uParam0, 1);
	func_91(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_104(Ped pedParam0, Hash hParam1) // Position - 0x2BF1 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_105(Ped pedParam0, Hash hParam1) // Position - 0x2C1F Hash - 0x19A8F63 ^0x4F39AB6D
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

BOOL func_106(Ped pedParam0, Hash hParam1) // Position - 0x2C6D Hash - 0x19A8F63 ^0x4F39AB6D
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_104(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_107(Ped pedParam0) // Position - 0x2CDB Hash - 0x7481BA98 ^0x8369D6E
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_108(int iParam0, BOOL bParam1) // Position - 0x2CF7 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_77(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_109(int iParam0, BOOL bParam1) // Position - 0x2D4F Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_110(int iParam0, int iParam1) // Position - 0x2D78 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

