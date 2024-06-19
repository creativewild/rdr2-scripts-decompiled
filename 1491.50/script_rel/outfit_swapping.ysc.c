#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 1088421888;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
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

void main() // Position - 0x0 Hash - 0x29DE3345 ^0xD80F2E71
{
	iLocal_0.f_4 = func_1(uScriptParam_0.f_1);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_2();

	if (iLocal_0.f_4 != -1 && iLocal_0.f_4 != Global_40.f_7729)
	{
		iLocal_0.f_5 = func_3(iLocal_0.f_4);
	
		if (func_4(Global_35, iLocal_0.f_5))
		{
			if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits"))
				iLocal_0.f_2 = DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits");
		
			Global_1905943 = true;
			iLocal_0.f_1 = 1;
			Global_1905941 = iLocal_0.f_4;
		
			if (iLocal_0.f_2 || Global_1935630.f_2 != Global_40.f_39 || ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39 || PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || Global_1879534.f_1)
				func_5(&iLocal_0, 3);
		
			while (iLocal_0 < 3)
			{
				func_6(&iLocal_0);
				BUILTIN::WAIT(0);
			}
		}
	}

	func_2();
	return;
}

int func_1(Hash hParam0) // Position - 0xE1 Hash - 0x9830D1FB ^0x9830D1FB
{
	switch (hParam0)
	{
		case -2114499732:
			return 18;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
	
		case -1951220140:
			return 78;
	
		case -1914506115:
			return 71;
	
		case -1826731591:
			return 24;
	
		case -1725704631:
			return 81;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
	
		case -1611873049:
			return 91;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
	
		case -1476781101:
			return 10;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
	
		case -1303643297:
			return 86;
	
		case -1300731953:
			return 74;
	
		case -1243402388:
			return 66;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
	
		case -1205612021:
			return 70;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
	
		case -978578725:
			return 94;
	
		case -926815459:
			return 72;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
	
		case -769081407:
			return 16;
	
		case -659341240:
			return 85;
	
		case -535599244:
			return 89;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
	
		case -409616653:
			return 65;
	
		case -389591806:
			return 73;
	
		case -361635024:
			return 62;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
	
		case -291256376:
			return 23;
	
		case -272211555:
			return 61;
	
		case -55563408:
			return 64;
	
		case -19271249:
			return 82;
	
		case 65931886:
			return 67;
	
		case 162509669:
			return 3;
	
		case 166243423:
			return 0;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
	
		case 214175524:
			return 84;
	
		case 274995506:
			return 5;
	
		case 294553332:
			return 11;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
	
		case 411856831:
			return 88;
	
		case 439606975:
			return 14;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
	
		case 523337834:
			return 80;
	
		case 594312243:
			return 92;
	
		case 624063935:
			return 9;
	
		case 635948769:
			return 4;
	
		case 688004210:
			return 20;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
	
		case 800827126:
			return 19;
	
		case 802495462:
			return 75;
	
		case 842905332:
			return 77;
	
		case 890706995:
			return 93;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
	
		case 1156438275:
			return 90;
	
		case 1160643979:
			return 8;
	
		case 1164374808:
			return 7;
	
		case 1201189539:
			return 28;
	
		case 1257427489:
			return 83;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
	
		case 1351927599:
			return 21;
	
		case 1352942778:
			return 26;
	
		case 1371678229:
			return 68;
	
		case 1383300684:
			return 1;
	
		case 1389254668:
			return 58;
	
		case 1460520700:
			return 76;
	
		case 1511551084:
			return 79;
	
		case 1560492757:
			return 15;
	
		case 1661121390:
			return 6;
	
		case 1784889667:
			return 13;
	
		case 1788874135:
			return 12;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
	
		case 1902428294:
			return 17;
	
		case 1964379549:
			return 27;
	
		case 2032023096:
			return 22;
	
		case 2038771525:
			return 87;
	
		case 2051441678:
			return 2;
	
		case 2102263084:
			return 69;
	
		case 2119049229:
			return 25;
	
		default:
		
	}

	return -1;
}

void func_2() // Position - 0x4F4 Hash - 0x6A27DD89 ^0x6252224B
{
	if (iLocal_0.f_1)
	{
		Global_1905943 = false;
		func_7(2);
		func_7(true);
		STREAMING::REMOVE_ANIM_DICT(func_8());
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_3(int iParam0) // Position - 0x51E Hash - 0xF3E1A6C ^0xC4537344
{
	switch (iParam0)
	{
		case 23:
			return -1817923036;
	
		default:
		
	}

	return joaat("META_OUTFIT_COOL_WEATHER");
}

BOOL func_4(Ped pedParam0, Hash hParam1) // Position - 0x541 Hash - 0x902FAF7B ^0x852CA371
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

void func_5(var uParam0, int iParam1) // Position - 0x56F Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_6(var uParam0) // Position - 0x57C Hash - 0x21D001ED ^0x31F85EC1
{
	switch (*uParam0)
	{
		case 0:
			uParam0->f_3 = uParam0->f_3 - MISC::GET_FRAME_TIME();
		
			if (func_9() || uParam0->f_3 <= 0f)
			{
				func_10(true);
				func_7(2);
				func_5(uParam0, 1);
			}
			break;
	
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
				return;
		
			func_11();
		
			if (func_13(func_12(uParam0->f_4)))
				INVENTORY::_0x46743BBFEDBC859E(func_14(false), func_12(uParam0->f_4), true);
		
			func_15(Global_35, uParam0->f_4, false, true, 0);
			func_16(uParam0->f_4);
			func_17(MISC::VAR_STRING(10, "OUT_SWAP", MISC::VAR_STRING(0, func_12(uParam0->f_4))), 10000, 0, 0, 0, true);
			func_5(uParam0, 2);
			break;
	
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
				return;
		
			func_18(Global_1905941, 4096);
			func_19(Global_40.f_7729, 4096);
			Global_40.f_7729 = uParam0->f_4;
			func_20(26, 0, 0, 0, false);
			func_5(uParam0, 3);
			break;
	}

	return;
}

void func_7(BOOL bParam0) // Position - 0x68B Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

char* func_8() // Position - 0x6A3 Hash - 0x5038EB0A ^0x5038EB0A
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

BOOL func_9() // Position - 0x6AE Hash - 0xE056BE13 ^0x80E86C97
{
	STREAMING::REQUEST_ANIM_DICT(func_8());

	if (STREAMING::HAS_ANIM_DICT_LOADED(func_8()))
	{
		func_10(1);
		return true;
	}

	return false;
}

void func_10(BOOL bParam0) // Position - 0x6D3 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

int func_11() // Position - 0x6E6 Hash - 0xB5C5F1C6 ^0x687E970D
{
	Hash weaponHash;
	Hash weaponHash2;
	int num;
	BOOL currentPedWeapon;
	BOOL currentPedWeapon2;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();
	currentPedWeapon = WEAPON::GET_CURRENT_PED_WEAPON(ped, &weaponHash, true, 0, false);
	currentPedWeapon2 = WEAPON::GET_CURRENT_PED_WEAPON(ped, &weaponHash2, true, 1, false);

	if (func_21(weaponHash) || func_21(weaponHash2) || WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
		return 0;

	if (PED::GET_PED_RESET_FLAG(ped, 267))
		return 0;

	if (currentPedWeapon)
	{
		num = func_22(weaponHash);
	
		switch (num)
		{
			case joaat("GROUP_SNIPER"):
			case joaat("group_repeater"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				func_23(1);
				return 1;
		
			case joaat("group_revolver"):
				return 0;
		
			case joaat("GROUP_PISTOL"):
				return 0;
		
			default:
			
		}
	
		if (weaponHash == joaat("WEAPON_UNARMED"))
			func_23(2);
	}

	if (currentPedWeapon2)
	{
		if (weaponHash2 != joaat("WEAPON_UNARMED"))
			func_23(0);
	
		return 1;
	}

	func_23(2);
	return 1;
}

Hash func_12(eStackSize essParam0) // Position - 0x7BA Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (essParam0)
	{
		case 0:
			return 166243423;
	
		case 1:
			return 1383300684;
	
		case 2:
			return 2051441678;
	
		case 3:
			return 162509669;
	
		case 4:
			return 635948769;
	
		case 5:
			return 274995506;
	
		case 6:
			return 1661121390;
	
		case 7:
			return 1164374808;
	
		case 8:
			return 1160643979;
	
		case 9:
			return 624063935;
	
		case 10:
			return -1476781101;
	
		case 11:
			return 294553332;
	
		case 12:
			return 1788874135;
	
		case 13:
			return 1784889667;
	
		case 14:
			return 439606975;
	
		case 15:
			return 1560492757;
	
		case 16:
			return -769081407;
	
		case 17:
			return 1902428294;
	
		case 18:
			return -2114499732;
	
		case 19:
			return 800827126;
	
		case 20:
			return 688004210;
	
		case 21:
			return 1351927599;
	
		case 22:
			return 2032023096;
	
		case 23:
			return -291256376;
	
		case 24:
			return -1826731591;
	
		case 25:
			return 2119049229;
	
		case 26:
			return 1352942778;
	
		case 27:
			return 1964379549;
	
		case 28:
			return 1201189539;
	
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
	
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
	
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
	
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
	
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
	
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
	
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
	
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
	
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
	
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
	
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
	
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
	
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
	
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
	
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
	
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
	
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
	
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
	
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
	
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
	
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
	
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
	
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
	
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
	
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
	
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
	
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
	
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
	
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
	
		case 58:
			return 1389254668;
	
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
	
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
	
		case 61:
			return -272211555;
	
		case 62:
			return -361635024;
	
		case 64:
			return -55563408;
	
		case 65:
			return -409616653;
	
		case 66:
			return -1243402388;
	
		case 67:
			return 65931886;
	
		case 68:
			return 1371678229;
	
		case 69:
			return 2102263084;
	
		case 70:
			return -1205612021;
	
		case 71:
			return -1914506115;
	
		case 72:
			return -926815459;
	
		case 73:
			return -389591806;
	
		case 74:
			return -1300731953;
	
		case 75:
			return 802495462;
	
		case 76:
			return 1460520700;
	
		case 77:
			return 842905332;
	
		case 78:
			return -1951220140;
	
		case 79:
			return 1511551084;
	
		case 80:
			return 523337834;
	
		case 81:
			return -1725704631;
	
		case 82:
			return -19271249;
	
		case 83:
			return 1257427489;
	
		case 84:
			return 214175524;
	
		case 85:
			return -659341240;
	
		case 86:
			return -1303643297;
	
		case 87:
			return 2038771525;
	
		case 88:
			return 411856831;
	
		case 89:
			return -535599244;
	
		case 90:
			return 1156438275;
	
		case 91:
			return -1611873049;
	
		case 92:
			return 594312243;
	
		case 93:
			return 890706995;
	
		case 94:
			return -978578725;
	
		default:
		
	}

	return 0;
}

BOOL func_13(Hash hParam0) // Position - 0xCEF Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_24(hParam0, &unk);
}

int func_14(BOOL bParam0) // Position - 0xCFF Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_25() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_15(Ped pedParam0, eStackSize essParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0xD40 Hash - 0x72B1BAB5 ^0x553ECF8
{
	Hash hash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (essParam1 == -1)
		return 0;

	hash = func_12(essParam1);

	if (hParam4 != 0)
		hash = hParam4;
	else if (essParam1 > -1 && essParam1 <= 5)
		hash = func_26(essParam1);

	if (bParam3 && func_27(essParam1, 4096) && Global_1946054.f_1497 == hParam4)
		return 1;

	Global_1905941 = essParam1;

	if (essParam1 > 5 || hParam4 != 0 && !func_28(hash, Global_1946054.f_1))
		return 0;

	if (bParam2)
	{
		func_19(Global_40.f_7729, 4096);
		func_18(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		func_29(pedParam0);

	func_30();

	if (!func_31(essParam1))
		func_33(hash, pedParam0, func_32(essParam1), true, false, true);

	func_34(pedParam0);
	return 1;
}

void func_16(eStackSize essParam0) // Position - 0xE4D Hash - 0x31CDA748 ^0x3F6CFD2F
{
	if (!func_35(essParam0))
		return;

	if (DECORATOR::DECOR_EXIST_ON(Global_35, "outfit_tags"))
		DECORATOR::DECOR_REMOVE(Global_35, "outfit_tags");

	DECORATOR::DECOR_SET_INT(Global_35, "outfit_tags", Global_40.f_7157[essParam0 /*3*/].f_2);
	return;
}

int func_17(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xE91 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_18(eStackSize essParam0, BOOL bParam1) // Position - 0xECC Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_35(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

void func_19(eStackSize essParam0, BOOL bParam1) // Position - 0xEF8 Hash - 0x5B5DA81B ^0x5B5DA81B
{
	BOOL flag;

	if (!func_35(essParam0))
		return;

	flag = Global_40.f_7157[essParam0 /*3*/] && bParam1;
	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] - flag;
	return;
}

void func_20(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0xF33 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_10(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_36(num);
	return;
}

BOOL func_21(Hash hParam0) // Position - 0xF65 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_22(Hash hParam0) // Position - 0xF73 Hash - 0x7EAE6538 ^0x2F2C4FF7
{
	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
		return joaat("GROUP_PISTOL");
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
		return joaat("group_revolver");
	else if (WEAPON::IS_WEAPON_REPEATER(hParam0))
		return joaat("group_repeater");
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
		return joaat("GROUP_RIFLE");
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
		return joaat("GROUP_SHOTGUN");
	else if (WEAPON::_IS_WEAPON_SNIPER(hParam0))
		return joaat("GROUP_SNIPER");

	return 0;
}

void func_23(int iParam0) // Position - 0xFF1 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_859 = iParam0;
	return;
}

BOOL func_24(Hash hParam0, var uParam1) // Position - 0x1002 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return 1;
	
		*uParam1 = *uParam1 + 1;
	}

	return 0;
}

BOOL func_25() // Position - 0x1042 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

Hash func_26(eStackSize essParam0) // Position - 0x1050 Hash - 0x7B091E14 ^0x2ED2329F
{
	if (essParam0 == -1)
		essParam0 = func_37();

	if (func_25() == -1)
		return Global_26796.f_26[essParam0 /*120*/].f_1;

	return Global_36638.f_45.f_350.f_26[essParam0 /*120*/].f_1;
}

BOOL func_27(eStackSize essParam0, BOOL bParam1) // Position - 0x108A Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_35(essParam0))
		return false;

	return Global_40.f_7157[essParam0 /*3*/] && bParam1 != false;
}

BOOL func_28(Hash hParam0, int iParam1) // Position - 0x10AF Hash - 0xD3FACC08 ^0xE7B5B402
{
	int num;

	num = func_38(iParam1);
	func_39(&(Global_1946054.f_964), num, hParam0, -897569541, 1, iParam1);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	return DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964));
}

void func_29(Ped pedParam0) // Position - 0x10EC Hash - 0x4AEF8F1A ^0x3B160125
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_30() // Position - 0x1108 Hash - 0x6FCB9635 ^0xD65C3862
{
	char* animName;

	if (PED::IS_PED_RAGDOLL(Global_35))
		return;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
		return;

	if (!func_40(1))
		return;

	animName = "outfit_change_unarmed";

	switch (Global_1946054.f_859)
	{
		case 0:
			animName = "outfit_change_offhand";
			break;
	
		case 1:
			animName = "outfit_change_longarms";
			break;
	
		case 2:
			animName = "outfit_change_unarmed";
			break;
	}

	TASK::TASK_PLAY_ANIM(Global_35, func_8(), animName, 1090519040, -1056964608, -1, 67108880, 0, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_7(true);
	STREAMING::REMOVE_ANIM_DICT(func_8());
	return;
}

BOOL func_31(eStackSize essParam0) // Position - 0x11A4 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

int func_32(eStackSize essParam0) // Position - 0x11AD Hash - 0x3D48653D ^0x3D48653D
{
	switch (essParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_33(Hash hParam0, Ped pedParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x11FA Hash - 0xBF38E26 ^0xBF38E26
{
	BOOL flag;
	int num;
	Hash hash;
	eStackSize stackSize;
	eStackSize stackSize2;

	flag = false;
	num = 0;
	hash = hParam0;
	stackSize = -1;
	stackSize2 = func_1(hParam0);

	if (stackSize2 >= 0 && stackSize2 <= 5)
		stackSize = stackSize2;

	if (func_25() != -1)
		return;

	func_41();

	if (bParam5)
		if (!func_42(&(Global_1946054.f_1378), &flag, hash, stackSize, true, 0))
			return;

	if (func_40(32768) && Global_1946054.f_1378.f_1[10 /*3*/] != Global_1946054.f_57[10 /*11*/])
		func_43();

	func_44(stackSize, true, true, 1, true, true);
	func_20(31, 0, 0, 0, false);
	func_45(0);

	if (!bParam3)
		return;

	if (flag)
		num = 8;

	if (!bParam4)
		if (PED::IS_PED_A_PLAYER(pedParam1))
			func_20(2, num, 2, 0, false);
		else
			func_20(2, num, 3, pedParam1, false);
	else
		func_46(&(Global_1946054.f_1497), pedParam1, true, -1, true, true, true);

	return;
}

void func_34(Ped pedParam0) // Position - 0x12ED Hash - 0x9F09B1F5 ^0xEB2FD9D2
{
	PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(pedParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
	return;
}

BOOL func_35(eStackSize essParam0) // Position - 0x1316 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

void func_36(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1335 Hash - 0x21CB5355 ^0x21CB5355
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
		case 26:
			if (Global_1946054.f_850 >= 25)
				return;
		
			if (func_47(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_48(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_10(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_47(iParam0))
				return;
		
			func_48(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_10(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_49(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

eStackSize func_37() // Position - 0x1541 Hash - 0x2BA7679 ^0x402F4D9C
{
	if (func_25() == -1)
		return Global_26796.f_776;

	return Global_36638.f_45.f_350.f_1011;
}

int func_38(int iParam0) // Position - 0x1565 Hash - 0x68D06F4A ^0x14E98A5E
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_50();

	if (func_25() == -1)
		if (iParam0 == 1160113249)
			num = 1583685020;
		else
			num = -572793833;
	else
		num = -2109211296;

	return num;
}

void func_39(Any* panParam0, int iParam1, Hash hParam2, int iParam3, int iParam4, int iParam5) // Position - 0x15A8 Hash - 0x2E9AB941 ^0x44CE1BA8
{
	*panParam0 = iParam1;
	panParam0->f_1 = hParam2;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = iParam4;
	panParam0->f_4 = iParam5;
	panParam0->f_6 = 0;
	panParam0->f_5 = 0;
	return;
}

BOOL func_40(BOOL bParam0) // Position - 0x15D7 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_41() // Position - 0x15E8 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

BOOL func_42(Hash hParam0, var uParam1, Hash hParam2, eStackSize essParam3, BOOL bParam4, int iParam5) // Position - 0x162F Hash - 0x27046CB6 ^0xE856FDF2
{
	int num;

	if (!func_51(hParam0, essParam3, hParam2) && !func_52(hParam0, hParam2, uParam1, false, bParam4, false, 0))
		return false;

	num = 10;

	if (func_40(32768))
		if (!*uParam1 || *uParam1 && hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
			func_53(1108822547);
		else
			func_54(1108822547);

	func_55(hParam0, false, 0);
	func_56(iParam5);
	return true;
}

void func_43() // Position - 0x16B9 Hash - 0xB6203BF0 ^0x217DD714
{
	func_57(&(Global_1946054.f_2776));
	func_7(32768);
	func_58(1108822547, 8, 6);
	return;
}

void func_44(eStackSize essParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x16E0 Hash - 0xCE22FE97 ^0xCE22FE97
{
	eStackSize stackSize;
	int num;

	num = 1;

	if (bParam2)
		if (essParam0 == -1 || essParam0 == func_37() || bParam5)
			func_59();

	if (func_25() == -1)
	{
		stackSize = Global_40.f_7729;
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
			stackSize = Global_1905941;
	
		if (bParam4 && stackSize > 5 && func_60(Global_1946054.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				stackSize = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_12(Global_40.f_7729);
				Global_1946054.f_1378 = func_12(Global_40.f_7729);
				iParam3 = 1;
			}
		}
	
		num = func_32(stackSize);
	}

	if (iParam3 && num)
		func_61(essParam0, false, 6);

	if (bParam1)
		func_62(false, true);

	func_56(0);
	return;
}

void func_45(int iParam0) // Position - 0x182D Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_63(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_64(num);
	return;
}

void func_46(Hash hParam0, Ped pedParam1, BOOL bParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1871 Hash - 0xABE0892F ^0x49EF76F7
{
	int i;
	int num;
	Hash componentHash;
	int num2;
	BOOL isMp;

	isMp = func_25() != -1;
	Global_1946054.f_857 = 0;

	if (hParam3 == -1 && bParam6)
	{
		PED::_RESET_PED_COMPONENTS(pedParam1);
	
		if (!isMp)
		{
			if (Global_1347477.f_189 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_189);
		
			if (Global_1946054.f_1 == -2125499975 || Global_1946054.f_1 == -449205311 && Global_1347477.f_190 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_190);
		
			func_10(262144);
		}
	}
	else
	{
		bParam6 = false;
	
		if (hParam3 == -1 || hParam3 == 8)
		{
			func_65(pedParam1, 29, isMp, true, 0);
			func_65(pedParam1, 31, isMp, true, 0);
			func_65(pedParam1, 30, isMp, true, 0);
			func_65(pedParam1, 22, isMp, true, 0);
			func_65(pedParam1, 37, isMp, true, 0);
		}
	}

	if (func_40(32768) && func_66(1108822547, 8) && func_67(10, hParam3))
		func_68(pedParam1, false, true);

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num2 = func_69(num, 1);
		
			if (func_66(num2, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else
			{
				componentHash = hParam0->f_1[num /*3*/];
			
				if (!func_67(num, hParam3))
				{
				}
				else if (func_66(num2, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/] || hParam0->f_1[num /*3*/].f_1 == 289238755)
				{
					if (!func_66(num2, 1) || bParam2)
					{
						Global_1946054.f_857 = Global_1946054.f_857 + 1;
					
						if (!bParam6)
							func_65(pedParam1, num, isMp, true, 0);
					
						if (hParam0->f_1[num /*3*/].f_1 == 289238755)
							Global_1946054.f_2456[num /*2*/].f_1 = 289238755;
					
						func_70(num2, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if (!bParam2 && hParam0->f_1[num /*3*/] == Global_1946054.f_2456[num /*2*/] && hParam0->f_1[num /*3*/].f_1 == Global_1946054.f_2456[num /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946054.f_57[num /*11*/].f_1 > 1)
								func_65(pedParam1, num, isMp, true, hParam0->f_1[num /*3*/]);
						
							Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
							Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
						
							if (func_66(num2, 1))
								func_58(num2, 1, 6);
						
							Global_1946054.f_857 = Global_1946054.f_857 + 1;
							PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
						
							if (hParam0->f_1[num /*3*/].f_1 != 0)
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
						}
					}
				
					Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
					Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
				
					if (func_66(num2, 1))
						func_58(num2, 1, 6);
				
					Global_1946054.f_857 = Global_1946054.f_857 + 1;
					PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
				
					if (hParam0->f_1[num /*3*/].f_1 != 0)
						PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
				}
			}
		}
	}

	if (Global_1946054.f_857 <= 0)
		return;

	if (bParam4)
	{
		PED::_0xAAB86462966168CE(pedParam1, isMp);
		PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, bParam5);
	}

	return;
}

BOOL func_47(int iParam0) // Position - 0x1BBA Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_48(int iParam0) // Position - 0x1BCF Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_49(int iParam0, var uParam1, var uParam2) // Position - 0x1BEF Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = uParam2;
	num = iParam0;
	num.f_2 = uParam1;
	func_64(num);
	return;
}

int func_50() // Position - 0x1C0F Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_51(Hash hParam0, eStackSize essParam1, Hash hParam2) // Position - 0x1C1D Hash - 0xF7A7FB9C ^0xF7A7FB9C
{
	if (essParam1 == -1)
		return false;

	if (hParam2 != 0 && func_26(essParam1) != hParam2)
		return false;

	if (func_71(2, essParam1))
	{
		func_72(hParam0, essParam1);
		return true;
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_52(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x1C5F Hash - 0xC258D89B ^0x96AA147F
{
	int num;
	int i;
	BOOL flag;
	int num2;
	int num3;

	num3 = func_38(iParam6);
	num3.f_1 = hParam1;
	num3.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num3);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num3, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 2049745650);
	*uParam2 = flag;
	Global_1946054.f_2652 = 0;

	if (!flag && !bParam3)
		func_74(hParam0, func_73(num), true);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1409451727))
		{
		}
		else
		{
			num2 = num;
			i = func_75(num2, 1);
		
			if (i < 0 || i > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, joaat("Component")))
			{
			}
			else
			{
				Global_1946054.f_2612[Global_1946054.f_2652] = i;
				Global_1946054.f_2652 = Global_1946054.f_2652 + 1;
				hParam0->f_1[i /*3*/] = num;
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1441384))
						hParam0->f_1[i /*3*/].f_1 = joaat("base");
					else
						goto 0x157;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1194786549))
					if (func_76(num2) && func_77(hParam0->f_1[i /*3*/], num2, &num))
						hParam0->f_1[i /*3*/].f_1 = num;
				else
					hParam0->f_1[i /*3*/].f_1 = num;
			}
		}
	}

	if (flag)
	{
		for (i = 0; i < Global_1946054.f_2652; i = i + 1)
		{
			func_78(hParam0, hParam0->f_1[Global_1946054.f_2612[i] /*3*/], Global_1946054.f_2612[i], false, false);
		}
	}

	if (bParam4)
		*hParam0 = hParam1;

	return true;
}

void func_53(int iParam0) // Position - 0x1E14 Hash - 0x65A082AE ^0x65A082AE
{
	func_58(iParam0, 8, 6);
	return;
}

void func_54(int iParam0) // Position - 0x1E25 Hash - 0x65A082AE ^0x65A082AE
{
	func_70(iParam0, 8, 6);
	return;
}

void func_55(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1E36 Hash - 0xE06CF505 ^0xBC49746F
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int num7;

	flag = func_25() != -1;
	num6 = func_79(0);

	if (func_40(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_69(num, 1);
		
			if (func_66(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_66(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_80(hParam0->f_1[num /*3*/], num5, num6, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num7 = func_81(hParam0);

	if (num3 > 0)
	{
		if (!func_40(524288))
		{
			func_10(524288);
			num2 = num2 - num7;
		}
	
		for (i = num3; i <= 38; i = i + 1)
		{
			num = Global_1946054.f_57.f_430[i];
		
			if (num <= -1 || num >= 39)
			{
			}
			else
			{
				num5 = func_69(num, 1);
			
				if (func_66(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_66(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_80(hParam0->f_1[num /*3*/], num5, num6, flag);
				
					if (num2 + num4 > 31)
					{
						hParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						hParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_82(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num7 < 31)
		func_7(524288);

	return;
}

void func_56(int iParam0) // Position - 0x2053 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

void func_57(var uParam0) // Position - 0x2064 Hash - 0x7C3D914C ^0xB1998A7B
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;

	if (uParam0->f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_13);

	uParam0->f_12 = 0;
	return;
}

void func_58(int iParam0, int iParam1, int iParam2) // Position - 0x20C2 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_75(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_75(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_75(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_59() // Position - 0x2101 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1497 = Global_1946054.f_1378;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1497.f_1[i /*3*/] = { Global_1946054.f_1378.f_1[i /*3*/] };
	}

	return;
}

BOOL func_60(Hash hParam0) // Position - 0x2148 Hash - 0x3C376408 ^0xEF328608
{
	int num;
	BOOL num2;

	num = func_38(0);
	num2 = 0;
	func_39(&(Global_1946054.f_964), num, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
		return false;

	if (!DATAFILE::_PARSEDDATA_GET_BOOL(&num2, &(Global_1946054.f_964), -1516819610))
		return false;

	return num2;
}

void func_61(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x21A6 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_83(&(Global_1946054.f_1378), essParam0);
	func_84(2, essParam0, 6);

	if (bParam1)
		func_62(false, true);

	return;
}

void func_62(BOOL bParam0, BOOL bParam1) // Position - 0x21CE Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_56(0);

	if (bParam0)
	{
		func_10(8);
		func_10(512);
	}
	else
	{
		func_10(8);
		func_10(16);
	}

	return;
}

BOOL func_63(int iParam0, int iParam1) // Position - 0x2201 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_64(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2210 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_47(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_47(20))
				return;
		}
	}

	func_48(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_10(8);
	return;
}

void func_65(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x2314 Hash - 0x767FA5CE ^0x6D58A5B0
{
	int i;
	Hash shopItemComponentCategory;
	int num;

	num = func_69(iParam1, 1);

	if (!bParam2 && num == joaat("MP_COMPONENT_TYPE_BEARD"))
		bParam3 = false;

	if (hParam4 != 0)
		if (num == 1108822547)
			shopItemComponentCategory = func_85(hParam4);
		else if (hParam4 != Global_1946054.f_57[iParam1 /*11*/])
			shopItemComponentCategory = PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(hParam4, PED::_GET_META_PED_TYPE(pedParam0), bParam2);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_57[iParam1 /*11*/].f_1; i = i + 1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[i] != shopItemComponentCategory)
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[i], 0, bParam2);
		}
	}
	else
	{
		for (i = 0; i < Global_1946054.f_57[iParam1 /*11*/].f_1; i = i + 1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[i] != shopItemComponentCategory)
				PED::REMOVE_TAG_FROM_META_PED(pedParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[i], 0);
		}
	}

	return;
}

BOOL func_66(int iParam0, int iParam1) // Position - 0x2411 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_75(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

BOOL func_67(int iParam0, Hash hParam1) // Position - 0x242F Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && hParam1 != false;
}

void func_68(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2448 Hash - 0x1EA557EC ^0xC168425
{
	int num;

	num = 10;

	if (func_66(1108822547, 6))
	{
		if (bParam2)
		{
			func_65(pedParam0, num, func_25() != -1, false, 0);
			func_70(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(pedParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_58(1108822547, 1, 6);
	}

	Global_1946054.f_857 = Global_1946054.f_857 + 1;

	if (!bParam1)
		return;

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

int func_69(int iParam0, int iParam1) // Position - 0x2510 Hash - 0xE1D12727 ^0xA46110B3
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
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
	
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

void func_70(int iParam0, int iParam1, int iParam2) // Position - 0x275F Hash - 0x10354A04 ^0xEB1297F4
{
	Global_1946054.f_57[func_75(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_75(iParam0, 1) /*11*/].f_10 || iParam1;
	return;
}

BOOL func_71(BOOL bParam0, eStackSize essParam1) // Position - 0x278C Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_25() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			return Global_26796.f_26[essParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		return Global_36638.f_45.f_350.f_26[essParam1 /*120*/] && bParam0 != false;

	return false;
}

void func_72(Hash hParam0, eStackSize essParam1) // Position - 0x2809 Hash - 0x532E3FFC ^0x8CC1CDDF
{
	int i;

	if (func_25() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		*hParam0 = Global_26796.f_26[essParam1 /*120*/].f_1;
	
		for (i = 0; i < 39; i = i + 1)
		{
			hParam0->f_1[i /*3*/] = { Global_26796.f_26[essParam1 /*120*/].f_1.f_1[i /*3*/] };
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	*hParam0 = Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1;

	for (i = 0; i < 39; i = i + 1)
	{
		hParam0->f_1[i /*3*/] = { Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1.f_1[i /*3*/] };
	}

	return;
}

int func_73(int iParam0) // Position - 0x28C3 Hash - 0xE69D9203 ^0x5667FA7E
{
	switch (iParam0)
	{
		case -2125161702:
			return 131072;
	
		case -1932005642:
			return 65536;
	
		case -1925540957:
			return 32768;
	
		case -1886898087:
			return 16496;
	
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
	
		case -1678578495:
			return 16384;
	
		case -1674046782:
			return 139376;
	
		case -1283403230:
			return 2048;
	
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
	
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
	
		case -1062102573:
			return 32833;
	
		case -915377750:
			return 1024;
	
		case -884591393:
			return 96;
	
		case -663436545:
			return 112;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
	
		case -376594188:
			return -1;
	
		case -366477279:
			return 0;
	
		case -141044514:
			return 4208;
	
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
	
		case 75507907:
			return 8192;
	
		case 315750675:
			return 524288;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 512;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
	
		case 836721350:
			return 20480;
	
		case 884232794:
			return 8304;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
	
		case 1024778115:
			return 4096;
	
		case 1042019528:
			return 1136;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
	
		case 1481630954:
			return 262256;
	
		case 1929486675:
			return 262144;
	
		default:
		
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
void func_74(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x2A4B Hash - 0xBA3A30EB ^0xCBF87037
{
	int i;
	Hash hash;
	Hash hash2;
	int num;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_86(&hParam0->f_1[i /*3*/], 2))
		{
			num = func_69(i, 1);
		
			if (func_67(i, iParam1))
			{
				hash2 = { func_87(i, -1) };
			
				if (hash2 != Global_1946054.f_57[i /*11*/] && hash2 != 0 && hParam0->f_1[i /*3*/] != hash2 || hParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					hParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_66(num, 4))
					func_58(num, 4, 6);
			}
			else
			{
				func_70(num, 4, 6);
				goto 0xC9;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1946054.f_57[i /*11*/];
			hParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

int func_75(int iParam0, int iParam1) // Position - 0x2B20 Hash - 0x9D981F95 ^0x9D981F95
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
	
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

int func_76(int iParam0) // Position - 0x2CF1 Hash - 0x9D8F4245 ^0x3C0C5BB1
{
	int num;
	var unk;

	Global_1946054.f_964.f_2 = 0;

	if (func_25() == -1)
		num = -380731322;
	else
		num = 1226838104;

	func_39(&(Global_1946054.f_964), num, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1946054.f_964), 1409451727))
		return 0;

	return 1;
}

int func_77(var uParam0, int iParam1, var uParam2) // Position - 0x2D5C Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return 1;
}

void func_78(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2D6D Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	int num3;
	int num4;

	num2 = 12;
	num3 = func_88(hParam0->f_1[iParam2 /*3*/]);
	num4 = 0;

	if (bParam3)
		num4 = 3;

	if (func_67(iParam2, 65536) && hParam0->f_1[num2 /*3*/] == -452402570)
	{
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_82(num2, num4);
	}

	if (func_89(-1586649372) && func_67(iParam2, 524288))
	{
		num2 = 33;
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_82(num2, num4);
	}

	switch (num3)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_90(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_90(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (hParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				hParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_82(num2, num4);
			}
		
			if (hParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_82(num2, num4);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_82(num2, num4);
			}
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_91(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_92(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_82(num2, num4);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_82(num2, num4);
				}
			
				num2 = 38;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_82(num2, num4);
				}
			
				num2 = 35;
			
				if (-923693316 == func_88(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_82(num2, num4);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_91(hParam1) && hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_88(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_82(num2, num4);
				}
			}
			break;
	
		case -497931013:
			func_90(hParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_90(hParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (hParam0->f_1[num /*3*/].f_1 == joaat("base") || hParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_82(num2, num4);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (hParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_82(num2, num4);
				}
			}
		
			func_90(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_92(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_82(num2, num4);
			}
			break;
	
		case 1868067663:
			func_90(hParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_82(num2, num4);
			}
			break;
	}

	switch (func_88(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_88(hParam0->f_1[num2 /*3*/]) || func_92(hParam0->f_1[num2 /*3*/], 866047851))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_82(num2, num4);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_88(hParam0->f_1[num2 /*3*/]))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_82(num2, num4);
			}
			break;
	}

	return;
}

int func_79(int iParam0) // Position - 0x33B1 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_50();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_80(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x33D7 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_75(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_40(524288))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				num = num + 1;
				break;
		
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				num = num + 1;
				break;
		}
	}

	num = num + PED::_0x31B2E7F2E3C58B89(hParam0, joaat("base"), iParam2, bParam3);
	return num;
}

int func_81(Hash hParam0) // Position - 0x3442 Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_82(int iParam0, int iParam1) // Position - 0x348D Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_93(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_83(Hash hParam0, eStackSize essParam1) // Position - 0x34A4 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_25() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *hParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_94(&hParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_95(&hParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_84(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x353F Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_25() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			Global_26796.f_26[essParam1 /*120*/] = Global_26796.f_26[essParam1 /*120*/] || bParam0;
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		Global_36638.f_45.f_350.f_26[essParam1 /*120*/] = Global_36638.f_45.f_350.f_26[essParam1 /*120*/] || bParam0;

	return;
}

Hash func_85(Hash hParam0) // Position - 0x35C7 Hash - 0xBBE66644 ^0xEC72F4B4
{
	int num;

	num = func_88(hParam0);

	switch (num)
	{
		case -2061583405:
			return joaat("HATS");
	
		case -525676072:
			return joaat("MASKS_LARGE");
	
		default:
		
	}

	return 0;
}

BOOL func_86(var uParam0, int iParam1) // Position - 0x35FC Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

Vector3 func_87(int iParam0, eStackSize essParam1) // Position - 0x360D Hash - 0x6854E748 ^0xA730727C
{
	if (func_25() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		return Global_26796.f_26[essParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	return Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

int func_88(Hash hParam0) // Position - 0x366C Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_96(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_89(int iParam0) // Position - 0x3697 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_75(iParam0, 1) /*3*/] != Global_1946054.f_57[func_75(iParam0, 1) /*11*/];
}

void func_90(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x36CF Hash - 0xE34B9CEC ^0xAFBB60FB
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 0;

	if (bParam4)
		num = 3;

	num2 = 12;
	num3 = 20;
	num4 = 16;

	if (hParam0->f_1[num4 /*3*/].f_1 == 1216705912 || hParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			hParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			hParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			hParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_82(num2, num);
	
		if (bParam1)
			func_82(num4, num);
	}

	if (hParam0->f_1[num3 /*3*/].f_1 == -1333118809 || hParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		hParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_82(num3, num);
	}

	return;
}

BOOL func_91(Hash hParam0) // Position - 0x37BB Hash - 0xDEBEF6D4 ^0xDEBEF6D4
{
	switch (hParam0)
	{
		case joaat("clothing_hl_player_boot_007_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_2"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_3"):
			return true;
	
		case joaat("clothing_hl_player_boot_009_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_4"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_92(Hash hParam0, Hash hParam1) // Position - 0x37FE Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

void func_93(int iParam0, int iParam1, int iParam2) // Position - 0x382F Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_97(iParam0, 1))
		func_98(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

void func_94(var uParam0, int iParam1, eStackSize essParam2) // Position - 0x3876 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_95(var uParam0, int iParam1, eStackSize essParam2) // Position - 0x38D1 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

BOOL func_96(Hash hParam0, int iParam1) // Position - 0x393B Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_97(int iParam0, int iParam1) // Position - 0x3955 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_98(int iParam0, int iParam1) // Position - 0x3966 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

