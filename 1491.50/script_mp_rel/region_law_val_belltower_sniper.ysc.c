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
	var uLocal_16 = 0;
	var uLocal_17 = 3;
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
	int iLocal_44 = 0;
	Ped pedLocal_45 = 0;
	Volume volLocal_46 = 0;
	ePedType eptLocal_47 = PED_TYPE_PLAYER_0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x4D9E77B6 ^0xEB3E8ECE
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	eptLocal_47 = joaat("s_m_m_ambientlawrural_01");
	uLocal_48 = { -230.9494f, 797.3469f, 134.418f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	func_2();

	while (func_3(uScriptParam_0) && func_4())
	{
		func_5();
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x60 Hash - 0xAB32BC27 ^0x5A531B82
{
	if (func_6(pedLocal_45, 0))
		func_7(&pedLocal_45);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_46))
		VOLUME::DELETE_VOLUME(volLocal_46);

	LAW::_0x7EF2A2FE38D74456(func_8(7), false);
	return;
}

void func_2() // Position - 0x91 Hash - 0x9E7A03D8 ^0x82F111C8
{
	volLocal_46 = VOLUME::CREATE_VOLUME_BOX(-230.0599f, 797.55396f, 134.09122f, 0f, 0f, 29.977856f, 3.336159f, 3.371833f, 4.034389f);
	iLocal_44 = 1;
	PED::_RESERVE_AMBIENT_PEDS(1);
	return;
}

int func_3(var uParam0) // Position - 0xCC Hash - 0x4A181B5A ^0x4A181B5A
{
	return 0;
}

int func_4() // Position - 0xD5 Hash - 0xAA02AAD5 ^0xAA02AAD5
{
	float num;

	if (iLocal_44 >= 7)
		return 0;

	num = func_9(Global_33, uLocal_48, true);

	if (num > 100f)
		return 0;

	if (func_10(&uLocal_51) > 120f)
		return 0;

	return 1;
}

void func_5() // Position - 0x118 Hash - 0x55B66E4D ^0x831AFFE4
{
	switch (iLocal_44)
	{
		case 1:
			iLocal_44 = 2;
			break;
	
		case 2:
			STREAMING::REQUEST_MODEL(eptLocal_47, false);
		
			if (STREAMING::HAS_MODEL_LOADED(eptLocal_47) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
				iLocal_44 = 4;
			break;
	
		case 4:
			func_11();
			func_12(&uLocal_51);
			iLocal_44 = 5;
			break;
	
		case 5:
			func_13(pedLocal_45, joaat("INPUT_FOCUS_CAM"));
		
			if (!func_6(pedLocal_45, 0))
				iLocal_44 = 6;
			break;
	
		case 6:
			iLocal_44 = 7;
			break;
	}

	return;
}

BOOL func_6(Ped pedParam0, int iParam1) // Position - 0x19D Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_14(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_14(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_14(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_14(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_14(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_14(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_14(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_14(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_7(Ped* ppedParam0) // Position - 0x29C Hash - 0xC4826352 ^0x8AD0FF3C
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

int func_8(int iParam0) // Position - 0x2FB Hash - 0x562558FC ^0x562558FC
{
	int num;

	switch (iParam0)
	{
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 32;
			break;
	
		case 6:
			num = 64;
			break;
	
		case 7:
			num = 16;
			break;
	
		case 8:
			num = 8;
			break;
	}

	return num;
}

float func_9(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x34D Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_10(var uParam0) // Position - 0x375 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_15(uParam0))
		return 0f;

	if (func_16(uParam0))
		return uParam0->f_2;

	return func_17() - uParam0->f_1;
}

void func_11() // Position - 0x3A7 Hash - 0xE2D73273 ^0x200EB44F
{
	int value;

	pedLocal_45 = func_18(eptLocal_47, uLocal_48, 101.6932f, true, true, 0, true, true, true, false, false);
	WEAPON::GIVE_WEAPON_TO_PED(pedLocal_45, joaat("weapon_sniperrifle_carcano"), 999, true, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
	PED::SET_PED_DEFENSIVE_AREA_VOLUME(pedLocal_45, volLocal_46, false, false, false);
	PED::SET_PED_CONFIG_FLAG(pedLocal_45, 263, true);
	PED::SET_PED_CAN_RAGDOLL(pedLocal_45, false);
	value = 160;
	ENTITY::SET_ENTITY_MAX_HEALTH(pedLocal_45, value);
	ENTITY::SET_ENTITY_HEALTH(pedLocal_45, value, 0);
	func_19(pedLocal_45);
	return;
}

void func_12(var uParam0) // Position - 0x424 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_20(uParam0, 0f);
	return;
}

void func_13(Ped pedParam0, eControlAction ecaParam1) // Position - 0x433 Hash - 0xDB7B225C ^0x35C0BC39
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		return;
	}
	else
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, ecaParam1))
			CAM::SET_GAMEPLAY_ENTITY_HINT(pedParam0, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, ecaParam1))
			CAM::STOP_GAMEPLAY_HINT(false);
	}

	return;
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x47A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_15(var uParam0) // Position - 0x489 Hash - 0x5001E582 ^0x5001E582
{
	return func_21(*uParam0, 1);
}

BOOL func_16(var uParam0) // Position - 0x499 Hash - 0x39705408 ^0x39705408
{
	return func_21(*uParam0, 2);
}

float func_17() // Position - 0x4A9 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

Ped func_18(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x4DB Hash - 0xA67C0C52 ^0xA10AD291
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_22(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_19(Ped pedParam0) // Position - 0x51B Hash - 0x6282D046 ^0x7FB895A1
{
	if (!func_6(pedParam0, 0))
		return;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, false);

	func_23(pedParam0);
	return;
}

void func_20(var uParam0, float fParam1) // Position - 0x549 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_17() - fParam1;
	func_24(uParam0, 1);
	func_25(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_21(int iParam0, int iParam1) // Position - 0x56F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_22(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x57E Hash - 0x81861438 ^0x93C66BE8
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (bParam5)
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
			func_26(pedParam0, false, true);
	
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

void func_23(Ped pedParam0) // Position - 0x648 Hash - 0x6EE119AF ^0x4E705A3
{
	LAW::_SET_PED_LAW_BEHAVIOUR(pedParam0, 2);
	LAW::_SET_PED_LAW_BEHAVIOUR(pedParam0, 1);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 188, true);
	PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(pedParam0, joaat("law"));
	PED::SET_PED_COMBAT_ATTRIBUTES(pedParam0, BF_CanBust, true);
	TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(pedParam0, false);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(pedParam0, false);
	WEAPON::GIVE_WEAPON_TO_PED(pedParam0, joaat("group_revolver"), 100, true, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
	WEAPON::GIVE_WEAPON_TO_PED(pedParam0, joaat("GROUP_SNIPER"), 100, false, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
	return;
}

void func_24(var uParam0, int iParam1) // Position - 0x6D1 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_25(var uParam0, int iParam1) // Position - 0x6E2 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_26(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6F7 Hash - 0x4FE4E8A8 ^0x44655508
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (bParam1)
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HATS"), 0, true);
	else
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_27(Ped pedParam0, BOOL bParam1) // Position - 0x73C Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_28(Ped pedParam0, int iParam1) // Position - 0x781 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

