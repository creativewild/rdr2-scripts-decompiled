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
	Hash hLocal_20 = 0;
	Hash hLocal_21 = 0;
	Hash hLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = -1;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = -1;
	var uLocal_32 = -1;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xAFBB2815 ^0xAFBB2815
{
	uLocal_0 = { 1.47681f, -0.749695f, -0.0486145f };
	fLocal_3 = 170.77208f;
	uLocal_4 = { 0.812012f, -0.631683f, -0.0291901f };
	fLocal_7 = 290.23187f;
	uLocal_8 = { 0.7006f, 0.094f, 1.076f };
	uLocal_11 = { -49.5998f, 0f, -107.2854f };
	uLocal_14 = { 0.75708f, -0.630981f, -0.0272522f };
	uLocal_17 = { 1.47479f, -0.239473f, -0.0476227f };
	hLocal_20 = joaat("A_C_Cow");
	hLocal_21 = joaat("p_stool02x");
	hLocal_22 = joaat("s_bucketmilk01x");

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	func_2(&uLocal_23, &uScriptParam_0);

	while (true)
	{
		if (func_3(&uLocal_23))
			func_1();
	
		BUILTIN::WAIT(0);
	}

	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xD0 Hash - 0x7B28C77F ^0x9AA52339
{
	int num;

	num = func_4(uLocal_23.f_1.f_2);
	func_5(num, 0);
	func_6(&(uLocal_23.f_15), true, false, true);
	func_7(647863662);
	func_8(&uLocal_23);
	func_9(uLocal_23.f_17);
	func_10();
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2(var uParam0, var uParam1) // Position - 0x11D Hash - 0xBBDBE6AA ^0xBCFFDFA4
{
	int num;

	*uParam0 = 4;
	uParam0->f_1 = { *uParam1 };
	func_11(uParam0, 0);
	func_12(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6, &(uParam0->f_21), &(uParam0->f_24));

	if (func_13(&(uParam0->f_15), uParam0->f_21))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_15, true, true);
		PED::SET_PED_CAN_LEG_IK(uParam0->f_15, false);
		PED::SET_PED_LEG_IK_MODE(uParam0->f_15, 0);
	}

	num = func_4(uParam1->f_2);
	func_5(num, uParam0->f_15);
	return;
}

BOOL func_3(var uParam0) // Position - 0x199 Hash - 0x626FEC1D ^0x58F92E98
{
	int num;
	float num2;
	Vector3 vector;

	num = func_4(uParam0->f_1.f_2);

	if (func_14(uParam0))
		return true;

	switch (uParam0->f_11)
	{
		case 0:
			func_15();
			func_11(uParam0, 1);
			break;
	
		case 1:
			if (func_16())
				func_11(uParam0, 2);
			break;
	
		case 2:
			if (!func_17(&(uParam0->f_15), uParam0->f_1.f_2 == 21))
				return false;
		
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_15, true))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_15, true, true);
		
			vector = { func_18(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6, false) };
			uParam0->f_14 = func_19(vector);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_14, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_14, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
				TASK::STOP_ANIM_PLAYBACK(uParam0->f_14, 0, false);
		
			vector = { func_20(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6) };
			uParam0->f_13 = func_21(vector);
			func_22(647863662);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
			{
				func_11(uParam0, 3);
				func_23(uParam0->f_1.f_2);
				func_9(uParam0->f_16);
			
				if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_16))
				{
					uParam0->f_16 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volBox"), uParam0->f_1.f_3, 0f, 0f, 0f, 1.2f, 2.4f, 2f);
					PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_16, uParam0->f_15, 0f, 0.2f, 0f, 0f, 0f, 0f, 2, true);
				}
			}
		
			vector = { func_20(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6) };
		
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_17))
			{
				if (uParam0->f_1.f_2 == 21)
					uParam0->f_17 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volBox"), vector + { 1f, 0f, 0f }, 0f, 0f, uParam0->f_24.f_2, 7.5f, 3.5f, 4f);
				else
					uParam0->f_17 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volBox"), vector + { 1f, 0f, 0f }, 0f, 0f, uParam0->f_24.f_2, 3.5f, 3.5f, 4f);
			
				VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(uParam0->f_17, false);
				VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(uParam0->f_17, true);
			}
		
			uParam0->f_19 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vector, 0f, 0f, 0f, 4f, 4f, 4f, "MilkAvoidVol");
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_19, 266209, 0, 0, -1, -1, 12);
			func_24(&(uParam0->f_18), vector, 0f, 0f, 0f, 2f, 2f, 2f, "MilkVignetteBlockVol");
			uParam0->f_20 = func_25(uParam0->f_18, "RestrictVignette", true, 0, 2048, false, -1082130432);
			func_5(num, uParam0->f_15);
			break;
	
		case 3:
			if (Global_1899528.f_215)
				return true;
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15) || PED::IS_PED_INJURED(uParam0->f_15))
			{
				func_26(uParam0->f_1.f_2);
				func_5(num, 0);
				func_11(uParam0, 5);
			}
			else
			{
				func_5(num, uParam0->f_15);
				num2 = func_27(uParam0->f_15, uParam0->f_21, false);
			
				if (num2 > 1.25f)
					func_26(uParam0->f_1.f_2);
				else
					func_23(uParam0->f_1.f_2);
			}
		
			if (func_28(uParam0->f_1.f_8))
			{
				func_8(uParam0);
				func_11(uParam0, 4);
				return false;
			}
			break;
	
		case 4:
			if (!func_28(uParam0->f_1.f_8))
				func_11(uParam0, 2);
			break;
	}

	return false;
}

int func_4(int iParam0) // Position - 0x4C5 Hash - 0x3516A114 ^0xDECD073A
{
	if (iParam0 == -1 || iParam0 >= 33)
		return -1;

	return Global_1899528.f_11[iParam0];
}

void func_5(int iParam0, int iParam1) // Position - 0x4ED Hash - 0xCF7D517E ^0xF609B661
{
	Global_1392915.f_121[iParam0 /*20*/].f_13 = iParam1;
	return;
}

void func_6(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x503 Hash - 0xEB76F1D1 ^0xF1B7E213
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

void func_7(Hash hParam0) // Position - 0x571 Hash - 0xEB15DE39 ^0xEB15DE39
{
	if (!func_29(hParam0))
		func_30(hParam0, false, false);

	func_31(hParam0, false, 1f, false, true, 0, false, false);
	return;
}

void func_8(var uParam0) // Position - 0x599 Hash - 0xBC32A274 ^0x2D463A31
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_18))
	{
		func_32(uParam0->f_18);
		func_9(uParam0->f_18);
		uParam0->f_20 = 0;
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_19))
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_19);

	func_9(uParam0->f_16);
	func_9(uParam0->f_19);
	func_9(uParam0->f_17);
	func_9(uParam0->f_18);
	return;
}

void func_9(Volume volParam0) // Position - 0x5F4 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_10() // Position - 0x60B Hash - 0x36194DB8 ^0x3F583895
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_20);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_21);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_22);
	STREAMING::REMOVE_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::REMOVE_MOVE_NETWORK_DEF("script_mar5_milkcow_cow");
	STREAMING::REMOVE_ANIM_DICT("CREATURES_MAMMAL@COW@NORMAL@IDLE");
	PED::_UNRESERVE_AMBIENT_PEDS(1);
	return;
}

void func_11(var uParam0, int iParam1) // Position - 0x63F Hash - 0x4F8BE4B5 ^0x994917B9
{
	uParam0->f_11 = iParam1;
	return;
}

void func_12(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7) // Position - 0x64D Hash - 0x3DB9CD46 ^0xB5855984
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

BOOL func_13(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x6A2 Hash - 0xCBC18E81 ^0xA1C665BD
{
	ItemSet itemSet;
	Volume volume;
	int entitiesInVolume;
	int i;
	Ped pedFromIndexedItem;

	func_33(&volume, uParam1, 0f, 0f, 0f, 3f, 3f, 3f);
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
			func_9(volume);
			ITEMSET::_CLEAR_ITEMSET(itemSet);
			ITEMSET::DESTROY_ITEMSET(itemSet);
			return true;
		}
	}

	func_9(volume);
	ITEMSET::_CLEAR_ITEMSET(itemSet);
	ITEMSET::DESTROY_ITEMSET(itemSet);
	return false;
}

BOOL func_14(var uParam0) // Position - 0x74F Hash - 0x3672BA30 ^0xC0369DEC
{
	float num;

	num = func_34(*uParam0);

	if (func_35() != -1)
		return true;

	if (!func_36(*uParam0))
		return true;

	if (Global_1899528.f_215)
		return true;

	if (func_37(uParam0->f_1.f_7, 4194304))
		return true;

	if (func_38(Global_1935630, 8388608))
	{
		func_39(&(uLocal_23.f_15));
		return true;
	}

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), uParam0->f_1.f_3) > num * num)
		{
			func_39(&(uLocal_23.f_15));
			return true;
		}
	}

	return false;
}

void func_15() // Position - 0x7EE Hash - 0xDF596111 ^0xF85B940D
{
	STREAMING::REQUEST_MODEL(hLocal_20, false);
	STREAMING::REQUEST_MODEL(hLocal_21, false);
	STREAMING::REQUEST_MODEL(hLocal_22, false);
	STREAMING::REQUEST_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::REQUEST_MOVE_NETWORK_DEF("script_mar5_milkcow_cow");
	STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@COW@NORMAL@IDLE");
	PED::_RESERVE_AMBIENT_PEDS(1);
	return;
}

BOOL func_16() // Position - 0x825 Hash - 0x4D835B9F ^0x59159CC5
{
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(hLocal_20))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(hLocal_21))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(hLocal_22))
		return false;

	if (!STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_MAMMAL@COW@NORMAL@IDLE"))
		return false;

	if (!STREAMING::HAS_CLIP_SET_LOADED("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW"))
		return false;

	if (!STREAMING::HAS_MOVE_NETWORK_DEF_LOADED("script_mar5_milkcow_cow"))
		return false;

	return true;
}

BOOL func_17(var uParam0, BOOL bParam1) // Position - 0x891 Hash - 0xAFB30DFE ^0x9FEEAF4A
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
		func_40(21, &unk7, 1);
	else
		func_40(22, &unk7, 1);

	func_12(unk7.f_5, 0f, 0f, unk7.f_8, &unk, &unk4);

	if (!func_13(uParam0, unk))
	{
		*uParam0 = func_41(joaat("A_C_Cow"), unk, 0, true, true, 0, true, true, true, false, false, false, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			return false;
	
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

	unk = { func_18(unk7.f_5, 0f, 0f, unk7.f_8, false) };
	object2 = func_19(unk);

	if (ENTITY::DOES_ENTITY_EXIST(object2))
	{
		if (ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(object2, 1))
			TASK::STOP_ANIM_PLAYBACK(object2, 0, false);
	
		ENTITY::FREEZE_ENTITY_POSITION(object2, true);
	}

	unk = { func_20(unk7.f_5, 0f, 0f, unk7.f_8) };
	object = func_21(unk);

	if (ENTITY::DOES_ENTITY_EXIST(object))
		ENTITY::FREEZE_ENTITY_POSITION(object, true);

	return true;
}

Vector3 func_18(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, var uParam5, BOOL bParam6) // Position - 0xA15 Hash - 0xCB0CF501 ^0x66D04FFF
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

Object func_19(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xA77 Hash - 0x6F74F534 ^0x694A8EF0
{
	Object object;

	if (func_42(61))
		object = func_43(vParam0, joaat("s_bucketmilk01x"), 0.2f, true);
	else
		object = func_43(vParam0, joaat("s_bucketmilk01x"), 4f, true);

	if (!ENTITY::DOES_ENTITY_EXIST(object))
		object = OBJECT::CREATE_OBJECT(joaat("s_bucketmilk01x"), vParam0, true, true, false, false, false);

	ENTITY::SET_ENTITY_COORDS(object, vParam0, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(object, true);
	return object;
}

Vector3 func_20(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, var uParam5) // Position - 0xAE6 Hash - 0x3E399FBE ^0xD8D20C13
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3.f_2, uLocal_14) };
	offsetFromCoordAndHeadingInWorldCoords = { offsetFromCoordAndHeadingInWorldCoords + { 0.01f, 0f, 0f } };
	MISC::GET_GROUND_Z_FOR_3D_COORD(offsetFromCoordAndHeadingInWorldCoords, &(offsetFromCoordAndHeadingInWorldCoords.f_2), false);
	return offsetFromCoordAndHeadingInWorldCoords;
}

Object func_21(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xB24 Hash - 0x31C2BC3D ^0xE441F7CA
{
	Object object;

	object = func_43(vParam0, joaat("p_stool02x"), 4f, true);

	if (!ENTITY::DOES_ENTITY_EXIST(object))
		object = OBJECT::CREATE_OBJECT(joaat("p_stool02x"), vParam0, true, true, false, false, false);

	ENTITY::SET_ENTITY_COORDS(object, vParam0, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(object, true);
	return object;
}

void func_22(Hash hParam0) // Position - 0xB72 Hash - 0x17910C93 ^0x17910C93
{
	if (!func_29(hParam0))
		func_30(hParam0, false, false);

	func_31(hParam0, false, 1f, false, false, 0, false, false);
	return;
}

void func_23(int iParam0) // Position - 0xB9A Hash - 0x2E883CF3 ^0x8B9A2B6
{
	int num;

	if (func_35() != -1)
		return;

	if (!func_44(iParam0, &num))
		return;

	if (Global_1392915.f_121[num /*20*/].f_15 == false)
		Global_1392915.f_121[num /*20*/].f_15 = 1;

	return;
}

void func_24(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, char* sParam10) // Position - 0xBD9 Hash - 0x3A05F50D ^0xBA5EB06
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, sParam10);
	return;
}

Volume func_25(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0xBF6 Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_45(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

void func_26(int iParam0) // Position - 0xC3A Hash - 0xF37CE386 ^0x23C715D1
{
	int num;

	if (func_35() != -1)
		return;

	if (!func_44(iParam0, &num))
		return;

	Global_1392915.f_121[num /*20*/].f_15 == true;
	Global_1392915.f_121[num /*20*/].f_15 = 0;
	return;
}

float func_27(Entity eParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xC79 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(eParam0, false, false), vParam1, bParam4);
}

BOOL func_28(int iParam0) // Position - 0xCA1 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_46(iParam0);
	return num == 3 || num == 4;
}

BOOL func_29(Hash hParam0) // Position - 0xCBF Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_47(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

Hash func_30(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCDA Hash - 0xEC5804B5 ^0x15A1D925
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

void func_31(Hash hParam0, BOOL bParam1, float fParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0xD7E Hash - 0xD777F4CF ^0xBFF3124C
{
	func_30(hParam0, false, false);

	if (func_29(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_48(hParam0, fParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_49(hParam0, true);
			else
				func_50(hParam0, true);
		else
			func_51(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_52())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

void func_32(Volume volParam0) // Position - 0xE09 Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_53(volumeCoords, 0);
	return;
}

void func_33(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0xE31 Hash - 0xCF0C48FE ^0x615ED286
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_54());

	return;
}

float func_34(int iParam0) // Position - 0xE5B Hash - 0xCDEBB006 ^0xCDEBB006
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

BOOL func_35() // Position - 0xED2 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_36(int iParam0) // Position - 0xEE0 Hash - 0xEA76DD3 ^0xEA76DD3
{
	int i;

	for (i = 0; i < Global_1898330; i = i + 1)
	{
		if (func_55(Global_1898330[i]) == iParam0)
			return true;
	}

	return false;
}

BOOL func_37(int iParam0, BOOL bParam1) // Position - 0xF13 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_38(int iParam0, int iParam1) // Position - 0xF46 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_39(Ped* ppedParam0) // Position - 0xF55 Hash - 0xC4826352 ^0x8AD0FF3C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
		return;

	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*ppedParam0))
		return;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);

	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*ppedParam0, false))
		return;

	if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0))
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false);

	PED::DELETE_PED(ppedParam0);
	return;
}

int func_40(int iParam0, var uParam1, int iParam2) // Position - 0xFB4 Hash - 0x16475DD ^0xEB53C9EA
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

Ped func_41(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1964 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_56(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_42(int iParam0) // Position - 0x19A6 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_28(Global_1835011[iParam0 /*74*/].f_1);
}

Object func_43(var uParam0, var uParam1, var uParam2, Hash hParam3, float fParam4, BOOL bParam5) // Position - 0x19D2 Hash - 0xEC461A7E ^0x75CEC255
{
	Volume volume;
	Object objectFromIndexedItem;
	float num;
	int entitiesInVolume;
	int i;
	ItemSet itemSet;

	num = fParam4 * 2f;
	func_57(&volume, uParam0, 0f, 0f, 0f, num, num, num);

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
				func_9(volume);
			
				if (bParam5)
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(objectFromIndexedItem, true))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(objectFromIndexedItem, true, true);
			
				return objectFromIndexedItem;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	func_9(volume);
	return 0;
}

BOOL func_44(int iParam0, var uParam1) // Position - 0x1A7F Hash - 0x51CBA313 ^0xAF93626D
{
	*uParam1 = -1;

	if (iParam0 == -1 || iParam0 >= 33)
		return false;

	*uParam1 = Global_1899528.f_11[iParam0];
	return *uParam1 != -1;
}

Volume func_45(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x1AB3 Hash - 0xC1E3A062 ^0xD42263D3
{
	Volume volume;
	int num;
	var entityCoords;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	if (fParam3 <= 0.1f)
		return 0;

	if (_IS_NULL_VECTOR(vParam0))
		return 0;

	num = 0;

	if (!bParam5)
		num = num | 2;

	num = num | 1;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam6))
	{
		if (func_59(vParam0))
			return 0;
	
		volume = VOLUME::_CREATE_VOLUME_LOCK(vParam0, fParam3, num, 0);
	}
	else
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam6, false, false) };
		volume = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(eParam6, fParam3, num, 0);
	}

	if (iParam7 != 0)
		VOLUME::_0xB440F4E35393FC39(volume, iParam7);

	if (iParam9 >= 0f)
		VOLUME::_0xD460135C98940274(volume, iParam9);

	func_60(volume, bParam8);
	return volume;
}

int func_46(int iParam0) // Position - 0x1B6D Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_61(iParam0))
		return -1;

	return func_62(iParam0);
}

BOOL func_47(Hash hParam0) // Position - 0x1B89 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

void func_48(Hash hParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1B95 Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_29(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam1, bParam3);
	}

	return;
}

void func_49(Hash hParam0, BOOL bParam1) // Position - 0x1BCD Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_29(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_50(Hash hParam0, BOOL bParam1) // Position - 0x1BFB Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_29(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_51(Hash hParam0, BOOL bParam1) // Position - 0x1C29 Hash - 0x4844A91D ^0x50E23246
{
	if (func_29(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_52() // Position - 0x1C57 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void func_53(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1C60 Hash - 0x303BFB8D ^0xBCF80455
{
	int i;
	Volume volLockRequestId;
	Vector3 vector;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			vector = { VOLUME::_0xC4019CF9AE8E931A(volLockRequestId) };
		
			if (func_63(vector, uParam0, 2f, true))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 2f, 0, iParam3, 16384))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
					Global_1911670[i] = 0;
				}
			}
		}
	}

	return;
}

char* func_54() // Position - 0x1CE4 Hash - 0xB34C1A03 ^0xB34C1A03
{
	return "unnamed";
}

int func_55(int iParam0) // Position - 0x1CEF Hash - 0x84E72643 ^0x84E72643
{
	if (func_64(iParam0) != 4)
		return -1;

	return func_65(iParam0);
}

void func_56(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1D0B Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_66(eptParam1))
		{
			func_67(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_68(pedParam0, 0, true);
	
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
			func_69(pedParam0, false);
			flag = true;
		}
	
		func_70(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_57(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0x1DEC Hash - 0xCF0C48FE ^0xA0FA78C0
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_54());

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1E16 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_59(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1E40 Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_60(Volume volParam0, BOOL bParam1) // Position - 0x1E5A Hash - 0xEA796703 ^0x695D7925
{
	Volume volLockRequestId;
	int i;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volParam0);

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId) || volLockRequestId == volParam0)
		{
			Global_1911670[i] = volParam0;
			return 1;
		}
	}

	return 0;
}

BOOL func_61(int iParam0) // Position - 0x1EC2 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_62(int iParam0) // Position - 0x1EF5 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_71(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_63(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x1F36 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

int func_64(int iParam0) // Position - 0x1F8B Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_61(iParam0))
		return 0;

	return func_73(func_72(iParam0));
}

int func_65(int iParam0) // Position - 0x1FAB Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_61(iParam0))
		return -1;

	return func_74(func_72(iParam0));
}

BOOL func_66(ePedType eptParam0) // Position - 0x1FCB Hash - 0x5000025C ^0x5000025C
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

void func_67(Ped pedParam0, Hash hParam1) // Position - 0x241E Hash - 0xA9D8953E ^0xBACFE395
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_75(pedParam0, hParam1))
		{
			if (func_76(pedParam0, hParam1))
			{
				if (func_77(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_78(pedParam0);
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

void func_68(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x24C5 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_69(Ped pedParam0, BOOL bParam1) // Position - 0x24F5 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_70(Ped pedParam0, int iParam1) // Position - 0x253A Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_71(int iParam0) // Position - 0x2561 Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_72(int iParam0) // Position - 0x25E2 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_73(BOOL bParam0) // Position - 0x2620 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_74(BOOL bParam0) // Position - 0x262D Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_75(Ped pedParam0, Hash hParam1) // Position - 0x2640 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_76(Ped pedParam0, Hash hParam1) // Position - 0x266E Hash - 0x90BAA407 ^0x786EFCBE
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

BOOL func_77(Ped pedParam0, Hash hParam1) // Position - 0x26BC Hash - 0x90BAA407 ^0x786EFCBE
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_75(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_78(Ped pedParam0) // Position - 0x272A Hash - 0xB3E614F9 ^0xF61F514B
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

