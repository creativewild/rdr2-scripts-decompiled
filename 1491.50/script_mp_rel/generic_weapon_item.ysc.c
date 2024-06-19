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
	int iLocal_16 = 0;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x4F0E2188 ^0x38261839
{
	Object objectIndexFromEntityIndex;
	BOOL flag;
	Hash itemInteractionState;
	float itemInteractionPromptProgress;
	float weaponPermanentDegradation;
	float level;
	float level2;
	float level3;
	float level4;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	objectIndexFromEntityIndex = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_33, 0));
	func_1(&objectIndexFromEntityIndex);
	flag = func_2();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_3();

	AUDIO::_START_AUDIO_SCENESET("weapon", "Inspect_Item_Scenes");

	while (func_4())
	{
		WEAPON::_0x000FA7A4A8443AF7(uScriptParam_0.f_1);
	
		if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(iLocal_16.f_5))
		{
			itemInteractionState = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
		
			if (itemInteractionState == joaat("LONGARM_HOLD") || itemInteractionState == joaat("SHORTARM_HOLD"))
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iLocal_16.f_5, true);
		}
	
		if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(iLocal_16.f_5))
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);
	
		switch (func_5())
		{
			case 0:
				if (!flag)
					flag = func_2();
				else
					func_6(1);
				break;
		
			case 1:
				func_7();
			
				if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("LONGARM_CLEAN_ENTER") || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("SHORTARM_CLEAN_ENTER"))
				{
					func_8(joaat("kit_gun_oil"), 1, false, 562618531);
					func_10(func_9(joaat("updated"), joaat("weapon_cleaning")), 1);
					func_6(2);
				}
				break;
		
			case 2:
				func_6(3);
				break;
		
			case 3:
				if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("LONGARM_CLEAN_EXIT") || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("SHORTARM_CLEAN_EXIT"))
				{
					func_6(4);
				}
				else
				{
					itemInteractionPromptProgress = TASK::GET_ITEM_INTERACTION_PROMPT_PROGRESS(Global_33, joaat("INPUT_CONTEXT_X"));
				
					if (itemInteractionPromptProgress > 0f)
					{
						weaponPermanentDegradation = WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(objectIndexFromEntityIndex);
						level = (iLocal_16.f_11 + weaponPermanentDegradation) - (itemInteractionPromptProgress * iLocal_16.f_11);
						level3 = (iLocal_16.f_13 + weaponPermanentDegradation) - (itemInteractionPromptProgress * iLocal_16.f_13);
						level2 = iLocal_16.f_12 - (itemInteractionPromptProgress * iLocal_16.f_12);
						level4 = iLocal_16.f_14 - (itemInteractionPromptProgress * iLocal_16.f_14);
						WEAPON::_SET_WEAPON_DEGRADATION(objectIndexFromEntityIndex, level);
						WEAPON::_SET_WEAPON_DAMAGE(objectIndexFromEntityIndex, level3, false);
						WEAPON::_SET_WEAPON_DIRT(objectIndexFromEntityIndex, level2, false);
						WEAPON::_SET_WEAPON_SOOT(objectIndexFromEntityIndex, level4, false);
						func_11(objectIndexFromEntityIndex);
					}
				}
				break;
		
			case 4:
				func_12(objectIndexFromEntityIndex);
				func_6(1);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_3();
	return;
}

void func_1(var uParam0) // Position - 0x202 Hash - 0xF3C01A04 ^0x4E31AB9C
{
	Hash weaponHash;
	Ped ped;
	var unk;
	var unk5;
	var guid;

	iLocal_16 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(joaat("pm_flow_weapon_inspect"));

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iLocal_16.f_1))
	{
		ped = func_13();
		WEAPON::GET_CURRENT_PED_WEAPON(ped, &weaponHash, true, 0, false);
		unk = { func_14() };
	
		if (!func_15(&(Global_1940085.f_66), &unk))
		{
			iLocal_16.f_7 = { Global_1940085.f_66 };
		}
		else
		{
			unk5 = { func_16(weaponHash, false, 0) };
			iLocal_16.f_7 = { func_17(weaponHash, unk5, joaat("SLOTID_NONE"), false) };
		}
	
		Global_1940085.f_66 = { unk };
		guid = { iLocal_16.f_7 };
		iLocal_16.f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "ItemInspection");
		iLocal_16.f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iLocal_16.f_1, "Visible", false);
		iLocal_16.f_2 = INVENTORY::_0x46DB71883EE9D5AF(iLocal_16.f_1, "stats", &guid, ped);
		iLocal_16.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iLocal_16.f_1, "itemLabel", func_18(weaponHash, *uParam0));
		iLocal_16.f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_16.f_1, "tipText", func_19(uParam0));
		iLocal_16.f_11 = func_20(WEAPON::GET_WEAPON_DEGRADATION(*uParam0) - WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(*uParam0), 0f, 1f);
		iLocal_16.f_13 = func_20(WEAPON::_GET_WEAPON_DAMAGE(*uParam0) - WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(*uParam0), 0f, 1f);
		iLocal_16.f_12 = WEAPON::_GET_WEAPON_DIRT(*uParam0);
		iLocal_16.f_14 = WEAPON::_GET_WEAPON_SOOT(*uParam0);
	}

	HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_INSPECT_ITEM"));
	return;
}

BOOL func_2() // Position - 0x343 Hash - 0xC95F6B33 ^0x76F866AB
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_16))
		return 0;

	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_16, 0);

	if (!UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(-813354801))
		if (!UISTATEMACHINE::UI_STATE_MACHINE_CREATE(-813354801, iLocal_16))
			return 0;
	else
		return 0;

	return 1;
}

void func_3() // Position - 0x389 Hash - 0x34D87F70 ^0xEF486B56
{
	AUDIO::_STOP_AUDIO_SCENESET("Inspect_Item_Scenes");
	UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_16);
	iLocal_16 = 0;
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iLocal_16.f_1);
	HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_INSPECT_ITEM"));

	if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_4() // Position - 0x3BD Hash - 0xAAF1C94E ^0x909FF23A
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (PED::IS_PED_SWIMMING(Global_33))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		return false;
	}

	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
		return false;

	if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "isInspecting") && !PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode") && !Global_1940085.f_8)
		return false;

	if (func_21())
		return false;

	return true;
}

int func_5() // Position - 0x433 Hash - 0x345AD124 ^0xAB7FD0A4
{
	return iLocal_16.f_6;
}

void func_6(int iParam0) // Position - 0x43F Hash - 0x89313811 ^0x169BF668
{
	iLocal_16.f_6 = iParam0;
	return;
}

void func_7() // Position - 0x44D Hash - 0x32122186 ^0xB26CFC6F
{
	Object objectIndexFromEntityIndex;

	objectIndexFromEntityIndex = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_33, 0));

	if (func_22(joaat("kit_gun_oil"), 1) && WEAPON::GET_WEAPON_DEGRADATION(objectIndexFromEntityIndex) != 0f && WEAPON::GET_WEAPON_DEGRADATION(objectIndexFromEntityIndex) > WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(objectIndexFromEntityIndex))
	{
		if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE"))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE", true, -1);
	}
	else
	{
		if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE"))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE", false, -1);
	
		if (!func_23(0, false, true) && !func_24() && func_25())
		{
			if (!iLocal_16.f_15 && WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(objectIndexFromEntityIndex) > 0f && WEAPON::GET_WEAPON_DEGRADATION(objectIndexFromEntityIndex) <= WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(objectIndexFromEntityIndex))
			{
				func_26("WEAPON_PERM_DEGREDATION", 10000, 0, 0, 0, true);
				iLocal_16.f_15 = 1;
			}
		
			if (!iLocal_16.f_16 && !func_22(joaat("kit_gun_oil"), 1))
			{
				if (WEAPON::GET_WEAPON_DEGRADATION(objectIndexFromEntityIndex) > WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(objectIndexFromEntityIndex))
				{
					func_26("NO_GUN_OIL", 10000, 0, 0, 0, true);
					iLocal_16.f_16 = 1;
				}
			}
		}
	}

	return;
}

int func_8(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x55A Hash - 0x6E56F3C0 ^0x23695AE
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;
	var unk2;

	if (!func_27(hParam0, 0))
		return 0;

	if (hParam3 == -142743235)
		if (func_28(hParam0))
			hParam3 = 562618531;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_29(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_30(hParam0, -iParam1, flag, flag2, flag3, false, false);
	
		return 0;
	}

	if (!func_22(hParam0, 1))
		return 0;

	statId = { func_31(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_32(hParam0, false, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_32(hParam0, false, false, false) - iParam1 < 0)
		{
			func_8(hParam0, func_32(hParam0, false, false, false), bParam2, hParam3);
			return 0;
		}
	}

	if (func_33(hParam0) == joaat("WEAPON"))
	{
		if (!func_34(hParam0, iParam1, false, hParam3))
			return 0;
	}
	else if (!func_35(hParam0, iParam1, hParam3, bParam2, false))
	{
		return 0;
	}
	else
	{
		unk2 = { func_16(hParam0, false, 0) };
	
		if (func_36(false) && unk2.f_4 == joaat("SLOTID_SATCHEL"))
			func_37(1, false, 0);
	}

	if (hParam0 == joaat("document_player_journal"))
		Global_1940085.f_21 = 0;

	if (!func_36(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_30(hParam0, -iParam1, flag, flag2, flag3, false, false);

	return 1;
}

struct<2> func_9(int iParam0, int iParam1) // Position - 0x70C Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_10(var uParam0, var uParam1, int iParam2) // Position - 0x722 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_11(Object obParam0) // Position - 0x73F Hash - 0xC20E5C4A ^0x3D7B5FCD
{
	Ped ped;
	Hash weaponHash;

	ped = func_13();
	WEAPON::GET_CURRENT_PED_WEAPON(ped, &weaponHash, true, 0, false);
	INVENTORY::_0x951847CEF3D829FF(iLocal_16.f_2, &(iLocal_16.f_7), ped);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(iLocal_16.f_3, func_18(weaponHash, obParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iLocal_16.f_4, func_19(&obParam0));
	return;
}

void func_12(Object obParam0) // Position - 0x785 Hash - 0x2E2DAF27 ^0xDAB2AB8A
{
	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return;

	WEAPON::_SET_WEAPON_DEGRADATION(obParam0, WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(obParam0));
	WEAPON::_SET_WEAPON_DAMAGE(obParam0, WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(obParam0), false);
	WEAPON::_SET_WEAPON_DIRT(obParam0, 0f, false);
	WEAPON::_SET_WEAPON_SOOT(obParam0, 0f, false);
	func_11(obParam0);
	return;
}

Ped func_13() // Position - 0x7C9 Hash - 0x14A4F660 ^0xC2F042AC
{
	return PLAYER::GET_PLAYER_PED(255);
}

struct<4> func_14() // Position - 0x7D7 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_15(var uParam0, var uParam1) // Position - 0x7E3 Hash - 0x361C7388 ^0xEA068BC1
{
	if (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1 && uParam0->f_2 == uParam1->f_2 && uParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

struct<5> func_16(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x824 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_38(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_33(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_45(hParam0, -1823706425))
			{
				unk = { func_17(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_45(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_17(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_17(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_45(hParam0, -1653629781))
			{
				unk = { func_17(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_43(bParam1) };
		
			switch (func_44(hParam0))
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
			unk = { func_17(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_39(bParam1) };
		
			if (iParam2 && func_40(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_41(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_41(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_42(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_46(unk, &unk28, bParam1, false, -1))
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
			else if (func_45(hParam0, -1653629781))
			{
				unk = { func_17(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_17(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xB98 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_27(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_47(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

Hash func_18(Hash hParam0, Object obParam1) // Position - 0xBC9 Hash - 0xC97CF502 ^0xD10FC709
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, WEAPON::_GET_WEAPON_NAME(hParam0), 64);

	if (WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(obParam1) > 0f)
		TEXT_LABEL_ASSIGN_STRING(&unk, WEAPON::_GET_WEAPON_NAME_WITH_PERMANENT_DEGRADATION(hParam0, WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(obParam1)), 64);

	return MISC::GET_HASH_KEY(&unk);
}

const char* func_19(var uParam0) // Position - 0xBFC Hash - 0x98E5A260 ^0x2375D358
{
	float weaponDegradation;
	float weaponPermanentDegradation;

	weaponDegradation = WEAPON::GET_WEAPON_DEGRADATION(*uParam0);
	weaponPermanentDegradation = WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(*uParam0);

	if (weaponDegradation == 0f)
		return HUD::GET_STRING_FROM_HASH_KEY(1803343570);

	if (weaponPermanentDegradation > 0f && weaponDegradation == weaponPermanentDegradation)
		return HUD::GET_STRING_FROM_HASH_KEY(-1933427003);

	return HUD::GET_STRING_FROM_HASH_KEY(-54957657);
}

float func_20(float fParam0, float fParam1, float fParam2) // Position - 0xC4F Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_21() // Position - 0xC76 Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1915656.f_20637 || Global_1915656.f_22504.f_1;
}

BOOL func_22(Hash hParam0, int iParam1) // Position - 0xC94 Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_27(hParam0, 0))
		return false;

	num = func_33(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_49(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_48(hParam0, 1))
				return false;
			break;
	}

	return func_32(hParam0, false, false, false) >= iParam1;
}

BOOL func_23(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD17 Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_50())
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

	if (iParam0 == 0 && func_52(func_51(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_53(func_51(0)))
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

BOOL func_24() // Position - 0xE8D Hash - 0x84CBCCC1 ^0x84CBCCC1
{
	BOOL num;

	if (!func_54())
		return false;

	num = Global_1904402.f_8874;
	Global_1904402.f_8874 = 0;
	return num;
}

BOOL func_25() // Position - 0xEB4 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_54())
		return false;

	return Global_1904402.f_8873;
}

int func_26(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xECF Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_27(Hash hParam0, int iParam1) // Position - 0xF0A Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_28(Hash hParam0) // Position - 0xF24 Hash - 0x1B551CF7 ^0xD3BB1F31
{
	return func_33(hParam0) == joaat("consumable");
}

Hash func_29(Hash hParam0, int iParam1) // Position - 0xF38 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_27(hParam0, 0))
		return 0;

	num = func_33(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_55(hParam0, 1399091007))
	{
		func_56(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_30(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xFB2 Hash - 0x81C6837 ^0x21B516A3
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

	if (!func_27(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_57() || bParam6)
	{
		func_58(hParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
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
	else if (bParam2 && func_60(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_33(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_55(hParam0, -1982291600) && !func_55(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	hash = func_44(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || hash == -1674363638 || hash == 252325943 || hash == 829857647 || hash == -636562458 || hash == 1341188928 || hash == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_61(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
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

	if (func_55(hParam0, 474910316))
	{
		str4 = func_62(hParam0);
	
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

	if (func_55(hParam0, 1816585950))
		num4 = joaat("color_objective");

	if (func_63(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_yellow");
		else
			num4 = joaat("color_yellowdark");

	hash2 = func_64(hParam0, false);

	if (func_65(hash) && func_55(hParam0, -306684263) && hash2 != 0)
	{
		hash2 = func_66(hParam0);
	}
	else if (func_33(hParam0) == joaat("CLOTHING"))
	{
		hash3 = func_67(hParam0);
	
		if (func_27(hash3, 0))
			hash2 = func_64(hash3, false);
	}

	if (func_68(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_69(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_70(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash2), value), num4);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash2);

	if (hash == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || hash == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || hash == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || hash == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_71(hParam0, -442898163));

	if (hash == -126813555 || hash == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_72(hParam0, &unk7))
			str5 = func_74(func_73(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_75(str5, str.f_1, MISC::GET_HASH_KEY(str), num5, num4, str3, str2, 0, true);
	return;
}

struct<2> func_31(Hash hParam0) // Position - 0x1483 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_27(hParam0, 0))
		return unk;

	if (func_55(hParam0, -305066475))
		if (func_76() == -1)
			if (func_55(hParam0, -537818634))
				return func_77(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_77(joaat("deadeye_items"));
	else if (func_55(hParam0, -537818634))
		return func_77(joaat("medicine_items"));

	if (func_55(hParam0, 2084895747))
		return func_77(joaat("lock_breaker_items"));

	return unk3;
}

int func_32(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1517 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_27(hParam0, 0))
		return 0;

	num = func_33(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_29(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_78(hParam0, false);
	}

	if (func_79(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_47(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_80(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_47(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

int func_33(Hash hParam0) // Position - 0x15D9 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_27(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_34(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1604 Hash - 0x4C808C39 ^0x99CF3799
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

	unk = { func_81(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam2)
		func_82(&unk, func_39(false));

	if (!func_83(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_84(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_85(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_86(num);
	num3 < iParam1;
	return true;
}

BOOL func_35(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x16D0 Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_27(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_79(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_87(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk = { func_16(hParam0, bParam4, 0) };
	unk6 = { func_17(hParam0, unk, unk.f_4, bParam4) };
	return func_85(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_36(BOOL bParam0) // Position - 0x1748 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_76() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_47(bParam0));
}

void func_37(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1766 Hash - 0x2B098F6F ^0x2F7D859F
{
	Global_1940252.f_5 = iParam0;
	Global_1940252.f_37 = iParam2;

	if (bParam1 || func_88() && iParam2 == 0)
	{
		func_89(1);
		func_90(1);
	}

	return;
}

struct<4> func_38(BOOL bParam0) // Position - 0x17A0 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_47(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_17(joaat("character"), func_14(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_17(joaat("character"), func_14(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_17(joaat("character"), func_14(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_39(BOOL bParam0) // Position - 0x1840 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_47(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_17(923904168, func_38(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_17(923904168, func_38(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_17(923904168, func_38(bParam0), -740156546, false);
}

int func_40(Hash hParam0, BOOL bParam1) // Position - 0x18E1 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_44(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_91();
		else
			return 1;

	return 0;
}

BOOL func_41(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1918 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_92(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_42(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1933 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_93(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_43(BOOL bParam0) // Position - 0x1954 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_47(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_17(271701509, func_38(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_17(271701509, func_38(bParam0), 12999093, false);
}

Hash func_44(Hash hParam0) // Position - 0x19BE Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_27(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_45(Hash hParam0, Hash hParam1) // Position - 0x19E9 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_44(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_94(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_46(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x1A56 Hash - 0x113CD144 ^0x113CD144
{
	return func_95(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_47(BOOL bParam0) // Position - 0x1A6C Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_76() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_48(Hash hParam0, int iParam1) // Position - 0x1AAD Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_27(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_29(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_96("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_84(&unk, i, num, num2))
			{
			}
			else if (!func_97(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_86(num);
				return true;
			}
		}
	
		func_86(num);
	}

	return false;
}

BOOL func_49(Hash hParam0) // Position - 0x1B55 Hash - 0x52397408 ^0x52397408
{
	Hash hash;
	int num;
	int num2;

	if (!func_27(hParam0, 0))
		return false;

	hash = func_44(hParam0);

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

	num = func_98(hParam0);

	if (!(num == 0))
	{
		num2 = func_99(&(Global_17418.f_55.f_664.f_1354.f_5), num);
	
		if (num2 == -1)
			return true;
	}

	num = func_100(hParam0);
	num2 = func_99(&(Global_17418.f_55.f_664.f_1354.f_5), num);

	if (num2 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num2 /*17*/];
}

BOOL func_50() // Position - 0x1C11 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_52(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

struct<2> func_51(int iParam0) // Position - 0x1C69 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_52(var uParam0, var uParam1) // Position - 0x1C7D Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_101(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_102(uParam0))
		return false;

	return true;
}

int func_53(var uParam0, var uParam1) // Position - 0x1CB1 Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

BOOL func_54() // Position - 0x1CBB Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_55(Hash hParam0, Hash hParam1) // Position - 0x1CCF Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_27(hParam0, 0))
		return func_104(func_103(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_56(Hash hParam0, var uParam1, var uParam2) // Position - 0x1D10 Hash - 0x38E6C2DD ^0xA4FE6475
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

BOOL func_57() // Position - 0x1F1C Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_58(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1F29 Hash - 0x3B7A5BE9 ^0xEE7A100D
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

var func_59(BOOL bParam0, var uParam1, var uParam2) // Position - 0x204C Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_60(Hash hParam0, int iParam1) // Position - 0x2063 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_27(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_61(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x2082 Hash - 0x92B705D3 ^0xB783F681
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

char* func_62(Hash hParam0) // Position - 0x2175 Hash - 0xFBA883FB ^0xD0CF0F04
{
	if (func_55(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_55(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_55(hParam0, 143267379))
		return "collectible_coins";

	if (func_55(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_55(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_55(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_55(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_55(hParam0, 781094263))
		return "collectible_flowers";

	if (func_55(hParam0, -352095726) || func_55(hParam0, -2014783736) || func_55(hParam0, -545064757) || func_55(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_63(Hash hParam0) // Position - 0x2270 Hash - 0x12CDDB68 ^0xF31C74A7
{
	if (func_55(hParam0, -189374246))
		if (func_105(hParam0, -1305775593) || func_105(hParam0, 1384151091) || func_105(hParam0, 2075388272) || func_105(hParam0, -1738780413))
			return true;

	if (func_55(hParam0, -753854379) || func_55(hParam0, 173360570))
		return true;

	return false;
}

Hash func_64(Hash hParam0, BOOL bParam1) // Position - 0x22EF Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_27(hParam0, 0))
		return 0;

	hash = func_106(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

BOOL func_65(Hash hParam0) // Position - 0x231D Hash - 0x339D45CE ^0x339D45CE
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

Hash func_66(Hash hParam0) // Position - 0x2344 Hash - 0x9C7FC6B8 ^0x60951C4B
{
	var outData;
	int i;

	if (!func_27(hParam0, 0))
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

Hash func_67(Hash hParam0) // Position - 0x23B2 Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_107(hParam0);

	if (num == 0)
		return 0;

	unk = { func_108(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_109(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_110(outKey))
			{
				func_111(collectionId);
				return outKey;
			}
		}
	
		func_111(collectionId);
	}

	return 0;
}

BOOL func_68(Hash hParam0, Hash hParam1) // Position - 0x2437 Hash - 0x34B85114 ^0x6986CE99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return true;

	return false;
}

int func_69(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x2468 Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_27(hParam0, 0) && !func_112(func_103(hParam0), 2))
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

const char* func_70(const char* sParam0, int iParam1) // Position - 0x24C7 Hash - 0x9E99F03 ^0x641346F2
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

 func_71(Hash hParam0, int iParam1) // Position - 0x24E1 Hash - 0x7C967237 ^0x7C967237
{
	 num;

	num = func_113(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_72(Hash hParam0, char* sParam1) // Position - 0x24FF Hash - 0xE779657E ^0x44FD4FF7
{
	int lengthOfLiteralString;
	var unk;

	if (!func_27(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_114(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_115(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_116(hParam0), 128);

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

const char* func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x257C Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_74(const char* sParam0, int iParam1) // Position - 0x2590 Hash - 0xB0CFF0C3 ^0x5650FE2
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_70(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_75(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x25C6 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_117(sParam0, sParam1, hParam2);
	return num2;
}

int func_76() // Position - 0x2629 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

struct<2> func_77(int iParam0) // Position - 0x2637 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_78(Hash hParam0, BOOL bParam1) // Position - 0x2647 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_81(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_82(&unk, func_39(false));

	if (!func_83(&unk, &num, &num2, false))
		return 0;

	func_86(num);
	return num2;
}

int func_79(Hash hParam0, Hash hParam1) // Position - 0x26A6 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_112(func_103(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

struct<4> func_80(Hash hParam0, BOOL bParam1) // Position - 0x26D2 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_16(hParam0, bParam1, 0) };
	return func_17(hParam0, unk, unk.f_4, bParam1);
}

struct<18> func_81(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x26F7 Hash - 0x90CCF0F4 ^0xA5F3D799
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

void func_82(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x27D5 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_83(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x27F0 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_47(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_84(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2815 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_85(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2850 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_118(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_46(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_36(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_76() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_119(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = bParam5;
				num2.f_7 = hParam4;
				func_120(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_47(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_86(int iParam0) // Position - 0x296E Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_87(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x298F Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	BOOL flag;

	if (func_118(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_79(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_36(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_121(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_122(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_119(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			flag.f_7 = -142743235;
			flag.f_16 = -1;
			flag = bParam3;
			flag.f_7 = hParam2;
			func_120(num3, flag);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_47(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

BOOL func_88() // Position - 0x2AA7 Hash - 0xA30B23E7 ^0xAB29D7A2
{
	if (Global_1940252.f_11596 != Global_1940252.f_41.f_203 - 1 || func_124(func_123(0), Global_1940252.f_11588, false, true, true) > 0 || Global_1940252.f_11596 == 15)
		return true;

	func_125(0);

	if (Global_1940252.f_7)
		return true;

	return false;
}

void func_89(int iParam0) // Position - 0x2B06 Hash - 0x29A8F290 ^0x82294867
{
	Global_1940252.f_11 = iParam0;
	return;
}

void func_90(int iParam0) // Position - 0x2B16 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1940252.f_10 = iParam0;
	return;
}

int func_91() // Position - 0x2B26 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_126(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_92(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x2B43 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_27(hParam0, 0))
		return 0;

	if (!bParam7 && func_79(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_17(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_47(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_47(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_93(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x2BC2 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_47(false);
	*panParam1 = { func_17(hParam0, func_39(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_94(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x2C07 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_95(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x2C3A Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_47(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_96(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x2C74 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_47(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_97(Hash hParam0) // Position - 0x2C9B Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_98(Hash hParam0) // Position - 0x2CB6 Hash - 0xB8EC44B7 ^0x72487142
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

int func_99(var uParam0, int iParam1) // Position - 0x2D99 Hash - 0x6AC2726E ^0xDB215040
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

int func_100(Hash hParam0) // Position - 0x2DD6 Hash - 0xD114ACC1 ^0x3428F85C
{
	Hash hash;

	hash = func_44(hParam0);

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

BOOL func_101(int iParam0) // Position - 0x2E43 Hash - 0x5000025C ^0x5000025C
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

int func_102(int iParam0) // Position - 0x2E82 Hash - 0xE34A477A ^0xE34A477A
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

Hash func_103(Hash hParam0) // Position - 0x2F18 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_104(Hash hParam0, Hash hParam1) // Position - 0x2F22 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_112(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_105(Hash hParam0, Hash hParam1) // Position - 0x2F58 Hash - 0xCB56AA2F ^0x760BB648
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

Hash func_106(Hash hParam0, BOOL bParam1) // Position - 0x2F7F Hash - 0xBBDA5425 ^0xE0DEE0F3
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

int func_107(Hash hParam0) // Position - 0x3021 Hash - 0xE1F3DDAE ^0xC8D3B326
{
	var outData;
	int num;

	if (!func_27(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

struct<10> func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x305B Hash - 0x440EE211 ^0xAE2816F9
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

BOOL func_109(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x312F Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_110(Hash hParam0) // Position - 0x3150 Hash - 0x5E6E1858 ^0xE905275C
{
	!func_27(hParam0, 0);

	if (func_55(hParam0, -393037696))
		return true;

	return false;
}

int func_111(int iParam0) // Position - 0x3176 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_112(Hash hParam0, int iParam1) // Position - 0x3197 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_113(Hash hParam0, int iParam1) // Position - 0x31B1 Hash - 0x193BF536 ^0xD3271214
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

char* func_114(Hash hParam0) // Position - 0x31FF Hash - 0x7569FAF5 ^0x18709673
{
	Hash labelHash;

	if (!func_27(hParam0, 0))
		return "";

	labelHash = func_64(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_115(Hash hParam0) // Position - 0x3233 Hash - 0xB0090776 ^0x189C4477
{
	if (func_44(hParam0) == -126813555 || func_44(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_116(Hash hParam0) // Position - 0x3261 Hash - 0x1EF1B1E4 ^0x11AEE255
{
	Hash labelHash;

	if (!func_27(hParam0, 0))
		return "";

	labelHash = func_66(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

void func_117(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x3294 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_118(Hash hParam0) // Position - 0x32C5 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_119(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x32DB Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_127(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_129(func_128(num, hParam0, panParam1), num, panParam1);
	else
		return func_130(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x3345 Hash - 0x4EE39F09 ^0x4C62B7DF
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

BOOL func_121(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x33C3 Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_79(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_131(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_122(Hash hParam0, var uParam1) // Position - 0x3430 Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_17(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

Ped func_123(int iParam0) // Position - 0x3483 Hash - 0x829B7265 ^0xE21C4F30
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_124(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3493 Hash - 0x586BF778 ^0x586BF778
{
	int num;

	num = func_32(hParam1, bParam2, false, false);
	num = num + func_132(pedParam0, hParam1);

	if (bParam3)
		num = num + func_133(hParam1, bParam4);

	return num;
}

void func_125(int iParam0) // Position - 0x34C8 Hash - 0x1B4614B0 ^0x73E476F0
{
	if (!func_27(Global_1940252.f_11588, 0))
		Global_1940252.f_7 = iParam0;
	else if (func_134(Global_1940252.f_11588, 1224357681) != 0 && Global_1940252.f_11587 != 0 && Global_1940252.f_11587 != -2074770370 && !Global_1915656.f_20638 && !Global_1915656.f_22504.f_1)
		Global_1940252.f_7 = 1;
	else
		Global_1940252.f_7 = 0;

	return;
}

int func_126(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x354D Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_135(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_47(bParam1), hParam0, bParam3);
}

BOOL func_127(Hash hParam0, Any* panParam1) // Position - 0x3580 Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_136(panParam1->f_8, hParam0, num, 2048) || func_136(panParam1->f_8, hParam0, num, 32768) || func_136(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_136(panParam1->f_8, hParam0, num, 4) || func_136(panParam1->f_8, hParam0, num, 256) || func_136(panParam1->f_8, hParam0, num, 65536) || func_136(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_136(panParam1->f_8, hParam0, num, 1) || func_136(panParam1->f_8, hParam0, num, 8) || func_136(panParam1->f_8, hParam0, num, 65536) || func_136(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_136(panParam1->f_8, hParam0, num, 1) || func_136(panParam1->f_8, hParam0, num, 16) || func_136(panParam1->f_8, hParam0, num, 2) || func_136(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_136(panParam1->f_8, hParam0, num, 8) || func_136(panParam1->f_8, hParam0, num, 4096) || func_136(panParam1->f_8, hParam0, num, 256) || func_136(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_128(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x3756 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_129(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x376D Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_137(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_137(iParam1, 2, 0, 0);
	return -1;
}

int func_130(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x37B6 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_137(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_131(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x37D2 Hash - 0x8E6DB586 ^0xC3CF8308
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
	
		if (func_138(&anParam0->[i /*6*/]))
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
				anParam0->[i /*6*/] = { func_14() };
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

int func_132(Ped pedParam0, Hash hParam1) // Position - 0x38E9 Hash - 0x83F00AF7 ^0x32031FF8
{
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (func_139(hParam1))
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
			return func_140(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
		}
	}

	return 0;
}

int func_133(Hash hParam0, BOOL bParam1) // Position - 0x3947 Hash - 0x19ACB934 ^0xDEF82372
{
	if (!bParam1 || func_141())
		return func_92(hParam0, func_38(true), -2015960939, true, true, false);

	return 0;
}

int func_134(Hash hParam0, int iParam1) // Position - 0x3976 Hash - 0x7A1C2599 ^0xFF9B5634
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

BOOL func_135(Hash hParam0) // Position - 0x39C0 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_136(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x39CE Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_142(iParam2, iParam3))
		return true;

	return false;
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x39E6 Hash - 0x3169A239 ^0x47E831EC
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

	func_143(iParam0, iParam1, iParam2, iParam3);
	return;
}

BOOL func_138(Any* panParam0) // Position - 0x3A84 Hash - 0x7865E948 ^0x92258F24
{
	if (!func_144(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

BOOL func_139(Hash hParam0) // Position - 0x3AA0 Hash - 0xDB8363F2 ^0xB30A7F5C
{
	if (!func_68(hParam0, 1955773996))
		return false;

	if (!func_145(hParam0, 1))
		return false;

	return true;
}

int func_140(int iParam0, Hash hParam1) // Position - 0x3ACB Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_27(hParam1, 0))
		return 0;

	guid = { func_146(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_141() // Position - 0x3B09 Hash - 0xC82BB3B3 ^0x6740E474
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_147(vehicleOwnedByPlayer))
		return false;

	return true;
}

BOOL func_142(int iParam0, int iParam1) // Position - 0x3B58 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x3B67 Hash - 0xBC161045 ^0xD3B33F74
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

	func_148(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

BOOL func_144(Any* panParam0) // Position - 0x3C43 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_145(Hash hParam0, int iParam1) // Position - 0x3C79 Hash - 0xC9BD5171 ^0xC9BD5171
{
	int num;

	num = func_149(hParam0);

	if (num == -1)
		return false;

	return num > iParam1;
}

struct<4> func_146(int iParam0, Hash hParam1) // Position - 0x3C98 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_150(iParam0) };
	return func_151(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_147(Vehicle veParam0) // Position - 0x3CBA Hash - 0xDEF9F967 ^0x717FC3F4
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("huntercart01"):
			return true;
	
		default:
		
	}

	return false;
}

void func_148(int iParam0) // Position - 0x3CD9 Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_152(&(iParam0->f_4));
	return;
}

int func_149(Hash hParam0) // Position - 0x3CFC Hash - 0x1E74E236 ^0xF004CA87
{
	int outSatchelItemSize;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	return outSatchelItemSize;
}

struct<5> func_150(int iParam0) // Position - 0x3D16 Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_151(iParam0, joaat("character"), func_14(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_151(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x3D43 Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_27(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

void func_152(var uParam0) // Position - 0x3D70 Hash - 0x58FD8C3D ^0x7E71AD66
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

