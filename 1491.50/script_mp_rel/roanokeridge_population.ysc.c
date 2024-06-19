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
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	Volume volLocal_22 = 0;
	Volume volLocal_23 = 0;
	Volume volLocal_24 = 0;
	Volume volLocal_25 = 0;
	Volume volLocal_26 = 0;
	Volume volLocal_27 = 0;
	Volume volLocal_28 = 0;
	Volume volLocal_29 = 0;
	Volume volLocal_30 = 0;
	Volume volLocal_31 = 0;
	Entity eLocal_32 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x9E079EE0 ^0x9E079EE0
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	fLocal_16 = 7f;
	fLocal_17 = 0f;
	fLocal_18 = 0f;
	fLocal_19 = 100f;
	fLocal_20 = 100f;
	fLocal_21 = 0f;
	func_1();
	func_2();
	func_3();
	flag = true;

	while (flag)
	{
		if (func_4() != -1)
		{
			Global_1896646.f_51 = NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(Global_1896646.f_42);
		
			if (func_5(true, true))
				flag = false;
		}
		else
		{
			func_6();
		}
	
		BUILTIN::WAIT(0);
	}

	func_7();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x77 Hash - 0x93CB8779 ^0xB3D1DA9
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
		func_7();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0xB0 Hash - 0xA6D34823 ^0x90D5E97A
{
	Vector3 vector;
	Vector3 vector2;

	vector = { fLocal_16, fLocal_17, fLocal_18 };
	vector2 = { fLocal_19, fLocal_20, fLocal_21 };
	FLOCK::_0xF2CCA7B68CFAB2B9(joaat("SPECIES_BIRD_CROW"), 2638.8f, 1972.1f, 185.1f, vector, vector2, 9.5f, 50f, 1f, 6f);
	return;
}

void func_3() // Position - 0xF8 Hash - 0x767976BA ^0x3C9A320C
{
	volLocal_22 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	func_8(volLocal_22);
	volLocal_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2930f, 1360f, 75f, 0f, 0f, 0f, 170f, 170f, 75f, "m_volAnnesburg_Restriction");
	func_9(volLocal_23);
	volLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2350f, 1370f, 105f, 0f, 0f, 0f, 35f, 35f, 15f, "m_volBeaverHollow_Restriction");
	func_9(volLocal_24);
	volLocal_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2590f, 827.5f, 85f, 0f, 0f, 0f, 80f, 80f, 20f, "m_volButchersCreek_Restriction");
	func_9(volLocal_25);
	volLocal_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2270f, -95f, 45f, 0f, 0f, 0f, 65f, 65f, 15f, "m_volMacleansHouse_Restriction");
	func_8(volLocal_26);
	volLocal_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3085f, 2232.5f, 210f, 0f, 0f, 7f, 130f, 150f, 75f, "m_volRockySeven_Restriction");
	func_10(volLocal_27, 0, false);
	volLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2965f, 475f, 45f, 0f, 0f, 0f, 75f, 75f, 15f, "m_volTallulahJetty_Restriction");
	func_10(volLocal_28, 0, false);
	volLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2518.25f, 2293f, 185.25f, 0f, 0f, 0f, 40f, 40f, 25f, "m_volTeslaLab_Restriction");
	func_10(volLocal_29, 0, false);
	volLocal_30 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2964f, 780f, 52f, 0f, 0f, 0f, 45f, 35f, 25f, "m_volVanHornHorseShop_Restriction");
	func_10(volLocal_30, 0, false);
	return;
}

int func_4() // Position - 0x2B7 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_5(BOOL bParam0, BOOL bParam1) // Position - 0x2C5 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_6() // Position - 0x3A5 Hash - 0x9B9E88BD ^0x962E7CB2
{
	PersChar persChar;
	PersChar persChar2;

	if (MISC::GET_FRAME_COUNT() % 20 != 0)
		return;

	persChar = PERSCHAR::_0x112DDF56300BC6E5(joaat("ROA_MLH_RANCHHAND"));
	persChar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("ROA_MLH_RANCHHAND_2"));

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar) || !PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar2))
		return;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar) && PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar2))
		if (!func_11(2024769126))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(516817794, Global_34))
				func_12(2024769126);
	else if (func_11(2024769126))
		if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(516817794, Global_34))
			func_13(2024769126);

	return;
}

void func_7() // Position - 0x451 Hash - 0x2C60AF32 ^0xA0E24420
{
	func_14();
	FLOCK::_0xFB16F08F47B83B4C(joaat("SPECIES_BIRD_CROW"));
	return;
}

void func_8(Volume volParam0) // Position - 0x466 Hash - 0x14EA5472 ^0xD9C3A23E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);
	return;
}

void func_9(Volume volParam0) // Position - 0x4A7 Hash - 0xAE5E218A ^0x11F4FAD4
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);
	return;
}

void func_10(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x4EE Hash - 0x70E2F07C ^0x478B1462
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_15(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

BOOL func_11(int iParam0) // Position - 0x56D Hash - 0x319C5EC2 ^0xB18B248
{
	int num;
	int num2;
	int offset;

	num = func_16(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_17(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_18(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

void func_12(int iParam0) // Position - 0x5EC Hash - 0x42AEEE5A ^0xDFF1629D
{
	int num;
	int num2;
	int offset;

	num = func_16(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_13(int iParam0) // Position - 0x61F Hash - 0x42AEEE5A ^0xD77F9173
{
	int num;
	int num2;
	int offset;

	num = func_16(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_14() // Position - 0x652 Hash - 0xD5200358 ^0x69AD9EE4
{
	if (ENTITY::DOES_ENTITY_EXIST(eLocal_32))
		VEHICLE::DELETE_VEHICLE(&eLocal_32);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_31))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(volLocal_31);
		VOLUME::DELETE_VOLUME(volLocal_31);
	}

	return;
}

void func_15(var uParam0, int iParam1) // Position - 0x67E Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_16(int iParam0, int iParam1) // Position - 0x693 Hash - 0xC0F3E3A4 ^0x6F5CEED
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

BOOL func_17(int iParam0) // Position - 0x1F38 Hash - 0xA3250C27 ^0x2A3A4993
{
	int num;

	num = func_19(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_18(int iParam0) // Position - 0x1F55 Hash - 0xAD766E45 ^0x511834A9
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

int func_19(int iParam0) // Position - 0x1F6C Hash - 0x3620388 ^0x3620388
{
	return func_20(iParam0) + 30;
}

int func_20(int iParam0) // Position - 0x1F7C Hash - 0x4BF88485 ^0x4BF88485
{
	return iParam0 * 31;
}

