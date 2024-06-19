#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	float fLocal_3 = 0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
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
	Entity eLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = -1;
	var uLocal_23 = -1;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xAFBB2815 ^0xAFBB2815
{
	var unk;
	var unk4;

	uLocal_0 = { 1.47681f, -0.749695f, -0.0486145f };
	fLocal_3 = 170.77208f;
	uLocal_4 = { 0.812012f, -0.631683f, -0.0291901f };
	fLocal_7 = 290.23187f;
	uLocal_8 = { 0.7006f, 0.094f, 1.076f };
	uLocal_11 = { -49.5998f, 0f, -107.2854f };
	uLocal_14 = { 0.75708f, -0.630981f, -0.0272522f };
	uLocal_17 = { 1.47479f, -0.239473f, -0.0476227f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&eLocal_20, true, false, true);
		func_2();
	}

	func_3(21, &uLocal_21, 1);

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("milking_cow_launch")) > 0)
		func_2();

	func_4(uLocal_21.f_5, 0f, 0f, uLocal_21.f_8, &unk, &unk4);

	if (func_5(&eLocal_20, unk))
		func_2();

	func_6();

	while (!func_7())
	{
		BUILTIN::WAIT(0);
	}

	func_8(&eLocal_20, true);

	while (true)
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("milking_cow_launch")) > 0)
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(eLocal_20, true))
				func_2();
	
		if (func_9())
			func_2();
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x12A Hash - 0xEB76F1D1 ^0xF1B7E213
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

void func_2() // Position - 0x198 Hash - 0x94986482 ^0xC23B0B53
{
	func_10();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_3(int iParam0, var uParam1, int iParam2) // Position - 0x1A8 Hash - 0x16475DD ^0xEB53C9EA
{
	*uParam1 = iParam0;

	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.2848f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.5615f, -1372.1733f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.5818f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
	
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
		
			if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
				Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		
			if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			else
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
		
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
	
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.92618f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
		
			return 0;
	
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.9968f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
	
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.0842f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.8619f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.0048f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.7432f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.0461f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.9417f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
	
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 665.5322f, -1243.9023f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.572914f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.2151f, -433.9676f, 159.73857f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 1881.669f, -1874.0461f, 42.580814f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.884895f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.4443f, 500.1154f, 45.539986f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
	
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.9436f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
	
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.5474f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 25:
			return 0;
	
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.2505f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.4475f, -1318.0038f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 29:
			return 0;
	
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.3945f, -2913.7637f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		default:
		
	}

	return 0;
}

void func_4(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7) // Position - 0xB58 Hash - 0x3DB9CD46 ^0xB5855984
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3.f_2, uLocal_0) };
	offsetFromCoordAndHeadingInWorldCoords = { offsetFromCoordAndHeadingInWorldCoords + { 0.01f, 0f, 0f } };
	MISC::GET_GROUND_Z_FOR_3D_COORD(offsetFromCoordAndHeadingInWorldCoords, &(offsetFromCoordAndHeadingInWorldCoords.f_2), false);
	*uParam6 = { offsetFromCoordAndHeadingInWorldCoords };
	*uParam7 = { fParam3 };
	uParam7->f_2 = uParam7->f_2 + fLocal_3;
	return;
}

BOOL func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xBAD Hash - 0xCBC18E81 ^0xA1C665BD
{
	ItemSet itemSet;
	Volume volume;
	int entitiesInVolume;
	int i;
	Ped pedFromIndexedItem;

	func_11(&volume, uParam1, 0f, 0f, 0f, 3f, 3f, 3f);
	itemSet = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_ITEMSET_VALID(itemSet))
		return false;

	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, itemSet, 1);

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
	
		if (ENTITY::DOES_ENTITY_EXIST(pedFromIndexedItem) && !PED::IS_PED_INJURED(pedFromIndexedItem) && ENTITY::GET_ENTITY_MODEL(pedFromIndexedItem) == joaat("A_C_Cow"))
		{
			*uParam0 = pedFromIndexedItem;
			func_12(volume);
			ITEMSET::_CLEAR_ITEMSET(itemSet);
			ITEMSET::DESTROY_ITEMSET(itemSet);
			return true;
		}
	}

	func_12(volume);
	ITEMSET::_CLEAR_ITEMSET(itemSet);
	ITEMSET::DESTROY_ITEMSET(itemSet);
	return false;
}

void func_6() // Position - 0xC5A Hash - 0xDD6452BA ^0x11CC6AE6
{
	STREAMING::REQUEST_MODEL(joaat("A_C_Cow"), false);
	STREAMING::REQUEST_MODEL(joaat("p_stool02x"), false);
	STREAMING::REQUEST_MODEL(joaat("s_bucketmilk01x"), false);
	STREAMING::REQUEST_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::REQUEST_MOVE_NETWORK_DEF("script_mar5_milkcow_cow");
	return;
}

BOOL func_7() // Position - 0xC8D Hash - 0x59DD80A3 ^0x6F94874B
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("A_C_Cow")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_stool02x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_bucketmilk01x")))
		return false;

	if (!STREAMING::HAS_CLIP_SET_LOADED("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW"))
		return false;

	if (!STREAMING::HAS_MOVE_NETWORK_DEF_LOADED("script_mar5_milkcow_cow"))
		return false;

	return true;
}

int func_8(var uParam0, BOOL bParam1) // Position - 0xCE6 Hash - 0xAFB30DFE ^0x9FEEAF4A
{
	var unk;
	var unk4;
	Object object;
	Object object2;
	var unk7;
	int taskData;

	unk7 = -1;
	unk7.f_1 = -1;
	unk7.f_2 = -1;

	if (bParam1)
		func_3(21, &unk7, 1);
	else
		func_3(22, &unk7, 1);

	func_4(unk7.f_5, 0f, 0f, unk7.f_8, &unk, &unk4);

	if (!func_5(uParam0, unk))
	{
		*uParam0 = func_13(joaat("A_C_Cow"), unk, 0, true, true, 0, true, true, true, false, false, false, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			return 0;
	
		PED::_SET_PED_SCALE(*uParam0, 1f);
	}

	PED::SET_PED_CAN_LEG_IK(*uParam0, false);
	PED::SET_PED_LEG_IK_MODE(*uParam0, 0);
	EVENT::SET_DECISION_MAKER(*uParam0, joaat("empty"));
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);

	if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
	{
		taskData.f_6 = -1082130432;
		taskData.f_9 = -1082130432;
		taskData.f_30 = "Milking";
		taskData.f_1 = joaat("DEFAULT");
		taskData = joaat("clipset@mini_games@story@mar5@milk_cow");
		TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(*uParam0, "script_mar5_milkcow_cow", &taskData, unk7.f_5, 0f, 0f, unk7.f_8, 2, 0.125f, 0, 0, 1154, 0);
	}

	unk = { func_14(unk7.f_5, 0f, 0f, unk7.f_8, false) };
	object2 = func_15(unk);

	if (ENTITY::DOES_ENTITY_EXIST(object2))
	{
		if (ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(object2, 1))
			TASK::STOP_ANIM_PLAYBACK(object2, 0, false);
	
		ENTITY::FREEZE_ENTITY_POSITION(object2, true);
	}

	unk = { func_16(unk7.f_5, 0f, 0f, unk7.f_8) };
	object = func_17(unk);

	if (ENTITY::DOES_ENTITY_EXIST(object))
		ENTITY::FREEZE_ENTITY_POSITION(object, true);

	return 1;
}

BOOL func_9() // Position - 0xE6A Hash - 0x7E89746D ^0x30C3ED39
{
	float num;

	num = func_18(4);

	if (func_19(37, 4194304))
		return true;

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), uLocal_21.f_5) > num * num)
			return true;

	return false;
}

void func_10() // Position - 0xEB6 Hash - 0x2AE900ED ^0x54F2E7AF
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Cow"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_stool02x"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_bucketmilk01x"));
	STREAMING::REMOVE_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::REMOVE_MOVE_NETWORK_DEF("script_mar5_milkcow_cow");
	return;
}

void func_11(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0xEE6 Hash - 0xCF0C48FE ^0x615ED286
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_20());

	return;
}

void func_12(Volume volParam0) // Position - 0xF10 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

Ped func_13(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0xF27 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_21(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

Vector3 func_14(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, var uParam5, BOOL bParam6) // Position - 0xF69 Hash - 0xCB0CF501 ^0x66D04FFF
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	if (bParam6)
		offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3.f_2, uLocal_17 + { 0f, -0.2f, 0f }) };
	else
		offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3.f_2, uLocal_17) };

	offsetFromCoordAndHeadingInWorldCoords = { offsetFromCoordAndHeadingInWorldCoords + { 0.01f, 0f, 0f } };
	MISC::GET_GROUND_Z_FOR_3D_COORD(offsetFromCoordAndHeadingInWorldCoords, &(offsetFromCoordAndHeadingInWorldCoords.f_2), false);
	return offsetFromCoordAndHeadingInWorldCoords;
}

Object func_15(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xFCB Hash - 0x6F74F534 ^0x694A8EF0
{
	Object object;

	if (func_22(61))
		object = func_23(vParam0, joaat("s_bucketmilk01x"), 0.2f, true);
	else
		object = func_23(vParam0, joaat("s_bucketmilk01x"), 4f, true);

	if (!ENTITY::DOES_ENTITY_EXIST(object))
		object = OBJECT::CREATE_OBJECT(joaat("s_bucketmilk01x"), vParam0, true, true, false, false, false);

	ENTITY::SET_ENTITY_COORDS(object, vParam0, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(object, true);
	return object;
}

Vector3 func_16(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, var uParam5) // Position - 0x103A Hash - 0x3E399FBE ^0xD8D20C13
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3.f_2, uLocal_14) };
	offsetFromCoordAndHeadingInWorldCoords = { offsetFromCoordAndHeadingInWorldCoords + { 0.01f, 0f, 0f } };
	MISC::GET_GROUND_Z_FOR_3D_COORD(offsetFromCoordAndHeadingInWorldCoords, &(offsetFromCoordAndHeadingInWorldCoords.f_2), false);
	return offsetFromCoordAndHeadingInWorldCoords;
}

Object func_17(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1078 Hash - 0x31C2BC3D ^0xE441F7CA
{
	Object object;

	object = func_23(vParam0, joaat("p_stool02x"), 4f, true);

	if (!ENTITY::DOES_ENTITY_EXIST(object))
		object = OBJECT::CREATE_OBJECT(joaat("p_stool02x"), vParam0, true, true, false, false, false);

	ENTITY::SET_ENTITY_COORDS(object, vParam0, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(object, true);
	return object;
}

float func_18(int iParam0) // Position - 0x10C6 Hash - 0xCDEBB006 ^0xCDEBB006
{
	switch (iParam0)
	{
		case 0:
			return 40f;
	
		case 1:
			return 70f;
	
		case 2:
			return 45f;
	
		case 3:
			return 90f;
	
		case 4:
			return 50f;
	
		case 5:
			return 90f;
	
		case 6:
			return 90f;
	
		default:
		
	}

	return 70f;
}

BOOL func_19(int iParam0, BOOL bParam1) // Position - 0x113D Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

char* func_20() // Position - 0x1170 Hash - 0x4C04D99E ^0x4C04D99E
{
	return "unnamed";
}

void func_21(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x117B Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_24(eptParam1))
		{
			func_25(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_26(pedParam0, 0, true);
	
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
			func_27(pedParam0, false);
			flag = true;
		}
	
		func_28(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_22(int iParam0) // Position - 0x125C Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_29(Global_1835011[iParam0 /*74*/].f_1);
}

Object func_23(var uParam0, var uParam1, var uParam2, Hash hParam3, float fParam4, BOOL bParam5) // Position - 0x1288 Hash - 0xEC461A7E ^0x75CEC255
{
	Volume volume;
	Object objectFromIndexedItem;
	float num;
	int entitiesInVolume;
	int i;
	ItemSet itemSet;

	num = fParam4 * 2f;
	func_30(&volume, uParam0, 0f, 0f, 0f, num, num, num);

	if (!VOLUME::DOES_VOLUME_EXIST(volume))
		return 0;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, itemSet, 3);

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		objectFromIndexedItem = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
	
		if (!ENTITY::IS_ENTITY_DEAD(objectFromIndexedItem))
		{
			if (ENTITY::GET_ENTITY_MODEL(objectFromIndexedItem) == hParam3)
			{
				ITEMSET::DESTROY_ITEMSET(itemSet);
				func_12(volume);
			
				if (bParam5)
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(objectFromIndexedItem, true))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(objectFromIndexedItem, true, true);
			
				return objectFromIndexedItem;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	func_12(volume);
	return 0;
}

BOOL func_24(ePedType eptParam0) // Position - 0x1335 Hash - 0x5000025C ^0x5000025C
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

void func_25(Ped pedParam0, Hash hParam1) // Position - 0x1788 Hash - 0xE9CED498 ^0x96202585
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_31(pedParam0, hParam1))
		{
			if (func_32(pedParam0, hParam1))
			{
				if (func_33(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_34(pedParam0);
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

void func_26(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x182F Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_27(Ped pedParam0, BOOL bParam1) // Position - 0x185F Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_28(Ped pedParam0, int iParam1) // Position - 0x18A4 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

BOOL func_29(int iParam0) // Position - 0x18CB Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_35(iParam0);
	return num == 3 || num == 4;
}

void func_30(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0x18E9 Hash - 0xCF0C48FE ^0xA0FA78C0
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_20());

	return;
}

BOOL func_31(Ped pedParam0, Hash hParam1) // Position - 0x1913 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_32(Ped pedParam0, Hash hParam1) // Position - 0x1941 Hash - 0xFF7BA836 ^0x73468735
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

BOOL func_33(Ped pedParam0, Hash hParam1) // Position - 0x198F Hash - 0xFF7BA836 ^0x73468735
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_31(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_34(Ped pedParam0) // Position - 0x19FD Hash - 0x49091AED ^0x311B8A6B
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

int func_35(int iParam0) // Position - 0x1A19 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_36(iParam0))
		return -1;

	return func_37(iParam0);
}

BOOL func_36(int iParam0) // Position - 0x1A35 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_37(int iParam0) // Position - 0x1A68 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_38(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_38(int iParam0) // Position - 0x1AA9 Hash - 0x6EC15CF9 ^0xE613EBE0
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

