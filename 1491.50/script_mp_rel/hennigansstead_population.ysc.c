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
	Volume volLocal_16 = 0;
	Volume volLocal_17 = 0;
	Volume volLocal_18 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x990E7449 ^0xAD768FE
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	func_2();
	flag = true;

	while (flag)
	{
		if (func_3() != -1)
		{
			Global_1896646.f_51 = NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(Global_1896646.f_42);
		
			if (func_4(true, true))
				flag = false;
		}
		else
		{
			func_5();
		}
	
		BUILTIN::WAIT(0);
	}

	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x59 Hash - 0x93CB8779 ^0xB3D1DA9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		func_6();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0x92 Hash - 0x565E83B5 ^0x6C03AF84
{
	volLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2395f, -2410f, 35f, 0f, 0f, 0f, 150f, 120f, 50f, "m_volMacFarlanesRanch_Restriction");
	func_7(volLocal_16);
	volLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1405.3989f, -2279.2266f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLanding_Restriction");
	func_8(volLocal_17, 0, false);
	volLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStillwaterCreek_Aquatic_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, -1747.279f, -2431.148f, 38f, 0f, 0f, -18f, 20f, 50f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, -1800.6526f, -2314.105f, 38f, 0f, 0f, 15f, 60f, 25f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, -1787.1283f, -2348.8904f, 38f, 0f, 0f, -36f, 20f, 20f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, -1668.2153f, -2341.46f, 38f, 0f, 0f, 25f, 25f, 15f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, -1671.0461f, -2320.505f, 38f, 0f, 0f, 6f, 20f, 20f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, -1666.0933f, -2360.3157f, 38f, 0f, 0f, 25f, 20f, 15f, 20f);
	func_9(volLocal_18);
	return;
}

int func_3() // Position - 0x208 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_4(BOOL bParam0, BOOL bParam1) // Position - 0x216 Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				if (!bParam0)
					return true;
				break;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			default:
				return true;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

void func_5() // Position - 0x2F6 Hash - 0x32F8D651 ^0x71336155
{
	PersChar persChar;
	PersChar persChar2;
	PersChar persChar3;
	PersChar persChar4;
	PersChar persChar5;
	PersChar persChar6;

	if (MISC::GET_FRAME_COUNT() % 20 != 0)
		return;

	persChar = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_BLACKSMITH"));
	persChar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCHER"));
	persChar3 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND"));
	persChar4 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND_2"));
	persChar5 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND_3"));
	persChar6 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND_4"));

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar) || !PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar2) || !PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar3) || !PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar4) || !PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar5) || !PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar6))
		return;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar) && PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar2) && PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar3) && PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar4) && PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar5) && PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar6))
		if (!func_10(1167397384))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(1736386364, Global_34))
				func_11(1167397384);
	else if (func_10(1167397384))
		if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(1736386364, Global_34))
			func_12(1167397384);

	return;
}

void func_6() // Position - 0x42E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_7(Volume volParam0) // Position - 0x436 Hash - 0xAE5E218A ^0x11F4FAD4
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);
	return;
}

void func_8(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x47D Hash - 0x7087DF6F ^0x70765503
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_13(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_9(Volume volParam0) // Position - 0x4F3 Hash - 0x84C5D4FF ^0x7D12B93C
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228767, 0, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228767, 0, 0, -1, -1, volParam0);
	return;
}

BOOL func_10(int iParam0) // Position - 0x534 Hash - 0x319C5EC2 ^0xB18B248
{
	int num;
	int num2;
	int offset;

	num = func_14(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_15(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_16(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

void func_11(int iParam0) // Position - 0x5B3 Hash - 0x42AEEE5A ^0xDFF1629D
{
	int num;
	int num2;
	int offset;

	num = func_14(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_12(int iParam0) // Position - 0x5E6 Hash - 0x42AEEE5A ^0xD77F9173
{
	int num;
	int num2;
	int offset;

	num = func_14(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_13(var uParam0, int iParam1) // Position - 0x619 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_14(int iParam0, int iParam1) // Position - 0x62E Hash - 0xC0F3E3A4 ^0x6F5CEED
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
	
		case -2141419899:
			return 404;
	
		case -2106445152:
			return 277;
	
		case -2106214197:
			return 102;
	
		case -2101264851:
			return 192;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
	
		case -2073072369:
			return 57;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
	
		case -2058120606:
			return 194;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 90;
	
		case -2022369555:
			return 251;
	
		case -2021582629:
			return 110;
	
		case -2020023971:
			return 263;
	
		case -1957523409:
			return 205;
	
		case -1952856164:
			return 163;
	
		case -1949204933:
			return 261;
	
		case joaat("ws_mp_camp_defend_radleys_pasture"):
			return 387;
	
		case -1939389836:
			return 416;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
	
		case -1852605133:
			return 10;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
	
		case -1847672446:
			return 312;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
	
		case -1840704908:
			return 274;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_15(int iParam0) // Position - 0x1ED3 Hash - 0xA3250C27 ^0x2A3A4993
{
	int num;

	num = func_17(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_16(int iParam0) // Position - 0x1EF0 Hash - 0xAD766E45 ^0x511834A9
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

int func_17(int iParam0) // Position - 0x1F07 Hash - 0x3620388 ^0x3620388
{
	return func_18(iParam0) + 30;
}

int func_18(int iParam0) // Position - 0x1F17 Hash - 0x4BF88485 ^0x4BF88485
{
	return iParam0 * 31;
}

