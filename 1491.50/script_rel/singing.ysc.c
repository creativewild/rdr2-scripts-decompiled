#region Local Var
	var uLocal_0 = 24;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
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
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
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
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	BOOL bLocal_101 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x949C9E2E ^0x1328DA1E
{
	var unk;

	bLocal_101 = true;
	func_1();
	func_2();

	while (true)
	{
		if (func_3() || !func_4(&unk, &bLocal_101, false))
			func_5();
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x3A Hash - 0x80C10FC2 ^0x907BDC09
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_5();

	return;
}

void func_2() // Position - 0x50 Hash - 0xC8462D17 ^0x1A131CBD
{
	TEXT_LABEL_ASSIGN_STRING(&uLocal_98, func_6(Global_1935630.f_57), 24);
	func_7(&uLocal_0, Global_35, "ARTHUR", false);
	func_8(&uLocal_0, uLocal_98, false, -1, false, false);
	AUDIO::START_AUDIO_SCENE("player_idle_singing_scene");
	Global_1935630.f_54 = MISC::GET_GAME_TIMER();
	Global_1935630.f_57 = Global_1935630.f_57 + 1;

	if (Global_1935630.f_57 >= 2)
		Global_1935630.f_57 = 0;

	return;
}

BOOL func_3() // Position - 0xB1 Hash - 0x352EE1D9 ^0xCD7928A6
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uLocal_98))
		return !func_9(&uLocal_98);

	return true;
}

BOOL func_4(var uParam0, var uParam1, BOOL bParam2) // Position - 0xCE Hash - 0x5F774CCA ^0x5F774CCA
{
	BOOL num;
	Ped mount;
	var outEntity;

	num = 1;
	*uParam0 = 0;
	*uParam1 = 1;

	if (func_10(0))
		num = 0;

	if (!bParam2)
		if (func_11())
			num = 0;

	if (func_12() || func_13() || func_14(&Global_1393447, 16))
	{
		*uParam0 = 1;
		*uParam1 = 0;
		num = 0;
	}

	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!bParam2)
		{
			if (!PED::IS_PED_IN_ANY_BOAT(Global_35))
			{
				Global_1935630.f_55 = MISC::GET_GAME_TIMER();
				num = 0;
			}
		}
	}
	else
	{
		mount = PED::GET_MOUNT(Global_35);
	
		if (!PED::IS_PED_INJURED(mount))
			if (TASK::IS_PED_SPRINTING(mount) || func_15(mount))
				num = 0;
	
		if (PED::IS_PED_FALLING(mount))
		{
			num = 0;
			*uParam0 = 1;
			*uParam1 = 0;
		}
	}

	if (PED::IS_PED_FALLING(Global_35))
	{
		num = 0;
		*uParam0 = 1;
		*uParam1 = 0;
	}

	if (!bParam2)
		if (Global_1935630.f_55 + 30000 > MISC::GET_GAME_TIMER())
			num = 0;

	if (func_16(true) > 0)
		num = 0;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, true, true))
	{
		num = 0;
		*uParam1 = 0;
	}

	if (!bParam2)
	{
		if (!func_18(func_17()))
			num = 0;
	
		if (func_19(128))
			num = 0;
	}

	if (func_20(PLAYER::PLAYER_ID(), true, false, true))
	{
		*uParam0 = 1;
		num = 0;
		*uParam1 = 0;
	}

	if (Global_1935630.f_28 + 30000 > MISC::GET_GAME_TIMER())
	{
		*uParam0 = 1;
		num = 0;
		*uParam1 = 0;
	}

	if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) + 30000f > (float)MISC::GET_GAME_TIMER())
	{
		*uParam0 = 1;
		num = 0;
		*uParam1 = 0;
	}

	if (bParam2)
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) || ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		{
			*uParam0 = 1;
			num = 0;
			*uParam1 = 1;
		}
	}

	if (!bParam2)
	{
		if (func_21() != -1)
		{
			if (func_22(func_21()))
				*uParam0 = 1;
		
			num = 0;
		}
	}

	return num;
}

void func_5() // Position - 0x2A3 Hash - 0x588F7CB7 ^0xA55F8E0B
{
	Global_1935630.f_56 = 0;
	AUDIO::STOP_AUDIO_SCENE("player_idle_singing_scene");

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uLocal_98))
		if (func_9(&uLocal_98))
			func_23(&uLocal_98, bLocal_101, false);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

char* func_6(int iParam0) // Position - 0x2D8 Hash - 0xBACF1F8C ^0xBACF1F8C
{
	switch (iParam0)
	{
		case 0:
			return "ARTSO_JACKHALL";
	
		case 1:
			return "ARTSO_KEYHOLE";
	
		default:
		
	}

	return "";
}

void func_7(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x303 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_24(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

BOOL func_8(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x360 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_25(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

BOOL func_9(const char* sParam0) // Position - 0x3BA Hash - 0xD575FF96 ^0x7987930F
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(sParam0))
		return true;

	return false;
}

BOOL func_10(int iParam0) // Position - 0x3DB Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_26())
		return false;

	return func_27(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_11() // Position - 0x3FD Hash - 0x3630EC94 ^0x3630EC94
{
	return func_28() || func_29();
}

BOOL func_12() // Position - 0x413 Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

BOOL func_13() // Position - 0x421 Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1310750.f_16077 != 0;
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x432 Hash - 0x718DD1EF ^0xD9260236
{
	return iParam0->f_2 && iParam1 != false;
}

BOOL func_15(Ped pedParam0) // Position - 0x443 Hash - 0x52B322EA ^0x7B2B0A1E
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

int func_16(BOOL bParam0) // Position - 0x47E Hash - 0x7F08FD3B ^0xE97B69AA
{
	int num;
	int numberOfFollowers;
	var hasLeader;
	int i;
	Ped pedAsGroupMember;

	if (bParam0)
		return func_30(Global_1359489.f_4);

	PED::GET_GROUP_SIZE(func_31(), &hasLeader, &numberOfFollowers);

	if (numberOfFollowers == 0)
		return 0;

	for (i = 0; i < numberOfFollowers; i = i + 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_31(), i);
	
		if (func_32(pedAsGroupMember))
			num = num + 1;
	}

	return num;
}

var func_17() // Position - 0x4DE Hash - 0x1372AFBD ^0xAE723118
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	var unk;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.75f)
		unk = weatherType1;
	else
		unk = weatherType2;

	return unk;
}

BOOL func_18(int iParam0) // Position - 0x508 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("highpressure"):
		case joaat("SUNNY"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_19(int iParam0) // Position - 0x529 Hash - 0x259E3CFD ^0x259E3CFD
{
	int num;

	if (iParam0 == -1)
		return true;

	if (iParam0 == 0)
		return false;

	num = func_34(func_33());

	if (func_35(iParam0, 1))
		if (num >= 6 && num < 12)
			return true;

	if (func_35(iParam0, 2))
		if (num >= 12 && num < 18)
			return true;

	if (func_35(iParam0, 4096))
		if (num >= 11 && num < 14)
			return true;

	if (func_35(iParam0, 4))
		if (num >= 18 && num < 24)
			return true;

	if (func_35(iParam0, 8))
		if (num >= 0 && num < 6)
			return true;

	if (func_35(iParam0, 16))
		if (num >= 20 || num < 7)
			return true;

	if (func_35(iParam0, 1024))
		if (num >= 5 && num < 12)
			return true;

	if (func_35(iParam0, 32))
		if (num >= 5 && num < 22)
			return true;

	if (func_35(iParam0, 64))
		if (num >= 6 && num < 20)
			return true;

	if (func_35(iParam0, 128))
		if (num >= 21 || num < 5)
			return true;

	if (func_35(iParam0, 256))
		if (num >= 22 && num < 24)
			return true;

	if (func_35(iParam0, 512))
		if (num >= 0 && num < 5)
			return true;

	if (func_35(iParam0, 8192))
		if (num >= 6 && num < 20)
			return true;

	if (func_35(iParam0, 2048))
		if (num >= 1 && num < 3)
			return true;

	if (func_35(iParam0, 16384))
		if (num >= 6 && num < 24)
			return true;

	if (func_35(iParam0, 32768))
		if (num >= 21 || num < 6)
			return true;

	if (func_35(iParam0, 65536))
		if (num >= 18 && num < 19)
			return true;

	return false;
}

BOOL func_20(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x77D Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_36(bParam1, bParam2, bParam3);

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

eStackSize func_21() // Position - 0x8B2 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_22(eStackSize essParam0) // Position - 0x8C0 Hash - 0x97598EC0 ^0xADF7FB13
{
	if (!func_37(essParam0))
		return false;

	return Global_1888801[essParam0 /*35*/].f_20 == 1 || Global_1888801[essParam0 /*35*/].f_20 == 2 && !func_38(essParam0);
}

void func_23(const char* sParam0, BOOL bParam1, BOOL bParam2) // Position - 0x900 Hash - 0xB845AB0C ^0x67608E5F
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, bParam1, bParam2);
	return;
}

BOOL func_24(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x913 Hash - 0xFB1C2C0E ^0x6794528D
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < uParam0->f_97 && !flag; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(uParam0->[i /*4*/].f_1)))
		{
			uParam0->[i /*4*/] = pedParam1;
			flag = true;
		}
	}

	if (!flag)
	{
		if (uParam0->f_97 < 24)
		{
			uParam0->[uParam0->f_97 /*4*/] = pedParam1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[uParam0->f_97 /*4*/].f_1), sParam2, 24);
			uParam0->f_97 = uParam0->f_97 + 1;
			flag = true;
		}
	}

	return flag;
}

void func_25(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x991 Hash - 0xFDACD718 ^0x658C9335
{
	int i;

	for (i = 0; i < uParam3->f_97; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3->[i /*4*/]))
			if (!ENTITY::IS_ENTITY_DEAD(uParam3->[i /*4*/]))
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3->[i /*4*/], &(uParam3->[i /*4*/].f_1));
	}

	return;
}

BOOL func_26() // Position - 0x9E3 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_39() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_27(int iParam0, BOOL bParam1) // Position - 0xA08 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_40(iParam0))
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

BOOL func_28() // Position - 0xA39 Hash - 0xEBB05467 ^0xEBB05467
{
	return Global_1935436 == 1;
}

BOOL func_29() // Position - 0xA47 Hash - 0x893CA78F ^0x893CA78F
{
	return Global_1935436 == 2;
}

int func_30(BOOL bParam0) // Position - 0xA55 Hash - 0xB9596906 ^0xEA13D3DB
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_41(&flag, -2147483648);
	}
	else
	{
		num = 0;
	}

	while (flag > false)
	{
		flag = flag && flag - 1;
		num = num + 1;
	}

	return num;
}

int func_31() // Position - 0xA95 Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_32(Ped pedParam0) // Position - 0xAA5 Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_39() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

eStackSize func_33() // Position - 0xAFE Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_34(eStackSize essParam0) // Position - 0xB0A Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

BOOL func_35(int iParam0, int iParam1) // Position - 0xB1D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_36(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB2C Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_37(eStackSize essParam0) // Position - 0xBCA Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_38(eStackSize essParam0) // Position - 0xBE0 Hash - 0x43A4311 ^0x43A4311
{
	if (essParam0 == 22 || essParam0 == 37 && !func_26())
		return true;

	if (essParam0 == 61)
		return true;

	return false;
}

BOOL func_39() // Position - 0xC15 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

int func_40(int iParam0) // Position - 0xC23 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_42(iParam0))
		return -1;

	return func_43(iParam0);
}

void func_41(var uParam0, int iParam1) // Position - 0xC3F Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_42(int iParam0) // Position - 0xC54 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < &func_7;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_43(int iParam0) // Position - 0xC87 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_44(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_44(int iParam0) // Position - 0xCC8 Hash - 0x6EC15CF9 ^0xE613EBE0
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

