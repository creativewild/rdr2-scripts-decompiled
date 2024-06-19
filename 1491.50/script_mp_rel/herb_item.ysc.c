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

void main() // Position - 0x0 Hash - 0x921B7589 ^0xF3D94710
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
	num = func_1(hash);
	flag3 = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2(&unk, 3);

	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
		if (func_3(Global_33, 0) != joaat("WEAPON_UNARMED"))
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);

	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), false);

	while (true)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
			func_2(&unk, 3);
	
		switch (func_4(&unk))
		{
			case 0:
				if (func_3(Global_33, 0) == joaat("WEAPON_UNARMED"))
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
							func_12(238, func_11(num), true);
					
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

int func_1(Hash hParam0) // Position - 0x162 Hash - 0x4DAA6E6F ^0x4DAA6E6F
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

void func_2(var uParam0, int iParam1) // Position - 0x33D Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

int func_3(Ped pedParam0, int iParam1) // Position - 0x34A Hash - 0xB13A3864 ^0x7FBAE642
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

int func_4(var uParam0) // Position - 0x361 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_5(int iParam0) // Position - 0x36C Hash - 0x5CC1370C ^0xD6D06081
{
	int num;

	num = func_16(MISC::VAR_STRING(10, "ITEM_TASTED_PUMP_MULT", MISC::VAR_STRING(0, func_15(func_14(iParam0), false)), 1), "", 0, 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	Global_1915220[iParam0 /*4*/] = num;
	return;
}

void func_6(Hash hParam0) // Position - 0x3AF Hash - 0xE510351D ^0xE510351D
{
	!func_17(hParam0, 0);
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x3C2 Hash - 0xDB5B57E1 ^0x4CB48A48
{
	var statId;

	statId = { func_18(joaat("eaten"), func_11(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_20(func_19(joaat("herbs_eaten")), iParam1);
	return;
}

BOOL func_8(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0x3F4 Hash - 0xDDE59C54 ^0xB052B859
{
	int num;
	BOOL flag;
	BOOL flag2;
	int num2;
	Hash hash;

	num = uParam0.f_1;
	flag = uParam0.f_3;
	flag2 = uParam0.f_4;
	num2 = func_1(num);

	if (!flag2 || func_21(num2))
		return 0;

	hash = func_22(num2);

	if (!flag || !func_17(hash, 0) || func_23(hash))
		return 0;

	return 1;
}

void func_9(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x459 Hash - 0xA15BFFCE ^0xA15BFFCE
{
	Hash hash;
	int num;

	hash = func_14(iParam0);
	num = func_1(hash);

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

void func_10(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x4CF Hash - 0x47C8CA5E ^0x47C8CA5E
{
	if (!func_25(iParam0))
		return;

	func_31(func_22(iParam0), 0, bParam1, bParam2, iParam3);
	return;
}

int func_11(int iParam0) // Position - 0x4F6 Hash - 0xBA965109 ^0xDF65C4FE
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
			return 1516353659;
	
		case 20:
			return joaat("herb_hummingbird_sage");
	
		case 21:
			return joaat("herb_indian_tobacco");
	
		case 22:
			return joaat("herb_lady_of_night_orchid");
	
		case 23:
			return joaat("herb_lady_slipper_orchid");
	
		case 24:
			return joaat("herb_milkweed");
	
		case 25:
			return joaat("herb_moccasin_flower_orchid");
	
		case 26:
			return joaat("herb_night_scented_orchid");
	
		case 27:
			return joaat("herb_oleander_sage");
	
		case 28:
			return joaat("herb_oregano");
	
		case 29:
			return joaat("herb_parasol_mushroom");
	
		case 30:
			return joaat("herb_prairie_poppy");
	
		case 31:
			return joaat("herb_queens_orchid");
	
		case 32:
			return joaat("herb_rams_head");
	
		case 33:
			return joaat("herb_rat_tail_orchid");
	
		case 34:
			return joaat("herb_red_raspberry");
	
		case 35:
			return joaat("herb_red_sage");
	
		case 36:
			return joaat("herb_sparrows_egg_orchid");
	
		case 37:
			return joaat("herb_spider_orchid");
	
		case 38:
			return joaat("herb_vanilla_flower");
	
		case 39:
			return joaat("herb_violet_snowdrop");
	
		case 40:
			return joaat("herb_wild_flwr_agarita");
	
		case 41:
			return joaat("herb_wild_flwr_blue_bonnet");
	
		case 42:
			return joaat("herb_wild_flwr_bitterweed");
	
		case 43:
			return joaat("herb_wild_flwr_blood_flower");
	
		case 44:
			return joaat("herb_wild_flwr_cardinal_flower");
	
		case 45:
			return joaat("herb_wild_flwr_chocolate_daisy");
	
		case 46:
			return joaat("herb_wild_flwr_creek_plum");
	
		case 47:
			return joaat("herb_wild_flwr_rhubarb");
	
		case 48:
			return joaat("herb_wild_flwr_wisteria");
	
		case 49:
			return joaat("herb_wild_carrots");
	
		case 50:
			return joaat("herb_wild_feverfew");
	
		case 51:
			return joaat("herb_wild_mint");
	
		case 52:
			return joaat("herb_wintergreen_berry");
	
		case 53:
			return joaat("herb_yarrow");
	}

	return 0;
}

void func_12(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x88C Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_32(iParam0, &num, &num2);

	if (!func_33(iParam0, num, num2, bParam2))
		return;

	if (!func_34(iParam0, 1024))
		return;

	func_35(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_13() // Position - 0x8EC Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

Hash func_14(int iParam0) // Position - 0x8F8 Hash - 0xBA965109 ^0xA132DCEE
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

Hash func_15(Hash hParam0, BOOL bParam1) // Position - 0xBB3 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_17(hParam0, 0))
		return 0;

	hash = func_36(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

int func_16(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xBE1 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_37(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_17(Hash hParam0, int iParam1) // Position - 0xC44 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

struct<2> func_18(int iParam0, int iParam1) // Position - 0xC5E Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

struct<2> func_19(int iParam0) // Position - 0xC74 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_20(var uParam0, var uParam1, int iParam2) // Position - 0xC86 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_21(int iParam0) // Position - 0xCA3 Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_25(iParam0))
		return false;

	return func_38(iParam0, 4, true);
}

Hash func_22(int iParam0) // Position - 0xCC1 Hash - 0xD54AECF6 ^0xF5B76F98
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
	
		case 20:
			return joaat("consumable_potent_tonic");
	
		case 21:
			return joaat("consumable_potent_snake_oil");
	
		case 24:
			return joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED");
	
		case 27:
			return joaat("consumable_potent_herbivore_bait");
	
		case 30:
			return joaat("consumable_potent_restorative");
	
		case 35:
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
	
		case 39:
			return joaat("consumable_potent_herbivore_bait");
	
		case 50:
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
	
		case 53:
			return joaat("consumable_potent_medicine");
	}

	return 0;
}

BOOL func_23(Hash hParam0) // Position - 0xDF0 Hash - 0xAD430840 ^0x833C1E45
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
			if (outData.f_2 == joaat("cost_type_craft") && !func_39(hParam0, outData, true))
				return true;
	}

	return false;
}

void func_24(int iParam0, BOOL bParam1) // Position - 0xE52 Hash - 0xFA676C9B ^0xFA676C9B
{
	if (!func_25(iParam0))
		return;

	Global_17418[iParam0] = Global_17418[iParam0] || bParam1;
	return;
}

BOOL func_25(int iParam0) // Position - 0xE78 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

void func_26(int iParam0, BOOL bParam1) // Position - 0xE85 Hash - 0xF33798D9 ^0x8C787B55
{
	if (!func_25(iParam0))
		return;

	if (func_40(iParam0))
		return;

	func_24(iParam0, 2);

	if (bParam1)
		if (!func_29(0, false, true))
			func_41(true, 1017438712);

	return;
}

BOOL func_27(int iParam0) // Position - 0xEC8 Hash - 0x94F42F3F ^0x94F42F3F
{
	if (!func_25(iParam0))
		return false;

	return func_38(iParam0, true, true);
}

void func_28(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xEE6 Hash - 0x65D4C438 ^0x65D4C438
{
	if (!func_25(iParam0))
		return;

	if (func_27(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_42(iParam0);

	if (!bParam1)
		func_43(iParam0);

	func_24(iParam0, true);
	func_26(iParam0, true);

	if (bParam2)
		if (!func_29(0, false, true))
			func_30(true, 6);

	return;
}

BOOL func_29(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF48 Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_44())
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

	if (iParam0 == 0 && func_46(func_45(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_47(func_45(0)))
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

void func_30(BOOL bParam0, int iParam1) // Position - 0x10BE Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_48(&Global_0, 8);

	if (!func_49() || func_50() != -1)
		return;

	func_48(&Global_0, 1);
	return;
}

int func_31(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1104 Hash - 0x9850C0DA ^0x9850C0DA
{
	BOOL flag;
	int acquireCostsCount;
	Hash outData;
	int i;

	if (!func_17(hParam0, 0))
		return 0;

	if (hParam1 != 0 && !func_39(hParam0, hParam1, true))
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
				if (outData.f_2 == joaat("cost_type_craft") && func_39(hParam0, outData, true))
					if (func_51(hParam0, outData))
						flag = true;
		}
	}
	else if (func_51(hParam0, hParam1))
	{
		flag = true;
	}

	if (flag)
		if (!bParam2)
			if (func_50() != -1)
				func_52(573, true);
			else
				func_52(235, false);

	if (bParam3)
		if (!func_29(0, false, true))
			func_30(true, 5);

	if (flag)
		return 1;

	return 0;
}

void func_32(int iParam0, var uParam1, var uParam2) // Position - 0x11F6 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_33(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1212 Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_53(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_54(iParam0))
		return false;

	if (func_55(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_34(iParam0, 1) || func_56(32768))
		if (!func_34(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_57())
		return false;

	return true;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0x12B4 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_35(int iParam0, int iParam1) // Position - 0x12CD Hash - 0x978E21B ^0xA1438975
{
	var address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

Hash func_36(Hash hParam0, BOOL bParam1) // Position - 0x12F1 Hash - 0x581C3BDD ^0x885559CA
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

void func_37(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x138C Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_38(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13BD Hash - 0x77ECC81C ^0xEFBF0FBE
{
	if (bParam2)
		if (!func_25(iParam0))
			return false;

	if (Global_1572887.f_14 != -1)
		return Global_17418[iParam0] && bParam1 != false;

	return Global_38.f_4675[iParam0] && bParam1 != false;
}

BOOL func_39(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1400 Hash - 0x1244E24C ^0xA4727049
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_17(hParam0, 0))
		return func_59(func_58(hParam0), hParam1, bParam2);

	if (func_60(hParam0) || func_61(hParam0, 1077060302))
		return func_63(func_62(hParam0, true), hParam1);

	unk = 10;

	if (bParam2 && func_50() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return true;

	if (!func_64(hParam0, hParam1, &unk, &num) || num < 1)
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

BOOL func_40(int iParam0) // Position - 0x14C5 Hash - 0xE139661B ^0xE139661B
{
	if (!func_25(iParam0))
		return false;

	return func_38(iParam0, 2, true);
}

int func_41(BOOL bParam0, int iParam1) // Position - 0x14E3 Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_65())
		return 0;

	if (!func_66())
		return 0;

	Global_0 = iParam1;

	if (bParam0)
		func_48(&Global_0, 8);

	func_48(&Global_0, 1);
	return 1;
}

BOOL func_42(int iParam0) // Position - 0x1539 Hash - 0xA376F75 ^0xA376F75
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

void func_43(int iParam0) // Position - 0x15A6 Hash - 0x3B9D9F25 ^0x3B9D9F25
{
	switch (iParam0)
	{
		case 2:
			func_52(243, false);
			break;
	
		case 3:
			func_52(244, false);
			break;
	
		case 4:
			func_52(263, false);
			break;
	
		case 5:
			func_52(239, false);
			break;
	
		case 6:
			func_52(259, false);
			break;
	
		case 7:
			func_52(256, false);
			break;
	
		case 8:
			func_52(264, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_52(267, false);
			break;
	
		case 13:
			func_52(250, false);
			break;
	
		case 15:
			func_52(246, false);
			break;
	
		case 16:
			func_52(240, false);
			break;
	
		case 18:
			func_52(258, false);
			break;
	
		case 19:
			func_52(251, false);
			break;
	
		case 20:
			func_52(252, false);
			break;
	
		case 21:
			func_52(257, false);
			break;
	
		case 24:
			func_52(247, false);
			break;
	
		case 27:
			func_52(249, false);
			break;
	
		case 28:
			func_52(268, false);
			break;
	
		case 29:
			func_52(265, false);
			break;
	
		case 30:
			func_52(260, false);
			break;
	
		case 32:
			func_52(266, false);
			break;
	
		case 34:
			func_52(241, false);
			break;
	
		case 35:
			func_52(253, false);
			break;
	
		case 38:
			func_52(248, false);
			break;
	
		case 39:
			func_52(254, false);
			break;
	
		case 49:
			func_52(261, false);
			break;
	
		case 50:
			func_52(255, false);
			break;
	
		case 51:
			func_52(269, false);
			break;
	
		case 52:
			func_52(242, false);
			break;
	
		case 53:
			func_52(245, false);
			break;
	}

	return;
}

BOOL func_44() // Position - 0x17AC Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_46(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

struct<2> func_45(int iParam0) // Position - 0x1804 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_46(var uParam0, var uParam1) // Position - 0x1818 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_67(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_68(uParam0))
		return false;

	return true;
}

int func_47(var uParam0, var uParam1) // Position - 0x184C Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

void func_48(int iParam0, int iParam1) // Position - 0x1856 Hash - 0x53A96DDB ^0xB6A79257
{
	iParam0->f_2 = iParam0->f_2 || iParam1;
	return;
}

BOOL func_49() // Position - 0x1869 Hash - 0x65674CA9 ^0xC0D8F466
{
	return true;
}

int func_50() // Position - 0x1888 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_51(Hash hParam0, Hash hParam1) // Position - 0x1896 Hash - 0xD62E0B98 ^0xD62E0B98
{
	BOOL flag;
	int num;
	var unk;
	Hash unlockHash;
	int i;

	if (func_50() != -1)
		return false;

	unk = 10;

	if (func_64(hParam0, hParam1, &unk, &num))
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

void func_52(int iParam0, BOOL bParam1) // Position - 0x18FF Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_32(iParam0, &num, &num2);

	if (!func_33(iParam0, num, num2, bParam1))
		return;

	func_35(num, num2);
	return;
}

BOOL func_53(int iParam0, int iParam1) // Position - 0x192C Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_54(int iParam0) // Position - 0x1944 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_34(iParam0, 4))
		return false;

	return true;
}

BOOL func_55(int iParam0) // Position - 0x195B Hash - 0x7F4C96B ^0x650690F6
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

BOOL func_56(int iParam0) // Position - 0x1A27 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_57() // Position - 0x1A3A Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_66())
		return false;

	return Global_1904402.f_8873;
}

Hash func_58(Hash hParam0) // Position - 0x1A55 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_59(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1A5F Hash - 0x5E278D9E ^0x9ED660B8
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_69(hParam0, 2))
		return 0;

	unk = 10;

	if (bParam2 && func_50() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return 1;

	if (!func_70(hParam0, hParam1, &unk, &num) || num < 1)
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

BOOL func_60(Hash hParam0) // Position - 0x1AED Hash - 0x672E565C ^0xD531C7FC
{
	if (func_61(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_61(Hash hParam0, Hash hParam1) // Position - 0x1B08 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_17(hParam0, 0))
		return func_71(func_58(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_62(Hash hParam0, BOOL bParam1) // Position - 0x1B49 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_17(hParam0, 0))
		return func_72(func_58(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

BOOL func_63(Hash hParam0, var uParam1) // Position - 0x1BA1 Hash - 0x86D562BB ^0xB258F193
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

BOOL func_64(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x1CEA Hash - 0xE87847ED ^0xAF7DC6D
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

	if (outData.f_35 > 10)
		outData.f_35 = 10;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

BOOL func_65() // Position - 0x1D6E Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

BOOL func_66() // Position - 0x1D7D Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_67(int iParam0) // Position - 0x1D91 Hash - 0x5000025C ^0x5000025C
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

int func_68(int iParam0) // Position - 0x1DD0 Hash - 0xE34A477A ^0xE34A477A
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

BOOL func_69(Hash hParam0, int iParam1) // Position - 0x1E66 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_70(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x1E80 Hash - 0x8EAA10FC ^0x9E3F883B
{
	var unk;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_69(hParam0, 2))
		return false;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!func_73(hParam0, hParam1, &unk))
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

BOOL func_71(Hash hParam0, Hash hParam1) // Position - 0x1F04 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_69(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

Hash func_72(Hash hParam0, BOOL bParam1) // Position - 0x1F3A Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_69(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

BOOL func_73(Hash hParam0, var uParam1, Any anParam2) // Position - 0x1F73 Hash - 0x29542237 ^0x85ED2DB5
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

