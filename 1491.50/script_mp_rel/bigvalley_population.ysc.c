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
	Volume volLocal_32 = 0;
	Volume volLocal_33 = 0;
	Volume volLocal_34 = 0;
	Volume volLocal_35 = 0;
	Volume volLocal_36 = 0;
	Volume volLocal_37 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x19C333EA ^0x439DCAD1
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

	if (func_4() == -1)
	{
		PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("GLO_WILDERNESS_TRAPPER"), "BigValley/BGV_Trapper_1");
	
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER"))))
			PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER")));
	}

	func_5();
	flag = true;

	while (flag)
	{
		if (func_4() != -1)
		{
			Global_1896646.f_51 = NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(Global_1896646.f_42);
		
			if (func_6(true, true))
				flag = false;
		}
		else
		{
			func_7();
		}
	
		BUILTIN::WAIT(0);
	}

	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xAB Hash - 0x93CB8779 ^0xB3D1DA9
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

void func_2() // Position - 0xE4 Hash - 0xA6D34823 ^0x90D5E97A
{
	Vector3 vector;
	Vector3 vector2;

	vector = { fLocal_16, fLocal_17, fLocal_18 };
	vector2 = { fLocal_19, fLocal_20, fLocal_21 };
	FLOCK::_0xF2CCA7B68CFAB2B9(joaat("SPECIES_BIRD_CROW"), -1927.9534f, 412.0278f, 180f, vector, vector2, 9.5f, 50f, 1f, 6f);
	return;
}

void func_3() // Position - 0x12C Hash - 0xA165ADEA ^0x93E4741B
{
	volLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFortRiggsRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, -1560f, -935f, 85f, 0f, 0f, 0f, 50f, 55f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, -1567.5f, -907.5f, 85f, 0f, 0f, 40f, 50f, 40f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, -1605f, -882.5f, 85f, 0f, 0f, 0f, 50f, 30f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, -1577f, -885.5f, 85f, 0f, 0f, -25.5f, 21f, 30f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, -1602.5f, -917.5f, 85f, 0f, 0f, 0f, 35f, 40f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, -1592.5f, -935.5f, 85f, 0f, 0f, 55f, 35f, 43f, 20f);
	func_9(volLocal_22, 0, false);
	volLocal_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2180f, 750f, 125f, 0f, 0f, 0f, 90f, 90f, 25f, "m_volHangingDogRanchRestriction");
	func_9(volLocal_23, 0, false);
	volLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-865f, -760f, 75f, 0f, 0f, 0f, 60f, 60f, 30f, "m_volLoneMuleSteadRestriction");
	func_9(volLocal_24, 0, false);
	volLocal_25 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1898f, -238.5f, 188f, 0f, 0f, 16.5f, 14f, 59f, 24.5f, "m_volMountainRiverRestriction");
	func_9(volLocal_25, 0, false);
	volLocal_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1897.5f, 1370f, 215f, 0f, 0f, 0f, 75f, 75f, 25f, "m_volNorthernMiningTownRestriction");
	func_9(volLocal_26, 0, false);
	volLocal_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-617f, -40.2f, 80f, 0f, 0f, 0f, 43.7f, 43.7f, 13f, "m_volPaintedSkyRestriction");
	func_9(volLocal_27, 0, false);
	volLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1825f, 655f, 120f, 0f, 0f, 0f, 45f, 45f, 20f, "m_volWatsonsCabinRestriction");
	func_9(volLocal_28, 0, false);
	volLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1554f, 257.4f, 116f, 0f, 0f, 14f, 45f, 45f, 25f, "m_volShepherdsRiseRestriction");
	func_9(volLocal_29, 0, false);
	volLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStrawberryRestriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, -1820f, -365f, 170f, 0f, 0f, 0f, 80f, 80f, 50f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, -1765f, -420f, 170f, 0f, 0f, 0f, 80f, 80f, 50f);
	func_10(volLocal_30);
	volLocal_31 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1813.34f, -580.26f, 150f, 0f, 0f, 65f, 52f, 31f, 25f, "m_volStrawberryHorseShopRestriction");
	func_10(volLocal_31);

	if (func_11())
	{
		volLocal_32 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volPronghornRanchRestriction");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -2530.598f, 340.663f, 153f, 0f, 0f, 0f, 22f, 22f, 15f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -2530.057f, 471.4158f, 153f, 0f, 0f, 0f, 30f, 30f, 15f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -2590.521f, 470.2267f, 153f, 0f, 0f, 0f, 30f, 30f, 15f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -2572.795f, 343.0885f, 153f, 0f, 0f, 0f, 31f, 31f, 15f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -2541.9644f, 408.2656f, 153f, 0f, 0f, -3.75f, 75f, 132f, 30f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -2574.9944f, 411.63504f, 153f, 0f, 0f, 7.5f, 75f, 128f, 30f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -2555.3384f, 340.02466f, 153f, 0f, 0f, 9.25f, 43f, 50f, 30f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -2559.6157f, 476.0391f, 153f, 0f, 0f, 1.5f, 61f, 50f, 30f);
		func_9(volLocal_32, 0, false);
	}

	volLocal_33 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1301.288f, 403.2579f, 102.4782f, 0f, 0f, -27f, 15f, 25f, 15f, "m_volWallaceStationRestriction");
	func_9(volLocal_33, 0, false);
	volLocal_34 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIslandRestriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_34, 237.21304f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.43071f, 81.38799f, 25.722523f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_34, -401.96164f, -1012.6383f, 42.9804f, 0f, 0f, -51.00734f, 240.53346f, 103.68801f, 24.89919f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_34, 440.32156f, -1462.0266f, 55.90892f, 0f, 0f, 13.402258f, 421.29385f, 982.8425f, 99.70844f);
	func_12(volLocal_34, 0, false);
	volLocal_35 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2172.987f, -253.5375f, 195f, 0f, 0f, -6f, 11f, 15f, 10f, "m_volRockCarvingsRestriction");
	func_9(volLocal_35, 0, false);
	volLocal_36 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBardsCrossingRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_36, -730.6474f, -548.06537f, 77.02292f, 0f, 0f, 26.999998f, 353.06906f, 8.967957f, 13.352211f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_36, -892.47064f, -627.4682f, 77.269936f, 0f, 0f, 18.919636f, 20.999908f, 7.632857f, 11.381501f);
	func_13(volLocal_36, 0, false);
	volLocal_37 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1716f, -309.8f, 179.6f, 0f, 0f, 0f, 15f, 15f, 10f, "m_volNaturalistWakeUp");
	func_9(volLocal_37, 0, false);
	return;
}

int func_4() // Position - 0x72D Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

void func_5() // Position - 0x73B Hash - 0xC536968E ^0xB5A4D129
{
	func_14(1963415953, 1);
	func_14(-1447214344, 1);
	return;
}

BOOL func_6(BOOL bParam0, BOOL bParam1) // Position - 0x757 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_7() // Position - 0x837 Hash - 0xC2B6ABC ^0xAB97B079
{
	PersChar persChar;

	if (MISC::GET_FRAME_COUNT() % 20 != 0)
		return;

	persChar = PERSCHAR::_0x112DDF56300BC6E5(joaat("pai_ranchhand_02"));

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
		if (!func_15(976539083))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(71064384, Global_34))
				func_16(976539083);
	else if (func_15(976539083))
		if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(71064384, Global_34))
			func_17(976539083);

	return;
}

void func_8() // Position - 0x8C0 Hash - 0x221E018B ^0x9CCF2CD2
{
	FLOCK::_0xFB16F08F47B83B4C(joaat("SPECIES_BIRD_CROW"));
	return;
}

void func_9(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x8D1 Hash - 0x70E2F07C ^0x478B1462
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_18(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_10(Volume volParam0) // Position - 0x950 Hash - 0x84C5D4FF ^0x54901B26
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, volParam0);
	return;
}

BOOL func_11() // Position - 0x991 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

void func_12(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x99A Hash - 0x749033A ^0xC3DF4340
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_18(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_13(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0xA10 Hash - 0x7087DF6F ^0x70765503
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_18(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_14(Hash hParam0, int iParam1) // Position - 0xA86 Hash - 0x1879777F ^0x1879777F
{
	func_19(hParam0, true, 0, false, false, 0, false, false);
	return;
}

BOOL func_15(int iParam0) // Position - 0xA9B Hash - 0x319C5EC2 ^0xB18B248
{
	int num;
	int num2;
	int offset;

	num = func_20(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_21(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_22(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

void func_16(int iParam0) // Position - 0xB1A Hash - 0x42AEEE5A ^0xDFF1629D
{
	int num;
	int num2;
	int offset;

	num = func_20(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_17(int iParam0) // Position - 0xB4D Hash - 0x42AEEE5A ^0xD77F9173
{
	int num;
	int num2;
	int offset;

	num = func_20(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0xB80 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_19(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0xB95 Hash - 0xD777F4CF ^0xBFF3124C
{
	func_23(hParam0, false, false);

	if (func_24(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_25(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_26(hParam0, true);
			else
				func_27(hParam0, true);
		else
			func_28(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_29())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

int func_20(int iParam0, int iParam1) // Position - 0xC20 Hash - 0xC0F3E3A4 ^0x6F5CEED
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

BOOL func_21(int iParam0) // Position - 0x24C5 Hash - 0xA3250C27 ^0x2A3A4993
{
	int num;

	num = func_30(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_22(int iParam0) // Position - 0x24E2 Hash - 0xAD766E45 ^0x511834A9
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

Hash func_23(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24F9 Hash - 0xEC5804B5 ^0xE95C34A9
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_24(Hash hParam0) // Position - 0x259D Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_31(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

void func_25(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x25B8 Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_24(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_26(Hash hParam0, BOOL bParam1) // Position - 0x25F0 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_24(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_27(Hash hParam0, BOOL bParam1) // Position - 0x261E Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_24(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_28(Hash hParam0, BOOL bParam1) // Position - 0x264C Hash - 0x4844A91D ^0x50E23246
{
	if (func_24(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_29() // Position - 0x267A Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

int func_30(int iParam0) // Position - 0x2683 Hash - 0x3620388 ^0x3620388
{
	return func_32(iParam0) + 30;
}

BOOL func_31(Hash hParam0) // Position - 0x2693 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

int func_32(int iParam0) // Position - 0x269F Hash - 0x4BF88485 ^0x4BF88485
{
	return iParam0 * 31;
}

