#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xF5B7AF6A ^0x4D8931C1
{
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2;
		func_1();
	}

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (func_2() == -1)
	{
		while (!func_3(64))
		{
			BUILTIN::WAIT(0);
		}
	}

	func_4();
	flag = false;

	while (!flag)
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			flag = true;
			break;
		}
	
		if (func_5())
		{
			func_6();
			func_7();
			func_8();
			func_9();
			func_10();
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x83 Hash - 0x94986482 ^0xC23B0B53
{
	func_11();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x93 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_3(BOOL bParam0) // Position - 0xA1 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_21 && bParam0 != false;
}

void func_4() // Position - 0xB1 Hash - 0xC0C02A7B ^0xC0C02A7B
{
	func_12();
	func_13();
	func_14(true);
	func_15(0);
	func_16();
	return;
}

BOOL func_5() // Position - 0xD2 Hash - 0xFDD7774 ^0x6F9EE5EE
{
	if (!func_3(256))
		return false;

	if (Global_1879534)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return false;

	if (Global_1935630.f_12)
		if (func_2() == -1)
			return false;

	if (Global_1572887.f_8)
		return false;

	if (func_17(68))
		return false;

	return true;
}

void func_6() // Position - 0x133 Hash - 0x6CF1C850 ^0x6CF1C850
{
	var unk;
	var unk8;
	var unk20;

	func_18();
	func_19();
	func_20(&unk);
	func_21(0, &unk8);
	func_21(1, &unk20);
	func_22(unk8);
	func_22(unk20);
	func_23(unk8);
	func_23(unk20);
	func_24(unk, unk8, unk20);
	func_25(0, &unk8);
	func_25(1, &unk20);
	func_26(0, &unk8);
	func_26(1, &unk20);
	func_27();
	func_28(unk);
	func_29(unk);
	func_30(unk);
	func_31();
	func_32();
	func_33();
	return;
}

void func_7() // Position - 0x1D1 Hash - 0x3BA567A6 ^0x36578C99
{
	int num;

	if (PED::IS_PED_INJURED(Global_35))
		return;

	if (Global_16)
		return;

	if (func_34())
		return;

	switch (Global_1900383.f_317)
	{
		case 0:
			func_35(0);
			break;
	
		case 1:
			func_35(1);
			break;
	
		case 2:
			func_35(6);
			break;
	}

	num = Global_1900383.f_317;
	num = num + 1;

	if (num >= 3)
		num = 0;

	Global_1900383.f_317 = num;
	return;
}

void func_8() // Position - 0x251 Hash - 0xF6E2C0FB ^0x4EF5A1BB
{
	int i;
	int numberOfEvents;

	numberOfEvents = SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI);

	if (numberOfEvents == 0)
		return;

	for (i = 0; i < numberOfEvents; i = i + 1)
	{
		func_36(i);
	}

	return;
}

void func_9() // Position - 0x282 Hash - 0x6C9B1052 ^0x6C9B1052
{
	var unk;
	var unk8;
	var unk20;
	var unk32;
	var unk44;
	int num;

	switch (Global_1900383.f_422)
	{
		case 0:
		case 6:
			func_20(&unk);
			func_21(0, &unk8);
			func_21(1, &unk20);
			func_21(6, &unk32);
			func_21(5, &unk44);
			func_37(unk, unk8, 0);
			func_37(unk, unk20, 1);
			func_37(unk, unk32, 6);
			func_37(unk, unk44, 5);
			func_38(unk);
			func_39(unk, unk8);
			func_40(unk, unk8, 0);
			func_40(unk, unk20, 1);
			func_40(unk, unk32, 6);
			func_41(0);
			func_41(1);
			func_41(6);
			func_42(unk, unk8, 0);
			func_42(unk, unk20, 1);
			func_43(unk8, unk, 0);
			func_43(unk20, unk, 1);
			func_44(0);
			func_44(1);
			func_45(unk, unk8, 0);
			func_45(unk, unk20, 1);
			func_46(unk, unk8, 0);
			func_46(unk, unk20, 1);
			func_47(unk);
			func_48(unk);
			func_49();
			func_50();
			func_51(unk);
			func_52();
			func_53();
			func_54();
			func_55();
			func_56();
			func_57(unk, unk8, 0);
			func_57(unk, unk20, 1);
			func_58(unk, unk8, 0);
			func_58(unk, unk20, 1);
			func_58(unk, unk32, 6);
			func_59(unk, unk8, unk20);
			break;
	
		case 1:
			func_60();
			break;
	
		case 2:
			func_61(0);
			func_62(0);
			break;
	
		case 3:
			func_61(1);
			func_62(1);
			break;
	
		case 4:
			func_66(0);
			break;
	
		case 5:
			func_66(1);
			break;
	
		case 7:
			func_66(5);
			break;
	
		case 8:
			func_67();
			break;
	
		case 9:
			func_63();
			break;
	
		case 10:
			func_64(0);
			func_64(1);
			break;
	
		case 11:
			func_65();
			break;
	}

	num = Global_1900383.f_422;
	num = num + 1;

	if (num >= 12)
		num = 0;

	Global_1900383.f_422 = num;
	return;
}

void func_10() // Position - 0x50D Hash - 0x99622B9E ^0xFF190B0
{
	int num;

	if (PED::IS_PED_INJURED(Global_35))
		return;

	switch (Global_1900383.f_423)
	{
		case 0:
			func_68();
			break;
	
		case 1:
			func_69();
			break;
	
		case 2:
			func_70();
			break;
	}

	num = Global_1900383.f_423;
	num = num + 1;

	if (num >= 3)
		num = 0;

	Global_1900383.f_423 = num;
	return;
}

void func_11() // Position - 0x577 Hash - 0x8BD0ECBD ^0x8BD0ECBD
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		if (func_71(i))
			if (!func_72(i))
				func_73(i);
	}

	func_74();
	return;
}

void func_12() // Position - 0x5AE Hash - 0x9DF3D523 ^0xAB712F8E
{
	PED::_RESERVE_AMBIENT_PEDS(1);
	func_18();
	return;
}

int func_13() // Position - 0x5BF Hash - 0xC45B8741 ^0x39A6B7C0
{
	Hash model;

	model = func_75();
	STREAMING::REQUEST_MODEL(model, false);

	if (!STREAMING::HAS_MODEL_LOADED(model))
		return 0;

	return 1;
}

int func_14(BOOL bParam0) // Position - 0x5E3 Hash - 0x1DF614BF ^0xF0C63F81
{
	if (func_76(128) || func_77(6))
		return 1;

	if (bParam0)
	{
		if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1913814.f_202) && !func_78(1625871738, &(Global_1913814.f_202), 600, -1, 0, 0))
		{
			func_79(128);
			func_80(6);
			return 0;
		}
	}
	else
	{
		if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1913814.f_202))
			Global_1913814.f_202 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(1625871738);
	
		if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1913814.f_202))
			return 0;
	}

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 893391757, "MOUNT_TYPES/MOUNT(type=%x)/WHISTLE:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1616037958, "MOUNT_TYPES/MOUNT(type=%x)/LOADOUT_SLOT:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1555915504, "MOUNT_TYPES/MOUNT(type=%x)/REPOSITORY:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -298851427, "MOUNT_TYPES/MOUNT(type=%x)/ITEM_CATEGORY:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 834733495, "MOUNT_TYPES/MOUNT(type=%x)/BONDING:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 808825305, "MOUNT_TYPES/MOUNT(type=%x)/UI_FILTERS:start");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -748933974, "MOUNT_TYPES/MOUNT(type=%x)/UI_FILTERS:end");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1543589730, "MOUNT_TYPES/MOUNT(type=%x)/ARCHETYPES:start");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -143743697, "MOUNT_TYPES/MOUNT(type=%x)/ARCHETYPES:end");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 116835447, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_STYLE:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1255580663, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_SPRITE:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1292413058, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_NAME:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 2112095068, "MOUNT_TYPES/MOUNT(type=%x)/COMPATIBLE_TYPES/MOUNT_TYPE(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1379316512, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -223927384, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):slot_id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 267140771, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):metaped_tag");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -675686015, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):none_item");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1507362072, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):metaped_tag");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1979684523, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):none_item");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 42812586, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1318388873, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -571823039, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1894757327, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -385264207, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/INVENTORY_ITEM:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 38531101, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/DEFAULT_EQUIPMENT:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -509881626, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/STABLING_COST:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1239479495, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/INSURANCE_COST:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1224542537, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/REVIVE_COST:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1192923488, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/MOUNT_CLASS:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 737763634, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/MOUNT_QUALITY:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 735225176, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_HEALTH:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1306132799, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_STRENGTH:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1611478627, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_SPEED:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -221622390, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_AGILITY:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1695792563, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_FITNESS:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1454482041, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_GRIT:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1699214685, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL1:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -926718279, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL2:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1186063008, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL3:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1105713420, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL4:id");
	func_79(128);
	func_80(6);
	return 1;
}

void func_15(int iParam0) // Position - 0x996 Hash - 0xB3D6FC5E ^0xB3D6FC5E
{
	Global_1900383.f_378 != iParam0;
	Global_1900383.f_378 = iParam0;
	return;
}

int func_16() // Position - 0x9B3 Hash - 0x8A3E9350 ^0x1E0E30DC
{
	if (!func_82(-1898635967, func_81(), true))
		return 0;

	if (func_83())
		if (!func_82(146323340, func_81(), false))
			return 0;

	return 1;
}

BOOL func_17(int iParam0) // Position - 0x9EF Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

void func_18() // Position - 0xA02 Hash - 0xE09335F1 ^0xE09335F1
{
	int num;
	int numReservedAmbientPedsDesired;
	int numPeds;
	int numPeds2;

	num = 1;
	func_84(0) == 1;

	if (func_84(1) == 1)
		num = num + 1;

	if (func_84(5) == 1)
		num = num + 1;

	if (func_84(6) == 1)
		num = num + 1;

	num = num + func_85(0);
	num = num + func_85(1);
	numReservedAmbientPedsDesired = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();

	if (num > numReservedAmbientPedsDesired)
	{
		numPeds = num - numReservedAmbientPedsDesired;
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(numPeds);
	}
	else if (num < numReservedAmbientPedsDesired)
	{
		numPeds2 = numReservedAmbientPedsDesired - num;
		PED::_UNRESERVE_AMBIENT_PEDS(numPeds2);
	}

	return;
}

void func_19() // Position - 0xA88 Hash - 0xB89A76E9 ^0xB89A76E9
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		func_86(i);
	}

	return;
}

void func_20(var uParam0) // Position - 0xAA8 Hash - 0xE4C59F9D ^0xF9619037
{
	*uParam0 = PLAYER::PLAYER_ID();

	if (!PLAYER::IS_PLAYER_DEAD(*uParam0))
		uParam0->f_1 = 1;

	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		uParam0->f_2 = 1;
	
		if (PED::IS_PED_INJURED(Global_35))
			uParam0->f_4 = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			uParam0->f_3 = 1;
	
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = PED::GET_MOUNT(Global_35);
		}
	}

	return;
}

void func_21(int iParam0, var uParam1) // Position - 0xB28 Hash - 0x68A2A80B ^0x8FD7DFD7
{
	float num;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = 0;
	uParam1->f_4 = 0;
	uParam1->f_5 = { 0f, 0f, 0f };
	uParam1->f_8 = 0f;
	uParam1->f_10 = 0;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;

	if (func_71(iParam0))
	{
		uParam1->f_1 = 1;
		*uParam1 = func_88(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			uParam1->f_2 = 1;
	
		if (PED::IS_PED_INJURED(*uParam1))
			uParam1->f_3 = 1;
	
		if (TASK::IS_PED_IN_WRITHE(*uParam1))
			uParam1->f_4 = 1;
	
		uParam1->f_5 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
		uParam1->f_8 = ENTITY::GET_ENTITY_HEADING(*uParam1);
		uParam1->f_9 = PED::_GET_RIDER_OF_MOUNT(*uParam1, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_9))
			if (uParam1->f_9 == Global_35)
				uParam1->f_10 = 1;
	
		num = func_89(iParam0);
	
		if (func_90(uParam1->f_5, Global_36) <= num)
			uParam1->f_11 = 1;
	}

	return;
}

void func_22(Entity eParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0xC2B Hash - 0x5E6239A9 ^0x6EAFC
{
	if (eParam0.f_1)
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(eParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(eParam0, true, true);

	return;
}

void func_23(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0xC4C Hash - 0x7BB3A53A ^0x65F0B231
{
	if (pedParam0.f_2)
		if (func_76(64))
			PED::SET_PED_RESET_FLAG(pedParam0, 6, true);

	return;
}

void func_24(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0xC6C Hash - 0xD07FE800 ^0xD76C5881
{
	if (func_91())
	{
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE"), true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE_HORSEBACK"), true);
		func_92(uParam0, uParam7, uParam19);
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE_HORSEBACK"), false);
		func_15(1);
	}

	func_93();
	return;
}

void func_25(int iParam0, var uParam1) // Position - 0xCC6 Hash - 0x24F5C19C ^0x34757342
{
	BOOL value;
	int flagId;
	BOOL pedConfigFlag;
	BOOL flag;
	float pedRemainingRevivalTime;

	if (!uParam1->f_1)
		return;

	if (!uParam1->f_2)
		return;

	value = false;

	if (func_94() && !func_95(4))
		value = true;

	flagId = 388;
	pedConfigFlag = PED::GET_PED_CONFIG_FLAG(*uParam1, flagId, false);

	if (value != pedConfigFlag)
		PED::SET_PED_CONFIG_FLAG(*uParam1, flagId, value);

	if (func_96())
		return;

	flag = func_97(iParam0);

	if (uParam1->f_4 != flag)
	{
		func_98(iParam0, uParam1->f_4);
		func_99(iParam0);
	}

	if (!uParam1->f_4)
		return;

	if (func_100(iParam0) == 0)
		func_101(iParam0, MISC::GET_GAME_TIMER());

	pedRemainingRevivalTime = PED::_GET_PED_REMAINING_REVIVAL_TIME(*uParam1, false);
	func_102(iParam0, pedRemainingRevivalTime);

	if (Global_1914319.f_18969)
		if (!PED::_0x12EB4E31F092C9B3(*uParam1))
			PED::SET_PAUSE_PED_WRITHE_BLEEDOUT(*uParam1, true);
	else if (PED::_0x12EB4E31F092C9B3(*uParam1))
		PED::SET_PAUSE_PED_WRITHE_BLEEDOUT(*uParam1, false);

	if (func_103())
		ENTITY::SET_ENTITY_HEALTH(*uParam1, 0, 0);

	return;
}

void func_26(int iParam0, var uParam1) // Position - 0xDBD Hash - 0x13910CF7 ^0xB6BF87EF
{
	if (!uParam1->f_1)
		return;

	if (func_96())
		return;

	if (!uParam1->f_2)
	{
		func_104(iParam0);
		return;
	}

	return;
}

void func_27() // Position - 0xDEB Hash - 0x90BFFF20 ^0x90BFFF20
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		func_105(i);
	}

	return;
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xE0B Hash - 0xCF3BC73F ^0x20508DA
{
	Ped mount;
	Vector3 entityCoords;
	float distanceBetweenCoords;
	float num;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		func_106();
		return;
	}

	mount = PED::GET_MOUNT(Global_35);

	if (!func_107(mount))
		return;

	if (!func_108())
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(mount, true, false) };
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, func_109(), false);
		func_110(entityCoords);
	
		if (distanceBetweenCoords > 0.01f)
		{
			num = func_111();
			num = num + distanceBetweenCoords;
			func_112(num);
		}
	
		if (func_111() >= 40f)
			func_113(1);
	}

	if (!func_108())
		return;

	func_114(mount);
	return;
}

void func_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xEC8 Hash - 0x6C59F365 ^0xB4EC21EB
{
	Ped mount;
	Ped ped;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (!func_71(6))
		return;

	if (!PED::IS_PED_ON_MOUNT(Global_35))
		return;

	mount = PED::GET_MOUNT(Global_35);
	ped = func_88(6);

	if (mount != ped)
		return;

	if (func_115(6) == 0)
		return;

	func_116(6, 1);
	return;
}

void func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xF36 Hash - 0x783301A9 ^0x470B8E6C
{
	Ped ped;
	int gameTimer;

	if (!func_117(uParam0, &ped, true))
	{
		func_118();
		return;
	}

	gameTimer = MISC::GET_GAME_TIMER();

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_414))
	{
		Global_1900383.f_414 = ped;
		Global_1900383.f_414.f_1 = gameTimer;
	}

	if (Global_1900383.f_414.f_1 + 5000 < gameTimer)
	{
		func_119(ped);
		func_118();
	}

	return;
}

void func_31() // Position - 0xF98 Hash - 0x378D9678 ^0x12501F7D
{
	int num;

	if (func_120() > 1)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_EXIT"), false);
		func_121();
	}

	num = func_120();

	switch (num)
	{
		case 0:
			func_122();
			break;
	
		case 1:
			func_123();
			break;
	
		case 2:
			func_124();
			break;
	
		case 3:
			func_125();
			break;
	
		case 4:
			func_126();
			break;
	
		case 5:
			func_127();
			break;
	
		case 6:
			func_128();
			break;
	
		case 7:
			func_129();
			break;
	}

	func_130();
	return;
}

void func_32() // Position - 0x1047 Hash - 0x783D918 ^0x783D918
{
	BOOL flag;

	flag = false;

	if (func_131(0) || func_131(1))
		flag = true;

	func_132(flag);
	return;
}

void func_33() // Position - 0x106E Hash - 0xFDCCA81B ^0xFDCCA81B
{
	BOOL flag;
	BOOL flag2;
	var unk;
	var unk4;
	int num;
	int num2;

	if (!func_133())
		return;

	flag = false;

	if (!func_131(1))
		flag = true;

	flag2 = func_94();

	if (flag2 && func_134() == 8)
		flag = true;

	if (flag2 && func_135(Global_1835011[37 /*74*/].f_1, true) && !func_135(Global_1835011[43 /*74*/].f_1, true))
		flag = true;

	if (flag2 && func_135(Global_1835011[43 /*74*/].f_1, true) && !func_135(Global_1835011[44 /*74*/].f_1, true))
		flag = true;

	func_136(1, &unk, &unk4);

	if (_IS_NULL_VECTOR(unk))
		flag = true;

	if (flag)
	{
		func_138();
		return;
	}

	num2.f_10 = 7;
	num2.f_10 = 1;
	num2 = 1;
	num2.f_6 = { unk };
	num2.f_9 = unk4;
	func_139(&num, &num2);

	switch (num)
	{
		case 0:
			break;
	
		case 1:
			func_138();
			break;
	
		case 2:
			func_138();
			break;
	}

	return;
}

BOOL func_34() // Position - 0x1185 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1955834;
}

void func_35(int iParam0) // Position - 0x1191 Hash - 0x9EFF400A ^0x9EFF400A
{
	Ped ped;

	iParam0 = func_87(iParam0);

	if (iParam0 <= -1)
		return;

	if (iParam0 >= 7)
		return;

	if (iParam0 != 0)
		if (!func_140(43))
			return;

	ped = Global_1900383[iParam0 /*45*/];

	if (PED::IS_PED_INJURED(ped))
		return;

	if (Global_16)
		return;

	if (func_34())
		return;

	switch (Global_1900383.f_424[iParam0])
	{
		case 0:
		case 1:
			func_141(iParam0);
			Global_1900383.f_424[iParam0] = 2;
			break;
	
		case 2:
			func_142(iParam0);
			Global_1900383.f_424[iParam0] = 3;
			break;
	
		case 3:
			func_143(iParam0);
			Global_1900383.f_424[iParam0] = 0;
			break;
	}

	return;
}

void func_36(int iParam0) // Position - 0x1257 Hash - 0xB727D589 ^0xA18549
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, iParam0))
	{
		case -1985279805:
			func_154(iParam0);
			break;
	
		case -1651585854:
			func_152(iParam0);
			break;
	
		case -1246119244:
			func_151(iParam0);
			break;
	
		case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
			func_145(iParam0);
			break;
	
		case -687266558:
			func_163(iParam0);
			func_164(iParam0);
			break;
	
		case -462231716:
			func_153(iParam0);
			break;
	
		case 218595333:
			func_156(iParam0);
			break;
	
		case joaat("EVENT_RAN_OVER_PED"):
			func_144(iParam0);
			break;
	
		case joaat("event_entity_damaged"):
			func_146(iParam0);
			break;
	
		case 1082572570:
			func_162(iParam0);
			break;
	
		case 1208357138:
			break;
	
		case 1327216456:
			func_157(iParam0);
			break;
	
		case joaat("EVENT_ANIMAL_TAMING_CALLOUT"):
			func_155(iParam0);
			break;
	
		case joaat("event_player_prompt_triggered"):
			func_158(iParam0);
			break;
	
		case 1417095237:
			func_148(134217728);
			func_149(iParam0);
			break;
	
		case 1553659161:
			func_159(iParam0);
			break;
	
		case 1638298852:
			func_150(iParam0);
			break;
	
		case 1655597605:
			func_161(iParam0);
			break;
	
		case 1784289253:
			func_160(iParam0);
			break;
	
		case 2145012826:
			func_147(iParam0);
			break;
	}

	return;
}

void func_37(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x13A1 Hash - 0xE9C2E025 ^0x877B728E
{
	if (!uParam0.f_3)
		return;

	if (!uParam7.f_1)
		return;

	if (func_96())
		return;

	if (func_165(iParam19))
		return;

	func_166(iParam19, uParam7.f_5, uParam7.f_8);
	return;
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x13E5 Hash - 0x8A370E12 ^0x35702FAE
{
	BOOL flag;
	int num;
	BOOL flag2;
	BOOL value;
	int flagId;
	BOOL value2;

	if (func_76(4096))
		return;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	flag = false;
	num = func_167(0);

	switch (num)
	{
		case 1:
		case 2:
		case 6:
		case 8:
		case 11:
			flag = true;
			break;
	}

	flag2 = 0;

	if (!func_140(42))
		flag2 = 1;

	value = false;

	if (flag || flag2)
		value = true;

	flagId = 367;

	if (PED::GET_PED_CONFIG_FLAG(Global_35, flagId, true) != value)
		PED::SET_PED_CONFIG_FLAG(Global_35, flagId, value);

	value2 = false;

	if (flag && !flag2)
		value2 = true;

	flagId = 487;

	if (PED::GET_PED_CONFIG_FLAG(Global_35, flagId, true) != value2)
		PED::SET_PED_CONFIG_FLAG(Global_35, flagId, value2);

	return;
}

void func_39(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x14BA Hash - 0xD6AF6A44 ^0xD1E59C3
{
	eStackSize stackSize;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (!pedParam7.f_1)
		return;

	if (!pedParam7.f_2)
		return;

	if (pedParam7.f_3)
		return;

	if (pedParam7.f_4)
		return;

	if (func_168(pedParam7, 2043986356))
	{
		if (func_169(pedParam7))
		{
			stackSize = func_170();
		
			if (!func_171(stackSize))
				TASK::TASK_STAND_STILL(pedParam7, -1);
		}
	}

	return;
}

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x152F Hash - 0x3E122361 ^0xE590DDC6
{
	BOOL flag;
	int num;

	if (!uParam0.f_3)
		return;

	if (!pedParam7.f_1)
		return;

	if (!pedParam7.f_2)
		return;

	if (pedParam7.f_3)
		return;

	if (pedParam7.f_4)
		return;

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	if (func_72(iParam19))
		return;

	flag = func_172(iParam19);
	num = 48;

	if (flag)
		if (!FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(pedParam7, num))
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam7, num, true);
	else if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(pedParam7, num))
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam7, num, false);

	return;
}

void func_41(int iParam0) // Position - 0x15C7 Hash - 0x82D23FAD ^0xD84A68B9
{
	Ped mount;
	Volume volume;
	Volume volume2;
	var entityCoords;
	int scenario;
	Vector3 scenarioPointCoords;

	if (func_173(iParam0, 256))
		return;

	if (!func_71(iParam0))
		return;

	mount = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return;

	if (ENTITY::IS_ENTITY_DEAD(mount))
		return;

	if (!PED::_IS_MOUNT_SEAT_FREE(mount, -1))
		return;

	if (func_174(mount, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		return;

	if (func_174(mount, -76381094) || func_174(mount, SCRIPT_TASK_START_SCENARIO_AT_POSITION) || func_174(mount, SCRIPT_TASK_START_SCENARIO_IN_PLACE))
		return;

	volume = func_175(0);
	volume2 = func_175(2);

	if (!VOLUME::DOES_VOLUME_EXIST(volume))
		return;

	if (!ENTITY::IS_ENTITY_IN_VOLUME(mount, volume, false, 0))
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volume2))
		return;

	if (!ENTITY::IS_ENTITY_IN_VOLUME(mount, volume2, false, 0))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(mount, true, false) };
	scenario = func_176(entityCoords, volume2, volume);

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
	{
		scenarioPointCoords = { TASK::_GET_SCENARIO_POINT_COORDS(scenario, true) };
		PED::SET_PED_CONFIG_FLAG(mount, 355, true);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(mount, scenarioPointCoords, 1f, 20000, 1048576000, 0, 1193033728);
	}

	return;
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x16FC Hash - 0xF0D382E9 ^0x24C0FB47
{
	if (!uParam0.f_1)
		return;

	if (!uParam7.f_10)
		return;

	if (func_177(iParam19) == -1)
		return;

	func_178(iParam19, -1);
	return;
}

void func_43(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, Player plParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x172E Hash - 0xC71729B1 ^0xCDD48BBC
{
	if (func_179())
		return;

	iParam19 = func_87(iParam19);

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	if (!plParam12.f_1)
		return;

	if (!pedParam0.f_2)
		return;

	if (!pedParam0.f_11)
		return;

	if (func_177(iParam19) == 1)
		return;

	if (!PLAYER::IS_PLAYER_RIDING_TRAIN(plParam12) && !Global_1430231.f_4)
		return;

	if (func_174(pedParam0, 2043986356))
		return;

	func_180(pedParam0, Global_35);
	return;
}

void func_44(int iParam0) // Position - 0x17BC Hash - 0x67C27ECC ^0x489F383
{
	int threadId;
	Ped ped;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_72(iParam0))
		return;

	threadId = func_181(iParam0);

	if (SCRIPTS::DOES_THREAD_EXIST(threadId))
		if (SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
			return;

	if (func_71(iParam0))
	{
		ped = func_88(iParam0);
		func_182(ped, true);
	}

	func_183(iParam0);
	return;
}

void func_45(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x182D Hash - 0x3E122361 ^0xE590DDC6
{
	Ped riderOfMount;
	Ped ped;
	Hash pedRelationshipGroupHash;

	if (!uParam0.f_3)
		return;

	if (!pedParam7.f_1)
		return;

	if (!pedParam7.f_2)
		return;

	if (pedParam7.f_3)
		return;

	if (pedParam7.f_4)
		return;

	iParam19 = func_87(iParam19);

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	riderOfMount = PED::_GET_RIDER_OF_MOUNT(pedParam7, false);

	if (!ENTITY::DOES_ENTITY_EXIST(riderOfMount))
	{
		func_184(iParam19);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(riderOfMount) || PED::IS_PED_INJURED(riderOfMount))
	{
		func_184(iParam19);
		return;
	}

	if (func_76(512))
		return;

	if (riderOfMount == Global_35)
		return;

	ped = func_185(iParam19);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(riderOfMount);
	
		if (pedRelationshipGroupHash != joaat("rel_player_ally") && pedRelationshipGroupHash != joaat("rel_player_like") && pedRelationshipGroupHash != joaat("rel_gang_dutchs"))
			func_186(iParam19, riderOfMount);
	}

	ped = func_185(iParam19);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (func_187(pedParam7, Global_35, true, true) > func_89(iParam19))
	{
		func_184(iParam19);
		func_188(iParam19, 2);
	}

	return;
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x1954 Hash - 0x3E122361 ^0xE590DDC6
{
	float num;
	BOOL flag;
	int gameTimer;

	if (!uParam0.f_3)
		return;

	if (!pedParam7.f_1)
		return;

	if (!pedParam7.f_2)
		return;

	if (pedParam7.f_3)
		return;

	if (pedParam7.f_4)
		return;

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	if (!func_189(iParam19))
		return;

	num = func_190(pedParam7);
	flag = false;

	if (num > 0f)
		flag = true;

	gameTimer = MISC::GET_GAME_TIMER();

	if (!flag || func_191(iParam19) + &func_177 < gameTimer)
	{
		func_192(iParam19, 0);
		func_193(iParam19, -1);
	
		if (func_194(16))
			func_195(16);
	
		if (func_196(16))
			func_197(16);
	}

	return;
}

void func_47(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x1A0F Hash - 0x55BB7E0E ^0x8359ECB4
{
	int num;
	Ped mount;
	Ped riderOfMount;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	num = func_198(5);

	if (num == 0)
		return;

	func_21(5, &mount);

	if (num == 2)
	{
		if (mount.f_1 && !mount.f_2)
		{
			func_184(5);
			func_199(5, 1);
		}
	
		if (mount.f_2)
		{
			if (func_187(mount, Global_35, true, true) > func_89(5) && !ENTITY::IS_ENTITY_ON_SCREEN(mount))
			{
				riderOfMount = PED::_GET_RIDER_OF_MOUNT(mount, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(riderOfMount))
				{
					ENTITY::IS_ENTITY_DEAD(riderOfMount) || PED::IS_PED_INJURED(riderOfMount);
				
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(riderOfMount))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(riderOfMount, true, true);
						PED::DELETE_PED(&riderOfMount);
					}
				}
			
				func_73(5);
				func_200(5, 0);
			}
		}
	
		if (!mount.f_1 && func_84(5) == 1)
			func_200(5, 0);
	}

	if (num == 0)
		return;

	if (!func_140(42))
		return;

	if (func_84(0) == 1 && func_201() == 0)
	{
		func_202(5, false);
		func_203(5);
	}

	return;
}

void func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x1B26 Hash - 0xCB80150 ^0x19E82064
{
	BOOL flag;
	int num;
	BOOL flag2;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (func_140(42))
		return;

	flag = false;

	if (func_84(0) == 0 && func_84(5) == 1 && func_198(5) == 1)
		flag = true;

	if (!flag)
		return;

	num = func_167(0);
	flag2 = false;

	if (num == 1 || num == 8)
		flag2 = true;

	if (!flag2)
	{
		if (func_94() && func_95(4))
		{
			if (!func_140(42))
			{
				func_204(42);
				func_204(30);
			}
		}
	
		if (!func_205(55))
			func_206(1);
	}

	return;
}

void func_49() // Position - 0x1BE6 Hash - 0xC8CDC20A ^0xE77D592A
{
	Ped model;
	Ped model2;

	model = func_207(0);
	model2 = func_207(1);

	if (Global_1900383.f_416 != 0)
	{
		if (Global_1900383.f_416 != model)
		{
			if (!func_208(Global_1900383.f_416))
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1900383.f_416, false);
		
			Global_1900383.f_416 = 0;
		}
	}

	if (Global_1900383.f_416.f_1 != 0)
	{
		if (Global_1900383.f_416.f_1 != model2)
		{
			if (!func_208(Global_1900383.f_416.f_1))
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1900383.f_416.f_1, false);
		
			Global_1900383.f_416.f_1 = 0;
		}
	}

	if (model != 0)
	{
		if (!PED::_IS_PED_MODEL_SUPPRESSED(model))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(model, true);
			Global_1900383.f_416 = model;
		}
	}

	if (model2 != 0)
	{
		if (!PED::_IS_PED_MODEL_SUPPRESSED(model2))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(model2, true);
			Global_1900383.f_416.f_1 = model2;
		}
	}

	return;
}

void func_50() // Position - 0x1CBC Hash - 0xE2C9F9BB ^0xE2C9F9BB
{
	int num;

	func_209(Global_1900383.f_436);
	num = Global_1900383.f_436;
	num = num + 1;

	if (num >= 5)
		num = 0;

	Global_1900383.f_436 = num;
	return;
}

void func_51(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x1CF0 Hash - 0x260987F3 ^0x6C65A262
{
	BOOL flag;
	Object* p_object;
	BOOL flag2;
	int carriableEntityState;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	var entityCoords;
	int num;
	Ped ped;
	var entityCoords2;
	var unk5;
	BOOL flag6;
	var unk8;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (func_96())
		return;

	flag = func_210();

	if (flag)
	{
		p_object = func_211();
	
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(p_object))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(p_object, true, true);
	}

	flag2 = false;

	if (flag)
	{
		if (PED::_GET_CARRIER_AS_PED(p_object) == Global_35)
		{
			carriableEntityState = ENTITY::GET_CARRIABLE_ENTITY_STATE(p_object);
		
			switch (carriableEntityState)
			{
				case 4:
				case 5:
				case 6:
				case 8:
				case 9:
					flag2 = true;
					break;
			}
		}
	}

	flag3 = func_140(42);
	flag4 = func_212(false);
	flag5 = false;

	if (flag)
	{
		if (flag2)
		{
			if (func_213() != 1 && !flag4)
			{
				func_214(1);
				flag5 = true;
			}
		}
		else
		{
			if (func_213() == 1 && !flag4)
			{
				func_214(2);
				flag5 = true;
			}
		
			if (ENTITY::IS_ENTITY_STATIC(p_object))
				ENTITY::SET_ENTITY_DYNAMIC(p_object, true);
		}
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(p_object, true, false) };
		func_215(entityCoords);
	}
	else
	{
		if (func_213() == 0)
		{
			num = func_201();
		
			if (func_71(num))
			{
				ped = func_88(num);
				entityCoords2 = { ENTITY::GET_ENTITY_COORDS(ped, false, false) };
				func_215(entityCoords2);
			}
		
			if (num == 5)
			{
				if (!func_71(5))
				{
					if (flag3)
					{
						unk5 = { func_216() };
						func_217(-1);
						func_214(2);
						flag5 = true;
					}
				}
			}
		}
	
		flag6 = false;
	
		if (func_213() == 2)
			flag6 = true;
	
		if (func_213() == 1)
			flag6 = true;
	
		if (flag6)
		{
			unk8 = { func_216() };
		
			if (_IS_NULL_VECTOR(unk8))
			{
				func_214(3);
				func_217(-1);
				func_215(0f, 0f, 0f);
				func_218(-15);
			}
			else
			{
				func_219(unk8, 0f, true);
				func_214(2);
				func_217(-1);
			
				if (func_220() == -15)
					func_218(func_221());
			}
		
			flag5 = true;
		}
	}

	if (flag5)
		func_67();

	return;
}

void func_52() // Position - 0x1EE0 Hash - 0x78297D7B ^0x477BB51D
{
	Ped ped;
	var unk12;
	BOOL flag;

	if (!func_71(6))
		return;

	func_21(6, &ped);

	if (!ped.f_2)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);
		func_203(6);
		return;
	}

	func_20(&unk12);
	flag = false;

	if (!unk12.f_3)
		flag = true;

	if (func_187(ped, Global_35, true, true) > 100f)
		flag = true;

	if (flag)
	{
		func_202(6, false);
		func_203(6);
	}

	return;
}

void func_53() // Position - 0x1F4C Hash - 0x59081D6B ^0x431B4918
{
	Ped ped;
	int gameTimer;
	int num;
	int num2;

	if (!func_71(1))
	{
		func_222();
		return;
	}

	func_21(1, &ped);

	if (!ped.f_2)
	{
		func_222();
		return;
	}

	if (func_223(1))
	{
		func_222();
		return;
	}

	if (func_115(1) >= 1)
	{
		func_222();
		return;
	}

	if (!func_224(1))
	{
		func_222();
		return;
	}

	if (ped.f_10)
	{
		func_222();
		return;
	}

	if (ENTITY::DOES_ENTITY_EXIST(ped.f_9))
	{
		func_222();
		return;
	}

	gameTimer = MISC::GET_GAME_TIMER();

	if (!func_225())
	{
		num = func_226();
	
		if (num == 0)
			func_227(gameTimer);
		else if (num + 5000 < gameTimer)
			func_228(1);
	}

	if (!func_225())
		return;

	if (!func_168(ped, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(ped, Global_35, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(ped, true);
	}

	if (func_229(ped, -1))
		return;

	num2 = func_230();

	if (num2 == 0)
	{
		func_231(gameTimer);
	}
	else if (num2 + 15000 < gameTimer)
	{
		func_202(1, true);
		func_222();
	}

	return;
}

void func_54() // Position - 0x2067 Hash - 0x17C92C87 ^0xCF57F60
{
	Ped mount;
	BOOL flag;
	Ped mount2;
	BOOL flag2;
	BOOL flag3;
	int i;
	int secondsSinceBaseYear;
	int dismountedTimestamp;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
		return;

	flag = false;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		flag = true;
		mount = PED::GET_MOUNT(Global_35);
	}

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_40.f_1095.f_1[i /*436*/].f_9 == 0)
		{
			if (Global_40.f_1095.f_1[i /*436*/].f_431 > -1)
				Global_40.f_1095.f_1[i /*436*/].f_431 = -1;
		}
		else
		{
			flag2 = false;
			flag3 = false;
			mount2 = Global_1900383[i /*45*/];
		
			if (ENTITY::DOES_ENTITY_EXIST(mount2))
			{
				flag2 = true;
			
				if (flag)
					if (mount == mount2)
						flag3 = true;
			}
		
			if (flag3)
			{
				if (Global_40.f_1095.f_1[i /*436*/].f_431 > -1)
					Global_40.f_1095.f_1[i /*436*/].f_431 = -1;
			}
			else
			{
				secondsSinceBaseYear = CLOCK::_GET_SECONDS_SINCE_BASE_YEAR();
			
				if (flag2)
				{
					dismountedTimestamp = PED::_0xE8D1CCB9375C101B(mount2, PLAYER::PLAYER_ID());
				
					if (dismountedTimestamp == -1 || dismountedTimestamp == 0)
					{
						dismountedTimestamp = secondsSinceBaseYear;
						PED::_0xA691C10054275290(mount2, PLAYER::PLAYER_ID(), dismountedTimestamp);
					}
				
					if (Global_40.f_1095.f_1[i /*436*/].f_431 != dismountedTimestamp)
						Global_40.f_1095.f_1[i /*436*/].f_431 = dismountedTimestamp;
				}
				else if (Global_40.f_1095.f_1[i /*436*/].f_431 == -1)
				{
					Global_40.f_1095.f_1[i /*436*/].f_431 = secondsSinceBaseYear;
				}
			}
		}
	}

	return;
}

void func_55() // Position - 0x21DD Hash - 0x58B14796 ^0xB923F
{
	Player player;
	BOOL enabled;
	Ped ped;
	Ped ped2;

	player = PLAYER::PLAYER_ID();
	enabled = false;

	if (func_232())
		enabled = true;

	if (func_71(0))
	{
		ped = func_88(0);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped, 31, 2, enabled);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped, 32, 2, enabled);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped, 33, 2, enabled);
	}

	if (func_71(1))
	{
		ped2 = func_88(1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped2, 31, 2, enabled);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped2, 32, 2, enabled);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped2, 33, 2, enabled);
	}

	return;
}

void func_56() // Position - 0x2264 Hash - 0xE5C33092 ^0xE5C33092
{
	if (func_140(33))
		if (!func_233())
			func_234(true);
	else if (func_233())
		func_234(false);

	if (func_140(34))
		if (!func_235())
			func_236(true);
	else if (func_235())
		func_236(false);

	if (func_140(35))
		if (!func_237())
			func_238(true);
	else if (func_237())
		func_238(false);

	return;
}

void func_57(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x22DB Hash - 0xD146F2EE ^0x8BB97176
{
	float num;
	int gameTimer;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (!pedParam7.f_1)
		return;

	if (!pedParam7.f_2)
		return;

	if (!pedParam7.f_4)
		return;

	iParam19 = func_87(iParam19);

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	if (func_239(iParam19) >= 40)
		return;

	num = func_187(pedParam7, Global_35, true, true);

	if (num > 40f)
	{
		func_99(iParam19);
		return;
	}

	if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam7))
	{
		func_99(iParam19);
		return;
	}

	gameTimer = MISC::GET_GAME_TIMER();

	if (!func_240(iParam19))
	{
		func_241(iParam19, gameTimer);
		return;
	}

	if (func_242(iParam19) + 15000 < gameTimer)
	{
		func_243(0, joaat("honor_event_animal_bleedout"), 0, 0, 0, false, 1065353216, false);
		func_244(iParam19);
		func_241(iParam19, gameTimer);
	}

	return;
}

void func_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x23C1 Hash - 0x74458EEC ^0x22846F47
{
	var unk;
	Vector3 vector;
	float num;
	float distanceBetweenCoords;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (!uParam7.f_1)
		return;

	if (!uParam7.f_2)
		return;

	if (uParam7.f_4)
		return;

	iParam19 = func_87(iParam19);

	if (iParam19 == -1)
		return;

	if (iParam19 >= 7)
		return;

	unk = { func_245(iParam19) };

	if (_IS_NULL_VECTOR(unk))
		return;

	vector = { func_246(iParam19) };
	num = func_247(iParam19);
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam7.f_5, vector, true);

	if (distanceBetweenCoords > 0.01f)
	{
		num = num + distanceBetweenCoords;
		func_248(iParam19, uParam7.f_5);
		func_249(iParam19, num);
	}

	return;
}

void func_59(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x247A Hash - 0xD246D98A ^0x6476146D
{
	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	func_250(uParam0);
	func_251(uParam0);
	func_252(uParam0, uParam7);
	func_253();
	func_254(uParam0, uParam7, uParam19);
	func_255(uParam0);
	func_256(uParam0, uParam7, uParam19);
	func_257(uParam0, uParam7, uParam19);
	func_258();
	func_259(uParam0);
	func_260();
	func_261(uParam0);
	func_262(uParam0);
	func_263(uParam0, uParam7);
	func_264(uParam0, uParam7, uParam19);
	func_265(uParam0);
	func_266();
	return;
}

void func_60() // Position - 0x254C Hash - 0x9891A00B ^0x3135F572
{
	int num;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
		return;

	if (func_267())
		return;

	num = func_268(0);

	if (func_269(num))
		if (func_270(num) == 1)
			return;

	num2 = func_271();

	if (WEAPON::_0x5A695BD328586B44(Global_35, 0) != num2)
		WEAPON::_0xB832F1A686B9B810(Global_35, num2, 0);

	return;
}

void func_61(int iParam0) // Position - 0x25C0 Hash - 0xEC0266DA ^0xEC0266DA
{
	Ped ped;
	Hash entityModel;
	var unk94;
	int num;
	var unk188;
	Ped ped2;
	Ped pedIndexFromEntityIndex;
	int num2;
	int i;
	int j;
	BOOL flag;
	BOOL flag2;
	Hash pedMetaOutfitHash;
	int num3;
	BOOL flag3;
	Hash hash;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (func_96())
		return;

	if (!func_71(iParam0))
		return;

	ped = func_88(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (PED::IS_PED_INJURED(ped))
		return;

	if (func_165(iParam0))
		return;

	entityModel.f_10 = 10;
	unk94.f_10 = 10;
	func_272(&entityModel);

	for (j = 0; j < 3; j = j + 1)
	{
		num = func_273(j);
		num2 = j;
		func_272(&entityModel);
		flag = false;
	
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk188, ped, num, 0))
			flag = true;
	
		if (!flag)
		{
			ped2 = unk188.f_3;
		
			if (!ENTITY::DOES_ENTITY_EXIST(ped2))
				flag = true;
		}
	
		if (!flag)
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(ped2) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped2))
				flag = true;
	
		if (!flag)
		{
			if (ENTITY::IS_ENTITY_A_PED(ped2))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped2);
			
				if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
					flag = true;
			}
		}
	
		if (flag)
		{
			func_274(&unk94, &Global_40.f_1095.f_1[iParam0 /*436*/].f_15[num2 /*94*/]);
		}
		else
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(ped2);
			entityModel.f_1 = ENTITY::_GET_CARRIABLE_FROM_ENTITY(ped2);
			entityModel.f_2 = ENTITY::_0xD21C7418C590BB40(ped2);
			entityModel.f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(ped2);
			entityModel.f_93 = ENTITY::_0xB16C780C51E51E2B(ped2);
		
			if (STREAMING::IS_MODEL_A_PED(entityModel))
			{
				func_275(iParam0, ped2);
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped2);
				func_276(pedIndexFromEntityIndex, &(entityModel.f_5), &(entityModel.f_6), &(entityModel.f_7), &(entityModel.f_4));
				flag2 = func_277(&(entityModel.f_1), pedIndexFromEntityIndex, entityModel.f_7, entityModel.f_5);
				!flag2;
				pedMetaOutfitHash = PED::_GET_PED_META_OUTFIT_HASH(pedIndexFromEntityIndex);
				entityModel.f_8 = pedMetaOutfitHash;
				entityModel.f_9 = PED::_GET_NUM_COMPONENTS_IN_PED(pedIndexFromEntityIndex);
			
				if (entityModel.f_9 > 10)
					entityModel.f_9 = 10;
			
				for (i = 0; i < entityModel.f_9; i = i + 1)
				{
					if (i >= 10)
					{
					}
					else
					{
						!PED::GET_META_PED_ASSET_GUIDS(pedIndexFromEntityIndex, i, &entityModel.f_10[i /*8*/], &(entityModel.f_10[i /*8*/].f_1), &(entityModel.f_10[i /*8*/].f_2), &(entityModel.f_10[i /*8*/].f_3));
						!PED::GET_META_PED_ASSET_TINT(pedIndexFromEntityIndex, i, &(entityModel.f_10[i /*8*/].f_4), &(entityModel.f_10[i /*8*/].f_5), &(entityModel.f_10[i /*8*/].f_6), &(entityModel.f_10[i /*8*/].f_7));
					}
				}
			
				entityModel.f_91 = PERSISTENCE::_0x2E545965DF98D476(ped2);
				entityModel.f_92 = 0;
			
				if (PED::_IS_META_PED_USING_COMPONENT(pedIndexFromEntityIndex, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(ped2))
					entityModel.f_92 = 1;
			
				if (MISC::_IS_PED_DECOMPOSED(pedIndexFromEntityIndex))
				{
					num3 = 1;
					func_278(entityModel.f_1, num3);
					flag3 = true;
				
					if (!func_279(Global_35, ped, false))
						flag3 = false;
				
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(ped, -1))
						flag3 = false;
				
					if (flag3)
						TASK::_DETACH_CARRIABLE_PED(ped2);
					else
						TASK::_DETACH_CARRIABLE_PED(ped2);
				
					if (func_280())
						if (func_282(func_281(pedIndexFromEntityIndex), 72))
							func_283(98, true);
				
					func_274(&unk94, &Global_40.f_1095.f_1[iParam0 /*436*/].f_15[num2 /*94*/]);
				}
				else
				{
					if (entityModel.f_91 >= 12)
						if (func_280())
							if (func_282(func_281(pedIndexFromEntityIndex), 72))
								func_283(97, false);
					else if (entityModel.f_91 >= 2)
						if (func_280())
							if (func_282(func_281(pedIndexFromEntityIndex), 72))
								func_283(96, false);
				
					hash = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[num2 /*94*/].f_1;
				
					if (func_284(entityModel.f_1, 0) && func_284(hash, 0))
						if (entityModel.f_1 != hash)
							if (func_285(ped, hash, 1, true, -142743235))
								func_286(ped, pedIndexFromEntityIndex);
				
					func_274(&entityModel, &Global_40.f_1095.f_1[iParam0 /*436*/].f_15[num2 /*94*/]);
				}
			}
		
			hash = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[num2 /*94*/].f_1;
		
			if (func_284(entityModel.f_1, 0) && func_284(hash, 0))
				if (entityModel.f_1 != hash)
					if (func_285(ped, hash, 1, true, -142743235))
						func_286(ped, pedIndexFromEntityIndex);
		
			func_274(&entityModel, &Global_40.f_1095.f_1[iParam0 /*436*/].f_15[num2 /*94*/]);
		}
	}

	return;
}

void func_62(int iParam0) // Position - 0x2992 Hash - 0x67C27ECC ^0x67932FEC
{
	Ped ped;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_71(iParam0))
		return;

	ped = func_88(iParam0);
	ENTITY::IS_ENTITY_DEAD(ped);
	PED::IS_PED_INJURED(ped);
	TASK::IS_PED_IN_WRITHE(ped);
	PED::_0x6F43C351A5D51E2F(ped, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	return;
}

void func_63() // Position - 0x29FB Hash - 0xE404D875 ^0xE404D875
{
	var unk;
	var unk2;
	var unk3;
	int num;
	var unk4;
	var unk5;
	int i;
	Ped ped;
	int num2;
	Hash hash;
	int num3;

	for (i = 0; i < 7; i = i + 1)
	{
		if (!func_71(i))
		{
		}
		else
		{
			ped = func_88(i);
		
			if (func_287(i))
			{
				if (!func_288(ped))
				{
					num2 = func_289(i);
					func_290(ped, num2);
				}
				else
				{
					hash = func_291(i);
					func_292(hash, &unk, &unk2, &unk3, &num, &unk4, &unk5);
				
					if (num >= 1)
					{
						func_293(ped);
						func_294(i);
					}
					else if (!func_288(ped))
					{
					}
					else if (!func_287(i))
					{
						num3 = func_295(ped);
						func_296(i, 1);
						func_297(i, num3);
						func_298(i, func_221());
					}
				}
			}
		
			if (!func_288(ped))
			{
			}
			else if (!func_287(i))
			{
				num3 = func_295(ped);
				func_296(i, 1);
				func_297(i, num3);
				func_298(i, func_221());
			}
		}
	}

	return;
}

void func_64(int iParam0) // Position - 0x2AB7 Hash - 0x13A2EA86 ^0x13A2EA86
{
	BOOL flag;
	BOOL flag2;
	int num;
	Hash hash;
	Hash hash2;

	flag = func_299(iParam0);
	flag2 = func_300(iParam0);

	if (flag)
	{
		if (func_301(iParam0))
		{
			if (flag2)
				return;
		
			hash = func_302(iParam0);
			hash2 = func_221();
			num = func_303(hash, hash2);
		
			if (num < 2)
				return;
		
			func_304(iParam0, 1);
		}
		else
		{
			hash2 = func_221();
			func_305(iParam0, hash2);
			func_304(iParam0, 0);
			func_306(iParam0);
		}
	}
	else
	{
		if (!func_301(iParam0))
			return;
	
		func_305(iParam0, -15);
		func_307(iParam0);
	}

	if (!func_308(iParam0))
		return;

	if (!func_309(iParam0, 3.5f))
		return;

	func_304(iParam0, 0);
	func_306(iParam0);
	return;
}

void func_65() // Position - 0x2B76 Hash - 0x5855F82C ^0x5855F82C
{
	int i;
	Ped ped;
	var unk;
	var label;

	for (i = 0; i < 7; i = i + 1)
	{
		if (!func_71(i))
		{
		}
		else
		{
			ped = func_207(i);
		
			if (!func_310(ped))
			{
			}
			else
			{
				unk = { func_311(i) };
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk))
				{
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&label, func_312(ped), 64);
					TEXT_LABEL_ASSIGN_STRING(&unk, HUD::_GET_LABEL_TEXT_2(&label), 64);
				
					if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
					{
					}
					else
					{
						func_313(i, unk);
						func_314(i);
					}
				}
			}
		}
	}

	return;
}

void func_66(int iParam0) // Position - 0x2BFB Hash - 0xD14C6A7D ^0x9C4D4670
{
	Ped ped;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Hash blipHash;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL isPedInWrithe;
	BOOL flag8;
	Ped ped2;
	var entityCoords;
	float num;
	BOOL flag9;
	Hash modifierHash;
	Hash modifierHash2;
	float pedRemainingRevivalTime;
	Hash modifierHash3;
	int num2;
	Hash hash;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		return;

	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	flag = false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		flag = true;

	if (!PED::IS_PED_READY_TO_RENDER(ped))
		return;

	if (func_173(iParam0, 64))
	{
		func_315(iParam0);
		return;
	}

	flag2 = false;

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		if (!(MAP::GET_BLIP_FROM_ENTITY(ped) == 0))
			flag2 = true;

	if (flag2)
		return;

	flag3 = func_140(42);

	if (flag)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	
		if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && flag3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), ped);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("blip_saddle"), true);
				func_316(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
	
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}

	flag4 = false;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (Global_1935630.f_40 == ped)
			flag4 = true;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && flag4)
		func_315(iParam0);

	if (flag4)
		return;

	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
		return;

	flag5 = false;

	if (iParam0 == 0)
	{
		blipHash = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		blipHash = joaat("BLIP_STYLE_TEMPORARY_HORSE");
		flag5 = true;
	}
	else
	{
		return;
	}

	if (flag5)
	{
		flag6 = false;
	
		if (func_115(1) < 1)
			flag6 = true;
	
		if (flag6)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		
			return;
		}
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(blipHash, ped);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_317(&(Global_1900383[iParam0 /*45*/].f_26), flag5);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		return;

	flag7 = false;

	if (func_173(iParam0, 32))
		flag7 = true;

	isPedInWrithe = TASK::IS_PED_IN_WRITHE(ped);
	flag8 = false;
	ped2 = func_185(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (!ENTITY::IS_ENTITY_DEAD(ped2))
			if (PED::GET_MOUNT(ped2) == ped)
				flag8 = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	num = func_90(entityCoords, Global_36);
	flag9 = false;

	if (num > func_89(iParam0))
		flag9 = true;

	modifierHash = 0;
	modifierHash2 = 0;

	if (flag7)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			modifierHash = joaat("BLIP_MODIFIER_OBJECTIVE");
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (isPedInWrithe)
	{
		pedRemainingRevivalTime = PED::_GET_PED_REMAINING_REVIVAL_TIME(ped, true);
	
		if (flag9)
		{
			if (pedRemainingRevivalTime < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (pedRemainingRevivalTime < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (pedRemainingRevivalTime < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (pedRemainingRevivalTime <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (pedRemainingRevivalTime < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (pedRemainingRevivalTime < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (pedRemainingRevivalTime < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (pedRemainingRevivalTime <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (flag8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			modifierHash = joaat("BLIP_MODIFIER_HORSE_STOLEN");
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (flag9)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			modifierHash = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!flag9)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			modifierHash = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}

	if (modifierHash != 0)
	{
		func_318(Global_1900383[iParam0 /*45*/].f_26);
		func_319(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash);
	
		if (modifierHash == joaat("BLIP_MODIFIER_OBJECTIVE"))
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	}

	if (modifierHash2 != 0)
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash2);

	if (PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == ped && flag3 && !isPedInWrithe)
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	else
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));

	if (func_320(ped) && !isPedInWrithe)
	{
		if (blipHash == joaat("BLIP_STYLE_PLAYER_HORSE"))
			modifierHash3 = joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED");
		else if (blipHash == joaat("BLIP_STYLE_TEMPORARY_HORSE"))
			modifierHash3 = joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED");
	
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash3);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	}

	num2 = func_115(iParam0);
	hash = 0;

	if (iParam0 == 0)
	{
		switch (num2)
		{
			case 0:
				hash = joaat("blip_horse_owned_bonding_0");
				break;
		
			case 1:
				hash = joaat("blip_horse_owned_bonding_1");
				break;
		
			case 2:
				hash = joaat("blip_horse_owned_bonding_2");
				break;
		
			case 3:
				hash = joaat("blip_horse_owned_bonding_3");
				break;
		
			case 4:
				hash = joaat("blip_horse_owned_bonding_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (num2)
		{
			case 0:
				hash = joaat("blip_horse_temp_bonding_0");
				break;
		
			case 1:
				hash = joaat("blip_horse_temp_bonding_1");
				break;
		
			case 2:
				hash = joaat("blip_horse_temp_bonding_2");
				break;
		
			case 3:
				hash = joaat("blip_horse_temp_bonding_3");
				break;
		
			case 4:
				hash = joaat("blip_horse_temp_bonding_4");
				break;
		}
	}

	if (hash == 0)
	{
		MAP::_0x44813684F72B563C(ped, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(ped, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(ped, hash);
	}

	return;
}

void func_67() // Position - 0x3371 Hash - 0x7B1D3B73 ^0x69005C9D
{
	Object* p_object;
	BOOL flag;

	p_object = Global_1900383.f_393;

	if (!ENTITY::DOES_ENTITY_EXIST(p_object))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
			MAP::REMOVE_BLIP(&(Global_1900383.f_393.f_1));
	
		return;
	}

	if (Global_1935630.f_12)
		return;

	if (PED::IS_PED_INJURED(Global_35))
		return;

	flag = func_321(Global_35, p_object);

	if (flag)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
			MAP::REMOVE_BLIP(&(Global_1900383.f_393.f_1));
	}
	else if (func_213() == 3)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
			MAP::REMOVE_BLIP(&(Global_1900383.f_393.f_1));
	}
	else if (!MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
	{
		Global_1900383.f_393.f_1 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), p_object);
		func_316(&(Global_1900383.f_393.f_1));
	}

	return;
}

void func_68() // Position - 0x344F Hash - 0xE51126F9 ^0xE51126F9
{
	BOOL flag;
	int num;
	int num2;

	func_322(Global_1900383.f_432, Global_1900383.f_433);
	flag = false;
	num = Global_1900383.f_433;
	num = num + 1;

	if (num >= 2)
	{
		num = 0;
		flag = true;
	}

	Global_1900383.f_433 = num;

	if (flag)
	{
		num2 = Global_1900383.f_432;
		num2 = num2 + 1;
	
		if (num2 > 5)
			num2 = 0;
	
		Global_1900383.f_432 = num2;
	}

	return;
}

void func_69() // Position - 0x34B6 Hash - 0xD353F5FF ^0xD353F5FF
{
	BOOL flag;
	int num;
	int num2;

	func_323(Global_1900383.f_434, Global_1900383.f_435);
	flag = false;
	num = Global_1900383.f_435;
	num = num + 1;

	if (num >= 3)
	{
		num = 0;
		flag = true;
	}

	Global_1900383.f_435 = num;

	if (flag)
	{
		num2 = Global_1900383.f_434;
		num2 = num2 + 1;
	
		if (num2 > 5)
			num2 = 0;
	
		Global_1900383.f_434 = num2;
	}

	return;
}

void func_70() // Position - 0x351D Hash - 0x3FF6A438 ^0xA30089F8
{
	int num;

	if (PED::IS_PED_INJURED(Global_35))
		return;

	if (Global_16)
		return;

	if (func_34())
		return;

	switch (Global_1900383.f_317.f_1)
	{
		case 0:
			func_324(0);
			break;
	
		case 1:
			func_324(1);
			break;
	
		case 2:
			func_324(6);
			break;
	}

	num = Global_1900383.f_317.f_1;
	num = num + 1;

	if (num >= 3)
		num = 0;

	Global_1900383.f_317.f_1 = num;
	return;
}

BOOL func_71(int iParam0) // Position - 0x35A3 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_87(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_72(int iParam0) // Position - 0x35DB Hash - 0x79966B74 ^0xA532C902
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_73(int iParam0) // Position - 0x3609 Hash - 0xB0910AA9 ^0xD61D2BCE
{
	Ped ped;
	Hash entityModel;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_71(iParam0))
		return;

	ped = func_88(iParam0);
	func_325(iParam0);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);

	entityModel = ENTITY::GET_ENTITY_MODEL(ped);

	if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
		if (!func_208(entityModel))
			PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	PED::DELETE_PED(&ped);
	func_326(iParam0, 0);
	func_183(iParam0);
	return;
}

void func_74() // Position - 0x368D Hash - 0x7070C105 ^0xB183503F
{
	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1913814.f_202))
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1913814.f_202);

	func_327(128);
	func_328(6);
	return;
}

Hash func_75() // Position - 0x36B7 Hash - 0x7C303F17 ^0x62235659
{
	int num;

	num = joaat("p_cs_saddlebundle01x");
	return num;
}

BOOL func_76(int iParam0) // Position - 0x36C8 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1900383.f_316 && iParam0 != false;
}

BOOL func_77(int iParam0) // Position - 0x36DC Hash - 0x1F51B1A1 ^0x4CAE21ED
{
	if (iParam0 <= -1 || iParam0 >= 108)
		return 0;

	return Global_1913814.f_209[iParam0];
}

BOOL func_78(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x3704 Hash - 0x4B151EFD ^0xA82386D1
{
	int num;
	BOOL flag;

	num = 0;

	if (iParam2 < 1)
		iParam2 = 10;

	flag = false;
	*iParam1 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(hParam0);

	while (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*iParam1) && num < iParam2 && !flag)
	{
		num = num + 1;
		BUILTIN::WAIT(0);
	}

	if (flag)
		func_329();

	if (num >= iParam2)
	{
		num = 0;
		return false;
	}

	num = 0;
	return true;
}

void func_79(int iParam0) // Position - 0x376B Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

void func_80(int iParam0) // Position - 0x3784 Hash - 0xE71740F7 ^0x4D2998B
{
	if (iParam0 <= -1 || iParam0 >= 108)
		return;

	Global_1913814.f_209[iParam0] = 1;
	return;
}

struct<4> func_81() // Position - 0x37AC Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_330(false) };
	return func_331(856287005, unk, -218846335, false);
}

BOOL func_82(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x37D0 Hash - 0xB7A16C08 ^0x95A2653
{
	int i;
	var data;
	Hash outBundle;
	var unk5;
	int bundleItemCount;
	var unk9;

	if (iParam0 == 0)
		return false;

	data = 1;
	bundleItemCount = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &data);
	unk9 = { uParam1 };

	for (i = 0; i < bundleItemCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &data, i, &outBundle))
		{
			if (func_284(outBundle, 0))
			{
				unk9.f_4 = outBundle.f_1;
			
				if (func_332(outBundle, uParam1, unk9.f_4, false) > 0)
				{
				}
				else
				{
					func_333(&unk5);
				
					if (func_334(outBundle, &unk5, &unk9, 1, 752097756, true))
						if (bParam5)
							func_335(unk5, 1);
				}
			}
		}
	}

	return true;
}

BOOL func_83() // Position - 0x3870 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

int func_84(int iParam0) // Position - 0x3881 Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

int func_85(int iParam0) // Position - 0x38B4 Hash - 0x8E7120F ^0x8E7120F
{
	int num;
	Hash model;
	int i;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	num = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (i == -1)
		{
		}
		else if (i == 3)
		{
		}
		else
		{
			model = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[i /*94*/];
		
			if (model == 0)
			{
			}
			else if (!STREAMING::IS_MODEL_VALID(model))
			{
			}
			else if (!STREAMING::IS_MODEL_A_PED(model))
			{
			}
			else
			{
				num = num + 1;
			}
		}
	}

	return num;
}

void func_86(int iParam0) // Position - 0x393F Hash - 0x399E7ADF ^0xECC5619B
{
	Player playerIndex;
	Ped horse;
	BOOL flag;
	Vector3 vector;
	float num;
	ePedType model;
	int gameTimer;
	var unk3;
	BOOL flag2;
	float writhingDuration1;
	BOOL flag3;
	int num2;
	BOOL flag4;
	int num3;
	int num4;
	var unk61;
	var unk63;
	int num5;
	Hash hash;

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_173(iParam0, 1))
		return;

	if (func_336(iParam0))
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);
	horse = func_88(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(horse))
		flag = true;
	else
		flag = false;

	if (flag)
		if (ENTITY::IS_ENTITY_DEAD(horse) || PED::IS_PED_INJURED(horse))
			return;

	vector = { func_337(iParam0) };
	num = func_338(iParam0);

	if (_IS_NULL_VECTOR(vector))
		return;

	model = func_207(iParam0);
	STREAMING::REQUEST_COLLISION_FOR_MODEL(model);
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	gameTimer = MISC::GET_GAME_TIMER();

	if (!flag)
	{
		func_339(iParam0);
	
		if (!func_340())
			return;
	
		if (!func_341(iParam0))
			return;
	
		horse = func_342(model, vector, num, false, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(horse))
			return;
	
		func_326(iParam0, horse);
		func_343(horse);
		func_344(horse, iParam0);
		func_314(iParam0);
		PED::_EQUIP_META_PED_OUTFIT_PRESET(horse, 0, false);
		unk3 = 57;
		func_345(iParam0, &unk3);
		func_346(iParam0, &unk3);
		func_347(iParam0);
		func_348(iParam0);
	
		if (iParam0 == 0)
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse);
		else if (iParam0 == 1)
			flag2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse);
	
		if (func_97(iParam0))
		{
			writhingDuration1 = func_349(iParam0);
			PED::_SET_PED_WRITHING_DURATION(horse, writhingDuration1, writhingDuration1, 0);
			TASK::TASK_ANIMAL_WRITHE(horse, 0, 1);
		}
	
		func_200(iParam0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
		func_350(iParam0, gameTimer);
	}

	flag3 = false;

	if (!PED::IS_PED_READY_TO_RENDER(horse))
		flag3 = true;

	if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(horse))
	{
		num2 = func_351(iParam0) + 5000;
	
		if (num2 < gameTimer)
		{
		}
		else
		{
			flag3 = true;
		}
	}

	if (flag3)
		return;

	flag4 = false;
	num3 = func_201();

	if (iParam0 == num3)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(playerIndex, horse);
		flag4 = true;
	}

	if (flag4)
		PED::SET_PED_CONFIG_FLAG(horse, 186, false);
	else
		PED::SET_PED_CONFIG_FLAG(horse, 186, true);

	num4 = func_352(iParam0);
	func_353(horse, num4);
	unk61 = { func_354(iParam0) };

	if (flag4)
		unk63 = { func_355() };
	else
		func_356(&unk63);

	num5 = func_357(horse, 2);
	hash = func_358(num5);
	func_359(iParam0, hash);

	if (!flag4 && func_360(iParam0))
		func_361(horse, false);

	func_362(horse, &unk61, &unk63, hash);
	func_363(iParam0);
	func_315(iParam0);
	func_66(iParam0);
	func_364(iParam0);
	func_365(iParam0);
	func_366(iParam0);
	return;
}

int func_87(int iParam0) // Position - 0x3BD5 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

Ped func_88(int iParam0) // Position - 0x3BEE Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

float func_89(int iParam0) // Position - 0x3C1A Hash - 0x9BB7FBA3 ^0xA973C68A
{
	Ped model;
	int rank;
	int defaultMaxAttributeRank;
	float num;
	Any any;
	int rank2;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_207(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_115(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_115(iParam0) + 1;
	num2 = func_367(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_368(num, any, num7);
	return num8;
}

float func_90(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x3CD4 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_91() // Position - 0x3CF2 Hash - 0x39D8C828 ^0x53EA95BD
{
	if (!func_3(256))
		return false;

	if (Global_1879534)
		return false;

	if (func_369())
		return false;

	if (func_94() && !func_140(32))
		return false;

	if (func_76(2) || func_76(4))
		return false;

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		return false;

	if (Global_1935630.f_12)
		return false;

	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		return false;

	if (PED::IS_PED_HOGTIED(Global_35))
		return false;

	if (PED::IS_PED_SWIMMING(Global_35))
		return false;

	return true;
}

void func_92(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x3D9A Hash - 0x7EFE2FA5 ^0x9037FE6D
{
	BOOL flag;
	BOOL flag2;
	int gameTimer;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	Interior interiorFromEntity;
	float num;
	Ped ped;

	flag = false;

	if (uParam7.f_2)
		if (func_115(0) >= 1)
			flag = true;

	flag2 = false;

	if (uParam19.f_2)
		if (func_115(1) >= 1)
			flag2 = true;

	gameTimer = MISC::GET_GAME_TIMER();

	switch (func_370())
	{
		case 0:
			func_15(1);
			[[fallthrough]];
	
		case 1:
			func_371(0);
			func_372(-72209530);
			func_373(0, 0);
			func_373(1, 0);
			func_327(1);
			func_15(2);
			[[fallthrough]];
	
		case 2:
			if (!func_76(1))
				return;
		
			func_15(3);
			[[fallthrough]];
	
		case 3:
			func_374(gameTimer);
			func_327(1);
			func_15(4);
			[[fallthrough]];
	
		case 4:
			flag3 = false;
			flag4 = true;
			flag5 = 1;
		
			if (func_134() == 8)
			{
				if (!flag3)
				{
					if (!func_375())
						func_283(12, true);
				
					flag3 = true;
				}
			
				flag4 = false;
				flag5 = 0;
			}
		
			if (func_95(37) && !func_95(43))
			{
				if (!flag3)
				{
					if (!func_375())
						func_283(10, true);
				
					flag3 = true;
				}
			
				flag4 = false;
				flag5 = 0;
			}
		
			if (func_95(43) && !func_95(44))
			{
				if (func_84(0) == 1)
				{
					if (!flag3)
					{
						if (!func_375())
							func_283(10, true);
					
						flag3 = true;
					}
				
					flag4 = false;
				}
			
				if (uParam19.f_2)
					flag2;
			}
		
			if (func_376(5))
			{
				if (func_84(0) == 0 && func_84(1) == 0 || !flag2)
				{
					if (!flag3)
					{
						if (!func_375())
							func_377();
					
						flag3 = true;
					}
				
					flag4 = false;
					flag5 = 0;
				}
			}
		
			if (func_84(0) == 0 && func_84(1) == 0 || !flag2 && func_84(5) == 0)
			{
				if (!flag3)
				{
					if (!func_375())
						func_283(11, true);
				
					flag3 = true;
				}
			
				flag4 = false;
				flag5 = 0;
			}
		
			if (func_84(0) == 1 || func_84(1) == 1 && flag2)
			{
				interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
			
				if (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity))
				{
					if (!flag3)
					{
						if (func_378(interiorFromEntity))
							if (!func_375())
								func_283(14, true);
						else if (func_379(interiorFromEntity))
							if (!func_375())
								func_283(15, true);
						else if (!func_375())
							func_283(13, true);
					
						if (func_71(0))
						{
							num = func_89(0);
							ped = func_88(0);
						
							if (!func_380(0) && !func_223(0))
								if (func_187(Global_35, ped, true, true) <= num)
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(ped, Global_35, 0, -1082130432, -1082130432, -1082130432);
						}
					
						if (func_71(1))
						{
							num = func_89(1);
							ped = func_88(1);
						
							if (!func_380(1) && !func_223(1))
								if (func_187(Global_35, ped, true, true) <= num)
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(ped, Global_35, 0, -1082130432, -1082130432, -1082130432);
						}
					
						flag3 = true;
					}
				
					flag4 = false;
					flag5 = 0;
				}
			}
		
			if (func_76(16) || !func_140(32))
			{
				if (!flag3)
				{
					if (!func_375())
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1900383.f_378.f_12)))
							func_381(&(Global_1900383.f_378.f_12), 10000, 0, 0, 0, true);
				
					flag3 = true;
				}
			
				flag4 = false;
				flag5 = 0;
			}
		
			if (uParam7.f_2)
			{
				if (!flag)
				{
					if (!flag3)
					{
						if (!func_375())
							func_283(7, true);
					
						flag3 = true;
					}
				
					flag4 = false;
				}
			}
		
			if (uParam19.f_2)
			{
				if (!flag2)
				{
					if (!uParam7.f_2)
					{
						if (!flag3)
						{
							if (!func_375())
								func_283(7, true);
						
							flag3 = true;
						}
					}
				
					flag5 = 0;
				}
			}
		
			if (uParam7.f_2)
			{
				if (func_189(0))
				{
					if (!flag3)
					{
						if (!func_375())
							func_283(16, true);
					
						flag3 = true;
					}
				}
			}
		
			if (uParam19.f_2 && flag2)
			{
				if (func_189(1))
				{
					if (!uParam7.f_2)
					{
						if (!flag3)
						{
							if (!func_375())
								func_283(16, true);
						
							flag3 = true;
						}
					}
				}
			}
		
			PLAYER::_0x9044835BE9D9DBFE(anParam0, flag4 || flag5);
		
			if (!flag4)
			{
				if (uParam7.f_2)
				{
					func_66(0);
					func_382(0);
				}
			}
		
			if (!flag5)
			{
				if (uParam19.f_2)
				{
					func_66(1);
					func_382(1);
				}
			}
		
			if (!flag4 && !flag5)
			{
				func_15(1);
				return;
			}
		
			func_15(5);
			[[fallthrough]];
	
		case 5:
			if (func_95(43) && !func_95(44))
				func_373(0, 6);
			else
				func_383(0);
		
			func_383(1);
		
			if (func_384(0) == 6 && func_384(1) == 6)
				func_15(1);
			break;
	}

	return;
}

int func_93() // Position - 0x4251 Hash - 0x251C29A6 ^0x251C29A6
{
	if (func_76(2) || func_76(4))
	{
		func_327(2);
		func_327(4);
		return 1;
	}

	return 0;
}

BOOL func_94() // Position - 0x427B Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_95(int iParam0) // Position - 0x429A Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_135(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_96() // Position - 0x42F9 Hash - 0x463DA432 ^0x3948CA04
{
	return func_385(Global_1935630, 4096);
}

BOOL func_97(int iParam0) // Position - 0x430C Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420;
}

void func_98(int iParam0, var uParam1) // Position - 0x4340 Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_420 = uParam1;
	return;
}

void func_99(int iParam0) // Position - 0x4374 Hash - 0x44423EC0 ^0x30E46FC4
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_42 = 0;
	return;
}

int func_100(int iParam0) // Position - 0x43A1 Hash - 0x8CE2C9DC ^0xC2CEF3D7
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_1900383[iParam0 /*45*/].f_41;
}

void func_101(int iParam0, int iParam1) // Position - 0x43CF Hash - 0xDE428423 ^0xD55781B1
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_41 = iParam1;
	return;
}

void func_102(int iParam0, float fParam1) // Position - 0x43FD Hash - 0x378678AB ^0xB2BC5FB8
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_420.f_1 = fParam1;
	return;
}

BOOL func_103() // Position - 0x4433 Hash - 0x4228A1C2 ^0x341213A7
{
	return Global_1392040.f_6;
}

void func_104(int iParam0) // Position - 0x4441 Hash - 0xBFB1CF9D ^0x3BD5A611
{
	Player player;
	BOOL flag;

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);
	func_315(iParam0);

	if (func_194(56))
		func_195(56);

	if (func_196(56))
		func_197(56);

	if (func_194(57))
		func_195(57);

	if (func_196(57))
		func_197(57);

	flag = false;

	if (iParam0 == 0)
		flag = true;
	else if (iParam0 == 1 && func_84(0) == 0 && func_84(5) == 0)
		flag = true;

	if (flag)
		func_188(iParam0, 1);
	else
		func_202(iParam0, false);

	return;
}

void func_105(int iParam0) // Position - 0x44F3 Hash - 0xAAC317E0 ^0x1EC435C2
{
	BOOL flag;
	Ped ped;
	Hash entityModel;

	if (!func_336(iParam0))
		return;

	flag = false;

	if (func_71(iParam0))
		flag = true;

	if (flag)
	{
		ped = func_88(iParam0);
	
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	
		entityModel = ENTITY::GET_ENTITY_MODEL(ped);
	
		if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
			if (!func_208(entityModel))
				PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);
	
		if (func_173(iParam0, 4))
		{
			func_73(iParam0);
		}
		else if (func_173(iParam0, 8))
		{
			func_315(iParam0);
			func_386(iParam0);
			PED::SET_PED_KEEP_TASK(ped, true);
			TASK::TASK_SMART_FLEE_PED(ped, Global_35, 500f, -1, 0, 1f, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);
		}
		else if (func_173(iParam0, 2))
		{
			func_315(iParam0);
			func_386(iParam0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);
		}
	}

	if (func_173(iParam0, 16))
		func_203(iParam0);

	func_326(iParam0, 0);
	func_183(iParam0);
	func_366(iParam0);
	func_387(iParam0, 2);
	func_387(iParam0, 4);
	func_387(iParam0, 8);
	func_387(iParam0, 16);
	return;
}

void func_106() // Position - 0x4602 Hash - 0xE265E55B ^0x6903F649
{
	Global_1900383.f_404 = 0;
	Global_1900383.f_404.f_1 = { 0f, 0f, 0f };
	Global_1900383.f_404.f_4 = 0f;
	Global_1900383.f_404.f_5 = 0;
	Global_1900383.f_404.f_6 = 0;
	return;
}

BOOL func_107(Ped pedParam0) // Position - 0x463E Hash - 0x2A9A6B1 ^0xA3BCA0E3
{
	Hash entityModel;
	BOOL flag;
	var entityCoords;
	int gameTimer;
	int num;
	var unk3;
	Player player;

	if (func_76(1024))
		return false;

	if (!func_140(43))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	if (func_388(pedParam0))
		return false;

	if (func_389(pedParam0))
		return false;

	if (func_390(pedParam0))
		return false;

	if (func_391(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (func_392(entityModel))
		return false;

	if (func_393(entityModel))
		return false;

	flag = false;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (PED::GET_MOUNT(Global_35) == pedParam0)
			flag = true;
		else
			return false;

	if (flag)
	{
		if (pedParam0 != func_394())
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
			func_106();
			func_395(pedParam0);
			func_110(entityCoords);
		}
	
		gameTimer = MISC::GET_GAME_TIMER();
		num = func_396();
	
		if (num == 0)
		{
			func_397(gameTimer);
			return false;
		}
	
		if (num + 2000 > gameTimer)
			return false;
	}
	else
	{
		func_397(0);
	}

	if (func_398(pedParam0, &unk3, 100f))
		return false;

	player = PLAYER::PLAYER_ID();

	if (func_399(player, true, false, true))
		return false;

	LAW::_ARE_WITNESSES_PENDING(player);

	if (LAW::ARE_WITNESSES_ACTIVE(player))
		return false;

	if (LAW::_ARE_INVESTIGATORS_ACTIVE(player, true, 0))
		return false;

	if (!func_400(pedParam0))
		return false;

	return true;
}

BOOL func_108() // Position - 0x47CC Hash - 0x8190E5D8 ^0xF593603
{
	return Global_1900383.f_404.f_5;
}

Vector3 func_109() // Position - 0x47DD Hash - 0xAB07A84 ^0xD79DB24C
{
	return Global_1900383.f_404.f_1;
}

void func_110(var uParam0, var uParam1, var uParam2) // Position - 0x47F0 Hash - 0x2E53663A ^0x74D41E9F
{
	Global_1900383.f_404.f_1 = { uParam0 };
	return;
}

float func_111() // Position - 0x4807 Hash - 0x8190E5D8 ^0x856627E0
{
	return Global_1900383.f_404.f_4;
}

void func_112(float fParam0) // Position - 0x4818 Hash - 0xC421D95B ^0x2F16990E
{
	Global_1900383.f_404.f_4 = fParam0;
	return;
}

void func_113(int iParam0) // Position - 0x482B Hash - 0xC421D95B ^0xE7B505B3
{
	Global_1900383.f_404.f_5 = iParam0;
	return;
}

int func_114(Ped pedParam0) // Position - 0x483E Hash - 0x2A9A6B1 ^0xA3BCA0E3
{
	BOOL flag;

	if (func_76(1024))
		return 0;

	if (!func_140(43))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return 0;

	if (func_388(pedParam0))
		if (func_401(pedParam0) != 6)
			return 0;

	if (func_402(pedParam0) > 0)
	{
		flag = false;
	
		if (func_388(pedParam0))
			if (func_401(pedParam0) == 6)
				flag = true;
	
		if (flag)
			func_116(6, 1);
		else
			func_403(pedParam0);
	
		func_106();
		func_404();
		return 1;
	}
	else
	{
		if (!func_107(pedParam0))
			return 0;
	
		func_405(pedParam0, false);
		func_106();
		func_404();
		return 1;
	}

	return 0;
}

int func_115(int iParam0) // Position - 0x4916 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_116(int iParam0, int iParam1) // Position - 0x494A Hash - 0x7A45E039 ^0xE802421E
{
	Player playerIndex;
	Ped horse;
	BOOL flag;
	Ped horse2;
	BOOL flag2;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);
	func_315(iParam0);
	func_315(iParam0);
	func_406(iParam0, iParam1);
	func_407(iParam0, iParam1);
	func_408(iParam0, iParam1);
	horse = func_88(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(horse))
	{
		if (iParam0 == 0 || iParam0 == 1)
			func_343(horse);
	
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse);
		}
		else if (iParam0 == 1)
		{
			flag = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == horse)
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);
		
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(playerIndex) == horse)
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);
		}
	}

	horse2 = func_88(iParam1);

	if (ENTITY::DOES_ENTITY_EXIST(horse2))
	{
		if (iParam1 == 0 || iParam1 == 1)
			func_343(horse2);
	
		if (iParam1 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse2);
		}
		else if (iParam1 == 1)
		{
			flag2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse2);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == horse2)
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);
		
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(playerIndex) == horse2)
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);
		}
	}

	func_404();
	return;
}

BOOL func_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, BOOL bParam8) // Position - 0x4A6C Hash - 0xDC98E36F ^0x665AD3E8
{
	BOOL flag;
	BOOL flag2;
	Ped activeAnimalOwner;

	if (!uParam0.f_2)
		return false;

	if (!uParam0.f_3)
		return false;

	if (uParam0.f_4)
		return false;

	if (bParam8)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
			return false;
	
		*uParam7 = PED::GET_MOUNT(Global_35);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam7))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(*uParam7))
		return false;

	if (PED::IS_PED_INJURED(*uParam7))
		return false;

	if (TASK::IS_PED_IN_WRITHE(*uParam7))
		return false;

	if (func_388(*uParam7))
		return false;

	if (func_389(*uParam7))
		return false;

	if (func_409(*uParam7))
		return false;

	if (func_410(*uParam7))
		return false;

	if (func_391(*uParam7))
		return false;

	if (func_390(*uParam7))
		return false;

	if (func_411(*uParam7))
		return false;

	flag = func_412();
	flag2 = 0;
	activeAnimalOwner = PED::_GET_ACTIVE_ANIMAL_OWNER(*uParam7);

	if (ENTITY::DOES_ENTITY_EXIST(activeAnimalOwner))
		if (!ENTITY::IS_ENTITY_DEAD(activeAnimalOwner))
			flag2 = 1;

	if (flag || flag2)
	{
	}
	else
	{
		return false;
	}

	return true;
}

void func_118() // Position - 0x4B8D Hash - 0x971B1003 ^0x502793D
{
	Global_1900383.f_414 = 0;
	Global_1900383.f_414.f_1 = 0;
	return;
}

void func_119(Ped pedParam0) // Position - 0x4BA7 Hash - 0x476072F7 ^0xBA974749
{
	char* propertyName;
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (func_391(pedParam0))
		return;

	propertyName = "bHorseHasBeenStolen";
	flag = false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
	{
		DECORATOR::DECOR_SET_BOOL(pedParam0, propertyName, true);
		flag = true;
	}
	else if (!DECORATOR::DECOR_GET_BOOL(pedParam0, propertyName))
	{
		DECORATOR::DECOR_SET_BOOL(pedParam0, propertyName, true);
		flag = true;
	}

	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 6, true))
		flag = false;

	if (flag)
		func_413(pedParam0);

	return;
}

int func_120() // Position - 0x4C37 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1900372;
}

void func_121() // Position - 0x4C43 Hash - 0xBA80F08C ^0x50DA1FAD
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_414(false);
	Global_1935689.f_6 = 1;
	return;
}

void func_122() // Position - 0x4C62 Hash - 0xFDEF8628 ^0xFDEF8628
{
	func_415(false);
	func_416(1);
	return;
}

void func_123() // Position - 0x4C74 Hash - 0x9A7372DC ^0xEAABD221
{
	Ped ped;
	var unk;

	if (!func_417())
		return;

	ped = func_418();
	unk = func_419();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		func_416(7);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(ped))
	{
		func_416(7);
		return;
	}

	if (PED::IS_PED_INJURED(ped))
	{
		func_416(7);
		return;
	}

	if (TASK::IS_PED_IN_WRITHE(ped))
	{
		func_416(7);
		return;
	}

	if (!func_420(unk))
	{
		func_416(7);
		return;
	}

	func_416(2);
	return;
}

void func_124() // Position - 0x4CEF Hash - 0x26D4CDB5 ^0x6515716C
{
	Ped mount;
	Ped riderOfMount;

	mount = func_418();

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
	{
		func_416(7);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(mount))
	{
		func_416(7);
		return;
	}

	if (PED::IS_PED_INJURED(mount))
	{
		func_416(7);
		return;
	}

	if (TASK::IS_PED_IN_WRITHE(mount))
	{
		func_416(7);
		return;
	}

	riderOfMount = PED::_GET_RIDER_OF_MOUNT(mount, false);

	if (riderOfMount != 0)
	{
		if (riderOfMount != Global_35)
		{
			func_416(7);
			return;
		}
	}

	if (PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(mount) != 0)
	{
		func_416(7);
		return;
	}

	if (!func_421())
	{
		func_416(7);
		return;
	}

	func_416(3);
	return;
}

void func_125() // Position - 0x4D88 Hash - 0x72A39060 ^0x37450597
{
	Ped ped;
	Hash hash;

	ped = func_418();
	hash = func_419();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		func_416(7);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(ped))
	{
		func_416(7);
		return;
	}

	if (PED::IS_PED_INJURED(ped))
	{
		func_416(7);
		return;
	}

	if (TASK::IS_PED_IN_WRITHE(ped))
	{
		func_416(7);
		return;
	}

	if (func_422(ped, hash))
	{
		func_423(MISC::GET_GAME_TIMER());
		func_416(4);
	}

	return;
}

void func_126() // Position - 0x4DF9 Hash - 0x72A39060 ^0x37450597
{
	Ped ped;
	Hash hash;
	BOOL flag;
	int gameTimer;
	int num;

	ped = func_418();
	hash = func_419();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		func_416(7);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(ped))
	{
		func_416(7);
		return;
	}

	if (PED::IS_PED_INJURED(ped))
	{
		func_416(7);
		return;
	}

	if (TASK::IS_PED_IN_WRITHE(ped))
	{
		func_416(7);
		return;
	}

	flag = false;

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
		flag = true;
	else if (func_424() + 500 < MISC::GET_GAME_TIMER())
		flag = true;

	if (flag)
	{
		gameTimer = MISC::GET_GAME_TIMER();
		func_423(gameTimer);
		func_425(gameTimer);
		func_416(5);
	
		if (hash == joaat("kit_horse_brush"))
		{
			func_426(ped);
			num = func_357(ped, 0);
			func_427(num);
			func_428(0);
		}
		else
		{
			func_426(0);
			func_427(0);
			func_428(0);
		}
	}

	return;
}

void func_127() // Position - 0x4EC8 Hash - 0x72A39060 ^0x37450597
{
	Ped ped;
	Hash hash;
	BOOL flag;

	ped = func_418();
	hash = func_419();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		func_416(7);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(ped))
	{
		func_416(7);
		return;
	}

	if (PED::IS_PED_INJURED(ped))
	{
		func_416(7);
		return;
	}

	if (TASK::IS_PED_IN_WRITHE(ped))
	{
		func_416(7);
		return;
	}

	flag = false;

	if (!PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
		if (func_424() + 500 < MISC::GET_GAME_TIMER())
			flag = true;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("INTERACT")))
	{
		func_429(1);
		flag = true;
	}

	if (flag)
	{
		if (func_430())
		{
			if (func_431(hash, 1147021565))
				func_432(hash, 1, false, 562618531, false);
		
			func_433(ped, hash);
		}
		else
		{
			func_416(7);
			return;
		}
	
		func_423(MISC::GET_GAME_TIMER());
		func_416(6);
	}

	return;
}

void func_128() // Position - 0x4FA0 Hash - 0x532E420 ^0xDF2EACB3
{
	BOOL flag;

	flag = false;

	if (!PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
		if (func_424() + 500 < MISC::GET_GAME_TIMER())
			flag = true;

	if (func_434())
		flag = true;

	if (func_430())
		flag = true;

	if (flag)
		func_416(7);

	return;
}

void func_129() // Position - 0x4FE5 Hash - 0x1309574 ^0x372DC1F1
{
	func_415(false);
	func_416(0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return;
}

void func_130() // Position - 0x4FFB Hash - 0x9DDAFD6A ^0xCB72BDAD
{
	Ped horse;
	BOOL hasAnimEventFired;
	BOOL flag;
	int num;
	int num2;
	int num3;

	horse = func_435();

	if (!ENTITY::DOES_ENTITY_EXIST(horse))
		return;

	ENTITY::IS_ENTITY_DEAD(horse);

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	hasAnimEventFired = ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1120483657);

	if (hasAnimEventFired)
		if (!func_436())
			func_428(1);

	if (!func_436())
		return;

	flag = false;

	if (func_388(horse))
	{
		num = func_401(horse);
		num2 = func_437(num, 0);
	
		if (num2 > 0)
		{
			func_438(num, 0, -1);
			flag = true;
		}
	}
	else
	{
		num3 = func_357(horse, 0);
	
		if (num3 > 0)
		{
			func_439(horse, 0, -1);
			flag = true;
		}
	}

	if (flag)
		PED::_0xE29D8CD66553DBAA(horse);

	if (func_357(horse, 0) == 0)
	{
		func_426(0);
		func_428(0);
	}

	return;
}

BOOL func_131(int iParam0) // Position - 0x50CD Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_84(iParam0) == 0)
		return false;

	return true;
}

void func_132(BOOL bParam0) // Position - 0x5100 Hash - 0x313A22F3 ^0x10AA28A3
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_23, bParam0);
	return;
}

BOOL func_133() // Position - 0x5118 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_443;
}

int func_134() // Position - 0x5127 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

BOOL func_135(int iParam0, BOOL bParam1) // Position - 0x5135 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_440(iParam0))
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

int func_136(int iParam0, var uParam1, var uParam2) // Position - 0x5166 Hash - 0xE90F7C50 ^0xEB94CF19
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	*uParam1 = { Global_40.f_1095.f_1[iParam0 /*436*/].f_427 };
	*uParam2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_430;
	return 1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x51B4 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_138() // Position - 0x51DE Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_1900383.f_443 = 0;
	return;
}

Ped func_139(var uParam0, var uParam1) // Position - 0x51EE Hash - 0x6747FB46 ^0x33F721B4
{
	BOOL flag;
	int num;
	Ped mount;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Player player;
	Ped saddleHorseForPlayer;
	var unk;
	var unk3;
	int num2;
	int idOfThisThread;

	uParam1->f_10 = func_87(uParam1->f_10);

	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}

	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}

	if (*uParam1)
		_IS_NULL_VECTOR(uParam1->f_6);

	flag = func_94();

	if (*uParam1)
	{
		if (flag && !func_135(Global_1835011[4 /*74*/].f_1, true))
		{
			if (func_131(5))
			{
				func_73(5);
				func_203(5);
				func_217(0);
				func_214(0);
			}
		}
	}

	if (func_441(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_135(Global_1835011[37 /*74*/].f_1, true) && !func_135(Global_1835011[43 /*74*/].f_1, true))
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_135(Global_1835011[43 /*74*/].f_1, true) && !func_135(Global_1835011[44 /*74*/].f_1, true))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}

	num = uParam1->f_10;
	mount = func_88(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_71(num))
	{
		flag2 = true;
	
		if (func_380(num))
			flag3 = true;
	
		if (func_442(num))
			flag4 = true;
	}

	if (*uParam1)
	{
		if (flag2)
		{
			if (flag4 && !uParam1->f_5)
			{
				func_443(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (*uParam1)
	{
		if (flag2)
		{
			if (flag3)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_131(0) && func_131(1))
			{
				func_116(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_210())
				func_444();
		
			func_217(0);
			func_214(0);
			func_215(uParam1->f_6);
		}
	}

	if (!func_71(uParam1->f_10))
	{
		if (*uParam1)
		{
			if (func_207(uParam1->f_10) == 0 || func_445(uParam1->f_10) == 0 || func_84(uParam1->f_10) == 0)
				func_446(uParam1->f_10);
		
			func_447(uParam1->f_10);
			func_448(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
	
		*uParam0 = 1;
		return 0;
	}

	num = uParam1->f_10;
	mount = func_88(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_71(num))
	{
		flag2 = true;
	
		if (func_380(num))
			flag3 = true;
	
		if (func_442(num))
			flag4 = true;
	}

	if (uParam1->f_2)
	{
		if (flag2)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(mount))
				ENTITY::FREEZE_ENTITY_POSITION(mount, false);
		
			if (!_IS_NULL_VECTOR(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(mount, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(mount, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(mount, false);
			}
		}
	}

	if (func_165(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}

	if (flag2)
	{
		if (flag3)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
		
			*uParam0 = 1;
			return 0;
		}
	}

	if (flag2)
	{
		if (flag4 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
		
			*uParam0 = 1;
			return 0;
		}
	}

	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(mount))
			{
				*uParam0 = 0;
				return 0;
			}
		
			player = PLAYER::PLAYER_ID();
			saddleHorseForPlayer = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(player);
		
			if (ENTITY::DOES_ENTITY_EXIST(saddleHorseForPlayer))
				if (saddleHorseForPlayer != mount)
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, 0);
		
			unk = { func_354(uParam1->f_10) };
			unk3 = { func_355() };
			func_362(mount, &unk, &unk3, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, mount);
			PED::SET_PED_CONFIG_FLAG(mount, 186, false);
		}
	}

	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return mount;
	}

	if (!func_72(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
		func_449(uParam1->f_10);
	
		if (uParam1->f_2 && !_IS_NULL_VECTOR(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(mount, false);
			PHYSICS::_UNHITCH_HORSE(mount);
			ENTITY::SET_ENTITY_COORDS(mount, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(mount, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(mount, false);
		}
	
		*uParam0 = 2;
		return mount;
	}

	func_450(uParam1->f_10);

	if (func_72(uParam1->f_10))
	{
		num2 = func_181(uParam1->f_10);
		idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	
		if (num2 != idOfThisThread)
		{
			*uParam0 = 1;
			return 0;
		}
	}

	*uParam0 = 2;
	return mount;
}

BOOL func_140(int iParam0) // Position - 0x5663 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_451(iParam0))
		return false;

	return func_452(iParam0);
}

void func_141(int iParam0) // Position - 0x567F Hash - 0x210748D ^0x425151D2
{
	Ped ped;
	Ped mount;
	float entitySpeed;
	BOOL flag;
	BOOL flag2;
	float num;
	float pedStamina;
	int gameTimer;

	ped = func_207(iParam0);

	if (func_115(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ped, 7))
		return;

	mount = func_88(iParam0);
	entitySpeed = ENTITY::GET_ENTITY_SPEED(mount);
	flag = false;

	if (PED::_GET_RIDER_OF_MOUNT(mount, false) != Global_35)
		flag = true;

	flag2 = false;

	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		flag2 = true;

	if (entitySpeed < 0.5f || flag || !flag2)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iParam0 /*5*/] = -1;
		return;
	}

	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 >= 100f)
	{
		func_453(1, 100f);
		num = Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 - 100f;
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = num;
	}

	pedStamina = PED::_GET_PED_STAMINA(mount);

	if (pedStamina < 1f)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iParam0 /*5*/] = -1;
		return;
	}

	if (entitySpeed > 0.5f && entitySpeed <= 4f)
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1)
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 0;

	if (entitySpeed > 4f && entitySpeed <= 6f)
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 0)
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 1;

	if (entitySpeed > 6f)
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 0 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 1)
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 2;

	if (entitySpeed > 10f)
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 0 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 1 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 2)
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 3;

	if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1)
		return;

	gameTimer = MISC::GET_GAME_TIMER();

	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 == -1)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = gameTimer;
		return;
	}

	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 + 5000 < gameTimer)
	{
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == 0 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 1)
			func_454(iParam0, 1);
		else if (Global_1900383.f_317.f_2[iParam0 /*5*/] == 2)
			func_454(iParam0, 2);
		else if (Global_1900383.f_317.f_2[iParam0 /*5*/] == 3)
			func_454(iParam0, 3);
	
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iParam0 /*5*/] = -1;
	}

	return;
}

void func_142(int iParam0) // Position - 0x599A Hash - 0x5C9D3FA3 ^0xD9826AF3
{
	Ped ped;
	Ped ped2;
	float entitySpeed;
	BOOL flag;
	float num;
	int gameTimer;

	ped = func_207(iParam0);

	if (func_115(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ped, 7))
		return;

	ped2 = func_88(iParam0);
	entitySpeed = ENTITY::GET_ENTITY_SPEED(ped2);
	flag = false;

	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		flag = true;

	if (!TASK::_IS_PED_LEADING_HORSE(Global_35) || TASK::_GET_LED_HORSE_FROM_PED(Global_35) != ped2 || entitySpeed < 0.5f || !flag)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 = -1;
		return;
	}

	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 >= 20f)
	{
		func_453(4, 20f);
		num = Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 - 20f;
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 = num;
	}

	gameTimer = MISC::GET_GAME_TIMER();

	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 == -1)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 = gameTimer;
		return;
	}

	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 + 5000 < gameTimer)
	{
		func_454(iParam0, 4);
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 = -1;
	}

	return;
}

void func_143(int iParam0) // Position - 0x5AC8 Hash - 0x783FC7E2 ^0x2D9CF9B6
{
	Ped ped;
	Ped mount;
	BOOL flag;
	Entity lassoTarget;
	BOOL flag2;

	ped = func_207(iParam0);

	if (func_115(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ped, 7))
		return;

	mount = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return;

	flag = PED::_GET_RIDER_OF_MOUNT(mount, false) == Global_35;

	if (!flag)
		return;

	lassoTarget = PED::_GET_LASSO_TARGET(Global_35);

	if (!ENTITY::DOES_ENTITY_EXIST(lassoTarget))
		return;

	if (DECORATOR::DECOR_EXIST_ON(lassoTarget, "bHasBeenLassoedFromHorse"))
		return;

	flag2 = func_455(lassoTarget, Global_35);
	flag2;
	DECORATOR::DECOR_SET_BOOL(lassoTarget, "bHasBeenLassoedFromHorse", true);
	return;
}

void func_144(int iParam0) // Position - 0x5B70 Hash - 0xC9987915 ^0x1747765C
{
	struct<2> eventData;
	Ped entity2;
	Ped pedIndexFromEntityIndex;
	Ped entity1;
	BOOL flag;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 2))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	if (func_456(eventData.f_1))
		return;

	if (eventData.f_1 == Global_35)
		return;

	entity2 = Global_1935630.f_40;

	if (PED::IS_PED_INJURED(entity2))
		return;

	func_388(entity2);

	if (ENTITY::IS_ENTITY_A_PED(eventData))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);
	
		if (!(pedIndexFromEntityIndex == entity2))
			return;
	}
	else
	{
		return;
	}

	entity1 = eventData.f_1;

	if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(entity1, entity2, true, true))
		return;

	if (!PED::IS_PED_HUMAN(entity1))
		return;

	if (DECORATOR::DECOR_EXIST_ON(entity1, "bHasBeenTrampledByHorse"))
		return;

	flag = func_455(entity1, Global_35);

	if (flag)
	{
		if (func_457(entity1, joaat("honor_event_trampled_innocent")))
			func_243(0, joaat("honor_event_trampled_innocent"), 0, 0, entity1, false, 1065353216, false);
	}
	else if (func_456(entity1))
	{
	}
	else if (!func_458(entity1, joaat("honor_event_trampled_innocent")))
	{
		func_243(0, joaat("honor_event_trampled_innocent"), 0, 0, entity1, false, 1065353216, false);
	}

	DECORATOR::DECOR_SET_BOOL(entity1, "bHasBeenTrampledByHorse", true);
	return;
}

void func_145(int iParam0) // Position - 0x5CA6 Hash - 0xC3A5854A ^0xF996A025
{
	Entity eventData;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData))
		return;

	if (!func_388(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData)))
		return;

	func_459();
	return;
}

void func_146(int iParam0) // Position - 0x5CEE Hash - 0xCA823F4B ^0x4F0C26CC
{
	struct<9> eventData;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;
	int num;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 9))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData.f_1))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);
	pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);

	if (!func_388(pedIndexFromEntityIndex2))
		return;

	if (pedIndexFromEntityIndex == Global_35)
	{
		num = func_401(pedIndexFromEntityIndex2);
		num != -1 && eventData.f_2 != 0 && eventData.f_4 > 5f;
	}

	return;
}

void func_147(int iParam0) // Position - 0x5D8C Hash - 0x4725083A ^0x7E8F35D0
{
	struct<9> eventData;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 9))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData.f_1))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);
	pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(pedIndexFromEntityIndex))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex2))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(pedIndexFromEntityIndex2))
		return;

	if (func_388(pedIndexFromEntityIndex2))
		return;

	if (pedIndexFromEntityIndex != Global_35)
		return;

	func_460(pedIndexFromEntityIndex2, eventData.f_2, eventData.f_3);
	return;
}

void func_148(int iParam0) // Position - 0x5E3A Hash - 0x3410C012 ^0x19D69A03
{
	Global_1359489.f_16 = Global_1359489.f_16 || iParam0;
	return;
}

void func_149(int iParam0) // Position - 0x5E51 Hash - 0x71AC5C8A ^0xBA962FDA
{
	struct<3> eventData;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;
	Ped pedIndexFromEntityIndex3;
	int num;
	Ped ped;
	int defaultMaxAttributeRank;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 3))
		return;

	!ENTITY::DOES_ENTITY_EXIST(Global_35);

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return;

	pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex2))
		return;

	if (pedIndexFromEntityIndex2 != Global_35)
		return;

	if (ENTITY::IS_ENTITY_A_PED(eventData.f_2))
	{
		pedIndexFromEntityIndex3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_2);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex3))
		{
			if (ENTITY::GET_IS_ANIMAL(pedIndexFromEntityIndex3) && ENTITY::_GET_IS_PREDATOR(pedIndexFromEntityIndex3))
			{
				if (func_388(pedIndexFromEntityIndex))
				{
					num = func_401(pedIndexFromEntityIndex);
					ped = func_207(num);
					defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ped, 7);
				
					if (func_115(num) < defaultMaxAttributeRank)
						func_283(37, false);
				
					func_192(num, 1);
					func_193(num, MISC::GET_GAME_TIMER());
				}
			}
		}
	}

	return;
}

void func_150(int iParam0) // Position - 0x5F3D Hash - 0x99F4BEED ^0x1CCB0DC6
{
	struct<6> eventData;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 6))
		return;

	!ENTITY::DOES_ENTITY_EXIST(Global_35);

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return;

	pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex2))
		return;

	if (pedIndexFromEntityIndex2 != Global_35)
		return;

	return;
}

void func_151(int iParam0) // Position - 0x5FB2 Hash - 0xF326637E ^0x5F72DCF1
{
	struct<3> eventData;
	Ped pedIndexFromEntityIndex;
	int num;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 3))
		return;

	if (ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData))
		return;

	if (ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData.f_1))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);
	num = eventData.f_2;

	if (pedIndexFromEntityIndex != Global_35)
		return;

	switch (num)
	{
		case joaat("Interaction_PositiveLong"):
		case joaat("Interaction_PositiveShort"):
			break;
	
		case joaat("Interaction_Complete"):
			num == joaat("Interaction_Brush");
			func_461(1);
			break;
	
		case joaat("Interaction_Cancel"):
			break;
	}

	return;
}

void func_152(int iParam0) // Position - 0x6052 Hash - 0x176B821E ^0xB9876F11
{
	struct<4> eventData;
	Ped ped;
	Ped ped2;
	int num;
	var unk4;
	var entityCoords;
	float num2;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 4))
		return;

	if (PED::IS_PED_INJURED(Global_35))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	ped = eventData;
	ped2 = eventData.f_1;

	if (ped != Global_35)
		return;

	if (!func_388(ped2))
		return;

	num = func_401(ped2);
	unk4 = { func_245(num) };
	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped2, true, false) };

	if (!eventData.f_2)
	{
		func_462(num, entityCoords);
		func_248(num, entityCoords);
		func_249(num, 0f);
		return;
	}

	if (eventData.f_3 == 0)
		return;

	if (!_IS_NULL_VECTOR(unk4))
	{
		num2 = func_247(num);
	
		if (num2 < 200f)
		{
			func_462(num, entityCoords);
			func_454(num, 12);
			return;
		}
	}

	func_454(num, 11);
	func_462(num, entityCoords);
	func_248(num, entityCoords);
	func_249(num, 0f);
	func_114(ped2);

	if (func_205(44))
		return;

	if (!func_140(40))
		return;

	if (!func_280())
		return;

	func_283(44, false);
	return;
}

void func_153(int iParam0) // Position - 0x618E Hash - 0x63CACF21 ^0xAFB6B47E
{
	struct<5> eventData;
	Ped pedIndexFromEntityIndex;
	Player playerIndex;
	Ped pedIndexFromEntityIndex2;
	eBlipSprite sprite;
	BOOL isEntityDead;
	Object* p_object;
	int num;
	var unk5;
	var unk7;
	Player player;
	BOOL flag;
	Ped horse;
	Ped horse2;
	BOOL flag2;
	Object* p_object2;
	var unk19;
	var unk21;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 5))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);

	if (pedIndexFromEntityIndex != Global_35)
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);

	switch (eventData.f_2)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			if (!eventData.f_4)
				func_463();
			break;
	
		case 4:
			break;
	
		case 5:
			if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex2))
				return;
		
			if (Global_1900383.f_442)
			{
				sprite = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
				MAP::BLIP_ADD_MODIFIER(sprite, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
				func_464(41, sprite, true);
			}
		
			func_454(0, 5);
			break;
	}

	if (eventData.f_4 && func_465(eventData.f_2))
	{
		if (eventData.f_3 == 0)
			return;
	
		PED::SET_PED_CONFIG_FLAG(pedIndexFromEntityIndex2, 186, true);
		isEntityDead = ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex2);
	
		if (isEntityDead)
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == pedIndexFromEntityIndex2)
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);
		
			PERSISTENCE::_0xE225CEF1901F6108(pedIndexFromEntityIndex2, 0);
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(pedIndexFromEntityIndex2, 1f);
		}
	
		func_466(eventData.f_3);
		p_object = func_211();
	
		if (ENTITY::DOES_ENTITY_EXIST(p_object))
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(p_object))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(p_object, true, false);
	
		num = func_401(pedIndexFromEntityIndex2);
		func_467(num);
		unk5 = { func_354(num) };
		func_356(&unk7);
		func_468(pedIndexFromEntityIndex2);
		func_362(pedIndexFromEntityIndex2, &unk5, &unk7, 0);
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(playerIndex, 0);
		func_217(-1);
		func_214(1);
		func_469(num, 0);
	
		if (!func_470(num, 5))
			func_472(num, 5, func_471(5));
	
		func_315(num);
		func_404();
		func_473(pedIndexFromEntityIndex2);
	}

	if (eventData.f_4 && func_474(eventData.f_2))
	{
		if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex2))
			return;
	
		func_315(0);
		func_315(1);
		func_315(5);
	
		if (func_84(0) == 1)
			if (!func_71(0))
				func_203(0);
	
		player.f_1 = 1;
		player.f_5 = 0;
		player.f_3 = 1;
		player.f_2 = 1;
		player.f_4 = 0;
		player.f_6 = 0;
		player = PLAYER::PLAYER_ID();
	
		if (func_117(player, &pedIndexFromEntityIndex2, false))
		{
			func_119(pedIndexFromEntityIndex2);
			func_118();
		}
	
		Global_1900383.f_442 = 0;
	
		if (func_388(pedIndexFromEntityIndex2))
		{
			if (pedIndexFromEntityIndex2 == func_88(0))
			{
			}
			else if (pedIndexFromEntityIndex2 == func_88(1))
			{
				func_116(1, 0);
				Global_1900383.f_442 = 1;
			}
			else if (pedIndexFromEntityIndex2 == func_88(6))
			{
				flag = false;
			
				if (!flag)
				{
					if (func_131(0) && func_131(1))
					{
						func_116(0, 1);
						func_116(0, 6);
						flag = true;
					}
				}
			
				if (!flag)
				{
					if (func_131(0) && !func_131(1))
					{
						func_116(0, 1);
						func_116(0, 6);
						flag = true;
					}
				}
			
				if (!flag)
				{
					if (!func_131(0))
					{
						func_116(0, 6);
						flag = true;
					}
				}
			
				Global_1900383.f_442 = 1;
			}
		}
		else
		{
			if (func_131(0))
			{
				if (func_131(1))
				{
					if (func_131(6))
					{
						func_202(6, false);
						func_203(6);
					}
				
					func_116(1, 6);
				}
			
				func_116(0, 1);
			}
		
			func_475(pedIndexFromEntityIndex2);
			Global_1900383.f_442 = 1;
		}
	
		func_343(pedIndexFromEntityIndex2);
	
		if (func_71(0))
		{
			horse = func_88(0);
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse);
		}
	
		if (func_71(1))
		{
			horse2 = func_88(1);
			flag2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse2);
		}
		else
		{
			PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);
		}
	
		p_object2 = func_211();
	
		if (ENTITY::DOES_ENTITY_EXIST(p_object2))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(p_object2))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(p_object2, false, true);
		
			OBJECT::DELETE_OBJECT(&p_object2);
		}
	
		func_466(0);
		func_476(pedIndexFromEntityIndex2);
		func_477(pedIndexFromEntityIndex2);
	
		if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(pedIndexFromEntityIndex2, 9))
			ENTITY::_SET_ENTITY_CARRYING_FLAG(pedIndexFromEntityIndex2, 9, true);
	
		PED::SET_PED_CONFIG_FLAG(pedIndexFromEntityIndex2, 186, false);
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(playerIndex, pedIndexFromEntityIndex2);
		func_217(0);
		func_214(0);
		func_469(0, 0);
		unk19 = { func_354(0) };
		unk21 = { func_355() };
		func_362(pedIndexFromEntityIndex2, &unk19, &unk21, 0);
		func_478(0);
		func_404();
		func_479();
	}

	return;
}

void func_154(int iParam0) // Position - 0x65B7 Hash - 0xFBFC9FE ^0x5445C00
{
	struct<4> eventData;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;
	int num;
	BOOL flag;
	float num2;
	BOOL flag2;
	Ped entityModel;
	Vehicle vehicleDraftHorseIsAttachedTo;
	BOOL flag3;
	int gameTimer;
	int num3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	int num4;
	int num5;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 4))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);
	pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);
	num = eventData.f_2;
	flag = eventData.f_3;

	if (pedIndexFromEntityIndex != Global_35)
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex) || PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex2) || PED::IS_PED_INJURED(pedIndexFromEntityIndex2))
		return;

	num2 = func_190(pedIndexFromEntityIndex2);
	flag2 = false;

	if (num2 == 0f)
		flag2 = true;

	if (func_389(pedIndexFromEntityIndex2))
		return;

	if (func_391(pedIndexFromEntityIndex2))
		return;

	if (func_390(pedIndexFromEntityIndex2))
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex2);

	if (func_392(entityModel) || func_393(entityModel))
		return;

	vehicleDraftHorseIsAttachedTo = PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(pedIndexFromEntityIndex2);

	if (ENTITY::DOES_ENTITY_EXIST(vehicleDraftHorseIsAttachedTo))
		return;

	if (func_480() != pedIndexFromEntityIndex2)
	{
		func_481(pedIndexFromEntityIndex2);
		func_482(0);
		func_483(0);
	}

	flag3 = false;
	gameTimer = MISC::GET_GAME_TIMER();
	num3 = func_484();

	if (num3 + 45000 > gameTimer)
		flag3 = true;

	flag4 = false;

	if (flag3 && num3 + 15000 > gameTimer)
		flag4 = true;

	flag5 = func_388(pedIndexFromEntityIndex2);
	flag6 = true;

	if (num == 1 || num == 3)
		flag6 = false;

	flag7 = func_279(Global_35, pedIndexFromEntityIndex2, false);
	flag8 = func_485(pedIndexFromEntityIndex2);
	flag9 = PED::_0xD4D403EA031F351C(pedIndexFromEntityIndex2);
	flag10 = func_94();
	flag11 = func_135(Global_1835011[0 /*74*/].f_1, true);
	flag12 = false;

	if (flag10 && !flag11)
		flag12 = true;

	func_114(pedIndexFromEntityIndex2);

	if (!flag5)
		return;

	num4 = func_401(pedIndexFromEntityIndex2);

	if (flag6 && !flag7 && !flag8 && !flag9 && !flag12)
		func_486(pedIndexFromEntityIndex2);

	num5 = -1;

	switch (num)
	{
		case 0:
			if (flag)
				if (flag3)
					if (!flag4)
						num5 = 10;
				else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(pedIndexFromEntityIndex2) > 1.5f)
					num5 = 10;
				else
					num5 = 9;
			break;
	
		case 1:
		case 3:
			if (flag3)
				if (!flag4)
					num5 = 8;
			else if (flag)
				num5 = 9;
			else if (flag2)
				num5 = 7;
			break;
	}

	if (num5 != -1)
	{
		func_454(num4, num5);
	
		if (flag || !flag3 || !flag4)
		{
			func_481(pedIndexFromEntityIndex2);
			func_482(gameTimer);
		}
	}

	func_487(num4);
	return;
}

void func_155(int iParam0) // Position - 0x6868 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_156(int iParam0) // Position - 0x6870 Hash - 0x481AC61D ^0xD3B8B7C8
{
	struct<3> eventData;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;
	int gameTimer;
	int num;
	int num2;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 3))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);

	if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex) || PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return;

	if (pedIndexFromEntityIndex != Global_35)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData.f_1))
		return;

	pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);

	if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex2) || PED::IS_PED_INJURED(pedIndexFromEntityIndex2))
		return;

	if (func_389(pedIndexFromEntityIndex2))
		return;

	if (func_390(pedIndexFromEntityIndex2))
		return;

	if (eventData.f_2 == 0)
		if (!func_488())
			func_283(52, true);

	gameTimer = MISC::GET_GAME_TIMER();

	if (eventData.f_2 == 1)
	{
		num = func_489();
	
		if (func_490(54) == 0)
		{
			func_491(MISC::GET_GAME_TIMER());
			func_283(54, false);
		}
		else if (func_490(54) < 3)
		{
			if (num + 1800000 <= gameTimer)
			{
				func_283(54, true);
				func_491(MISC::GET_GAME_TIMER());
			}
		}
	
		func_492(0);
	}

	if (eventData.f_2 == 2)
	{
		if (func_196(52))
			func_197(52);
	
		if (func_194(52))
			func_195(52);
	
		func_283(53, true);
		func_492(1);
	}

	if (eventData.f_2 != 2)
		return;

	func_494(func_493(joaat("horses_broken"), joaat("Wild")), 1);
	COMPENDIUM::COMPENDIUM_HORSE_WILD_BROKEN(pedIndexFromEntityIndex2);

	if (func_388(pedIndexFromEntityIndex2))
		return;

	if (func_402(pedIndexFromEntityIndex2) > 0)
	{
		if (func_71(1))
		{
			func_202(1, false);
			func_203(1);
		}
	
		func_403(pedIndexFromEntityIndex2);
	}
	else
	{
		if (func_71(6))
		{
			func_202(6, false);
			func_203(6);
		}
	
		func_405(pedIndexFromEntityIndex2, true);
	}

	if (!func_388(pedIndexFromEntityIndex2))
		return;

	num2 = func_401(pedIndexFromEntityIndex2);

	if (num2 == -1)
		return;

	if (!func_224(num2))
	{
		func_454(num2, 6);
		func_495(num2, 1);
		func_481(pedIndexFromEntityIndex2);
		func_482(gameTimer);
	}

	return;
}

void func_157(int iParam0) // Position - 0x6A89 Hash - 0xF5B0666E ^0xA865EFA8
{
	struct<2> eventData;
	int num;

	if (func_2() == false)
		return;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 2))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (Global_1935630.f_12)
		return;

	if (PED::IS_PED_INJURED(Global_35))
		return;

	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData) != Global_35)
		return;

	if (Global_1900383.f_378 != 2)
		return;

	switch (eventData.f_1)
	{
		case -72209530:
			num = 0;
			break;
	
		case 640210656:
			num = 0;
			break;
	
		case 869278708:
			num = 4;
			break;
	
		case 1051485804:
			num = 2;
			break;
	
		case 1704957293:
			num = 0;
			break;
	
		default:
			num = 0;
			break;
	}

	func_371(num);
	func_372(eventData.f_1);
	func_79(1);
	DECORATOR::DECOR_SET_BOOL(Global_35, "Whistling", true);
	return;
}

void func_158(int iParam0) // Position - 0x6B6A Hash - 0x9F02A3E0 ^0xFD98905
{
	struct<10> eventData;
	var unk10;
	int num;
	Entity entity;
	Ped pedIndexFromEntityIndex;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 10))
		return;

	unk10 = eventData;
	num = unk10;

	switch (num)
	{
		case 28:
			func_414(true);
			func_496(-283002878);
			break;
	}

	if (func_2() == false)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
		return;

	entity = eventData.f_2;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(entity))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex) || PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return;

	switch (num)
	{
		case 28:
			func_414(true);
			func_496(-283002878);
			break;
	
		case 31:
		case 32:
		case 33:
			func_497(iParam0);
			break;
	
		case 49:
			func_498(iParam0);
			break;
	
		case 50:
			func_499(iParam0);
			break;
	
		default:
			return;
	}

	return;
}

void func_159(int iParam0) // Position - 0x6C7C Hash - 0x111A3255 ^0x8E7D6E87
{
	struct<3> eventData;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;
	int num;
	Hash hash;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 3))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData.f_1))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);

	if (pedIndexFromEntityIndex != Global_35)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData))
		return;

	pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);

	if (!func_388(pedIndexFromEntityIndex2))
		return;

	num = func_401(pedIndexFromEntityIndex2);
	func_500();
	func_501(num);
	func_199(num, 0);
	func_502(num, 0);
	func_503(num, -15);

	if (func_194(56))
		func_195(56);

	if (func_196(56))
		func_197(56);

	if (func_194(57))
		func_195(57);

	if (func_196(57))
		func_197(57);

	hash = eventData.f_2;
	func_504(pedIndexFromEntityIndex2, hash);
	PED::_0xEB8886E1065654CD(pedIndexFromEntityIndex2, 10, "ALL", 10f);
	return;
}

void func_160(int iParam0) // Position - 0x6D7C Hash - 0xE742A055 ^0xD265B0EB
{
	struct<2> eventData;
	Ped ped;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 2))
		return;

	!ENTITY::DOES_ENTITY_EXIST(eventData.f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	ped = eventData;

	if (!func_388(ped))
		return;

	if (func_505())
	{
		if (func_194(57))
			func_195(57);
	
		if (func_196(57))
			func_197(57);
	
		if (!func_194(56) && !func_196(56))
			if (func_506() < 3)
				func_283(56, true);
	}

	return;
}

void func_161(int iParam0) // Position - 0x6E09 Hash - 0xEE830B86 ^0x9479A7FA
{
	struct<4> eventData;
	Interior interiorFromEntity;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;
	BOOL flag;
	BOOL flag2;
	int num;
	int num2;
	int gameTimer;
	int num3;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 4))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	!ENTITY::DOES_ENTITY_EXIST(eventData.f_1);

	if (ENTITY::IS_ENTITY_DEAD(eventData.f_1))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData.f_1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (ENTITY::IS_ENTITY_DEAD(eventData))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData))
		return;

	if (Global_16 || func_369())
		return;

	interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);

	if (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);
	pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);

	if (PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return;

	if (TASK::IS_PED_IN_WRITHE(pedIndexFromEntityIndex))
		return;

	if (!func_388(pedIndexFromEntityIndex))
		return;

	if (pedIndexFromEntityIndex2 == Global_1900383.f_440)
		return;

	if (func_194(61) || func_196(61) || func_194(62) || func_196(62))
		return;

	flag = false;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (PED::_GET_RIDER_OF_MOUNT(pedIndexFromEntityIndex, false) == Global_35)
			flag = true;

	flag2 = false;

	if (!flag)
		if (func_187(Global_35, pedIndexFromEntityIndex, true, true) <= 5f)
			flag2 = true;

	num = -1;

	if (flag)
		num = 62;
	else if (flag2)
		num = 61;

	if (num == -1)
		return;

	if (!func_280())
		return;

	num2 = func_490(61) + func_490(62);

	if (num2 >= 3)
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	num3 = func_507();

	if (num2 > 0)
	{
		if (num3 == 0)
		{
			func_508(MISC::GET_GAME_TIMER());
			return;
		}
	
		if (num3 + 600000 > gameTimer)
			return;
	}

	func_283(num, true);
	func_509();
	Global_1900383.f_440 = pedIndexFromEntityIndex2;
	return;
}

void func_162(int iParam0) // Position - 0x6FED Hash - 0xC9FCA19 ^0xFC933489
{
	struct<6> eventData;
	Ped ped;
	Ped ped2;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;
	int num;
	Hash hash;
	Hash hash2;
	int num2;
	int num3;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 6))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_2))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData.f_2))
		return;

	ped = eventData.f_1;
	ped2 = eventData;
	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_2);

	if (ped2 != Global_35)
		return;

	if (ENTITY::IS_ENTITY_A_PED(ped))
	{
		pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped);
	
		if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex2))
			return;
	}

	if (func_388(pedIndexFromEntityIndex))
	{
		num = func_401(pedIndexFromEntityIndex);
		hash = 0;
		hash = func_510(ped);
	
		if (func_284(hash, 0))
			if (func_511(hash))
				if (ENTITY::_0xF59FDE7B4D31A630(ped))
					func_512(num, hash, 1);
	}
	else
	{
		hash2 = func_510(ped);
	
		if (func_284(hash2, 0))
			if (func_511(hash2) && func_513(hash2) != 0 && func_514(func_513(hash2), &num2))
				Global_1425228.f_2[num2] = pedIndexFromEntityIndex;
	}

	num3 = func_286(pedIndexFromEntityIndex, ped);
	return;
}

void func_163(int iParam0) // Position - 0x710F Hash - 0xEAA10616 ^0x4B495E88
{
	struct<4> eventData;
	Ped ped;
	Ped pedIndexFromEntityIndex;
	Ped ped2;
	BOOL flag;
	int num;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 4))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_3))
		return;

	if (!eventData.f_2)
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eventData.f_3))
		return;

	ped = eventData.f_1;
	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_3);

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
	{
		func_516(func_515(ped));
	}
	else
	{
		ped2 = eventData;
	
		if (ped2 != Global_35)
			return;
	}

	flag = false;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(ped))
		flag = true;

	if (!flag)
		PERSISTENCE::_0xDC0A1F0ECEC9F0C0(ped, 1f);

	num = func_517(pedIndexFromEntityIndex, ped);
	return;
}

void func_164(int iParam0) // Position - 0x71BC Hash - 0x1C71A37D ^0xC9DDE854
{
	struct<4> eventData;
	Ped pedIndexFromEntityIndex;
	int num;
	Entity entity;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 4))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return;

	if (eventData != Global_35)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_1))
		return;

	if (!eventData.f_2)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eventData.f_3))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_3);
	num = func_401(pedIndexFromEntityIndex);

	switch (num)
	{
		case 0:
		case 1:
			break;
	
		default:
			return;
	}

	if (!func_308(num))
		return;

	if (func_518(pedIndexFromEntityIndex, 0))
		return;

	entity = eventData.f_1;

	if (!ENTITY::IS_ENTITY_A_PED(entity) && !ENTITY::_GET_IS_CARRIABLE_PELT(entity))
		return;

	func_306(num);

	if (!func_300(num))
	{
		func_454(num, 22);
		return;
	}

	func_304(num, 0);
	func_454(num, 21);
	return;
}

BOOL func_165(int iParam0) // Position - 0x72A8 Hash - 0xBDE1A61 ^0xBDE1A61
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return func_173(iParam0, 1);
}

void func_166(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x72D3 Hash - 0x8777DCDE ^0xA3122452
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { uParam1 };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = uParam4;
	return;
}

int func_167(int iParam0) // Position - 0x731D Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_168(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x7331 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_169(Ped pedParam0) // Position - 0x735A Hash - 0xE7BA92D6 ^0xE7BA92D6
{
	return func_519(pedParam0, 0);
}

eStackSize func_170() // Position - 0x7369 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_171(eStackSize essParam0) // Position - 0x7379 Hash - 0x98E32558 ^0x98E32558
{
	if (essParam0 == 43 || essParam0 == 37 || essParam0 == 22)
		return true;

	return false;
}

BOOL func_172(int iParam0) // Position - 0x73A4 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_520(iParam0, 2);
}

BOOL func_173(int iParam0, int iParam1) // Position - 0x73B3 Hash - 0x13701F47 ^0x86C54B27
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_24 && iParam1 != false;
}

BOOL func_174(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x73E6 Hash - 0xBA023B92 ^0x16E0B707
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

Volume func_175(int iParam0) // Position - 0x743F Hash - 0x7AAD177B ^0xFA7D04F1
{
	if (iParam0 == 7)
		return 0;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[iParam0]))
		return Global_1357549.f_3[iParam0];

	return 0;
}

int func_176(Vector3 vParam0, var uParam1, var uParam2, Volume volParam3, Volume volParam4) // Position - 0x7470 Hash - 0x7B56A460 ^0xA4C5F2C7
{
	BOOL flag;
	ItemSet itemset;
	int itemsetSize;
	int num;
	float num2;
	int i;
	int indexedScenarioPointIndexInItemset;
	Vector3 scenarioPointCoords;
	float distanceBetweenCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam3))
		return 0;

	flag = false;

	if (VOLUME::DOES_VOLUME_EXIST(volParam4))
		flag = true;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(volParam3, itemset, joaat("PROP_HitchingPost"), 1, 1, 0, 0);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	num2 = 10000000f;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		indexedScenarioPointIndexInItemset = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(i, itemset);
	
		if (!TASK::DOES_SCENARIO_POINT_EXIST(indexedScenarioPointIndexInItemset))
		{
		}
		else
		{
			scenarioPointCoords = { TASK::_GET_SCENARIO_POINT_COORDS(indexedScenarioPointIndexInItemset, true) };
		
			if (flag)
			{
				if (VOLUME::IS_POINT_IN_VOLUME(volParam4, scenarioPointCoords))
				{
				}
				else
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, scenarioPointCoords, true);
				
					if (distanceBetweenCoords < num2)
					{
						num = indexedScenarioPointIndexInItemset;
						num2 = distanceBetweenCoords;
					}
				}
			}
		
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, scenarioPointCoords, true);
		
			if (distanceBetweenCoords < num2)
			{
				num = indexedScenarioPointIndexInItemset;
				num2 = distanceBetweenCoords;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return num;
}

int func_177(int iParam0) // Position - 0x7530 Hash - 0x8CE2C9DC ^0xA9504390
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_1900383[iParam0 /*45*/].f_44;
}

void func_178(int iParam0, int iParam1) // Position - 0x755E Hash - 0xDE428423 ^0xD33EE14F
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_44 = iParam1;
	return;
}

BOOL func_179() // Position - 0x758C Hash - 0x37C122C ^0xBF4CC76A
{
	if (func_76(16384))
	{
		func_327(16384);
		return true;
	}

	return false;
}

BOOL func_180(Ped pedParam0, Ped pedParam1) // Position - 0x75AA Hash - 0x6E537C7F ^0x7B2E2E2F
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1) || PED::IS_PED_INJURED(pedParam1))
		return false;

	TASK::TASK_GO_TO_WHISTLE(pedParam0, pedParam1, 0);
	FLOCK::_0xFF1E339CE40EAAAF(pedParam0, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 48, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 1);
	return true;
}

int func_181(int iParam0) // Position - 0x762F Hash - 0x79966B74 ^0xE90595E1
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_3;
}

void func_182(Ped pedParam0, BOOL bParam1) // Position - 0x765D Hash - 0x81317C0D ^0xF96B5C1C
{
	int num;
	int idOfThisThread;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (!func_388(pedParam0))
		return;

	num = func_401(pedParam0);

	if (num == -1)
		return;

	if (num >= 7)
		return;

	func_521(num);
	func_450(num);
	idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	num2 = func_181(num);

	if (!bParam1)
	{
		if (idOfThisThread != num2)
			return;
	
		if (!func_72(num))
			return;
	}

	func_183(num);
	PED::SET_PED_KEEP_TASK(pedParam0, true);

	if (bParam1 && func_2() == -1)
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, true);

	return;
}

void func_183(int iParam0) // Position - 0x7717 Hash - 0xC2FEF89F ^0xC1FD7E19
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	return;
}

void func_184(int iParam0) // Position - 0x774F Hash - 0x44423EC0 ^0xA235A7FE
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_37 = 0;
	return;
}

Ped func_185(int iParam0) // Position - 0x777C Hash - 0x79966B74 ^0xB76682C7
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_37;
}

void func_186(int iParam0, Ped pedParam1) // Position - 0x77AA Hash - 0xDE428423 ^0x4A54320F
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_37 = pedParam1;
	return;
}

float func_187(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x77D8 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

void func_188(int iParam0, int iParam1) // Position - 0x7820 Hash - 0x828B4EDE ^0x60CAEB5D
{
	Player playerIndex;
	Ped ped;
	BOOL isEntityDead;
	BOOL flag;
	var entityCoords;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return;

	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);
	flag = false;

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(playerIndex))
		flag = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	func_315(iParam0);
	func_315(5);

	if (func_131(5))
		func_202(5, false);

	func_203(5);
	func_116(5, iParam0);
	func_200(5, 1);
	func_199(5, iParam1);

	if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == ped)
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);

	if (PLAYER::_GET_TEMP_PLAYER_HORSE(playerIndex) == ped)
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);

	if (isEntityDead)
	{
		if (flag)
		{
			PED::SET_LOOTING_FLAG(ped, 0, true);
			PED::SET_LOOTING_FLAG(ped, 1, true);
			DECORATOR::DECOR_SET_STRING(ped, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		}
	}

	if (iParam1 == 2)
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	if (flag)
	{
		if (_IS_NULL_VECTOR(entityCoords))
		{
			func_217(-1);
			func_214(3);
			func_215(0f, 0f, 0f);
			func_218(-15);
		}
		else
		{
			func_217(5);
			func_214(0);
			func_215(entityCoords);
			func_218(func_221());
		}
	}

	func_348(iParam0);
	func_522(iParam0);
	func_203(iParam0);
	func_404();
	return;
}

BOOL func_189(int iParam0) // Position - 0x7975 Hash - 0x79966B74 ^0x9B88677F
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_35;
}

float func_190(Ped pedParam0) // Position - 0x79A3 Hash - 0x95EE5834 ^0x1BABBD84
{
	float pedMotivation;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0f;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0f;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return 0f;

	pedMotivation = PED::_GET_PED_MOTIVATION(pedParam0, 3, 0);
	return pedMotivation;
}

int func_191(int iParam0) // Position - 0x79EC Hash - 0x8CE2C9DC ^0x1618273F
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_1900383[iParam0 /*45*/].f_36;
}

void func_192(int iParam0, int iParam1) // Position - 0x7A1A Hash - 0xDE428423 ^0x580F9D80
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_35 = iParam1;
	return;
}

void func_193(int iParam0, int iParam1) // Position - 0x7A48 Hash - 0xDE428423 ^0xC028AD4C
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_36 = iParam1;
	return;
}

BOOL func_194(int iParam0) // Position - 0x7A76 Hash - 0x854AC499 ^0x54AC68DD
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage != 0)
		return currentMessage == Global_1905944.f_22[iParam0 /*9*/].f_1;

	return false;
}

void func_195(int iParam0) // Position - 0x7A9E Hash - 0xC32B5228 ^0xC32B5228
{
	if (!func_194(iParam0))
		return;

	func_523(true);
	return;
}

BOOL func_196(int iParam0) // Position - 0x7AB8 Hash - 0xBDE4FECD ^0x461A2A8
{
	int num;
	int offset;
	int address;

	func_524(iParam0, &num, &offset);
	address = Global_1905944[num];
	return MISC::IS_BIT_SET(address, offset);
}

void func_197(int iParam0) // Position - 0x7ADC Hash - 0xEA7E80B4 ^0xC30D3714
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_1905944[num2];
	MISC::CLEAR_BIT(&address, offset);
	Global_1905944[num2] = address;
	return;
}

int func_198(int iParam0) // Position - 0x7B12 Hash - 0xACA56E21 ^0x54175BD8
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_11;
}

void func_199(int iParam0, int iParam1) // Position - 0x7B45 Hash - 0x42DB579F ^0xB4972906
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = iParam1;
	return;
}

void func_200(int iParam0, int iParam1) // Position - 0x7B78 Hash - 0x42DB579F ^0x244C0C3A
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
	return;
}

int func_201() // Position - 0x7BAB Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3054;
}

void func_202(int iParam0, BOOL bParam1) // Position - 0x7BBC Hash - 0x76CF898E ^0x452E6C0C
{
	int idOfThisThread;
	Ped horse;
	BOOL flag;
	Player player;
	Hash entityModel;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_450(iParam0);

	if (func_72(iParam0))
	{
		idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	
		if (func_181(iParam0) != idOfThisThread)
			return;
	}

	if (!func_71(iParam0))
		return;

	horse = func_88(iParam0);
	flag = false;

	if (!ENTITY::IS_ENTITY_DEAD(horse))
		flag = true;

	func_315(iParam0);
	func_386(iParam0);
	func_473(horse);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(horse))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(horse, true, true);

	if (func_320(horse))
		PHYSICS::_UNHITCH_HORSE(horse);

	if (flag)
	{
		TASK::TASK_SMART_FLEE_PED(horse, Global_35, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(horse, true);
	}

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);

	if (iParam0 == 0)
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(player, 0);
	else if (iParam0 == 1)
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(player, 0);

	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(horse, true);

	if (flag)
	{
		if (bParam1)
			FLOCK::_SET_ANIMAL_IS_WILD(horse, true);
	
		PED::_0x329772C47DBB2FBC(horse);
	}

	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&horse);
	entityModel = ENTITY::GET_ENTITY_MODEL(horse);

	if (STREAMING::IS_MODEL_VALID(entityModel))
		if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
			if (!func_208(entityModel))
				PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	func_203(iParam0);
	return;
}

void func_203(int iParam0) // Position - 0x7CF9 Hash - 0x7F6EE38F ^0x700C7F3D
{
	var unk;
	int i;
	int j;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_525(&unk);
	func_526(iParam0, unk);
	func_527(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_528(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_529(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_530(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));

	for (i = 0; i < 2; i = i + 1)
	{
		func_531(i, &Global_40.f_1095.f_1[iParam0 /*436*/].f_398[i /*4*/]);
	}

	for (j = 0; j < 3; j = j + 1)
	{
		func_532(j, &Global_40.f_1095.f_1[iParam0 /*436*/].f_407[j /*4*/]);
	}

	func_533(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_534(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_535(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));

	Global_1900383[iParam0 /*45*/].f_26 = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));

	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
	return;
}

void func_204(int iParam0) // Position - 0x804D Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_451(iParam0))
		return;

	func_536(iParam0);
	func_537(iParam0);
	return;
}

BOOL func_205(int iParam0) // Position - 0x806E Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_2() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_206(int iParam0) // Position - 0x80B3 Hash - 0xC20F1267 ^0x63F4D2C2
{
	Global_40.f_1095.f_3135.f_4 = iParam0;
	return;
}

Ped func_207(int iParam0) // Position - 0x80C8 Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

BOOL func_208(Ped pedParam0) // Position - 0x80FB Hash - 0x8E77EB62 ^0x8E77EB62
{
	if (!func_538(pedParam0))
		return false;

	if (!func_539())
		return true;

	return false;
}

void func_209(int iParam0) // Position - 0x811E Hash - 0xEBEFE898 ^0xEBEFE898
{
	Ped ped;
	Hash hash;
	var unk;

	if (func_84(iParam0) == 0)
	{
		if (func_540(iParam0))
			func_541(iParam0);
	
		return;
	}

	if (!func_540(iParam0))
	{
		ped = func_207(iParam0);
		hash = func_542(ped);
		func_543(iParam0, hash);
	}

	unk.f_9 = joaat("SLOTID_NONE");
	unk.f_14 = func_207(iParam0);
	unk.f_15 = func_445(iParam0);
	unk.f_16 = { func_311(iParam0) };
	unk.f_24 = unk.f_24;
	unk.f_26 = BUILTIN::FLOOR(func_544(iParam0));
	unk.f_25 = BUILTIN::FLOOR(func_367(iParam0));
	unk.f_27 = func_437(iParam0, 0);
	unk.f_28 = func_437(iParam0, 1);
	func_545(iParam0, &unk);
	return;
}

BOOL func_210() // Position - 0x81D9 Hash - 0x57592B8C ^0xB4B7573B
{
	Object* p_object;

	p_object = func_211();

	if (ENTITY::DOES_ENTITY_EXIST(p_object))
		return true;

	return false;
}

Object* func_211() // Position - 0x81F5 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

BOOL func_212(BOOL bParam0) // Position - 0x8204 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

int func_213() // Position - 0x8234 Hash - 0xE835E19F ^0x141BD35D
{
	return Global_40.f_1095.f_3054.f_1;
}

void func_214(int iParam0) // Position - 0x8247 Hash - 0xC20F1267 ^0xD623971A
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
	return;
}

void func_215(float fParam0, float fParam1, float fParam2) // Position - 0x825C Hash - 0xD65C08CA ^0xEAB2D54F
{
	Global_40.f_1095.f_3054.f_77 = { fParam0 };
	return;
}

Vector3 func_216() // Position - 0x8275 Hash - 0xE29D1D35 ^0x9EC29FD8
{
	return Global_40.f_1095.f_3054.f_77;
}

void func_217(int iParam0) // Position - 0x828A Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3054 = iParam0;
	return;
}

void func_218(Hash hParam0) // Position - 0x829D Hash - 0xC20F1267 ^0x9F8567FC
{
	Global_40.f_1095.f_3054.f_2 = hParam0;
	return;
}

int func_219(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x82B2 Hash - 0xA51DF02B ^0x748D8F02
{
	Hash model;
	Object object;
	BOOL flag;
	BOOL flag2;

	if (func_210())
	{
		func_546();
		func_444();
	}

	model = func_75();

	if (!STREAMING::HAS_MODEL_LOADED(model))
	{
		STREAMING::REQUEST_MODEL(model, false);
		return 0;
	}

	object = OBJECT::CREATE_OBJECT(model, vParam0, true, true, false, false, true);

	if (!ENTITY::DOES_ENTITY_EXIST(object))
		return 0;

	func_466(object);
	flag = false;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(object))
		flag = true;

	flag2 = false;

	if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(object))
		flag2 = true;

	if (!flag || !flag2)
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(object, true, true);

	ENTITY::SET_ENTITY_HEADING(object, fParam3);

	if (bParam4)
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(object, false);

	TASK::TASK_CARRIABLE(object, joaat("carriable_saddle_bundle"), 0, 0, 0);
	return 1;
}

int func_220() // Position - 0x8362 Hash - 0xE835E19F ^0x7F929E2F
{
	return Global_40.f_1095.f_3054.f_2;
}

Hash func_221() // Position - 0x8375 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_222() // Position - 0x8381 Hash - 0xA99E7B1E ^0x3A85A82E
{
	Global_1900383.f_437 = 0;
	Global_1900383.f_437.f_1 = 0;
	Global_1900383.f_437.f_2 = 0;
	return;
}

BOOL func_223(int iParam0) // Position - 0x83A5 Hash - 0xB7F263AA ^0xB7F263AA
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_320(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_224(int iParam0) // Position - 0x83DD Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_435;
}

BOOL func_225() // Position - 0x8411 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1900383.f_437.f_1;
}

int func_226() // Position - 0x8422 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_437;
}

void func_227(int iParam0) // Position - 0x8431 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_437 = iParam0;
	return;
}

void func_228(int iParam0) // Position - 0x8442 Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1900383.f_437.f_1 = iParam0;
	return;
}

BOOL func_229(Ped pedParam0, int iParam1) // Position - 0x8455 Hash - 0x76B9592F ^0xA9C82238
{
	int num;
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (iParam1 != -1)
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam1 /*35*/].f_4))
			return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, Global_1888801[iParam1 /*35*/].f_4, true, 0);
		else
			return false;

	for (i = 0; i < Global_1894899.f_161; i = i + 1)
	{
		num = Global_1894899.f_10[i];
	
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1888801[num /*35*/].f_4))
		{
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, Global_1888801[num /*35*/].f_4, true, 0))
		{
			return true;
		}
	}

	return false;
}

int func_230() // Position - 0x84F0 Hash - 0x8190E5D8 ^0x6C81FB30
{
	return Global_1900383.f_437.f_2;
}

void func_231(int iParam0) // Position - 0x8501 Hash - 0xC421D95B ^0x56CEE285
{
	Global_1900383.f_437.f_2 = iParam0;
	return;
}

BOOL func_232() // Position - 0x8514 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

BOOL func_233() // Position - 0x8524 Hash - 0x24D34D0 ^0x216E5947
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return false;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);

	if (PED::GET_PED_CONFIG_FLAG(Global_35, 440, true))
		return false;

	return true;
}

void func_234(BOOL bParam0) // Position - 0x8565 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

BOOL func_235() // Position - 0x859F Hash - 0x24D34D0 ^0x4EDBE20
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return false;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);

	if (PED::GET_PED_CONFIG_FLAG(Global_35, 439, true))
		return false;

	return true;
}

void func_236(BOOL bParam0) // Position - 0x85E0 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

BOOL func_237() // Position - 0x861A Hash - 0x24D34D0 ^0x48AEAE02
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return false;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);

	if (PED::GET_PED_CONFIG_FLAG(Global_35, 438, true))
		return false;

	return true;
}

void func_238(BOOL bParam0) // Position - 0x865B Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

Hash func_239(int iParam0) // Position - 0x8695 Hash - 0x79966B74 ^0x5020C191
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_43;
}

BOOL func_240(int iParam0) // Position - 0x86C3 Hash - 0xF65922F6 ^0x42A4432C
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (Global_1900383[iParam0 /*45*/].f_42 == 0)
		return false;

	return true;
}

void func_241(int iParam0, int iParam1) // Position - 0x86FA Hash - 0xDE428423 ^0x1F6A94AD
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_42 = iParam1;
	return;
}

int func_242(int iParam0) // Position - 0x8728 Hash - 0x79966B74 ^0x218C92DA
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_42;
}

void func_243(int iParam0, int iParam1, int iParam2, const char* sParam3, Ped pedParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x8756 Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_2() != -1)
		return;

	if (Global_36616 && func_547(iParam1) != false)
		return;

	num = func_548(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_549(num, false, iParam0, iParam1, sParam3, pedParam4, bParam5, bParam7);
	}
	else
	{
		num2 = -1;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (num2 < 0)
				if (Global_1347477.f_155[i /*6*/] == 0)
					num2 = i;
		}
	
		if (num2 >= 0)
			func_550(num2, num, iParam0, iParam1, pedParam4, bParam5);
		else
			func_549(num, true, iParam0, iParam1, sParam3, pedParam4, bParam5, false);
	}

	return;
}

void func_244(int iParam0) // Position - 0x8855 Hash - 0x2585788F ^0xCCC2D977
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_43 = Global_1900383[iParam0 /*45*/].f_43 + 1;
	return;
}

Vector3 func_245(int iParam0) // Position - 0x888D Hash - 0x91720586 ^0x88FB15BF
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	if (iParam0 >= 7)
		return 0f, 0f, 0f;

	return Global_1900383[iParam0 /*45*/].f_28;
}

Vector3 func_246(int iParam0) // Position - 0x88C1 Hash - 0x91720586 ^0xA0185005
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	if (iParam0 >= 7)
		return 0f, 0f, 0f;

	return Global_1900383[iParam0 /*45*/].f_31;
}

float func_247(int iParam0) // Position - 0x88F5 Hash - 0xF21A6F3 ^0xDE46BB20
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_1900383[iParam0 /*45*/].f_34;
}

void func_248(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x8923 Hash - 0xF8A04892 ^0xE4B54FE8
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_31 = { uParam1 };
	return;
}

void func_249(int iParam0, float fParam1) // Position - 0x8955 Hash - 0xDE428423 ^0x8A704B54
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_34 = fParam1;
	return;
}

void func_250(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x8983 Hash - 0xBB9F4474 ^0x52AC9CD5
{
	Ped entityModel;

	if (!uParam0.f_5)
		return;

	if (func_205(34))
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(uParam0.f_6);

	if (func_392(entityModel) || func_393(entityModel))
		return;

	if (!TASK::IS_PED_SPRINTING(uParam0.f_6))
		return;

	if (PED::IS_PED_SWIMMING(Global_35))
		return;

	if (PED::IS_PED_SWIMMING(uParam0.f_6))
		return;

	if (func_280())
		func_283(34, false);

	return;
}

void func_251(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x89FC Hash - 0xD86078B5 ^0x4CA3AF8A
{
	int gameTimer;
	int num;
	BOOL flag;
	float pedStaminaNormalized;

	if (!uParam0.f_5)
		return;

	if (func_551() >= 3)
		return;

	if (func_196(36) || func_194(36))
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	num = func_552();

	if (num > 0)
		if (num + 5000 < gameTimer)
			func_553();
		else
			return;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0.f_6))
		return;

	if (ENTITY::IS_ENTITY_DEAD(uParam0.f_6))
		return;

	if (PED::IS_PED_INJURED(uParam0.f_6))
		return;

	flag = false;

	if (TASK::IS_PED_SPRINTING(uParam0.f_6))
		flag = true;

	if (TASK::IS_PED_RUNNING(uParam0.f_6))
		flag = true;

	if (!flag)
		return;

	if (PED::IS_PED_SWIMMING(Global_35))
		return;

	if (PED::IS_PED_SWIMMING(uParam0.f_6))
		return;

	pedStaminaNormalized = PED::_GET_PED_STAMINA_NORMALIZED(uParam0.f_6);

	if (pedStaminaNormalized > 0.15f)
		return;

	if (func_196(34))
		func_197(34);

	if (func_194(34))
		func_195(34);

	if (func_196(35))
		func_197(35);

	if (func_194(35))
		func_195(35);

	if (func_280())
	{
		func_283(36, true);
		func_554();
		func_555(MISC::GET_GAME_TIMER());
	}

	return;
}

void func_252(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x8B34 Hash - 0x6E4BF8E5 ^0x44C48271
{
	BOOL flag;

	if (!uParam7.f_2)
		return;

	if (!uParam0.f_5)
		return;

	if (func_205(45))
		return;

	if (func_94() && !func_95(4))
		return;

	flag = false;

	if (func_140(33) && func_140(34) && func_140(35))
		flag = true;

	if (!flag)
		return;

	if (!func_388(uParam0.f_6))
		return;

	if (!uParam7.f_10)
		return;

	if (func_115(7) == 0)
		return;

	if (func_280())
		func_283(45, false);

	return;
}

void func_253() // Position - 0x8BD5 Hash - 0x39439B04 ^0xC928A1C2
{
	int gameTimer;

	if (!func_556())
		return;

	gameTimer = MISC::GET_GAME_TIMER();

	if (func_557() < gameTimer)
	{
		func_283(59, false);
		func_558(0);
		func_559();
	}

	return;
}

void func_254(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x8C07 Hash - 0x65F53BDF ^0xE83604DE
{
	Any dst;
	int num;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	num = -1;

	if (uParam7.f_2)
	{
		num = 0;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam7, 12);
	}
	else if (uParam19.f_2)
	{
		num = 1;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam19, 12);
	}

	if (!func_71(num))
		return;

	if (!dst.f_1)
		return;

	if (!dst.f_2)
		return;

	if (!dst.f_4)
	{
		if (func_194(56))
			func_195(56);
	
		if (func_196(56))
			func_197(56);
	
		if (func_194(57))
			func_195(57);
	
		if (func_196(57))
			func_197(57);
	
		return;
	}

	if (TASK::_0x3F8387DB1B9F31B7(dst, 0) && !func_505())
	{
		if (!func_205(57) && !func_205(58))
		{
			if (func_194(56))
				func_195(56);
		
			if (func_196(56))
				func_197(56);
		
			if (func_280())
				if (func_560(joaat("consumable_special_horse_reviver_crafted")))
					func_283(57, false);
				else
					func_283(58, false);
		}
	}

	return;
}

void func_255(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x8D29 Hash - 0x9C26D49E ^0xE5299888
{
	Ped horse;
	BOOL flag;
	int horseTamingState;
	int num;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	horse = func_561();
	flag = false;
	horseTamingState = 0;

	if (ENTITY::DOES_ENTITY_EXIST(horse))
	{
		flag = true;
		horseTamingState = PED::_GET_HORSE_TAMING_STATE(horse);
	}

	num = func_562();

	switch (num)
	{
		case 0:
			func_563(1);
			[[fallthrough]];
	
		case 1:
			if (flag)
			{
				func_564(horse);
				func_563(2);
			}
			break;
	
		case 2:
			switch (horseTamingState)
			{
				case 1:
					func_563(3);
					break;
			
				case 2:
				case 3:
					func_563(5);
					break;
			
				case 4:
				case 5:
					func_563(9);
					break;
			
				case 6:
					func_563(11);
					break;
			
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
			
				default:
					if (!flag)
						func_563(11);
					break;
			}
			break;
	
		case 3:
			func_565();
		
			if (func_566(horse))
				if (func_280())
					func_283(48, true);
			else if (func_280())
				func_283(47, true);
		
			func_563(4);
			break;
	
		case 4:
			switch (horseTamingState)
			{
				case 1:
					if (func_194(47))
					{
						if (func_566(horse))
						{
							func_195(47);
							func_563(3);
						}
					}
				
					if (!flag)
						func_563(11);
					break;
			
				case 2:
				case 3:
					func_563(5);
					break;
			
				case 4:
				case 5:
					func_563(9);
					break;
			
				case 6:
					func_563(11);
					break;
			
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
			
				default:
					if (!flag)
						func_563(11);
					break;
			}
			break;
	
		case 5:
			func_565();
		
			if (func_280())
				func_283(49, true);
		
			func_563(6);
			break;
	
		case 6:
			switch (horseTamingState)
			{
				case 2:
				case 3:
					break;
			
				case 4:
				case 5:
					func_563(9);
					break;
			
				case 6:
					func_563(11);
					break;
			
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
			
				default:
					if (!flag)
						func_563(11);
					break;
			}
			break;
	
		case 7:
			func_565();
		
			if (func_280())
				func_283(50, true);
		
			func_567(MISC::GET_GAME_TIMER());
			func_563(8);
			break;
	
		case 8:
			if (func_568() + 5000 < MISC::GET_GAME_TIMER())
				func_563(6);
			break;
	
		case 9:
			func_565();
		
			if (func_280())
				func_283(51, true);
		
			func_563(10);
			break;
	
		case 10:
			switch (horseTamingState)
			{
				case 2:
				case 3:
					func_563(5);
					break;
			
				case 4:
				case 5:
					break;
			
				case 6:
					func_563(11);
					break;
			
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
			
				default:
					if (!flag)
						func_563(11);
					break;
			}
			break;
	
		case 11:
			func_569();
			func_565();
			func_563(0);
			break;
	}

	return;
}

void func_256(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x906C Hash - 0xB6987B4E ^0x7FCDCB86
{
	var dst;
	int num;
	int num2;
	BOOL flag;
	int num3;
	BOOL flag2;

	if (!func_570())
		return;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (!uParam0.f_5)
		return;

	if (uParam7.f_10)
	{
		num = 0;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam7, 12);
	}
	else if (uParam19.f_10)
	{
		num = 1;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam19, 12);
	}
	else
	{
		return;
	}

	if (!dst.f_1)
		return;

	if (!dst.f_2)
		return;

	if (dst.f_3)
		return;

	if (dst.f_4)
		return;

	num2 = func_437(num, 0);
	flag = false;
	num3 = -1;

	if (!flag)
	{
		if (num2 > 50)
		{
			if (func_571() < 3)
			{
				num3 = 26;
				flag = true;
			}
		}
	}

	flag2 = false;

	if (func_572() + 2500 < MISC::GET_GAME_TIMER())
		flag2 = true;

	if (flag2)
	{
		if (!flag)
		{
			func_573(0);
			func_574();
			return;
		}
	}

	if (!flag2)
		return;

	if (!func_280())
		return;

	func_283(num3, true);
	func_575(MISC::GET_GAME_TIMER());

	switch (num3)
	{
		case 26:
			func_576();
			break;
	
		default:
			break;
	}

	func_573(0);
	func_574();
	return;
}

void func_257(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x919F Hash - 0xB6987B4E ^0x7FCDCB86
{
	Ped dst;
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;
	BOOL flag2;

	if (!func_577())
		return;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (!uParam0.f_5)
		return;

	if (uParam7.f_10)
	{
		num = 0;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam7, 12);
	}
	else if (uParam19.f_10)
	{
		num = 1;
		MISC::COPY_SCRIPT_STRUCT(&dst, &uParam19, 12);
	}
	else
	{
		return;
	}

	if (!dst.f_1)
		return;

	if (!dst.f_2)
		return;

	if (dst.f_3)
		return;

	if (dst.f_4)
		return;

	num2 = func_578(num, 0);
	num3 = func_578(num, 1);
	flag = false;
	num4 = -1;

	if (!flag)
	{
		if (func_490(32) < 3)
		{
			if (num2 == 0 && num3 == 0)
			{
				num4 = 32;
				flag = true;
			}
		}
	}

	if (!flag)
	{
		if (num2 == 0)
		{
			if (func_490(30) < 3)
			{
				num4 = 30;
				flag = true;
			}
		}
	}

	if (!flag)
	{
		if (num3 == 0)
		{
			if (func_490(31) < 3)
			{
				if (!PED::IS_PED_SWIMMING(dst))
				{
					num4 = 31;
					flag = true;
				}
			}
		}
	}

	if (!flag)
	{
		if (num2 < 50)
		{
			if (func_490(28) < 1)
			{
				num4 = 28;
				flag = true;
			}
		}
	}

	if (!flag)
	{
		if (num3 < 50)
		{
			if (func_490(29) < 1)
			{
				num4 = 29;
				flag = true;
			}
		}
	}

	if (!flag)
	{
		if (num3 == 0)
		{
			if (func_490(33) < 3)
			{
				if (PED::IS_PED_SWIMMING(dst))
				{
					num4 = 33;
					flag = true;
				}
			}
		}
	}

	flag2 = false;

	if (func_579() + 2500 < MISC::GET_GAME_TIMER())
		flag2 = true;

	if (flag2)
	{
		if (!flag)
		{
			func_580(0);
			func_581();
			return;
		}
	}

	if (!flag2)
		return;

	if (!func_280())
		return;

	func_283(num4, true);
	func_575(MISC::GET_GAME_TIMER());
	func_580(0);
	func_581();
	return;
}

void func_258() // Position - 0x9374 Hash - 0x8A1335C2 ^0x8A1335C2
{
	var unk;
	int num;
	BOOL flag;
	int i;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;

	if (func_582() == 0)
		return;

	unk = 6;
	num = 0;
	unk[num] = 32;
	num = num + 1;
	unk[num] = 30;
	num = num + 1;
	unk[num] = 31;
	num = num + 1;
	unk[num] = 28;
	num = num + 1;
	unk[num] = 29;
	num = num + 1;
	unk[num] = 43;
	num = num + 1;
	flag = false;

	for (i = 0; i < num; i = i + 1)
	{
		if (flag)
		{
		}
		else if (func_194(unk[i]))
		{
			flag = true;
		}
	}

	if (flag)
	{
		if (!func_583())
		{
			flag2 = false;
			flag3 = false;
			flag4 = false;
			flag5 = false;
		
			if (func_194(32))
			{
				flag4 = true;
				flag5 = true;
			}
		
			if (func_194(30))
				flag4 = true;
		
			if (func_194(31))
				flag5 = true;
		
			if (func_194(28))
				flag4 = true;
		
			if (func_194(29))
				flag5 = true;
		
			if (func_194(43))
			{
				flag4 = true;
				flag5 = true;
			}
		
			if (flag2)
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 3);
		
			if (flag3)
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 3);
		
			if (flag4)
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 3);
		
			if (flag5)
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 3);
		
			func_584(1);
		}
	}
	else if (func_583())
	{
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
		func_584(0);
		func_585();
	}

	return;
}

void func_259(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x94D8 Hash - 0x9D5BBF3D ^0x174ED223
{
	int num;
	Vector3 vector;
	Blip blip;

	if (!func_586())
		return;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (uParam0.f_4)
		return;

	if (func_205(55))
		return;

	if (!func_280())
		return;

	if (func_94() && !func_95(4))
		return;

	func_206(0);

	if (func_84(0) == 1)
		return;

	func_283(55, false);
	num = func_587(9, true, true, false);

	if (num != 76)
		num = func_587(9, true, true, true);

	if (!func_588(num))
		return;

	vector = { func_589(num) };

	if (_IS_NULL_VECTOR(vector))
		return;

	blip = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_SHOP"), vector);
	MAP::SET_BLIP_SPRITE(blip, joaat("blip_shop_horse"), true);
	MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_RADAR_EDGE_ALWAYS"));
	func_590(&blip);
	return;
}

void func_260() // Position - 0x95CA Hash - 0x5C1F2996 ^0x364219E4
{
	Blip blip;

	blip = func_591();

	if (!MAP::DOES_BLIP_EXIST(blip))
		return;

	if (func_196(55))
		return;

	if (func_194(55))
		return;

	MAP::REMOVE_BLIP(&blip);
	return;
}

void func_261(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x9603 Hash - 0xFD8B9FFF ^0x8CF80C16
{
	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (func_94() && !func_140(42))
		return;

	if (!func_592())
		return;

	if (func_205(65))
		return;

	if (func_593(Global_35))
		return;

	if (func_594())
		return;

	if (!func_280())
		return;

	func_283(65, false);
	return;
}

void func_262(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x9677 Hash - 0xBE78C450 ^0xC0C870A0
{
	int gameTimer;
	int num;

	if (!uParam0.f_1)
		return;

	if (!uParam0.f_3)
		return;

	if (!uParam0.f_2)
		return;

	if (func_94() && !func_140(42))
		return;

	if (func_94() && func_134() == 8)
		return;

	if (!func_210())
		return;

	if (func_595(7))
	{
		func_596();
		return;
	}

	if (func_213() == 3)
		return;

	if (func_593(Global_35))
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	num = func_597();

	if (num == 0)
	{
		func_598(MISC::GET_GAME_TIMER());
		return;
	}

	if (num + 10000 > gameTimer)
		return;

	if (func_187(Global_35, func_211(), true, true) < 100f)
		return;

	if (func_205(64))
		if (num + 600000 > gameTimer)
			return;

	func_283(64, true);
	func_598(MISC::GET_GAME_TIMER());
	return;
}

void func_263(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x9768 Hash - 0xC1C3AEB6 ^0x4A8EF0E5
{
	int num;
	Ped entityModel;
	var unk;

	if (!uParam0.f_5)
		return;

	num = func_490(66);

	if (num >= 3)
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(uParam0.f_6);

	if (func_392(entityModel) || func_393(entityModel))
		return;

	if (!TASK::IS_PED_SPRINTING(uParam0.f_6))
		return;

	if (PED::IS_PED_SWIMMING(Global_35))
		return;

	if (PED::IS_PED_SWIMMING(uParam0.f_6))
		return;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam7))
		return;

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, pedParam7, 4, 0))
		return;

	if (func_599() == pedParam7)
		return;

	if (func_280())
	{
		func_600(pedParam7);
		func_283(66, false);
	}

	return;
}

void func_264(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x9816 Hash - 0x3C862809 ^0x6B3586BB
{
	int num;
	int num2;

	if (!uParam0.f_2)
		return;

	if (!uParam0.f_3)
		return;

	if (!uParam7.f_10 && !uParam19.f_10)
	{
		if (func_601())
			func_602(0);
	
		return;
	}

	if (func_603() < 2)
		return;

	if (uParam7.f_10)
		num = 0;
	else if (uParam19.f_10)
		num = 1;

	if (func_115(num) >= 2)
		return;

	num2 = func_490(46);

	if (num2 >= 1)
		return;

	if (func_601())
		return;

	func_602(1);
	func_604();

	if (func_605() <= 1)
		return;

	if (!func_280())
		return;

	func_283(46, true);
	return;
}

void func_265(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x98C5 Hash - 0xCFFD7261 ^0xC7FAF07B
{
	Entity outEntity;
	Ped pedIndexFromEntityIndex;

	if (!uParam0.f_1)
		return;

	if (!func_593(Global_35))
		return;

	if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, true, false))
		return;

	if (!func_606(outEntity))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);

	if (func_607(pedIndexFromEntityIndex))
		return;

	if (func_280())
		func_283(67, true);

	return;
}

void func_266() // Position - 0x9928 Hash - 0x844A1236 ^0x78987
{
	int num;

	if (func_608(0, false, true))
		return;

	num = func_609();

	if (num == 2)
		if (!func_610())
			if (!func_205(621))
				func_283(621, false);

	if (num == 3)
		if (!func_610())
			if (!func_205(622))
				func_283(622, false);

	if (num == 5)
		if (!func_610())
			if (!func_205(623))
				func_283(623, false);

	if (num == 7)
		if (!func_610())
			if (!func_205(624))
				func_283(624, false);

	return;
}

BOOL func_267() // Position - 0x99C7 Hash - 0x8FB36F20 ^0x8FB36F20
{
	return Global_1894899 & 4 != 0;
}

int func_268(int iParam0) // Position - 0x99D7 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

BOOL func_269(int iParam0) // Position - 0x99E9 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_270(int iParam0) // Position - 0x9A1C Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_269(iParam0))
		return 0;

	return func_612(func_611(iParam0));
}

int func_271() // Position - 0x9A3C Hash - 0x182028C5 ^0x52AF0BEC
{
	Ped saddleHorseForPlayer;
	int num;
	int num2;
	Hash hash;
	BOOL flag;
	BOOL flag2;

	saddleHorseForPlayer = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(saddleHorseForPlayer))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(saddleHorseForPlayer) || PED::IS_PED_INJURED(saddleHorseForPlayer))
		return 0;

	num = 0;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (PED::GET_MOUNT(Global_35) == saddleHorseForPlayer)
			num = 1;

	num2 = 0;
	hash = WEAPON::_0xAFFD0CCF31F469B8(saddleHorseForPlayer);

	if (func_284(hash, 0))
		num2 = 1;

	flag = false;

	if (func_232() || func_412())
		flag = true;

	flag2 = false;

	if (Global_1935630.f_24 || func_613(true, false, true))
		flag2 = true;

	if (num || num2)
		if (flag && !flag2)
			return 1;

	return 0;
}

void func_272(var uParam0) // Position - 0x9AFB Hash - 0x6843C143 ^0xA531F0D1
{
	int i;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_10[i /*8*/] = 0;
		uParam0->f_10[i /*8*/].f_1 = 0;
		uParam0->f_10[i /*8*/].f_2 = 0;
		uParam0->f_10[i /*8*/].f_3 = 0;
		uParam0->f_10[i /*8*/].f_4 = 0;
		uParam0->f_10[i /*8*/].f_5 = 0;
		uParam0->f_10[i /*8*/].f_6 = 0;
		uParam0->f_10[i /*8*/].f_7 = 0;
	}

	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	return;
}

int func_273(int iParam0) // Position - 0x9BA2 Hash - 0x1B64DC55 ^0x1B64DC55
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 6;
	}

	return 0;
}

void func_274(Hash hParam0, Hash hParam1) // Position - 0x9BDA Hash - 0xFD3CFE9C ^0x11BFE4AF
{
	MISC::COPY_SCRIPT_STRUCT(hParam1, hParam0, 94);
	return;
}

void func_275(int iParam0, Ped pedParam1) // Position - 0x9BEC Hash - 0xB4A7990C ^0x49292873
{
	Ped ped;
	BOOL flag;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (!func_71(iParam0))
		return;

	ped = func_88(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (PED::IS_PED_INJURED(ped))
		return;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedParam1))
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedParam1))
			return;

	if (func_614())
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(pedParam1) != 100000000f)
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(pedParam1, 100000000f);
	
		return;
	}

	flag = false;

	if (func_167(0) == 1 || func_167(0) == 8)
		flag = true;

	if (flag && func_615(ped, false, true) < 5f)
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(pedParam1) != 100000000f)
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(pedParam1, 100000000f);
	
		return;
	}

	if (func_616())
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(pedParam1) != 1.2f)
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(pedParam1, 1.2f);
	
		return;
	}

	if (PERSISTENCE::_0x5A79220F6D38D7C3(pedParam1) != 1f)
		PERSISTENCE::_0xDC0A1F0ECEC9F0C0(pedParam1, 1f);

	return;
}

void func_276(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x9D07 Hash - 0x125E1FB8 ^0x58C5F328
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(pedParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(pedParam0);

	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(pedParam0);
	
		switch (*uParam4)
		{
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		
			case 0:
				*uParam1 = 0;
				break;
		
			case 1:
				*uParam1 = 1;
				break;
		}
	}

	return;
}

BOOL func_277(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x9D7C Hash - 0xF684EE16 ^0xD8F147D7
{
	int num;
	var unk;
	BOOL flag;

	num = uParam3;
	unk = iParam2;

	if (num < unk)
		iParam2 = num;

	flag = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(anParam0, pedParam1, iParam2);
	return flag;
}

void func_278(Hash hParam0, int iParam1) // Position - 0x9DA5 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_431(hParam0, 606799272))
			func_617(hParam0, iParam1);
	
		if (func_431(hParam0, -1112814642) && func_431(hParam0, -1697809989))
			func_618(hParam0, iParam1, true, false);
	}

	return;
}

BOOL func_279(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x9DF8 Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

BOOL func_280() // Position - 0x9E62 Hash - 0x8E012C29 ^0x8E012C29
{
	if (!func_610() && func_619(true))
		return true;

	return false;
}

Hash func_281(Ped pedParam0) // Position - 0x9E81 Hash - 0xF32C828D ^0x75879223
{
	int num;
	var unk;
	var unk2;
	var unk3;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	func_276(pedParam0, &unk, &unk2, &num, &unk3);
	func_277(&num2, pedParam0, num, unk);

	if (num2 != 0)
		return num2;

	switch (num)
	{
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
	
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
	
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
	
		default:
		
	}

	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

BOOL func_282(Hash hParam0, int iParam1) // Position - 0x9F0E Hash - 0xCF0E4834 ^0xCF0E4834
{
	if (iParam1 == 101)
		return func_620(hParam0);

	if (func_621(hParam0, iParam1))
		return false;

	return func_622(hParam0, iParam1);
}

void func_283(int iParam0, BOOL bParam1) // Position - 0x9F40 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_524(iParam0, &num, &num2);

	if (!func_623(iParam0, num, num2, bParam1))
		return;

	func_624(num, num2);
	return;
}

BOOL func_284(Hash hParam0, int iParam1) // Position - 0x9F6D Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_285(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x9F87 Hash - 0x4239382B ^0xCA53D4CD
{
	int inventoryIdFromPed;
	int num;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0);

	if (func_388(pedParam0))
	{
		num = func_401(pedParam0);
	
		if (func_284(hParam1, 0))
			if (func_511(hParam1))
				func_625(num, hParam1, iParam2);
	}

	return func_626(inventoryIdFromPed, hParam1, iParam2, bParam3, hParam4);
}

int func_286(Ped pedParam0, Ped pedParam1) // Position - 0x9FD3 Hash - 0x58E57CF6 ^0xB21361CC
{
	int inventoryIdFromPed;
	Hash hash;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0);

	if (ENTITY::GET_IS_ANIMAL(pedParam1) || ENTITY::_GET_IS_BIRD(pedParam1))
	{
		hash = func_515(pedParam1);
	
		if (!func_284(hash, 0))
			hash = func_510(pedParam1);
	}
	else
	{
		hash = func_510(pedParam1);
	}

	num = func_627(inventoryIdFromPed, hash, 1);
	return num;
}

BOOL func_287(int iParam0) // Position - 0xA047 Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_422;
}

BOOL func_288(Ped pedParam0) // Position - 0xA07B Hash - 0x4BD81D3A ^0xB7E8504D
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0);

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "StableOwnedHorse"))
		return true;

	return false;
}

int func_289(int iParam0) // Position - 0xA0AC Hash - 0xFD4A39B0 ^0x31F3A108
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_1;
}

void func_290(Ped pedParam0, int iParam1) // Position - 0xA0E2 Hash - 0x1BA103C9 ^0xD7A540F2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	DECORATOR::DECOR_SET_INT(pedParam0, "StableOwnedHorse", iParam1);
	return;
}

Hash func_291(int iParam0) // Position - 0xA10D Hash - 0x99C4249C ^0x95802108
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -15;

	if (iParam0 >= 7)
		return -15;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_2;
}

void func_292(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xA147 Hash - 0x2BEE335D ^0x2BEE335D
{
	func_628(func_221(), hParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_293(Ped pedParam0) // Position - 0xA165 Hash - 0x7B2EBFA9 ^0x812F864F
{
	char* propertyName;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	propertyName = "StableOwnedHorse";

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
		DECORATOR::DECOR_REMOVE(pedParam0, propertyName);

	return;
}

void func_294(int iParam0) // Position - 0xA19D Hash - 0xB8889113 ^0xCF69E357
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_534(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	return;
}

int func_295(Ped pedParam0) // Position - 0xA1D3 Hash - 0x8C8FF3C8 ^0xC0D55BE9
{
	int _int;

	if (!func_288(pedParam0))
		return -1;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "StableOwnedHorse");
	return _int;
}

void func_296(int iParam0, int iParam1) // Position - 0xA1F7 Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_422 = iParam1;
	return;
}

void func_297(int iParam0, int iParam1) // Position - 0xA22B Hash - 0x378678AB ^0xB2BC5FB8
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_1 = iParam1;
	return;
}

void func_298(int iParam0, Hash hParam1) // Position - 0xA261 Hash - 0x378678AB ^0xF8396D31
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_2 = hParam1;
	return;
}

BOOL func_299(int iParam0) // Position - 0xA297 Hash - 0x2BC66D9 ^0x2BC66D9
{
	BOOL flag;
	Ped ped;
	Entity entity;

	flag = false;

	if (!func_71(iParam0))
		flag = true;

	ped = func_88(iParam0);

	if (!flag)
		if (!func_518(ped, 0))
			flag = true;

	if (!flag)
	{
		entity = func_629(ped, 0);
	
		if (!ENTITY::IS_ENTITY_A_PED(entity) && !ENTITY::_GET_IS_CARRIABLE_PELT(entity))
			flag = true;
	}

	if (flag)
		return 0;

	return 1;
}

BOOL func_300(int iParam0) // Position - 0xA2FD Hash - 0x1C25C14A ^0xDF408191
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_425;
}

BOOL func_301(int iParam0) // Position - 0xA315 Hash - 0x268B9F16 ^0x73AF3252
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_425.f_1 != -15;
}

Hash func_302(int iParam0) // Position - 0xA333 Hash - 0x7692B32E ^0xE4B3B733
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_425.f_1;
}

int func_303(Hash hParam0, Hash hParam1) // Position - 0xA34D Hash - 0xF7FF0680 ^0xF7FF0680
{
	int num;

	if (func_630(hParam0, hParam1, true))
		num = func_631(hParam0) - func_631(hParam1);
	else
		num = func_631(hParam1) - func_631(hParam0);

	while (num < 0)
	{
		num = num + 24;
	}

	while (num > 23)
	{
		num = num - 24;
	}

	return num;
}

void func_304(int iParam0, int iParam1) // Position - 0xA3A4 Hash - 0x9CE79F97 ^0xB6DDB347
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_425 = iParam1;
	return;
}

void func_305(int iParam0, Hash hParam1) // Position - 0xA3BE Hash - 0x97FD065 ^0x5BABB373
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_425.f_1 = hParam1;
	return;
}

void func_306(int iParam0) // Position - 0xA3DA Hash - 0xF7D3FBB9 ^0x367D8B7E
{
	func_632(&Global_1900383.f_317.f_38[iParam0 /*3*/]);
	return;
}

void func_307(int iParam0) // Position - 0xA3F3 Hash - 0xF7D3FBB9 ^0x367D8B7E
{
	func_633(&Global_1900383.f_317.f_38[iParam0 /*3*/]);
	return;
}

BOOL func_308(int iParam0) // Position - 0xA40C Hash - 0x452FA7D9 ^0x188AE651
{
	return func_634(&Global_1900383.f_317.f_38[iParam0 /*3*/]);
}

BOOL func_309(int iParam0, float fParam1) // Position - 0xA425 Hash - 0xD513455 ^0xFC59DF12
{
	return func_635(&Global_1900383.f_317.f_38[iParam0 /*3*/], fParam1);
}

BOOL func_310(Ped pedParam0) // Position - 0xA440 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (pedParam0)
	{
		case joaat("a_c_horse_john_endlesssummer"):
		case joaat("a_c_horse_buell_warvets"):
			return true;
	}

	return false;
}

struct<8> func_311(int iParam0) // Position - 0xA464 Hash - 0xF6D42AFF ^0xA3718EDE
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return unk;

	if (iParam0 >= 7)
		return unk;

	return Global_40.f_1095.f_1[iParam0 /*436*/];
}

char* func_312(Ped pedParam0) // Position - 0xA4A8 Hash - 0x7AF54176 ^0xFADB487E
{
	switch (pedParam0)
	{
		case joaat("a_c_horse_john_endlesssummer"):
			return "HORSE_NAME_JOHN_ENDLESSSUMMER";
	
		case joaat("a_c_horse_buell_warvets"):
			return "HORSE_NAME_BUELL_WARVETS";
	}

	return "";
}

void func_313(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xA4DC Hash - 0x844BA98C ^0x7B058A05
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/] = { uParam1 };
	return;
}

void func_314(int iParam0) // Position - 0xA513 Hash - 0x790A22DB ^0xF78FAA20
{
	Ped ped;
	const char* name;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = Global_1900383[iParam0 /*45*/];

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	name = func_636(func_311(iParam0));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(name))
		PED::_SET_PED_PROMPT_NAME(ped, name);

	return;
}

void func_315(int iParam0) // Position - 0xA57F Hash - 0x37EBB9FA ^0xA705E265
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}

	Global_1900383[iParam0 /*45*/].f_25 = 0;
	return;
}

void func_316(Blip blParam0) // Position - 0xA5D0 Hash - 0x537CC7C9 ^0x52ED0113
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_638(func_637(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_639())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_640();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_JOHN");
	}

	return;
}

void func_317(Blip blParam0, BOOL bParam1) // Position - 0xA61D Hash - 0x74D2E5D1 ^0x6BCEF773
{
	char* str1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_638(func_637(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		str1 = "";
	
		if (bParam1)
			str1 = "HORSE_BLIP_TEMPORARY";
		else if (func_639())
			str1 = "HORSE_BLIP_ARTHUR";
		else if (func_640())
			str1 = "HORSE_BLIP_JOHN";
	
		if (MISC::COMPARE_STRINGS(str1, "", false, -1) != 0)
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, str1);
	}

	return;
}

void func_318(Blip blParam0) // Position - 0xA68F Hash - 0x9892E8C ^0x28660E03
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_2"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_3"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_4"));
	return;
}

void func_319(Blip blParam0) // Position - 0xA71B Hash - 0x85615470 ^0x31794F85
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	return;
}

BOOL func_320(Ped pedParam0) // Position - 0xA747 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_321(Ped pedParam0, Object* pobParam1) // Position - 0xA789 Hash - 0xF5CF6AEA ^0x2F940AE8
{
	int carriableEntityState;

	if (!ENTITY::DOES_ENTITY_EXIST(pobParam1))
		return 0;

	if (PED::_GET_CARRIER_AS_PED(pobParam1) != pedParam0)
		return 0;

	carriableEntityState = ENTITY::GET_CARRIABLE_ENTITY_STATE(pobParam1);

	if (carriableEntityState == 5)
		return 1;

	if (carriableEntityState == 7)
		return 1;

	return 0;
}

void func_322(int iParam0, int iParam1) // Position - 0xA7CB Hash - 0xDAB26FA1 ^0x295859B2
{
	Ped ped;
	var unk;
	int num;
	int gameTimer;
	float num2;
	int num3;
	int num4;

	if (PED::IS_PED_INJURED(Global_35))
		return;

	if (!func_71(iParam0))
		return;

	ped = func_88(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (PED::IS_PED_INJURED(ped))
		return;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return;

	if (!func_140(40))
	{
		if (func_173(iParam0, 128))
			return;
	
		if (func_641(iParam1, &unk))
		{
			num = func_642(iParam1);
		
			if (func_643(ped, iParam1) != num)
				func_644(ped, iParam1, num);
		}
	
		return;
	}

	if (func_390(ped))
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	num2 = func_645(iParam0, iParam1);

	if (num2 >= 30f)
	{
		func_646(iParam0, iParam1, gameTimer);
		return;
	}

	num3 = func_578(iParam0, iParam1);
	func_647(ped, iParam0, iParam1);

	if (func_648(iParam0, iParam1) > 0f)
	{
		func_649(iParam0, iParam1);
	}
	else
	{
		func_650(ped, iParam0, iParam1);
		num4 = func_578(iParam0, iParam1);
		func_651(iParam0, iParam1, num3, num4);
	}

	func_646(iParam0, iParam1, gameTimer);
	return;
}

void func_323(int iParam0, int iParam1) // Position - 0xA8E8 Hash - 0xDAB26FA1 ^0x295859B2
{
	Ped ped;
	int attributeIndex;
	int newValue;
	int gameTimer;
	float num;
	int num2;
	int num3;

	if (PED::IS_PED_INJURED(Global_35))
		return;

	if (!func_71(iParam0))
		return;

	ped = func_88(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (PED::IS_PED_INJURED(ped))
		return;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return;

	if (!func_140(41))
	{
		if (func_652(iParam1, &attributeIndex))
		{
			newValue = func_653(iParam1);
			ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(ped, attributeIndex, newValue);
		}
	
		return;
	}

	if (func_390(ped))
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	num = func_654(iParam0, iParam1);

	if (num >= 30f)
	{
		func_655(iParam0, iParam1, gameTimer);
		return;
	}

	num2 = func_437(iParam0, iParam1);
	func_656(ped, iParam0, iParam1);

	if (func_657(iParam0, iParam1) > 0f)
	{
		func_658(iParam0, iParam1);
	}
	else
	{
		func_659(ped, iParam0, iParam1);
		num3 = func_437(iParam0, iParam1);
		func_660(iParam0, iParam1, num2, num3);
	}

	func_655(iParam0, iParam1, gameTimer);
	return;
}

void func_324(int iParam0) // Position - 0xA9EA Hash - 0x6311676E ^0x6311676E
{
	Ped ped;
	float multiplier;
	float num;
	float num2;
	float multiplier2;
	float multiplier3;
	float num3;
	int newValue;
	int newValue2;
	var unk;
	Hash key;
	int outData;
	var outData2;
	int i;
	int outData3;
	var outData4;
	int j;
	int coreIndex;
	int attributeBonusRank;
	int coreIndex2;
	int attributeBonusRank2;
	float healthRechargeMultiplier;
	float staminaRechargeMultiplier;
	float staminaDepletionMultiplier;

	iParam0 = func_87(iParam0);

	if (iParam0 <= -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_71(iParam0))
		return;

	ped = func_88(iParam0);
	multiplier = 1f;
	num = 1f;
	num2 = 0f;
	multiplier2 = 1f;
	multiplier3 = 1f;
	num3 = 0f;
	newValue = 0;
	newValue2 = 0;

	if (iParam0 == func_201())
	{
		unk = { func_355() };
		key = unk.f_1;
	
		if (func_284(key, 0))
		{
			outData.f_1 = 20;
			ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(key, &outData);
		
			for (i = 0; i < outData; i = i + 1)
			{
				ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2);
			
				switch (outData2.f_1)
				{
					case -1620444701:
						newValue = newValue + BUILTIN::FLOOR((float)outData2.f_2 * 0.01f);
						break;
				
					case -845587290:
						multiplier3 = multiplier3 - (outData2.f_5 * 0.01f);
						break;
				
					case -225223329:
						num2 = num2 + (outData2.f_5 * 0.01f);
						break;
				
					case 1167068375:
						num3 = num3 + (outData2.f_5 * 0.01f);
						break;
				
					case 1605773431:
						multiplier2 = multiplier2 + (outData2.f_5 * 0.01f);
						break;
				
					case 2086291460:
						newValue2 = newValue2 + BUILTIN::FLOOR((float)outData2.f_2 * 0.01f);
						break;
				}
			}
		}
	
		key = unk.f_3;
	
		if (func_284(key, 0))
		{
			outData3.f_1 = 20;
			ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(key, &outData3);
		
			for (j = 0; j < outData3; j = j + 1)
			{
				ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData3.f_1[j], &outData4);
			
				switch (outData4.f_1)
				{
					case -1620444701:
						newValue = newValue + BUILTIN::FLOOR((float)outData4.f_2 * 0.01f);
						break;
				
					case -845587290:
						multiplier3 = multiplier3 - (outData4.f_5 * 0.01f);
						break;
				
					case -225223329:
						num2 = num2 + (outData4.f_5 * 0.01f);
						break;
				
					case 1167068375:
						num3 = num3 + (outData4.f_5 * 0.01f);
						break;
				
					case 1605773431:
						multiplier2 = multiplier2 + (outData4.f_5 * 0.01f);
						break;
				
					case 2086291460:
						newValue2 = newValue2 + BUILTIN::FLOOR((float)outData4.f_2 * 0.01f);
						break;
				}
			}
		}
	}

	if (func_661())
		newValue = newValue + 1;

	func_662(0, num2);
	func_662(1, num3);
	coreIndex = func_663();
	attributeBonusRank = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(ped, coreIndex);

	if (attributeBonusRank != newValue)
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(ped, coreIndex, newValue);

	coreIndex2 = func_664();
	attributeBonusRank2 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(ped, coreIndex2);

	if (attributeBonusRank2 != newValue2)
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(ped, coreIndex2, newValue2);

	healthRechargeMultiplier = PED::_GET_HEALTH_RECHARGE_MULTIPLIER(ped);

	if (healthRechargeMultiplier != multiplier)
		PED::_SET_HEALTH_RECHARGE_MULTIPLIER(ped, multiplier);

	num = num;
	staminaRechargeMultiplier = PED::_GET_STAMINA_RECHARGE_MULTIPLIER(ped);

	if (staminaRechargeMultiplier != multiplier2)
		PED::_SET_STAMINA_RECHARGE_MULTIPLIER(ped, multiplier2);

	staminaDepletionMultiplier = PED::_GET_STAMINA_DEPLETION_MULTIPLIER(ped);

	if (staminaDepletionMultiplier != multiplier3)
		PED::_SET_STAMINA_DEPLETION_MULTIPLIER(ped, multiplier3);

	return;
}

void func_325(int iParam0) // Position - 0xACC5 Hash - 0x5161A142 ^0x26FA799F
{
	Ped ped;
	int num;
	var unk;
	int i;
	Entity entity;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = func_273(i);
	
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		{
		}
		else
		{
			entity = unk.f_3;
		
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entity))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, true, true);
			
				ENTITY::_DELETE_CARRIABLE(&entity);
			}
		}
	}

	return;
}

void func_326(int iParam0, Ped pedParam1) // Position - 0xAD6B Hash - 0xA2BBC532 ^0xA2BBC532
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/] = pedParam1;
	return;
}

void func_327(int iParam0) // Position - 0xAD97 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1900383.f_316 = Global_1900383.f_316 - Global_1900383.f_316 && iParam0;
	return;
}

void func_328(int iParam0) // Position - 0xADB8 Hash - 0x43F6A1D8 ^0x43BF9151
{
	if (iParam0 <= -1 || iParam0 >= 108)
		return;

	Global_1913814.f_209[iParam0] = 0;
	return;
}

void func_329() // Position - 0xADE0 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

struct<4> func_330(BOOL bParam0) // Position - 0xADEC Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_331(joaat("character"), func_665(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_331(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xAE08 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_284(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_666(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_332(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xAE39 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_284(hParam0, 0))
		return 0;

	guid = { func_331(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_666(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

void func_333(var uParam0) // Position - 0xAE81 Hash - 0xA4B72113 ^0x62A5EAE1
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

BOOL func_334(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0xAE9C Hash - 0x86E39CDA ^0xCF922D1
{
	!func_284(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return false;

	if (func_667(hParam0, panParam2, iParam3, bParam5, false))
		return false;

	if (!func_668(false))
		return false;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_666(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_335(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xAEFE Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_668(false))
		return func_669(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_670(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_666(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_336(int iParam0) // Position - 0xAF71 Hash - 0x3181E2E5 ^0x3181E2E5
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_173(iParam0, 2) || func_173(iParam0, 4) || func_173(iParam0, 8))
		return true;

	return false;
}

Vector3 func_337(int iParam0) // Position - 0xAFBF Hash - 0x91720586 ^0x8021A149
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	if (iParam0 >= 7)
		return 0f, 0f, 0f;

	return Global_1900383[iParam0 /*45*/].f_19;
}

float func_338(int iParam0) // Position - 0xAFF3 Hash - 0xF21A6F3 ^0xE1B70D5B
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_1900383[iParam0 /*45*/].f_22;
}

void func_339(int iParam0) // Position - 0xB021 Hash - 0x49584173 ^0x49584173
{
	func_671(iParam0);
	func_672(iParam0);
	return;
}

BOOL func_340() // Position - 0xB035 Hash - 0x81B0D04A ^0x9BAF92C7
{
	BOOL flag;

	flag = PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY();

	if (flag)
		return true;

	return false;
}

BOOL func_341(int iParam0) // Position - 0xB04D Hash - 0xA26DB50F ^0xA26DB50F
{
	BOOL num;

	num = 1;

	if (!func_673(iParam0))
		num = 0;

	if (!func_674(iParam0))
		num = 0;

	return num;
}

Ped func_342(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0xB074 Hash - 0x48B58DCF ^0xC3A42385
{
	Ped ped;

	if (!PED::_IS_THIS_MODEL_A_HORSE(eptParam0))
		return 0;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(ped, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(ped, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam0));
	return ped;
}

void func_343(Ped pedParam0) // Position - 0xB0C2 Hash - 0xF32FB80D ^0xB662E625
{
	Player player;
	Hash entityModel;
	Hash defaultRelationshipGroupHash;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);

	if (func_389(pedParam0))
		return;

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, false, true);

	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(pedParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_35, pedParam0, false);
	PED::_SET_PED_PERSONALITY(pedParam0, joaat("player_horse"));
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	defaultRelationshipGroupHash = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(entityModel);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, defaultRelationshipGroupHash);
	ENTITY::SET_ENTITY_INVINCIBLE(pedParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(pedParam0, false);
	PLAYER::_SET_PLAYER_MOUNT_STATE_ACTIVE(player, true);
	PED::REQUEST_PED_VISIBILITY_TRACKING(pedParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(pedParam0, false);

	if (func_388(pedParam0))
	{
		num = func_401(pedParam0);
	
		if (func_675(num))
			PED::SET_PED_CONFIG_FLAG(pedParam0, 324, true);
	}

	PED::SET_PED_CONFIG_FLAG(pedParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 24, false);
	return;
}

void func_344(Ped pedParam0, int iParam1) // Position - 0xB22C Hash - 0x897EDA31 ^0x581CDAD2
{
	int value;
	int bondingLevel;
	int num;
	var unk;
	int i;
	int num2;
	var unk2;
	int j;
	Player player;

	if (iParam1 == -1)
		return;

	if (iParam1 >= 7)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	value = func_352(iParam1);
	DECORATOR::DECOR_SET_INT(pedParam0, "HorseGender", value);
	bondingLevel = func_115(iParam1);
	func_676(pedParam0, bondingLevel);
	PED::_SET_MOUNT_BONDING_LEVEL(pedParam0, bondingLevel);
	num = BUILTIN::FLOOR(func_367(iParam1));
	func_677(pedParam0, num);

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_641(i, &unk))
		{
			num2 = func_578(iParam1, i);
			func_644(pedParam0, i, num2);
		}
	}

	for (j = 0; j < 3; j = j + 1)
	{
		if (func_652(j, &unk2))
		{
			num2 = func_437(iParam1, j);
			func_678(pedParam0, j, num2);
		}
	}

	player = PLAYER::PLAYER_ID();
	PED::_0xA691C10054275290(pedParam0, player, func_679(iParam1));

	if (iParam1 == 0)
	{
		PED::_0x6734F0A6A52C371C(player, func_680(iParam1));
		PED::_0x024EC9B649111915(pedParam0, true);
	}

	return;
}

void func_345(int iParam0, var uParam1) // Position - 0xB338 Hash - 0xA28403D1 ^0xA28403D1
{
	int i;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	for (i = 0; i < 57; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam1->[i], &Global_40.f_1095.f_1[iParam0 /*436*/].f_298[i], 1);
	}

	return;
}

void func_346(int iParam0, var uParam1) // Position - 0xB38C Hash - 0xB47572AE ^0xFF60C73A
{
	Ped ped;
	int inventoryIdFromPed;
	int i;
	Hash hash;
	Hash hash2;
	int num;
	int num2;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped);

	for (i = 0; i < 57; i = i + 1)
	{
		hash = func_681(i, 1);
		hash2 = hash;
	
		if (!func_284(hash2, 0))
		{
		}
		else
		{
			num = uParam1->[i];
		
			if (num <= 0)
			{
			}
			else
			{
				num2 = func_627(inventoryIdFromPed, hash2, num);
			}
		}
	}

	return;
}

void func_347(int iParam0) // Position - 0xB42E Hash - 0xE66AB19D ^0x4724BDEF
{
	Ped ped;
	int i;
	Hash hash;
	Hash hash2;
	Any any;
	Any any2;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[i /*5*/];
	
		if (func_284(hash, 0))
		{
			hash2 = hash;
			any = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[i /*5*/].f_1;
			any2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[i /*5*/].f_2;
			PED::_0xC412AA1C73111FE0(ped, hash2, any, any2, 0);
		}
	}

	return;
}

void func_348(int iParam0) // Position - 0xB4F0 Hash - 0x88CF9725 ^0x88CF9725
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_682(iParam0);
	func_683();
	return;
}

float func_349(int iParam0) // Position - 0xB51C Hash - 0xCDD17818 ^0xF4066B7F
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420.f_1;
}

void func_350(int iParam0, int iParam1) // Position - 0xB552 Hash - 0xDE428423 ^0xA3C2F2F8
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_23 = iParam1;
	return;
}

int func_351(int iParam0) // Position - 0xB580 Hash - 0x79966B74 ^0x23A40B4
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_23;
}

int func_352(int iParam0) // Position - 0xB5AE Hash - 0xACA56E21 ^0xE9AF9CDD
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_10;
}

void func_353(Ped pedParam0, int iParam1) // Position - 0xB5E1 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

struct<2> func_354(int iParam0) // Position - 0xB608 Hash - 0xC0CC9820 ^0xC0CC9820
{
	var unk;
	var unk3;
	var unk4;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return unk;

	if (iParam0 >= 7)
		return unk;

	!func_684(iParam0, &unk3);
	!func_685(iParam0, &unk4);
	unk = unk3;
	unk.f_1 = unk4;
	return unk;
}

struct<6> func_355() // Position - 0xB658 Hash - 0x98D1204F ^0xBF85383B
{
	var unk;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	var unk11;
	var unk12;

	if (func_686(joaat("SLOTID_HORSE_BEDROLL"), &unk7))
		unk.f_4 = unk7;

	if (func_686(joaat("SLOTID_HORSE_BLANKET"), &unk8))
		unk = unk8;

	if (func_686(joaat("SLOTID_HORSE_HORN"), &unk9))
		unk.f_2 = unk9;

	if (func_686(joaat("SLOTID_HORSE_SADDLEBAG"), &unk10))
		unk.f_5 = unk10;

	if (func_686(joaat("SLOTID_HORSE_STIRRUP"), &unk11))
		unk.f_3 = unk11;

	if (func_686(joaat("SLOTID_HORSE_SADDLE"), &unk12))
		unk.f_1 = unk12;

	return unk;
}

void func_356(var uParam0) // Position - 0xB6DA Hash - 0x9602B779 ^0x9602B779
{
	func_687(uParam0);
	func_688(uParam0, 0);
	func_689(uParam0, 0);
	func_690(uParam0, 0);
	func_691(uParam0, 0);
	func_692(uParam0, 0);
	func_693(uParam0, 0);
	return;
}

int func_357(Ped pedParam0, int iParam1) // Position - 0xB712 Hash - 0x7F66DB32 ^0x21887AA0
{
	int attributeIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (func_652(iParam1, &attributeIndex))
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(pedParam0, attributeIndex);

	return 0;
}

Hash func_358(int iParam0) // Position - 0xB758 Hash - 0x7FE03C7A ^0xE25990EB
{
	int num;

	num = 1745919061;

	if (iParam0 <= 0)
		num = -2045421226;
	else if (iParam0 < 5)
		num = -1745814259;
	else if (iParam0 < 10)
		num = -325933489;
	else if (iParam0 < 15)
		num = -1065791927;
	else if (iParam0 < 20)
		num = -844699484;
	else if (iParam0 < 25)
		num = -1273449080;
	else if (iParam0 < 30)
		num = 927185840;
	else if (iParam0 < 35)
		num = 149872391;
	else if (iParam0 < 40)
		num = 399015098;
	else if (iParam0 < 45)
		num = -644349862;
	else if (iParam0 < 50)
		num = 1745919061;
	else if (iParam0 < 55)
		num = 1004225511;
	else if (iParam0 < 60)
		num = 1278600348;
	else if (iParam0 < 65)
		num = 502499352;
	else if (iParam0 < 70)
		num = -2093198664;
	else if (iParam0 < 75)
		num = -1837436619;
	else if (iParam0 < 80)
		num = 1736416063;
	else if (iParam0 < 85)
		num = 2040610690;
	else if (iParam0 < 90)
		num = -1173634986;
	else if (iParam0 < 95)
		num = -867801909;
	else if (iParam0 >= 95)
		num = 1960266524;

	return num;
}

void func_359(int iParam0, Hash hParam1) // Position - 0xB8C9 Hash - 0xDE428423 ^0x8B767C94
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_1 = hParam1;
	return;
}

BOOL func_360(int iParam0) // Position - 0xB8F7 Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_433;
}

void func_361(Ped pedParam0, BOOL bParam1) // Position - 0xB92B Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_362(Ped pedParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0xB970 Hash - 0x50380B5F ^0xA5E53457
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
		return;

	func_694(pedParam0);
	func_695(pedParam0, uParam1);
	func_468(pedParam0);
	func_696(pedParam0, uParam2);

	if (hParam3 != 0)
		func_697(pedParam0, hParam3, false);

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, true);
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_363(int iParam0) // Position - 0xB9E4 Hash - 0xE66AB19D ^0x4724BDEF
{
	Ped carrier;
	Object object;
	Ped ped;
	Vector3 offsetFromEntityInWorldCoords;
	Vector3 vector;
	int carriableSlot;
	ePedType model;
	Hash drawable;
	Hash albedo;
	Hash normal;
	Hash material;
	Hash palette;
	int tint0;
	int tint1;
	int tint2;
	int num;
	int i;
	int j;
	int num2;
	Hash suboutfit;
	Hash hash;
	int num3;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	carrier = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(carrier))
		return;

	if (ENTITY::IS_ENTITY_DEAD(carrier) || PED::IS_PED_INJURED(carrier))
		return;

	model.f_10 = 10;

	for (j = 0; j < 3; j = j + 1)
	{
		num = j;
		func_272(&model);
		func_274(&Global_40.f_1095.f_1[iParam0 /*436*/].f_15[num /*94*/], &model);
	
		if (!STREAMING::IS_MODEL_VALID(model))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(model))
		{
		}
		else
		{
			switch (j)
			{
				case 0:
					vector = { 0f, -1f, 0f };
					break;
			
				case 1:
					vector = { -1f, 0f, 0f };
					break;
			
				case 2:
					vector = { 1f, 0f, 0f };
					break;
			}
		
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(carrier, vector) };
		
			if (STREAMING::_IS_MODEL_AN_OBJECT(model))
			{
				object = OBJECT::CREATE_OBJECT(model, offsetFromEntityInWorldCoords, true, true, false, false, true);
			
				if (!ENTITY::DOES_ENTITY_EXIST(object))
				{
				}
				else
				{
					carriableSlot = func_698(j);
					TASK::TASK_CARRIABLE(object, model.f_3, carrier, carriableSlot, 0);
					ENTITY::_SET_ENTITY_CARCASS_TYPE(object, model.f_1);
					ENTITY::_0xEF259AA1E097E0AD(object, model.f_93);
					num2 = func_286(carrier, object);
					goto 0x31E;
				}
			}
		
			if (STREAMING::IS_MODEL_A_PED(model))
			{
				ped = func_699(model, offsetFromEntityInWorldCoords, 0, true, false, 0, true, true, false, false, true, false, false);
			
				if (!ENTITY::DOES_ENTITY_EXIST(ped))
				{
				}
				else
				{
					if (ENTITY::GET_IS_ANIMAL(ped))
					{
						if (model.f_6 == 2)
							PERSISTENCE::_0x8DE104BEC243A73B(model);
					
						PED::_SET_PED_QUALITY(ped, model.f_4);
						FLOCK::_SET_ANIMAL_RARITY(ped, model.f_6);
						PED::_SET_PED_DAMAGE_CLEANLINESS(ped, model.f_7);
					}
				
					if (model.f_8 != 0)
					{
						PED::_EQUIP_META_PED_OUTFIT(ped, model.f_8);
					
						if (model.f_92)
						{
							suboutfit = joaat("META_OUTFIT_FIELD_DRESSING_001");
						
							if (PED::_DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL(model.f_8, suboutfit, model))
								PED::_EQUIP_META_PED_SUBOUTFIT(ped, suboutfit, 0);
						}
					}
				
					for (i = 0; i < model.f_9; i = i + 1)
					{
						drawable = model.f_10[i /*8*/];
						albedo = model.f_10[i /*8*/].f_1;
						normal = model.f_10[i /*8*/].f_2;
						material = model.f_10[i /*8*/].f_3;
						palette = model.f_10[i /*8*/].f_4;
						tint0 = model.f_10[i /*8*/].f_5;
						tint1 = model.f_10[i /*8*/].f_6;
						tint2 = model.f_10[i /*8*/].f_7;
						PED::_SET_META_PED_TAG(ped, drawable, albedo, normal, material, palette, tint0, tint1, tint2);
					}
				
					PED::_UPDATE_PED_VARIATION(ped, false, true, true, true, false);
				
					if (model.f_2 == 2)
					{
						ENTITY::SET_ENTITY_HEALTH(ped, 0, 0);
						PED::SET_PED_CONFIG_FLAG(ped, 517, true);
						PERSISTENCE::_0xF5622FA6ACFCA7DB(ped, 0);
					}
				
					if (model.f_92)
					{
						PED::SET_LOOTING_FLAG(ped, 0, false);
						ENTITY::_SET_ENTITY_FULLY_LOOTED(ped, true);
					}
				
					carriableSlot = func_698(j);
					TASK::TASK_CARRIABLE(ped, model.f_3, carrier, carriableSlot, 0);
					ENTITY::_SET_ENTITY_CARCASS_TYPE(ped, model.f_1);
					ENTITY::_0xEF259AA1E097E0AD(ped, model.f_93);
					hash = func_515(ped);
				
					if (func_284(hash, 0))
					{
						if (hash != model.f_1)
						{
							Global_40.f_1095.f_1[iParam0 /*436*/].f_15[num /*94*/].f_1 = hash;
							model.f_1 = hash;
						}
					}
				
					num3 = func_286(carrier, ped);
					func_618(model.f_1, 0, false, true);
				}
			}
		}
	}

	return;
}

void func_364(int iParam0) // Position - 0xBD0E Hash - 0xF5A23C19 ^0xCAFB2C0D
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	return;
}

void func_365(int iParam0) // Position - 0xBD4A Hash - 0x44423EC0 ^0x6FCB7840
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_23 = 0;
	return;
}

void func_366(int iParam0) // Position - 0xBD77 Hash - 0xA5F9E65B ^0xA5F9E65B
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_387(iParam0, 1);
	return;
}

float func_367(int iParam0) // Position - 0xBDA0 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_368(float fParam0, Any anParam1, float fParam2) // Position - 0xBDD6 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

BOOL func_369() // Position - 0xBDEB Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

int func_370() // Position - 0xBE07 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_378;
}

void func_371(int iParam0) // Position - 0xBE16 Hash - 0xC421D95B ^0x9AF120BB
{
	Global_1900383.f_378.f_9 = iParam0;
	return;
}

void func_372(int iParam0) // Position - 0xBE29 Hash - 0xC421D95B ^0xA01E003E
{
	Global_1900383.f_378.f_10 = iParam0;
	return;
}

void func_373(int iParam0, int iParam1) // Position - 0xBE3C Hash - 0xB6344184 ^0x7481B0DF
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383.f_378.f_1[iParam0] != iParam1;
	Global_1900383.f_378.f_1[iParam0] = iParam1;
	return;
}

void func_374(int iParam0) // Position - 0xBE7F Hash - 0xC421D95B ^0xDB6F317E
{
	Global_1900383.f_378.f_11 = iParam0;
	return;
}

BOOL func_375() // Position - 0xBE92 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_376(int iParam0) // Position - 0xBEB2 Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_198(iParam0) == 0)
		return false;

	return true;
}

void func_377() // Position - 0xBEE5 Hash - 0x6E7760EB ^0xBA4A48A9
{
	int num;

	num = Global_40.f_1095.f_1[5 /*436*/].f_11;

	switch (num)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(func_88(6)) && func_187(Global_35, func_88(6), true, true) <= 80f)
				func_381("WHISTLE_NEAR_UNBONDED", 10000, 0, 0, 0, true);
			else
				func_381("WHISTLE_HORSE_DEAD", 10000, 0, 0, 0, true);
			break;
	
		case 2:
			func_381("WHISTLE_HORSE_STOLEN", 10000, 0, 0, 0, true);
			break;
	}

	return;
}

BOOL func_378(Interior inParam0) // Position - 0xBF6F Hash - 0xE90CFCF7 ^0xD86E30BD
{
	var position;
	int nameHash;

	if (INTERIOR::IS_VALID_INTERIOR(inParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(inParam0, &position, &nameHash);
	
		switch (nameHash)
		{
			case joaat("l_14_cave_int"):
			case joaat("gap_mine_int"):
			case joaat("mil_mine_cave_int"):
			case joaat("m05_bearcave_main"):
			case joaat("elh_seacaves_int"):
			case joaat("bea_01_int"):
			case joaat("agu_fus_cave_int"):
			case 1633500362:
				return true;
		}
	}

	return false;
}

BOOL func_379(Interior inParam0) // Position - 0xBFCA Hash - 0x37ECBEDE ^0x916D1B02
{
	var position;
	int nameHash;

	if (INTERIOR::IS_VALID_INTERIOR(inParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(inParam0, &position, &nameHash);
	
		switch (nameHash)
		{
			case joaat("q0304_tunnel_ent"):
			case joaat("j_10p_tunnel_1a_int"):
			case joaat("bac_tunnelcurve_int"):
			case joaat("q0304_tunnel_int"):
			case joaat("l_08_train_tunnel2_int"):
			case joaat("bac_tunnelexit_int"):
			case joaat("bac_tunnelent_int"):
			case joaat("j_14_tunnel01_int"):
			case 653987431:
			case joaat("bac_tunnel_int"):
			case joaat("hea_tunnel_01"):
			case joaat("hea_tunnel_02"):
			case joaat("q0304_tunnel_exit"):
			case joaat("j_16_tunnel_int"):
				return true;
		}
	}

	return false;
}

BOOL func_380(int iParam0) // Position - 0xC065 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_71(iParam0))
		return false;

	ped = func_88(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

int func_381(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xC0B9 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_382(int iParam0) // Position - 0xC0F4 Hash - 0xFF763838 ^0x628E2177
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		if (Global_1900383[iParam0 /*45*/].f_25 == 2)
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
		}
		else if (Global_1900383[iParam0 /*45*/].f_25 == 1)
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
		}
	}

	return;
}

void func_383(int iParam0) // Position - 0xC196 Hash - 0xD3567106 ^0x33AFFA85
{
	Ped horse;
	Ped model;
	int num;
	int defaultMaxAttributeRank;
	var src;
	var src2;
	int gameTimer;
	BOOL flag;
	BOOL flag2;
	int num2;
	int num3;
	var dst;
	Hash styleHash;
	Blip blip;
	Vector3 vector;
	float heading;
	var unk47;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	eStackSize stackSize;
	Vector3 vector2;
	var unk52;
	BOOL flag9;
	int whistleType;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_21(iParam0, &horse);
	model = func_207(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
	{
		func_373(iParam0, 6);
		return;
	}

	num = func_115(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	func_21(0, &src);
	func_21(1, &src2);

	if (iParam0 == 1 && !src2.f_2)
	{
		func_373(iParam0, 6);
		return;
	}

	gameTimer = MISC::GET_GAME_TIMER();
	flag = false;

	if (iParam0 == 0)
	{
		flag = true;
	
		if (!src.f_11)
			if (src2.f_11 && !src2.f_10)
				flag = false;
	}

	if (iParam0 == 1)
		if (!src.f_2)
			flag = true;

	flag;

	switch (func_384(iParam0))
	{
		case 0:
			func_373(iParam0, 1);
			[[fallthrough]];
	
		case 1:
			if (iParam0 == 0)
			{
				if (func_84(0) == 1 && !func_71(0))
				{
					func_373(iParam0, 2);
					return;
				}
			}
		
			if (!func_71(iParam0))
			{
				func_373(iParam0, 6);
				return;
			}
		
			if (func_115(iParam0) < 1)
			{
				func_373(iParam0, 6);
				return;
			}
		
			if (!horse.f_11)
			{
				if (func_700())
				{
					func_373(iParam0, 2);
					return;
				}
			
				flag2 = false;
			
				if (iParam0 == 0)
					if (src2.f_10)
						flag2 = true;
			
				if (iParam0 == 1)
					if (src.f_10)
						flag2 = true;
			
				if (!flag && flag2)
					flag = true;
			
				if (!func_280())
					flag = false;
			
				if (flag)
				{
					num2 = -1;
					num3 = -1;
				
					if (func_490(1) < 3)
					{
						num2 = 1;
					
						if (num < defaultMaxAttributeRank)
							num3 = 6;
					}
					else
					{
						num2 = 2;
					}
				
					if (flag2)
					{
						if (iParam0 == 0)
							num2 = 3;
						else if (iParam0 == 1)
							num2 = 4;
					}
					else
					{
						if (iParam0 == 0)
							MISC::COPY_SCRIPT_STRUCT(&dst, &src2, 12);
						else if (iParam0 == 1)
							MISC::COPY_SCRIPT_STRUCT(&dst, &src, 12);
					
						if (dst.f_1)
							if (!dst.f_11)
								num2 = 5;
					}
				
					if (num3 != -1)
						func_283(num3, true);
				
					if (num2 == 1 || num2 == 3 || num2 == 4)
					{
						styleHash = 0;
					
						if (iParam0 == 0)
							styleHash = joaat("BLIP_STYLE_PLAYER_HORSE");
						else if (iParam0 == 1)
							styleHash = joaat("BLIP_STYLE_TEMPORARY_HORSE");
					
						if (styleHash != 0)
						{
							if (iParam0 == 0)
								blip = func_701();
							else if (iParam0 == 1)
								blip = func_702();
						
							if (!MAP::DOES_BLIP_EXIST(blip))
							{
								blip = MAP::_BLIP_ADD_FOR_STYLE(styleHash);
								MAP::BLIP_ADD_MODIFIER(blip, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
							
								if (iParam0 == 0)
									func_703(&blip);
								else if (iParam0 == 1)
									func_704(&blip);
							}
						
							func_464(num2, blip, true);
						}
					}
					else if (num2 != -1)
					{
						func_283(num2, true);
					}
				}
			}
		
			func_373(iParam0, 5);
			break;
	
		case 2:
			func_705(&(Global_1900383[iParam0 /*45*/].f_4));
			func_373(iParam0, 3);
			[[fallthrough]];
	
		case 3:
			unk47 = { func_706(iParam0) };
		
			if (!func_707(&(Global_1900383[iParam0 /*45*/].f_4), Global_36, unk47, horse, 1065353216))
			{
				if (Global_1900383[iParam0 /*45*/].f_4.f_1)
				{
					if (!func_375())
						func_381("WHISTLE_NOSPAWN_AREA", 10000, 0, 0, 0, true);
				
					func_315(iParam0);
					func_708(Global_35, "HORSE_NO_SHOW", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
					func_373(iParam0, 6);
				}
			
				return;
			}
		
			vector = { func_709(&(Global_1900383[iParam0 /*45*/].f_4)) };
			heading = func_710(vector, Global_36, 1);
		
			if (!func_71(iParam0))
			{
				func_448(iParam0, vector, heading);
				func_447(iParam0);
			}
		
			func_373(iParam0, 4);
			[[fallthrough]];
	
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(horse))
				return;
		
			if (ENTITY::IS_ENTITY_DEAD(horse) || PED::IS_PED_INJURED(horse))
				return;
		
			vector = { func_709(&(Global_1900383[iParam0 /*45*/].f_4)) };
			heading = func_710(vector, Global_36, 1);
			ENTITY::FREEZE_ENTITY_POSITION(horse, false);
			ENTITY::SET_ENTITY_COORDS(horse, vector, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(horse, heading);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(horse, false);
			func_373(iParam0, 5);
			[[fallthrough]];
	
		case 5:
			if (!horse.f_2)
			{
				func_373(iParam0, 6);
				return;
			}
		
			if (horse.f_10)
			{
				func_373(iParam0, 6);
				return;
			}
		
			flag3 = false;
		
			if (ENTITY::DOES_ENTITY_EXIST(horse.f_9))
			{
				if (func_456(horse.f_9))
				{
					if (func_76(256))
					{
					}
					else
					{
						flag3 = true;
					}
				}
			
				if (func_711(iParam0))
					flag3 = true;
			}
		
			if (flag3)
				func_712(iParam0, true);
		
			flag4 = false;
		
			if (horse.f_11 || func_700())
				flag4 = true;
		
			if (!flag4)
			{
				func_66(iParam0);
				func_382(iParam0);
				func_373(iParam0, 6);
				return;
			}
		
			flag5 = false;
		
			if (func_76(32))
				flag5 = true;
		
			flag6 = true;
			flag7 = func_713();
			flag8 = func_172(iParam0);
		
			if (!flag5)
			{
				if (flag7)
				{
					if (flag8)
					{
						stackSize = func_170();
					
						if (!func_171(stackSize))
						{
							func_714(&vector2, &unk52);
							flag9 = 0;
						
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(horse.f_5, vector2, true) < 3f)
								flag9 = 1;
						
							if (func_223(iParam0) || flag9)
								if (flag)
									if (func_280())
										func_283(9, true);
							else if (flag)
								if (func_280())
									func_283(8, true);
						
							flag6 = false;
						}
					}
				}
			}
		
			if (flag6)
			{
				PHYSICS::_UNHITCH_HORSE(horse);
				ENTITY::FREEZE_ENTITY_POSITION(horse, false);
			
				if (func_715() == 0)
					if (func_168(horse, 2043986356))
						func_371(1);
			
				whistleType = func_715();
				TASK::TASK_GO_TO_WHISTLE(horse, Global_35, whistleType);
				FLOCK::_0xFF1E339CE40EAAAF(horse, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(horse, 48, false);
				func_374(gameTimer);
			}
		
			func_66(iParam0);
			func_382(iParam0);
			func_373(iParam0, 6);
			break;
	
		case 6:
			break;
	}

	return;
}

int func_384(int iParam0) // Position - 0xC763 Hash - 0x999843B2 ^0x25C3BC88
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_1900383.f_378.f_1[iParam0];
}

BOOL func_385(int iParam0, int iParam1) // Position - 0xC794 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_386(int iParam0) // Position - 0xC7A3 Hash - 0x37EBB9FA ^0xDB7EB9A3
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}

	return;
}

void func_387(int iParam0, int iParam1) // Position - 0xC7E9 Hash - 0x20A81385 ^0xDDACAB07
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 - Global_1900383[iParam0 /*45*/].f_24 && iParam1;
	return;
}

BOOL func_388(Ped pedParam0) // Position - 0xC82D Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_401(pedParam0);

	if (num == -1)
		return false;

	return true;
}

BOOL func_389(Ped pedParam0) // Position - 0xC86B Hash - 0xFE36340F ^0x1CA0C04
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_716(ENTITY::GET_ENTITY_MODEL(pedParam0)))
		return true;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseCompanion"))
		return true;

	return false;
}

BOOL func_390(Ped pedParam0) // Position - 0xC8A4 Hash - 0x5B451C0F ^0xD8F41616
{
	char* propertyName;

	propertyName = "HorseMission";

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
		return true;

	return false;
}

BOOL func_391(Ped pedParam0) // Position - 0xC8D0 Hash - 0x52B322EA ^0x7B2B0A1E
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return false;

	if (FLOCK::_GET_ANIMAL_IS_WILD(pedParam0) == true)
		return true;

	return false;
}

BOOL func_392(Ped pedParam0) // Position - 0xC90B Hash - 0xE48228D0 ^0xE48228D0
{
	switch (pedParam0)
	{
		case joaat("a_c_donkey_01"):
			return true;
	}

	return false;
}

BOOL func_393(Ped pedParam0) // Position - 0xC929 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (pedParam0)
	{
		case joaat("a_c_horsemule_01"):
		case joaat("a_c_horsemulepainted_01"):
			return true;
	}

	return false;
}

Ped func_394() // Position - 0xC94D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_404;
}

void func_395(Ped pedParam0) // Position - 0xC95C Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_404 = pedParam0;
	return;
}

int func_396() // Position - 0xC96D Hash - 0x8190E5D8 ^0xB4FB0E1F
{
	return Global_1900383.f_404.f_6;
}

void func_397(int iParam0) // Position - 0xC97E Hash - 0xC421D95B ^0xD233A58C
{
	Global_1900383.f_404.f_6 = iParam0;
	return;
}

BOOL func_398(Ped pedParam0, var uParam1, int iParam2) // Position - 0xC991 Hash - 0x563A2BEB ^0xC99B1DC1
{
	Ped activeAnimalOwner;
	float num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	activeAnimalOwner = PED::_GET_ACTIVE_ANIMAL_OWNER(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return false;

	*uParam1 = activeAnimalOwner;

	if (ENTITY::IS_ENTITY_DEAD(activeAnimalOwner))
		return false;

	if (PED::IS_PED_HOGTIED(activeAnimalOwner))
		return false;

	if (iParam2 > 0f)
	{
		num = func_187(pedParam0, activeAnimalOwner, false, true);
	
		if (num > iParam2)
			return false;
	}

	return true;
}

BOOL func_399(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xCA06 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_613(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return false;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return false;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return true;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return false;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return true;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return true;

	return false;
}

BOOL func_400(Ped pedParam0) // Position - 0xCB3B Hash - 0xC84919B2 ^0xA3928628
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	if (func_190(pedParam0) == 0f)
		return true;

	return false;
}

int func_401(Ped pedParam0) // Position - 0xCB88 Hash - 0xD44AE303 ^0xA29D7F05
{
	int i;

	if (pedParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (pedParam0 == Global_1900383[i /*45*/])
			return i;
	}

	return -1;
}

int func_402(Ped pedParam0) // Position - 0xCBCD Hash - 0xC7DCE21 ^0x27B2D8D6
{
	int attributeRank;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, 7);
	return attributeRank;
}

void func_403(Ped pedParam0) // Position - 0xCC03 Hash - 0xDE0DF2E5 ^0xBA18C4AD
{
	int num;
	BOOL flag;

	if (func_2() == false)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (func_388(pedParam0))
	{
		num = func_401(pedParam0);
		func_315(num);
	}

	func_315(1);

	if (func_71(1))
		func_202(1, false);

	func_203(1);
	func_717(pedParam0, 1, 0);
	func_200(1, 1);

	if (func_115(1) == 0)
		func_718(1, 1);

	flag = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(PLAYER::PLAYER_ID(), pedParam0);
	func_404();
	return;
}

void func_404() // Position - 0xCC97 Hash - 0x211BCC6D ^0x211BCC6D
{
	if (func_71(0))
		func_66(0);

	if (func_71(1))
		func_66(1);

	if (func_71(5))
		func_66(5);

	if (func_71(6))
		func_315(6);

	return;
}

void func_405(Ped pedParam0, BOOL bParam1) // Position - 0xCCD3 Hash - 0xCFC5BF60 ^0x1C6CB0EE
{
	int num;

	if (func_2() == false)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (func_388(pedParam0))
	{
		num = func_401(pedParam0);
		func_315(num);
	}

	if (func_71(6))
		func_202(6, false);

	func_203(6);
	func_717(pedParam0, 6, 0);
	func_200(6, 1);

	if (!bParam1)
	{
		func_454(6, 0);
		func_482(MISC::GET_GAME_TIMER());
	}

	func_404();
	return;
}

void func_406(int iParam0, int iParam1) // Position - 0xCD5B Hash - 0x7B6D7BEE ^0xF15D524D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam1 /*436*/], &Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383.f_508), 436);
	return;
}

void func_407(int iParam0, int iParam1) // Position - 0xCDBA Hash - 0x102876F9 ^0x8EA22A40
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &Global_1900383[iParam1 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam1 /*45*/], &Global_1900383[iParam0 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam0 /*45*/], &(Global_1900383.f_463), 45);
	return;
}

int func_408(int iParam0, int iParam1) // Position - 0xCE02 Hash - 0x7A98D2DA ^0x5A60BE35
{
	var unk;
	var unk30;
	BOOL flag;
	Hash hash;

	unk.f_9 = joaat("SLOTID_NONE");
	unk30.f_9 = joaat("SLOTID_NONE");

	if (!func_719(iParam0, &unk))
		return 0;

	flag = false;

	if (!func_719(iParam1, &unk30))
		flag = true;

	if (flag)
	{
		hash = func_720(iParam1);
	
		if (hash == 0)
			return 0;
	
		if (!func_721(unk, unk.f_5, hash, false, false))
			return 0;
	}
	else if (!func_722(unk, unk30, 0, false))
	{
		return 0;
	}

	return 1;
}

BOOL func_409(Entity eParam0) // Position - 0xCE95 Hash - 0x4BD81D3A ^0x4A95E30F
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(eParam0);

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "CaravanCommonHorse"))
		return true;

	return false;
}

BOOL func_410(Entity eParam0) // Position - 0xCEC6 Hash - 0x4BD81D3A ^0x9A098D60
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(eParam0);

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "CaravanLivestock"))
		return true;

	return false;
}

BOOL func_411(Ped pedParam0) // Position - 0xCEF7 Hash - 0x7207D419 ^0x5FF6D65C
{
	char* propertyName;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	propertyName = "bHorseHasBeenStolen";

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
		return false;
	else if (DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
		return true;

	return false;
}

BOOL func_412() // Position - 0xCF4F Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_723() != -1;
}

void func_413(Ped pedParam0) // Position - 0xCF6A Hash - 0x60B71325 ^0xEC98AC39
{
	Ped entityModel;
	BOOL flag;
	BOOL flag2;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	flag = false;

	if (func_392(entityModel))
		flag = true;

	flag2 = false;

	if (func_393(entityModel))
		flag2 = true;

	num = 0;

	if (!func_76(2048))
	{
		if (flag)
			if (!func_458(pedParam0, joaat("honor_event_steal_donkey")))
				num = joaat("honor_event_steal_donkey");
		else if (flag2)
			if (!func_458(pedParam0, joaat("honor_event_steal_mule")))
				num = joaat("honor_event_steal_mule");
		else if (!func_458(pedParam0, joaat("honor_event_steal_horse")))
			num = joaat("honor_event_steal_horse");
	
		if (num != 0)
			func_243(0, num, 0, 0, 0, false, 1065353216, false);
	}

	return;
}

void func_414(BOOL bParam0) // Position - 0xD034 Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

void func_415(BOOL bParam0) // Position - 0xD04E Hash - 0x7A17EF83 ^0x30F00FD3
{
	Global_1900372.f_2 = 0;
	Global_1900372.f_1 = 0;
	Global_1900372.f_3 = 0;
	Global_1900372.f_4 = 0;
	Global_1900372.f_5 = 0;
	Global_1900372.f_6 = 0;
	Global_1900372.f_7 = 0;

	if (bParam0)
	{
		Global_1900372.f_8 = 0;
		Global_1900372.f_9 = 0;
		Global_1900372.f_10 = 0;
	}

	return;
}

void func_416(int iParam0) // Position - 0xD0A1 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_1900372 = iParam0;
	return;
}

BOOL func_417() // Position - 0xD0AF Hash - 0x4228A1C2 ^0xF41AB6A4
{
	return Global_1900372.f_5;
}

Ped func_418() // Position - 0xD0BD Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1900372.f_2;
}

Hash func_419() // Position - 0xD0CB Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1900372.f_1;
}

BOOL func_420(Hash hParam0) // Position - 0xD0D9 Hash - 0x65C15F ^0x65C15F
{
	if (func_724(hParam0))
		return true;

	if (func_725(hParam0))
		return true;

	if (func_726(hParam0))
		return true;

	if (func_727(hParam0))
		return true;

	if (func_728(hParam0))
		return true;

	if (func_729(hParam0))
		return true;

	if (func_730(hParam0))
		return true;

	return false;
}

BOOL func_421() // Position - 0xD13D Hash - 0xE8E02CE0 ^0x87CB72C0
{
	Ped animal;
	var unk;

	animal = func_418();
	unk = func_419();

	if (!ENTITY::DOES_ENTITY_EXIST(animal))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(animal))
		return false;

	if (PED::IS_PED_INJURED(animal))
		return false;

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, animal))
		return false;

	if (!func_420(unk))
		return false;

	if (PED::IS_PED_SWIMMING(Global_35))
		return false;

	if (PED::IS_PED_SWIMMING(animal))
		return false;

	return true;
}

BOOL func_422(Ped pedParam0, Hash hParam1) // Position - 0xD1B4 Hash - 0x1A778EA2 ^0xA1CE3952
{
	Hash info;
	BOOL flag;
	Hash interactionModel;
	Hash interactionType;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	info.f_3 = -1;
	info.f_12 = 4;
	info.f_17 = 4;

	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO(hParam1, &info))
	{
	}

	flag = false;
	interactionModel = info;

	if (func_724(hParam1))
	{
		interactionModel = 0;
		interactionType = joaat("Interaction_Food");
		flag = true;
	}

	if (func_726(hParam1) || func_727(hParam1) || func_725(hParam1))
	{
		interactionModel = joaat("p_cs_syringe01x");
		interactionType = joaat("Interaction_Injection_Quick");
		flag = true;
	}

	if (func_728(hParam1))
	{
		interactionType = joaat("Interaction_Ointment");
		flag = true;
	}

	if (func_729(hParam1))
	{
		interactionType = joaat("Interaction_Brush");
		flag = true;
	}

	if (!flag)
		return false;

	TASK::TASK_ANIMAL_INTERACTION(Global_35, pedParam0, interactionType, interactionModel, false);
	return true;
}

void func_423(int iParam0) // Position - 0xD2CC Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1900372.f_3 = iParam0;
	return;
}

int func_424() // Position - 0xD2DC Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1900372.f_3;
}

void func_425(int iParam0) // Position - 0xD2EA Hash - 0x29A8F290 ^0x22A57D40
{
	Global_1900372.f_4 = iParam0;
	return;
}

void func_426(Ped pedParam0) // Position - 0xD2FA Hash - 0x29A8F290 ^0x5B1674A8
{
	Global_1900372.f_8 = pedParam0;
	return;
}

void func_427(int iParam0) // Position - 0xD30A Hash - 0x29A8F290 ^0x870EAF89
{
	Global_1900372.f_9 = iParam0;
	return;
}

void func_428(int iParam0) // Position - 0xD31A Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1900372.f_10 = iParam0;
	return;
}

void func_429(int iParam0) // Position - 0xD32A Hash - 0x29A8F290 ^0x94542F8A
{
	Global_1900372.f_7 = iParam0;
	return;
}

BOOL func_430() // Position - 0xD33A Hash - 0x4228A1C2 ^0x4A2C267D
{
	return Global_1900372.f_7;
}

BOOL func_431(Hash hParam0, Hash hParam1) // Position - 0xD348 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

int func_432(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0xD379 Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_284(hParam0, 0))
		return 0;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_731(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_732(hParam0, -iParam1, flag, flag2, flag3);
	
		return 0;
	}

	if (!func_733(hParam0, 1, bParam4))
		return 0;

	statId = { func_734(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_735(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_735(hParam0, false, false) - iParam1 < 0)
		{
			func_432(hParam0, func_735(hParam0, false, false), bParam2, hParam3, bParam4);
			return 0;
		}
	}

	if (func_736(hParam0) == joaat("WEAPON"))
		if (!func_737(hParam0, iParam1, false, hParam3))
			return 0;
	else if (!func_738(hParam0, iParam1, hParam3, bParam2, bParam4))
		return 0;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_668(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_732(hParam0, -iParam1, flag, flag2, flag3);

	func_278(hParam0, iParam1);
	return 1;
}

void func_433(Ped pedParam0, Hash hParam1) // Position - 0xD4ED Hash - 0x61EDE2F8 ^0xE776EE8E
{
	int num;

	if (!func_420(hParam1))
		return;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return;

	if (func_724(hParam1))
	{
		func_739(pedParam0, hParam1);
		return;
	}

	if (func_725(hParam1))
	{
		func_740(pedParam0, hParam1);
		return;
	}

	if (func_726(hParam1))
	{
		func_741(pedParam0, hParam1);
		return;
	}

	if (func_727(hParam1))
	{
		func_504(pedParam0, hParam1);
		return;
	}

	if (func_728(hParam1))
	{
		func_742(pedParam0, hParam1);
		return;
	}

	if (func_730(hParam1))
	{
		func_743(pedParam0, hParam1);
		return;
	}

	if (func_729(hParam1))
	{
		num = func_744();
		func_745(pedParam0, hParam1, num);
		return;
	}

	return;
}

BOOL func_434() // Position - 0xD5D6 Hash - 0x4228A1C2 ^0x341213A7
{
	return Global_1900372.f_6;
}

Ped func_435() // Position - 0xD5E4 Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1900372.f_8;
}

BOOL func_436() // Position - 0xD5F2 Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1900372.f_10;
}

int func_437(int iParam0, int iParam1) // Position - 0xD600 Hash - 0xD30D64D ^0xA6080D3D
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/];
}

void func_438(int iParam0, int iParam1, int iParam2) // Position - 0xD638 Hash - 0xB24CC417 ^0xB24CC417
{
	int num;

	num = func_437(iParam0, iParam1);
	func_746(iParam0, iParam1, num + iParam2);
	return;
}

void func_439(Ped pedParam0, int iParam1, int iParam2) // Position - 0xD657 Hash - 0xB24CC417 ^0xB24CC417
{
	int num;

	num = func_357(pedParam0, iParam1);
	func_678(pedParam0, iParam1, num + iParam2);
	return;
}

int func_440(int iParam0) // Position - 0xD676 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_269(iParam0))
		return -1;

	return func_747(iParam0);
}

int func_441(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xD692 Hash - 0x56F0811C ^0x278FB5A
{
	return func_748(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

BOOL func_442(int iParam0) // Position - 0xD6A8 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_71(iParam0))
		return false;

	ped = func_88(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return true;

	return false;
}

void func_443(int iParam0) // Position - 0xD6FD Hash - 0x2692E663 ^0xF0DB5F3E
{
	Ped ped;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_71(iParam0))
		return;

	ped = func_88(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	ENTITY::SET_ENTITY_HEALTH(ped, 0, 0);
	return;
}

void func_444() // Position - 0xD748 Hash - 0x9A84CB87 ^0x788CD227
{
	Object* p_object;

	p_object = func_211();

	if (!ENTITY::DOES_ENTITY_EXIST(p_object))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(p_object))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(p_object, true, true);

	OBJECT::DELETE_OBJECT(&p_object);
	func_466(0);
	return;
}

int func_445(int iParam0) // Position - 0xD780 Hash - 0xACA56E21 ^0xEE9738B3
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

void func_446(int iParam0) // Position - 0xD7B3 Hash - 0x728A4C05 ^0x728A4C05
{
	int num;
	Hash hash;
	int num2;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_749(&num, &hash, &num2);
	func_750(iParam0, num);
	func_751(iParam0, hash);
	func_752(iParam0, num2);
	func_200(iParam0, 1);
	func_718(iParam0, 1);
	return;
}

void func_447(int iParam0) // Position - 0xD806 Hash - 0xA5F9E65B ^0xA5F9E65B
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_753(iParam0, 1);
	return;
}

void func_448(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0xD82F Hash - 0xFEF7EAB ^0x64576AA5
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_19 = { uParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = fParam4;
	return;
}

void func_449(int iParam0) // Position - 0xD86D Hash - 0x93699D3A ^0x887A14C1
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

void func_450(int iParam0) // Position - 0xD8A8 Hash - 0x79C2D19 ^0x7856ADEC
{
	int threadId;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	threadId = func_181(iParam0);

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		func_183(iParam0);
	else if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		func_183(iParam0);

	return;
}

BOOL func_451(int iParam0) // Position - 0xD8F6 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_452(int iParam0) // Position - 0xD909 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_453(int iParam0, float fParam1) // Position - 0xD933 Hash - 0x2B034D08 ^0x9299925
{
	char* str;
	BOOL flag;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "HORSE_XP_TRUST_EARNED";
			break;
	
		case 1:
		case 2:
		case 3:
			return;
	
		case 4:
			str = "HORSE_XP_LEADING";
			break;
	
		case 5:
			return;
	
		case 6:
			str = "HORSE_XP_BREAK_HORSE";
			break;
	
		case 7:
		case 8:
			str = "HORSE_XP_PATTED";
			break;
	
		case 9:
		case 10:
			str = "HORSE_XP_CALM";
			break;
	
		case 11:
		case 12:
			str = "HORSE_XP_HITCH";
			break;
	
		case 13:
		case 14:
		case 15:
			str = "HORSE_XP_FED";
			break;
	
		case 16:
			str = "HORSE_XP_TREAT";
			break;
	
		case 17:
		case 18:
		case 19:
			str = "HORSE_XP_GROOM";
			break;
	
		case 20:
			str = "HORSE_XP_OINTMENT";
			break;
	
		case 21:
		case 22:
			str = "HORSE_XP_LIGHT_LOAD";
			break;
	
		default:
			return;
	}

	flag = false;

	if (flag)
		str = MISC::VAR_STRING(2, str, BUILTIN::FLOOR(fParam1));
	else
		str = MISC::VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");

	func_754(str, "ITEMTYPE_TEXTURES", joaat("transaction_horse_bond"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_454(int iParam0, int iParam1) // Position - 0xDA87 Hash - 0x5C7287EF ^0x5C7287EF
{
	Ped modelHash;
	int rank;
	float num;
	float num2;
	Ped ped;
	float num3;
	float num4;
	float num5;

	if (iParam1 == -1)
		return;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (iParam0 != 0)
		if (!func_140(43))
			return;

	modelHash = func_207(iParam0);

	if (func_392(modelHash) || func_393(modelHash))
		return;

	rank = func_115(iParam0);

	if (rank >= func_755(modelHash))
		return;

	if (func_470(iParam0, iParam1))
		return;

	if (func_756(iParam0, iParam1))
		return;

	num = func_757(iParam0, iParam1);
	num2 = func_758(iParam1);
	num2 = num2 * (1f + Global_40.f_11095.f_68);

	switch (iParam1)
	{
		case 1:
			ped = func_88(iParam0);
		
			if (func_518(ped, 0))
				num2 = num2 * 0.5f;
		
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 + num2;
			break;
	
		case 2:
		case 3:
			if (func_759())
				num2 = num2 * 2f;
		
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 + num2;
			break;
	
		case 4:
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 = Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 + num2;
			break;
	
		case 5:
			if (rank < 1)
			{
				num3 = func_367(iParam0);
				num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(modelHash, 7, rank));
				num5 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(modelHash, 7, rank + 1));
				num2 = num5 - (num4 + num3);
			}
			else
			{
				num2 = 0f;
			}
			break;
	
		default:
			func_453(iParam1, num2);
			break;
	}

	func_760(iParam0, num2);
	func_472(iParam0, iParam1, num + num2);
	return;
}

BOOL func_455(Ped pedParam0, Ped pedParam1) // Position - 0xDC54 Hash - 0x4C1D344 ^0x818DEB7A
{
	int relationshipBetweenGroups;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "not_enemy"))
		return 0;

	switch (PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		case joaat("rel_gang_odriscoll"):
		case joaat("rel_gang_smugglers"):
		case joaat("rel_gang_laramie_gang"):
		case joaat("rel_gang_skinner_brothers"):
		case joaat("rel_bounty_hunter"):
		case joaat("rel_player_dislike"):
		case joaat("rel_gunslingers"):
		case joaat("rel_pinkertons"):
		case joaat("rel_guama_law"):
		case joaat("rel_gang_creole"):
		case joaat("rel_gang_lemoyne_raiders"):
		case joaat("rel_cop"):
		case joaat("rel_gang_murfree_brood"):
		case joaat("rel_criminals"):
		case joaat("rel_player_enemy"):
			return 1;
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
	{
		relationshipBetweenGroups = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam1));
	
		if (relationshipBetweenGroups == 6 || relationshipBetweenGroups == 4 || relationshipBetweenGroups == 5)
			if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "instigated_by_player"))
				return 1;
	}

	return 0;
}

BOOL func_456(Ped pedParam0) // Position - 0xDD39 Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_2() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

BOOL func_457(Ped pedParam0, int iParam1) // Position - 0xDD92 Hash - 0x63BEB914 ^0xEB07C3DC
{
	if (LAW::_0x40851BCC33ACD9AB(pedParam0) && func_134() != 8 && !func_608(0, false, true) && !func_458(pedParam0, iParam1) && !func_399(PLAYER::PLAYER_ID(), false, false, true))
		return true;

	return false;
}

BOOL func_458(Ped pedParam0, int iParam1) // Position - 0xDDE0 Hash - 0x9DE97A72 ^0x1712379
{
	int _int;
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(pedParam0, "honor_block"))
		{
			_int = DECORATOR::DECOR_GET_INT(pedParam0, "honor_block");
			num = func_547(iParam1);
		
			if (_int && num != false)
				return true;
		}
	}

	return false;
}

void func_459() // Position - 0xDE20 Hash - 0x8D1141BE ^0x8D1141BE
{
	int num;

	num = func_401(func_761(Global_35));

	if (num == -1)
		return;

	return;
}

void func_460(Ped pedParam0, var uParam1, var uParam2) // Position - 0xDE3E Hash - 0x4606B42A ^0x4606B42A
{
	int num;

	num = func_401(func_761(Global_35));

	if (num == -1)
		return;

	return;
}

void func_461(int iParam0) // Position - 0xDE5C Hash - 0x29A8F290 ^0xB00AC4D8
{
	Global_1900372.f_6 = iParam0;
	return;
}

void func_462(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xDE6C Hash - 0xF8A04892 ^0x995C5F27
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_28 = { uParam1 };
	return;
}

void func_463() // Position - 0xDE9E Hash - 0xFE389EB5 ^0x23415AF7
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	Hash hash5;
	Hash hash6;
	Hash hash7;
	int metaPedType;
	Any any;
	int num;
	Hash hash8;
	Hash hash9;
	Hash hash10;
	Hash hash11;
	Hash hash12;
	Hash hash13;

	hash = { func_355() };
	hash2 = hash;
	hash3 = hash.f_1;
	hash4 = hash.f_2;
	hash5 = hash.f_3;
	hash6 = hash.f_4;
	hash7 = hash.f_5;
	metaPedType = 3;
	num = joaat("base");

	if (func_762(hash2))
	{
		hash8 = hash2;
		any = PED::_REQUEST_META_PED_COMPONENT(metaPedType, hash8, num, 0, 0);
	}

	if (func_762(hash3))
	{
		hash9 = hash3;
		any.f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, hash9, num, 0, 0);
	}

	if (func_762(hash4))
	{
		hash10 = hash4;
		any.f_2 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, hash10, num, 0, 0);
	}

	if (func_762(hash5))
	{
		hash11 = hash5;
		any.f_3 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, hash11, num, 0, 0);
	}

	if (func_762(hash6))
	{
		hash12 = hash6;
		any.f_4 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, hash12, num, 0, 0);
	}

	if (func_762(hash7))
	{
		hash13 = hash7;
		any.f_5 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, hash13, num, 0, 0);
	}

	func_763(any);
	return;
}

void func_464(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0xDF8E Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_524(iParam0, &num, &num2);

	if (!func_623(iParam0, num, num2, bParam2))
		return;

	if (!func_764(iParam0, 1024))
		return;

	func_624(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
	return;
}

int func_465(int iParam0) // Position - 0xDFEE Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_466(Object obParam0) // Position - 0xE015 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_393 = obParam0;
	return;
}

void func_467(int iParam0) // Position - 0xE026 Hash - 0x6C8C0BB4 ^0x6C8C0BB4
{
	var unk;
	var unk59;
	var unk117;
	var unk175;
	var unk233;
	var unk249;
	var unk265;
	int num;
	int num2;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	unk = 57;
	unk59 = 57;
	unk117 = 57;
	unk175 = 57;
	func_345(iParam0, &unk);
	func_765(&unk59);
	func_766(iParam0, &unk, true);
	func_767(&unk, &unk59, &unk117);
	func_768(&unk117);
	func_769(iParam0, &unk175);
	unk233 = 3;
	unk249 = 3;
	unk265 = 3;
	func_770(iParam0, &unk233);
	func_771(&unk249);
	num = func_772(&unk233);
	num2 = func_772(&unk249);

	if (num2 > num)
		func_773(&unk249);
	else
		func_773(&unk233);

	func_774(iParam0);
	func_775(iParam0, &unk265);
	return;
}

void func_468(Ped pedParam0) // Position - 0xE0E6 Hash - 0x4C9A12AA ^0x5B9D01EA
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_blankets"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("saddle_horns"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("saddle_stirrups"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_bedrolls"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_saddlebags"), 0, false);
	return;
}

void func_469(int iParam0, int iParam1) // Position - 0xE164 Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = iParam1;
	return;
}

BOOL func_470(int iParam0, int iParam1) // Position - 0xE198 Hash - 0x300539A2 ^0x300539A2
{
	float num;

	if (iParam1 == -1)
		return false;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	num = func_471(iParam1);

	if (num == 1E+09f)
		return false;

	if (func_757(iParam0, iParam1) >= num)
		return true;

	return false;
}

float func_471(int iParam0) // Position - 0xE1F0 Hash - 0xFE1A3B7C ^0xFE1A3B7C
{
	switch (iParam0)
	{
		case 0:
			return 15f;
	
		case 1:
			return 1E+09f;
	
		case 2:
			return 1E+09f;
	
		case 3:
			return 1E+09f;
	
		case 4:
			return 1E+09f;
	
		case 5:
			return 100f;
	
		case 6:
			return 30f;
	
		case 7:
			return 1E+09f;
	
		case 8:
			return 1E+09f;
	
		case 9:
			return 1E+09f;
	
		case 10:
			return 1E+09f;
	
		case 11:
			return 1E+09f;
	
		case 12:
			return 1E+09f;
	
		case 13:
			return 1E+09f;
	
		case 14:
			return 1E+09f;
	
		case 15:
			return 1E+09f;
	
		case 16:
			return 1E+09f;
	
		case 17:
			return 1E+09f;
	
		case 18:
			return 1E+09f;
	
		case 19:
			return 1E+09f;
	
		case 20:
			return 1E+09f;
	
		case 21:
			return 1E+09f;
	
		case 22:
			return 1E+09f;
	}

	return 1E+09f;
}

void func_472(int iParam0, int iParam1, float fParam2) // Position - 0xE38C Hash - 0x29C4DF11 ^0x6087BE4D
{
	if (iParam1 == -1)
		return;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[iParam1] = fParam2;
	return;
}

void func_473(Ped pedParam0) // Position - 0xE3CF Hash - 0x15D3E697 ^0xE788B98B
{
	int attributeIndex;
	int attributeIndex2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	attributeIndex = func_663();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(pedParam0, attributeIndex, 0);
	attributeIndex2 = func_664();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(pedParam0, attributeIndex2, 0);
	PED::_SET_HEALTH_RECHARGE_MULTIPLIER(pedParam0, 1f);
	PED::_SET_STAMINA_RECHARGE_MULTIPLIER(pedParam0, 1f);
	PED::_SET_STAMINA_DEPLETION_MULTIPLIER(pedParam0, 1f);
	return;
}

int func_474(int iParam0) // Position - 0xE42C Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 5:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_475(Ped pedParam0) // Position - 0xE453 Hash - 0xA63E0834 ^0xF2ECDA8F
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (func_388(pedParam0))
	{
		num = func_401(pedParam0);
		func_315(num);
	}

	func_315(0);
	func_717(pedParam0, 0, 0);
	func_200(0, 1);
	func_776(0);
	PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(PLAYER::PLAYER_ID(), pedParam0);

	if (func_201() == 0)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID(), pedParam0);
		func_217(0);
		func_214(0);
	}

	PED::SET_PED_CONFIG_FLAG(pedParam0, 136, false);
	func_404();
	return;
}

void func_476(Ped pedParam0) // Position - 0xE4E2 Hash - 0xE3D757DC ^0x2492613
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, 1522539835))
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, 1522539835, 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, joaat("Accessories")))
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("Accessories"), 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, -749728163))
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, -749728163, 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, 149557334))
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, 149557334, 1);

	return;
}

void func_477(Ped pedParam0) // Position - 0xE568 Hash - 0x8F35C242 ^0x67693DB9
{
	ItemSet itemSet;
	Vector3 entityCoords;
	int entitiesNearPoint;
	int i;
	ScrHandle indexedItemInItemset;
	Entity entityFromItem;
	Object objectFromIndexedItem;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(entityCoords, 5f, itemSet, 3);

	for (i = 0; i < entitiesNearPoint; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
	
		if (!ENTITY::IS_AN_ENTITY(indexedItemInItemset))
		{
		}
		else
		{
			entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
		
			if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
			{
			}
			else if (!ENTITY::IS_ENTITY_AN_OBJECT(entityFromItem))
			{
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(entityFromItem, pedParam0))
			{
			}
			else if (TASK::GET_IS_CARRIABLE_ENTITY(entityFromItem))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entityFromItem, true, true);
				objectFromIndexedItem = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(indexedItemInItemset);
				OBJECT::DELETE_OBJECT(&objectFromIndexedItem);
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return;
}

void func_478(int iParam0) // Position - 0xE62A Hash - 0x6C8C0BB4 ^0x6C8C0BB4
{
	var unk;
	var unk59;
	var unk117;
	var unk175;
	var unk233;
	var unk249;
	var unk265;
	int num;
	int num2;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	unk = 57;
	unk59 = 57;
	unk117 = 57;
	unk175 = 57;
	func_765(&unk);
	func_345(iParam0, &unk59);
	func_346(iParam0, &unk);
	func_767(&unk, &unk59, &unk117);
	func_769(iParam0, &unk117);
	func_768(&unk175);
	unk233 = 3;
	unk249 = 3;
	unk265 = 3;
	func_771(&unk233);
	func_770(iParam0, &unk249);
	num = func_772(&unk233);
	num2 = func_772(&unk249);

	if (num2 > num)
		func_775(iParam0, &unk249);
	else
		func_775(iParam0, &unk233);

	func_773(&unk265);
	func_774(iParam0);
	func_777(iParam0);
	return;
}

void func_479() // Position - 0xE6F1 Hash - 0xDEEA5A5A ^0xC0B950CF
{
	int requestId;

	requestId = { func_778() };
	PED::_RELEASE_META_PED_ASSET_REQUEST(requestId);
	PED::_RELEASE_META_PED_ASSET_REQUEST(requestId.f_1);
	PED::_RELEASE_META_PED_ASSET_REQUEST(requestId.f_2);
	PED::_RELEASE_META_PED_ASSET_REQUEST(requestId.f_3);
	PED::_RELEASE_META_PED_ASSET_REQUEST(requestId.f_4);
	PED::_RELEASE_META_PED_ASSET_REQUEST(requestId.f_5);
	func_779();
	return;
}

Ped func_480() // Position - 0xE733 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_418;
}

void func_481(Ped pedParam0) // Position - 0xE742 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_418 = pedParam0;
	return;
}

void func_482(int iParam0) // Position - 0xE753 Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1900383.f_418.f_1 = iParam0;
	return;
}

void func_483(int iParam0) // Position - 0xE766 Hash - 0xC421D95B ^0x56CEE285
{
	Global_1900383.f_418.f_2 = iParam0;
	return;
}

int func_484() // Position - 0xE779 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1900383.f_418.f_1;
}

BOOL func_485(Ped pedParam0) // Position - 0xE78A Hash - 0x7883067A ^0x7883067A
{
	if (func_780(pedParam0) || func_320(pedParam0) || func_781(pedParam0) || func_782(pedParam0) || func_783(pedParam0))
		return 1;

	return 0;
}

BOOL func_486(Ped pedParam0) // Position - 0xE7D0 Hash - 0x58E421E0 ^0xC7C1380
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	if (!func_168(pedParam0, SCRIPT_TASK_STAND_STILL))
		TASK::TASK_STAND_STILL(pedParam0, -1);

	FLOCK::_0xFF1E339CE40EAAAF(pedParam0, 0);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 48, true);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 2);
	return true;
}

void func_487(int iParam0) // Position - 0xE83B Hash - 0x4A075877 ^0x238FAAF
{
	int num;
	BOOL flag;
	int gameTimer;
	int num2;
	Ped ped;
	float num3;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	num = func_115(iParam0);

	if (num < 2)
		return;

	flag = false;
	gameTimer = MISC::GET_GAME_TIMER();
	num2 = func_784();

	if (num2 + 15000 > gameTimer)
		flag = true;

	if (!flag)
	{
		ped = func_88(iParam0);
	
		if (PED::_GET_PED_STAMINA(ped) == PED::_GET_PED_MAX_STAMINA(ped))
			return;
	
		switch (num)
		{
			case 2:
				num3 = 2.5f;
				break;
		
			case 3:
				num3 = 5f;
				break;
		
			case 4:
				num3 = 10f;
				break;
		}
	
		func_785(ped, num3);
		func_483(gameTimer);
	}

	return;
}

BOOL func_488() // Position - 0xE8ED Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3134;
}

int func_489() // Position - 0xE8FE Hash - 0x8190E5D8 ^0xB1BE69AD
{
	return Global_1900383.f_444.f_18;
}

int func_490(int iParam0) // Position - 0xE90F Hash - 0x32B4F30A ^0x2F461876
{
	int num;
	int num2;
	int i;

	func_524(iParam0, &num, &num2);

	if (!func_764(iParam0, 65536) && !func_764(iParam0, 32768))
	{
		if (func_786(num, num2))
			return 1;
	
		return 0;
	}

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
			return Global_40.f_7756[i /*3*/].f_1;
	}

	return 0;
}

void func_491(int iParam0) // Position - 0xE98A Hash - 0xC421D95B ^0x4316CEFC
{
	Global_1900383.f_444.f_18 = iParam0;
	return;
}

void func_492(int iParam0) // Position - 0xE99D Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3134 = iParam0;
	return;
}

struct<2> func_493(int iParam0, int iParam1) // Position - 0xE9B0 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_494(var uParam0, var uParam1, int iParam2) // Position - 0xE9C6 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_495(int iParam0, int iParam1) // Position - 0xE9D6 Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = iParam1;
	return;
}

void func_496(int iParam0) // Position - 0xEA0A Hash - 0x29A8F290 ^0x2CD2E4A1
{
	Global_1935689.f_18 = iParam0;
	return;
}

void func_497(int iParam0) // Position - 0xEA1A Hash - 0x756CF911 ^0x2AB4EB61
{
	struct<10> eventData;
	Entity entity;
	Ped pedIndexFromEntityIndex;
	var unk10;
	int num;
	int num2;
	int num3;
	BOOL flag;
	BOOL flag2;
	int entityPopulationType;
	eStackSize stackSize;

	if (func_2() == false)
		return;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 10))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
		return;

	entity = eventData.f_2;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(entity))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex) || PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return;

	unk10 = eventData;
	num = unk10;

	switch (num)
	{
		case 31:
			num2 = 0;
			break;
	
		case 32:
			num2 = 1;
			break;
	
		case 33:
			num2 = 2;
			break;
	
		default:
			return;
	}

	num3 = -1;
	flag = false;

	if (func_388(pedIndexFromEntityIndex))
	{
		flag = true;
		num3 = func_401(pedIndexFromEntityIndex);
	}

	flag2 = false;

	if (!flag)
	{
		if (num2 != 2)
			return;
	
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedIndexFromEntityIndex, -1))
			return;
	
		if (func_389(pedIndexFromEntityIndex))
			flag2 = true;
	
		if (func_390(pedIndexFromEntityIndex))
			flag2 = true;
	
		if (func_320(pedIndexFromEntityIndex))
			flag2 = true;
	
		entityPopulationType = ENTITY::GET_ENTITY_POPULATION_TYPE(pedIndexFromEntityIndex);
	
		if (entityPopulationType != 6 && entityPopulationType != 2)
			flag2 = true;
	}

	if (flag)
	{
		if (func_232())
		{
			stackSize = func_170();
		
			if (stackSize == 22 || stackSize == 37)
				func_283(18, true);
			else
				func_283(17, true);
		
			return;
		}
	}

	if (flag)
	{
		if (func_189(num3))
		{
			if (!func_194(16) && !func_196(16))
				func_283(16, true);
		
			return;
		}
	}

	func_787(pedIndexFromEntityIndex, num2, flag2);
	return;
}

void func_498(int iParam0) // Position - 0xEBCA Hash - 0x756CF911 ^0x2AB4EB61
{
	struct<10> eventData;
	Entity entity;
	Ped pedIndexFromEntityIndex;
	BOOL flag;

	if (func_2() == false)
		return;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 10))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
		return;

	entity = eventData.f_2;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(entity))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex) || PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return;

	flag = false;

	if (func_388(pedIndexFromEntityIndex))
		flag = true;

	if (!flag)
	{
		if (func_389(pedIndexFromEntityIndex))
			return;
	
		if (func_390(pedIndexFromEntityIndex))
			return;
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedIndexFromEntityIndex))
			return;
	}

	func_788(joaat("kit_horse_brush"), pedIndexFromEntityIndex);
	return;
}

void func_499(int iParam0) // Position - 0xEC9C Hash - 0x756CF911 ^0x2AB4EB61
{
	struct<10> eventData;
	Entity entity;
	Ped pedIndexFromEntityIndex;
	BOOL flag;
	Hash hash;

	if (func_2() == false)
		return;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 10))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
		return;

	entity = eventData.f_2;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(entity))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex) || PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return;

	flag = false;

	if (func_388(pedIndexFromEntityIndex))
		flag = true;

	if (!flag)
	{
		if (func_389(pedIndexFromEntityIndex))
			return;
	
		if (func_390(pedIndexFromEntityIndex))
			return;
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedIndexFromEntityIndex))
			return;
	}

	hash = func_789();

	if (hash != 0)
		func_788(hash, pedIndexFromEntityIndex);

	return;
}

void func_500() // Position - 0xED77 Hash - 0xD0368953 ^0xB3CBAE15
{
	Global_40.f_1095.f_3135.f_2 = Global_40.f_1095.f_3135.f_2 + 1;
	return;
}

void func_501(int iParam0) // Position - 0xED97 Hash - 0x44423EC0 ^0xE1FA2E9
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_43 = 0;
	return;
}

void func_502(int iParam0, int iParam1) // Position - 0xEDC4 Hash - 0x42DB579F ^0x1BA2C8C6
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = iParam1;
	return;
}

void func_503(int iParam0, Hash hParam1) // Position - 0xEDF7 Hash - 0x42DB579F ^0x697A7CA1
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = hParam1;
	return;
}

int func_504(Ped pedParam0, Hash hParam1) // Position - 0xEE2A Hash - 0x4DB9A929 ^0x1D343FA5
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return 0;

	if (!func_727(hParam1))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	switch (hParam1)
	{
		case joaat("consumable_horse_reviver"):
			break;
	}

	func_790(pedParam0, hParam1);
	func_494(func_791(joaat("horse_revived")), 1);
	return 1;
}

BOOL func_505() // Position - 0xEE9F Hash - 0x25DDD0ED ^0xCDA82DE7
{
	if (func_733(joaat("consumable_horse_reviver"), 1, false) || func_733(joaat("consumable_special_horse_reviver_crafted"), 1, false))
		return true;

	return false;
}

int func_506() // Position - 0xEECB Hash - 0xE835E19F ^0x7F929E2F
{
	return Global_40.f_1095.f_3135.f_2;
}

int func_507() // Position - 0xEEDE Hash - 0x8190E5D8 ^0x8F7198F3
{
	return Global_1900383.f_444.f_17;
}

void func_508(int iParam0) // Position - 0xEEEF Hash - 0xC421D95B ^0x6BE07E45
{
	Global_1900383.f_444.f_17 = iParam0;
	return;
}

void func_509() // Position - 0xEF02 Hash - 0x2100AD75 ^0xD32AC008
{
	Global_1900383.f_444.f_17 = 0;
	return;
}

Hash func_510(Ped pedParam0) // Position - 0xEF14 Hash - 0x715B29E5 ^0xAF0BC29E
{
	Hash carriableFromEntity;
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(pedParam0);

	if (carriableFromEntity == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(pedParam0))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			carriableFromEntity = func_281(pedIndexFromEntityIndex);
		}
	}

	return carriableFromEntity;
}

BOOL func_511(Hash hParam0) // Position - 0xEF53 Hash - 0x32CFAC25 ^0x32CFAC25
{
	int i;
	int num;
	Hash hash;

	if (!func_792(hParam0))
		return false;

	for (i = 0; i < 57; i = i + 1)
	{
		num = func_681(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

void func_512(int iParam0, Hash hParam1, int iParam2) // Position - 0xEF95 Hash - 0x3D0A35EC ^0x3D0A35EC
{
	Hash hash;
	int num;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_284(hParam1, 0))
		return;

	if (!func_511(hParam1))
		return;

	hash = func_793(hParam1);
	num = func_794(hash, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] + iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = func_795(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num], 0, 10);
	return;
}

int func_513(Hash hParam0) // Position - 0xF03D Hash - 0xB8EC44B7 ^0x44202823
{
	switch (hParam0)
	{
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_coyote_01");
	
		case joaat("PROVISION_TAKANTA_BUFFALO_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_buffalo_tatanka_01");
	
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_buck_01");
	
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return joaat("a_c_bighornram_01");
	
		case joaat("PROVISION_MOOSE_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_moose_01");
	
		case joaat("PROVISION_BEAR_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_bear_01");
	
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_SKIN_PRISTINE"):
			return joaat("a_c_alligator_02");
	
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_beaver_01");
	
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_pronghorn_01");
	
		case joaat("PROVISION_ELK_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_elk_01");
	
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_wolf");
	
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_panther_01");
	
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_cougar_01");
	
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_fox_01");
	
		case joaat("PROVISION_WHITE_BUFFALO_LEGENDARY_FUR_PRISTINE"):
			return joaat("a_c_buffalo_01");
	
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return joaat("a_c_boar_01");
	
		default:
		
	}

	return 0;
}

BOOL func_514(int iParam0, var uParam1) // Position - 0xF12E Hash - 0xB00B7149 ^0xB00B7149
{
	switch (iParam0)
	{
		case joaat("a_c_elk_01"):
			*uParam1 = 10;
			return true;
	
		case joaat("a_c_buck_01"):
			*uParam1 = 5;
			return true;
	
		case joaat("a_c_alligator_02"):
			*uParam1 = 7;
			return true;
	
		case joaat("a_c_bighornram_01"):
			*uParam1 = 2;
			return true;
	
		case joaat("a_c_wolf"):
			*uParam1 = 15;
			return true;
	
		case joaat("a_c_bear_01"):
			*uParam1 = 0;
			return true;
	
		case joaat("a_c_moose_01"):
			*uParam1 = 12;
			return true;
	
		case joaat("a_c_cougar_01"):
			*uParam1 = 8;
			return true;
	
		case joaat("a_c_fox_01"):
			*uParam1 = 11;
			return true;
	
		case joaat("a_c_buffalo_tatanka_01"):
			*uParam1 = 6;
			return true;
	
		case joaat("a_c_coyote_01"):
			*uParam1 = 9;
			return true;
	
		case joaat("a_c_beaver_01"):
			*uParam1 = 1;
			return true;
	
		case joaat("a_c_buffalo_01"):
			*uParam1 = 3;
			return true;
	
		case joaat("a_c_panther_01"):
			*uParam1 = 13;
			return true;
	
		case joaat("a_c_pronghorn_01"):
			*uParam1 = 14;
			return true;
	
		case joaat("a_c_boar_01"):
			*uParam1 = 4;
			return true;
	}

	return false;
}

Hash func_515(Ped pedParam0) // Position - 0xF257 Hash - 0xC81C18F9 ^0xACAAEE80
{
	Ped pedIndexFromEntityIndex;
	var unk;
	var unk2;
	var unk3;
	var unk4;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return 0;

	func_276(pedIndexFromEntityIndex, &unk2, &unk3, &unk, &unk4);

	if (func_277(&num, pedIndexFromEntityIndex, unk, unk2))
	{
	}

	return num;
}

void func_516(Hash hParam0) // Position - 0xF2B3 Hash - 0xD8D5A7A7 ^0xD163AF6F
{
	if (func_796(hParam0))
	{
		if (func_94() && func_797(4))
		{
			if (!func_799(func_798(hParam0)))
			{
				if (func_801(func_800(hParam0)))
				{
					MAP::_MAP_DISCOVER_REGION(func_802(func_800(hParam0)));
					MAP::_MAP_DISCOVERY_SET_ENABLED(func_803(func_800(hParam0)));
				}
			}
		}
	}

	return;
}

int func_517(Ped pedParam0, Ped pedParam1) // Position - 0xF30C Hash - 0x364D859B ^0xB5F2F334
{
	Hash hash;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	if (ENTITY::GET_IS_ANIMAL(pedParam1) || ENTITY::_GET_IS_BIRD(pedParam1))
	{
		hash = func_515(pedParam1);
	
		if (!func_284(hash, 0))
			hash = func_510(pedParam1);
	}
	else
	{
		hash = func_510(pedParam1);
	}

	num = func_285(pedParam0, hash, 1, true, -142743235);
	return num;
}

BOOL func_518(Ped pedParam0, int iParam1) // Position - 0xF37E Hash - 0xFCED259B ^0x20281203
{
	int num;
	var unk;
	Entity entity;

	if (iParam1 == -1)
		return false;

	num = func_273(iParam1);

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, pedParam0, num, 0))
		return false;

	entity = unk.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return false;

	return true;
}

BOOL func_519(Ped pedParam0, int iParam1) // Position - 0xF3C0 Hash - 0x8DA599A ^0x6A9A782
{
	if (iParam1 == 7)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[iParam1]))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, Global_1357549.f_3[iParam1], true, 0);
}

BOOL func_520(int iParam0, int iParam1) // Position - 0xF415 Hash - 0xC02C6F8C ^0xC02C6F8C
{
	if (iParam0 == -1)
		return false;

	return func_519(func_88(iParam0), iParam1);
}

void func_521(int iParam0) // Position - 0xF433 Hash - 0x4CB73698 ^0x4CB73698
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_387(iParam0, 32);
	func_404();
	return;
}

void func_522(int iParam0) // Position - 0xF461 Hash - 0xCFE5DD25 ^0xCFE5DD25
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_682(iParam0);
	func_718(iParam0, 0);
	func_804(iParam0, 0f);
	return;
}

void func_523(BOOL bParam0) // Position - 0xF497 Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_524(int iParam0, var uParam1, var uParam2) // Position - 0xF4A7 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

void func_525(var uParam0) // Position - 0xF4C3 Hash - 0x6DB42F4F ^0x2D3D8169
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
	return;
}

void func_526(int iParam0, Hash hParam1, var uParam2) // Position - 0xF4DC Hash - 0x2FE00612 ^0x68508C65
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	!func_805(iParam0, hParam1);
	!func_806(iParam0, hParam1.f_1);
	return;
}

void func_527(var uParam0) // Position - 0xF518 Hash - 0x7858D7C0 ^0x7858D7C0
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_272(&uParam0->[i /*94*/]);
	}

	return;
}

void func_528(var uParam0) // Position - 0xF53C Hash - 0x3F59DF82 ^0x3F59DF82
{
	int i;

	for (i = 0; i < 57; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

void func_529(Any* panParam0) // Position - 0xF55E Hash - 0x92E3936E ^0xDB085754
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		panParam0->[i /*5*/] = 0;
		panParam0->[i /*5*/].f_1 = 0;
		panParam0->[i /*5*/].f_2 = 0;
		panParam0->[i /*5*/].f_3 = 0;
		panParam0->[i /*5*/].f_4 = 0;
	}

	return;
}

void func_530(int iParam0) // Position - 0xF5A3 Hash - 0xF98F3B32 ^0x8A036B17
{
	int i;

	iParam0->f_1 = 0f;
	*iParam0 = 0;

	for (i = 0; i < 23; i = i + 1)
	{
		if (i == -1)
		{
		}
		else
		{
			iParam0->f_2[i] = 0f;
		}
	}

	return;
}

void func_531(int iParam0, int iParam1) // Position - 0xF5D9 Hash - 0xB69B78FC ^0xB22068A7
{
	int num;

	num = 100;
	*iParam1 = num;
	iParam1->f_1 = 0f;
	iParam1->f_2 = 0f;
	iParam1->f_3 = 0;
	return;
}

void func_532(int iParam0, int iParam1) // Position - 0xF5F9 Hash - 0xD41D26E5 ^0x1EE19431
{
	int num;

	num = 0;

	if (iParam0 == 2)
		num = 50;

	*iParam1 = num;
	iParam1->f_1 = 0f;
	iParam1->f_2 = 0f;
	iParam1->f_3 = 0;
	return;
}

void func_533(BOOL bParam0) // Position - 0xF622 Hash - 0x7100DF7A ^0xCD4606BC
{
	*bParam0 = 0;
	bParam0->f_1 = -1f;
	return;
}

void func_534(BOOL bParam0) // Position - 0xF633 Hash - 0x5F76BB50 ^0x40F56A0B
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -15;
	return;
}

void func_535(var uParam0) // Position - 0xF64B Hash - 0x92BF775F ^0x1739D63E
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	return;
}

void func_536(int iParam0) // Position - 0xF65E Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_40.f_7857[num2];
	MISC::SET_BIT(&address, offset);
	Global_40.f_7857[num2] = address;
	return;
}

void func_537(int iParam0) // Position - 0xF698 Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_94() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_283(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_94() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_283(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_94() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_283(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_94() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_283(589, false);
			break;
	
		case 6:
			break;
	
		case 7:
			break;
	
		case 8:
			break;
	
		case 9:
			break;
	
		case 10:
			break;
	
		case 11:
			func_807(true);
			break;
	
		case 12:
			break;
	
		case 13:
			break;
	
		case 14:
			break;
	
		case 15:
			break;
	
		case 16:
			break;
	
		case 17:
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_808(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_808(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_808(3);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 23:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
		
			if (func_2() == -1)
			{
				if (!func_813(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_814(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_640())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_733(hash, 1, false))
						func_815(hash, 1, 752097756);
				
					func_816(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
				}
			}
			break;
	
		case 25:
			break;
	
		case 26:
			break;
	
		case 27:
			break;
	
		case 28:
			break;
	
		case 29:
			break;
	
		case 30:
			break;
	
		case 31:
			break;
	
		case 32:
			break;
	
		case 33:
			func_234(true);
			break;
	
		case 34:
			func_236(true);
			break;
	
		case 35:
			func_238(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_809(false);
			break;
	
		case 38:
			func_810(false);
			break;
	
		case 39:
			func_811(false);
			break;
	
		case 40:
			break;
	
		case 41:
			break;
	
		case 42:
			break;
	
		case 43:
			break;
	
		case 44:
			break;
	
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 46:
			func_817();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_2() == -1)
				if (!func_733(1013902307, 1, false))
					func_815(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_2() == -1)
				if (!func_733(786809402, 1, false))
					func_815(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_2() == -1)
			{
				if (!func_733(1013902307, 1, false))
					func_815(1013902307, 1, 752097756);
			
				if (!func_733(142640135, 1, false))
					func_815(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_2() == -1)
			{
				if (!func_733(786809402, 1, false))
					func_815(786809402, 1, 752097756);
			
				if (!func_733(-518019409, 1, false))
					func_815(-518019409, 1, 752097756);
			}
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

BOOL func_538(Hash hParam0) // Position - 0xFCC0 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("a_c_horse_arabian_redchestnut_pc"):
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
		case joaat("a_c_horse_andalusian_perlino"):
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return true;
	}

	return false;
}

BOOL func_539() // Position - 0xFD02 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

BOOL func_540(int iParam0) // Position - 0xFD13 Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_720(iParam0);

	if (hash == 0)
		return false;

	unk = { func_330(false) };

	if (func_818(&unk, hash, false) > 0)
		return true;

	return false;
}

int func_541(int iParam0) // Position - 0xFD48 Hash - 0x13121903 ^0xB823C4F3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_719(iParam0, &unk))
		return 0;

	unk30 = { unk.f_5 };
	unk30.f_4 = unk.f_9;

	if (!func_819(unk.f_4, &unk, &unk30, -1, -142743235, 0, false))
		return 0;

	return 1;
}

Hash func_542(Ped pedParam0) // Position - 0xFD9E Hash - 0xCBA0DE6B ^0x47A29D9A
{
	if (pedParam0 == joaat("a_c_horse_mp_mangy_backup"))
		return joaat("HORSE_BREED_MANGY_BACKUP");

	switch (pedParam0)
	{
		case joaat("a_c_horse_john_endlesssummer"):
			return 887669186;
	
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return joaat("HORSE_BREED_ARDENNES_IRONGREYROAN");
	
		case joaat("a_c_horse_arabian_black"):
			return joaat("HORSE_BREED_ARABIAN_BLACK");
	
		case joaat("a_c_horse_americanpaint_greyovero"):
			return joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO");
	
		case joaat("a_c_horse_thoroughbred_bloodbay"):
			return joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY");
	
		case joaat("a_c_horse_hungarianhalfbred_liverchestnut"):
			return -1754375530;
	
		case joaat("a_c_horse_suffolkpunch_redchestnut"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
	
		case joaat("a_c_horse_americanpaint_tobiano"):
			return joaat("HORSE_BREED_AMERICANPAINT_TOBIANO");
	
		case joaat("a_c_horse_tennesseewalker_flaxenroan"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
	
		case joaat("a_c_horse_turkoman_silver"):
			return joaat("HORSE_BREED_TURKOMAN_SILVER");
	
		case joaat("a_c_horse_suffolkpunch_sorrel"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL");
	
		case joaat("a_c_horse_appaloosa_leopardblanket"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
	
		case joaat("a_c_horse_ardennes_bayroan"):
			return joaat("HORSE_BREED_ARDENNES_BAYROAN");
	
		case joaat("a_c_horse_arabian_redchestnut_pc"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT_PC");
	
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN");
	
		case joaat("a_c_horse_missourifoxtrotter_amberchampagne"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
	
		case joaat("a_c_horse_kentuckysaddle_chestnutpinto"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
	
		case joaat("a_c_horse_nokota_whiteroan"):
			return joaat("HORSE_BREED_NOKOTA_WHITEROAN");
	
		case joaat("a_c_horse_americanstandardbred_black"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK");
	
		case joaat("a_c_horse_mustang_grullodun"):
			return joaat("HORSE_BREED_MUSTANG_GRULLODUN");
	
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
	
		case joaat("a_c_horse_appaloosa_leopard"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARD");
	
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
			return joaat("HORSE_BREED_MORGAN_LIVERCHESTNUT");
	
		case joaat("a_c_horse_morgan_flaxenchestnut"):
			return joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
	
		case joaat("a_c_horse_appaloosa_brownleopard"):
			return joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
	
		case joaat("a_c_horse_appaloosa_blacksnowflake"):
			return -1692268955;
	
		case joaat("a_c_horse_arabian_white"):
			return joaat("HORSE_BREED_ARABIAN_WHITE");
	
		case joaat("a_c_horse_murfreebrood_mange_02"):
			return -2011111190;
	
		case joaat("a_c_horse_hungarianhalfbred_darkdapplegrey"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
	
		case joaat("a_c_horse_tennesseewalker_redroan"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN");
	
		case joaat("a_c_horse_ardennes_strawberryroan"):
			return joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
	
		case joaat("a_c_horse_murfreebrood_mange_03"):
			return -535752499;
	
		case joaat("a_c_horse_belgian_blondchestnut"):
			return joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
	
		case joaat("a_c_horse_thoroughbred_brindle"):
			return joaat("HORSE_BREED_THOROUGHBRED_BRINDLE");
	
		case joaat("a_c_horse_americanstandardbred_silvertailbuckskin"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
	
		case joaat("a_c_horse_americanpaint_overo"):
			return joaat("HORSE_BREED_AMERICANPAINT_OVERO");
	
		case joaat("a_c_horse_andalusian_darkbay"):
			return joaat("HORSE_BREED_ANDALUSIAN_DARKBAY");
	
		case joaat("a_c_horse_missourifoxtrotter_sablechampagne"):
			return -71211764;
	
		case joaat("a_c_horse_arabian_rosegreybay"):
			return joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY");
	
		case joaat("a_c_horse_americanstandardbred_buckskin"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN");
	
		case joaat("a_c_horse_kentuckysaddle_black"):
			return joaat("horse_breed_kentuckysaddle_black");
	
		case joaat("a_c_horse_tennesseewalker_dapplebay"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
	
		case joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
	
		case joaat("a_c_horse_shire_lightgrey"):
			return joaat("HORSE_BREED_SHIRE_LIGHTGREY");
	
		case joaat("a_c_horse_mustang_tigerstripedbay"):
			return joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
	
		case joaat("a_c_horse_americanstandardbred_palominodapple"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
	
		case joaat("a_c_horse_arabian_grey"):
			return 2130706226;
	
		case joaat("a_c_horse_morgan_palomino"):
			return joaat("horse_breed_morgan_palomino");
	
		case joaat("a_c_horse_nokota_reversedappleroan"):
			return joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
	
		case joaat("a_c_horse_tennesseewalker_mahoganybay"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY");
	
		case joaat("a_c_horse_mustang_goldendun"):
			return -1390353518;
	
		case joaat("a_c_horse_buell_warvets"):
			return -41062704;
	
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
			return joaat("HORSE_BREED_APPALOOSA_FEWSPOTTED");
	
		case joaat("a_c_horse_dutchwarmblood_chocolateroan"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
	
		case joaat("a_c_horse_andalusian_perlino"):
			return joaat("HORSE_BREED_ANDALUSIAN_PERLINO");
	
		case joaat("a_c_horse_andalusian_rosegray"):
			return joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY");
	
		case joaat("a_c_horse_shire_ravenblack"):
			return joaat("HORSE_BREED_SHIRE_RAVENBLACK");
	
		case joaat("a_c_horse_dutchwarmblood_sealbrown"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
	
		case joaat("a_c_horse_thoroughbred_reversedappleblack"):
			return joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
	
		case joaat("a_c_horse_murfreebrood_mange_01"):
			return 2102774612;
	
		case joaat("a_c_horse_belgian_mealychestnut"):
			return joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
	
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO");
	
		case joaat("a_c_horse_shire_darkbay"):
			return joaat("HORSE_BREED_SHIRE_DARKBAY");
	
		case joaat("a_c_horse_tennesseewalker_blackrabicano"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
	
		case joaat("a_c_horse_tennesseewalker_chestnut"):
			return joaat("horse_breed_tennesseewalker_chestnut");
	
		case joaat("a_c_horse_turkoman_darkbay"):
			return joaat("HORSE_BREED_TURKOMAN_DARKBAY");
	
		case joaat("a_c_horse_morgan_bayroan"):
			return joaat("HORSE_BREED_MORGAN_BAYROAN");
	
		case joaat("a_c_horse_arabian_redchestnut"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT");
	
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return joaat("HORSE_BREED_ARABIAN_WARPEDBRINDLE");
	
		case joaat("a_c_horse_dutchwarmblood_sootybuckskin"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
	
		case joaat("a_c_horse_kentuckysaddle_silverbay"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
	
		case joaat("a_c_horse_turkoman_gold"):
			return joaat("HORSE_BREED_TURKOMAN_GOLD");
	
		case joaat("a_c_horse_hungarianhalfbred_flaxenchestnut"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
	
		case joaat("a_c_donkey_01"):
			return joaat("HORSE_DONKEY");
	
		case joaat("a_c_horse_americanpaint_splashedwhite"):
			return joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE");
	
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
	
		case joaat("a_c_horse_kentuckysaddle_grey"):
			return joaat("horse_breed_kentuckysaddle_grey");
	
		case joaat("a_c_horse_morgan_bay"):
			return joaat("HORSE_BREED_MORGAN_BAY");
	
		case joaat("a_c_horse_mustang_wildbay"):
			return joaat("HORSE_BREED_MUSTANG_WILDBAY");
	
		case joaat("a_c_horse_appaloosa_blanket"):
			return joaat("HORSE_BREED_APPALOOSA_BLANKET");
	
		case joaat("a_c_horse_nokota_blueroan"):
			return joaat("HORSE_BREED_NOKOTA_BLUEROAN");
	
		default:
		
	}

	return 0;
}

int func_543(int iParam0, Hash hParam1) // Position - 0x10237 Hash - 0x25A74014 ^0x25A74014
{
	Hash hash;
	var unk;
	var unk6;

	if (!func_284(hParam1, 0))
		return 0;

	if (!func_820(hParam1))
		return 0;

	if (func_540(iParam0))
		return 0;

	hash = func_720(iParam0);

	if (hash == 0)
		return 0;

	unk = { func_330(false) };
	unk.f_4 = hash;

	if (!func_334(hParam1, &unk6, &unk, 1, 752097756, false))
		return 0;

	return 1;
}

float func_544(int iParam0) // Position - 0x102A4 Hash - 0x38F4CFA ^0x38F4CFA
{
	Ped ped;
	float num;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	if (!func_71(iParam0))
		return 0f;

	ped = func_88(iParam0);
	num = func_190(ped);
	return num;
}

int func_545(int iParam0, var uParam1) // Position - 0x102E8 Hash - 0x269D6FD4 ^0xCDD6FCC3
{
	var guid1;

	guid1.f_9 = joaat("SLOTID_NONE");

	if (!func_719(iParam0, &guid1))
		return 0;

	guid1.f_14 = uParam1->f_14;
	guid1.f_15 = uParam1->f_15;
	guid1.f_16 = { uParam1->f_16 };
	guid1.f_24 = uParam1->f_24;
	guid1.f_25 = uParam1->f_25;
	guid1.f_26 = uParam1->f_26;
	guid1.f_27 = uParam1->f_27;
	guid1.f_28 = uParam1->f_28;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(guid1.f_16)))
		TEXT_LABEL_ASSIGN_STRING(&(guid1.f_16), func_821(), 64);

	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(func_666(false), &guid1, &guid1, 29))
		return 0;

	return 1;
}

void func_546() // Position - 0x10382 Hash - 0xFC034F80 ^0xA15BCF12
{
	Blip blip;

	if (func_822())
	{
		blip = func_823();
		MAP::REMOVE_BLIP(&blip);
		func_824(0);
	}

	return;
}

BOOL func_547(int iParam0) // Position - 0x103A2 Hash - 0xA05361F6 ^0xF8A0FD3E
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return 16384;
	
		case joaat("honor_event_antagonize"):
			return 65536;
	
		case joaat("honor_event_steal_wagon"):
			return 8192;
	
		case joaat("honor_event_trampled_innocent"):
			return 4096;
	
		case joaat("honor_event_kill_vermin"):
			return 64;
	
		case joaat("honor_event_kill_farm_animal"):
			return 128;
	
		case joaat("honor_event_long_absence"):
			return 4194304;
	
		case 0:
			return -1;
	
		case joaat("honor_event_wanted_in_camp"):
			return 524288;
	
		case joaat("honor_event_animal_bleedout"):
			return 32768;
	
		case joaat("honor_event_steal_mule"):
			return 2048;
	
		case joaat("honor_event_theft"):
			return 131072;
	
		case joaat("honor_event_kill_horse"):
			return 256;
	
		case joaat("honor_event_steal_donkey"):
			return 1024;
	
		case joaat("honor_event_steal_horse"):
			return 512;
	
		case joaat("honor_event_ambient_kill"):
			return 2;
	
		case joaat("honor_event_item_request"):
			return 2097152;
	
		case joaat("honor_event_ambient_ko"):
			return 4;
	
		case joaat("honor_event_intervened"):
			return 262144;
	
		case joaat("honor_event_scare"):
			return 32;
	
		case joaat("honor_event_donated_game"):
			return 1048576;
	
		case joaat("honor_event_loot_innocent"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_548(int iParam0) // Position - 0x104B8 Hash - 0xC25EDEC0 ^0x47BF4274
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return -2;
	
		case 2:
			return -5;
	
		case 3:
			return -10;
	
		case 4:
			return -20;
	
		case 5:
			return -40;
	
		case 6:
			return -160;
	
		case 7:
			return -320;
	
		case 8:
			return -480;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 5;
	
		case 13:
			return 10;
	
		case 14:
			return 20;
	
		case 15:
			return 40;
	
		case 16:
			return 160;
	
		case 17:
			return 640;
	
		case 18:
			return -640;
	
		default:
		
	}

	return 0;
}

void func_549(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1059F Hash - 0x9A51185A ^0x326307D1
{
	int num;
	int num2;
	int num3;
	int num4;
	float num5;
	int num6;
	int num7;
	char* str;
	var statId;

	num = func_825();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_826(iParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(eParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_override"))
			{
				iParam0 = DECORATOR::DECOR_GET_INT(eParam5, "honor_override") * -1;
				DECORATOR::DECOR_REMOVE(eParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_bank"))
			{
				iParam0 = iParam0 - DECORATOR::DECOR_GET_INT(eParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", 0);
			}
		}
	}

	num3 = 240;
	num4 = -240;
	num5 = 1f;

	if (func_140(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_640())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_795(Global_40.f_11095.f_35, num4, num3);
	num2 = func_825();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_827(num2);
		func_829(func_828(), false, 4000);
		func_830(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_831(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_494(func_832(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_548(14))
				{
					str = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					str = "Honor_Increase_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_754(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_754(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_494(func_832(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_548(4))
				{
					str = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					str = "Honor_Decrease_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_754(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_754(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_832(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_834(10, 1);

	return;
}

void func_550(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0x10944 Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

int func_551() // Position - 0x109A3 Hash - 0xE835E19F ^0x141BD35D
{
	return Global_40.f_1095.f_3135.f_1;
}

int func_552() // Position - 0x109B6 Hash - 0x8190E5D8 ^0x6C81FB30
{
	return Global_1900383.f_444.f_2;
}

void func_553() // Position - 0x109C7 Hash - 0x2100AD75 ^0xADE9CBA1
{
	Global_1900383.f_444.f_2 = 0;
	return;
}

void func_554() // Position - 0x109D9 Hash - 0xD0368953 ^0xE480F23
{
	Global_40.f_1095.f_3135.f_1 = Global_40.f_1095.f_3135.f_1 + 1;
	return;
}

void func_555(int iParam0) // Position - 0x109F9 Hash - 0xC421D95B ^0x56CEE285
{
	Global_1900383.f_444.f_2 = iParam0;
	return;
}

BOOL func_556() // Position - 0x10A0C Hash - 0x8190E5D8 ^0xE7A7AFC8
{
	return Global_1900383.f_444.f_3;
}

int func_557() // Position - 0x10A1D Hash - 0x8190E5D8 ^0x856627E0
{
	return Global_1900383.f_444.f_4;
}

void func_558(int iParam0) // Position - 0x10A2E Hash - 0xC421D95B ^0xE72F24A4
{
	Global_1900383.f_444.f_3 = iParam0;
	return;
}

void func_559() // Position - 0x10A41 Hash - 0x2100AD75 ^0x3678395B
{
	Global_1900383.f_444.f_4 = 0;
	return;
}

BOOL func_560(Hash hParam0) // Position - 0x10A53 Hash - 0xAD430840 ^0x833C1E45
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
			if (outData.f_2 == joaat("cost_type_craft") && !func_835(hParam0, outData, true))
				return true;
	}

	return false;
}

Ped func_561() // Position - 0x10AB5 Hash - 0x7EBC184 ^0xE53E3899
{
	Player player;
	Entity outEntity;
	Ped pedIndexFromEntityIndex;

	player = PLAYER::PLAYER_ID();

	if (PLAYER::IS_PLAYER_DEAD(player))
		return 0;

	if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(player, &outEntity, false, false))
		return 0;

	if (!ENTITY::IS_ENTITY_A_PED(outEntity))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(outEntity))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);

	if (PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(pedIndexFromEntityIndex))
		return 0;

	if (!func_391(pedIndexFromEntityIndex))
		return 0;

	return pedIndexFromEntityIndex;
}

var func_562() // Position - 0x10B2F Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1900383.f_411.f_1;
}

void func_563(int iParam0) // Position - 0x10B40 Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1900383.f_411.f_1 = iParam0;
	return;
}

void func_564(Ped pedParam0) // Position - 0x10B53 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_411 = pedParam0;
	return;
}

void func_565() // Position - 0x10B64 Hash - 0xDA3C8DAE ^0xDA3C8DAE
{
	if (func_194(47))
		func_195(47);

	if (func_196(47))
		func_197(47);

	if (func_194(48))
		func_195(48);

	if (func_196(47))
		func_197(47);

	if (func_194(49))
		func_195(49);

	if (func_196(49))
		func_197(49);

	if (func_194(50))
		func_195(50);

	if (func_196(50))
		func_197(50);

	if (func_194(51))
		func_195(51);

	if (func_196(51))
		func_197(51);

	return;
}

BOOL func_566(Ped pedParam0) // Position - 0x10C02 Hash - 0xD48181DA ^0xD33C8288
{
	int num;
	Hash discoverableNameHashAndTypeForEntity;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	discoverableNameHashAndTypeForEntity = PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(pedParam0, &num);

	if (PLAYER::_GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP(PLAYER::PLAYER_ID(), num, discoverableNameHashAndTypeForEntity))
		return true;

	return false;
}

void func_567(int iParam0) // Position - 0x10C3F Hash - 0xC421D95B ^0x56CEE285
{
	Global_1900383.f_411.f_2 = iParam0;
	return;
}

int func_568() // Position - 0x10C52 Hash - 0x8190E5D8 ^0x6C81FB30
{
	return Global_1900383.f_411.f_2;
}

void func_569() // Position - 0x10C63 Hash - 0x63024CC4 ^0x63024CC4
{
	func_564(0);
	func_563(0);
	func_567(0);
	return;
}

BOOL func_570() // Position - 0x10C7A Hash - 0x8190E5D8 ^0xF593603
{
	return Global_1900383.f_444.f_5;
}

int func_571() // Position - 0x10C8B Hash - 0xE835E19F ^0x8AB94403
{
	return Global_40.f_1095.f_3135.f_3;
}

int func_572() // Position - 0x10C9E Hash - 0x8190E5D8 ^0xB4FB0E1F
{
	return Global_1900383.f_444.f_6;
}

void func_573(int iParam0) // Position - 0x10CAF Hash - 0xC421D95B ^0xE7B505B3
{
	Global_1900383.f_444.f_5 = iParam0;
	return;
}

void func_574() // Position - 0x10CC2 Hash - 0x2100AD75 ^0xC7A3C347
{
	Global_1900383.f_444.f_6 = 0;
	return;
}

void func_575(int iParam0) // Position - 0x10CD4 Hash - 0xC421D95B ^0x9AF120BB
{
	Global_1900383.f_444.f_9 = iParam0;
	return;
}

void func_576() // Position - 0x10CE7 Hash - 0xD0368953 ^0x142F88F3
{
	Global_40.f_1095.f_3135.f_3 = Global_40.f_1095.f_3135.f_3 + 1;
	return;
}

BOOL func_577() // Position - 0x10D07 Hash - 0x8190E5D8 ^0xCA87BC87
{
	return Global_1900383.f_444.f_7;
}

int func_578(int iParam0, int iParam1) // Position - 0x10D18 Hash - 0xD30D64D ^0xA6080D3D
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/];
}

int func_579() // Position - 0x10D50 Hash - 0x8190E5D8 ^0x2BADBBBA
{
	return Global_1900383.f_444.f_8;
}

void func_580(int iParam0) // Position - 0x10D61 Hash - 0xC421D95B ^0x6C3664BD
{
	Global_1900383.f_444.f_7 = iParam0;
	return;
}

void func_581() // Position - 0x10D74 Hash - 0x2100AD75 ^0x670AB7F2
{
	Global_1900383.f_444.f_8 = 0;
	return;
}

int func_582() // Position - 0x10D86 Hash - 0x8190E5D8 ^0x5AFCE40C
{
	return Global_1900383.f_444.f_9;
}

BOOL func_583() // Position - 0x10D97 Hash - 0x8190E5D8 ^0xE5C9F4C2
{
	return Global_1900383.f_444.f_10;
}

void func_584(int iParam0) // Position - 0x10DA8 Hash - 0xC421D95B ^0xA01E003E
{
	Global_1900383.f_444.f_10 = iParam0;
	return;
}

void func_585() // Position - 0x10DBB Hash - 0x2100AD75 ^0xE02DD774
{
	Global_1900383.f_444.f_9 = 0;
	return;
}

BOOL func_586() // Position - 0x10DCD Hash - 0xE835E19F ^0xEC3B0FD8
{
	return Global_40.f_1095.f_3135.f_4;
}

int func_587(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10DE0 Hash - 0x16C9DD13 ^0x16C9DD13
{
	int i;
	int num;
	int num2;
	float num3;
	float num4;

	i = -1;
	num = -1;
	num4 = -1f;

	for (i = 0; i < 153; i = i + 1)
	{
		if (!func_588(i))
		{
		}
		else if (func_836(i) != iParam0)
		{
		}
		else
		{
			if (bParam1)
			{
				if (!func_837(i))
				{
				}
				else
				{
					num2 = func_838(i);
				
					if (bParam3)
					{
						if (!func_839(num2))
						{
						}
						else
						{
							if (bParam2)
							{
								if (func_840(num2))
								{
								}
								else
								{
									num3 = func_841(Global_35, func_589(i), true);
								
									if (num3 < num4 || num4 == -1f)
									{
										num = i;
										num4 = num3;
									}
								}
							}
						
							num3 = func_841(Global_35, func_589(i), true);
						
							if (num3 < num4 || num4 == -1f)
							{
								num = i;
								num4 = num3;
							}
						}
					}
				
					if (bParam2)
					{
						if (func_840(num2))
						{
						}
						else
						{
							num3 = func_841(Global_35, func_589(i), true);
						
							if (num3 < num4 || num4 == -1f)
							{
								num = i;
								num4 = num3;
							}
						}
					}
				
					num3 = func_841(Global_35, func_589(i), true);
				
					if (num3 < num4 || num4 == -1f)
					{
						num = i;
						num4 = num3;
					}
				}
			}
		
			num2 = func_838(i);
		
			if (bParam3)
			{
				if (!func_839(num2))
				{
				}
				else
				{
					if (bParam2)
					{
						if (func_840(num2))
						{
						}
						else
						{
							num3 = func_841(Global_35, func_589(i), true);
						
							if (num3 < num4 || num4 == -1f)
							{
								num = i;
								num4 = num3;
							}
						}
					}
				
					num3 = func_841(Global_35, func_589(i), true);
				
					if (num3 < num4 || num4 == -1f)
					{
						num = i;
						num4 = num3;
					}
				}
			}
		
			if (bParam2)
			{
				if (func_840(num2))
				{
				}
				else
				{
					num3 = func_841(Global_35, func_589(i), true);
				
					if (num3 < num4 || num4 == -1f)
					{
						num = i;
						num4 = num3;
					}
				}
			}
		
			num3 = func_841(Global_35, func_589(i), true);
		
			if (num3 < num4 || num4 == -1f)
			{
				num = i;
				num4 = num3;
			}
		}
	}

	return num;
}

BOOL func_588(int iParam0) // Position - 0x10E88 Hash - 0x91023C9F ^0x91023C9F
{
	return iParam0 > -1 && iParam0 < 153;
}

Vector3 func_589(int iParam0) // Position - 0x10E9E Hash - 0x19C525E7 ^0x19C525E7
{
	if (!func_588(iParam0))
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return 2947.0547f, 1320.1497f, 43.8203f;
	
		case 1:
			return 2947.64f, 1344.9012f, 43.899f;
	
		case 2:
			return 2939.0627f, 1287.116f, 43.6529f;
	
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
	
		case 4:
			return -2842.2114f, 137.3398f, 183.8268f;
	
		case 5:
			return -1005.9343f, -540.8262f, 97.9502f;
	
		case 7:
			return -784.49f, -1321.95f, 42.88f;
	
		case 9:
			return -814.4116f, -1367.2427f, 43.7509f;
	
		case 10:
			return -753.42194f, -1284.2399f, 43.200493f;
	
		case 12:
			return -813.6f, -1373.8f, 44.2f;
	
		case 13:
			return -868.33563f, -1366.2074f, 44.753105f;
	
		case 14:
			return -875.03f, -1327.09f, 42.97f;
	
		case 15:
			return -875.02f, -1326.71f, 42.97f;
	
		case 16:
			return -805.72f, -1330.5f, 42.67f;
	
		case 17:
			return -762.0716f, -1293.5487f, 42.8355f;
	
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
	
		case 20:
			return 1521.91f, 441.15f, 89.68f;
	
		case 21:
			return 1523.63f, 442.65f, 89.68f;
	
		case 22:
			return 2161.5f, -618.5f, 43f;
	
		case 23:
			return -1092.88f, -575.69f, 81.41f;
	
		case 24:
			return -1094.35f, -577.48f, 81.41f;
	
		case 25:
			return 1294.0844f, -1303.1022f, 76.0418f;
	
		case 26:
			return 1297.4229f, -1278.4122f, 75.65752f;
	
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
	
		case 28:
			return 1329.7546f, -1294.2175f, 76.0092f;
	
		case 29:
			return 1323.7344f, -1321.7745f, 77.8924f;
	
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
	
		case 31:
			return 1230.34f, -1298.5785f, 75.9027f;
	
		case 32:
			return 1332.5504f, -1298.679f, 75.35602f;
	
		case 34:
			return 2076.8354f, 1000.8294f, 111.4973f;
	
		case 35:
			return 1209.0531f, -193.1814f, 101.97852f;
	
		case 36:
			return 2644.1882f, -1292.5067f, 51.2496f;
	
		case 37:
			return 2657.4658f, -1180.9601f, 53.2785f;
	
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
	
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
	
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
	
		case 42:
			return 2825.6067f, -1318.2065f, 45.7557f;
	
		case 43:
			return 2718f, -1287f, 49.6f;
	
		case 44:
			return 2508.212f, -1449.6539f, 48.415234f;
	
		case 45:
			return 2748.8113f, -1398.2766f, 45.18309f;
	
		case 46:
			return 2747.8245f, -1396.3843f, 45.18309f;
	
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
	
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
	
		case 49:
			return 2817.6404f, -1325.0112f, 47.00512f;
	
		case 50:
			return 2836.9917f, -1305.805f, 45.6964f;
	
		case 51:
			return 2683.84f, -1399.6421f, 45.37881f;
	
		case 54:
			return 2734.1738f, -1119.7551f, 50.10792f;
	
		case 55:
			return 2832.0198f, -1225.5627f, 46.6422f;
	
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
	
		case 57:
			return 675.3091f, -1251.2332f, 43.0152f;
	
		case 58:
			return 1875.2003f, -1859.1821f, 41.8f;
	
		case 59:
			return 2366.0842f, 1347.1224f, 105.1305f;
	
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
	
		case 61:
			return -1790f, -388.27f, 159.33f;
	
		case 62:
			return -1818.99f, -370.94f, 162.3f;
	
		case 63:
			return -1819.8796f, -561.8194f, 157.23232f;
	
		case 64:
			return -1773.3142f, -393.91223f, 155.56471f;
	
		case 65:
			return -1763.7804f, -385.1118f, 156.7401f;
	
		case 67:
			return -2251.0344f, -1916.9109f, 115.9488f;
	
		case 68:
			return -307.96432f, 773.6048f, 117.70312f;
	
		case 69:
			return -306.3f, 815.08f, 117.98f;
	
		case 70:
			return 0f, 0f, 0f;
	
		case 72:
			return -338.8647f, 767.4334f, 115.56277f;
	
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
	
		case 74:
			return -324f, 803.72f, 116.88f;
	
		case 75:
			return -281.82f, 778.97f, 118.5f;
	
		case 76:
			return -369.44574f, 786.69354f, 115.9904f;
	
		case 77:
			return -178.0316f, 628.06213f, 113.08961f;
	
		case 78:
			return -175.03769f, 631.79987f, 113.08961f;
	
		case 79:
			return -325.53195f, 773.6285f, 117.50383f;
	
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
	
		case 82:
			return 3025.7864f, 562.7253f, 43.7167f;
	
		case 84:
			return 2967.2727f, 796.7416f, 52.5948f;
	
		case 85:
			return 2986.94f, 574.9f, 43.64f;
	
		case 86:
			return 2986.2236f, 569.94684f, 43.62284f;
	
		case 87:
			return -1302.9513f, 394.6608f, 94.3817f;
	
		case 88:
			return -1299.8906f, 401.36154f, 94.38248f;
	
		case 89:
			return -1300.8296f, 399.75986f, 94.38248f;
	
		case 90:
			return -5487.1973f, -2939.0383f, -1.3872f;
	
		case 91:
			return -5507.9927f, -2964.8442f, -1.6215f;
	
		case 92:
			return -5509.0186f, -2947.4353f, -2.8934f;
	
		case 93:
			return -5518.0713f, -2906.2173f, -2.7513f;
	
		case 94:
			return -5520.701f, -3044.4265f, -1.40419f;
	
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
	
		case 99:
			return -5227.3574f, -3470.0674f, -20.49293f;
	
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void func_590(var uParam0) // Position - 0x116C5 Hash - 0x314E25ED ^0x5513F5F
{
	Global_1900383.f_444.f_11 = *uParam0;
	return;
}

Blip func_591() // Position - 0x116D9 Hash - 0x8190E5D8 ^0x3A2AFAF5
{
	return Global_1900383.f_444.f_11;
}

BOOL func_592() // Position - 0x116EA Hash - 0x8A998749 ^0x8A998749
{
	if (func_380(7))
		return true;

	if (func_210())
		return true;

	return false;
}

BOOL func_593(Ped pedParam0) // Position - 0x1170A Hash - 0x1A9D46BF ^0x1806B677
{
	Object* p_object;
	ItemSet itemset;
	BOOL flag;
	int itemsetSize;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	p_object = func_211();

	if (!ENTITY::DOES_ENTITY_EXIST(p_object))
		return false;

	itemset = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_ITEMSET_VALID(itemset))
		return false;

	ITEMSET::_CLEAR_ITEMSET(itemset);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	flag = false;
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	if (itemsetSize > 0)
		if (ITEMSET::IS_IN_ITEMSET(p_object, itemset))
			flag = true;

	ITEMSET::DESTROY_ITEMSET(itemset);

	if (flag)
		return true;

	return false;
}

BOOL func_594() // Position - 0x11793 Hash - 0xBB060A5E ^0x4E9D3A3E
{
	int gameTimer;
	int num;
	var unk;

	if (!func_380(7))
	{
		if (func_595(7))
		{
			func_842();
			return true;
		}
	}

	if (func_380(7))
		if (func_213() == 0)
			if (ENTITY::DOES_ENTITY_EXIST(func_88(7)))
				if (!ENTITY::IS_ENTITY_IN_WATER(func_88(7)))
					return true;

	if (func_593(Global_35))
		return true;

	gameTimer = MISC::GET_GAME_TIMER();
	num = func_843();

	if (num == 0)
	{
		func_844(MISC::GET_GAME_TIMER());
		return true;
	}

	if (num + 10000 > gameTimer)
		return true;

	if (ENTITY::_0x383F64263F946E45(&unk, func_211(), 4, Global_35, 0, 1))
	{
		func_842();
		return true;
	}

	return false;
}

BOOL func_595(int iParam0) // Position - 0x11837 Hash - 0x9F2526C ^0x74A3693D
{
	Ped ped;

	iParam0 = func_87(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_201())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

void func_596() // Position - 0x11890 Hash - 0x2100AD75 ^0x799A2886
{
	Global_1900383.f_444.f_12 = 0;
	return;
}

int func_597() // Position - 0x118A2 Hash - 0x8190E5D8 ^0x30F61237
{
	return Global_1900383.f_444.f_12;
}

void func_598(int iParam0) // Position - 0x118B3 Hash - 0xC421D95B ^0x51113BDB
{
	Global_1900383.f_444.f_12 = iParam0;
	return;
}

Ped func_599() // Position - 0x118C6 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_441;
}

void func_600(Ped pedParam0) // Position - 0x118D5 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_441 = pedParam0;
	return;
}

BOOL func_601() // Position - 0x118E6 Hash - 0x8190E5D8 ^0xF39029B9
{
	return Global_1900383.f_444.f_15;
}

void func_602(int iParam0) // Position - 0x118F7 Hash - 0xC421D95B ^0xF1287820
{
	Global_1900383.f_444.f_15 = iParam0;
	return;
}

int func_603() // Position - 0x1190A Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3135;
}

void func_604() // Position - 0x1191B Hash - 0xF0C8A3F9 ^0x68B2AB57
{
	Global_1900383.f_444.f_16 = Global_1900383.f_444.f_16 + 1;
	return;
}

int func_605() // Position - 0x11937 Hash - 0x8190E5D8 ^0xE2DFD8E9
{
	return Global_1900383.f_444.f_16;
}

BOOL func_606(Entity eParam0) // Position - 0x11948 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(eParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_607(Ped pedParam0) // Position - 0x1197A Hash - 0x66F93C72 ^0x590870E7
{
	Entity targetEntity;

	if (func_399(PLAYER::PLAYER_ID(), true, false, true))
		return false;

	if (!func_400(pedParam0))
		return false;

	if (func_398(pedParam0, &targetEntity, -1082130432))
	{
		if (PED::CAN_PED_SEE_ENTITY(pedParam0, targetEntity, false, false) == 1)
			return false;
	
		if (LAW::ARE_WITNESSES_ACTIVE(PLAYER::PLAYER_ID()))
			return false;
	}

	return true;
}

BOOL func_608(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x119D4 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_845())
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
		num = func_846(Global_1898164.f_1[0 /*5*/]);
	
		if (func_847(num) && func_848(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_269(Global_1898164.f_1[0 /*5*/]))
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

int func_609() // Position - 0x11BD8 Hash - 0xF04428FF ^0xD9AF5F7C
{
	if (!func_135(Global_1835011[4 /*74*/].f_1, true))
		return 0;
	else if (!func_135(Global_1347702[66 /*49*/].f_15, true))
		return 1;
	else if (!func_135(Global_1347702[67 /*49*/].f_15, true))
		return 2;
	else if (!func_135(Global_1835011[38 /*74*/].f_1, true))
		return 3;
	else if (!func_135(Global_1347702[68 /*49*/].f_15, true))
		return 4;
	else if (!func_135(Global_1835011[59 /*74*/].f_1, true))
		return 5;
	else if (!func_135(Global_1835011[67 /*74*/].f_1, true))
		return 7;
	else
		return 8;

	return -1;
}

BOOL func_610() // Position - 0x11C9B Hash - 0x1C916922 ^0x1C916922
{
	int i;

	if (func_849())
		return true;

	for (i = 0; i < 21; i = i + 1)
	{
		if (Global_1905944[i] != 0)
			return true;
	}

	return false;
}

BOOL func_611(int iParam0) // Position - 0x11CD2 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_612(BOOL bParam0) // Position - 0x11D10 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

BOOL func_613(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11D1D Hash - 0xC9655EC3 ^0x88C9AFE1
{
	if (Global_1935630.f_18)
		if (bParam2 || Global_1935630.f_19 > 0 || Global_1935630.f_17 > 0)
			return 1;
	else if (bParam1 && !(Global_1935630.f_15 == 1370593166))
		return 0;

	if (Global_1935630.f_20 > 0 || bParam2 && Global_1935630.f_20 > -1)
		return 1;

	if (bParam0)
		if (Global_1935630.f_13)
			if (bParam2 || Global_1935630.f_21 > 0)
				return 1;

	return 0;
}

BOOL func_614() // Position - 0x11DBB Hash - 0xF86514F3 ^0x376B9330
{
	if (func_733(joaat("provision_trinket_pronghorn_antler"), 1, false))
		return true;

	return false;
}

float func_615(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11DD6 Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return -1f;

	return func_187(Global_35, pedParam0, bParam1, bParam2);
}

BOOL func_616() // Position - 0x11DFF Hash - 0xF86514F3 ^0x33055B38
{
	if (func_733(joaat("provision_trinket_beaver_tooth"), 1, false))
		return true;

	return false;
}

void func_617(Hash hParam0, int iParam1) // Position - 0x11E1A Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_2() == -1)
	{
		if (func_850(43))
		{
			if (func_431(hParam0, 412399755))
			{
				func_851(joaat("exotic_stage_01"));
			
				if (func_852() == 0)
				{
					func_853(false, 10);
					num = func_854(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_855(hParam0) < func_856(hParam0))
							func_857(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_850(44))
		{
			if (func_431(hParam0, 709057512))
			{
				func_851(joaat("exotic_stage_02"));
			
				if (func_852() == 1)
				{
					func_853(false, 10);
					num = func_854(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_855(hParam0) < func_856(hParam0))
							func_857(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_850(45))
		{
			if (func_431(hParam0, -1478961327))
			{
				func_851(joaat("exotic_stage_03"));
			
				if (func_852() == 2)
				{
					func_853(false, 10);
					num = func_854(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_855(hParam0) < func_856(hParam0))
							func_857(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_850(46))
		{
			if (func_431(hParam0, -1238404098))
			{
				func_851(joaat("exotic_stage_04"));
			
				if (func_852() == 3)
				{
					func_853(false, 10);
					num = func_854(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_855(hParam0) < func_856(hParam0))
							func_857(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_850(47))
		{
			if (func_431(hParam0, 1160548794))
			{
				func_851(joaat("exotic_stage_05"));
			
				if (func_852() == 4)
				{
					func_853(false, 10);
					num = func_854(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_855(hParam0) < func_856(hParam0))
							func_857(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

void func_618(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x120FE Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	var unk;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_733(func_858(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_859(hParam0, collectableItemHash, unk, iParam1, bParam2);
			else
				func_860(hParam0, collectableItemHash, bParam3);
	}

	return;
}

BOOL func_619(BOOL bParam0) // Position - 0x1215E Hash - 0x421B29F6 ^0xA9215F8
{
	if (func_861())
		return false;

	if (HUD::_0x7EC0D68233E391AC(5) == 2)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT())
		return false;

	if (!bParam0)
		if (!func_610())
			return false;

	if (Global_16)
		return false;

	if (!func_862())
		return false;

	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
		return false;

	if (func_863())
		return false;

	return true;
}

BOOL func_620(Hash hParam0) // Position - 0x121DD Hash - 0xA839C3B7 ^0xFE515ADA
{
	int i;
	int num;

	i = 0;
	num = Global_1914319.f_17378.f_1010.f_201;

	if (hParam0 != 0)
	{
		if (num < 200)
		{
			for (i = 0; i < num; i = i + 1)
			{
				if (Global_1914319.f_17378.f_1010[i] == hParam0)
					return 1;
			}
		}
	}

	return 0;
}

BOOL func_621(Hash hParam0, int iParam1) // Position - 0x1222E Hash - 0xBD05594F ^0xF2BC2977
{
	if (func_2() == -1)
		if (iParam1 == 61)
			if (func_431(hParam0, 1490540191))
				return true;

	return false;
}

BOOL func_622(Hash hParam0, int iParam1) // Position - 0x12258 Hash - 0x83A1723C ^0x83A1723C
{
	var unk;
	int num;
	Hash hash;

	if (hParam0 == 0)
		return 0;

	if (iParam1 == -1)
		return 0;

	num = func_836(iParam1);

	if (num == -1)
		return 0;

	if (!func_864(6, &unk))
		return 0;

	unk.f_2 = -815325344;
	unk.f_3 = func_865(num);

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		hash = hParam0;
		unk.f_2 = 549615901;
		unk.f_3 = hash;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
			return 1;
	}

	return 0;
}

BOOL func_623(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x122DA Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_786(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_866(iParam0))
		return false;

	if (func_867(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_764(iParam0, 1) || func_17(32768))
		if (!func_764(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_862())
		return false;

	return true;
}

void func_624(int iParam0, int iParam1) // Position - 0x1237C Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

void func_625(int iParam0, Hash hParam1, int iParam2) // Position - 0x123A0 Hash - 0xAC28FF72 ^0xA969E0AB
{
	Hash hash;
	int num;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	hash = func_793(hParam1);
	num = func_794(hash, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] - iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = func_795(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num], 0, 10);
	return;
}

int func_626(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x1242D Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_284(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_868(iParam0, hParam1, 1))
		return 0;

	statId = { func_734(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_869(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_869(iParam0, hParam1) - iParam2 < 0)
		{
			func_626(iParam0, hParam1, func_735(hParam1, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_870(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!func_668(false))
		bParam3 = true;

	if (!bParam3 && hParam1 != 1309979101)
		func_732(hParam1, -iParam2, flag, flag2, flag3);

	return 1;
}

int func_627(int iParam0, Hash hParam1, int iParam2) // Position - 0x12510 Hash - 0x2E1C6AB2 ^0xB396D62
{
	var guid2;
	var guid1;

	if (!func_284(hParam1, 0))
		return 0;

	guid2 = { func_871(iParam0) };
	guid1 = { func_872(iParam0, hParam1, guid2, guid2.f_4) };

	if (INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(iParam0, &guid1, &guid2, hParam1, guid2.f_4, iParam2, 752097756))
	{
		if (func_431(hParam1, -839724752) && func_873(hParam1, 4))
			if (!func_850(42))
				func_874(hParam1);
	
		return 1;
	}

	return 0;
}

void func_628(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x12594 Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_630(hParam0, hParam1, true))
	{
		num = func_875(hParam1);
		num2 = func_876(hParam0);
		num3 = func_876(hParam0) - func_876(hParam1);
		num4 = func_875(hParam0) - func_875(hParam1);
		num5 = func_877(hParam0) - func_877(hParam1);
		num6 = func_631(hParam0) - func_631(hParam1);
		num7 = func_878(hParam0) - func_878(hParam1);
		num8 = func_879(hParam0) - func_879(hParam1);
	}
	else
	{
		num = func_875(hParam0);
		num2 = func_876(hParam1);
		num3 = func_876(hParam1) - func_876(hParam0);
		num4 = func_875(hParam1) - func_875(hParam0);
		num5 = func_877(hParam1) - func_877(hParam0);
		num6 = func_631(hParam1) - func_631(hParam0);
		num7 = func_878(hParam1) - func_878(hParam0);
		num8 = func_879(hParam1) - func_879(hParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_880(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_881(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

Entity func_629(Ped pedParam0, int iParam1) // Position - 0x12796 Hash - 0xFCED259B ^0x20281203
{
	int num;
	var unk;
	Entity entity;

	if (iParam1 == -1)
		return 0;

	num = func_273(iParam1);

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, pedParam0, num, 0))
		return 0;

	entity = unk.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return 0;

	return entity;
}

BOOL func_630(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x127D9 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_882(hParam1) || !func_882(hParam0))
			return true;

	return hParam0 > hParam1;
}

int func_631(Hash hParam0) // Position - 0x12806 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

void func_632(var uParam0) // Position - 0x12819 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_633(var uParam0) // Position - 0x1282F Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_883(uParam0, 0f);
	return;
}

BOOL func_634(var uParam0) // Position - 0x1283E Hash - 0x5001E582 ^0x5001E582
{
	return func_884(*uParam0, 1);
}

BOOL func_635(var uParam0, float fParam1) // Position - 0x1284E Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_634(uParam0))
		return 0;

	if (func_885(uParam0) > fParam1)
		return 1;

	return 0;
}

const char* func_636(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x12875 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_637(int iParam0) // Position - 0x12889 Hash - 0x20630FE4 ^0xBDD0E7BB
{
	const char* str;

	if (iParam0 == 255)
		if (func_886(37, iParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (iParam0 < 0 || iParam0 >= 32)
		return "";

	str = "";

	if (!Global_1224589.f_16[iParam0])
		return str;

	if (func_886(37, iParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

const char* func_638(const char* sParam0, int iParam1) // Position - 0x12932 Hash - 0xB0CFF0C3 ^0x5CDF76E0
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_887(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

BOOL func_639() // Position - 0x12968 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_2() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

BOOL func_640() // Position - 0x1298E Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_2() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_641(int iParam0, var uParam1) // Position - 0x129B3 Hash - 0x30A0D5A8 ^0x30A0D5A8
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
	
		case 1:
			*uParam1 = 1;
			break;
	
		default:
			return false;
	}

	return true;
}

int func_642(int iParam0) // Position - 0x129E5 Hash - 0xFF564352 ^0xFF564352
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 100;
	}

	return 0;
}

int func_643(Ped pedParam0, int iParam1) // Position - 0x12A0A Hash - 0x7F66DB32 ^0x5DC811F9
{
	int coreIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (func_641(iParam1, &coreIndex))
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex);

	return 0;
}

void func_644(Ped pedParam0, int iParam1, int iParam2) // Position - 0x12A50 Hash - 0x498B41C8 ^0xF542C5C9
{
	int coreIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	iParam2 = func_795(iParam2, 0, 100);

	if (func_641(iParam1, &coreIndex))
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex, iParam2);

	return;
}

float func_645(int iParam0, int iParam1) // Position - 0x12A9D Hash - 0xE7A5B02F ^0x3359F795
{
	int gameTimer;
	int value;
	float num;

	gameTimer = MISC::GET_GAME_TIMER();
	value = gameTimer - Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_3;
	value = func_795(value, 0, &func_177);
	num = BUILTIN::TO_FLOAT(value) * 0.001f;
	return num;
}

void func_646(int iParam0, int iParam1, int iParam2) // Position - 0x12AE2 Hash - 0x8DF7D29B ^0x33E508B8
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_3 = iParam2;
	return;
}

void func_647(Ped pedParam0, int iParam1, int iParam2) // Position - 0x12B02 Hash - 0x78EA8179 ^0x5D3B3BA5
{
	int attributeCoreValue;
	int coreIndex;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (func_641(iParam2, &coreIndex))
		attributeCoreValue = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex);

	num = func_578(iParam1, iParam2);

	if (num != attributeCoreValue)
		func_888(iParam1, iParam2, attributeCoreValue);

	return;
}

float func_648(int iParam0, int iParam1) // Position - 0x12B47 Hash - 0x800FCAEB ^0x430C41D0
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_2;
}

void func_649(int iParam0, int iParam1) // Position - 0x12B65 Hash - 0xFF942D4A ^0xFF942D4A
{
	float num;
	float num2;

	num = func_648(iParam0, iParam1);
	num2 = func_645(iParam0, iParam1);
	num = num - num2;

	if (num < 0f)
		num = 0f;

	func_889(iParam0, iParam1, num);
	return;
}

void func_650(Ped pedParam0, int iParam1, int iParam2) // Position - 0x12B9C Hash - 0x1FA64A8 ^0x413577DC
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	float num;
	int num2;
	BOOL flag5;
	BOOL flag6;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	int num8;
	int num9;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35);

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	flag = false;

	if (func_84(iParam1) == 2)
		flag = true;

	flag2 = false;

	if (func_320(pedParam0))
		flag2 = true;

	flag3 = false;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (PED::GET_MOUNT(Global_35) == pedParam0)
			flag3 = true;

	flag4 = false;

	if (TASK::_IS_PED_LEADING_HORSE(Global_35))
		if (TASK::_GET_LED_HORSE_FROM_PED(Global_35) == pedParam0)
			flag4 = true;

	flag5 = false;
	flag6 = false;

	switch (iParam2)
	{
		case 0:
		case 1:
			num2 = func_578(iParam1, iParam2);
		
			if (flag)
			{
				if (num2 < 100)
					flag5 = true;
				else
					flag6 = true;
			}
			else if (flag2)
			{
				if (num2 < 55)
					flag5 = true;
				else
					flag6 = true;
			}
			else if (flag4)
			{
				if (num2 < 45)
					flag5 = true;
				else
					flag6 = true;
			}
			else if (!flag3)
			{
				if (num2 < 30)
					flag5 = true;
				else
					flag6 = true;
			}
			else if (func_890(pedParam0, iParam2))
			{
				flag6 = true;
			}
			else
			{
				num = -48f;
				num3 = func_891(iParam1, iParam2);
				num = num - (num * num3);
			}
			break;
	}

	if (num < 0f)
		if (func_76(8192))
			flag6 = true;

	if (flag5)
		if (func_173(iParam1, 128))
			flag6 = true;
		else
			num = 1f;

	num4 = num * 60f;
	num5 = func_645(iParam1, iParam2);
	num6 = (num5 / num4) * 100f;
	num7 = func_892(iParam1, iParam2);
	num8 = func_578(iParam1, iParam2);
	num9 = 0;

	if (!flag6)
	{
		if (num7 < 0f && num6 > 0f || num7 > 0f && num6 < 0f)
			num7 = 0f;
	
		num7 = num7 + num6;
	
		if (num7 >= 1f)
		{
			num7 = num7 - 1f;
			num9 = num9 + 1;
		}
		else if (num7 <= -1f)
		{
			num7 = num7 + 1f;
			num9 = num9 - 1;
		}
	
		func_893(iParam1, iParam2, num7);
	}

	if (num9 == 0)
		return;

	func_888(iParam1, iParam2, num8 + num9);
	return;
}

void func_651(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x12DB5 Hash - 0xF0D613D2 ^0xF0D613D2
{
	var unk;
	var unk13;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	func_21(0, &unk);
	func_21(1, &unk13);
	flag = false;

	if (func_140(40))
		flag = true;

	flag2 = false;
	flag3 = false;

	switch (iParam1)
	{
		case 0:
			if (iParam2 >= 50 && iParam3 < 50)
				if (flag)
					flag2 = true;
		
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (flag)
					flag2 = true;
			
				flag3 = true;
			}
			break;
	
		case 1:
			if (iParam2 >= 50 && iParam3 < 50)
				if (flag)
					flag2 = true;
		
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (flag)
					flag2 = true;
			
				flag3 = true;
			}
			break;
	}

	if (flag2)
	{
		func_580(1);
		func_894(MISC::GET_GAME_TIMER());
	}

	if (flag3)
		func_494(func_791(joaat("horse_core_drained")), 1);

	return;
}

BOOL func_652(int iParam0, var uParam1) // Position - 0x12E89 Hash - 0x8ECDD6A2 ^0x8ECDD6A2
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 16;
			break;
	
		case 1:
			*uParam1 = 8;
			break;
	
		case 2:
			*uParam1 = 13;
			break;
	
		default:
			return false;
	}

	return true;
}

int func_653(int iParam0) // Position - 0x12ECB Hash - 0xD64EC510 ^0xD64EC510
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
	
		case 2:
			return 50;
	}

	return 0;
}

float func_654(int iParam0, int iParam1) // Position - 0x12EFD Hash - 0xE7A5B02F ^0x3359F795
{
	int gameTimer;
	int value;
	float num;

	gameTimer = MISC::GET_GAME_TIMER();
	value = gameTimer - Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_3;
	value = func_795(value, 0, &func_177);
	num = BUILTIN::TO_FLOAT(value) * 0.001f;
	return num;
}

void func_655(int iParam0, int iParam1, int iParam2) // Position - 0x12F42 Hash - 0x8DF7D29B ^0x33E508B8
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_3 = iParam2;
	return;
}

void func_656(Ped pedParam0, int iParam1, int iParam2) // Position - 0x12F62 Hash - 0x6B4F134A ^0x517A5E35
{
	int attributeIndex;
	int attributeBaseRank;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (func_652(iParam2, &attributeIndex))
		attributeBaseRank = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(pedParam0, attributeIndex);

	num = func_437(iParam1, iParam2);

	if (num != attributeBaseRank)
		func_746(iParam1, iParam2, attributeBaseRank);

	return;
}

float func_657(int iParam0, int iParam1) // Position - 0x12FA7 Hash - 0x800FCAEB ^0x430C41D0
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_2;
}

void func_658(int iParam0, int iParam1) // Position - 0x12FC5 Hash - 0xFF942D4A ^0xFF942D4A
{
	float num;
	float num2;

	num = func_657(iParam0, iParam1);
	num2 = func_654(iParam0, iParam1);
	num = num - num2;

	if (num < 0f)
		num = 0f;

	func_895(iParam0, iParam1, num);
	return;
}

void func_659(Ped pedParam0, int iParam1, int iParam2) // Position - 0x12FFC Hash - 0x4B94D836 ^0x28EDF17E
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	float num;
	int num2;
	int num3;
	float num4;
	float num5;
	float num6;
	float num7;
	int num8;
	int num9;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	flag = false;

	if (func_896(pedParam0))
		flag = true;

	if (func_84(iParam1) == 2)
		flag = true;

	flag2 = false;

	if (func_320(pedParam0))
		flag2 = true;

	flag3 = false;

	switch (iParam2)
	{
		case 0:
			if (flag)
				num = -48f;
			else
				flag3 = true;
			break;
	
		case 1:
			if (flag)
				num = -48f;
			else if (flag2)
				num = 192f;
			else if (func_897(pedParam0))
				flag3 = true;
			else
				num = 96f;
			break;
	
		case 2:
			num2 = func_437(iParam1, 2);
			num3 = 100 - func_437(iParam1, 1);
		
			if (num3 < 50)
				num = -96f;
			else if (num2 > 50)
				num = -48f;
			else if (num2 < 50)
				num = 48f;
			else
				flag3 = true;
			break;
	}

	num4 = num * 60f;
	num5 = func_654(iParam1, iParam2);
	num6 = (num5 / num4) * 100f;
	num7 = func_898(iParam1, iParam2);
	num8 = func_437(iParam1, iParam2);
	num9 = 0;

	if (!flag3)
	{
		num7 = num7 + num6;
	
		if (num7 >= 1f)
		{
			num7 = num7 - 1f;
			num9 = num9 + 1;
		}
		else if (num7 <= -1f)
		{
			num7 = num7 + 1f;
			num9 = num9 - 1;
		}
	
		func_899(iParam1, iParam2, num7);
	}

	if (iParam2 == 2)
	{
		if (num2 > 50)
		{
			if (num8 <= 50)
			{
				num8 = 50;
				func_900(iParam1, iParam2);
			}
		}
		else if (num2 < 50)
		{
			if (num8 >= 50)
			{
				num8 = 50;
				func_900(iParam1, iParam2);
			}
		}
	}

	if (num9 == 0)
		return;

	func_746(iParam1, iParam2, num8 + num9);
	return;
}

void func_660(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x131BE Hash - 0xDC43648B ^0xC978973F
{
	var unk;
	var unk13;
	Ped ped;
	BOOL flag;
	BOOL flag2;
	int statusEffectType;
	int num;
	Hash hash;
	Hash hash2;
	BOOL flag3;

	func_21(0, &unk);
	func_21(1, &unk13);
	ped = func_88(iParam0);
	flag = false;

	if (iParam0 == 0 || iParam0 == 1 && !unk.f_2)
		if (iParam0 == 0 && unk.f_10 || iParam0 == 1 && unk13.f_10)
			if (func_140(41))
				flag = true;

	flag2 = false;
	statusEffectType = 0;

	switch (iParam1)
	{
		case 0:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (flag)
				{
					flag2 = true;
					statusEffectType = 4;
				}
			}
		
			if (iParam2 < 100 && iParam3 == 100)
				flag;
			break;
	
		case 1:
			if (iParam2 <= 50 && iParam3 > 50)
				flag;
		
			if (iParam2 < 100 && iParam3 == 100)
				flag;
			break;
	
		case 2:
			num = func_357(ped, 2);
			hash = func_901(iParam0);
			hash2 = func_358(num);
		
			if (hash != hash2)
			{
				flag3 = func_697(ped, hash2, true);
			
				if (flag3)
					func_359(iParam0, hash2);
			}
		
			if (iParam3 > 70)
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, 14, 100);
			else
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, 14, 50);
			break;
	}

	if (flag2)
	{
		func_573(1);
		func_902(MISC::GET_GAME_TIMER());
	}

	if (statusEffectType != 0)
		ATTRIBUTE::_SET_STATUS_EFFECT_CORE_ICON(statusEffectType);

	return;
}

BOOL func_661() // Position - 0x13326 Hash - 0xE835E19F ^0x141BD35D
{
	return Global_40.f_1095.f_3140.f_1;
}

void func_662(int iParam0, float fParam1) // Position - 0x13339 Hash - 0xE0122222 ^0x3AF90C3B
{
	Global_1900383.f_393.f_8[iParam0] = fParam1;
	return;
}

int func_663() // Position - 0x13350 Hash - 0xAD5CD544 ^0xAD5CD544
{
	return 5;
}

int func_664() // Position - 0x13359 Hash - 0xD1F2E716 ^0xD1F2E716
{
	return 6;
}

struct<4> func_665() // Position - 0x13362 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_666(BOOL bParam0) // Position - 0x1336E Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_2() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_667(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x133AF Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_903(&hParam0);

	if (!func_284(hParam0, 0))
		return false;

	if (!func_668(false))
		bParam3 = true;

	if (func_904(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_905(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_906(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return false;
			else if (func_907(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return false;
		
			if (func_908(hParam0, true))
				if (!func_906(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return false;
				else if (func_907(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return false;
		}
		else if (!func_909(hParam0, &unk27, false))
		{
			return false;
		}
	
		return true;
	}

	num = func_910(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	if (bParam3 || !func_911(hParam0))
		inventoryItemCountWithItemid = func_332(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_666(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return true;

	return false;
}

BOOL func_668(BOOL bParam0) // Position - 0x134F4 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_2() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_666(bParam0));
}

int func_669(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x13512 Hash - 0x4C6CAF1 ^0xEE857D47
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk62;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_670(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_736(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_912(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_913(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_914(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_915(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_916(&unk) };
		unk62.f_10 = iParam4;
		num = func_917(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_670(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x13609 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_666(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

void func_671(int iParam0) // Position - 0x13639 Hash - 0x938C2A90 ^0xAF694AA9
{
	Hash model;

	model = func_207(iParam0);
	STREAMING::REQUEST_MODEL(model, false);
	return;
}

void func_672(int iParam0) // Position - 0x13650 Hash - 0x2AA6EA0A ^0x5678563C
{
	Hash model;
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		model = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[i /*94*/];
	
		if (STREAMING::IS_MODEL_VALID(model))
			STREAMING::REQUEST_MODEL(model, false);
	}

	return;
}

BOOL func_673(int iParam0) // Position - 0x1368F Hash - 0x16F3368C ^0x8D9BB59A
{
	Hash model;

	model = func_207(iParam0);

	if (!STREAMING::HAS_MODEL_LOADED(model))
		return false;

	return true;
}

BOOL func_674(int iParam0) // Position - 0x136AE Hash - 0xF8165332 ^0x2BC2A4B9
{
	Hash model;
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		model = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[i /*94*/];
	
		if (STREAMING::IS_MODEL_VALID(model))
			if (!STREAMING::HAS_MODEL_LOADED(model))
				return false;
	}

	return true;
}

BOOL func_675(int iParam0) // Position - 0x136F5 Hash - 0xB073C27E ^0xB073C27E
{
	int num;

	num = iParam0;

	if (num >= 0 && num < 5)
		return true;

	return false;
}

void func_676(Ped pedParam0, int iParam1) // Position - 0x13716 Hash - 0x588627F6 ^0xE00264D1
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(pedParam0, 7, iParam1);
	return;
}

void func_677(Ped pedParam0, int iParam1) // Position - 0x13749 Hash - 0x588627F6 ^0xC3BB3FA5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(pedParam0, 7, iParam1);
	return;
}

void func_678(Ped pedParam0, int iParam1, int iParam2) // Position - 0x1377C Hash - 0x498B41C8 ^0xF542C5C9
{
	int attributeIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	iParam2 = func_795(iParam2, 0, 100);

	if (func_652(iParam1, &attributeIndex))
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(pedParam0, attributeIndex, iParam2);

	return;
}

int func_679(int iParam0) // Position - 0x137C9 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_431;
}

int func_680(int iParam0) // Position - 0x137FD Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_432;
}

int func_681(int iParam0, int iParam1) // Position - 0x13831 Hash - 0xE1D12727 ^0xC55B8D95
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_beaver_fur");
	
		case 1:
			return joaat("PROVISION_BEAVER_FUR_POOR");
	
		case 2:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
	
		case 3:
			return joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE");
	
		case 4:
			return joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE");
	
		case 5:
			return joaat("provision_boar_skin");
	
		case 6:
			return joaat("PROVISION_BOAR_SKIN_POOR");
	
		case 7:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
	
		case 8:
			return joaat("provision_buck_fur");
	
		case 9:
			return joaat("PROVISION_BUCK_FUR_POOR");
	
		case 10:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
	
		case 11:
			return joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE");
	
		case 12:
			return joaat("provision_cougar_fur");
	
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
	
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
	
		case 15:
			return joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE");
	
		case 16:
			return joaat("provision_coyote_fur");
	
		case 17:
			return joaat("PROVISION_COYOTE_FUR_POOR");
	
		case 18:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
	
		case 19:
			return joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE");
	
		case 20:
			return joaat("provision_deer_hide");
	
		case 21:
			return joaat("PROVISION_DEER_HIDE_POOR");
	
		case 22:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
	
		case 23:
			return joaat("provision_fox_fur");
	
		case 24:
			return joaat("PROVISION_FOX_FUR_POOR");
	
		case 25:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
	
		case 26:
			return joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE");
	
		case 27:
			return joaat("provision_goat_hair");
	
		case 28:
			return joaat("PROVISION_GOAT_HAIR_POOR");
	
		case 29:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
	
		case 30:
			return joaat("provision_javelina_skin");
	
		case 31:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
	
		case 32:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
	
		case 33:
			return joaat("provision_loanshark_skins");
	
		case 34:
			return joaat("provision_panther_fur");
	
		case 35:
			return joaat("PROVISION_PANTHER_FUR_POOR");
	
		case 36:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
	
		case 37:
			return joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE");
	
		case 38:
			return joaat("provision_pig_skin");
	
		case 39:
			return joaat("PROVISION_PIG_SKIN_POOR");
	
		case 40:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
	
		case 41:
			return joaat("provision_pronghorn_fur");
	
		case 42:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
	
		case 43:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
	
		case 44:
			return joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE");
	
		case 45:
			return joaat("provision_ram_hide");
	
		case 46:
			return joaat("PROVISION_RAM_HIDE_POOR");
	
		case 47:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
	
		case 48:
			return joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE");
	
		case 49:
			return joaat("provision_sheep_wool");
	
		case 50:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
	
		case 51:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
	
		case 52:
			return joaat("provision_wolf_fur");
	
		case 53:
			return joaat("PROVISION_WOLF_FUR_POOR");
	
		case 54:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
	
		case 55:
			return joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE");
	
		case 56:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_682(int iParam0) // Position - 0x13B6A Hash - 0x688B6CD0 ^0x688B6CD0
{
	int i;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	for (i = 0; i < 23; i = i + 1)
	{
		if (i == -1)
		{
		}
		else
		{
			Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[i] = 0f;
		}
	}

	return;
}

void func_683() // Position - 0x13BBF Hash - 0x18B223B ^0xD86894F6
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		Global_1900383.f_317.f_2[i /*5*/] = -1;
		Global_1900383.f_317.f_2[i /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[i /*5*/].f_2 = 0f;
		Global_1900383.f_317.f_2[i /*5*/].f_3 = -1;
		Global_1900383.f_317.f_2[i /*5*/].f_4 = 0f;
	}

	return;
}

BOOL func_684(int iParam0, var uParam1) // Position - 0x13C27 Hash - 0x9604B47A ^0xC430D780
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_719(iParam0, &unk))
		return false;

	*uParam1 = func_918(unk, joaat("SLOTID_HORSE_MANE"), false);

	if (!func_284(*uParam1, 0))
		return false;

	return true;
}

BOOL func_685(int iParam0, var uParam1) // Position - 0x13C70 Hash - 0x9604B47A ^0x406A0DCA
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_719(iParam0, &unk))
		return false;

	*uParam1 = func_918(unk, joaat("SLOTID_HORSE_TAIL"), false);

	if (!func_284(*uParam1, 0))
		return false;

	return true;
}

BOOL func_686(Hash hParam0, var uParam1) // Position - 0x13CB9 Hash - 0x9965E721 ^0x4526F41
{
	var unk;

	if (!func_919(856287005, hParam0))
		return false;

	unk = { func_81() };
	*uParam1 = func_918(unk, hParam0, false);

	if (!func_284(*uParam1, 0))
		return false;

	return true;
}

void func_687(var uParam0) // Position - 0x13CFB Hash - 0x99F7243D ^0x36B2A3DE
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	return;
}

void func_688(var uParam0, int iParam1) // Position - 0x13D20 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_689(var uParam0, int iParam1) // Position - 0x13D2D Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

void func_690(var uParam0, int iParam1) // Position - 0x13D3B Hash - 0x4F8BE4B5 ^0x5AE41537
{
	uParam0->f_2 = iParam1;
	return;
}

void func_691(var uParam0, int iParam1) // Position - 0x13D49 Hash - 0x4F8BE4B5 ^0xCB719C1
{
	uParam0->f_3 = iParam1;
	return;
}

void func_692(var uParam0, int iParam1) // Position - 0x13D57 Hash - 0x4F8BE4B5 ^0xFF22C7C
{
	uParam0->f_4 = iParam1;
	return;
}

void func_693(var uParam0, int iParam1) // Position - 0x13D65 Hash - 0x4F8BE4B5 ^0x8A18C31F
{
	uParam0->f_5 = iParam1;
	return;
}

void func_694(Ped pedParam0) // Position - 0x13D73 Hash - 0x4C9A12AA ^0x56351FC0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_manes"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_tails"), 0, false);
	return;
}

void func_695(Ped pedParam0, var uParam1) // Position - 0x13DBD Hash - 0x6EA4BA5B ^0xEF2325EE
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_920(pedParam0, *uParam1);
	func_920(pedParam0, uParam1->f_1);
	return;
}

void func_696(Ped pedParam0, var uParam1) // Position - 0x13E00 Hash - 0x8B68AA3D ^0x349991C3
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_920(pedParam0, *uParam1);
	func_920(pedParam0, uParam1->f_1);
	func_920(pedParam0, uParam1->f_2);
	func_920(pedParam0, uParam1->f_3);
	func_920(pedParam0, uParam1->f_4);
	func_920(pedParam0, uParam1->f_5);
	return;
}

BOOL func_697(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x13E6B Hash - 0x1A2B1EEB ^0x4DBC1D46
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
		return 0;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, entityModel))
		return 0;

	PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, true, true, true, true, false);

	return 1;
}

int func_698(int iParam0) // Position - 0x13EC0 Hash - 0xE49277E9 ^0xE49277E9
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	}

	return 0;
}

Ped func_699(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x13EF8 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_921(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_700() // Position - 0x13F3A Hash - 0xD92B3E8B ^0xD92B3E8B
{
	if (!func_76(8))
		return false;

	return true;
}

Blip func_701() // Position - 0x13F51 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_444;
}

Blip func_702() // Position - 0x13F60 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1900383.f_444.f_1;
}

void func_703(var uParam0) // Position - 0x13F71 Hash - 0xA616ABDA ^0xA616ABDA
{
	Global_1900383.f_444 = *uParam0;
	return;
}

void func_704(var uParam0) // Position - 0x13F83 Hash - 0x314E25ED ^0x4CE48A86
{
	Global_1900383.f_444.f_1 = *uParam0;
	return;
}

void func_705(var uParam0) // Position - 0x13F97 Hash - 0xA244D6E8 ^0xCE1F4CE9
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_922(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
	return;
}

Vector3 func_706(int iParam0) // Position - 0x13FBF Hash - 0x91720586 ^0x7E4DEE8C
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	if (iParam0 >= 7)
		return 0f, 0f, 0f;

	return Global_1900383[iParam0 /*45*/].f_38;
}

BOOL func_707(var uParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, int iParam8) // Position - 0x13FF3 Hash - 0xBEBA9B2E ^0xC227ECCF
{
	Vector3 vector;
	var outPosition;
	int num;
	float value;
	var gameplayCamRot;
	BOOL flag;
	int num2;

	num = 12;

	if (_IS_NULL_VECTOR(uParam4))
	{
		gameplayCamRot = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		value = gameplayCamRot.f_2;
	}
	else
	{
		value = func_710(uParam4, vParam1, 1);
	}

	value = value + (BUILTIN::TO_FLOAT(uParam0->f_2) * 10f * uParam0->f_2 % 2 == 0 ? 1f : -1f);
	vector = { vParam1 + ({ 0f, -BUILTIN::COS(value), BUILTIN::SIN(value) } * { (80f + 40f) * 0.5f, (80f + 40f) * 0.5f, (80f + 40f) * 0.5f } * { iParam8, iParam8, iParam8 }) };

	if (uParam0->f_2 > 3)
		num = 13;

	switch (func_924(uParam0))
	{
		case 0:
			func_925(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_926(uParam0, 1);
			break;
	
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vector, &outPosition, 1, 1077936128, 0))
			{
				if (func_927(outPosition, vParam1, false, false))
				{
					func_925(uParam0, outPosition);
				
					if (uParam0->f_12)
						func_926(uParam0, 3);
					else
						func_926(uParam0, 4);
				}
				else
				{
					func_926(uParam0, 2);
				}
			}
			else
			{
				func_926(uParam0, 2);
			}
			break;
	
		case 2:
			flag = false;
		
			if (func_928(vector, &(uParam0->f_3), &flag, num, false, 1127481344, 1101004800, -1138501878, -1138501878, 0))
				if (func_927(func_709(uParam0), vParam1, true, true))
					if (uParam0->f_12)
						func_926(uParam0, 3);
					else
						func_926(uParam0, 4);
				else
					func_926(uParam0, 5);
			else if (flag)
				func_926(uParam0, 5);
			break;
	
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::NAVMESH_REQUEST_PATH(pedParam7, func_709(uParam0), vParam1, 23);
			
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14 = uParam0->f_14 + 1;
					uParam0->f_13 = 0;
				
					if (uParam0->f_14 >= 50)
						func_926(uParam0, 5);
				}
			}
			else
			{
				switch (PATHFIND::_NAVMESH_REQUESTED_QUERY_STATUS(uParam0->f_13))
				{
					case 0:
						PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
						func_926(uParam0, 5);
						break;
				
					case 1:
						num2 = PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN(uParam0->f_13);
					
						if (func_929(num2, 2) && num != 13)
							func_926(uParam0, 5);
						else
							func_926(uParam0, 4);
					
						PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
						break;
				
					case 2:
						break;
				}
			}
			break;
	
		case 4:
			uParam0->f_2 = 0;
			func_930(&(uParam0->f_3.f_3), 1, 1, false);
			func_926(uParam0, 0);
			return true;
	
		case 5:
			uParam0->f_2 = uParam0->f_2 + 1;
		
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
		
			func_926(uParam0, 0);
			break;
	}

	return false;
}

BOOL func_708(Ped pedParam0, char* sParam1, int iParam2, Ped pedParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x142C4 Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = pedParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_931(pedParam0, &str);
}

Vector3 func_709(var uParam0) // Position - 0x1430B Hash - 0x9DAA674D ^0x2F5D0C00
{
	return uParam0->f_3.f_3;
}

float func_710(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x1431B Hash - 0x9F66817B ^0xCA5C01B6
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

BOOL func_711(int iParam0) // Position - 0x14380 Hash - 0xA40B25A1 ^0xA40B25A1
{
	Ped ped;
	Ped ped2;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_71(iParam0))
		return false;

	ped = func_88(iParam0);
	ped2 = func_185(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (PED::GET_MOUNT(ped2) == ped)
		return true;

	return false;
}

void func_712(int iParam0, BOOL bParam1) // Position - 0x143E0 Hash - 0x123879AA ^0xA420DFFE
{
	Ped mount;
	Ped riderOfMount;
	Ped riderOfMount2;
	int num;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	mount = Global_1900383[iParam0 /*45*/];

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return;

	riderOfMount = PED::_GET_RIDER_OF_MOUNT(mount, false);
	riderOfMount2 = PED::_GET_RIDER_OF_MOUNT(mount, true);

	if (riderOfMount != riderOfMount2)
		return;

	if (bParam1)
		num = 2;
	else
		num = 1;

	TASK::TASK_HORSE_ACTION(mount, num, 0, 0);
	return;
}

BOOL func_713() // Position - 0x14465 Hash - 0x889968A6 ^0xAC28F0CD
{
	return func_932(1073741824);
}

int func_714(var uParam0, var uParam1) // Position - 0x14476 Hash - 0xBA06C937 ^0xBA06C937
{
	eStackSize stackSize;

	stackSize = func_170();

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
			*uParam0 = { func_933(4) };
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

int func_715() // Position - 0x145CA Hash - 0x8190E5D8 ^0x5AFCE40C
{
	return Global_1900383.f_378.f_9;
}

BOOL func_716(Hash hParam0) // Position - 0x145DB Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("a_c_horse_gang_bill"):
		case joaat("a_c_horse_gang_sean"):
		case joaat("a_c_horse_gang_john"):
		case joaat("a_c_horse_gang_karen"):
		case joaat("a_c_horse_gang_dutch"):
		case joaat("a_c_horse_eagleflies"):
		case joaat("a_c_horse_gang_javier"):
		case joaat("a_c_horse_gang_sadie"):
		case joaat("a_c_horse_gang_lenny"):
		case joaat("a_c_horse_gang_micah"):
		case joaat("a_c_horse_gang_hosea"):
		case joaat("a_c_horse_gang_sadie_endlesssummer"):
		case joaat("a_c_horse_gang_charles"):
		case joaat("a_c_horse_gang_uncle_endlesssummer"):
		case joaat("a_c_horse_gang_trelawney"):
		case joaat("a_c_horse_gang_kieran"):
		case joaat("a_c_horse_gang_uncle"):
		case joaat("a_c_horse_gang_charles_endlesssummer"):
			return true;
	}

	return false;
}

void func_717(Ped pedParam0, int iParam1, int iParam2) // Position - 0x1465F Hash - 0x83822F7F ^0xF24D19B
{
	Player playerIndex;
	int num;
	BOOL flag;
	Ped ped;
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		if (iParam2 == 0)
			return;

	if (iParam1 == -1)
		return;

	if (iParam1 >= 7)
		return;

	if (func_389(pedParam0))
		return;

	if (func_390(pedParam0))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, true);

	func_326(iParam1, pedParam0);
	func_934(iParam1, iParam2);
	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);

	if (pedParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(playerIndex))
	{
		func_469(iParam1, 0);
	}
	else
	{
		num = func_935(pedParam0);
		func_469(iParam1, num);
	}

	if (iParam1 == 0 || iParam1 == 1)
		func_343(pedParam0);

	if (iParam1 == 0)
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, pedParam0);
	else if (iParam1 == 1)
		flag = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, pedParam0);

	if (iParam1 == 6)
		return;

	if (func_540(iParam1))
		func_541(iParam1);

	ped = func_207(iParam1);
	hash = func_542(ped);
	func_543(iParam1, hash);
	return;
}

void func_718(int iParam0, int iParam1) // Position - 0x1477C Hash - 0x29B1BAB8 ^0xB9A693D4
{
	Ped model;
	var unk;
	var unk2;
	int defaultMaxAttributeRank;
	float num;
	Ped ped;
	int num2;
	int attributeRank;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	model = func_207(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		func_749(&unk, &model, &unk2);

	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);

	if (iParam1 > defaultMaxAttributeRank)
		return;

	num = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = num;
	func_936(iParam1);
	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	num2 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, 7, num2);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = attributeRank;
	PED::_SET_MOUNT_BONDING_LEVEL(ped, attributeRank);
	return;
}

BOOL func_719(int iParam0, Any* panParam1) // Position - 0x1487A Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_540(iParam0))
		return false;

	hash = func_720(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_330(false) };

	if (!func_937(unk15, hash, &unk, 0, false))
		return false;

	if (!func_938(&unk, panParam1))
		return false;

	return true;
}

Hash func_720(int iParam0) // Position - 0x148DF Hash - 0xBD10D1A2 ^0xE9C9558B
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
	
		case 1:
			return -832337898;
	
		case 2:
			return 1271463052;
	
		case 3:
			return 1983140194;
	
		case 4:
			return 677262775;
	}

	return 0;
}

BOOL func_721(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1494B Hash - 0x8FC90634 ^0x533F9AFB
{
	var unk;
	var outGuid;

	if (!func_668(bParam10))
		return func_939(uParam0, uParam4, hParam8, true, bParam9, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_670(uParam0, &unk, false, false))
		return false;

	if (func_940(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return true;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return false;

	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_666(false), &uParam0, &uParam4, hParam8, unk.f_11, &outGuid))
		return false;

	if (bParam9)
		!func_335(outGuid, true);

	return true;
}

BOOL func_722(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x14A0F Hash - 0x3163F569 ^0x1B89B919
{
	var unk;
	var unk15;
	int inventoryId;

	if (!func_668(bParam9))
		return func_941(uParam0, uParam4, iParam8, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	if (func_940(&uParam0, &uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_670(uParam0, &unk, bParam9, true) || !func_670(uParam4, &unk15, bParam9, true))
		return false;

	if (func_940(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return false;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return false;

	inventoryId = func_666(false);

	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(inventoryId, &uParam0, &uParam4))
		return false;

	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam0, unk15.f_10 || iParam8);
	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam4, unk.f_10 || iParam8);
	return true;
}

eStackSize func_723() // Position - 0x14B34 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_724(Hash hParam0) // Position - 0x14B42 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
		case joaat("consumable_herb_oleander_sage"):
		case joaat("consumable_herb_parasol_mushroom"):
		case joaat("consumable_herb_hummingbird_sage"):
		case joaat("consumable_herb_black_berry"):
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_herb_sage"):
		case joaat("consumable_crafted_super_meal"):
		case joaat("consumable_beets"):
		case joaat("consumable_herb_evergreen_huckleberry"):
		case joaat("consumable_herb_english_mace"):
		case joaat("consumable_herb_bay_bolete"):
		case joaat("consumable_peppermint"):
		case joaat("consumable_herb_chanterelles"):
		case joaat("consumable_corn"):
		case joaat("consumable_herb_rams_head"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_herb_wintergreen_berry"):
		case joaat("consumable_herb_indian_tobacco"):
		case joaat("consumable_herb_yarrow"):
		case joaat("consumable_herb_wild_mint"):
		case joaat("consumable_herb_burdock_root"):
		case joaat("consumable_herb_black_currant"):
		case joaat("consumable_herb_american_ginseng"):
		case joaat("consumable_herb_golden_currant"):
		case joaat("consumable_herb_violet_snowdrop"):
		case joaat("consumable_herb_red_sage"):
		case joaat("consumable_herb_milkweed"):
		case joaat("consumable_herb_prairie_poppy"):
		case joaat("consumable_peach"):
		case joaat("consumable_herb_desert_sage"):
		case joaat("consumable_carrot"):
		case joaat("consumable_herb_oregano"):
		case joaat("consumable_herb_red_raspberry"):
		case joaat("consumable_herb_wild_feverfew"):
		case joaat("consumable_herb_currant"):
		case joaat("consumable_pear"):
		case joaat("consumable_herb_wild_carrots"):
		case joaat("consumable_herb_ginseng"):
		case joaat("consumable_haycube"):
		case joaat("consumable_apple"):
		case joaat("consumable_herb_alaskan_ginseng"):
		case joaat("consumable_celery"):
		case joaat("consumable_herb_vanilla_flower"):
		case joaat("consumable_herb_creeping_thyme"):
			return true;
	}

	return false;
}

BOOL func_725(Hash hParam0) // Position - 0x14C68 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_special_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
		case joaat("consumable_potent_horse_medicine"):
			return true;
	}

	return false;
}

BOOL func_726(Hash hParam0) // Position - 0x14C98 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_horse_stimulant"):
		case joaat("consumable_horse_stimulant_used"):
		case joaat("consumable_potent_horse_stimulant"):
		case joaat("consumable_special_horse_stimulant_crafted"):
			return true;
	}

	return false;
}

BOOL func_727(Hash hParam0) // Position - 0x14CC8 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_special_horse_reviver_crafted"):
		case joaat("consumable_horse_reviver"):
			return true;
	}

	return false;
}

BOOL func_728(Hash hParam0) // Position - 0x14CEC Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("CONSUMABLE_HORSE_OINTMENT_CRAFTED"):
			return true;
	}

	return false;
}

BOOL func_729(Hash hParam0) // Position - 0x14D0A Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("kit_horse_brush"):
			return true;
	}

	return false;
}

BOOL func_730(Hash hParam0) // Position - 0x14D28 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case -1724045811:
			return true;
	}

	return false;
}

Hash func_731(Hash hParam0, int iParam1) // Position - 0x14D46 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_284(hParam0, 0))
		return 0;

	num = func_736(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_431(hParam0, 1399091007))
	{
		func_942(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_732(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x14DC0 Hash - 0xB6CF78C ^0x845E9244
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	char* str;
	int num3;
	int num4;
	int num5;
	char* str2;
	int num6;
	const char* str3;

	if (hParam0 == joaat("ammo_moonshinejug"))
		return;

	if (!func_284(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_943())
	{
		func_944(hParam0, iParam1, bParam2, bParam4);
		return;
	}

	flag = false;
	num = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_873(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_736(hParam0);
	num3 = 0;
	num4 = joaat("Inventory");

	if (num2 == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver"))
	{
		num3 = joaat("ammo_types");
		num4 = joaat("ammo_types");
	}

	if (num2 == joaat("weapon_mod") || num2 == joaat("weapon_decoration"))
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_946(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num5 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	num6 = 0;

	if (flag)
	{
		num5 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num6 = 1;
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_rpg_special_1");
		else
			num5 = joaat("color_yellowdark");

	str3 = func_887(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_947(hParam0)), num), num5);

	if (iParam1 == 1 || func_431(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_947(hParam0));

	func_754(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

BOOL func_733(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x15015 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_284(hParam0, 0))
		return false;

	num = func_736(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_948(hParam0, 1))
			return false;

	return func_735(hParam0, false, bParam2) >= iParam1;
}

struct<2> func_734(Hash hParam0) // Position - 0x1507F Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_284(hParam0, 0))
		return unk;

	if (func_431(hParam0, -305066475))
		if (func_2() == -1)
			if (func_431(hParam0, -537818634))
				return func_832(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_832(joaat("deadeye_items"));
	else if (func_431(hParam0, -537818634))
		return func_832(joaat("medicine_items"));

	if (func_431(hParam0, 2084895747))
		return func_832(joaat("lock_breaker_items"));

	return unk3;
}

int func_735(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15113 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_284(hParam0, 0))
		return 0;

	num = func_736(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_731(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_949(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_666(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_736(Hash hParam0) // Position - 0x15195 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_284(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_737(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x151C0 Hash - 0x17E58D7C ^0xB0311DE1
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

	unk = { func_950(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_951(&unk, func_905(false));

	if (!func_952(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_953(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_819(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_954(num);
	num3 < iParam1;
	return true;
}

BOOL func_738(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1528B Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_284(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_955(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_956(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_331(hParam0, unk, unk.f_4, bParam4) };
	return func_819(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_739(Ped pedParam0, Hash hParam1) // Position - 0x152FC Hash - 0x913534DE ^0xBD71FC61
{
	int num;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	BOOL flag2;
	int num7;
	int num8;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_724(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return;

	func_957(pedParam0);
	num = -1;
	flag = false;

	if (func_388(pedParam0))
	{
		num = func_401(pedParam0);
		flag = true;
	}

	PED::_0xEB8886E1065654CD(pedParam0, 10, "ALL", 10f);
	func_494(func_791(joaat("horse_fed")), 1);
	num2 = func_643(pedParam0, 0);
	num3 = func_643(pedParam0, 1);
	func_790(pedParam0, hParam1);
	num4 = func_643(pedParam0, 0);
	num5 = func_643(pedParam0, 1);
	num6 = 0;
	num6 = num6 + (num4 - num2);
	num6 = num6 + (num5 - num3);
	func_114(pedParam0);

	if (!flag)
		return;

	if (func_958(hParam1))
		func_494(func_791(joaat("horse_fed_mushroom")), 1);

	if (func_959(hParam1))
		return;

	if (func_960(hParam1))
	{
		func_454(num, 16);
		return;
	}

	flag2 = false;
	num7 = func_357(pedParam0, 2);

	if (num7 < 30)
		flag2 = true;

	num8 = -1;

	if (num6 >= 50 || flag2)
		num8 = 13;
	else if (num6 >= 25)
		num8 = 14;
	else if (num6 >= 0)
		num8 = 15;

	if (num8 != -1)
		func_454(num, num8);

	if (!func_205(43))
	{
		func_283(43, false);
		func_575(MISC::GET_GAME_TIMER());
	}

	return;
}

void func_740(Ped pedParam0, Hash hParam1) // Position - 0x15488 Hash - 0x913534DE ^0xBD71FC61
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_725(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	func_790(pedParam0, hParam1);
	return;
}

void func_741(Ped pedParam0, Hash hParam1) // Position - 0x154D8 Hash - 0x913534DE ^0xBD71FC61
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_726(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	func_494(func_791(joaat("horse_stimulant_given")), 1);
	func_790(pedParam0, hParam1);
	return;
}

void func_742(Ped pedParam0, Hash hParam1) // Position - 0x15536 Hash - 0x913534DE ^0xBD71FC61
{
	int num;
	BOOL flag;
	int num2;
	float num3;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_728(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	func_957(pedParam0);
	func_790(pedParam0, hParam1);
	flag = func_388(pedParam0);

	if (flag)
		num = func_401(pedParam0);

	func_114(pedParam0);

	if (!flag)
		return;

	if (!func_890(pedParam0, 1))
		func_454(num, 20);

	num2 = func_961(pedParam0);
	num3 = BUILTIN::TO_FLOAT(func_962(num2)) + (48f * 60f);
	func_895(num, 0, num3);
	return;
}

void func_743(Ped pedParam0, Hash hParam1) // Position - 0x155ED Hash - 0x913534DE ^0xBD71FC61
{
	int num;
	BOOL flag;
	int num2;
	float num3;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_730(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	flag = false;

	if (func_388(pedParam0))
	{
		num = func_401(pedParam0);
		flag = true;
	}

	if (flag)
	{
		num2 = func_961(pedParam0);
		num3 = BUILTIN::TO_FLOAT(func_962(num2)) + (48f * 60f);
		func_895(num, 0, num3);
	}

	func_957(pedParam0);
	func_790(pedParam0, hParam1);
	return;
}

int func_744() // Position - 0x15688 Hash - 0x4228A1C2 ^0x5FAFE78F
{
	return Global_1900372.f_9;
}

void func_745(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x15696 Hash - 0x4C0C4CFB ^0xE9BAC152
{
	int num;
	BOOL flag;
	int num2;
	int value;
	BOOL flag2;
	int gameTimer;
	int num3;
	BOOL flag3;
	int num4;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!func_729(hParam1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	func_957(pedParam0);
	PED::_0xEB8886E1065654CD(pedParam0, 10, "ALL", 10f);
	func_790(pedParam0, hParam1);
	func_114(pedParam0);
	flag = func_388(pedParam0);

	if (flag)
		num = func_401(pedParam0);

	if (!flag)
		return;

	num2 = func_961(pedParam0);
	value = func_962(num2);
	func_895(num, 0, BUILTIN::TO_FLOAT(value));
	flag2 = false;
	gameTimer = MISC::GET_GAME_TIMER();
	num3 = func_963();

	if (num3 + 45000 > gameTimer)
		flag2 = true;

	flag3 = false;

	if (flag2 && num3 + 15000 > gameTimer)
		flag3 = true;

	if (iParam2 >= 10)
		num4 = 17;
	else if (flag2)
		if (flag3)
			return;
		else
			num4 = 19;
	else
		num4 = 18;

	if (num4 != -1)
	{
		func_454(num, num4);
		func_964(gameTimer);
	}

	return;
}

void func_746(int iParam0, int iParam1, int iParam2) // Position - 0x157B2 Hash - 0x33CA9B4 ^0xE447793A
{
	Ped ped;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	iParam2 = func_795(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/] = iParam2;
	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	func_678(ped, iParam1, iParam2);
	return;
}

int func_747(int iParam0) // Position - 0x15829 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_965(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_748(Hash hParam0) // Position - 0x1586A Hash - 0x50573299 ^0x50573299
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

int func_749(var uParam0, var uParam1, var uParam2) // Position - 0x15924 Hash - 0xEEC53156 ^0xA03BD067
{
	BOOL flag;

	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;

	if (func_94())
	{
		if (func_639())
		{
			flag = false;
		
			if (!func_135(Global_1835011[15 /*74*/].f_1, true) && !func_140(42))
				flag = true;
		
			if (flag)
			{
				*uParam0 = func_966();
				*uParam1 = func_967();
				*uParam2 = func_968();
				return 1;
			}
			else
			{
				*uParam0 = func_969();
				*uParam1 = func_970();
				*uParam2 = func_971();
				return 1;
			}
		}
		else if (func_640())
		{
			if (!func_135(Global_1835011[60 /*74*/].f_1, true))
			{
				*uParam0 = func_972();
				*uParam1 = func_973();
				*uParam2 = func_974();
				return 1;
			}
			else
			{
				*uParam0 = func_975();
				*uParam1 = func_976();
				*uParam2 = func_977();
				return 1;
			}
		}
	}
	else if (func_639())
	{
		*uParam0 = func_978();
		*uParam1 = func_979();
		*uParam2 = func_980();
		return 1;
	}
	else if (func_640())
	{
		*uParam0 = func_981();
		*uParam1 = func_982();
		*uParam2 = func_983();
		return 1;
	}

	return 0;
}

void func_750(int iParam0, int iParam1) // Position - 0x15A3E Hash - 0x42DB579F ^0x4C67AD4
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = iParam1;
	return;
}

void func_751(int iParam0, Hash hParam1) // Position - 0x15A71 Hash - 0x42DB579F ^0xF1492904
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = hParam1;
	return;
}

void func_752(int iParam0, int iParam1) // Position - 0x15AA4 Hash - 0x42DB579F ^0x8D4EBF0
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = iParam1;
	return;
}

void func_753(int iParam0, int iParam1) // Position - 0x15AD7 Hash - 0xFDFFDD51 ^0x74BA7635
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 || iParam1;
	return;
}

int func_754(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x15B10 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_984(sParam0, sParam1, hParam2);
	return num2;
}

int func_755(Ped pedParam0) // Position - 0x15B73 Hash - 0xA0A98F4D ^0x83A3F127
{
	int defaultMaxAttributeRank;

	if (!STREAMING::IS_MODEL_VALID(pedParam0))
		pedParam0 = joaat("a_c_horse_tennesseewalker_chestnut");

	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(pedParam0, 7);
	return defaultMaxAttributeRank;
}

BOOL func_756(int iParam0, int iParam1) // Position - 0x15B97 Hash - 0x7B20FD22 ^0x7B20FD22
{
	Ped ped;
	float num;

	if (iParam1 == -1)
		return false;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	switch (iParam1)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 9:
			return false;
	}

	ped = func_88(iParam0);
	num = func_190(ped);

	if (num >= 0.1f)
		return true;

	return false;
}

float func_757(int iParam0, int iParam1) // Position - 0x15C12 Hash - 0x5CEE20E0 ^0xF900B9C2
{
	if (iParam1 == -1)
		return 0f;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[iParam1];
}

float func_758(int iParam0) // Position - 0x15C56 Hash - 0xD7104B3 ^0xD7104B3
{
	switch (iParam0)
	{
		case 0:
			return 15f;
	
		case 1:
			return 2f;
	
		case 2:
			return 1f;
	
		case 3:
			return 1f;
	
		case 4:
			return 4f;
	
		case 5:
			return 100f;
	
		case 6:
			return 25f;
	
		case 7:
			return 5f;
	
		case 8:
			return 1f;
	
		case 9:
			return 15f;
	
		case 10:
			return 1f;
	
		case 11:
			return 15f;
	
		case 12:
			return 1f;
	
		case 13:
			return 15f;
	
		case 14:
			return 5f;
	
		case 15:
			return 1f;
	
		case 16:
			return 5f;
	
		case 17:
			return 15f;
	
		case 18:
			return 5f;
	
		case 19:
			return 1f;
	
		case 20:
			return 5f;
	
		case 21:
			return 15f;
	
		case 22:
			return 1f;
	}

	return 0f;
}

BOOL func_759() // Position - 0x15DB2 Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3140;
}

void func_760(int iParam0, float fParam1) // Position - 0x15DC3 Hash - 0xC0FF1AF9 ^0xC310329C
{
	Ped ped;
	int num;
	int defaultMaxAttributeRank;
	Ped ped2;
	int bondingLevel;
	int num2;
	int num3;
	int num4;
	int num5;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_207(iParam0);
	num = func_115(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ped, 7);

	if (num >= defaultMaxAttributeRank)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 + fParam1;
	ped2 = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped2))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped2) || PED::IS_PED_INJURED(ped2))
		return;

	func_677(ped2, BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1));
	bondingLevel = func_402(ped2);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = bondingLevel;
	PED::_SET_MOUNT_BONDING_LEVEL(ped2, bondingLevel);
	func_936(bondingLevel);

	if (bondingLevel > num)
	{
		func_985(iParam0, bondingLevel);
	
		if (iParam0 == 6)
			if (bondingLevel == 1)
				if (func_140(42))
					func_283(19, true);
				else
					func_283(20, true);
	
		if (bondingLevel == 2)
			func_283(21, true);
		else if (bondingLevel == 3)
			func_283(22, true);
		else if (bondingLevel == 4)
			func_283(23, true);
	
		if (bondingLevel >= 2)
		{
			num2 = func_961(ped2);
			num3 = func_986();
			func_987(num3, num2 + 1);
			num4 = func_988(ped2);
			num5 = func_989();
			func_987(num5, num4 + 1);
		}
	
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(ped2, bondingLevel);
		func_494(func_791(joaat("horse_bond_increased")), 1);
	
		if (bondingLevel == defaultMaxAttributeRank)
			func_494(func_791(joaat("horses_reached_max_bond")), 1);
	
		func_853(false, -1);
	}

	return;
}

Ped func_761(Ped pedParam0) // Position - 0x15F69 Hash - 0x2F4187EE ^0xDD4F0EB9
{
	if (!PED::IS_PED_INJURED(pedParam0))
		return PED::GET_MOUNT(pedParam0);

	return 0;
}

BOOL func_762(Hash hParam0) // Position - 0x15F85 Hash - 0x47073727 ^0xBB433975
{
	if (PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(hParam0, 3, false) == 0)
		return false;

	return true;
}

void func_763(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x15F9E Hash - 0xC37441F7 ^0xBE0C206A
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_393.f_2), &uParam0, 6);
	return;
}

BOOL func_764(int iParam0, int iParam1) // Position - 0x15FB6 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_765(var uParam0) // Position - 0x15FCF Hash - 0x589762F7 ^0xF9B546D3
{
	int i;

	for (i = 0; i < 57; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam0->[i], &Global_40.f_1095.f_3054.f_3[i], 1);
	}

	return;
}

void func_766(int iParam0, var uParam1, BOOL bParam2) // Position - 0x16004 Hash - 0xA5B1F93B ^0xEC930FD7
{
	Ped ped;
	int i;
	Hash hash;
	Hash hash2;
	int num;
	BOOL num2;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	for (i = 0; i < 57; i = i + 1)
	{
		hash = func_681(i, 1);
		hash2 = hash;
	
		if (!func_284(hash2, 0))
		{
		}
		else
		{
			num = uParam1->[i];
		
			if (num <= 0)
			{
			}
			else
			{
				num2 = func_285(ped, hash2, num, bParam2, -142743235);
			}
		}
	}

	return;
}

void func_767(var uParam0, var uParam1, var uParam2) // Position - 0x160A5 Hash - 0xD1E584EC ^0xD1E584EC
{
	int i;
	int num;

	func_528(uParam2);

	for (i = 0; i < 57; i = i + 1)
	{
		num = 0;
		num = num + uParam0->[i];
		num = num + uParam1->[i];
		num = func_795(num, 0, 10);
		uParam2->[i] = num;
	}

	return;
}

void func_768(var uParam0) // Position - 0x160F2 Hash - 0x2292EDD3 ^0x1382C3D8
{
	int i;

	for (i = 0; i < 57; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_3054.f_3[i], &uParam0->[i], 1);
	}

	return;
}

void func_769(int iParam0, var uParam1) // Position - 0x16127 Hash - 0xBDCD4162 ^0x83A9E6FE
{
	int i;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	for (i = 0; i < 57; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam0 /*436*/].f_298[i], &uParam1->[i], 1);
	}

	return;
}

void func_770(int iParam0, var uParam1) // Position - 0x1617B Hash - 0xA2A1FCF ^0xA2A1FCF
{
	int i;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam1->[i /*5*/], &Global_40.f_1095.f_1[iParam0 /*436*/].f_356[i /*5*/], 5);
	}

	return;
}

void func_771(var uParam0) // Position - 0x161CE Hash - 0x8D81C018 ^0x8F234482
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam0->[i /*5*/], &Global_40.f_1095.f_3054.f_61[i /*5*/], 5);
	}

	return;
}

int func_772(var uParam0) // Position - 0x16202 Hash - 0xFE4D7A54 ^0xFE4D7A54
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (uParam0->[i /*5*/] != 0)
			num = num + 1;
	}

	return num;
}

void func_773(var uParam0) // Position - 0x16231 Hash - 0x7C6CAD2B ^0xDBFA886F
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_3054.f_61[i /*5*/], &uParam0->[i /*5*/], 5);
	}

	return;
}

void func_774(int iParam0) // Position - 0x16265 Hash - 0x459F1E6E ^0x459F1E6E
{
	Ped ped;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_71(iParam0))
		return;

	ped = func_88(iParam0);
	func_990(ped);
	return;
}

void func_775(int iParam0, var uParam1) // Position - 0x162A2 Hash - 0x9978EC98 ^0x2B43E7DB
{
	int i;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam0 /*436*/].f_356[i /*5*/], &uParam1->[i /*5*/], 5);
	}

	return;
}

void func_776(int iParam0) // Position - 0x162F5 Hash - 0x82BF3E5E ^0x82BF3E5E
{
	Global_40.f_1095 = iParam0;
	return;
}

void func_777(int iParam0) // Position - 0x16305 Hash - 0xFA9E3FD2 ^0x638D8D3A
{
	Ped ped;
	int i;
	Hash hash;
	Hash hash2;
	Any any;
	Any any2;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_71(iParam0))
		return;

	ped = func_88(iParam0);
	ENTITY::IS_ENTITY_DEAD(ped);

	for (i = 0; i < 3; i = i + 1)
	{
		hash = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[i /*5*/];
	
		if (func_284(hash, 0))
		{
			hash2 = hash;
			any = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[i /*5*/].f_1;
			any2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[i /*5*/].f_2;
			PED::_0xC412AA1C73111FE0(ped, hash2, any, any2, 0);
		}
	}

	return;
}

struct<6> func_778() // Position - 0x163B8 Hash - 0x19B0BFED ^0xB6A73B02
{
	return Global_1900383.f_393.f_2;
}

void func_779() // Position - 0x163CB Hash - 0x6A88668B ^0x6A88668B
{
	var unk;

	func_763(unk);
	return;
}

BOOL func_780(Ped pedParam0) // Position - 0x163DB Hash - 0x7462ED7A ^0x55B8E428
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingGround")))
		return true;

	return false;
}

BOOL func_781(Ped pedParam0) // Position - 0x1641D Hash - 0x7462ED7A ^0xBB31FE7A
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingTree")))
		return true;

	return false;
}

BOOL func_782(Ped pedParam0) // Position - 0x1645F Hash - 0x7462ED7A ^0x333A4B57
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_RoundedHitchingPost")))
		return true;

	return false;
}

BOOL func_783(Ped pedParam0) // Position - 0x164A1 Hash - 0x7462ED7A ^0x67DCB4C0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_RoundedHitchingPostThatRequiresBeingFaced")))
		return true;

	return false;
}

int func_784() // Position - 0x164E3 Hash - 0x8190E5D8 ^0x6C81FB30
{
	return Global_1900383.f_418.f_2;
}

void func_785(Ped pedParam0, float fParam1) // Position - 0x164F4 Hash - 0x678FB7D5 ^0xEFD0DA91
{
	float num;
	float pedStamina;
	float pedMaxStamina;
	float amount;
	float num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	fParam1 = fParam1 * 0.01f;
	pedStamina = PED::_GET_PED_STAMINA(pedParam0);
	pedMaxStamina = PED::_GET_PED_MAX_STAMINA(pedParam0);
	num = pedMaxStamina * fParam1;
	amount = num;

	if (pedStamina + num > pedMaxStamina)
		amount = pedMaxStamina - pedStamina;

	num2 = pedStamina + amount;
	PED::_CHANGE_PED_STAMINA(pedParam0, amount);
	return;
}

BOOL func_786(int iParam0, int iParam1) // Position - 0x16565 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_2() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

void func_787(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x16598 Hash - 0x13EEDB43 ^0xCA70CAFB
{
	char* str;
	int num;
	int args;
	int num2;
	int num3;

	if (func_2() == false)
		return;

	if (iParam1 == -1)
		return;

	switch (iParam1)
	{
		case 0:
			if (func_180(pedParam0, Global_35))
			{
				if (func_991(pedParam0) == 2)
					str = "HORSE_FOLLOW_ME_FEMALE";
				else
					str = "HORSE_FOLLOW_ME_MALE";
			
				func_708(Global_35, str, joaat("SPEECH_PARAMS_STANDARD"), pedParam0, 1, 0, 0, 1);
			
				if (func_388(pedParam0))
				{
					num = func_401(pedParam0);
					func_178(num, 0);
				}
			}
			break;
	
		case 1:
			if (func_486(pedParam0))
			{
				func_708(Global_35, "HORSE_STAY_HERE", joaat("SPEECH_PARAMS_STANDARD"), pedParam0, 1, 0, 0, 1);
			
				if (func_388(pedParam0))
				{
					num3 = func_401(pedParam0);
					func_178(num3, 1);
				}
			}
			break;
	
		case 2:
			if (func_992(pedParam0, Global_35, bParam2))
			{
				func_708(Global_35, "HORSE_RUN_AWAY", joaat("SPEECH_PARAMS_ALLOW_REPEAT"), pedParam0, 1, 0, 0, 1);
				args.f_6 = -1082130432;
				args.f_7 = -1082130432;
				args.f_8 = -1082130432;
				args.f_9 = -1082130432;
				args.f_10 = -1082130432;
				args.f_11 = -1082130432;
				args.f_12 = -1;
				args.f_13 = -1;
				args = joaat("EVENT_SHOCKING_HORSE_FLEE_FROM_PLAYER_PROMPT");
				args.f_1 = pedParam0;
				args.f_2 = Global_35;
				EVENT::_CREATE_SHOCKING_EVENT(&args);
				Global_1935630.f_42 = pedParam0;
				Global_1935630.f_43 = func_993();
			
				if (func_388(pedParam0))
				{
					num2 = func_401(pedParam0);
					func_178(num2, 2);
				}
			}
			break;
	}

	return;
}

int func_788(Hash hParam0, Ped pedParam1) // Position - 0x16716 Hash - 0xE7CB5684 ^0xEE79ABB1
{
	Ped pedIndexFromEntityIndex;

	if (!func_284(hParam0, 0))
		return 0;

	if (func_727(hParam0))
		ATTRIBUTE::STOP_ITEM_PREVIEW();

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam1))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return 0;

	if (func_727(hParam0) && TASK::IS_PED_IN_WRITHE(pedIndexFromEntityIndex))
	{
		if (func_994(pedIndexFromEntityIndex, hParam0))
			return 1;
	
		return 0;
	}

	if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex))
		return 0;

	if (PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(pedIndexFromEntityIndex))
		return 0;

	if (func_120() == 1)
	{
		func_995(pedIndexFromEntityIndex);
		func_996(hParam0);
		func_997(1);
	}
	else
	{
		return 0;
	}

	return 1;
}

Hash func_789() // Position - 0x167DB Hash - 0xA963BB13 ^0x7B3629DC
{
	int num;
	int i;
	int num2;
	Hash hash;

	num = 11;
	num[0] = joaat("consumable_haycube");
	num[1] = joaat("consumable_oat_cakes");
	num[2] = joaat("consumable_apple");
	num[3] = joaat("consumable_beets");
	num[4] = joaat("consumable_pear");
	num[5] = joaat("consumable_peach");
	num[6] = joaat("consumable_celery");
	num[7] = joaat("consumable_carrot");
	num[8] = joaat("consumable_corn");
	num[9] = joaat("consumable_peppermint");
	num[10] = joaat("consumable_sugarcube");

	for (i = 0; i < num; i = i + 1)
	{
		if (func_735(num[i], false, false) > 0)
			return num[i];
	}

	num2 = 26;
	num2[0] = joaat("consumable_herb_alaskan_ginseng");
	num2[1] = joaat("consumable_herb_american_ginseng");
	num2[2] = joaat("consumable_herb_bay_bolete");
	num2[3] = joaat("consumable_herb_black_berry");
	num2[4] = joaat("consumable_herb_black_currant");
	num2[5] = joaat("consumable_herb_burdock_root");
	num2[6] = joaat("consumable_herb_chanterelles");
	num2[7] = joaat("consumable_herb_creeping_thyme");
	num2[8] = joaat("consumable_herb_desert_sage");
	num2[9] = joaat("consumable_herb_hummingbird_sage");
	num2[10] = joaat("consumable_herb_golden_currant");
	num2[11] = joaat("consumable_herb_oleander_sage");
	num2[12] = joaat("consumable_herb_parasol_mushroom");
	num2[13] = joaat("consumable_herb_rams_head");
	num2[14] = joaat("consumable_herb_red_raspberry");
	num2[15] = joaat("consumable_herb_red_sage");
	num2[16] = joaat("consumable_herb_wild_feverfew");
	num2[17] = joaat("consumable_herb_wild_mint");
	num2[18] = joaat("consumable_herb_ginseng");
	num2[19] = joaat("consumable_herb_sage");
	num2[20] = joaat("consumable_herb_wintergreen_berry");
	num2[21] = joaat("consumable_herb_currant");
	num2[22] = joaat("consumable_herb_oregano");
	num2[23] = joaat("consumable_herb_wild_carrots");
	num2[24] = joaat("consumable_herb_common_bulrush");
	num2[25] = joaat("consumable_herb_english_mace");
	i = 0;

	for (i = 0; i < num2; i = i + 1)
	{
		hash = num2[i];
	
		if (func_724(hash) && func_735(hash, false, false) > 0)
			return hash;
	}

	return 0;
}

void func_790(Ped pedParam0, Hash hParam1) // Position - 0x169DE Hash - 0x61EDE2F8 ^0xE776EE8E
{
	BOOL flag;
	int num;
	int outData;
	var outData2;
	var unk28;
	float num2;
	int i;
	int num3;
	float value;
	int num4;
	int value2;
	int num5;
	float value3;
	float value4;

	if (!func_420(hParam1))
		return;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam1, 0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	flag = false;

	if (func_388(pedParam0))
	{
		num = func_401(pedParam0);
		flag = true;
	}

	outData.f_1 = 20;
	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam1, &outData);

	for (i = 0; i < outData; i = i + 1)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2);
	
		switch (outData2.f_1)
		{
			case -1946606248:
				func_785(pedParam0, outData2.f_5);
				break;
		
			case joaat("EFFECT_HORSE_HEALTH_CORE"):
				if (func_641(0, &unk28))
				{
					value3 = outData2.f_5;
				
					if (flag)
						func_1000(num, 0, BUILTIN::FLOOR(value3));
					else
						func_1001(pedParam0, 0, BUILTIN::FLOOR(value3));
				}
				break;
		
			case -778289619:
				if (func_641(0, &unk28))
				{
					num2 = func_1003(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
					func_1005(pedParam0, 0, num2);
				}
				break;
		
			case 855745648:
				if (func_641(1, &unk28))
				{
					value4 = outData2.f_5;
				
					if (flag)
						func_1000(num, 1, BUILTIN::FLOOR(value4));
					else
						func_1001(pedParam0, 1, BUILTIN::FLOOR(value4));
				}
				break;
		
			case 978049229:
				func_999(pedParam0, outData2.f_5);
				break;
		
			case 1136630075:
				if (func_1002(0, &unk28))
				{
					num2 = func_1003(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				
					if (flag)
						func_1000(num, 0, BUILTIN::FLOOR(100f));
					else
						func_1001(pedParam0, 0, BUILTIN::FLOOR(100f));
				
					func_1004(pedParam0, 0, num2);
				}
				break;
		
			case 1194731729:
				num3 = outData2.f_2;
				value = -outData2.f_5;
			
				if (flag && num3 > 0)
				{
					num4 = func_961(pedParam0);
					value2 = func_998(num4);
					func_895(num, 1, BUILTIN::TO_FLOAT(value2));
				}
			
				if (flag)
					num5 = func_437(num, 1);
				else
					num5 = func_357(pedParam0, 1);
			
				if (num5 < 50)
					if (flag)
						func_438(num, 2, num3);
					else
						func_439(pedParam0, 2, num3);
			
				if (flag)
					func_438(num, 1, BUILTIN::FLOOR(value));
				else
					func_439(pedParam0, 1, BUILTIN::FLOOR(value));
				break;
		
			case 1365603835:
				if (func_1002(1, &unk28))
				{
					num2 = func_1003(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				
					if (flag)
						func_1000(num, 1, BUILTIN::FLOOR(100f));
					else
						func_1001(pedParam0, 1, BUILTIN::FLOOR(100f));
				
					func_1004(pedParam0, 1, num2);
				}
				break;
		
			case 1497139093:
				if (func_641(1, &unk28))
				{
					num2 = func_1003(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
					func_1005(pedParam0, 1, num2);
				}
				break;
		}
	}

	func_1006(hParam1);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return;
}

struct<2> func_791(int iParam0) // Position - 0x16CC8 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

BOOL func_792(Hash hParam0) // Position - 0x16CDA Hash - 0x33F7D399 ^0xEB534519
{
	if (!func_284(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

Hash func_793(Hash hParam0) // Position - 0x16CF7 Hash - 0x2D6C03B6 ^0x2D6C03B6
{
	if (!func_511(hParam0))
		return 0;

	return hParam0;
}

int func_794(Hash hParam0, int iParam1) // Position - 0x16D0F Hash - 0x5E5FF029 ^0x5E5FF029
{
	switch (hParam0)
	{
		case joaat("provision_beaver_fur"):
			return 0;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 7;
	
		case joaat("provision_deer_hide"):
			return 20;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 29;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 1;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 17;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 43;
	
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return 19;
	
		case joaat("provision_javelina_skin"):
			return 30;
	
		case joaat("provision_sheep_wool"):
			return 49;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 40;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 22;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 42;
	
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return 11;
	
		case joaat("provision_buck_fur"):
			return 8;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 18;
	
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return 48;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 10;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 21;
	
		case joaat("provision_ram_hide"):
			return 45;
	
		case joaat("provision_panther_fur"):
			return 34;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 39;
	
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return 3;
	
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return 44;
	
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 31;
	
		case joaat("provision_pig_skin"):
			return 38;
	
		case 0:
			return 56;
	
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 53;
	
		case joaat("provision_fox_fur"):
			return 23;
	
		case joaat("provision_cougar_fur"):
			return 12;
	
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 25;
	
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return 55;
	
		case joaat("provision_pronghorn_fur"):
			return 41;
	
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 54;
	
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return 37;
	
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 28;
	
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 2;
	
		case joaat("provision_wolf_fur"):
			return 52;
	
		case joaat("provision_coyote_fur"):
			return 16;
	
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 6;
	
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 51;
	
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return 15;
	
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 35;
	
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 9;
	
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return 26;
	
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 24;
	
		case joaat("provision_goat_hair"):
			return 27;
	
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 50;
	
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 47;
	
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 46;
	
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
	
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 32;
	
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 36;
	
		case joaat("provision_loanshark_skins"):
			return 33;
	
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return 4;
	
		case joaat("provision_boar_skin"):
			return 5;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_795(int iParam0, int iParam1, int iParam2) // Position - 0x16F9B Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_796(Hash hParam0) // Position - 0x16FC0 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("provision_fish_muskie_legendary"):
		case joaat("provision_fish_lake_sturgeon_legendary"):
		case joaat("provision_fish_steelhead_trout_legendary"):
		case joaat("provision_fish_longnose_gar_legendary"):
		case joaat("provision_fish_largemouth_bass_legendary"):
		case joaat("provision_fish_sockeye_salmon_legendary"):
		case joaat("provision_fish_smallmouth_bass_legendary"):
			return true;
	}

	return false;
}

BOOL func_797(int iParam0) // Position - 0x17002 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_2() != -1)
		return false;

	return func_135(Global_1835011[iParam0 /*74*/].f_1, true);
}

Hash func_798(Hash hParam0) // Position - 0x17025 Hash - 0xB8EC44B7 ^0x75D9F70F
{
	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			return joaat("legendary_fish_02");
	
		case joaat("provision_fish_muskie_legendary"):
			return joaat("legendary_fish_06");
	
		case joaat("provision_fish_bluegill_legendary"):
			return joaat("legendary_fish_13");
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			return joaat("legendary_fish_03");
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			return joaat("legendary_fish_08");
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			return joaat("legendary_fish_12");
	
		case joaat("provision_fish_longnose_gar_legendary"):
			return joaat("legendary_fish_05");
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			return joaat("legendary_fish_04");
	
		case joaat("provision_fish_rock_bass_legendary"):
			return joaat("legendary_fish_09");
	
		case joaat("provision_fish_perch_legendary"):
			return joaat("legendary_fish_07");
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			return joaat("legendary_fish_01");
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			return joaat("legendary_fish_11");
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			return joaat("legendary_fish_10");
	
		default:
		
	}

	return 0;
}

BOOL func_799(Hash hParam0) // Position - 0x170EC Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

Hash func_800(Hash hParam0) // Position - 0x170FC Hash - 0xB8EC44B7 ^0xB5983C5D
{
	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			return joaat("legendary_fishing_spot_02");
	
		case joaat("provision_fish_muskie_legendary"):
			return joaat("legendary_fishing_spot_06");
	
		case joaat("provision_fish_bluegill_legendary"):
			return joaat("legendary_fishing_spot_13");
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			return joaat("legendary_fishing_spot_03");
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			return joaat("legendary_fishing_spot_08");
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			return joaat("legendary_fishing_spot_12");
	
		case joaat("provision_fish_longnose_gar_legendary"):
			return joaat("legendary_fishing_spot_05");
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			return joaat("legendary_fishing_spot_04");
	
		case joaat("provision_fish_rock_bass_legendary"):
			return joaat("legendary_fishing_spot_09");
	
		case joaat("provision_fish_perch_legendary"):
			return joaat("legendary_fishing_spot_07");
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			return joaat("legendary_fishing_spot_01");
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			return joaat("legendary_fishing_spot_11");
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			return joaat("legendary_fishing_spot_10");
	
		default:
		
	}

	return 0;
}

BOOL func_801(Hash hParam0) // Position - 0x171C3 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

Hash func_802(Hash hParam0) // Position - 0x171D3 Hash - 0xB8EC44B7 ^0x62913F2D
{
	switch (hParam0)
	{
		case joaat("legendary_fishing_spot_09"):
			return 505929754;
	
		case joaat("legendary_fishing_spot_08"):
			return 1937997726;
	
		case joaat("legendary_fishing_spot_11"):
			return 235447783;
	
		case joaat("legendary_fishing_spot_07"):
			return -1560294747;
	
		case joaat("legendary_fishing_spot_12"):
			return 1793239293;
	
		case joaat("legendary_fishing_spot_02"):
			return -1553566002;
	
		case joaat("legendary_fishing_spot_01"):
			return 1791726215;
	
		case joaat("legendary_fishing_spot_10"):
			return -312076753;
	
		case joaat("legendary_fishing_spot_13"):
			return -1142443514;
	
		case joaat("legendary_fishing_spot_06"):
			return -414895106;
	
		case joaat("legendary_fishing_spot_05"):
			return -1424874851;
	
		case joaat("legendary_fishing_spot_04"):
			return 1214218277;
	
		case joaat("legendary_fishing_spot_03"):
			return -528070704;
	
		default:
		
	}

	return 0;
}

Hash func_803(Hash hParam0) // Position - 0x1729A Hash - 0xB8EC44B7 ^0x43D3133F
{
	switch (hParam0)
	{
		case joaat("legendary_fishing_spot_09"):
			return 756063611;
	
		case joaat("legendary_fishing_spot_08"):
			return 1041505554;
	
		case joaat("legendary_fishing_spot_11"):
			return -1052716565;
	
		case joaat("legendary_fishing_spot_07"):
			return -116204733;
	
		case joaat("legendary_fishing_spot_12"):
			return 1265504095;
	
		case joaat("legendary_fishing_spot_02"):
			return 1671816740;
	
		case joaat("legendary_fishing_spot_01"):
			return -695777111;
	
		case joaat("legendary_fishing_spot_10"):
			return 1035814529;
	
		case joaat("legendary_fishing_spot_13"):
			return 1343260208;
	
		case joaat("legendary_fishing_spot_06"):
			return -1508614120;
	
		case joaat("legendary_fishing_spot_05"):
			return -1385591042;
	
		case joaat("legendary_fishing_spot_04"):
			return 1178765838;
	
		case joaat("legendary_fishing_spot_03"):
			return 1467033526;
	
		default:
		
	}

	return 0;
}

void func_804(int iParam0, float fParam1) // Position - 0x17361 Hash - 0xAD893F62 ^0xAA11739C
{
	Ped ped;
	int num;
	int attributeRank;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fParam1;
	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	num = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, 7, num);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = attributeRank;
	PED::_SET_MOUNT_BONDING_LEVEL(ped, attributeRank);
	func_936(attributeRank);
	return;
}

BOOL func_805(int iParam0, Hash hParam1) // Position - 0x1740E Hash - 0x7F3C0687 ^0x18581D3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_719(iParam0, &unk))
		return false;

	unk30 = { func_331(hParam1, unk, joaat("SLOTID_HORSE_MANE"), false) };
	return func_335(unk30, true);
}

BOOL func_806(int iParam0, Hash hParam1) // Position - 0x17452 Hash - 0x7F3C0687 ^0x15BF14B9
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_719(iParam0, &unk))
		return false;

	unk30 = { func_331(hParam1, unk, joaat("SLOTID_HORSE_TAIL"), false) };
	return func_335(unk30, true);
}

void func_807(BOOL bParam0) // Position - 0x17496 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}

	return;
}

void func_808(int iParam0) // Position - 0x174D4 Hash - 0x2EDDC601 ^0xD5F96979
{
	Hash itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
	
		if (itemContextByIndex == Global_1954819.f_5.f_2[iParam0 /*36*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
	return;
}

void func_809(BOOL bParam0) // Position - 0x17542 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_810(BOOL bParam0) // Position - 0x17565 Hash - 0x15EA8A2D ^0x6EE74130
{
	int promptType;
	Player player;

	promptType = 50;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

void func_811(BOOL bParam0) // Position - 0x175A7 Hash - 0xBAD014C9 ^0x3FDE3E28
{
	int promptType;
	Player player;

	promptType = 49;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

int func_812(char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x175E9 Hash - 0xB88D7AA5 ^0x36259347
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam4;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam8;
	num2.f_7 = 1;
	num2 = iParam7;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

BOOL func_813(int iParam0) // Position - 0x1764A Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_1007(iParam0, 1) /*3*/] != Global_1946054.f_57[func_1007(iParam0, 1) /*11*/];
}

Hash func_814(int iParam0) // Position - 0x17682 Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_1007(iParam0, 1) /*3*/];
}

BOOL func_815(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x176AA Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_284(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_955(hParam0, false, true) };
	unk6 = { func_331(hParam0, unk, unk.f_4, false) };
	return func_334(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

int func_816(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x176F9 Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_955(hParam1, true, false) };
		iParam3 = func_1008(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_1009(hParam1, hParam2, func_1007(iParam3, 1), bParam4, bParam9))
		return 0;

	func_1010(true, func_2() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_1012(32768) && hParam1 != Global_1946054.f_57[func_1007(iParam3, 1) /*11*/])
			{
				func_1013();
				func_1011(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_1007(iParam3, 1) /*11*/])
				func_1011(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_1011(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_1014(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_1011(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_1015(0);
			func_1016(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_1011(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_817() // Position - 0x17868 Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1017();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_1018(joaat("weapon_revolver_cattleman_john"));
		func_815(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_1018(joaat("weapon_melee_knife_john"));
		func_815(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

int func_818(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x178E0 Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_666(bParam2), panParam0, hParam1);
}

BOOL func_819(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x178F6 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_1019(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_670(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_668(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_666(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_820(Hash hParam0) // Position - 0x17986 Hash - 0x1B551CF7 ^0xB80375AC
{
	return func_736(hParam0) == joaat("HORSE");
}

char* func_821() // Position - 0x1799A Hash - 0x306ACA3A ^0xA18056B9
{
	return "UNNAMED_HORSE";
}

BOOL func_822() // Position - 0x179A6 Hash - 0x57592B8C ^0xDE90F972
{
	Blip blip;

	blip = func_823();

	if (MAP::DOES_BLIP_EXIST(blip))
		return true;

	return false;
}

Blip func_823() // Position - 0x179C2 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1900383.f_393.f_1;
}

void func_824(int iParam0) // Position - 0x179D3 Hash - 0xC421D95B ^0x49BB5C15
{
	Global_1900383.f_393.f_1 = iParam0;
	return;
}

int func_825() // Position - 0x179E6 Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_1020();

	if (num <= -320)
		return -320;

	if (num <= -280)
		return -280;

	if (num <= -240)
		return -240;

	if (num <= -200)
		return -200;

	if (num <= -160)
		return -160;

	if (num <= -120)
		return -120;

	if (num <= -80)
		return -80;

	if (num <= -40)
		return -40;

	if (num >= 320)
		return 320;

	if (num >= 280)
		return 280;

	if (num >= 240)
		return 240;

	if (num >= 200)
		return 200;

	if (num >= 160)
		return 160;

	if (num >= 120)
		return 120;

	if (num >= 80)
		return 80;

	if (num >= 40)
		return 40;

	return 0;
}

int func_826(int iParam0) // Position - 0x17AF9 Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_2() != -1)
		return iParam0;

	if (Global_1347477.f_2 + 120000 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}

	num = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3 = Global_1347477.f_3 + 1;

	if (Global_1347477.f_3 >= 10)
		num = 2f;
	else if (Global_1347477.f_3 >= 3)
		num = 1.5f;

	value = BUILTIN::TO_FLOAT(iParam0) * num;
	value = MISC::ABSF(value) < 1f ? value < 0f ? -1f : 1f : value;
	return BUILTIN::CEIL(value);
}

int func_827(int iParam0) // Position - 0x17B9E Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case -320:
		case 320:
			return 8;
	
		case -280:
		case 280:
			return 7;
	
		case -240:
		case 240:
			return 6;
	
		case -200:
		case 200:
			return 5;
	
		case -160:
		case 160:
			return 4;
	
		case -120:
		case 120:
			return 3;
	
		case -80:
		case 80:
			return 2;
	
		case -40:
		case 40:
			return 1;
	
		case 0:
			return 0;
	}

	return 0;
}

Hash func_828() // Position - 0x17C55 Hash - 0xA46C8CCA ^0x71ABACD2
{
	if (Global_40.f_11095.f_35 <= -320)
		return 1;
	else if (Global_40.f_11095.f_35 <= -280)
		return 2;
	else if (Global_40.f_11095.f_35 <= -240)
		return 3;
	else if (Global_40.f_11095.f_35 <= -200)
		return 4;
	else if (Global_40.f_11095.f_35 <= -160)
		return 5;
	else if (Global_40.f_11095.f_35 <= -120)
		return 6;
	else if (Global_40.f_11095.f_35 <= -80)
		return 7;
	else if (Global_40.f_11095.f_35 < 0)
		return 8;
	else if (Global_40.f_11095.f_35 <= 40)
		return 9;
	else if (Global_40.f_11095.f_35 >= 320)
		return 16;
	else if (Global_40.f_11095.f_35 >= 280)
		return 15;
	else if (Global_40.f_11095.f_35 >= 240)
		return 14;
	else if (Global_40.f_11095.f_35 >= 200)
		return 13;
	else if (Global_40.f_11095.f_35 >= 160)
		return 12;
	else if (Global_40.f_11095.f_35 >= 120)
		return 11;
	else if (Global_40.f_11095.f_35 >= 80)
		return 10;

	return 9;
}

void func_829(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x17DAD Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_1021(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_1022(hParam0);
	return;
}

void func_830(int iParam0) // Position - 0x17DD9 Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_1023(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_831(BOOL bParam0) // Position - 0x17E3D Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_1024(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_1025(i, &hash, &num))
			{
				if (!func_284(hash, 0))
				{
				}
				else
				{
					unlockHash = func_1026(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_736(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_825() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_825() >= 160;
					else
						flag = num == func_1027();
				
					if (flag)
					{
						UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, true);
						flag = false;
					}
				}
			}
		}
	}

	return;
}

struct<2> func_832(int iParam0) // Position - 0x17EFE Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x17F0E Hash - 0xA17D549C ^0xAC936FC5
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
	
		case joaat("honor_event_antagonize"):
			return "HONOR_EVENT_ANTAGONIZE";
	
		case joaat("honor_event_cruel_death"):
			return "HONOR_EVENT_CRUEL_DEATH";
	
		case joaat("honor_event_cheat"):
			return "HONOR_EVENT_CHEAT";
	
		case joaat("honor_event_steal_wagon"):
			return "HONOR_EVENT_STEAL_WAGON";
	
		case joaat("honor_event_trampled_innocent"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
	
		case joaat("honor_event_kill_vermin"):
			return "HONOR_EVENT_KILL_VERMIN";
	
		case joaat("honor_event_kill_farm_animal"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
	
		case joaat("honor_event_long_absence"):
			return "HONOR_EVENT_LONG_ABSENCE";
	
		case joaat("honor_event_wanted_in_camp"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
	
		case joaat("honor_event_animal_bleedout"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
	
		case joaat("honor_event_steal_mule"):
			return "HONOR_EVENT_STEAL_MULE";
	
		case joaat("honor_event_theft"):
			return "HONOR_EVENT_THEFT";
	
		case joaat("honor_event_kill_horse"):
			return "HONOR_EVENT_KILL_HORSE";
	
		case joaat("honor_event_justice_served"):
			return "HONOR_EVENT_JUSTICE_SERVED";
	
		case joaat("honor_event_steal_donkey"):
			return "HONOR_EVENT_STEAL_DONKEY";
	
		case joaat("honor_event_steal_horse"):
			return "HONOR_EVENT_STEAL_HORSE";
	
		case joaat("honor_event_ambient_kill"):
			return "HONOR_EVENT_AMBIENT_KILL";
	
		case joaat("honor_event_item_request"):
			return "HONOR_EVENT_ITEM_REQUEST";
	
		case joaat("honor_event_ambient_ko"):
			return "HONOR_EVENT_AMBIENT_KO";
	
		case joaat("honor_event_intervened"):
			return "HONOR_EVENT_INTERVENED";
	
		case joaat("honor_event_scare"):
			return "HONOR_EVENT_SCARE";
	
		case joaat("honor_event_donated_game"):
			return "HONOR_EVENT_DONATED_GAME";
	
		case joaat("honor_event_loot_innocent"):
			return "HONOR_EVENT_LOOT_INNOCENT";
	
		default:
		
	}

	return "";
}

int func_834(int iParam0, int iParam1) // Position - 0x1805B Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_1028(iParam0))
		return 0;

	if (!func_94())
		return 0;

	if (!func_1029(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_835(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x180B6 Hash - 0xEAB06984 ^0xE37CC970
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	unk = 10;

	if (bParam2 && func_2() == false && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return false;

	if (!func_1030(hParam0, hParam1, &unk, &num) || num < 1)
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

int func_836(int iParam0) // Position - 0x18135 Hash - 0x1497AC6A ^0x1497AC6A
{
	if (!(iParam0 > -1 && iParam0 < 153))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
	
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
	
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
	
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
	
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
	
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
	
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
	
		case 9:
		case 37:
		case 69:
			return 8;
	
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
	
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
	
		case 12:
		case 54:
			return 21;
	
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
	
		case 17:
		case 47:
			return 7;
	
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
	
		case 22:
			return 17;
	
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
	
		case 48:
			return 12;
	
		case 49:
			return 13;
	
		case 50:
			return 14;
	
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
	
		case 62:
		case 79:
			return 20;
	
		case 101:
			return 11;
	
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
	
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
	
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
	
		case 126:
			return 32;
	
		case 127:
			return 34;
	
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
	
		case 136:
			return 5;
	
		case 149:
			return 23;
	
		case 150:
			return 24;
	
		case 151:
			return 25;
	
		case 152:
			return 24;
	
		default:
		
	}

	return -1;
}

BOOL func_837(int iParam0) // Position - 0x18589 Hash - 0xE4B93749 ^0xE4B93749
{
	return !func_1031(iParam0, 1);
}

int func_838(int iParam0) // Position - 0x18599 Hash - 0xA776614E ^0xA776614E
{
	if (!func_588(iParam0))
		return -1;

	if (iParam0 == 34 && func_723() == MICRO)
		return 128;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
	
		case 4:
			return 13;
	
		case 5:
			return 14;
	
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
		case 106:
		case 107:
		case 108:
			return 38;
	
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
	
		case 22:
		case 118:
			return 3;
	
		case 23:
		case 24:
			return 23;
	
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
	
		case 34:
			return 90;
	
		case 35:
			return 101;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
	
		case 56:
			return 71;
	
		case 57:
			return 98;
	
		case 58:
			return 9;
	
		case 59:
			return 79;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
	
		case 67:
			return 113;
	
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
	
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
	
		case 87:
		case 88:
		case 89:
			return 28;
	
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
	
		case 95:
		case 96:
		case 97:
			return 120;
	
		case 98:
			return 123;
	
		case 99:
		case 100:
		case 123:
			return 117;
	
		case 119:
			return 65;
	
		case 122:
			return 82;
	
		case 124:
			return 110;
	
		case 125:
			return 127;
	
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
	
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
	
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
	
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
	
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
	
		default:
		
	}

	return -1;
}

BOOL func_839(int iParam0) // Position - 0x189DF Hash - 0x14DDF3C9 ^0xAD14D790
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] & 32 != 0;

	return Global_1058888.f_40545[iParam0 /*11*/] & 32 != 0;
}

BOOL func_840(int iParam0) // Position - 0x18A28 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_1032(iParam0))
		return false;

	return func_1033(iParam0, 33554432);
}

float func_841(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x18A49 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_842() // Position - 0x18A71 Hash - 0x2100AD75 ^0xD71F35DE
{
	Global_1900383.f_444.f_13 = 0;
	return;
}

int func_843() // Position - 0x18A83 Hash - 0x8190E5D8 ^0x8470E5CA
{
	return Global_1900383.f_444.f_13;
}

void func_844(int iParam0) // Position - 0x18A94 Hash - 0xC421D95B ^0x5D194E7
{
	Global_1900383.f_444.f_13 = iParam0;
	return;
}

BOOL func_845() // Position - 0x18AA7 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_846(int iParam0) // Position - 0x18AFA Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_269(iParam0))
		return -1;

	return func_1034(func_611(iParam0));
}

BOOL func_847(int iParam0) // Position - 0x18B1A Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_848(int iParam0, int iParam1) // Position - 0x18B30 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_849() // Position - 0x18B3F Hash - 0xC2ABD0AE ^0xC2ABD0AE
{
	return Global_1905944.f_5693 != -1;
}

BOOL func_850(int iParam0) // Position - 0x18B50 Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_2() != -1)
		return false;

	return func_135(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_851(Hash hParam0) // Position - 0x18B73 Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_1035(hParam0))
		func_1037(func_1036(hParam0));

	return;
}

int func_852() // Position - 0x18B8F Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_1035(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

void func_853(BOOL bParam0, int iParam1) // Position - 0x18BC7 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_1038(&Global_0, 8);

	if (!func_94() || func_2() != -1)
		return;

	func_1038(&Global_0, 1);
	return;
}

int func_854(Hash hParam0, int iParam1, int iParam2) // Position - 0x18C0D Hash - 0xED49A216 ^0x75828FFF
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam2)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_855(hash);
	num3 = func_855(hash2);
	num4 = func_855(hash3);

	if (iParam2 != 2)
		num5 = func_855(hash4);

	num6 = func_856(hash);
	num7 = func_856(hash2);
	num8 = func_856(hash3);

	if (iParam2 != 2)
		num9 = func_856(hash4);

	if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam2 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

int func_855(Hash hParam0) // Position - 0x18D86 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_733(hParam0, 1, false))
		num = func_735(hParam0, false, false);

	return num;
}

int func_856(Hash hParam0) // Position - 0x18DA5 Hash - 0xEED5739D ^0xEED5739D
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 3;
	
		case joaat("provision_ro_flower_cigar"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 10;
	
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
	
		case joaat("provision_ro_flower_night_scented"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 15;
	
		case joaat("provision_ro_flower_sparrows"):
			return 10;
	
		case joaat("provision_ro_flower_queens"):
			return 5;
	
		case joaat("provision_ro_flower_spider"):
			return 5;
	
		case joaat("provision_ro_flower_dragons"):
			return 5;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 7;
	
		case joaat("provision_ro_flower_moccasin"):
			return 10;
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
	
		case joaat("provision_ro_flower_ghost"):
			return 5;
	
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
	
		default:
		
	}

	return 0;
}

void func_857(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x18E7E Hash - 0x2D6CF941 ^0x530EED4C
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	char* str5;
	char* str6;
	var unk;
	int num;
	int num2;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case 38:
			str = "MISSION_RCCIG";
			str2 = "SP_MISSIONS_13";
		
			if (func_94() && func_1039(38) || func_850(38))
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				str6 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				hash = joaat("col_cc_intro");
			}
			else
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				str6 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				hash = joaat("col_cc_intro_pre");
			}
		
			str5 = "COL_CC_TITLE";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = 12;
			hash2 = joaat("CIGARETTE_CARDS");
			break;
	
		case 39:
			if (func_94() && func_1039(39) || func_850(39))
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_02";
				str6 = "COL_DB_INTRO";
				num = 3;
				hashKey = joaat("blip_rc_deborah");
				hash = joaat("col_db_intro");
			}
			else
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_01";
				str6 = "COL_DB_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				hash = joaat("col_db_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_DB_TITLE";
			unk = { 122.7758f, -185.4978f, 116.4383f };
			num2 = 30;
			hash2 = joaat("dino_bones");
			break;
	
		case 41:
			if (func_94() && func_1039(41) || func_850(41))
				str = "MISSION_RCFSH2";
			else
				str = "MISSION_RCFSH1";
		
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_RARE_FISH_01";
			str5 = "COL_LF_TITLE";
			str6 = "COL_LF_INTRO";
			unk = { 337.3075f, -684.5404f, 41.8362f };
			num = 13;
			hash2 = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
			if (hParam3 == joaat("exotic_stage_01"))
			{
				str = "MISSION_RCEXO1";
				str4 = "RCEXO1_DESC";
				num2 = 30;
			}
			else if (hParam3 == joaat("exotic_stage_02"))
			{
				str = "MISSION_RCEXO2";
				str4 = "RCEXO2_DESC";
				num2 = 37;
			}
			else if (hParam3 == joaat("exotic_stage_03"))
			{
				str = "MISSION_RCEXO3";
				str4 = "RCEXO3_DESC";
				num2 = 40;
			}
			else if (hParam3 == joaat("exotic_stage_04"))
			{
				str = "MISSION_RCEXO4";
				str4 = "RCEXO4_DESC";
				num2 = 50;
			}
			else if (hParam3 == joaat("exotic_stage_05"))
			{
				str = "MISSION_RCEXO5";
				str4 = "RCEXO5_DESC";
				num2 = 25;
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_EX_TITLE";
			str6 = "COL_EX_INTRO";
			unk = { 2585.6682f, -1009.6161f, 44.979717f };
			num = func_1040(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_94() && func_1039(49) || func_850(49))
			{
				str = "MISSION_RCRKF2";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				str6 = "COL_RC_INTRO";
				num = 3;
				hashKey = joaat("blip_scm_frances");
				hash = joaat("col_rc_intro");
			}
			else
			{
				str = "MISSION_RCRKF1";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				str6 = "COL_RC_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				hash = joaat("col_rc_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_RC_TITLE";
			unk = { -2178.646f, -245.6886f, 191.1569f };
			num2 = 10;
			hash2 = joaat("rock_carvings");
			break;
	
		case 51:
			str = "MISSION_RCTAX1";
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			str5 = "COL_TX_TITLE";
			str6 = "COL_TX_INTRO";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = func_1040(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_1041(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_1042(iParam0, hash, hash2);
	func_1043(iParam0, hash, unk, str5, str4);
	func_1044(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_1045(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_1046(iParam0, hash, hash2, iParam6);
	func_1047(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

Hash func_858(Hash hParam0, int iParam1) // Position - 0x192BB Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	Hash num;

	if (!func_864(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_859(Hash hParam0, Hash hParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x192EA Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_858(hParam1, 5) || hParam0 == func_858(hParam1, 6) || hParam0 == func_858(hParam1, 7) || hParam0 == func_858(hParam1, 8) || hParam0 == func_858(hParam1, 9))
	{
		func_1048(hParam1, hParam0, &uParam2, false, iParam3, bParam4);
		func_857(51, 0, 0, hParam1, uParam2, false, -1, false);
		func_1049(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_860(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1936C Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_858(hParam1, 5) || hParam0 == func_858(hParam1, 6) || hParam0 == func_858(hParam1, 7) || hParam0 == func_858(hParam1, 8) || hParam0 == func_858(hParam1, 9))
	{
		if (func_1048(hParam1, hParam0, &num, false, 0, false))
		{
			func_857(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_1049(51, 0, 0, num, func_1040(hParam1, 20), 1, 0);
		}
		else
		{
			func_857(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_1049(51, 0, 0, num, func_1040(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_861() // Position - 0x1942D Hash - 0xC131FBEB ^0x955222E7
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

BOOL func_862() // Position - 0x1944D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_863() // Position - 0x1945C Hash - 0x745E14DA ^0x745E14DA
{
	BOOL unk;

	unk = Global_1905944.f_5695;
	Global_1905944.f_5695 = 0;
	return unk;
}

BOOL func_864(int iParam0, var uParam1) // Position - 0x19477 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_1050(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_865(int iParam0) // Position - 0x194A4 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_1051(iParam0);
}

BOOL func_866(int iParam0) // Position - 0x194B2 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_2() != -1)
		if (func_764(iParam0, 4))
			return false;
	else if (func_764(iParam0, 2))
		return false;

	return true;
}

BOOL func_867(int iParam0) // Position - 0x194E2 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_764(iParam0, 65536) && !func_764(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_764(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_764(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_868(int iParam0, Hash hParam1, int iParam2) // Position - 0x1958E Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_284(hParam1, 0))
		return false;

	return func_869(iParam0, hParam1) >= iParam2;
}

int func_869(int iParam0, Hash hParam1) // Position - 0x195B0 Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_284(hParam1, 0))
		return 0;

	guid = { func_1052(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_870(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x195EE Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_284(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_871(iParam0) };
	unk6 = { func_872(iParam0, hParam1, unk, unk.f_4) };
	return func_1053(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

struct<5> func_871(int iParam0) // Position - 0x1963D Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_872(iParam0, joaat("character"), func_665(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_872(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x1966A Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_284(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

BOOL func_873(Hash hParam0, int iParam1) // Position - 0x19697 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_284(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

void func_874(Hash hParam0) // Position - 0x196B6 Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_850(41))
		func_283(363, false);
	else
		func_283(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_1054(joaat("legendary_fish_02"));
			func_1055(joaat("legendary_fishing_spot_02"));
			func_1056(joaat("legendary_fishing_spot_02"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_1054(joaat("legendary_fish_06"));
			func_1055(joaat("legendary_fishing_spot_06"));
			func_1056(joaat("legendary_fishing_spot_06"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_1054(joaat("legendary_fish_13"));
			func_1055(joaat("legendary_fishing_spot_13"));
			func_1056(joaat("legendary_fishing_spot_13"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_1054(joaat("legendary_fish_03"));
			func_1055(joaat("legendary_fishing_spot_03"));
			func_1056(joaat("legendary_fishing_spot_03"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_1054(joaat("legendary_fish_08"));
			func_1055(joaat("legendary_fishing_spot_08"));
			func_1056(joaat("legendary_fishing_spot_08"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_1054(joaat("legendary_fish_12"));
			func_1055(joaat("legendary_fishing_spot_12"));
			func_1056(joaat("legendary_fishing_spot_12"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_1054(joaat("legendary_fish_05"));
			func_1055(joaat("legendary_fishing_spot_05"));
			func_1056(joaat("legendary_fishing_spot_05"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_1054(joaat("legendary_fish_04"));
			func_1055(joaat("legendary_fishing_spot_04"));
			func_1056(joaat("legendary_fishing_spot_04"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_1054(joaat("legendary_fish_14"));
			func_1055(joaat("legendary_fishing_spot_14"));
			func_1056(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_1054(joaat("legendary_fish_09"));
			func_1055(joaat("legendary_fishing_spot_09"));
			func_1056(joaat("legendary_fishing_spot_09"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_1054(joaat("legendary_fish_07"));
			func_1055(joaat("legendary_fishing_spot_07"));
			func_1056(joaat("legendary_fishing_spot_07"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_1054(joaat("legendary_fish_01"));
			func_1055(joaat("legendary_fishing_spot_01"));
			func_1056(joaat("legendary_fishing_spot_01"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_1054(joaat("legendary_fish_11"));
			func_1055(joaat("legendary_fishing_spot_11"));
			func_1056(joaat("legendary_fishing_spot_11"));
			func_853(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_1054(joaat("legendary_fish_10"));
			func_1055(joaat("legendary_fishing_spot_10"));
			func_1056(joaat("legendary_fishing_spot_10"));
			func_853(false, 10);
			break;
	}

	return;
}

int func_875(Hash hParam0) // Position - 0x19935 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 22) & 15;
}

int func_876(Hash hParam0) // Position - 0x19948 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(hParam0, 26) & 31 * MISC::IS_BIT_SET(hParam0, 31) ? -1 : 1) + 1898;
}

int func_877(Hash hParam0) // Position - 0x1996D Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 17) & 31;
}

int func_878(Hash hParam0) // Position - 0x19980 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 6) & 63;
}

int func_879(Hash hParam0) // Position - 0x19992 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 0) & 63;
}

int func_880(int iParam0, int iParam1) // Position - 0x199A4 Hash - 0x893AC59E ^0x893AC59E
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		default:
		
	}

	return 30;
}

float func_881(float fParam0, float fParam1, float fParam2) // Position - 0x19A3E Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

BOOL func_882(Hash hParam0) // Position - 0x19A80 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (hParam0 == -15)
		return false;

	num = func_879(hParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_878(hParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_631(hParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_876(hParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_875(hParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_877(hParam0);

	if (num6 < 1 || num6 > func_880(num5, num4))
		return false;

	return true;
}

void func_883(var uParam0, float fParam1) // Position - 0x19B5C Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_1058() - fParam1;
	func_1059(uParam0, 1);
	func_1060(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_884(int iParam0, int iParam1) // Position - 0x19B82 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_885(var uParam0) // Position - 0x19B91 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_634(uParam0))
		return uParam0->f_1;

	if (func_1061(uParam0))
		return uParam0->f_2;

	return func_1058() - uParam0->f_1;
}

BOOL func_886(int iParam0, int iParam1) // Position - 0x19BC6 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_1062(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_1063())
		return func_1062(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_1062(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

const char* func_887(const char* sParam0, int iParam1) // Position - 0x19C3A Hash - 0x9E99F03 ^0x29FB94D9
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_888(int iParam0, int iParam1, int iParam2) // Position - 0x19C54 Hash - 0x33CA9B4 ^0xE447793A
{
	Ped ped;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	iParam2 = func_795(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/] = iParam2;
	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	func_644(ped, iParam1, func_578(iParam0, iParam1));
	func_1064(ped, iParam1);
	return;
}

void func_889(int iParam0, int iParam1, float fParam2) // Position - 0x19CD9 Hash - 0xDC0CA050 ^0xB9608966
{
	fParam2 = func_1065(fParam2, 0f, 1E+09f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_2 = fParam2;
	return;
}

BOOL func_890(Ped pedParam0, int iParam1) // Position - 0x19D07 Hash - 0xE57DADF2 ^0xAE32360C
{
	int coreIndex;

	if (func_641(iParam1, &coreIndex))
		if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(pedParam0, coreIndex))
			return true;

	return false;
}

float func_891(int iParam0, int iParam1) // Position - 0x19D2A Hash - 0xC21AAD0C ^0x4FCB4069
{
	float num;
	var unk;

	num = 0f;

	if (iParam1 == 0)
		if (func_437(iParam0, 0) > 50)
			num = num + 0.25f;

	if (func_733(joaat("provision_talisman_boar_tusk"), 1, false))
		num = num + -0.1f;

	if (func_213() == 0 && func_201() == iParam0)
	{
		unk = func_1066(iParam1);
		num = num - unk;
	}

	return num;
}

float func_892(int iParam0, int iParam1) // Position - 0x19D8F Hash - 0x213B3DA5 ^0xE2648C2E
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_1;
}

void func_893(int iParam0, int iParam1, float fParam2) // Position - 0x19DC9 Hash - 0x3741DEAA ^0x5D9BAEC3
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	fParam2 = func_1065(fParam2, -1f, 1f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_1 = fParam2;
	return;
}

void func_894(int iParam0) // Position - 0x19E0D Hash - 0xC421D95B ^0xB765ADCB
{
	Global_1900383.f_444.f_8 = iParam0;
	return;
}

void func_895(int iParam0, int iParam1, float fParam2) // Position - 0x19E20 Hash - 0xDC0CA050 ^0xB9608966
{
	fParam2 = func_1065(fParam2, 0f, 1E+09f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_2 = fParam2;
	return;
}

BOOL func_896(Ped pedParam0) // Position - 0x19E4E Hash - 0xDECE401E ^0xE1B33432
{
	var unk;
	float num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	unk = { func_933(func_1067()) };
	num = func_1068();

	if (func_1069(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), unk, num, false))
		return true;

	return false;
}

BOOL func_897(Ped pedParam0) // Position - 0x19E9E Hash - 0xBEC2FAF4 ^0x7F00FEED
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("world_animal_horse_grazing")) || PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("world_animal_horse_grazing_domestic")))
		return true;

	return false;
}

float func_898(int iParam0, int iParam1) // Position - 0x19EF1 Hash - 0x213B3DA5 ^0xE2648C2E
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_1;
}

void func_899(int iParam0, int iParam1, float fParam2) // Position - 0x19F2B Hash - 0x3741DEAA ^0x5D9BAEC3
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	fParam2 = func_1065(fParam2, -1f, 1f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_1 = fParam2;
	return;
}

void func_900(int iParam0, int iParam1) // Position - 0x19F6F Hash - 0xF59E01E4 ^0x783D9746
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_1 = 0f;
	return;
}

Hash func_901(int iParam0) // Position - 0x19FA8 Hash - 0x79966B74 ^0xEC9DC74F
{
	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_1;
}

void func_902(int iParam0) // Position - 0x19FD6 Hash - 0xC421D95B ^0xD233A58C
{
	Global_1900383.f_444.f_6 = iParam0;
	return;
}

int func_903(var uParam0) // Position - 0x19FE9 Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_284(*uParam0, 0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			return 1;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			return 1;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			return 1;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			return 1;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_904(Hash hParam0) // Position - 0x1A065 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_736(hParam0) == joaat("WEAPON");
}

struct<4> func_905(BOOL bParam0) // Position - 0x1A079 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_666(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_331(923904168, func_330(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_331(923904168, func_330(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_331(923904168, func_330(bParam0), -740156546, false);
}

BOOL func_906(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x1A10E Hash - 0x4285A587 ^0x4285A587
{
	return func_332(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_907(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1A126 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_1070(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

BOOL func_908(Hash hParam0, BOOL bParam1) // Position - 0x1A147 Hash - 0x62864AB ^0xBC339691
{
	if (func_1071(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_140(24);
		else
			return true;

	return false;
}

BOOL func_909(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x1A180 Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_284(hParam0, 0))
		return false;

	unk = { func_955(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_1072(398 + i, 1);
	
		if (func_906(hParam0, &unk, hash, false))
		{
			flag = func_907(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_910(Hash hParam0, Any* panParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A214 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_284(hParam0, 0))
		return 0;

	if (!func_668(false))
		bParam2 = true;

	if (bParam2 || !func_911(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, panParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_666(bParam3), hParam0);
}

BOOL func_911(Hash hParam0) // Position - 0x1A262 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_1073(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

struct<29> func_912(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1A27E Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_666(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_916(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_913(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1A317 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1074(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1075(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1075(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_1075(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_914(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1A39E Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_666(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_916(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_915(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1A411 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1076(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1075(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1075(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_1075(num, 1);
		return num;
	}

	return -1;
}

struct<17> func_916(var uParam0) // Position - 0x1A498 Hash - 0x4CD39800 ^0x7DC5804
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { *uParam0 };
	unk.f_4 = { uParam0->f_5 };
	unk.f_8 = uParam0->f_4;
	unk.f_9 = uParam0->f_11;
	unk.f_11 = uParam0->f_9;
	unk.f_10 = uParam0->f_10;
	return unk;
}

int func_917(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1A4EC Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1077(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1075(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1075(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_1075(num, 1);
		return num;
	}

	return -1;
}

int func_918(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x1A573 Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_1078(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

BOOL func_919(Hash hParam0, int iParam1) // Position - 0x1A5A1 Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_1071(hParam0);
	
		if (category != 0)
		{
			num2 = func_1079(hParam0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
				{
					num = outSlotId;
				
					if (num == iParam1)
						return true;
				}
			}
		}
	}

	return false;
}

void func_920(Ped pedParam0, Hash hParam1) // Position - 0x1A5F5 Hash - 0x11B41686 ^0x947A8CD3
{
	Hash componentHash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (hParam1 == 0)
		return;

	if (hParam1 == -377364164 || hParam1 == 357708345)
		return;

	componentHash = hParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(pedParam0, componentHash, false, false, false);
	return;
}

void func_921(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1A659 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_1080(eptParam1))
		{
			func_1081(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_1082(pedParam0, 0, true);
	
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
			func_361(pedParam0, false);
			flag = true;
		}
	
		func_353(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_922(var uParam0) // Position - 0x1A73A Hash - 0xDAA91251 ^0x6BC598FB
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
	return;
}

var func_923(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1A762 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_924(var uParam0) // Position - 0x1A779 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_925(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x1A784 Hash - 0xC79590A0 ^0xE83AED0D
{
	uParam0->f_3.f_3 = { fParam1 };
	return;
}

void func_926(var uParam0, int iParam1) // Position - 0x1A798 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_927(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1A7A5 Hash - 0x5A9F065 ^0x9DF1DF9A
{
	BOOL isSphereVisible;
	var groundZ;
	float num;

	isSphereVisible = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);

	if (bParam6)
		if (func_1083(vParam0 + { 0.2f, 0f, 0f }))
			return false;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + { 1f, 0f, 0f }, &groundZ, false))
		return false;

	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
		return false;

	if (isSphereVisible)
	{
	}
	else
	{
		if (bParam7)
			if (vParam0.f_2 > vParam3.f_2 + 10f)
				return false;
	
		num = BUILTIN::VDIST(vParam0, vParam3);
	
		if (num > 40f && num < 80f)
			return true;
	}

	return false;
}

BOOL func_928(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0x1A84C Hash - 0xC31BF175 ^0x915D2C1C
{
	int num;

	switch (*uParam3)
	{
		case 0:
			if (uParam3->f_2 > 4)
			{
				*uParam4 = 1;
				return false;
			}
		
			uParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_1084(&(uParam3->f_1), uParam3->f_2, uParam0, iParam5, iParam7, iParam8, iParam9, iParam10, iParam11);
		
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
			{
			}
			else
			{
				func_1085(&(uParam3->f_1), iParam5);
			
				if (!_IS_NULL_VECTOR(uParam3->f_6))
					TASK::_0xCE4E669400E5F8AA(uParam3->f_1, func_1086(uParam3->f_6));
			
				TASK::_0x2B8AF29A78024BD3(uParam3->f_1);
			}
		
			*uParam3 = 3;
			break;
	
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
				num = 4;
			else
				num = TASK::_0x0365000D8BF86531(&(uParam3->f_1));
		
			switch (num)
			{
				case 3:
					uParam3->f_3 = { TASK::_0x865732725536EE39(&(uParam3->f_1)) };
					*uParam3 = 4;
				
					if (!bParam6)
						return true;
					break;
			
				case 4:
					if (bParam6 && uParam3->f_2 < 4)
					{
						uParam3->f_2 = uParam3->f_2 + 1;
						*uParam3 = 0;
					}
					else
					{
						*uParam4 = 1;
					}
					break;
			}
			break;
	
		case 4:
			return true;
	}

	return false;
}

BOOL func_929(int iParam0, int iParam1) // Position - 0x1A96D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_930(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1A97C Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_1087(*uParam0, 0f, 0f, 0f))
		return 1;

	num = 0;
	flag = false;
	flag2 = false;
	vector = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);

	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag)
	{
		if (num < iParam2)
		{
			num = num + 1;
			vector.f_2 = vector.f_2 + (float)iParam1;
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		}
		else
		{
			flag = true;
		}
	}

	if (flag)
	{
		num = 1;
		vector.f_2 = vector.f_2 - (float)iParam1;
		STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag2)
		{
			if (num < iParam2)
			{
				num = num + 1;
				vector.f_2 = vector.f_2 - (float)iParam1;
				STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			}
			else
			{
				flag2 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = groundZ;
		return 1;
	}

	if (flag && flag2)
		return 0;

	uParam0->f_2 = groundZ;
	return 1;
}

BOOL func_931(Ped pedParam0, Any* panParam1) // Position - 0x1AA73 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

BOOL func_932(int iParam0) // Position - 0x1AA83 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_2())
	{
		case -1:
			return Global_1357549.f_1494 && iParam0 != false;
	}

	return false;
}

Vector3 func_933(eStackSize essParam0) // Position - 0x1AAAE Hash - 0x563C355B ^0x563C355B
{
	switch (essParam0)
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
			return func_1088();
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void func_934(int iParam0, int iParam1) // Position - 0x1AB8E Hash - 0xC63A3C98 ^0x20B85A45
{
	Ped ped;
	Hash entityModel;
	int num;
	int _int;
	int gameTimer;
	Hash hash;
	int attributeRank;
	float num2;
	int i;
	int attributeIndex;
	int attributeRank2;

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_88(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(ped);
	num = func_1089(entityModel);

	if (DECORATOR::DECOR_EXIST_ON(ped, "HorseGender"))
	{
		_int = DECORATOR::DECOR_GET_INT(ped, "HorseGender");
	}
	else
	{
		_int = func_991(ped);
		DECORATOR::DECOR_SET_INT(ped, "HorseGender", _int);
	}

	func_751(iParam0, entityModel);
	func_750(iParam0, num);
	func_752(iParam0, _int);
	gameTimer = -1;
	hash = -15;

	if (iParam1 != 0)
	{
		gameTimer = MISC::GET_GAME_TIMER();
		hash = func_221();
	}

	func_199(iParam0, iParam1);
	func_502(iParam0, gameTimer);
	func_503(iParam0, hash);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, 7);
	num2 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(ped, 7));
	func_718(iParam0, attributeRank);
	func_804(iParam0, num2);

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_652(i, &attributeIndex))
		{
			attributeRank2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, attributeIndex);
			func_746(iParam0, i, attributeRank2);
		}
	}

	return;
}

int func_935(Ped pedParam0) // Position - 0x1AC9F Hash - 0x416CD007 ^0xDAFE17A5
{
	Hash entityModel;
	Hash outfit;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(joaat("META_HORSE_SADDLE_ONLY"), entityModel))
		return 0;

	outfit = joaat("META_HORSE_SADDLE_ONLY");

	if (PED::_IS_META_PED_OUTFIT_EQUIPPED(pedParam0, outfit))
		return 1;

	return 0;
}

void func_936(int iParam0) // Position - 0x1ACFC Hash - 0xCC180397 ^0xCC180397
{
	if (func_603() < iParam0)
		func_1090(iParam0);

	return;
}

BOOL func_937(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x1AD13 Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_666(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_938(Any* panParam0, Any* panParam1) // Position - 0x1AD4D Hash - 0x2AD3981E ^0x984186D0
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_666(false), panParam0, panParam1, 29, 1))
		return false;

	return true;
}

int func_939(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, int iParam10, BOOL bParam11) // Position - 0x1AD7C Hash - 0x657ADCCC ^0xBBA0C366
{
	var unk;
	int num;
	int itemSlotMaxCount;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_670(uParam0, &unk, true, false))
		return -1;

	if (func_940(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return -1;

	num = func_332(unk.f_4, uParam4, hParam8, false);
	itemSlotMaxCount = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(unk.f_4, hParam8);

	if (itemSlotMaxCount >= 0)
	{
		if (num >= itemSlotMaxCount)
		{
			return -1;
		}
		else if (num + unk.f_11 > itemSlotMaxCount)
		{
			if (bParam11)
				return -1;
		
			unk.f_11 = itemSlotMaxCount - num;
		}
	}

	unk15 = { func_916(&unk) };
	unk15.f_4 = { uParam4 };
	unk15.f_11 = hParam8;
	unk15.f_10 = iParam10;
	num2 = func_917(1168099063, &unk15, bParam9);

	if (num2 == -1)
		return -1;

	return num2;
}

BOOL func_940(var uParam0, var uParam1) // Position - 0x1AE7A Hash - 0x361C7388 ^0xEA068BC1
{
	if (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1 && uParam0->f_2 == uParam1->f_2 && uParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

int func_941(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x1AEBB Hash - 0x503960A6 ^0x8CEAEEDE
{
	var unk;
	var unk15;
	var unk29;
	var unk46;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	if (func_940(&uParam0, &uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_670(uParam0, &unk, true, false) || !func_670(uParam4, &unk15, true, false))
		return -1;

	if (func_940(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return -1;

	unk29 = { func_916(&unk) };
	unk29.f_4 = { unk15.f_5 };
	unk29.f_11 = unk15.f_9;
	unk29.f_10 = unk15.f_10 || iParam8;
	unk46 = { func_916(&unk15) };
	unk46.f_4 = { unk.f_5 };
	unk46.f_11 = unk.f_9;
	unk46.f_10 = unk.f_10 || iParam8;
	num = -1;

	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), 1168099063))
		{
			if (func_1077(num, 1168099063, &unk29) && func_1077(num, 1168099063, &unk46))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1075(num, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		num = func_917(1168099063, &unk29, false);
		num = func_917(1168099063, &unk46, false);
	}

	return num;
}

void func_942(Hash hParam0, var uParam1, var uParam2) // Position - 0x1B065 Hash - 0x38E6C2DD ^0xA4FE6475
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

BOOL func_943() // Position - 0x1B271 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_944(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1B27E Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_945(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1B2E8 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_946(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x1B2FF Hash - 0x92B705D3 ^0xB783F681
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

Hash func_947(Hash hParam0) // Position - 0x1B3F2 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_284(hParam0, 0))
		return 0;

	return hParam0;
}

BOOL func_948(Hash hParam0, int iParam1) // Position - 0x1B40B Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_284(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_731(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_1091("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_953(&unk, i, num, num2))
			{
			}
			else if (!func_1092(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_954(num);
				return true;
			}
		}
	
		func_954(num);
	}

	return false;
}

int func_949(Hash hParam0, BOOL bParam1) // Position - 0x1B4B3 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_950(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_951(&unk, func_905(false));

	if (!func_952(&unk, &num, &num2, false))
		return 0;

	func_954(num);
	return num2;
}

struct<18> func_950(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1B511 Hash - 0x84700F53 ^0xB9E7AA96
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

void func_951(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1B5E3 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_952(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x1B5FE Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_666(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_953(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1B623 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_954(int iParam0) // Position - 0x1B65E Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

struct<5> func_955(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B67F Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_330(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_736(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_1094(hParam0, -1823706425))
			{
				unk = { func_331(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_1094(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_331(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_1093(bParam1) };
		
			switch (func_1071(hParam0))
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
				unk = { func_331(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_905(bParam1) };
		
			if (bParam2 && func_908(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_906(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_906(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_907(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_670(unk, &unk28, bParam1, false))
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

BOOL func_956(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1B93C Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_1019(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_668(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_666(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

void func_957(Ped pedParam0) // Position - 0x1B988 Hash - 0x7F42D983 ^0xA02E5A76
{
	BOOL isPedMotivationStateEnabled;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	isPedMotivationStateEnabled = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(pedParam0, 3);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, true);

	func_1095(pedParam0, 0f, 0);

	if (!isPedMotivationStateEnabled)
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(pedParam0, 3, false);

	return;
}

BOOL func_958(Hash hParam0) // Position - 0x1B9E2 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_herb_parasol_mushroom"):
		case joaat("consumable_herb_bay_bolete"):
		case joaat("consumable_herb_chanterelles"):
		case joaat("consumable_herb_rams_head"):
			return true;
	}

	return false;
}

BOOL func_959(Hash hParam0) // Position - 0x1BA12 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_herb_oleander_sage"):
		case joaat("consumable_herb_evergreen_huckleberry"):
		case joaat("consumable_herb_indian_tobacco"):
		case joaat("consumable_herb_yarrow"):
		case joaat("consumable_herb_violet_snowdrop"):
		case joaat("consumable_herb_milkweed"):
		case joaat("consumable_herb_prairie_poppy"):
		case joaat("consumable_herb_vanilla_flower"):
			return true;
	}

	return false;
}

BOOL func_960(Hash hParam0) // Position - 0x1BA5A Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
		case joaat("consumable_herb_english_mace"):
		case joaat("consumable_peppermint"):
		case joaat("consumable_sugarcube"):
			return true;
	}

	return false;
}

int func_961(Ped pedParam0) // Position - 0x1BA8A Hash - 0x98A8A9 ^0x891AFA53
{
	int attributeRank;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, func_986());
	return attributeRank;
}

int func_962(int iParam0) // Position - 0x1BAB7 Hash - 0x4EE4703D ^0x4EE4703D
{
	return 20;
}

int func_963() // Position - 0x1BAC1 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_421;
}

void func_964(int iParam0) // Position - 0x1BAD0 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_421 = iParam0;
	return;
}

int func_965(int iParam0) // Position - 0x1BAE1 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_966() // Position - 0x1BB62 Hash - 0x9F572D68 ^0x8E3583E8
{
	return joaat("breed_tennesseewalker_mahoganybay");
}

int func_967() // Position - 0x1BB6F Hash - 0x9F572D68 ^0xBDF2A68A
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_968() // Position - 0x1BB7C Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_969() // Position - 0x1BB85 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_970() // Position - 0x1BB92 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_971() // Position - 0x1BB9F Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_972() // Position - 0x1BBA8 Hash - 0x9F572D68 ^0xC65FFCB9
{
	return joaat("breed_john_endlesssummer");
}

int func_973() // Position - 0x1BBB5 Hash - 0x9F572D68 ^0xEE9A2A30
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_974() // Position - 0x1BBC2 Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

int func_975() // Position - 0x1BBCB Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_976() // Position - 0x1BBD8 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_977() // Position - 0x1BBE5 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_978() // Position - 0x1BBEE Hash - 0x9F572D68 ^0x1E5C2934
{
	return joaat("breed_morgan_bay");
}

int func_979() // Position - 0x1BBFB Hash - 0x9F572D68 ^0xD70F756D
{
	return joaat("a_c_horse_morgan_bay");
}

int func_980() // Position - 0x1BC08 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_981() // Position - 0x1BC11 Hash - 0x9F572D68 ^0xE2D55F1F
{
	return joaat("breed_kentuckysaddle_grey");
}

int func_982() // Position - 0x1BC1E Hash - 0x9F572D68 ^0xD5B858DC
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_983() // Position - 0x1BC2B Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_984(char* sParam0, char* sParam1, Hash hParam2) // Position - 0x1BC34 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

void func_985(int iParam0, int iParam1) // Position - 0x1BC65 Hash - 0x60D5BCB9 ^0x518396D0
{
	Ped ped;
	int defaultMaxAttributeRank;
	char* str;

	iParam0 = func_87(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_207(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ped, 7);

	if (iParam1 == 1)
		str = "HORSE_BONDED";
	else if (iParam1 == defaultMaxAttributeRank)
		str = "HORSE_BONDING_MAXIMUM";
	else
		str = "HORSE_BONDING_LEVELUP";

	func_812(str, MISC::VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), joaat("hud_toasts"), -961843223, -2, "HUD_Toast_Soundset", "horse_bonding", 0, 0, true, true);
	return;
}

int func_986() // Position - 0x1BCE8 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

void func_987(int iParam0, int iParam1) // Position - 0x1BCF1 Hash - 0x20667F92 ^0x435A1013
{
	char* str;
	char* str2;
	const char* str3;
	Hash hash;
	const char* str4;
	Hash hashKey;
	char* str5;
	char* str6;

	str = "RPG_LEVEL_PROGRESS_TOAST";

	switch (iParam0)
	{
		case 0:
			str2 = "RPG_HEALTH";
			break;
	
		case 1:
			str2 = "RPG_STAMINA";
			break;
	
		default:
			return;
	}

	str3 = MISC::VAR_STRING(2, "HORSE_RPG_LEVEL_PROGRESS", iParam1);

	switch (iParam0)
	{
		case 0:
			hash = joaat("toast_rpg_level_health_horse");
			break;
	
		case 1:
			hash = joaat("toast_rpg_level_stamina_horse");
			break;
	
		default:
			return;
	}

	str4 = func_1097(func_1096(iParam1));
	hashKey = MISC::GET_HASH_KEY(str4);
	str5 = "";
	str6 = "HUD_Toast_Soundset";
	func_812(MISC::VAR_STRING(10, str, str2), str3, hash, hashKey, -2, str6, str5, 0, 0, true, true);
	return;
}

int func_988(Ped pedParam0) // Position - 0x1BDA6 Hash - 0x98A8A9 ^0x891AFA53
{
	int attributeRank;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, func_989());
	return attributeRank;
}

int func_989() // Position - 0x1BDD3 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_990(Ped pedParam0) // Position - 0x1BDDC Hash - 0xE2850BC6 ^0xC82CAB3C
{
	var unk;
	int peltFromHorse;
	int i;
	int num;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	unk = 3;

	for (i = 0; i < 3; i = i + 1)
	{
		unk[i] = PED::_GET_PELT_FROM_HORSE(pedParam0, i);
	}

	for (i = 0; i < 3; i = i + 1)
	{
		num = unk[i];
	
		if (num == 0)
		{
		}
		else
		{
			PED::_CLEAR_PELT_FROM_HORSE(pedParam0, unk[i]);
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		peltFromHorse = PED::_GET_PELT_FROM_HORSE(pedParam0, i);
		num2 = peltFromHorse;
	}

	return;
}

int func_991(Ped pedParam0) // Position - 0x1BE6E Hash - 0xCBD81943 ^0x59B24754
{
	int num;
	float charExpression;

	num = 1;
	charExpression = PED::_GET_CHAR_EXPRESSION(pedParam0, 41611);

	if (charExpression == 1f)
		num = 2;

	return num;
}

BOOL func_992(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x1BE91 Hash - 0x9F996EFC ^0x1FE8399E
{
	Vector3 entityCoords;
	float num;
	float num2;
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1) || PED::IS_PED_INJURED(pedParam1))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, true, false) };
	num = func_187(pedParam1, pedParam0, true, true);

	if (bParam2)
	{
		num2 = func_190(pedParam0);
	
		if (num2 >= 0.25f)
			return false;
	
		func_1095(pedParam0, 0.25f, pedParam1);
		return true;
	}
	else if (!PED::IS_PED_FLEEING(pedParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_FLEE_COORD(0, entityCoords, 3, 1048576, 100f - num, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::_TASK_PERFORM_SEQUENCE_2(pedParam0, taskSequenceId, 1.5f, 1.5f);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	FLOCK::_0xFF1E339CE40EAAAF(pedParam0, 0);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 48, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 1);
	return true;
}

int func_993() // Position - 0x1BF8D Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_994(Ped pedParam0, Hash hParam1) // Position - 0x1BFAB Hash - 0xD9F68FF6 ^0xB96DBFC0
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
		return false;

	PED::SET_PED_CONFIG_FLAG(Global_35, 176, true);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	TASK::TASK_REVIVE_TARGET(Global_35, pedParam0, hParam1);
	func_432(hParam1, 1, false, -142743235, false);
	return true;
}

void func_995(Ped pedParam0) // Position - 0x1C03C Hash - 0x29A8F290 ^0xE8E78184
{
	Global_1900372.f_2 = pedParam0;
	return;
}

void func_996(Hash hParam0) // Position - 0x1C04C Hash - 0x29A8F290 ^0x6E801A78
{
	Global_1900372.f_1 = hParam0;
	return;
}

void func_997(int iParam0) // Position - 0x1C05C Hash - 0x29A8F290 ^0xF8BB6987
{
	Global_1900372.f_5 = iParam0;
	return;
}

int func_998(int iParam0) // Position - 0x1C06C Hash - 0x4EE4703D ^0x4EE4703D
{
	return 20;
}

void func_999(Ped pedParam0, float fParam1) // Position - 0x1C076 Hash - 0x3028D9AC ^0xB8FC9553
{
	int num;
	int entityHealth;
	int entityMaxHealth;
	int num2;
	int healthAmount;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	fParam1 = fParam1 * 0.01f;
	entityHealth = ENTITY::GET_ENTITY_HEALTH(pedParam0);
	entityMaxHealth = ENTITY::GET_ENTITY_MAX_HEALTH(pedParam0, false);
	num = BUILTIN::FLOOR(fParam1 * (float)entityMaxHealth);
	num2 = num;

	if (entityHealth + num > entityMaxHealth)
		num2 = entityMaxHealth - entityHealth;

	healthAmount = entityHealth + num2;
	ENTITY::SET_ENTITY_HEALTH(pedParam0, healthAmount, 0);
	return;
}

void func_1000(int iParam0, int iParam1, int iParam2) // Position - 0x1C0EC Hash - 0xEC2C2B4F ^0xEC2C2B4F
{
	func_888(iParam0, iParam1, func_578(iParam0, iParam1) + iParam2);
	return;
}

void func_1001(Ped pedParam0, int iParam1, int iParam2) // Position - 0x1C107 Hash - 0xEC2C2B4F ^0xEC2C2B4F
{
	func_644(pedParam0, iParam1, func_643(pedParam0, iParam1) + iParam2);
	return;
}

BOOL func_1002(int iParam0, var uParam1) // Position - 0x1C122 Hash - 0xC77A99E4 ^0xC77A99E4
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 19;
			break;
	
		case 1:
			*uParam1 = 18;
			break;
	
		default:
			return false;
	}

	return true;
}

float func_1003(float fParam0, int iParam1) // Position - 0x1C156 Hash - 0x4EDD98F5 ^0x4EDD98F5
{
	switch (iParam1)
	{
		case 0:
			return fParam0 * 0.033f;
	
		case 1:
			return fParam0 * 2f;
	
		case 2:
			return fParam0 * 120f;
	
		case 3:
			return fParam0 * 2880f;
	
		default:
		
	}

	return fParam0;
}

void func_1004(Ped pedParam0, int iParam1, float fParam2) // Position - 0x1C1A8 Hash - 0xF3882556 ^0xF7A93829
{
	int attributeIndex;

	if (func_1002(iParam1, &attributeIndex))
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(pedParam0, attributeIndex, fParam2, false);

	return;
}

void func_1005(Ped pedParam0, int iParam1, float fParam2) // Position - 0x1C1C6 Hash - 0xF3882556 ^0xF7A93829
{
	int attributeIndex;

	if (func_641(iParam1, &attributeIndex))
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(pedParam0, attributeIndex, fParam2, false);

	return;
}

void func_1006(Hash hParam0) // Position - 0x1C1E4 Hash - 0x50583BD9 ^0x1BC8A8A8
{
	if (func_1098(hParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA_FORT");
		return;
	}

	if (func_726(hParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA");
		return;
	}

	return;
}

int func_1007(int iParam0, int iParam1) // Position - 0x1C214 Hash - 0x9D981F95 ^0x9D981F95
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

int func_1008(var uParam0) // Position - 0x1C3E5 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_1099(i, 1);
	}

	return -358215195;
}

BOOL func_1009(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1C420 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_1100();

	if (iParam2 == 39)
	{
		unk = { func_955(hParam0, true, false) };
		iParam2 = func_1007(func_1008(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_431(hParam0, 866047851) && func_1101(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_1012(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_1102(func_1099(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_1103(iParam2);
	func_1104(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_1105(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1105(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_1106(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_1107(hParam0, iParam2, hParam1, func_2() != -1);

	if (bParam4)
		func_1108(&(Global_1946054.f_1378), true, 3);
	else
		func_1108(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_1109(func_1099(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_1010(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C62D Hash - 0x5AF76643 ^0x5AF76643
{
	func_1110(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_1011(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x1C646 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_1111(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_1112(num);
	return;
}

BOOL func_1012(BOOL bParam0) // Position - 0x1C678 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_1013() // Position - 0x1C689 Hash - 0xB6203BF0 ^0x217DD714
{
	func_1113(&(Global_1946054.f_2776));
	func_1114(32768);
	func_1109(1108822547, 8, 6);
	return;
}

int func_1014(int iParam0) // Position - 0x1C6B0 Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_1007(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_1015(int iParam0) // Position - 0x1C714 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_1115(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_1116(num);
	return;
}

void func_1016(int iParam0, int iParam1, int iParam2) // Position - 0x1C758 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_1116(num);
	return;
}

void func_1017() // Position - 0x1C778 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_1117(Global_35, &unk);
	unk31 = { func_330(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1118(false);
	func_1119(7);
	func_1120(joaat("kit_bandana"), true, true, false);

	if (func_1121() == 1160113249)
	{
		func_1120(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_1120(-361635024, true, true, true);
	}

	func_1122(Global_35, &unk);
	return;
}

void func_1018(Hash hParam0) // Position - 0x1C801 Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_1092(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_1019(Hash hParam0) // Position - 0x1C83B Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_1020() // Position - 0x1C851 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

void func_1021(int iParam0, BOOL bParam1) // Position - 0x1C861 Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_1123(bParam1);

	return;
}

void func_1022(Hash hParam0) // Position - 0x1C87C Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_1023(int iParam0) // Position - 0x1C88F Hash - 0x8FB6A40C ^0x38DD5658
{
	if (iParam0 <= -320)
		return "HONOR_BAD_8";
	else if (iParam0 <= -280)
		return "HONOR_BAD_7";
	else if (iParam0 <= -240)
		return "HONOR_BAD_6";
	else if (iParam0 <= -200)
		return "HONOR_BAD_5";
	else if (iParam0 <= -160)
		return "HONOR_BAD_4";
	else if (iParam0 <= -120)
		return "HONOR_BAD_3";
	else if (iParam0 <= -80)
		return "HONOR_BAD_2";
	else if (iParam0 < 0)
		return "HONOR_BAD_1";
	else if (iParam0 <= 40)
		return "HONOR_GOOD_1";
	else if (iParam0 >= 320)
		return "HONOR_GOOD_8";
	else if (iParam0 >= 280)
		return "HONOR_GOOD_7";
	else if (iParam0 >= 240)
		return "HONOR_GOOD_6";
	else if (iParam0 >= 200)
		return "HONOR_GOOD_5";
	else if (iParam0 >= 160)
		return "HONOR_GOOD_4";
	else if (iParam0 >= 120)
		return "HONOR_GOOD_3";
	else if (iParam0 >= 80)
		return "HONOR_GOOD_2";

	return "HONOR_GOOD_1";
}

BOOL func_1024(var uParam0) // Position - 0x1C9B0 Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_864(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -2103982008;
		*uParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
		return true;
	}

	return false;
}

BOOL func_1025(int iParam0, var uParam1, var uParam2) // Position - 0x1C9F8 Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_864(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -57097983;
		unk.f_3 = iParam0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		{
			unk.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam1 = unk6;
			unk.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam2 = unk6;
			return true;
		}
	}

	return false;
}

Hash func_1026(Hash hParam0) // Position - 0x1CA78 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_1027() // Position - 0x1CA82 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_825();

	switch (num)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
	
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
	
		default:
		
	}

	return joaat("SHOP_HONOR_AMORAL");
}

BOOL func_1028(int iParam0) // Position - 0x1CAD1 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_1029(int iParam0, var uParam1, var uParam2) // Position - 0x1CAF0 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_1028(iParam0))
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
	
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
	
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
	
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
	
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
	
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
	
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
	
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
	
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
	
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
	
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
	
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
	
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
	
		case 13:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_UPGR_W");
			break;
	
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
	
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
	
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
	
		default:
			return false;
	}

	return true;
}

BOOL func_1030(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x1CCBF Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_284(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

BOOL func_1031(int iParam0, BOOL bParam1) // Position - 0x1CD34 Hash - 0xC3E950D6 ^0xC3E950D6
{
	if (!func_588(iParam0))
		return false;

	return Global_1914319.f_15614[iParam0] && bParam1 != false;
}

BOOL func_1032(int iParam0) // Position - 0x1CD5A Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_1033(int iParam0, BOOL bParam1) // Position - 0x1CD70 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

int func_1034(BOOL bParam0) // Position - 0x1CDA3 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_1035(Hash hParam0) // Position - 0x1CDB6 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_1036(Hash hParam0) // Position - 0x1CDC6 Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case joaat("exotic_stage_02"):
			return 2;
	
		case joaat("exotic_stage_01"):
			return 1;
	
		case joaat("exotic_stage_05"):
			return 16;
	
		case joaat("exotic_stage_04"):
			return 8;
	
		case joaat("exotic_stage_03"):
			return 4;
	
		default:
		
	}

	return 0;
}

void func_1037(int iParam0) // Position - 0x1CE0B Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

void func_1038(Hash hParam0, int iParam1) // Position - 0x1CE26 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_1039(int iParam0) // Position - 0x1CE39 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_2() != -1)
		return false;

	if (!func_847(iParam0))
		return false;

	return func_1124(Global_1347702[iParam0 /*49*/].f_15);
}

int func_1040(Hash hParam0, int iParam1) // Position - 0x1CE69 Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_864(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_1041(int iParam0, int iParam1, int iParam2, char* sParam3, var uParam4, int iParam5, Hash hParam6) // Position - 0x1CE98 Hash - 0xF20034E5 ^0xB487422F
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_1125() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1126(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1127(), 12);
			break;
	
		case -1531394072:
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_EX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", uParam4, iParam5);
			break;
	
		case joaat("dino_bones"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_DB_COMPLETE";
			else if (func_1128() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1129(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_1128(), 30);
			break;
	
		case joaat("taxidermy"):
			if (iParam2 == 3)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 4)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			else if (iParam2 == 5)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			else if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			else if (iParam2 == 8)
				sParam3 = "COL_TX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", uParam4, func_1040(hParam6, 20));
			break;
	
		case 1995362678:
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_LF_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1130(), 13);
			break;
	
		case joaat("rock_carvings"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_RC_COMPLETE";
			else if (func_1131() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1132(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_1131(), 10);
			break;
	}

	return sParam3;
}

BOOL func_1042(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x1D185 Hash - 0xC978E890 ^0x1621426E
{
	if (hParam2 == joaat("CIGARETTE_CARDS"))
		if (hParam1 == joaat("col_cc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_cc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_cc_intro_pre"));
	else if (hParam2 == joaat("dino_bones"))
		if (hParam1 == joaat("col_db_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_db_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_db_intro_pre"));
	else if (hParam2 == joaat("rock_carvings"))
		if (hParam1 == joaat("col_rc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_rc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_rc_intro_pre"));

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_REMOVE_ENTRY(3, hParam1);

	return true;
}

BOOL func_1043(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x1D232 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_1044(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x1D25E Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_1045(int iParam0, Hash hParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x1D2AD Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_1133(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_733(hash, 1, false) || func_1135(func_1134(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_1133(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_1133(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_1128() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1137(i)), func_1137(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_1129() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1137(i)), func_1137(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1137(i)), func_1137(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_858(hParam3, func_1138(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_855(hash) - iParam7 >= func_1040(hParam3, func_1139(i));
				else
					flag = func_855(hash) >= func_1040(hParam3, func_1139(i));
			else if (hParam4 == hash)
				flag = func_855(hash) + iParam7 >= func_1040(hParam3, func_1139(i));
			else
				flag = func_855(hash) >= func_1040(hParam3, func_1139(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_799(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_1131() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1142(i)), func_1142(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_1132() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1142(i)), func_1142(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1142(i)), func_1142(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_858(hParam3, func_1138(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_855(hash) - iParam7 >= 1;
				else
					flag = func_1143(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_1143(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1144(hash)), func_1144(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_1046(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x1D622 Hash - 0x3C34F826 ^0x99FD9D1C
{
	BOOL flag;

	flag = false;

	if (iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("CIGARETTE_CARDS"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == -1531394072)
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == 1995362678)
	{
		if (func_1130() >= 13)
			flag = true;
		else
			flag = false;
	
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", flag, true, false);
	}

	if (iParam3 == 7 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("taxidermy"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", flag, true, false);

	return true;
}

BOOL func_1047(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x1D72B Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_269(func_268(0)) && func_167(0) == 1 || func_167(0) == 8 || func_167(0) == 6)
		iParam3 = 7;

	if (hParam2 == joaat("dino_bones") || hParam2 == 1995362678 || hParam2 == joaat("rock_carvings"))
	{
		if (iParam3 == 7)
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
	}
	else if (hParam2 == joaat("taxidermy"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
			}
		}
	}

	return true;
}

BOOL func_1048(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x1D7CD Hash - 0x9548C303 ^0x2CDF6383
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	switch (hParam0)
	{
		case joaat("taxidermy_order_05"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_02"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_01"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			break;
	
		case joaat("taxidermy_order_04"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_03"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
	}

	if (hParam0 == joaat("taxidermy_order_01"))
	{
		if (bParam3)
			if (func_1143(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1143(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1143(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1143(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_1143(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1143(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1143(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1143(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1143(hash) && func_1143(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_1143(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1143(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1143(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1143(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1143(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_1143(hash) && func_1143(hash2) && func_1143(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_1143(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1143(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1143(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1143(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1143(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_1143(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_1143(hash) && func_1143(hash2) && func_1143(hash3) && func_1143(hash4))
			return true;
	}

	return false;
}

void func_1049(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1DC92 Hash - 0xD806FABF ^0x2519C5A1
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	int num;

	switch (iParam0)
	{
		case 38:
			str = "COL_CC_TITLE";
			str4 = "COL_CC_CARD_FOUND";
			num = joaat("CIGARETTE_CARDS");
		
			if (func_94() && func_1039(38) || func_850(38))
			{
				str2 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				str2 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
		
			hash = joaat("col_cc_intro");
			break;
	
		case 39:
			str = "COL_DB_TITLE";
			str4 = "COL_DB_FOUND";
			num = joaat("dino_bones");
		
			if (func_94() && func_1039(39) || func_850(39))
			{
				str2 = "COL_DB_INTRO";
				hashKey = joaat("blip_rc_deborah");
			}
			else
			{
				str2 = "COL_DB_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
		
			hash = joaat("col_db_intro");
			break;
	
		case 41:
			str = "COL_LF_TITLE";
			str4 = "COL_LF_CAUGHT";
			str2 = "COL_LF_INTRO";
			num = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			str = "COL_EX_TITLE";
			str4 = "COL_EX_ITEMS_COLLECTED";
			str2 = "COL_EX_INTRO";
			num = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			str = "COL_RC_TITLE";
			str4 = "COL_RC_FOUND";
			num = joaat("rock_carvings");
		
			if (func_94() && func_1039(49) || func_850(49))
			{
				str2 = "COL_RC_INTRO";
				hashKey = joaat("blip_scm_frances");
			}
			else
			{
				str2 = "COL_RC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
		
			hash = joaat("col_rc_intro");
			break;
	
		case 51:
			str = "COL_TX_TITLE";
			str4 = "COL_TX_CARCASS_COLLECTED";
			str2 = "COL_TX_INTRO";
			num = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	if (iParam5 == 2)
	{
		str = "MISSION_COMPLETE";
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
		str2 = "COL_ALL_LOG_UPDATED";
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (num == joaat("CIGARETTE_CARDS"))
	{
		if (func_94() && func_1039(38) || func_850(38))
			hash = joaat("col_cc_intro");
		else
			hash = joaat("col_cc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 0)
		{
			hashKey2 = hParam1;
			hashKey = hParam2;
		}
	
		if (iParam5 == 2)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_1145(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_1145(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_812(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_1146(iParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_1145(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_1145(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_94() && func_1039(39) || func_850(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_1145(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_1145(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_94() && func_1039(49) || func_850(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_1145(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_1145(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_1145(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_1145(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

BOOL func_1050(int iParam0) // Position - 0x1E240 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_1051(int iParam0) // Position - 0x1E256 Hash - 0xB8EC44B7 ^0x486668F8
{
	switch (iParam0)
	{
		case 0:
			return joaat("st_doctor");
	
		case 1:
			return joaat("st_train_station");
	
		case 2:
			return joaat("st_post_office");
	
		case 3:
			return joaat("st_general");
	
		case 4:
			return joaat("st_fence");
	
		case 5:
			return joaat("st_horse_fence");
	
		case 6:
			return joaat("st_gunsmith");
	
		case 7:
			return joaat("st_tailor");
	
		case 8:
			return joaat("st_barber");
	
		case 9:
			return joaat("st_horse_shop");
	
		case 10:
			return joaat("st_butcher");
	
		case 11:
			return joaat("st_dynamic");
	
		case 12:
			return joaat("ST_MARKET");
	
		case 13:
			return joaat("ST_FRENCH_MARKET");
	
		case 14:
			return -1227686818;
	
		case 15:
			return joaat("st_bank");
	
		case 17:
			return joaat("st_bait");
	
		case 18:
			return joaat("st_trapper");
	
		case 19:
			return joaat("st_pearson");
	
		case 20:
			return joaat("st_hotel");
	
		case 21:
			return joaat("st_photo_studio");
	
		case 22:
			return joaat("ST_NEWSPAPER_BOY");
	
		case 23:
			return joaat("st_weapon_mod_store");
	
		case 24:
			return joaat("st_clothing");
	
		case 25:
			return joaat("st_camp_shaving");
	
		case 26:
			return joaat("st_quartermaster");
	
		case 27:
			return joaat("st_horse_trainer");
	
		case 28:
			return joaat("st_blacksmith");
	
		case 29:
			return joaat("st_bountyhunting_mp_return");
	
		case 30:
			return joaat("st_coach");
	
		case 31:
			return -732027686;
	
		case 32:
			return joaat("st_wilderness_supplies");
	
		case 33:
			return joaat("st_bartender");
	
		case 34:
			return joaat("st_handheld");
	
		default:
		
	}

	return 0;
}

struct<4> func_1052(int iParam0, Hash hParam1) // Position - 0x1E443 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_871(iParam0) };
	return func_872(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_1053(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x1E465 Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_1019(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_1147(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

void func_1054(Hash hParam0) // Position - 0x1E4DD Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_1055(Hash hParam0) // Position - 0x1E4EC Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_801(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_1056(Hash hParam0) // Position - 0x1E505 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

var func_1057(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1E514 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

float func_1058() // Position - 0x1E52B Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_1059(var uParam0, int iParam1) // Position - 0x1E55D Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_1060(var uParam0, int iParam1) // Position - 0x1E56E Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_1061(var uParam0) // Position - 0x1E583 Hash - 0x39705408 ^0x39705408
{
	return func_884(*uParam0, 2);
}

BOOL func_1062(var uParam0, int iParam1, int iParam2) // Position - 0x1E593 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_1063() // Position - 0x1E5CA Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

void func_1064(Ped pedParam0, int iParam1) // Position - 0x1E5D8 Hash - 0x20F01565 ^0xAC680146
{
	int coreIndex;
	char* variableName;
	char* variableName2;
	int attributeCoreValue;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (!func_641(iParam1, &coreIndex))
		return;

	variableName = func_1148(iParam1);
	variableName2 = func_1149(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
	{
		attributeCoreValue = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex);
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, variableName, BUILTIN::TO_FLOAT(attributeCoreValue), -1);
	
		if (attributeCoreValue <= 20)
			PED::_SET_PED_BLACKBOARD_BOOL(pedParam0, variableName2, true, -1);
		else
			PED::_REMOVE_PED_BLACKBOARD_BOOL(pedParam0, variableName2);
	}

	return;
}

float func_1065(float fParam0, float fParam1, float fParam2) // Position - 0x1E663 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

var func_1066(int iParam0) // Position - 0x1E68A Hash - 0x7644A0AB ^0x2565A225
{
	var unk;

	unk = Global_1900383.f_393.f_8[iParam0];
	return unk;
}

eStackSize func_1067() // Position - 0x1E6A3 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

float func_1068() // Position - 0x1E6B1 Hash - 0xC6D918D ^0xC6D918D
{
	eStackSize stackSize;

	stackSize = func_170();

	switch (stackSize)
	{
		case 4:
			return 50f;
	
		case 9:
			return 50f;
	
		case 22:
			return 120f;
	
		case 37:
			return 120f;
	
		case 43:
			return 50f;
	
		case 58:
			return 50f;
	
		case 71:
			return 50f;
	
		case 79:
			return 50f;
	
		case 98:
			return 60f;
	}

	return 25f;
}

BOOL func_1069(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x1E765 Hash - 0x4421204 ^0x961A610F
{
	if (bParam7)
		return BUILTIN::VDIST2(vParam0, vParam3) <= fParam6 * fParam6;

	return func_1150(vParam0, vParam3) <= fParam6 * fParam6;
}

BOOL func_1070(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x1E799 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_666(false);
	*panParam1 = { func_331(hParam0, func_905(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

Hash func_1071(Hash hParam0) // Position - 0x1E7DE Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_284(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Hash func_1072(int iParam0, int iParam1) // Position - 0x1E809 Hash - 0xE1D12727 ^0x71D656A6
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
	
		case 1:
			return -1783281882;
	
		case 2:
			return 1704602624;
	
		case 3:
			return 1214181762;
	
		case 4:
			return 1520605650;
	
		case 5:
			return 551482925;
	
		case 6:
			return 843929315;
	
		case 7:
			return 1974334822;
	
		case 8:
			return -1963435638;
	
		case 9:
			return -430578371;
	
		case 10:
			return -730381952;
	
		case 11:
			return -1500304973;
	
		case 12:
			return -253503777;
	
		case 13:
			return 1352275534;
	
		case 14:
			return 1666399168;
	
		case 15:
			return -1911121386;
	
		case 16:
			return 1756656691;
	
		case 17:
			return -1774867076;
	
		case 18:
			return -421952220;
	
		case 19:
			return -1087003323;
	
		case 20:
			return 1231618917;
	
		case 21:
			return -1183777174;
	
		case 22:
			return -841767082;
	
		case 23:
			return 1043717005;
	
		case 24:
			return 142663787;
	
		case 25:
			return 1718143051;
	
		case 26:
			return -6605744;
	
		case 27:
			return 953047564;
	
		case 28:
			return 769706682;
	
		case 29:
			return 1635590003;
	
		case 30:
			return -2047978619;
	
		case 31:
			return -586319254;
	
		case 32:
			return 249896112;
	
		case 33:
			return -1060513333;
	
		case 34:
			return 1317351007;
	
		case 35:
			return -500478573;
	
		case 36:
			return -806573802;
	
		case 37:
			return -1109949204;
	
		case 38:
			return -740156546;
	
		case 39:
			return -684532710;
	
		case 40:
			return 1158805436;
	
		case 41:
			return -559473670;
	
		case 42:
			return -797147251;
	
		case 43:
			return -382216265;
	
		case 44:
			return 1419177114;
	
		case 45:
			return 1704297235;
	
		case 46:
			return -1139016418;
	
		case 47:
			return 897705377;
	
		case 48:
			return 17961769;
	
		case 49:
			return 205582207;
	
		case 50:
			return 900740963;
	
		case 51:
			return -1369589344;
	
		case 52:
			return -1695823795;
	
		case 53:
			return -41453074;
	
		case 54:
			return 539767227;
	
		case 55:
			return 1210490314;
	
		case 56:
			return -399684751;
	
		case 57:
			return 2138893455;
	
		case 58:
			return -1617010487;
	
		case 59:
			return -832377028;
	
		case 60:
			return -428040245;
	
		case 61:
			return 1279288897;
	
		case 62:
			return -594897905;
	
		case 63:
			return -1360459240;
	
		case 64:
			return 1838428396;
	
		case 65:
			return -1467846997;
	
		case 66:
			return -490610263;
	
		case 67:
			return -1885413079;
	
		case 68:
			return 708884155;
	
		case 69:
			return joaat("BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS") /* collision: BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS */;
	
		case 70:
			return -1912136700;
	
		case 71:
			return -1268031552;
	
		case 72:
			return 1177953227;
	
		case 73:
			return 2130805296;
	
		case 74:
			return 38093490;
	
		case 75:
			return -269153218;
	
		case 76:
			return -1995068011;
	
		case 77:
			return -164284834;
	
		case 78:
			return 1446463345;
	
		case 79:
			return 1501315823;
	
		case 80:
			return -750379482;
	
		case 81:
			return -929560937;
	
		case 82:
			return 608323241;
	
		case 83:
			return 1030796013;
	
		case 84:
			return 1915057434;
	
		case 85:
			return -1582276476;
	
		case 86:
			return 692059311;
	
		case 87:
			return 2062839241;
	
		case 88:
			return -1884531872;
	
		case 89:
			return -866434534;
	
		case 90:
			return -1252192421;
	
		case 91:
			return 1243288963;
	
		case 92:
			return -1953772189;
	
		case 93:
			return 754411745;
	
		case 94:
			return 545309006;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

int func_1073(Hash hParam0, Hash hParam1) // Position - 0x20955 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

BOOL func_1074(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x2096F Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

void func_1075(int iParam0, int iParam1) // Position - 0x20986 Hash - 0x18C74423 ^0xA1132A0
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1223212; i = i + 1)
	{
		if (Global_1223212.f_1[i /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[i /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[i /*9*/].f_1 = iParam1;
			}
		
			return;
		}
	}

	func_1151(iParam0, iParam1);
	return;
}

BOOL func_1076(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x209E8 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_1077(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x209FF Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

BOOL func_1078(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x20A16 Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_666(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_670(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

int func_1079(Hash hParam0) // Position - 0x20A5A Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_284(hParam0, 0))
		return 0;

	category = func_1071(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_1080(ePedType eptParam0) // Position - 0x20A89 Hash - 0x5000025C ^0x5000025C
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

void func_1081(Ped pedParam0, Hash hParam1) // Position - 0x20EDC Hash - 0xEA1C858E ^0x2A28D1D1
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_1152(pedParam0, hParam1))
		{
			if (func_1153(pedParam0, hParam1))
			{
				if (func_1154(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_1155(pedParam0);
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

void func_1082(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x20F86 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_1083(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x20FB6 Hash - 0x63B092E5 ^0xED916A69
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
			return true;

	return false;
}

void func_1084(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x20FDE Hash - 0xF3743088 ^0xD7A675F3
{
	if (!_IS_NULL_VECTOR(uParam2))
		TASK::_0x2064B33F6E6B92D4(*uParam0, uParam2);

	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);

	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			break;
	
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
		
			if (iParam10 != 0f)
				TASK::_0xB8E3486D107F4194(*uParam0, iParam10);
			break;
	}

	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}

	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 16384);
			break;
	}

	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}

	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}

	if (iParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
		
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
		
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
		
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
		
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, (80f - 40f) / 2f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
		
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
		
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
		
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
		
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
		
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
		
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
		
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(50f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(75f, 95f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_1156(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
				
					if (iParam5 != 19)
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					else
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, iParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, iParam9);
	}

	return;
}

void func_1085(var uParam0, int iParam1) // Position - 0x2199A Hash - 0x8FE085B4 ^0xC2CC5B51
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
	
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
	
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
	
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
	
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
	
		case 42:
			TASK::_0x19BC99C678FBA139(*uParam0, 2, 1);
			[[fallthrough]];
	
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
	
		case 44:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 46:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
	
		case 47:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 28, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	}

	return;
}

Vector3 func_1086(float fParam0, var uParam1, var uParam2) // Position - 0x220CF Hash - 0xFB6A39D2 ^0x80C9C759
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

BOOL func_1087(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x2210E Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

Vector3 func_1088() // Position - 0x22137 Hash - 0xEE6F6785 ^0xEE6F6785
{
	if (func_95(70))
		return -1634.2521f, -1358.5771f, 83.9077f;

	if (func_95(73))
		return -1665.4187f, -1346.2577f, 84.11175f;

	return -1641.1001f, -1359.9785f, 83.4932f;
}

int func_1089(Hash hParam0) // Position - 0x22184 Hash - 0xCBA0DE6B ^0x3EE4F4A1
{
	if (hParam0 == joaat("a_c_horse_mp_mangy_backup"))
		return joaat("breed_mangy_backup");

	switch (hParam0)
	{
		case joaat("a_c_horse_john_endlesssummer"):
			return joaat("breed_john_endlesssummer");
	
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return joaat("breed_ardennes_irongreyroan");
	
		case joaat("a_c_horse_arabian_black"):
			return joaat("breed_arabian_black");
	
		case joaat("a_c_horse_americanpaint_greyovero"):
			return joaat("breed_americanpaint_greyovero");
	
		case joaat("a_c_horse_thoroughbred_bloodbay"):
			return joaat("breed_thoroughbred_bloodbay");
	
		case joaat("a_c_horse_hungarianhalfbred_liverchestnut"):
			return joaat("breed_hungarianhalfbred_liverchestnut");
	
		case joaat("a_c_horse_gang_bill"):
			return joaat("breed_gang_bill");
	
		case joaat("a_c_horse_gang_sean"):
			return joaat("breed_gang_sean");
	
		case joaat("a_c_horse_suffolkpunch_redchestnut"):
			return joaat("breed_suffolkpunch_redchestnut");
	
		case joaat("a_c_horse_americanpaint_tobiano"):
			return joaat("breed_americanpaint_tobiano");
	
		case joaat("a_c_horse_tennesseewalker_flaxenroan"):
			return joaat("breed_tennesseewalker_flaxenroan");
	
		case joaat("a_c_horse_gang_john"):
			return joaat("breed_gang_john");
	
		case joaat("a_c_horse_turkoman_silver"):
			return joaat("breed_turkoman_silver");
	
		case joaat("a_c_horse_suffolkpunch_sorrel"):
			return joaat("breed_suffolkpunch_sorrel");
	
		case joaat("a_c_horse_appaloosa_leopardblanket"):
			return joaat("breed_appaloosa_leopardblanket");
	
		case joaat("a_c_horse_ardennes_bayroan"):
			return joaat("breed_ardennes_bayroan");
	
		case joaat("a_c_horse_arabian_redchestnut_pc"):
			return joaat("breed_arabian_redchestnut_pc");
	
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
			return joaat("breed_kentuckysaddle_buttermilkbuckskin_pc");
	
		case joaat("a_c_horse_gang_karen"):
			return joaat("breed_gang_karen");
	
		case joaat("a_c_horse_gang_dutch"):
			return joaat("breed_gang_dutch");
	
		case joaat("a_c_horse_eagleflies"):
			return joaat("breed_eagleflies");
	
		case joaat("a_c_horse_missourifoxtrotter_amberchampagne"):
			return joaat("breed_missourifoxtrotter_amberchampagne");
	
		case joaat("a_c_horse_kentuckysaddle_chestnutpinto"):
			return joaat("breed_kentuckysaddle_chestnutpinto");
	
		case joaat("a_c_horse_nokota_whiteroan"):
			return joaat("breed_nokota_whiteroan");
	
		case joaat("a_c_horse_americanstandardbred_black"):
			return joaat("breed_americanstandardbred_black");
	
		case joaat("a_c_horsemule_01"):
			return joaat("breed_mule");
	
		case joaat("a_c_horse_gang_javier"):
			return joaat("breed_gang_javier");
	
		case joaat("a_c_horse_mustang_grullodun"):
			return joaat("breed_mustang_grullodun");
	
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return joaat("breed_missourifoxtrotter_silverdapplepinto");
	
		case joaat("a_c_horse_appaloosa_leopard"):
			return joaat("breed_appaloosa_leopard");
	
		case joaat("a_c_horse_gang_sadie"):
			return joaat("breed_gang_sadie");
	
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
			return joaat("breed_morgan_liverchestnut_pc");
	
		case joaat("a_c_horse_gang_lenny"):
			return joaat("breed_gang_lenny");
	
		case joaat("a_c_horse_morgan_flaxenchestnut"):
			return joaat("breed_morgan_flaxenchestnut");
	
		case joaat("a_c_horse_appaloosa_brownleopard"):
			return joaat("breed_appaloosa_brownleopard");
	
		case joaat("a_c_horse_appaloosa_blacksnowflake"):
			return joaat("breed_appaloosa_blacksnowflake");
	
		case joaat("a_c_horse_gang_micah"):
			return joaat("breed_gang_micah");
	
		case joaat("a_c_horse_arabian_white"):
			return joaat("breed_arabian_white");
	
		case joaat("a_c_horse_murfreebrood_mange_02"):
			return joaat("breed_murfreebrood_mange_02");
	
		case joaat("a_c_horse_hungarianhalfbred_darkdapplegrey"):
			return joaat("breed_hungarianhalfbred_darkdapplegrey");
	
		case joaat("a_c_horse_tennesseewalker_redroan"):
			return joaat("breed_tennesseewalker_redroan");
	
		case joaat("a_c_horse_gang_hosea"):
			return joaat("breed_gang_hosea");
	
		case joaat("a_c_horse_ardennes_strawberryroan"):
			return joaat("breed_ardennes_strawberryroan");
	
		case joaat("a_c_horse_murfreebrood_mange_03"):
			return joaat("breed_murfreebrood_mange_03");
	
		case joaat("a_c_horse_belgian_blondchestnut"):
			return joaat("breed_belgian_blondchestnut");
	
		case joaat("a_c_horse_gang_sadie_endlesssummer"):
			return joaat("breed_gang_sadie_endlesssummer");
	
		case joaat("a_c_horse_gang_charles"):
			return joaat("breed_gang_charles");
	
		case joaat("a_c_horse_thoroughbred_brindle"):
			return joaat("breed_thoroughbred_brindle");
	
		case joaat("a_c_horse_americanstandardbred_silvertailbuckskin"):
			return joaat("breed_americanstandardbred_silvertailbuckskin");
	
		case joaat("a_c_horse_americanpaint_overo"):
			return joaat("breed_americanpaint_overo");
	
		case joaat("a_c_horse_andalusian_darkbay"):
			return joaat("breed_andalusian_darkbay");
	
		case joaat("a_c_horse_missourifoxtrotter_sablechampagne"):
			return joaat("breed_missourifoxtrotter_sablechampagne");
	
		case joaat("a_c_horse_arabian_rosegreybay"):
			return joaat("breed_arabian_rosegreybay");
	
		case joaat("a_c_horse_americanstandardbred_buckskin"):
			return joaat("breed_americanstandardbred_buckskin");
	
		case joaat("a_c_horse_kentuckysaddle_black"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
	
		case joaat("a_c_horse_winter02_01"):
			return joaat("breed_winter02_01");
	
		case joaat("a_c_horse_tennesseewalker_dapplebay"):
			return joaat("breed_tennesseewalker_dapplebay");
	
		case joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"):
			return joaat("breed_hungarianhalfbred_piebaldtobiano");
	
		case joaat("a_c_horse_shire_lightgrey"):
			return joaat("breed_shire_lightgrey");
	
		case joaat("a_c_horse_mustang_tigerstripedbay"):
			return joaat("breed_mustang_tigerstripedbay");
	
		case joaat("a_c_horse_americanstandardbred_palominodapple"):
			return joaat("breed_americanstandardbred_palominodapple");
	
		case joaat("a_c_horse_arabian_grey"):
			return joaat("breed_arabian_grey");
	
		case joaat("a_c_horse_morgan_palomino"):
			return joaat("breed_morgan_palomino");
	
		case joaat("a_c_horse_nokota_reversedappleroan"):
			return joaat("breed_nokota_reversedappleroan");
	
		case joaat("a_c_horse_gang_uncle_endlesssummer"):
			return joaat("breed_gang_uncle_endlesssummer");
	
		case joaat("a_c_horse_tennesseewalker_mahoganybay"):
			return joaat("breed_tennesseewalker_mahoganybay");
	
		case joaat("a_c_horse_mustang_goldendun"):
			return joaat("breed_mustang_goldendun");
	
		case joaat("a_c_horse_buell_warvets"):
			return joaat("breed_buell_warvets");
	
		case joaat("a_c_horsemulepainted_01"):
			return joaat("breed_mule_painted");
	
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
			return joaat("breed_appaloosa_fewspotted_pc");
	
		case joaat("a_c_horse_dutchwarmblood_chocolateroan"):
			return joaat("breed_dutchwarmblood_chocolateroan");
	
		case joaat("a_c_horse_andalusian_perlino"):
			return joaat("breed_andalusian_perlino");
	
		case joaat("a_c_horse_andalusian_rosegray"):
			return joaat("breed_andalusian_rosegray");
	
		case joaat("a_c_horse_shire_ravenblack"):
			return joaat("breed_shire_ravenblack");
	
		case joaat("a_c_horse_dutchwarmblood_sealbrown"):
			return joaat("breed_dutchwarmblood_sealbrown");
	
		case joaat("a_c_horse_thoroughbred_reversedappleblack"):
			return joaat("breed_thoroughbred_reversedappleblack");
	
		case joaat("a_c_horse_murfreebrood_mange_01"):
			return joaat("breed_murfreebrood_mange_01");
	
		case joaat("a_c_horse_belgian_mealychestnut"):
			return joaat("breed_belgian_mealychestnut");
	
		case joaat("a_c_horse_gang_trelawney"):
			return joaat("breed_gang_trelawney");
	
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
			return joaat("breed_tennesseewalker_goldpalomino_pc");
	
		case joaat("a_c_horse_shire_darkbay"):
			return joaat("breed_shire_darkbay");
	
		case joaat("a_c_horse_tennesseewalker_blackrabicano"):
			return joaat("breed_tennesseewalker_blackrabicano");
	
		case joaat("a_c_horse_tennesseewalker_chestnut"):
			return joaat("breed_tennesseewalker_chestnut");
	
		case joaat("a_c_horse_turkoman_darkbay"):
			return joaat("breed_turkoman_darkbay");
	
		case joaat("a_c_horse_gang_kieran"):
			return joaat("breed_gang_kieran");
	
		case joaat("a_c_horse_morgan_bayroan"):
			return joaat("breed_morgan_bayroan");
	
		case joaat("a_c_horse_arabian_redchestnut"):
			return joaat("breed_arabian_redchestnut");
	
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return joaat("breed_arabian_warpedbrindle_pc");
	
		case joaat("a_c_horse_dutchwarmblood_sootybuckskin"):
			return joaat("breed_dutchwarmblood_sootybuckskin");
	
		case joaat("a_c_horse_kentuckysaddle_silverbay"):
			return joaat("breed_kentuckysaddle_silverbay");
	
		case joaat("a_c_horse_turkoman_gold"):
			return joaat("breed_turkoman_gold");
	
		case joaat("a_c_horse_hungarianhalfbred_flaxenchestnut"):
			return joaat("breed_hungarianhalfbred_flaxenchestnut");
	
		case joaat("a_c_horse_gang_uncle"):
			return joaat("breed_gang_uncle");
	
		case joaat("a_c_donkey_01"):
			return joaat("breed_donkey");
	
		case joaat("a_c_horse_americanpaint_splashedwhite"):
			return joaat("breed_americanpaint_splashedwhite");
	
		case joaat("a_c_horse_gang_charles_endlesssummer"):
			return joaat("breed_gang_charles_endlesssummer");
	
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return joaat("breed_thoroughbred_dapplegrey");
	
		case joaat("a_c_horse_americanstandardbred_lightbuckskin"):
			return joaat("breed_americanstandardbred_lightbuckskin");
	
		case joaat("a_c_horse_kentuckysaddle_grey"):
			return joaat("breed_kentuckysaddle_grey");
	
		case joaat("a_c_horse_morgan_bay"):
			return joaat("breed_morgan_bay");
	
		case joaat("a_c_horse_mustang_wildbay"):
			return joaat("breed_mustang_wildbay");
	
		case joaat("a_c_horse_thoroughbred_blackchestnut"):
			return joaat("breed_thoroughbred_blackchestnut");
	
		case joaat("a_c_horse_appaloosa_blanket"):
			return joaat("breed_appaloosa_blanket");
	
		case joaat("a_c_horse_nokota_blueroan"):
			return joaat("breed_nokota_blueroan");
	
		default:
		
	}

	return 0;
}

void func_1090(int iParam0) // Position - 0x2275A Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3135 = iParam0;
	return;
}

BOOL func_1091(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x2276D Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_666(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_1092(Hash hParam0) // Position - 0x22794 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

struct<4> func_1093(BOOL bParam0) // Position - 0x227AF Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_666(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_331(271701509, func_330(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_331(271701509, func_330(bParam0), 12999093, false);
}

BOOL func_1094(Hash hParam0, Hash hParam1) // Position - 0x22813 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_1071(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

void func_1095(Ped pedParam0, float fParam1, Ped pedParam2) // Position - 0x22872 Hash - 0xA05E42F7 ^0x9237B7BD
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (PED::IS_PED_INJURED(pedParam0))
		return;

	if (TASK::IS_PED_IN_WRITHE(pedParam0))
		return;

	PED::_SET_PED_MOTIVATION(pedParam0, 3, fParam1, pedParam2);
	return;
}

struct<4> func_1096(int iParam0) // Position - 0x228B6 Hash - 0x8E70F58C ^0x473A8578
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "TOAST_RPG_LEVEL_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 32);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 32);
	TEXT_LABEL_APPEND_INT(&unk, 0, 32);
	return unk;
}

const char* func_1097(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x228DD Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_1098(Hash hParam0) // Position - 0x228F1 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_potent_horse_stimulant"):
		case joaat("consumable_special_horse_stimulant_crafted"):
			return true;
	}

	return false;
}

int func_1099(int iParam0, int iParam1) // Position - 0x22915 Hash - 0xE1D12727 ^0xA46110B3
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

void func_1100() // Position - 0x22B64 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

int func_1101(Hash hParam0) // Position - 0x22BAB Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_431(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_431(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_431(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_431(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_431(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_431(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

void func_1102(int iParam0) // Position - 0x22CFC Hash - 0x65A082AE ^0x65A082AE
{
	func_1109(iParam0, 8, 6);
	return;
}

void func_1103(int iParam0) // Position - 0x22D0D Hash - 0x20214C72 ^0x20214C72
{
	func_1157(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_1104(int iParam0, int iParam1) // Position - 0x22D22 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_1158(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_1105(Hash hParam0, int iParam1, int iParam2) // Position - 0x22D39 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_1106(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x22D4C Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_1071(hParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_1159(iParam2, 65536) && hParam0->f_1[num2 /*3*/] == -452402570)
	{
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_1104(num2, num3);
	}

	if (func_813(-1586649372) && func_1159(iParam2, 524288))
	{
		num2 = 33;
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_1104(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_1160(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_1160(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (hParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				hParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_1104(num2, num3);
			}
		
			if (hParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_1104(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1104(num2, num3);
			}
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_1161(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_431(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1104(num2, num3);
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
						func_1104(num2, num3);
				}
			
				num2 = 38;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_1104(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_1071(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_1104(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_1161(hParam1) && hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_1071(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_1104(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_1160(hParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_1160(hParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (hParam0->f_1[num /*3*/].f_1 == joaat("base") || hParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1104(num2, num3);
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
						func_1104(num2, num3);
				}
			}
		
			func_1160(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_431(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1104(num2, num3);
			}
			break;
	
		case 1868067663:
			func_1160(hParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1104(num2, num3);
			}
			break;
	}

	switch (func_1071(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_1071(hParam0->f_1[num2 /*3*/]) || func_431(hParam0->f_1[num2 /*3*/], 866047851))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1104(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_1071(hParam0->f_1[num2 /*3*/]))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_1104(num2, num3);
			}
			break;
	}

	return;
}

Hash func_1107(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x23390 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_1162(0);

	if (hParam2 != 0 && func_1163(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_1164(hParam0, func_1099(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_1108(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x233D6 Hash - 0xE06CF505 ^0xBC49746F
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	BOOL flag2;
	int num6;

	flag = func_2() != -1;
	flag2 = func_1162(0);

	if (func_1012(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_1099(num, 1);
		
			if (func_1165(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_1165(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_1166(hParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_1167(hParam0);

	if (num3 > 0)
	{
		if (!func_1012(524288))
		{
			func_1111(524288);
			num2 = num2 - num6;
		}
	
		for (i = num3; i <= 38; i = i + 1)
		{
			num = Global_1946054.f_57.f_430[i];
		
			if (num <= -1 || num >= 39)
			{
			}
			else
			{
				num5 = func_1099(num, 1);
			
				if (func_1165(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_1165(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_1166(hParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						hParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						hParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_1104(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_1114(524288);

	return;
}

void func_1109(int iParam0, int iParam1, int iParam2) // Position - 0x235F3 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_1007(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_1007(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_1007(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_1110(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x23632 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_1168(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_2() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_1169(2, Global_26796.f_776) || Global_1946054.f_1497 != func_1170(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_1170(Global_40.f_7729);
				Global_1946054.f_1378 = func_1170(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1171(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_1172(false, true);

	return;
}

void func_1111(BOOL bParam0) // Position - 0x23751 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_1112(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x23764 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_1173(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_1174(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_1111(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_1173(iParam0))
				return;
		
			func_1174(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_1111(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1016(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_1113(var uParam0) // Position - 0x23970 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_1114(BOOL bParam0) // Position - 0x239CE Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_1115(int iParam0, int iParam1) // Position - 0x239E6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_1116(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x239F5 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_1173(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_1173(20))
				return;
		}
	}

	func_1174(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_1111(8);
	return;
}

void func_1117(Ped pedParam0, Any* panParam1) // Position - 0x23AF9 Hash - 0x2B5AFE28 ^0xF454BB04
{
	var src;
	int i;
	Hash weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	src = 29;
	MISC::COPY_SCRIPT_STRUCT(panParam1, &src, 30);

	for (i = 0; i < 29; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
	
		if (func_1092(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_1118(BOOL bParam0) // Position - 0x23B5E Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_284(hash, 0))
			func_1175(hash, false, bParam0);
	
		Global_1946054.f_2657[i] = 0;
	}

	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
	return;
}

void func_1119(int iParam0) // Position - 0x23BF7 Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_2() == -1)
	{
		func_1176(352481484);
	
		for (i = 0; i < Global_26796.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_26796[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		for (i = 0; i < Global_36638.f_45.f_350.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_36638.f_45.f_350[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_1071(hash) != -999503751)
			func_1177(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_1178(hash, false))
			func_1179(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_1120(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x23DE7 Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_1180(hParam0))
		return;

	hash = func_1071(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_1181(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_1181(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_1181(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_1181(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_1181(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_1181(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_1182(0))
	{
		func_1183(hParam0, true);
	
		if (func_1121() == 1160113249)
			func_1183(func_1182(-2125499975), false);
		else
			func_1183(func_1182(1160113249), false);
	}

	func_1184();

	if (func_1185(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_666(false), hParam0, 0);

	func_1179(hParam0, bParam3);

	if (bParam2)
		func_1172(false, false);

	return;
}

int func_1121() // Position - 0x23F4D Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

void func_1122(Ped pedParam0, var uParam1) // Position - 0x23F5B Hash - 0xEFD384E2 ^0xD2D4DFA3
{
	int i;
	int weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	for (i = 0; i < 29; i = i + 1)
	{
		if (uParam1->[i] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1->[i], 0, false))
				if (func_1186(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

void func_1123(BOOL bParam0) // Position - 0x24006 Hash - 0x970FE035 ^0x92589DF6
{
	func_1187(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

BOOL func_1124(int iParam0) // Position - 0x24039 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_440(iParam0);
	return num == 3 || num == 4;
}

int func_1125() // Position - 0x24057 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_733(func_1188(i), 1, false))
			num = num + 1;
	}

	return num;
}

int func_1126() // Position - 0x2408C Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_1189(Global_40.f_12019);
}

int func_1127() // Position - 0x2409E Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_1188(i);
	
		if (func_733(hash, 1, false) || func_1135(func_1134(hash)))
			num = num + 1;
	}

	return num;
}

int func_1128() // Position - 0x240E7 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_1190(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_1129() // Position - 0x24120 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_1191(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_1130() // Position - 0x24159 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_799(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_1131() // Position - 0x24192 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

int func_1132() // Position - 0x241A4 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_1133(int iParam0) // Position - 0x241B6 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

BOOL func_1134(Hash hParam0) // Position - 0x2426F Hash - 0x6931DCCD ^0x96AB98B4
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return true;
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
	
		default:
		
	}

	return false;
}

BOOL func_1135(BOOL bParam0) // Position - 0x24305 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x24318 Hash - 0xA17D549C ^0xAFCC7800
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
	
		default:
		
	}

	return "";
}

char* func_1137(int iParam0) // Position - 0x243C8 Hash - 0x21CE226B ^0xB73C8C9F
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
	
		case 1:
			return "COL_DB_SEND";
	
		case 2:
			return "COL_DB_COLLECT";
	
		default:
		
	}

	return "";
}

int func_1138(int iParam0) // Position - 0x24403 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	
		case 3:
			return 8;
	
		case 4:
			return 9;
	
		default:
		
	}

	return 5;
}

int func_1139(int iParam0) // Position - 0x24448 Hash - 0x499196F8 ^0x499196F8
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 16;
	
		case 2:
			return 17;
	
		case 3:
			return 18;
	
		case 4:
			return 19;
	
		default:
		
	}

	return 15;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0x24491 Hash - 0xA17D549C ^0xF70875D
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return "COL_RO_CLAMSHELL_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
	
		case joaat("provision_ro_flower_acunas_star"):
			return "COL_RO_ACUNAS_STAR_FOUND";
	
		case joaat("provision_ro_flower_cigar"):
			return "COL_RO_CIGAR_FOUND";
	
		case joaat("provision_ro_flower_rat_tail"):
			return "COL_RO_RAT_TAIL_FOUND";
	
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
	
		case joaat("provision_ro_flower_night_scented"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
	
		case joaat("provision_ro_flower_lady_of_night"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
	
		case joaat("provision_ro_flower_sparrows"):
			return "COL_RO_SPARROWS_FOUND";
	
		case joaat("provision_ro_flower_queens"):
			return "COL_RO_QUEENS_FOUND";
	
		case joaat("provision_ro_flower_spider"):
			return "COL_RO_SPIDER_FOUND";
	
		case joaat("provision_ro_flower_dragons"):
			return "COL_RO_DRAGONS_FOUND";
	
		case joaat("provision_ro_flower_lady_slipper"):
			return "COL_RO_LADY_SLIPPER_FOUND";
	
		case joaat("provision_ro_flower_moccasin"):
			return "COL_RO_MOCCASIN_FOUND";
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
	
		case joaat("provision_ro_flower_ghost"):
			return "COL_RO_GHOST_FOUND";
	
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
	
		default:
		
	}

	return "";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x2459F Hash - 0xA17D549C ^0xA58444E9
{
	switch (hParam0)
	{
		case joaat("legendary_fish_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
	
		case joaat("legendary_fish_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
	
		case joaat("legendary_fish_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
	
		case joaat("legendary_fish_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
	
		case joaat("legendary_fish_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
	
		case joaat("legendary_fish_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
	
		case joaat("legendary_fish_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
	
		case joaat("legendary_fish_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
	
		case joaat("legendary_fish_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
	
		case joaat("legendary_fish_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
	
		case joaat("legendary_fish_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
	
		default:
		
	}

	return "";
}

char* func_1142(int iParam0) // Position - 0x2465C Hash - 0x21CE226B ^0x6B6580ED
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
	
		case 1:
			return "COL_RC_SEND";
	
		case 2:
			return "COL_RC_COLLECT";
	
		default:
		
	}

	return "";
}

BOOL func_1143(Hash hParam0) // Position - 0x24697 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_1192(hParam0) && func_733(hParam0, 1, false))
		return true;
	else if (func_1193(hParam0) && func_1194(hParam0))
		return true;

	return false;
}

char* func_1144(Hash hParam0) // Position - 0x246D5 Hash - 0x9E507475 ^0x1E2FFD12
{
	if (!func_284(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_947(hParam0));
}

int func_1145(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x246F9 Hash - 0x51CE9407 ^0x19439D00
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam7;
	num.f_1 = sParam8;
	num.f_2 = sParam9;
	num.f_3 = iParam11;
	num.f_4 = iParam4;
	num.f_4.f_1 = iParam6;
	num.f_4.f_2 = sParam5;
	num2.f_7 = 1;
	num2 = iParam10;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

int func_1146(int iParam0) // Position - 0x24770 Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

BOOL func_1147(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x24783 Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

char* func_1148(int iParam0) // Position - 0x247AF Hash - 0x632600A ^0xC59C0547
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "HealthCoreValue";
			break;
	
		case 1:
			str = "StaminaCoreValue";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

char* func_1149(int iParam0) // Position - 0x247E8 Hash - 0x632600A ^0x2E75E076
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "isLowHealthCoreActive";
			break;
	
		case 1:
			str = "isLowStaminaCoreActive";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

float func_1150(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x24821 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_1151(int iParam0, int iParam1) // Position - 0x2483F Hash - 0x26256B16 ^0x79A35F4E
{
	int i;
	int num;

	if (iParam0 == -1)
		return;

	if (Global_1223212 < 20)
	{
		Global_1223212 = Global_1223212 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223212.f_1[i /*9*/] = { Global_1223212.f_1[i + 1 /*9*/] };
		}
	}

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;
	Global_1223212.f_1[Global_1223212 - 1 /*9*/] = { num };
	return;
}

BOOL func_1152(Ped pedParam0, Hash hParam1) // Position - 0x248BC Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_1153(Ped pedParam0, Hash hParam1) // Position - 0x248EA Hash - 0xA54F3032 ^0x6F8AF6BE
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

BOOL func_1154(Ped pedParam0, Hash hParam1) // Position - 0x2493B Hash - 0xA54F3032 ^0x6F8AF6BE
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_1152(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_1155(Ped pedParam0) // Position - 0x249AD Hash - 0x446F1BDD ^0x724A99BA
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

float func_1156(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x249CB Hash - 0x3A11F625 ^0x3A11F625
{
	float num;

	num = fParam0;
	num = num + (fParam2 * (float)iParam3);

	if (num > fParam1)
		num = fParam1;

	return num;
}

void func_1157(int iParam0, int iParam1) // Position - 0x249F0 Hash - 0x19A9221A ^0x79EEA925
{
	int i;
	int num;
	var unk;
	var unk3;

	unk = 39;
	unk3 = 10;
	unk3.f_1 = 39;
	unk3.f_1.f_2 = 39;
	unk3.f_1.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;

	for (i = 0; i < 10; i = i + 1)
	{
		if (i < *iParam0)
		{
			if (func_1195(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_1195(&iParam0->f_2[i /*2*/], 1))
					func_1196(&iParam0->f_2[i /*2*/], 2, 6);
			
				unk3[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { unk3[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_1158(int iParam0, int iParam1, int iParam2) // Position - 0x24B1C Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_1197(iParam0, 1))
		func_1198(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_1159(int iParam0, Hash hParam1) // Position - 0x24B63 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && hParam1 != false;
}

void func_1160(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x24B7C Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_1104(num2, num);
	
		if (bParam1)
			func_1104(num4, num);
	}

	if (hParam0->f_1[num3 /*3*/].f_1 == -1333118809 || hParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		hParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_1104(num3, num);
	}

	return;
}

BOOL func_1161(Hash hParam0) // Position - 0x24C68 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_1162(int iParam0) // Position - 0x24CAB Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_1121();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_1163(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x24CD1 Hash - 0x3A135443 ^0x969430D9
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, bParam3); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, bParam3) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_1164(Hash hParam0, int iParam1, var uParam2) // Position - 0x24D15 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_1165(int iParam0, int iParam1) // Position - 0x24D26 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_1007(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_1166(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x24D44 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_1007(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_1012(524288))
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

	num = num + PED::_0x31B2E7F2E3C58B89(hParam0, joaat("base"), bParam2, bParam3);
	return num;
}

int func_1167(Hash hParam0) // Position - 0x24DAF Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_1168(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24DFA Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_2() == -1)
		func_1199(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_1200(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_1169(BOOL bParam0, eStackSize essParam1) // Position - 0x24E70 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_2() == -1)
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

Hash func_1170(eStackSize essParam0) // Position - 0x24EED Hash - 0xB8EC44B7 ^0xE877E9C4
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

void func_1171(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x25422 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_1201(&(Global_1946054.f_1378), essParam0);
	func_1202(2, essParam0, 6);

	if (bParam1)
		func_1172(false, true);

	return;
}

void func_1172(BOOL bParam0, BOOL bParam1) // Position - 0x2544A Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_1203(0);

	if (bParam0)
	{
		func_1111(8);
		func_1111(512);
	}
	else
	{
		func_1111(8);
		func_1111(16);
	}

	return;
}

BOOL func_1173(int iParam0) // Position - 0x2547D Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_1174(int iParam0) // Position - 0x25492 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_1175(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x254B2 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_1071(hParam0))
	{
		case -2061583405:
			flag = func_1204(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_1204(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_1204(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_1204(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_1204(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_1204(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_1184();

	if (bParam1)
		func_1172(false, false);

	return;
}

void func_1176(int iParam0) // Position - 0x2557F Hash - 0x958E8FB2 ^0x9CA4541C
{
	int num;
	int num2;
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk = { func_950(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_952(&unk, &num, &num2, false))
	{
		if (num2 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
	
		func_954(num);
	}

	return;
}

void func_1177(var uParam0, Hash hParam1, int iParam2) // Position - 0x25649 Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_1205(iParam2, *uParam0);
	func_1206(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_1178(Hash hParam0, BOOL bParam1) // Position - 0x2567F Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_955(hParam0, false, false) };
	guid = { func_331(hParam0, unk, unk.f_4, false) };

	if (func_332(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_666(false), &guid, bParam1);
	return true;
}

void func_1179(Hash hParam0, BOOL bParam1) // Position - 0x256CB Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_955(hParam0, false, false) };
	guid = { func_331(hParam0, unk, unk.f_4, false) };

	if (func_332(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_666(false), &guid, bParam1);
	return;
}

BOOL func_1180(Hash hParam0) // Position - 0x25715 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_2() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_1181(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2573E Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_1207(hash, &unk))
		return 0;

	if (bParam3 && !func_1178(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_1071(hParam0) != -999503751)
		func_1177(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_1182(int iParam0) // Position - 0x257E6 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_1121();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_1183(Hash hParam0, BOOL bParam1) // Position - 0x25811 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_955(hParam0, false, false) };
	guid = { func_331(hParam0, unk, unk.f_4, false) };

	if (func_332(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_666(false), &guid);
	return 1;
}

void func_1184() // Position - 0x2585D Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_2() == -1)
	{
		for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
		{
			Global_26796[i] = Global_1946054.f_2657[i];
		}
	
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		Global_36638.f_45.f_350[i] = Global_1946054.f_2657[i];
	}

	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
	return;
}

BOOL func_1185(Hash hParam0) // Position - 0x25993 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_1209(func_1208(hParam0));
}

BOOL func_1186(Hash hParam0) // Position - 0x259A5 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

void func_1187(BOOL bParam0) // Position - 0x259CD Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

Hash func_1188(int iParam0) // Position - 0x259E0 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

int func_1189(BOOL bParam0) // Position - 0x25A99 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_1190(Hash hParam0) // Position - 0x25ABE Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_1191(Hash hParam0) // Position - 0x25ACE Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_1192(Hash hParam0) // Position - 0x25ADE Hash - 0xB8632262 ^0xB8632262
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
	
		default:
		
	}

	return false;
}

int func_1193(Hash hParam0) // Position - 0x25B85 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1194(Hash hParam0) // Position - 0x25BBE Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_1210(&entity, 0, i, &model) && !func_1210(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_1211(entity, &model);
		
			if (func_284(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

BOOL func_1195(var uParam0, int iParam1) // Position - 0x25C2A Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_1196(var uParam0, int iParam1, int iParam2) // Position - 0x25C3B Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_1197(int iParam0, int iParam1) // Position - 0x25C4E Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_1198(int iParam0, int iParam1) // Position - 0x25C5F Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_1199(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x25C72 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1200(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x25CCD Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1201(Hash hParam0, eStackSize essParam1) // Position - 0x25D37 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_2() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *hParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_1199(&hParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_1200(&hParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_1202(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x25DD2 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_2() == -1)
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

void func_1203(int iParam0) // Position - 0x25E5A Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_1204(Hash hParam0, int iParam1) // Position - 0x25E6B Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_1207(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_1071(hParam0) != -999503751)
			func_1212(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_1071(hParam0) != -999503751)
		func_1212(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_1178(hParam0, true);
	return 1;
}

void func_1205(int iParam0, int iParam1) // Position - 0x25F51 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1206(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x25F6A Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_1213(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_1007(func_1214(hParam1), 1);
		uParam0->f_1 == -1;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}

	uParam0->f_2 = iParam4;
	*uParam0 = hParam1;
	uParam0->f_3 = 0;

	if (bParam3)
		func_1215(uParam0);

	return;
}

BOOL func_1207(Hash hParam0, var uParam1) // Position - 0x25FC6 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

int func_1208(Hash hParam0) // Position - 0x26006 Hash - 0x497B15BA ^0x497B15BA
{
	switch (hParam0)
	{
		case -2061583405:
			return 2;
	
		case -1719060085:
			return 16;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 4;
	
		case -413129408:
			return 32;
	
		case 81053684:
			return 8;
	
		default:
		
	}

	return 0;
}

BOOL func_1209(int iParam0) // Position - 0x26056 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

BOOL func_1210(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x2606E Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_71(iParam1) && !func_380(iParam1))
		ped = func_88(iParam1);
	else
		return false;

	func_272(uParam3);
	num = func_273(iParam2);

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		return false;

	*uParam0 = unk.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
		return false;

	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*uParam0);
	return true;
}

void func_1211(Entity eParam0, var uParam1) // Position - 0x2610D Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_276(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_277(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_1212(int iParam0, int iParam1, int iParam2) // Position - 0x26157 Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_1216(iParam1);
	func_1217(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_1218(&(iParam0->f_26), num2);
	
		if (func_1219(iParam0->f_26, &num))
			func_1220(num, num2);
	}

	return;
}

void func_1213(var uParam0) // Position - 0x261A0 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1221(&(uParam0->f_3));
	return;
}

int func_1214(Hash hParam0) // Position - 0x261BE Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_955(hParam0, true, false) };
	return func_1008(unk.f_4);
}

void func_1215(var uParam0) // Position - 0x261DA Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_1222(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

int func_1216(int iParam0) // Position - 0x261FB Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1217(int iParam0, int iParam1) // Position - 0x26212 Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_1218(var uParam0, int iParam1) // Position - 0x2625A Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_1213(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_1219(int iParam0, var uParam1) // Position - 0x2628B Hash - 0xE231A73F ^0x924E070C
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*uParam1] == iParam0)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_1220(int iParam0, int iParam1) // Position - 0x262CF Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1221(var uParam0) // Position - 0x262E8 Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_1222(var uParam0, Any anParam1, int iParam2) // Position - 0x26314 Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_1223(func_1121());

	if (*uParam0)
		func_1221(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_2() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_1223(int iParam0) // Position - 0x2634B Hash - 0xB4860741 ^0xB4860741
{
	if (func_2() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
		
			case -449205311:
				return 0;
		
			case 1160113249:
				return 0;
		
			default:
			
		}
	
		return 0;
	}

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
	
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
	
		default:
		
	}

	return 0;
}

