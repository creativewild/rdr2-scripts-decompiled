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
	int iLocal_10 = 0;
	Any anLocal_11 = 0;
	int iLocal_12 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x11E8CF9F ^0xE6EEEAA5
{
	anLocal_11 = anScriptParam_0;
	iLocal_10 = anScriptParam_0.f_1;

	if (func_1() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	
		if (func_2(0) == 10)
			func_3(&uLocal_3);
	}

	if (func_1() == -1)
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
			func_3(&uLocal_3);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_10))
		func_3(&uLocal_3);

	uLocal_3.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_10, true) };

	if (func_4(&uLocal_3))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_10, false);
		func_3(&uLocal_3);
	}
	else
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_10, true);
	}

	while (func_5())
	{
		if (func_6())
			func_3(&uLocal_3);
	
		if (func_7(&uLocal_3))
			func_3(&uLocal_3);
	
		BUILTIN::WAIT(0);
	}

	func_3(&uLocal_3);
	return;
}

BOOL func_1() // Position - 0xB4 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

int func_2(int iParam0) // Position - 0xC2 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_3(var uParam0) // Position - 0xD6 Hash - 0x5E7BCEF8 ^0x40CD2B8C
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
		MAP::REMOVE_BLIP(&(uParam0->f_5));

	SCRIPTS::_0xE7282390542F570D(anLocal_11);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_4(var uParam0) // Position - 0xFC Hash - 0xFA262F43 ^0x7EC1CD7A
{
	int i;

	i = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_8(uLocal_3.f_1, Global_1913500[i /*4*/].f_1, 1056964608, true))
			return true;
	}

	return false;
}

BOOL func_5() // Position - 0x13E Hash - 0xBC5DFEF2 ^0x4AA877CF
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_3(&uLocal_3);
		return false;
	}

	return true;
}

BOOL func_6() // Position - 0x158 Hash - 0x1885E8F1 ^0xEAA4F49B
{
	if (Global_1572887.f_12 == -1)
		if (PED::IS_PED_INJURED(Global_35))
			return true;
	else if (Global_1224589.f_7)
		return true;

	return false;
}

BOOL func_7(var uParam0) // Position - 0x189 Hash - 0x8C3F57FC ^0x86DF171B
{
	switch (func_9(uParam0))
	{
		case 0:
			iLocal_12 = func_10();
			func_11(uParam0, 1);
			break;
	
		case 1:
			if (func_12(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
					MAP::REMOVE_BLIP(&(uParam0->f_5));
			
				func_13(uParam0->f_1);
				return true;
			}
			else if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
			{
				func_14(uParam0);
			}
			else
			{
				uParam0->f_5 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_PICKUP_HERB"), uParam0->f_1);
				func_14(uParam0);
			}
			break;
	}

	return false;
}

BOOL func_8(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x217 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

int func_9(var uParam0) // Position - 0x26C Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

int func_10() // Position - 0x277 Hash - 0x39EE68A2 ^0x39EE68A2
{
	int i;
	int num;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_16(func_15(i), 1, false))
			num = num + func_17(func_15(i), false, false);
	}

	return num;
}

void func_11(var uParam0, int iParam1) // Position - 0x2B4 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_12(var uParam0) // Position - 0x2C1 Hash - 0x98B1D2ED ^0x5C1D0892
{
	if (1.4142135f >= BUILTIN::VDIST(uParam0->f_1, Global_36) && iLocal_12 < func_10())
		return true;

	return false;
}

void func_13(var uParam0, var uParam1, var uParam2) // Position - 0x2F2 Hash - 0xB438D0C8 ^0xFD75A63
{
	Global_1913677 = Global_1913677 % 10;
	Global_1913500[Global_1913677 /*4*/].f_1 = { uParam0 };
	Global_1913677 = Global_1913677 + 1;
	return;
}

void func_14(var uParam0) // Position - 0x321 Hash - 0x70FAD746 ^0xC5FB6D4A
{
	MAP::BLIP_ADD_MODIFIER(uParam0->f_5, joaat("BLIP_MODIFIER_HERB_NORMAL"));
	return;
}

Hash func_15(int iParam0) // Position - 0x337 Hash - 0xB8EC44B7 ^0x5DB3ADE
{
	switch (iParam0)
	{
		case 0:
			return joaat("consumable_herb_bay_bolete");
	
		case 1:
			return joaat("consumable_herb_black_berry");
	
		case 2:
			return joaat("consumable_herb_chanterelles");
	
		case 3:
			return joaat("consumable_herb_creeping_thyme");
	
		case 4:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 5:
			return joaat("consumable_herb_oregano");
	
		case 6:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 7:
			return joaat("consumable_herb_rams_head");
	
		case 8:
			return joaat("consumable_herb_red_raspberry");
	
		case 9:
			return joaat("consumable_herb_wild_mint");
	
		case 10:
			return joaat("consumable_herb_wintergreen_berry");
	
		default:
		
	}

	return 0;
}

BOOL func_16(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x3E2 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_18(hParam0, 0))
		return false;

	num = func_19(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_20(hParam0, 1))
			return false;

	return func_17(hParam0, false, bParam2) >= iParam1;
}

int func_17(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x44C Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_18(hParam0, 0))
		return 0;

	num = func_19(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_21(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_22(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_23(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_18(Hash hParam0, int iParam1) // Position - 0x4CE Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_19(Hash hParam0) // Position - 0x4E8 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_18(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_20(Hash hParam0, int iParam1) // Position - 0x513 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_18(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_21(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_24("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_25(&unk, i, num, num2))
			{
			}
			else if (!func_26(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_27(num);
				return true;
			}
		}
	
		func_27(num);
	}

	return false;
}

Hash func_21(Hash hParam0, int iParam1) // Position - 0x5B9 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_18(hParam0, 0))
		return 0;

	num = func_19(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_28(hParam0, 1399091007))
	{
		func_29(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_22(Hash hParam0, BOOL bParam1) // Position - 0x633 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_30(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_32(&unk, func_31(false));

	if (!func_33(&unk, &num, &num2, false))
		return 0;

	func_27(num);
	return num2;
}

int func_23(BOOL bParam0) // Position - 0x691 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_1() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_24(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x6D2 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_23(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_25(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x6F9 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_26(Hash hParam0) // Position - 0x734 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_27(int iParam0) // Position - 0x74F Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_28(Hash hParam0, Hash hParam1) // Position - 0x770 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_29(Hash hParam0, var uParam1, var uParam2) // Position - 0x7A1 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_30(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x9AD Hash - 0x84700F53 ^0xB9E7AA96
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

	return hash;
}

struct<4> func_31(BOOL bParam0) // Position - 0xA7F Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_23(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_35(923904168, func_34(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_35(923904168, func_34(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_35(923904168, func_34(bParam0), -740156546, false);
}

void func_32(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xB14 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_33(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xB2F Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_23(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

struct<4> func_34(BOOL bParam0) // Position - 0xB54 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_35(joaat("character"), func_36(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_35(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xB70 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_18(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_23(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_36() // Position - 0xBA1 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

