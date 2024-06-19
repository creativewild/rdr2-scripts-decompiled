#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 6;
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
	var uLocal_23 = 0;
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
	ItemSet isLocal_69 = 0;
	ItemSet isLocal_70 = 0;
	ItemSet isLocal_71 = 0;
	ItemSet isLocal_72 = 0;
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
	Volume volLocal_85 = 0;
	int iLocal_86 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xB42E4E75 ^0xCA83A525
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) && !func_1(Global_1935630, 16384))
	{
		func_2(&uLocal_3);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_3(&uLocal_3))
	{
		BUILTIN::WAIT(0);
	}

	func_2(&uLocal_3);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1(int iParam0, int iParam1) // Position - 0x49 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_2(var uParam0) // Position - 0x58 Hash - 0x958D10C5 ^0xC3918273
{
	if (MAP::DOES_BLIP_EXIST(uLocal_3.f_46))
		MAP::REMOVE_BLIP(&(uLocal_3.f_46));

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_85))
		VOLUME::DELETE_VOLUME(volLocal_85);

	ITEMSET::DESTROY_ITEMSET(isLocal_70);
	ITEMSET::DESTROY_ITEMSET(isLocal_69);
	ITEMSET::DESTROY_ITEMSET(isLocal_71);
	ITEMSET::DESTROY_ITEMSET(isLocal_72);
	PED::_UNRESERVE_AMBIENT_PEDS(uParam0->f_49);
	return;
}

BOOL func_3(var uParam0) // Position - 0xA2 Hash - 0xB334A4EA ^0x26878262
{
	if (Global_1391438.f_414 != 1784895540 || !func_4(Global_35, 0))
		return true;

	switch (uParam0->f_56)
	{
		case 0:
			if (Global_1391438.f_414 == 1784895540)
				uParam0->f_56 = 1;
			break;
	
		case 1:
			if (func_5(&uLocal_3))
			{
				func_6(&uLocal_76, true);
				uParam0->f_56 = 2;
			}
			break;
	
		case 2:
			if (!func_7(uParam0, 32768))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_9(func_8()), true, 0))
				{
					if (!func_10(0))
					{
						func_11(Global_35, uParam0->f_45, "ACT_HUNTING_PLAYER_TARGET_ASK", 0, -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
						func_12(uParam0, 32768, true);
					}
				}
			}
		
			if (!func_7(uParam0, 16384) && func_7(uParam0, 32768))
			{
				if (!func_10(0))
				{
					func_11(uParam0->f_45, Global_35, func_13(*uParam0), func_14(Global_1391438.f_414.f_2, false), -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
					func_12(uParam0, 16384, true);
				}
			}
		
			func_15(uParam0);
		
			if (uParam0->f_48 >= 100)
				uParam0->f_56 = 9;
		
			if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_51, Global_36))
			{
				uParam0->f_46 = MAP::_BLIP_ADD_FOR_VOLUME(joaat("BLIP_STYLE_AREA"), uParam0->f_51);
				func_11(uParam0->f_45, Global_35, "ACT_HUNTING_ARRIVAL", func_14(Global_1391438.f_414.f_2, false), -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				uParam0->f_56 = 3;
			}
			break;
	
		case 3:
			func_6(&(uParam0->f_60), true);
			uParam0->f_56 = 5;
			break;
	
		case 5:
			func_15(uParam0);
		
			if (uParam0->f_48 >= 100)
			{
				func_6(&uLocal_79, true);
				uParam0->f_56 = 9;
			}
		
			if (func_16(&(uParam0->f_60)) > 500f)
				uParam0->f_56 = 10;
			break;
	
		case 6:
			break;
	
		case 9:
			if (!func_17(Global_35, joaat("SCRIPT_TASK_LOOT_ENTITY")) && func_18(&uLocal_79, 3f))
			{
				if (!func_7(uParam0, 1024))
				{
					func_11(uParam0->f_45, Global_35, "ACT_HUNTING_SUCCESS", func_14(Global_1391438.f_414.f_2, false), -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
					func_12(uParam0, 1024, true);
				}
			
				return true;
			}
			break;
	
		case 10:
			if (!func_7(uParam0, 1024))
			{
				func_11(uParam0->f_45, Global_35, "ACT_HUNTING_FAILURE", func_14(Global_1391438.f_414.f_2, false), -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				func_12(uParam0, 1024, true);
			}
		
			return true;
	}

	return false;
}

BOOL func_4(Ped pedParam0, int iParam1) // Position - 0x363 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_19(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_19(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_19(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_19(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_19(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_19(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_19(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_19(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_5(var uParam0) // Position - 0x462 Hash - 0x2B913251 ^0xAE1106E2
{
	float scaleX;
	var unk;
	var unk4;
	int num;

	switch (uParam0->f_57)
	{
		case 0:
			uParam0->f_57 = 1;
			break;
	
		case 1:
			*uParam0 = func_20();
			uParam0->f_53 = { Global_1391438.f_414.f_37 };
			scaleX = 50f;
			uParam0->f_51 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_53, 0f, 0f, 0f, scaleX, scaleX, 20f, "Hunting Grounds");
		
			if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_51))
				uParam0->f_57 = 2;
			break;
	
		case 2:
			Global_1391438.f_414.f_42 = uParam0->f_51;
			func_21(&unk, &unk4);
			func_22(unk, 300f, false);
			func_23(&num, 5);
			func_23(&num, 0);
			func_23(&num, 20);
			func_23(&num, 23);
			volLocal_85 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_36, 0f, 0f, 0f, 50f, 50f, 20f, "hunting behaviour vol");
			PED::_ATTACH_VOLUME_TO_ENTITY(volLocal_85, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
			COMPANION::_0x3CAAD93FA5B9579A(volLocal_85, 2, num);
			uParam0->f_45 = func_24(Global_1391438.f_414.f_2);
			isLocal_69 = ITEMSET::CREATE_ITEMSET(true);
			isLocal_70 = ITEMSET::CREATE_ITEMSET(true);
			isLocal_71 = ITEMSET::CREATE_ITEMSET(true);
			isLocal_72 = ITEMSET::CREATE_ITEMSET(true);
			func_6(&uLocal_73, true);
			func_6(&uLocal_82, true);
			uParam0->f_57 = 3;
			break;
	
		case 3:
			return true;
	}

	return false;
}

void func_6(var uParam0, BOOL bParam1) // Position - 0x5AA Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_25(uParam0))
		func_26(uParam0);

	return;
}

BOOL func_7(var uParam0, int iParam1) // Position - 0x5CA Hash - 0x718DD1EF ^0xDCBEC78E
{
	return uParam0->f_59 && iParam1 != false;
}

int func_8() // Position - 0x5DB Hash - 0xCD94C0FB ^0xCD94C0FB
{
	if (func_27() == -1)
		return -1;

	return func_28(func_27());
}

Volume func_9(int iParam0) // Position - 0x5F7 Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_29(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_3;
}

BOOL func_10(int iParam0) // Position - 0x617 Hash - 0x51B71FAF ^0x51B71FAF
{
	return !func_30(iParam0, 1, 0, false);
}

BOOL func_11(Ped pedParam0, Ped pedParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12, BOOL bParam13, int iParam14) // Position - 0x629 Hash - 0x943CD13D ^0x943CD13D
{
	return func_31(pedParam0, pedParam1, sParam2, sParam3, iParam4, iParam5, bParam6, iParam7, iParam8, bParam9, bParam10, iParam11, false, bParam12, bParam13, iParam14) >= 0;
}

void func_12(var uParam0, int iParam1, BOOL bParam2) // Position - 0x656 Hash - 0xA11A1C85 ^0xD2DB6618
{
	if (bParam2)
		uParam0->f_59 = uParam0->f_59 || iParam1;
	else
		uParam0->f_59 = uParam0->f_59 && iParam1;

	return;
}

char* func_13(int iParam0) // Position - 0x67C Hash - 0xC3F1692A ^0xC0E3BB05
{
	switch (iParam0)
	{
		case joaat("at_gator"):
			return "ACT_HUNTING_TARGET_ALLIGATOR";
	
		case joaat("at_duck"):
			return "ACT_HUNTING_TARGET_DUCK";
	
		case joaat("at_cougar"):
			return "ACT_HUNTING_TARGET_COUGAR";
	
		case joaat("at_buck"):
			return "ACT_HUNTING_TARGET_BUCK";
	
		case joaat("at_deer"):
			return "ACT_HUNTING_TARGET_DEER";
	
		case joaat("at_wolf"):
			return "ACT_HUNTING_TARGET_WOLF";
	
		case joaat("at_elk"):
			return "ACT_HUNTING_TARGET_ELK";
	
		case joaat("at_boar"):
			return "ACT_HUNTING_TARGET_BOAR";
	
		case 1506237323:
			return "ACT_HUNTING_TARGET_BEAR";
	
		default:
		
	}

	return "ACT_HUNTING_TARGET_GENERIC";
}

char* func_14(int iParam0, BOOL bParam1) // Position - 0x6FF Hash - 0x4B3AAF78 ^0x39A92314
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
	
		case 1:
			return "COMP_JOHN";
	
		case 2:
			return "COMP_JAVIER";
	
		case 3:
			return "COMP_BILL";
	
		case 4:
			return "COMP_UNCLE";
	
		case 5:
			return "COMP_HOSEA";
	
		case 6:
			return "COMP_MICAH";
	
		case 7:
			return "COMP_CHARLES";
	
		case 8:
			return "COMP_SEAN";
	
		case 9:
			return "COMP_LENNY";
	
		case 10:
			return "COMP_KIERAN";
	
		case 11:
			return "COMP_SADIE";
	
		case 12:
			if (func_32(Global_1835011[59 /*74*/].f_1, true) || func_32(Global_1347702[1 /*49*/].f_15, true) || func_33(Global_1347702[1 /*49*/].f_15))
				return "COMP_RUFUS";
			else if (func_34(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), true))
				return "COMP_CAIN";
		
			return "COMP_DOG";
	
		case 13:
			return "COMP_ABIGAIL";
	
		case 14:
			return "COMP_JACK";
	
		case 15:
			return "COMP_MARY_BETH";
	
		case 16:
			return "COMP_MOLLY_OSHEA";
	
		case 17:
			return "COMP_PEARSON";
	
		case 18:
			return "COMP_STRAUSS";
	
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
	
		case 20:
			return "COMP_KAREN";
	
		case 21:
			if (bParam1)
				return "COMP_SWANSON_S";
			else
				return "COMP_SWANSON";
			break;
	
		case 22:
			return "COMP_TILLY";
	
		case 23:
			return "COMP_TRELAWNY";
	
		case 24:
			return "COMP_CLEET";
	
		case 25:
			return "COMP_JOE";
	
		case 26:
			return "COMP_EAGLE_FLIES";
	}

	return "";
}

void func_15(var uParam0) // Position - 0x8DB Hash - 0xA4374FDE ^0x34C95570
{
	int itemsetSize;
	int i;
	Ped pedFromIndexedItem;

	if (!func_7(uParam0, 16384))
		return;

	if (func_35(&uLocal_73) >= 250)
	{
		func_36();
		func_6(&uLocal_73, true);
	}

	if (!func_7(uParam0, 1048576))
	{
		if (uParam0->f_48 <= 0)
		{
			if (func_37(&uLocal_76) > 300f)
			{
				func_11(uParam0->f_45, Global_35, "ACT_HUNT_TRY_BAIT", func_14(Global_1391438.f_414.f_2, false), -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
				func_12(uParam0, 1048576, true);
			}
		}
	}

	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(isLocal_70);

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, isLocal_70));
	
		if (func_38(pedFromIndexedItem, Global_35) || func_38(pedFromIndexedItem, uParam0->f_45))
		{
			if (!ITEMSET::IS_IN_ITEMSET(pedFromIndexedItem, isLocal_71))
			{
				func_39("ACT_HUNTING_KILLED_TARGET", 10000, 0, 0, 0, true);
				ITEMSET::ADD_TO_ITEMSET(pedFromIndexedItem, isLocal_71);
			
				if (!func_10(0))
					if (iLocal_86 == 0 && uParam0->f_48 < 100)
						func_11(uParam0->f_45, Global_35, "ACT_HUNT_FIRST_TARGET_KILLED", func_14(Global_1391438.f_414.f_2, false), -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
					else if (iLocal_86 > 0 && uParam0->f_48 < 100)
						func_11(uParam0->f_45, Global_35, "ACT_HUNT_TARGET_KILLED", func_14(Global_1391438.f_414.f_2, false), -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
					else
						func_11(uParam0->f_45, Global_35, "ACT_HUNT_LAST_TARGET_KILLED", func_14(Global_1391438.f_414.f_2, false), -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
			
				iLocal_86 = iLocal_86 + 1;
			}
			else if (!ITEMSET::IS_IN_ITEMSET(pedFromIndexedItem, isLocal_72))
			{
				if (ENTITY::_IS_ENTITY_FULLY_LOOTED(pedFromIndexedItem))
				{
					ITEMSET::ADD_TO_ITEMSET(pedFromIndexedItem, isLocal_72);
					uParam0->f_48 = uParam0->f_48 + func_40(uParam0, pedFromIndexedItem);
				}
			}
		}
	}

	return;
}

float func_16(var uParam0) // Position - 0xAD5 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_25(uParam0))
		return 0f;

	if (func_41(uParam0))
		return uParam0->f_2;

	return func_42() - uParam0->f_1;
}

BOOL func_17(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xB07 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_18(var uParam0, float fParam1) // Position - 0xB60 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_25(uParam0))
		return false;

	if (func_37(uParam0) > fParam1)
		return true;

	return false;
}

BOOL func_19(int iParam0, int iParam1) // Position - 0xB87 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_20() // Position - 0xB96 Hash - 0xCE28D8AA ^0x2DD55032
{
	eStackSize stackSize;

	stackSize = func_43();

	switch (stackSize)
	{
		case 0:
			return joaat("at_buck");
	
		case 1:
			return joaat("at_fox");
	
		case 2:
			return joaat("at_deer");
	
		case 3:
			return joaat("at_duck");
	
		case 5:
			return joaat("at_gator");
	
		case 6:
			return joaat("at_cougar");
	
		case 7:
			return joaat("at_buck");
	
		case 8:
			return 1506237323;
	}

	return joaat("at_deer");
}

int func_21(var uParam0, var uParam1) // Position - 0xC39 Hash - 0xBA06C937 ^0xBA06C937
{
	eStackSize stackSize;

	stackSize = func_44();

	switch (stackSize)
	{
		case 4:
			*uParam0 = { 2279.6794f, -753.1292f, 40.9928f };
			*uParam1 = 65.2774f;
			break;
	
		case 9:
			*uParam0 = { 1853.3586f, -1835.935f, 42.0656f };
			*uParam1 = 25.3398f;
			break;
	
		case 22:
			*uParam0 = { -2590.1975f, 465.025f, 145.1573f };
			*uParam1 = 77.3385f;
			break;
	
		case 37:
			*uParam0 = { -1644.8503f, -1376.8733f, 82.9681f };
			*uParam1 = 340.856f;
			break;
	
		case 43:
			*uParam0 = { -1340.4172f, 2447.7405f, 307.6064f };
			*uParam1 = 69.2479f;
			break;
	
		case 58:
			*uParam0 = { func_45(4) };
			*uParam1 = 0f;
			break;
	
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f };
			*uParam1 = 78.7552f;
			break;
	
		case 79:
			*uParam0 = { 2370.1692f, 1336.9309f, 105.273f };
			*uParam1 = 302.1729f;
			break;
	
		case 98:
			*uParam0 = { 676.6314f, -1223.8398f, 43.8567f };
			*uParam1 = 174.642f;
			break;
	
		default:
			return 0;
	}

	return 1;
}

void func_22(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0xD8D Hash - 0xDCCB3575 ^0xAC48C8F6
{
	int num;

	num = 16384;

	if (bParam4)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

void func_23(var uParam0, int iParam1) // Position - 0xDB4 Hash - 0xDFED97A2 ^0x7CA9A462
{
	int bitShift;

	bitShift = iParam1;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1, bitShift);
	return;
}

Ped func_24(int iParam0) // Position - 0xDCE Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_46(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

BOOL func_25(var uParam0) // Position - 0xE08 Hash - 0x5001E582 ^0x5001E582
{
	return func_47(*uParam0, 1);
}

void func_26(var uParam0) // Position - 0xE18 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_48(uParam0, 0f);
	return;
}

eStackSize func_27() // Position - 0xE27 Hash - 0xFD016E51 ^0xFD016E51
{
	switch (func_49())
	{
		case -1:
			return Global_40.f_4283;
	}

	return -1;
}

int func_28(eStackSize essParam0) // Position - 0xE4C Hash - 0x84838E68 ^0x84838E68
{
	switch (essParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 43;
	
		case 1:
			return 71;
	
		case 2:
			return 98;
	
		case 3:
			return 9;
	
		case 4:
			return 58;
	
		case 5:
			return 4;
	
		case 6:
			return 79;
	
		case 7:
			return 22;
	
		case 8:
			return 37;
	
		default:
		
	}

	essParam0 != -1;
	return -1;
}

BOOL func_29(int iParam0) // Position - 0xECF Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_30(int iParam0, int iParam1, Ped pedParam2, BOOL bParam3) // Position - 0xEE5 Hash - 0xB3C0CD06 ^0xC991EBC
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(pedParam2))
		if (!func_50(pedParam2, true))
			return true;
		else
			return false;

	if (func_51(iParam0))
		return false;

	return true;
}

int func_31(Ped pedParam0, Ped pedParam1, char* sParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, int iParam15) // Position - 0xF21 Hash - 0xD668806E ^0x3A7B5575
{
	BOOL flag;
	float num;
	int num2;
	char* str;

	iParam5 = iParam5;
	pedParam1 = pedParam1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		return -1;

	if (bParam6)
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(pedParam0, pedParam1, 17))
				return -1;
		else
			return -1;

	if (iParam4 == -1f)
		if (func_52())
			iParam4 = 50f;
		else
			iParam4 = 75f;

	if (bParam9)
		if (pedParam0 != Global_35 && pedParam1 != Global_35)
			if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
				if (func_53(pedParam0, true, true) > iParam4)
					return -1;

	flag = pedParam0 == pedParam1 || pedParam1 == 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0) || iParam11 == 1718175949 || bParam9 == false)
	{
		if (!flag)
			num = func_54(pedParam0, pedParam1, true, true);
	
		if (flag || bParam7 || num < iParam4 || bParam9 == false)
		{
			func_26(&uLocal_0);
		
			if (!flag && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
					TASK::TASK_LOOK_AT_ENTITY(pedParam0, pedParam1, 7500, 0, 51, 0);
			
				if (func_55(pedParam0, pedParam1, num, bParam13))
					TASK::TASK_LOOK_AT_ENTITY(pedParam1, pedParam0, 7500, SLF_WIDEST_YAW_LIMIT | 32, 31, 0);
			}
		
			if (bParam12)
			{
				str.f_5 = 1;
				str.f_6 = 1;
				str = sParam2;
				str.f_3 = iParam11;
				str.f_4 = pedParam1;
				str.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				str.f_6 = iParam15;
				str.f_2 = iParam5;
			
				if (bParam14)
				{
					MISC::SET_BIT(&(str.f_7), 3);
					MISC::SET_BIT(&(str.f_7), 2);
				}
			
				num2 = AUDIO::_0x72E4D1C4639BC465(pedParam0, &str);
			
				if (num2 >= 0)
					AUDIO::_0xB18FEC133C7C6C69(num2);
			}
			else
			{
				num2 = func_56(pedParam0, sParam2, iParam11, pedParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15) ? 1 : -1;
			}
		
			if (num2 >= 0)
			{
			}
		
			return num2;
		}
	}

	return -1;
}

BOOL func_32(int iParam0, BOOL bParam1) // Position - 0x1112 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_58(iParam0))
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

BOOL func_33(int iParam0) // Position - 0x1143 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_58(iParam0);
	return num == 3 || num == 4;
}

BOOL func_34(int iParam0, BOOL bParam1) // Position - 0x1161 Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_59(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

int func_35(var uParam0) // Position - 0x11A0 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_25(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_41(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_60() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_36() // Position - 0x11F3 Hash - 0x7364BD54 ^0xE4F804C6
{
	int entitiesNearPoint;
	int num;
	int i;
	Ped pedFromIndexedItem;
	Hash hash;

	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(Global_36, 150f, isLocal_69, 1);
	num = 0;

	for (i = 0; i < entitiesNearPoint; i = i + 1)
	{
		pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, isLocal_69));
	
		if (ENTITY::DOES_ENTITY_EXIST(pedFromIndexedItem))
		{
			if (ENTITY::GET_IS_ANIMAL(pedFromIndexedItem))
			{
				hash = func_61(pedFromIndexedItem);
			
				if (hash != joaat("at_horse"))
				{
					if (!ITEMSET::IS_IN_ITEMSET(pedFromIndexedItem, isLocal_70))
					{
						ITEMSET::ADD_TO_ITEMSET(pedFromIndexedItem, isLocal_70);
						num = num + 1;
					}
				}
			}
		}
	}

	ITEMSET::_CLEAR_ITEMSET(isLocal_69);
	return num > 0;
}

float func_37(var uParam0) // Position - 0x127B Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_25(uParam0))
		return uParam0->f_1;

	if (func_41(uParam0))
		return uParam0->f_2;

	return func_42() - uParam0->f_1;
}

int func_38(Ped pedParam0, Ped pedParam1) // Position - 0x12B0 Hash - 0xAECB9873 ^0xB730ABFA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (ENTITY::IS_ENTITY_A_PED(pedParam0))
			if (ENTITY::IS_ENTITY_DEAD(pedParam0))
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)) == pedParam1)
					return 1;

	return 0;
}

int func_39(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x12E7 Hash - 0x8EBD6187 ^0x42F0F0AC
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

int func_40(var uParam0, Ped pedParam1) // Position - 0x1322 Hash - 0x8D3F2F3 ^0x8298E08D
{
	Hash hash;

	if (!ENTITY::GET_IS_ANIMAL(pedParam1))
		return 0;

	hash = func_61(pedParam1);

	if (func_62(hash))
		return 100;

	if (hash == *uParam0)
		if (func_63(pedParam1, false))
			return 25;
		else
			return 50;
	else if (func_63(pedParam1, false))
		return 15;
	else
		return 25;

	return 50;
}

BOOL func_41(var uParam0) // Position - 0x1389 Hash - 0x39705408 ^0x39705408
{
	return func_47(*uParam0, 2);
}

float func_42() // Position - 0x1399 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

eStackSize func_43() // Position - 0x13CB Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

eStackSize func_44() // Position - 0x13D9 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

Vector3 func_45(int iParam0) // Position - 0x13E9 Hash - 0x563C355B ^0x563C355B
{
	switch (iParam0)
	{
		case 0:
			return -1343.6992f, 2429.3972f, 307.0626f;
	
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
	
		case 2:
			return 667.9077f, -1252.7803f, 42.9221f;
	
		case 3:
			return 1880.8066f, -1873.2307f, 41.8094f;
	
		case 4:
			return 1422.6255f, -7332.473f, 80.5977f;
	
		case 5:
			return 2254.96f, -758.12f, 41.75f;
	
		case 6:
			return 2351.2817f, 1362.0768f, 104.9752f;
	
		case 7:
			return -2593.2102f, 453.95334f, 145.9973f;
	
		case 8:
			return func_64();
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_46(int iParam0) // Position - 0x14C9 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

BOOL func_47(int iParam0, int iParam1) // Position - 0x14D5 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_48(var uParam0, float fParam1) // Position - 0x14E4 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_42() - fParam1;
	func_65(uParam0, 1);
	func_66(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_49() // Position - 0x150A Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_50(Ped pedParam0, BOOL bParam1) // Position - 0x1518 Hash - 0xDF64D629 ^0x407E21C2
{
	if (func_67(pedParam0, 0, true))
		return AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedParam0) || bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(pedParam0);

	return false;
}

BOOL func_51(int iParam0) // Position - 0x1548 Hash - 0x7997973A ^0x7997973A
{
	if (func_68(true))
		return true;

	if (func_25(&uLocal_0) && !func_69(&uLocal_0, 7.5f + iParam0))
		return true;

	return false;
}

BOOL func_52() // Position - 0x157E Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_70() != -1;
}

float func_53(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1599 Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return -1f;

	return func_54(Global_35, pedParam0, bParam1, bParam2);
}

float func_54(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x15C2 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_55(Ped pedParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x160A Hash - 0x3576CBF5 ^0xBF0EF05A
{
	if (!bParam3)
		return false;

	if (fParam2 > 25f)
		return false;

	if (pedParam1 == Global_35)
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			return false;

	return true;
}

BOOL func_56(Ped pedParam0, char* sParam1, int iParam2, Ped pedParam3, BOOL bParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1643 Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = pedParam3;
	str.f_5 = bParam4;
	str.f_6 = iParam7;
	return func_71(pedParam0, &str);
}

var func_57(BOOL bParam0, var uParam1, var uParam2) // Position - 0x168A Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_58(int iParam0) // Position - 0x16A1 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_72(iParam0))
		return -1;

	return func_73(iParam0);
}

BOOL func_59(int iParam0) // Position - 0x16BD Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_74(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

int func_60() // Position - 0x16E1 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

Hash func_61(Ped pedParam0) // Position - 0x16FF Hash - 0x8DCF60ED ^0xF39063DB
{
	Hash hash;

	hash = 0;

	if (ENTITY::GET_IS_ANIMAL(pedParam0))
		hash = func_75(pedParam0);

	return hash;
}

BOOL func_62(Hash hParam0) // Position - 0x1720 Hash - 0x90A8253B ^0x90A8253B
{
	switch (hParam0)
	{
		case joaat("at_gator"):
		case joaat("at_cougar"):
		case joaat("at_buck"):
		case joaat("at_elk"):
		case 1506237323:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_63(Ped pedParam0, BOOL bParam1) // Position - 0x1757 Hash - 0xEB24364B ^0xCE134089
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 58))
	{
		if (bParam1)
			return ENTITY::IS_ENTITY_IN_AIR(pedParam0, 1);
	
		return true;
	}

	return false;
}

Vector3 func_64() // Position - 0x178C Hash - 0xEE6F6785 ^0xEE6F6785
{
	if (func_76(70))
		return -1634.2521f, -1358.5771f, 83.9077f;

	if (func_76(73))
		return -1665.4187f, -1346.2577f, 84.11175f;

	return -1641.1001f, -1359.9785f, 83.4932f;
}

void func_65(var uParam0, int iParam1) // Position - 0x17D9 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_66(var uParam0, int iParam1) // Position - 0x17EA Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_67(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x17FF Hash - 0x41649F50 ^0x41649F50
{
	iParam1 = iParam1 | 1;

	if (bParam2)
		iParam1 = iParam1 | 2;

	return func_4(pedParam0, iParam1);
}

BOOL func_68(BOOL bParam0) // Position - 0x1820 Hash - 0xD6E12BEB ^0xEB8894D
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

BOOL func_69(var uParam0, float fParam1) // Position - 0x182E Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_18(uParam0, fParam1))
	{
		func_77(uParam0);
		return true;
	}

	return false;
}

eStackSize func_70() // Position - 0x184C Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_71(Ped pedParam0, Any* panParam1) // Position - 0x185A Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

BOOL func_72(int iParam0) // Position - 0x186A Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_73(int iParam0) // Position - 0x189D Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_78(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_74(int iParam0, var uParam1, var uParam2) // Position - 0x18DE Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_79(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

Hash func_75(Ped pedParam0) // Position - 0x1900 Hash - 0xE6B34BF5 ^0xDC9DA829
{
	return ENTITY::_GET_PED_ANIMAL_TYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0));
}

BOOL func_76(int iParam0) // Position - 0x1912 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_32(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

void func_77(var uParam0) // Position - 0x1971 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

int func_78(int iParam0) // Position - 0x1987 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_79(int iParam0, int iParam1) // Position - 0x1A08 Hash - 0x99A93628 ^0x27AE8C83
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
	
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
	
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
	
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
	
		case -2104294676:
			return 83;
	
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
	
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
	
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
	
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
	
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
	
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
	
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
	
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
	
		case -2033572567:
			return 92;
	
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
	
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
	
		case -2006082799:
			return 56;
	
		case -1994410205:
			return 499;
	
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
	
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
	
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
	
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
	
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
	
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
	
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
	
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
	
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
	
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
	
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
	
		case -1885734028:
			return 110;
	
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
	
		case -1856459307:
			return 219;
	
		case -1837343824:
			return 496;
	
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
	
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
	
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
	
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
	
		case -1818590041:
			return 246;
	
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
	
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
	
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
	
		case joaat("CSTAG_BCH_BASE"):
			return 10;
	
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
	
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
	
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
	
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
	
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
	
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
	
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
	
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
	
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
	
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
	
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
	
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
	
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
	
		case -1584659518:
			return 210;
	
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
	
		case -1565979762:
			return 507;
	
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
	
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
	
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
	
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
	
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
	
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
	
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
	
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
	
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
	
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
	
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
	
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
	
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
	
		case -1426009748:
			return 119;
	
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
	
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
	
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
	
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
	
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
	
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
	
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
	
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
	
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
	
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
	
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
	
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
	
		case -1333840726:
			return 236;
	
		case -1318290630:
			return 254;
	
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
	
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
	
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
	
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
	
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
	
		case -1235200494:
			return 165;
	
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
	
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
	
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
	
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
	
		case joaat("CSTAG_PRG_BASE"):
			return 9;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
	
		case -1171086122:
			return 41;
	
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
	
		case -1152282847:
			return 33;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
	
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
	
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
	
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
	
		case -1061998329:
			return 164;
	
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
	
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
	
		case -1045864225:
			return 510;
	
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
	
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
	
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
	
		case -978287173:
			return 12;
	
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
	
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
	
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
	
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
	
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
	
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
	
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
	
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
	
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
	
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
	
		case joaat("CSTAG_COL_BASE"):
			return 2;
	
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
	
		case -830432609:
			return 492;
	
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
	
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
	
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
	
		case -818926670:
			return 200;
	
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
	
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
	
		case joaat("CSTAG_HSO_BASE"):
			return 3;
	
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
	
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
	
		case -803062666:
			return 65;
	
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
	
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
	
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
	
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
	
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
	
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
	
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
	
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
	
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
	
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
	
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
	
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
	
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
	
		case -671103079:
			return 504;
	
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
	
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
	
		case -650501093:
			return 509;
	
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
	
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
	
		case -636774257:
			return 146;
	
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
	
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
	
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
	
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
	
		case -604891653:
			return 237;
	
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
	
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
	
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
	
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
	
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
	
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
	
		case -534913305:
			return 174;
	
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
	
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
	
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
	
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
	
		case -453449739:
			return 182;
	
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
	
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
	
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
	
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
	
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
	
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
	
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
	
		case -399703928:
			return 155;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
	
		case -381477663:
			return 37;
	
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
	
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
	
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
	
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
	
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
	
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
	
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
	
		case -317452243:
			return 128;
	
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
	
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
	
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
	
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
	
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
	
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
	
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
	
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
	
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
	
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
	
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
	
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
	
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
	
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
	
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
	
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
	
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
	
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
	
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
	
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
	
		case -170673728:
			return 156;
	
		case -165538585:
			return 127;
	
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
	
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
	
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
	
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
	
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
	
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
	
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
	
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
	
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
	
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
	
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
	
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
	
		case -98209688:
			return 55;
	
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
	
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
	
		case -58291054:
			return 201;
	
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
	
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
	
		case -21372580:
			return 46;
	
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
	
		case -8269375:
			return 137;
	
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

