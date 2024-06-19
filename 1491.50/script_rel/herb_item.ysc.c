#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x17CD235B ^0xEB2EF63F
{
	Hash hash;
	BOOL flag;
	BOOL flag2;
	var unk;
	int num;
	BOOL flag3;

	hash = uScriptParam_0.f_1;
	flag = uScriptParam_0.f_3;
	flag2 = uScriptParam_0.f_4;
	num = func_1(&hash);
	flag3 = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2(&unk, 3);

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		if (func_3(Global_35, 0) != joaat("WEAPON_UNARMED"))
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);

	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), false);

	while (true)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
			func_2(&unk, 3);
	
		switch (func_4(&unk))
		{
			case 0:
				if (func_3(Global_35, 0) == joaat("WEAPON_UNARMED"))
					func_2(&unk, 1);
				break;
		
			case 1:
				func_5(num);
				func_6(hash);
				unk.f_1 = MISC::GET_GAME_TIMER();
				func_7(num, 1);
				func_2(&unk, 2);
				break;
		
			case 2:
				if (flag2)
				{
					if (MISC::GET_GAME_TIMER() - unk.f_1 > 5500)
					{
						flag3 = func_8(uScriptParam_0);
						func_9(num, true, !flag3);
					
						if (flag)
							func_10(num, flag3, true, 0);
					
						if (flag3)
							func_12(209, func_11(num), true);
					
						func_2(&unk, 3);
					}
				}
				else
				{
					func_2(&unk, 3);
				}
				break;
		
			case 3:
				func_13();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

int func_1(var uParam0) // Position - 0x162 Hash - 0x19D4C5AC ^0x19D4C5AC
{
	switch (*uParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 26;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 28;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("consumable_herb_sage"):
			return 34;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_ro_flower_clamshell"):
			return 10;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 31;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 1;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 42;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 20;
	
		case joaat("consumable_herb_yarrow"):
			return 43;
	
		case joaat("consumable_herb_wild_mint"):
			return 41;
	
		case joaat("provision_ro_flower_cigar"):
			return 9;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 32;
	
		case joaat("provision_ro_flower_night_scented"):
			return 25;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 38;
	
		case joaat("consumable_herb_milkweed"):
			return 23;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 29;
	
		case joaat("consumable_herb_oregano"):
			return 27;
	
		case joaat("consumable_herb_red_raspberry"):
			return 33;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 21;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 40;
	
		case joaat("provision_ro_flower_sparrows"):
			return 35;
	
		case joaat("provision_ro_flower_queens"):
			return 30;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("consumable_herb_wild_carrots"):
			return 39;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_ro_flower_spider"):
			return 36;
	
		case joaat("provision_ro_flower_dragons"):
			return 14;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 22;
	
		case joaat("provision_ro_flower_moccasin"):
			return 24;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 37;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	
		case joaat("provision_ro_flower_ghost"):
			return 17;
	}

	return 0;
}

void func_2(var uParam0, int iParam1) // Position - 0x390 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

int func_3(Ped pedParam0, int iParam1) // Position - 0x39D Hash - 0xB13A3864 ^0x7FBAE642
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

int func_4(var uParam0) // Position - 0x3B4 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_5(int iParam0) // Position - 0x3BF Hash - 0x9A5CF347 ^0x5AB4BC59
{
	int num;

	num = func_16(MISC::VAR_STRING(10, "ITEM_TASTED_PUMP_MULT", MISC::VAR_STRING(0, func_15(func_14(iParam0))), 1), "", 0, 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	Global_1913500[iParam0 /*4*/] = num;
	return;
}

void func_6(Hash hParam0) // Position - 0x401 Hash - 0xE510351D ^0xE510351D
{
	!func_17(hParam0, 0);
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x414 Hash - 0xDB5B57E1 ^0x4CB48A48
{
	var statId;

	statId = { func_18(joaat("eaten"), func_11(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_20(func_19(joaat("herbs_eaten")), iParam1);
	return;
}

BOOL func_8(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0x446 Hash - 0x766123DB ^0x43AD1CA9
{
	var unk;
	BOOL flag;
	BOOL flag2;
	int num;
	Hash hash;

	unk = uParam0.f_1;
	flag = uParam0.f_3;
	flag2 = uParam0.f_4;
	num = func_1(&unk);

	if (!flag2 || func_21(num))
		return 0;

	hash = func_22(num);

	if (!flag || !func_17(hash, 0) || func_23(hash))
		return 0;

	return 1;
}

void func_9(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4AB Hash - 0x50964517 ^0x50964517
{
	Hash hash;
	int num;

	hash = func_14(iParam0);
	num = func_1(&hash);

	if (num != iParam0)
		func_24(num, 4);

	if (!func_25(iParam0))
		return;

	if (func_21(iParam0))
		return;

	func_24(iParam0, 4);
	func_26(iParam0, bParam1);

	if (!func_27(iParam0))
		func_28(iParam0, true, false);

	if (bParam1)
		if (!func_29(0, false, true))
			func_30(true, 6);

	return;
}

void func_10(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x521 Hash - 0x47C8CA5E ^0x47C8CA5E
{
	if (!func_25(iParam0))
		return;

	func_31(func_22(iParam0), 0, bParam1, bParam2, iParam3);
	return;
}

int func_11(int iParam0) // Position - 0x548 Hash - 0xBA965109 ^0xDF65C4FE
{
	switch (iParam0)
	{
		case 1:
			return joaat("herb_acunas_star_orchid");
	
		case 2:
			return joaat("herb_alaskan_ginseng");
	
		case 3:
			return joaat("herb_american_ginseng");
	
		case 4:
			return joaat("herb_bay_bolete");
	
		case 5:
			return joaat("herb_black_berry");
	
		case 6:
			return joaat("herb_black_currant");
	
		case 7:
			return joaat("herb_burdock_root");
	
		case 8:
			return joaat("herb_chanterelles");
	
		case 9:
			return joaat("herb_cigar_orchid");
	
		case 10:
			return joaat("herb_clamshell_orchid");
	
		case 11:
			return joaat("herb_common_bulrush");
	
		case 12:
			return joaat("herb_creeping_thyme");
	
		case 13:
			return joaat("herb_desert_sage");
	
		case 14:
			return joaat("herb_dragons_mouth_orchid");
	
		case 15:
			return joaat("herb_english_mace");
	
		case 16:
			return joaat("herb_evergreen_huckleberry");
	
		case 17:
			return joaat("herb_ghost_orchid");
	
		case 18:
			return joaat("herb_golden_currant");
	
		case 19:
			return joaat("herb_hummingbird_sage");
	
		case 20:
			return joaat("herb_indian_tobacco");
	
		case 21:
			return joaat("herb_lady_of_night_orchid");
	
		case 22:
			return joaat("herb_lady_slipper_orchid");
	
		case 23:
			return joaat("herb_milkweed");
	
		case 24:
			return joaat("herb_moccasin_flower_orchid");
	
		case 25:
			return joaat("herb_night_scented_orchid");
	
		case 26:
			return joaat("herb_oleander_sage");
	
		case 27:
			return joaat("herb_oregano");
	
		case 28:
			return joaat("herb_parasol_mushroom");
	
		case 29:
			return joaat("herb_prairie_poppy");
	
		case 30:
			return joaat("herb_queens_orchid");
	
		case 31:
			return joaat("herb_rams_head");
	
		case 32:
			return joaat("herb_rat_tail_orchid");
	
		case 33:
			return joaat("herb_red_raspberry");
	
		case 34:
			return joaat("herb_red_sage");
	
		case 35:
			return joaat("herb_sparrows_egg_orchid");
	
		case 36:
			return joaat("herb_spider_orchid");
	
		case 37:
			return joaat("herb_vanilla_flower");
	
		case 38:
			return joaat("herb_violet_snowdrop");
	
		case 39:
			return joaat("herb_wild_carrots");
	
		case 40:
			return joaat("herb_wild_feverfew");
	
		case 41:
			return joaat("herb_wild_mint");
	
		case 42:
			return joaat("herb_wintergreen_berry");
	
		case 43:
			return joaat("herb_yarrow");
	}

	return 0;
}

void func_12(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x834 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_32(iParam0, &num, &num2);

	if (!func_33(iParam0, num, num2, bParam2))
		return;

	if (!func_34(iParam0, 1024))
		return;

	func_35(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_13() // Position - 0x894 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

Hash func_14(int iParam0) // Position - 0x8A0 Hash - 0xBA965109 ^0xA132DCEE
{
	switch (iParam0)
	{
		case 1:
			return joaat("provision_ro_flower_acunas_star");
	
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
	
		case 9:
			return joaat("provision_ro_flower_cigar");
	
		case 10:
			return joaat("provision_ro_flower_clamshell");
	
		case 11:
			return joaat("consumable_herb_common_bulrush");
	
		case 12:
			return joaat("consumable_herb_creeping_thyme");
	
		case 13:
			return joaat("consumable_herb_sage");
	
		case 14:
			return joaat("provision_ro_flower_dragons");
	
		case 15:
			return joaat("consumable_herb_english_mace");
	
		case 16:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 17:
			return joaat("provision_ro_flower_ghost");
	
		case 18:
			return joaat("consumable_herb_currant");
	
		case 19:
			return joaat("consumable_herb_sage");
	
		case 20:
			return joaat("consumable_herb_indian_tobacco");
	
		case 21:
			return joaat("provision_ro_flower_lady_of_night");
	
		case 22:
			return joaat("provision_ro_flower_lady_slipper");
	
		case 23:
			return joaat("consumable_herb_milkweed");
	
		case 24:
			return joaat("provision_ro_flower_moccasin");
	
		case 25:
			return joaat("provision_ro_flower_night_scented");
	
		case 26:
			return joaat("consumable_herb_oleander_sage");
	
		case 27:
			return joaat("consumable_herb_oregano");
	
		case 28:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 29:
			return joaat("consumable_herb_prairie_poppy");
	
		case 30:
			return joaat("provision_ro_flower_queens");
	
		case 31:
			return joaat("consumable_herb_rams_head");
	
		case 32:
			return joaat("provision_ro_flower_rat_tail");
	
		case 33:
			return joaat("consumable_herb_red_raspberry");
	
		case 34:
			return joaat("consumable_herb_sage");
	
		case 35:
			return joaat("provision_ro_flower_sparrows");
	
		case 36:
			return joaat("provision_ro_flower_spider");
	
		case 37:
			return joaat("consumable_herb_vanilla_flower");
	
		case 38:
			return joaat("consumable_herb_violet_snowdrop");
	
		case 39:
			return joaat("consumable_herb_wild_carrots");
	
		case 40:
			return joaat("consumable_herb_wild_feverfew");
	
		case 41:
			return joaat("consumable_herb_wild_mint");
	
		case 42:
			return joaat("consumable_herb_wintergreen_berry");
	
		case 43:
			return joaat("consumable_herb_yarrow");
	
		default:
			break;
	}

	return 0;
}

Hash func_15(Hash hParam0) // Position - 0xB8F Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_17(hParam0, 0))
		return 0;

	return hParam0;
}

int func_16(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xBA8 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_36(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_17(Hash hParam0, int iParam1) // Position - 0xC0B Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

struct<2> func_18(int iParam0, int iParam1) // Position - 0xC25 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

struct<2> func_19(int iParam0) // Position - 0xC3B Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_20(var uParam0, var uParam1, int iParam2) // Position - 0xC4D Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_21(int iParam0) // Position - 0xC5D Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_25(iParam0))
		return false;

	return func_37(iParam0, 4, true);
}

Hash func_22(int iParam0) // Position - 0xC7B Hash - 0xD54AECF6 ^0xF5B76F98
{
	if (!func_25(iParam0))
		return 0;

	switch (iParam0)
	{
		case 2:
			return -1080874779;
	
		case 3:
			return joaat("consumable_potent_medicine");
	
		case 6:
			return joaat("consumable_special_horse_stimulant_crafted");
	
		case 7:
			return joaat("consumable_horse_reviver");
	
		case 13:
			return joaat("consumable_potent_restorative");
	
		case 15:
			return -1080874779;
	
		case 18:
			return joaat("consumable_potent_horse_stimulant");
	
		case 19:
			return joaat("consumable_potent_tonic");
	
		case 20:
			return joaat("consumable_potent_snake_oil");
	
		case 23:
			return joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED");
	
		case 26:
			return joaat("CONSUMABLE_COVER_SCENT");
	
		case 29:
			return joaat("consumable_potent_restorative");
	
		case 34:
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
	
		case 38:
			return joaat("consumable_potent_herbivore_bait");
	
		case 40:
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
	
		case 43:
			return joaat("consumable_potent_medicine");
	}

	return 0;
}

BOOL func_23(Hash hParam0) // Position - 0xDAA Hash - 0xAD430840 ^0x833C1E45
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
			if (outData.f_2 == joaat("cost_type_craft") && !func_38(hParam0, outData, true))
				return true;
	}

	return false;
}

void func_24(int iParam0, BOOL bParam1) // Position - 0xE0C Hash - 0x94511870 ^0x94511870
{
	if (!func_25(iParam0))
		return;

	if (func_39() != -1)
	{
		Global_36638[iParam0] = Global_36638[iParam0] || bParam1;
		return;
	}

	Global_40.f_9274[iParam0] = Global_40.f_9274[iParam0] || bParam1;
	return;
}

BOOL func_25(int iParam0) // Position - 0xE54 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

void func_26(int iParam0, BOOL bParam1) // Position - 0xE61 Hash - 0x2762FC5A ^0x2762FC5A
{
	if (!func_25(iParam0))
		return;

	if (func_40(iParam0))
		return;

	func_24(iParam0, 2);

	if (bParam1)
		if (!func_29(0, false, true))
			func_30(true, 6);

	return;
}

BOOL func_27(int iParam0) // Position - 0xE9F Hash - 0x94F42F3F ^0x94F42F3F
{
	if (!func_25(iParam0))
		return false;

	return func_37(iParam0, true, true);
}

void func_28(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xEBD Hash - 0xD71C2102 ^0xD71C2102
{
	if (!func_25(iParam0))
		return;

	if (func_27(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_41(iParam0);

	if (!bParam1)
	{
		if (func_39() != -1)
		{
		}
		else
		{
			func_42(iParam0);
		}
	}

	func_24(iParam0, true);

	if (func_39() == -1)
		func_44(iParam0, func_43());

	func_26(iParam0, true);

	if (bParam2)
		if (!func_29(0, false, true))
			func_30(true, 6);

	return;
}

BOOL func_29(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF3C Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_45())
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
		num = func_46(Global_1898164.f_1[0 /*5*/]);
	
		if (func_47(num) && func_48(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_49(Global_1898164.f_1[0 /*5*/]))
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

void func_30(BOOL bParam0, int iParam1) // Position - 0x1140 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_50(&Global_0, 8);

	if (!func_51() || func_39() != -1)
		return;

	func_50(&Global_0, 1);
	return;
}

int func_31(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1186 Hash - 0x9850C0DA ^0x9850C0DA
{
	BOOL flag;
	int acquireCostsCount;
	Hash outData;
	int i;

	if (!func_17(hParam0, 0))
		return 0;

	if (hParam1 != 0 && !func_38(hParam0, hParam1, true))
		return 0;

	flag = false;

	if (hParam1 == 0)
	{
		acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(hParam0);
		outData.f_4 = 15;
		outData.f_36 = 10;
	
		for (i = 0; i < acquireCostsCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(hParam0, i, &outData))
				if (outData.f_2 == joaat("cost_type_craft") && func_38(hParam0, outData, true))
					if (func_52(hParam0, outData))
						flag = true;
		}
	}
	else if (func_52(hParam0, hParam1))
	{
		flag = true;
	}

	if (flag)
		if (!bParam2)
			func_53(206, false);

	if (bParam3)
		if (!func_29(0, false, true))
			func_30(true, 5);

	if (flag)
		return 1;

	return 0;
}

void func_32(int iParam0, var uParam1, var uParam2) // Position - 0x1265 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_33(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1281 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_54(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_55(iParam0))
		return false;

	if (func_56(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_34(iParam0, 1) || func_57(32768))
		if (!func_34(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_58())
		return false;

	return true;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0x1323 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_35(int iParam0, int iParam1) // Position - 0x133C Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

void func_36(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x1360 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_37(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1391 Hash - 0x77ECC81C ^0x6B9E3122
{
	if (bParam2)
		if (!func_25(iParam0))
			return false;

	if (Global_1572887.f_12 != -1)
		return Global_36638[iParam0] && bParam1 != false;

	return Global_40.f_9274[iParam0] && bParam1 != false;
}

BOOL func_38(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x13D4 Hash - 0xEAB06984 ^0xE37CC970
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	unk = 10;

	if (bParam2 && func_39() == false && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return false;

	if (!func_59(hParam0, hParam1, &unk, &num) || num < 1)
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

BOOL func_39() // Position - 0x1453 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_40(int iParam0) // Position - 0x1461 Hash - 0xE139661B ^0xE139661B
{
	if (!func_25(iParam0))
		return false;

	return func_37(iParam0, 2, true);
}

BOOL func_41(int iParam0) // Position - 0x147F Hash - 0xA376F75 ^0xA376F75
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
	
		default:
			return 0;
	}

	return 0;
}

void func_42(int iParam0) // Position - 0x14EC Hash - 0xC5BA52D ^0xC5BA52D
{
	switch (iParam0)
	{
		case 2:
			func_53(214, false);
			break;
	
		case 3:
			func_53(215, false);
			break;
	
		case 4:
			func_53(233, false);
			break;
	
		case 5:
			func_53(210, false);
			break;
	
		case 6:
			func_53(229, false);
			break;
	
		case 7:
			func_53(226, false);
			break;
	
		case 8:
			func_53(234, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_53(237, false);
			break;
	
		case 13:
			func_53(221, false);
			break;
	
		case 15:
			func_53(217, false);
			break;
	
		case 16:
			func_53(211, false);
			break;
	
		case 18:
			func_53(228, false);
			break;
	
		case 19:
			func_53(222, false);
			break;
	
		case 20:
			func_53(227, false);
			break;
	
		case 23:
			func_53(218, false);
			break;
	
		case 26:
			func_53(220, false);
			break;
	
		case 27:
			func_53(238, false);
			break;
	
		case 28:
			func_53(235, false);
			break;
	
		case 29:
			func_53(230, false);
			break;
	
		case 31:
			func_53(236, false);
			break;
	
		case 33:
			func_53(212, false);
			break;
	
		case 34:
			func_53(223, false);
			break;
	
		case 37:
			func_53(219, false);
			break;
	
		case 38:
			func_53(224, false);
			break;
	
		case 39:
			func_53(231, false);
			break;
	
		case 40:
			func_53(225, false);
			break;
	
		case 41:
			func_53(239, false);
			break;
	
		case 42:
			func_53(213, false);
			break;
	
		case 43:
			func_53(216, false);
			break;
	}

	return;
}

int func_43() // Position - 0x16D5 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_39() != -1)
		return 0;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return 1;

	return 0;
}

void func_44(int iParam0, int iParam1) // Position - 0x16FB Hash - 0xE05A2D67 ^0x31D6C1E4
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_acunas_star_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_acunas_star_orchid_jn"), 0);
			break;
	
		case 2:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_alaskan_ginseng_ar"), 0);
			else
				func_60(joaat("journal_herb_alaskan_ginseng_jn"), 0);
			break;
	
		case 3:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_american_ginseng_ar"), 0);
			else
				func_60(joaat("journal_herb_american_ginseng_jn"), 0);
			break;
	
		case 4:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_bay_bolete_ar"), 0);
			else
				func_60(joaat("journal_herb_bay_bolete_jn"), 0);
			break;
	
		case 5:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_blackberry_ar"), 0);
			else
				func_60(joaat("journal_herb_blackberry_jn"), 0);
			break;
	
		case 6:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_black_currant_ar"), 0);
			else
				func_60(joaat("journal_herb_black_currant_jn"), 0);
			break;
	
		case 7:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_burdock_root_ar"), 0);
			else
				func_60(joaat("journal_herb_burdock_root_jn"), 0);
			break;
	
		case 8:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_chanterelle_ar"), 0);
			else
				func_60(joaat("journal_herb_chanterelle_jn"), 0);
			break;
	
		case 9:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_cigar_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_cigar_orchid_jn"), 0);
			break;
	
		case 10:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_clamshell_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_clamshell_orchid_jn"), 0);
			break;
	
		case 11:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_bulrush_ar"), 0);
			else
				func_60(joaat("journal_herb_bulrush_jn"), 0);
			break;
	
		case 12:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_creeping_thyme_ar"), 0);
			else
				func_60(joaat("journal_herb_creeping_thyme_jn"), 0);
			break;
	
		case 13:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_desert_sage_ar"), 0);
			else
				func_60(joaat("journal_herb_desert_sage_jn"), 0);
			break;
	
		case 14:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_dragons_mouth_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_dragons_mouth_orchid_jn"), 0);
			break;
	
		case 15:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_english_mace_ar"), 0);
			else
				func_60(joaat("journal_herb_english_mace_jn"), 0);
			break;
	
		case 16:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_huckleberry_ar"), 0);
			else
				func_60(joaat("journal_herb_huckleberry_jn"), 0);
			break;
	
		case 17:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_ghost_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_ghost_orchid_jn"), 0);
			break;
	
		case 18:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_golden_currant_ar"), 0);
			else
				func_60(joaat("journal_herb_golden_currant_jn"), 0);
			break;
	
		case 19:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_hummingbird_sage_ar"), 0);
			else
				func_60(joaat("journal_herb_hummingbird_sage_jn"), 0);
			break;
	
		case 20:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_indian_tobacco_ar"), 0);
			else
				func_60(joaat("journal_herb_indian_tobacco_jn"), 0);
			break;
	
		case 21:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_lady_of_the_night_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_lady_of_the_night_orchid_jn"), 0);
			break;
	
		case 22:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_lady_slipper_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_lady_slipper_orchid_jn"), 0);
			break;
	
		case 23:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_milkweed_ar"), 0);
			else
				func_60(joaat("journal_herb_milkweed_jn"), 0);
			break;
	
		case 24:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_moccasin_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_moccasin_orchid_jn"), 0);
			break;
	
		case 25:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_night_scented_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_night_scented_orchid_jn"), 0);
			break;
	
		case 26:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_oleander_sage_ar"), 0);
			else
				func_60(joaat("journal_herb_oleander_sage_jn"), 0);
			break;
	
		case 27:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_oregano_ar"), 0);
			else
				func_60(joaat("journal_herb_oregano_jn"), 0);
			break;
	
		case 28:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_parasol_ar"), 0);
			else
				func_60(joaat("journal_herb_parasol_jn"), 0);
			break;
	
		case 29:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_prairie_poppy_ar"), 0);
			else
				func_60(joaat("journal_herb_prairie_poppy_jn"), 0);
			break;
	
		case 30:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_queens_orchids_ar"), 0);
			else
				func_60(joaat("journal_herb_queens_orchids_jn"), 0);
			break;
	
		case 31:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_ramshead_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_ramshead_orchid_jn"), 0);
			break;
	
		case 32:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_rat_tail_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_rat_tail_orchid_jn"), 0);
			break;
	
		case 33:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_raspberry_ar"), 0);
			else
				func_60(joaat("journal_herb_raspberry_jn"), 0);
			break;
	
		case 34:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_red_sage_ar"), 0);
			else
				func_60(joaat("journal_herb_red_sage_jn"), 0);
			break;
	
		case 35:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_sparrows_egg_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_sparrows_egg_orchid_jn"), 0);
			break;
	
		case 36:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_spider_orchid_ar"), 0);
			else
				func_60(joaat("journal_herb_spider_orchid_jn"), 0);
			break;
	
		case 37:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_vanilla_flower_ar"), 0);
			else
				func_60(joaat("journal_herb_vanilla_flower_jn"), 0);
			break;
	
		case 38:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_violet_snowdrop_ar"), 0);
			else
				func_60(joaat("journal_herb_violet_snowdrop_jn"), 0);
			break;
	
		case 39:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_carrot_ar"), 0);
			else
				func_60(joaat("journal_herb_carrot_jn"), 0);
			break;
	
		case 40:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_feverfew_ar"), 0);
			else
				func_60(joaat("journal_herb_feverfew_jn"), 0);
			break;
	
		case 41:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_mint_ar"), 0);
			else
				func_60(joaat("journal_herb_mint_jn"), 0);
			break;
	
		case 42:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_winterberry_ar"), 0);
			else
				func_60(joaat("journal_herb_winterberry_jn"), 0);
			break;
	
		case 43:
			if (iParam1 == 1)
				func_60(joaat("journal_herb_yarrow_ar"), 0);
			else
				func_60(joaat("journal_herb_yarrow_jn"), 0);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_45() // Position - 0x1D70 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_46(int iParam0) // Position - 0x1DC3 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_49(iParam0))
		return -1;

	return func_62(func_61(iParam0));
}

BOOL func_47(int iParam0) // Position - 0x1DE3 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_48(int iParam0, int iParam1) // Position - 0x1DF9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_49(int iParam0) // Position - 0x1E08 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_50(Hash hParam0, int iParam1) // Position - 0x1E3B Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_51() // Position - 0x1E4E Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_52(Hash hParam0, Hash hParam1) // Position - 0x1E6D Hash - 0xD62E0B98 ^0xD62E0B98
{
	BOOL flag;
	int num;
	var unk;
	Hash unlockHash;
	int i;

	if (func_39() != -1)
		return false;

	unk = 10;

	if (func_59(hParam0, hParam1, &unk, &num))
	{
		for (i = 0; i < num; i = i + 1)
		{
			unlockHash = unk[i];
		
			if (unlockHash == 0)
			{
			}
			else
			{
				if (!flag)
					if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						flag = true;
			
				UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, true);
			}
		}
	}

	return flag;
}

void func_53(int iParam0, BOOL bParam1) // Position - 0x1ED6 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_32(iParam0, &num, &num2);

	if (!func_33(iParam0, num, num2, bParam1))
		return;

	func_35(num, num2);
	return;
}

BOOL func_54(int iParam0, int iParam1) // Position - 0x1F03 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_39() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_55(int iParam0) // Position - 0x1F36 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_39() != -1)
		if (func_34(iParam0, 4))
			return false;
	else if (func_34(iParam0, 2))
		return false;

	return true;
}

BOOL func_56(int iParam0) // Position - 0x1F66 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_34(iParam0, 65536) && !func_34(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_34(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_34(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_57(int iParam0) // Position - 0x2012 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_58() // Position - 0x2025 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_59(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x2034 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_17(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

void func_60(int iParam0, int iParam1) // Position - 0x20A9 Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_63(iParam0, 0);
	}
	else
	{
		for (i = 0; i < 20; i = i + 1)
		{
			if (Global_40.f_11922[i] == 0)
			{
				Global_40.f_11922[i] = iParam0;
				return;
			}
		}
	
		func_64(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

BOOL func_61(int iParam0) // Position - 0x2101 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_62(BOOL bParam0) // Position - 0x213F Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

void func_63(int iParam0, int iParam1) // Position - 0x2152 Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_65(true);

	return;
}

void func_64(int iParam0) // Position - 0x216B Hash - 0x23AE6B73 ^0x23AE6B73
{
	int i;
	int num;

	num = 0;

	if (iParam0 == 0 && Global_43891 == true)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_40.f_11922[i] == 0)
			break;
	
		func_63(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_65(true);

	return;
}

void func_65(BOOL bParam0) // Position - 0x21D9 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_66(&(Global_40.f_12019.f_42), 1);
	else
		func_67(&(Global_40.f_12019.f_42), 1);

	return;
}

void func_66(BOOL bParam0, int iParam1) // Position - 0x2203 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_67(BOOL bParam0, int iParam1) // Position - 0x2214 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

