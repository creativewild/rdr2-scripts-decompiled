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
	int iLocal_20 = 0;
	Any anLocal_21 = 0;
	int iLocal_22 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x4A402200 ^0x8904BB6C
{
	anLocal_21 = anScriptParam_0;
	iLocal_20 = anScriptParam_0.f_1;

	if (func_1() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	
		if (func_3(func_2(0)) == 7)
			func_4(&uLocal_13);
	}

	if (func_1() == -1)
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
			func_4(&uLocal_13);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_20))
		func_4(&uLocal_13);

	uLocal_13.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_20, true) };

	if (func_5(&uLocal_13))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_20, false);
		func_4(&uLocal_13);
	}
	else
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_20, true);
	}

	while (func_6())
	{
		if (func_7())
			func_4(&uLocal_13);
	
		if (func_8(&uLocal_13))
			func_4(&uLocal_13);
	
		BUILTIN::WAIT(0);
	}

	func_4(&uLocal_13);
	return;
}

int func_1() // Position - 0xB7 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

struct<2> func_2(int iParam0) // Position - 0xC5 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_3(int iParam0, var uParam1) // Position - 0xD9 Hash - 0x72C53F65 ^0x72C53F65
{
	return iParam0;
}

void func_4(var uParam0) // Position - 0xE3 Hash - 0x5E7BCEF8 ^0x40CD2B8C
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
		MAP::REMOVE_BLIP(&(uParam0->f_5));

	SCRIPTS::_0xE7282390542F570D(anLocal_21);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_5(var uParam0) // Position - 0x109 Hash - 0xFA262F43 ^0x7EC1CD7A
{
	int i;

	i = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_9(uLocal_13.f_1, Global_1915220[i /*4*/].f_1, 1056964608, true))
			return true;
	}

	return false;
}

BOOL func_6() // Position - 0x14B Hash - 0xBC5DFEF2 ^0x4AA877CF
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_4(&uLocal_13);
		return false;
	}

	return true;
}

BOOL func_7() // Position - 0x165 Hash - 0x1885E8F1 ^0x47210C11
{
	if (Global_1572887.f_14 == -1)
		if (PED::IS_PED_INJURED(Global_33))
			return true;
	else if (Global_1295666.f_7)
		return true;

	return false;
}

BOOL func_8(var uParam0) // Position - 0x196 Hash - 0x8C3F57FC ^0x86DF171B
{
	switch (func_10(uParam0))
	{
		case 0:
			iLocal_22 = func_11();
			func_12(uParam0, 1);
			break;
	
		case 1:
			if (func_13(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
					MAP::REMOVE_BLIP(&(uParam0->f_5));
			
				func_14(uParam0->f_1);
				return true;
			}
			else if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
			{
				func_15(uParam0);
			}
			else
			{
				uParam0->f_5 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_PICKUP_HERB"), uParam0->f_1);
				func_15(uParam0);
			}
			break;
	}

	return false;
}

BOOL func_9(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x224 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

int func_10(var uParam0) // Position - 0x279 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

int func_11() // Position - 0x284 Hash - 0x80BA6446 ^0x80BA6446
{
	int i;
	int num;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_17(func_16(i), 1))
			num = num + func_18(func_16(i), false, false, false);
	}

	return num;
}

void func_12(var uParam0, int iParam1) // Position - 0x2C1 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_13(var uParam0) // Position - 0x2CE Hash - 0x98B1D2ED ^0x5C1D0892
{
	if (1.4142135f >= BUILTIN::VDIST(uParam0->f_1, Global_34) && iLocal_22 < func_11())
		return true;

	return false;
}

void func_14(var uParam0, var uParam1, var uParam2) // Position - 0x2FF Hash - 0xB438D0C8 ^0xFD75A63
{
	Global_1915437 = Global_1915437 % 10;
	Global_1915220[Global_1915437 /*4*/].f_1 = { uParam0 };
	Global_1915437 = Global_1915437 + 1;
	return;
}

void func_15(var uParam0) // Position - 0x32E Hash - 0x70FAD746 ^0xC5FB6D4A
{
	MAP::BLIP_ADD_MODIFIER(uParam0->f_5, joaat("BLIP_MODIFIER_HERB_NORMAL"));
	return;
}

Hash func_16(int iParam0) // Position - 0x344 Hash - 0xB8EC44B7 ^0x5DB3ADE
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

BOOL func_17(Hash hParam0, int iParam1) // Position - 0x3EF Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_19(hParam0, 0))
		return false;

	num = func_20(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_22(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_21(hParam0, 1))
				return false;
			break;
	}

	return func_18(hParam0, false, false, false) >= iParam1;
}

int func_18(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x472 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_19(hParam0, 0))
		return 0;

	num = func_20(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_23(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_24(hParam0, false);
	}

	if (func_25(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_26(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_27(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_26(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_19(Hash hParam0, int iParam1) // Position - 0x534 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_20(Hash hParam0) // Position - 0x54E Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_19(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_21(Hash hParam0, int iParam1) // Position - 0x579 Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_19(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_23(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_28("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_29(&unk, i, num, num2))
			{
			}
			else if (!func_30(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_31(num);
				return true;
			}
		}
	
		func_31(num);
	}

	return false;
}

BOOL func_22(Hash hParam0) // Position - 0x61F Hash - 0x52397408 ^0x52397408
{
	int num;
	int num2;
	int num3;

	if (!func_19(hParam0, 0))
		return false;

	num = func_32(hParam0);

	switch (num)
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

	num2 = func_33(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_34(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_35(hParam0);
	num3 = func_34(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

Hash func_23(Hash hParam0, int iParam1) // Position - 0x6DB Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_19(hParam0, 0))
		return 0;

	num = func_20(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_36(hParam0, 1399091007))
	{
		func_37(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_24(Hash hParam0, BOOL bParam1) // Position - 0x755 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_38(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_40(&unk, func_39(false));

	if (!func_41(&unk, &num, &num2, false))
		return 0;

	func_31(num);
	return num2;
}

int func_25(Hash hParam0, Hash hParam1) // Position - 0x7B4 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_43(func_42(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_26(BOOL bParam0) // Position - 0x7E0 Hash - 0x58DE66BA ^0xF4629DE1
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

struct<4> func_27(Hash hParam0, BOOL bParam1) // Position - 0x821 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_44(hParam0, bParam1, 0) };
	return func_45(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_28(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x846 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_26(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_29(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x86D Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_30(Hash hParam0) // Position - 0x8A8 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_31(int iParam0) // Position - 0x8C3 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_32(Hash hParam0) // Position - 0x8E4 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_19(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_33(Hash hParam0) // Position - 0x90F Hash - 0xB8EC44B7 ^0x72487142
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

int func_34(var uParam0, int iParam1) // Position - 0x9F2 Hash - 0x6AC2726E ^0xDB215040
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

int func_35(Hash hParam0) // Position - 0xA2F Hash - 0xD114ACC1 ^0x3428F85C
{
	int num;

	num = func_32(hParam0);

	switch (num)
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

BOOL func_36(Hash hParam0, Hash hParam1) // Position - 0xA9C Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_19(hParam0, 0))
		return func_46(func_42(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_37(Hash hParam0, var uParam1, var uParam2) // Position - 0xADD Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_38(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xCE9 Hash - 0x90CCF0F4 ^0xA5F3D799
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

struct<4> func_39(BOOL bParam0) // Position - 0xDC7 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_26(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_45(923904168, func_47(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_45(923904168, func_47(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_45(923904168, func_47(bParam0), -740156546, false);
}

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xE68 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_41(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xE83 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_26(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

Hash func_42(Hash hParam0) // Position - 0xEA8 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_43(Hash hParam0, int iParam1) // Position - 0xEB2 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

struct<5> func_44(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xECC Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_47(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_20(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_52(hParam0, -1823706425))
			{
				unk = { func_45(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_52(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_45(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_45(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_52(hParam0, -1653629781))
			{
				unk = { func_45(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_51(bParam1) };
		
			switch (func_32(hParam0))
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
			unk = { func_45(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_39(bParam1) };
		
			if (iParam2 && func_48(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_49(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_49(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_50(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_53(unk, &unk28, bParam1, false, -1))
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
			else if (func_52(hParam0, -1653629781))
			{
				unk = { func_45(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_45(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1240 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_19(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_26(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_46(Hash hParam0, Hash hParam1) // Position - 0x1271 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_43(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

struct<4> func_47(BOOL bParam0) // Position - 0x12A7 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_26(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_45(joaat("character"), func_54(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_45(joaat("character"), func_54(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_45(joaat("character"), func_54(), joaat("SLOTID_NONE"), bParam0);
}

int func_48(Hash hParam0, BOOL bParam1) // Position - 0x1347 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_32(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_55();
		else
			return 1;

	return 0;
}

BOOL func_49(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x137E Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_56(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_50(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1399 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_57(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_51(BOOL bParam0) // Position - 0x13BA Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_26(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_45(271701509, func_47(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_45(271701509, func_47(bParam0), 12999093, false);
}

BOOL func_52(Hash hParam0, Hash hParam1) // Position - 0x1424 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_32(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_58(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_53(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x1491 Hash - 0x113CD144 ^0x113CD144
{
	return func_59(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

struct<4> func_54() // Position - 0x14A7 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_55() // Position - 0x14B3 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_60(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_56(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x14D0 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_19(hParam0, 0))
		return 0;

	if (!bParam7 && func_25(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_45(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_26(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_26(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_57(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x154F Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_26(false);
	*panParam1 = { func_45(hParam0, func_39(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_58(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x1594 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_59(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x15C7 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_26(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_60(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1601 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_61(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_26(bParam1), hParam0, bParam3);
}

BOOL func_61(Hash hParam0) // Position - 0x1634 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

