#region Local Var
	int iLocal_0 = 0;
	eStackSize essLocal_1 = 0;
	Hash hLocal_2 = 0;
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
	float fLocal_17 = 0f;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xEAE99615 ^0x9DB2563A
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1() // Position - 0x2F Hash - 0xA2D78CD9 ^0x897DBFE7
{
	int i;

	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		func_3(i, 16384);
	}

	if (iLocal_18 != -1)
	{
		func_4(iLocal_18);
		func_3(iLocal_18, 1024);
	}

	if (CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(500);

	return 1;
}

BOOL func_2() // Position - 0x7A Hash - 0x563CC2E3 ^0x563CC2E3
{
	int i;

	if (func_5())
		func_6(6);

	switch (iLocal_0)
	{
		case 0:
			essLocal_1 = func_7();
		
			if (!func_8(essLocal_1))
			{
				func_6(6);
				return false;
			}
		
			iLocal_18 = func_9(essLocal_1);
			func_10(iLocal_18);
			func_11(iLocal_18, 1024);
			func_3(iLocal_18, 2);
		
			if (func_12(essLocal_1, &hLocal_2, &uLocal_3, &uLocal_11, &fLocal_17, &iLocal_20))
			{
				CAM::DO_SCREEN_FADE_OUT(500);
				func_6(1);
			}
			else
			{
				func_6(6);
				return false;
			}
			break;
	
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
				return false;
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_19))
			{
				iLocal_19 = TASK::CREATE_SCENARIO_POINT_HASH(hLocal_2, uLocal_11, fLocal_17, 0, 0, false);
				TASK::_SET_SCENARIO_POINT_FLAG(iLocal_19, 23, true);
				TASK::_SET_SCENARIO_POINT_FLAG(iLocal_19, 25, true);
				return false;
			}
		
			if (!func_13(Global_35, -76381094))
			{
				MISC::CLEAR_AREA(uLocal_11, 2f, 2442122);
				TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_19, &uLocal_3, 0, false, true, 0, false, -1082130432, false);
			}
			else
			{
				i = 0;
			
				for (i = 0; i < 8; i = i + 1)
				{
					if (i != iLocal_18)
					{
						func_14(i);
						func_11(i, 16384);
					}
				}
			
				CLOCK::SET_CLOCK_TIME(iLocal_20, 0, 0);
				func_15(uLocal_11, 150f, false);
				PED::INSTANTLY_FILL_PED_POPULATION();
				func_6(2);
			}
			break;
	
		case 2:
			if (PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
				func_6(3);
			break;
	
		case 3:
			uLocal_14 = { func_16(essLocal_1) };
		
			if (_IS_NULL_VECTOR(uLocal_14))
			{
				func_6(6);
				return false;
			}
		
			if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_18 /*373*/].f_1))
			{
				func_6(6);
				return false;
			}
		
			VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_18 /*373*/].f_1, uLocal_14, func_18(essLocal_1));
			iLocal_21 = MISC::GET_GAME_TIMER() + 15000;
			func_6(4);
			break;
	
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_18 /*373*/].f_1)))
			{
				if (iLocal_21 > MISC::GET_GAME_TIMER())
				{
					VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_18 /*373*/].f_1, uLocal_14, func_18(essLocal_1));
					return false;
				}
			}
		
			VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_18 /*373*/].f_1, 4f);
			VEHICLE::_0x34BCF6209B9668A7(Global_1425371[iLocal_18 /*373*/].f_1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_19(essLocal_1), 1065353216);
		
			if (CAM::IS_SCREEN_FADED_OUT())
				CAM::DO_SCREEN_FADE_IN(500);
		
			func_20(1870112085, 1, -142743235, 0, false);
			func_6(5);
			break;
	
		case 5:
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_19))
				if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_19))
					return false;
		
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_18 /*373*/].f_1)))
				return false;
		
			func_6(6);
			break;
	
		case 6:
			return func_1();
	}

	return false;
}

void func_3(int iParam0, BOOL bParam1) // Position - 0x335 Hash - 0x1A79E98B ^0x1A79E98B
{
	if (!func_21(iParam0))
		return;

	Global_40.f_11029[iParam0 /*5*/] = Global_40.f_11029[iParam0 /*5*/] - Global_40.f_11029[iParam0 /*5*/] && bParam1;
	return;
}

void func_4(int iParam0) // Position - 0x36C Hash - 0x7D366319 ^0x7D366319
{
	func_3(iParam0, 16);
	return;
}

BOOL func_5() // Position - 0x37C Hash - 0x8F363E10 ^0xEE6E90B3
{
	if (func_22() != -1)
		return true;

	if (func_23(0, false, true))
		return true;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return true;

	return false;
}

void func_6(int iParam0) // Position - 0x3AD Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_0 = iParam0;
	return;
}

eStackSize func_7() // Position - 0x3B9 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_8(eStackSize essParam0) // Position - 0x3C7 Hash - 0x702E9E47 ^0x702E9E47
{
	switch (essParam0)
	{
		case 5:
			return true;
	
		case 23:
			return true;
	
		case 28:
			return true;
	
		case 69:
			return true;
	
		case 75:
			return true;
	
		case 76:
			return true;
	
		case 78:
			return true;
	
		case 105:
			return true;
	
		default:
		
	}

	return false;
}

int func_9(eStackSize essParam0) // Position - 0x428 Hash - 0xDEA9D7E7 ^0xDEA9D7E7
{
	switch (essParam0)
	{
		case 5:
		case 69:
		case 76:
		case 78:
			return 1;
	
		case 23:
		case 28:
		case 75:
		case 105:
			return 0;
	}

	return 0;
}

Vehicle func_10(int iParam0) // Position - 0x477 Hash - 0xD6FCDEE8 ^0xA17CE125
{
	if (!func_21(iParam0))
		return 0;

	if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1))
		return 0;

	func_11(iParam0, 16);
	return VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iParam0 /*373*/].f_1);
}

void func_11(int iParam0, BOOL bParam1) // Position - 0x4BB Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_21(iParam0))
		return;

	Global_40.f_11029[iParam0 /*5*/] = Global_40.f_11029[iParam0 /*5*/] || bParam1;
	return;
}

BOOL func_12(eStackSize essParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5) // Position - 0x4E7 Hash - 0x63E49C2C ^0xC8B1F6F8
{
	switch (essParam0)
	{
		case 5:
			*uParam1 = joaat("prop_player_seat_chair_generic");
			TEXT_LABEL_ASSIGN_STRING(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 2682.599f, -1458.432f, 45.757f };
			*uParam4 = -155f;
			*uParam5 = 20;
			return true;
	
		case 23:
			*uParam1 = joaat("world_human_lean_railing");
			TEXT_LABEL_ASSIGN_STRING(sParam2, "WORLD_HUMAN_LEAN_RAILING_MALE_C", 64);
			*uParam3 = { -1099.38f, -578.48f, 81.4f };
			*uParam4 = 138.954f;
			*uParam5 = 11;
			return true;
	
		case 28:
			*uParam1 = joaat("prop_player_seat_chair_generic");
			TEXT_LABEL_ASSIGN_STRING(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { -1304.61f, 402.07f, 94.88f };
			*uParam4 = -155f;
			*uParam5 = 16;
			return true;
	
		case 69:
			*uParam1 = joaat("prop_player_seat_chair_generic");
			TEXT_LABEL_ASSIGN_STRING(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 1520.34f, 437.09f, 90.18f };
			*uParam4 = -90f;
			*uParam5 = 8;
			return true;
	
		case 75:
			*uParam1 = joaat("prop_player_seat_chair_generic");
			TEXT_LABEL_ASSIGN_STRING(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { -346.205f, -368.456f, 87.519f };
			*uParam4 = -65.272f;
			*uParam5 = 22;
			return true;
	
		case 76:
			*uParam1 = joaat("world_human_lean_back_wall");
			TEXT_LABEL_ASSIGN_STRING(sParam2, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", 64);
			*uParam3 = { -167.44f, 638.81f, 113.03f };
			*uParam4 = -126.192f;
			*uParam5 = 6;
			return true;
	
		case 78:
			*uParam1 = joaat("world_human_lean_back_wall");
			TEXT_LABEL_ASSIGN_STRING(sParam2, "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_D", 64);
			*uParam3 = { 2941.49f, 1274.77f, 43.64f };
			*uParam4 = 156.696f;
			*uParam5 = 14;
			return true;
	
		case 105:
			*uParam1 = joaat("prop_player_seat_chair_generic");
			TEXT_LABEL_ASSIGN_STRING(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 1214.081f, -1293.024f, 76.372f };
			*uParam4 = 90.766f;
			*uParam5 = 2;
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_13(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x6B9 Hash - 0xBA023B92 ^0x16E0B707
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

int func_14(int iParam0) // Position - 0x712 Hash - 0x781E8327 ^0x9B5B7D3D
{
	if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1))
	{
		VEHICLE::_0xA230A5DDE12ED374(Global_1425371[iParam0 /*373*/].f_1);
		Global_1425371[iParam0 /*373*/].f_1 = 0;
	}

	return 1;
}

void func_15(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x748 Hash - 0xDCCB3575 ^0xAC48C8F6
{
	int num;

	num = 16384;

	if (bParam4)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

Vector3 func_16(eStackSize essParam0) // Position - 0x76F Hash - 0xCBED323 ^0xCBED323
{
	switch (essParam0)
	{
		case 5:
			return 2613.5f, -1477.1f, 45.1f;
	
		case 23:
			return -1154.2f, -535.7f, 86.4f;
	
		case 28:
			return -1276.9f, 486.7f, 92.7f;
	
		case 69:
			return 1529.7f, 530.7f, 89.4f;
	
		case 75:
			return -353f, -356.1f, 86.4f;
	
		case 76:
			return -200.5f, 562.7f, 112.8f;
	
		case 78:
			return 2886.5f, 1213.8f, 44.1f;
	
		case 105:
			return 1192.5f, -1277.5f, 75.6f;
	}

	return 0f, 0f, 0f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x85A Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_18(eStackSize essParam0) // Position - 0x884 Hash - 0xDEA9D7E7 ^0xDEA9D7E7
{
	switch (essParam0)
	{
		case 5:
		case 23:
		case 28:
		case 75:
		case 76:
		case 78:
		case 105:
			return 0;
	
		case 69:
			return 1;
	}

	return 0;
}

float func_19(eStackSize essParam0) // Position - 0x8D3 Hash - 0xFE1A3B7C ^0xFE1A3B7C
{
	switch (essParam0)
	{
		case 5:
			return -67.5789f;
	
		case 23:
			return -80.0869f;
	
		case 28:
			return -61.4596f;
	
		case 69:
			return 0.5378f;
	
		case 75:
			return 138.6132f;
	
		case 76:
			return -85f;
	
		case 78:
			return 13.9649f;
	
		case 105:
			return -10f;
	}

	return 0f;
}

BOOL func_20(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x96C Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_24(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_25(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_26(hParam0, iParam1, hParam2, iParam3, bParam4);

	unk6 = { func_27(hParam0, unk, unk.f_4, bParam4) };
	return func_28(hParam0, &unk6, &unk, iParam1, hParam2, iParam3, bParam4);
}

BOOL func_21(int iParam0) // Position - 0x9DD Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

BOOL func_22() // Position - 0x9FC Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_23(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA0A Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_29())
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
		num = func_30(Global_1898164.f_1[0 /*5*/]);
	
		if (func_31(num) && func_32(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_33(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_24(Hash hParam0, int iParam1) // Position - 0xC0E Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

struct<5> func_25(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC28 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_34(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_35(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_42(hParam0, -1823706425))
			{
				unk = { func_27(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_42(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_27(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
		
			[[fallthrough]];
	
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -813824107;
			unk = { func_40(bParam1) };
		
			switch (func_41(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case 664784405:
					unk.f_4 = -1150938404;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					unk.f_4 = -1756997214;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk = { func_27(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_36(bParam1) };
		
			if (bParam2 && func_37(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_38(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_38(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_39(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_43(unk, &unk28, bParam1, false))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
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

BOOL func_26(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xEE5 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_44(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_45(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_46(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

struct<4> func_27(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xF31 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_24(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_46(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_28(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0xF62 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_44(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_43(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_45(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_46(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_29() // Position - 0xFF2 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_30(int iParam0) // Position - 0x1045 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_33(iParam0))
		return -1;

	return func_48(func_47(iParam0));
}

BOOL func_31(int iParam0) // Position - 0x1065 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_32(int iParam0, int iParam1) // Position - 0x107B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_33(int iParam0) // Position - 0x108A Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

struct<4> func_34(BOOL bParam0) // Position - 0x10BD Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_27(joaat("character"), func_49(), joaat("SLOTID_NONE"), bParam0);
}

int func_35(Hash hParam0) // Position - 0x10D9 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_24(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_36(BOOL bParam0) // Position - 0x1104 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_46(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_27(923904168, func_34(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_27(923904168, func_34(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_27(923904168, func_34(bParam0), -740156546, false);
}

BOOL func_37(Hash hParam0, BOOL bParam1) // Position - 0x1199 Hash - 0x62864AB ^0xBC339691
{
	if (func_41(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_50(24);
		else
			return true;

	return false;
}

BOOL func_38(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x11D2 Hash - 0x4285A587 ^0x4285A587
{
	return func_51(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_39(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x11EA Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_52(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_40(BOOL bParam0) // Position - 0x120B Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_46(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_27(271701509, func_34(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_27(271701509, func_34(bParam0), 12999093, false);
}

Hash func_41(Hash hParam0) // Position - 0x126F Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_24(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_42(Hash hParam0, Hash hParam1) // Position - 0x129A Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_41(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_43(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x12F9 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_46(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_44(Hash hParam0) // Position - 0x1329 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_45(BOOL bParam0) // Position - 0x133F Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_22() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_46(bParam0));
}

int func_46(BOOL bParam0) // Position - 0x135D Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_22() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_47(int iParam0) // Position - 0x139E Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_48(BOOL bParam0) // Position - 0x13DC Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

struct<4> func_49() // Position - 0x13EF Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_50(int iParam0) // Position - 0x13FB Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_53(iParam0))
		return false;

	return func_54(iParam0);
}

int func_51(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1417 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_24(hParam0, 0))
		return 0;

	guid = { func_27(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_46(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_52(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x145F Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_46(false);
	*panParam1 = { func_27(hParam0, func_36(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_53(int iParam0) // Position - 0x14A4 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_54(int iParam0) // Position - 0x14B7 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

