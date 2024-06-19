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
	Volume volLocal_19 = 0;
	Volume volLocal_20 = 0;
	Volume volLocal_21 = 0;
	var uLocal_22 = 3;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	const char* sLocal_26 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x3B873CC3 ^0x581DCE60
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
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
	
		func_7();
		BUILTIN::WAIT(0);
	}

	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x61 Hash - 0x93CB8779 ^0xB3D1DA9
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
		func_8();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0x9A Hash - 0xB7C83EEB ^0x7C344500
{
	volLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3685.4233f, -2597.155f, -10f, 0f, 0f, -24.789701f, 116.63651f, 76.68949f, 15f, "m_volArmadillo_Restriction");
	func_9(volLocal_16);
	volLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4800.448f, -2704.913f, 28.17212f, 0f, 0f, -47.250004f, 134.75f, 95.75f, 50f, "m_VolRidgewoodFarm_Restriction");
	func_10(volLocal_17);
	volLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3959.882f, -2132.151f, -5.324f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volTwinRocks_Restriction");
	func_10(volLocal_18);
	return;
}

void func_3() // Position - 0x139 Hash - 0xAF5F9E63 ^0xC46843C1
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_11() && !func_12())
		{
			volLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardThreat");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, -3960.03f, -2122.22f, -4.99f, 0f, 0f, 51f, 4.85f, 7.96f, 13.94f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, -3955.38f, -2127.12f, -4.19f, 0f, 0f, 51f, 7.61f, 7.5f, 12.32f);
			volLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRestricted");
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_20, volLocal_21);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, -3962.87f, -2135.84f, -5.32f, 0f, 0f, 0f, 27f, 27f, 20f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, -3934.91f, -2138.85f, -5.32f, 0f, 0f, 0f, 10f, 10f, 20f);
			volLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRegistration");
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_19, volLocal_20);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, -3959.88f, -2132.15f, -5.32f, 0f, 0f, 0f, 50f, 50f, 20f);
			sLocal_26 = "TWIN_ROCKS";
			LAW::_CREATE_GUARD_ZONE(sLocal_26);
			LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_26, volLocal_19);
			LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_26, volLocal_20);
			LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_26, volLocal_20);
			LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_26, volLocal_21);
		}
	}

	return;
}

int func_4() // Position - 0x27C Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_5(BOOL bParam0, BOOL bParam1) // Position - 0x28A Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_6() // Position - 0x36A Hash - 0x765940CD ^0x523EAE1C
{
	PersChar persChar;
	PersChar persChar2;
	PersChar persChar3;
	PersChar persChar4;

	if (MISC::GET_FRAME_COUNT() % 20 != 0)
		return;

	persChar = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_OWNER"));
	persChar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_WIFE"));
	persChar3 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_RANCHHAND_1"));
	persChar4 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_RANCHHAND_2"));

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar4))
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar4) && func_13(-154581735))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_34))
				func_14(-154581735);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar3))
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar3) && func_13(-154581735))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_34))
				func_14(-154581735);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar2))
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar2) && func_13(-154581735))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_34))
				func_14(-154581735);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar) && func_13(-154581735))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_34))
				func_14(-154581735);
		else if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar) && !func_13(-154581735))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_34))
				func_15(-154581735);

	return;
}

void func_7() // Position - 0x4D2 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_8() // Position - 0x4DA Hash - 0x484CC27F ^0x1B062EB6
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_26);
	func_16();
	return;
}

void func_9(Volume volParam0) // Position - 0x4EC Hash - 0x84C5D4FF ^0x54901B26
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, volParam0);
	return;
}

void func_10(Volume volParam0) // Position - 0x52D Hash - 0xAE5E218A ^0x11F4FAD4
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);
	return;
}

BOOL func_11() // Position - 0x574 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_12() // Position - 0x585 Hash - 0x11DC3931 ^0xA685465E
{
	return DLC::IS_DLC_PRESENT(joaat("dlc_ultimateedition"));
}

BOOL func_13(int iParam0) // Position - 0x596 Hash - 0x319C5EC2 ^0xB18B248
{
	int num;
	int num2;
	int offset;

	num = func_17(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_18(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_19(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

void func_14(int iParam0) // Position - 0x615 Hash - 0x42AEEE5A ^0xD77F9173
{
	int num;
	int num2;
	int offset;

	num = func_17(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_15(int iParam0) // Position - 0x648 Hash - 0x42AEEE5A ^0xDFF1629D
{
	int num;
	int num2;
	int offset;

	num = func_17(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_16() // Position - 0x67B Hash - 0xB233E26A ^0xBD691B65
{
	func_20(-1745210725);
	func_20(-1096712211);
	func_20(-1941005496);
	func_20(1898267848);
	func_20(974280355);
	func_20(1756181464);
	func_20(-72482077);
	func_20(1941336822);
	func_20(1710282603);
	func_20(-1122265410);
	func_20(1309948033);
	func_20(-935952905);
	func_20(712371053);
	func_20(-752772715);
	func_20(503623514);
	func_20(-407026996);
	func_20(574303518);
	func_20(-1029093195);
	func_20(-1325390493);
	func_20(-1622834706);
	func_20(257582350);
	func_20(-39730787);
	func_20(-1438901569);
	func_20(-772691681);
	func_20(1011350990);
	func_20(705321299);
	func_20(-2110850686);
	func_20(32078073);
	func_20(-1142062162);
	func_20(1007204499);
	func_20(34346755);
	func_20(482102371);
	func_20(-502343927);
	func_20(112916013);
	func_20(-1443390498);
	func_20(689576469);
	func_20(-1750010031);
	func_20(-1725439174);
	func_20(1857654366);
	func_20(2095655613);
	func_20(1049317994);
	func_20(-279038963);
	func_20(161441935);
	func_20(-820561187);
	func_20(-1268841107);
	func_20(-280121448);
	func_20(2087785010);
	func_20(1065585604);
	func_20(-175048740);
	func_20(-482127039);
	func_20(-1603458673);
	uLocal_22[0] = 0;
	uLocal_22[1] = 0;
	uLocal_22[2] = 0;
	return;
}

int func_17(int iParam0, int iParam1) // Position - 0x860 Hash - 0xC0F3E3A4 ^0x6F5CEED
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

BOOL func_18(int iParam0) // Position - 0x2105 Hash - 0xA3250C27 ^0x2A3A4993
{
	int num;

	num = func_21(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_19(int iParam0) // Position - 0x2122 Hash - 0xAD766E45 ^0x511834A9
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

void func_20(Hash hParam0) // Position - 0x2139 Hash - 0x6C79B149 ^0x6F4E7B45
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_22(hParam0);

	return;
}

int func_21(int iParam0) // Position - 0x2151 Hash - 0x3620388 ^0x3620388
{
	return func_23(iParam0) + 30;
}

int func_22(Hash hParam0) // Position - 0x2161 Hash - 0xC7B42F6B ^0x68D64A95
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_24())
		return 0;

	STREAMING::REMOVE_IPL_HASH(hParam0);
	return 0;
}

int func_23(int iParam0) // Position - 0x2189 Hash - 0x4BF88485 ^0x4BF88485
{
	return iParam0 * 31;
}

BOOL func_24() // Position - 0x2195 Hash - 0x4C1900E6 ^0x4C1900E6
{
	return func_25() == 4;
}

int func_25() // Position - 0x21A3 Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

