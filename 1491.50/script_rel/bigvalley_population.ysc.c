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
	var uLocal_24 = 1;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	Volume volLocal_32 = 0;
	Volume volLocal_33 = 0;
	Volume volLocal_34 = 0;
	Volume volLocal_35 = 0;
	Volume volLocal_36 = 0;
	Volume volLocal_37 = 0;
	Volume volLocal_38 = 0;
	Volume volLocal_39 = 0;
	Volume volLocal_40 = 0;
	Volume volLocal_41 = 0;
	Volume volLocal_42 = 0;
	Volume volLocal_43 = 0;
	Volume volLocal_44 = 0;
	Volume volLocal_45 = 0;
	Volume volLocal_46 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x68313A1 ^0x68313A1
{
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_26 = 7f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	fLocal_29 = 100f;
	fLocal_30 = 100f;
	fLocal_31 = 0f;
	func_1();
	func_2();
	func_3();
	func_4(&uLocal_14, 3);

	if (func_5() == -1)
	{
		PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("GLO_WILDERNESS_TRAPPER"), "BigValley/BGV_Trapper_1");
	
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER"))))
			PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER")));
	}

	flag = true;

	while (flag)
	{
		func_6(&uLocal_14);
		func_7();
		BUILTIN::WAIT(0);
	}

	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x8D Hash - 0x93CB8779 ^0xB3D1DA9
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

void func_2() // Position - 0xC6 Hash - 0xA6D34823 ^0x90D5E97A
{
	Vector3 vector;
	Vector3 vector2;

	vector = { fLocal_26, fLocal_27, fLocal_28 };
	vector2 = { fLocal_29, fLocal_30, fLocal_31 };
	FLOCK::_0xF2CCA7B68CFAB2B9(joaat("SPECIES_BIRD_CROW"), -1927.9534f, 412.0278f, 180f, vector, vector2, 9.5f, 50f, 1f, 6f);
	return;
}

void func_3() // Position - 0x10E Hash - 0xA165ADEA ^0x93E4741B
{
	volLocal_32 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFortRiggsRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -1560f, -935f, 85f, 0f, 0f, 0f, 50f, 55f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -1567.5f, -907.5f, 85f, 0f, 0f, 40f, 50f, 40f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -1605f, -882.5f, 85f, 0f, 0f, 0f, 50f, 30f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -1577f, -885.5f, 85f, 0f, 0f, -25.5f, 21f, 30f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -1602.5f, -917.5f, 85f, 0f, 0f, 0f, 35f, 40f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, -1592.5f, -935.5f, 85f, 0f, 0f, 55f, 35f, 43f, 20f);
	func_9(volLocal_32, 0, false, true);
	volLocal_33 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2212.3535f, 708.96265f, 124.40494f, 0f, 0f, 11.499843f, 68.16475f, 52.09315f, 21.009512f, "m_volHangingDogRanchRestriction");
	func_9(volLocal_33, 0, false, true);
	volLocal_34 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-865f, -760f, 75f, 0f, 0f, 0f, 60f, 60f, 30f, "m_volLoneMuleSteadRestriction");
	func_9(volLocal_34, 0, false, true);
	volLocal_35 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1898f, -238.5f, 188f, 0f, 0f, 16.5f, 14f, 59f, 24.5f, "m_volMountainRiverRestriction");
	func_9(volLocal_35, 0, false, true);
	volLocal_36 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1897.5f, 1370f, 215f, 0f, 0f, 0f, 75f, 75f, 25f, "m_volNorthernMiningTownRestriction");
	func_9(volLocal_36, 0, false, true);
	volLocal_37 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-617f, -40.2f, 80f, 0f, 0f, 0f, 43.7f, 43.7f, 13f, "m_volPaintedSkyRestriction");
	func_9(volLocal_37, 0, false, true);
	volLocal_38 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1825f, 655f, 120f, 0f, 0f, 0f, 45f, 45f, 20f, "m_volWatsonsCabinRestriction");
	func_9(volLocal_38, 0, false, true);
	volLocal_39 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1554f, 257.4f, 116f, 0f, 0f, 14f, 45f, 45f, 25f, "m_volShepherdsRiseRestriction");
	func_9(volLocal_39, 0, false, true);
	volLocal_40 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStrawberryRestriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_40, -1820f, -365f, 170f, 0f, 0f, 0f, 80f, 80f, 50f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_40, -1765f, -420f, 170f, 0f, 0f, 0f, 80f, 80f, 50f);
	func_10(volLocal_40, true);
	volLocal_41 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1813.34f, -580.26f, 150f, 0f, 0f, 65f, 52f, 31f, 25f, "m_volStrawberryHorseShopRestriction");
	func_10(volLocal_41, true);

	if (func_11())
	{
		volLocal_42 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volPronghornRanchRestriction");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_42, -2530.598f, 340.663f, 153f, 0f, 0f, 0f, 22f, 22f, 15f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_42, -2530.057f, 471.4158f, 153f, 0f, 0f, 0f, 30f, 30f, 15f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_42, -2590.521f, 470.2267f, 153f, 0f, 0f, 0f, 30f, 30f, 15f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_42, -2572.795f, 343.0885f, 153f, 0f, 0f, 0f, 31f, 31f, 15f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_42, -2541.9644f, 408.2656f, 153f, 0f, 0f, -3.75f, 75f, 132f, 30f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_42, -2574.9944f, 411.63504f, 153f, 0f, 0f, 7.5f, 75f, 128f, 30f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_42, -2555.3384f, 340.02466f, 153f, 0f, 0f, 9.25f, 43f, 50f, 30f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_42, -2559.6157f, 476.0391f, 153f, 0f, 0f, 1.5f, 61f, 50f, 30f);
		func_9(volLocal_42, 0, false, true);
	}

	volLocal_43 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1301.288f, 403.2579f, 102.4782f, 0f, 0f, -27f, 15f, 25f, 15f, "m_volWallaceStationRestriction");
	func_9(volLocal_43, 0, false, true);
	volLocal_44 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIslandRestriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 237.21304f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.43071f, 81.38799f, 25.722523f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, -401.96164f, -1012.6383f, 42.9804f, 0f, 0f, -51.00734f, 240.53346f, 103.68801f, 24.89919f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 440.32156f, -1462.0266f, 55.90892f, 0f, 0f, 13.402258f, 421.29385f, 982.8425f, 99.70844f);
	func_12(volLocal_44, 0, false, true);
	volLocal_45 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2172.987f, -253.5375f, 195f, 0f, 0f, -6f, 11f, 15f, 10f, "m_volRockCarvingsRestriction");
	func_9(volLocal_45, 0, false, true);
	volLocal_46 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBardsCrossingRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_46, -730.6474f, -548.06537f, 77.02292f, 0f, 0f, 26.999998f, 353.06906f, 8.967957f, 13.352211f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_46, -892.47064f, -627.4682f, 77.269936f, 0f, 0f, 18.919636f, 20.999908f, 7.632857f, 11.381501f);
	func_13(volLocal_46, 0, false, true);

	if (func_5() == -1)
		func_14();

	return;
}

void func_4(var uParam0, int iParam1) // Position - 0x6FB Hash - 0x14D831A2 ^0x6022E62
{
	uParam0->f_1 = iParam1;
	*uParam0 = 0;
	uParam0->f_2 = func_15(iParam1);
	uParam0->f_5 = { func_16(iParam1) };
	return;
}

BOOL func_5() // Position - 0x723 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_6(var uParam0) // Position - 0x731 Hash - 0xBB372775 ^0x177430E5
{
	float num;

	switch (*uParam0)
	{
		case 0:
			num = func_17(Global_35, uParam0->f_5, true);
		
			if (num > BUILTIN::POW(400f, 2f) || num < BUILTIN::POW(100f, 2f))
				return;
		
			if (func_18(uParam0->f_1))
				func_19(uParam0, 1);
			else
				func_19(uParam0, 6);
			break;
	
		case 1:
			TASK::SET_SCENARIO_GROUP_ENABLED("Special_Ambient_Horse", true);
			STREAMING::REQUEST_MODEL(func_20(uParam0->f_1), false);
			PED::_RESERVE_AMBIENT_PEDS(1);
			uParam0->f_9 = 1;
			func_19(uParam0, 2);
			break;
	
		case 2:
			if (!STREAMING::HAS_MODEL_LOADED(func_20(uParam0->f_1)))
				return;
		
			if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
				return;
		
			num = func_17(Global_35, uParam0->f_5, true);
		
			if (num < BUILTIN::POW(100f, 2f))
			{
				func_21(uParam0);
				func_19(uParam0, 6);
				return;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				uParam0->f_3 = func_22(func_20(uParam0->f_1), uParam0->f_5, 0, false, true, uParam0->f_2, false, false, false, false, true, false, false);
				return;
			}
		
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, false);
			func_23(uParam0);
			func_19(uParam0, 3);
			[[fallthrough]];
	
		case 3:
			func_24(uParam0->f_3);
			PED::_UPDATE_PED_VARIATION(uParam0->f_3, false, true, true, true, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, false);
			FLOCK::_SET_ANIMAL_IS_WILD(uParam0->f_3, true);
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_3, -1, uParam0->f_4, 0, 0);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 44, 5f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 45, 40f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 35, 5f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 36, 20f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, true);
			ENTITY::_SET_ENTITY_FADE_IN(uParam0->f_3);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_20(uParam0->f_1));
			func_19(uParam0, 4);
			break;
	
		case 4:
			if (func_25(uParam0))
				func_19(uParam0, 5);
			break;
	
		case 5:
			func_26(uParam0->f_1);
			uParam0->f_8 = 1;
			func_21(uParam0);
			func_19(uParam0, 6);
			break;
	
		case 6:
			break;
	}

	return;
}

void func_7() // Position - 0x947 Hash - 0x3504B9BF ^0x76200C01
{
	PersChar persChar;
	PersChar persChar2;
	PersChar persChar3;

	if (MISC::GET_FRAME_COUNT() % 20 != 0)
		return;

	if (func_27(8))
	{
		persChar = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_PAI_RANCHHAND_01"));
		persChar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("pai_ranchhand_02"));
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar) || !PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar2))
			return;
	
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar) && PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar2))
			if (!func_28(976539083))
				if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(71064384, Global_36))
					func_29(976539083);
		else if (func_28(976539083))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(71064384, Global_36))
				func_30(976539083);
	}
	else
	{
		persChar3 = PERSCHAR::_0x112DDF56300BC6E5(joaat("pai_ranchhand_02"));
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar3))
			return;
	
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar3))
			if (!func_28(976539083))
				if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(71064384, Global_36))
					func_29(976539083);
		else if (func_28(976539083))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(71064384, Global_36))
				func_30(976539083);
	}

	return;
}

void func_8() // Position - 0xA72 Hash - 0x69E33C40 ^0x7088AAA4
{
	func_21(&uLocal_14);
	FLOCK::_0xFB16F08F47B83B4C(joaat("SPECIES_BIRD_CROW"));

	if (func_5() == -1)
		func_31();

	return;
}

void func_9(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA95 Hash - 0xAB9EF6C3 ^0x6AF001EA
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_32(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_10(Volume volParam0, BOOL bParam1) // Position - 0xB19 Hash - 0xBEDD85C3 ^0x76253760
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, volParam0);

	return;
}

BOOL func_11() // Position - 0xB5F Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_5() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

void func_12(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB84 Hash - 0xA0926E1 ^0x971FFD25
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_32(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_13(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xBFF Hash - 0x28C5CE40 ^0xE969725E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_32(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_14() // Position - 0xC7A Hash - 0xAB9F32E6 ^0xBD9092C7
{
	int num;

	num = 7;
	uLocal_24[0] = VOLUME::_CREATE_VOLUME_LOCK(-771.731f, -7.501f, 75.411f, 8f, num, 16384);
	return;
}

int func_15(int iParam0) // Position - 0xCA7 Hash - 0x2B6E690 ^0x2B6E690
{
	int num;

	num = 2;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
			if (func_33())
				num = 1;
			break;
	}

	return num;
}

Vector3 func_16(int iParam0) // Position - 0xCED Hash - 0x563C355B ^0x563C355B
{
	switch (iParam0)
	{
		case 1:
			return 2681.1729f, 1935.7806f, 101.8587f;
	
		case 3:
			return -2828.7214f, -422.1472f, 186.4498f;
	
		case 4:
			return 289.5062f, 2288.3237f, 313.0248f;
	
		case 5:
			return -1940.045f, 1743.1727f, 234.54808f;
	
		case 6:
			return -3916.1182f, -3672.3738f, 47.1305f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

float func_17(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xD78 Hash - 0x1A58F423 ^0x2317B76D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_34(entityCoords, vParam1);
}

BOOL func_18(int iParam0) // Position - 0xDC8 Hash - 0xF4891FF8 ^0xF4891FF8
{
	Hash hash;
	int num;

	if (func_5() != -1)
		return false;

	if (!func_35(15))
		return false;

	hash = func_20(iParam0);

	if (func_36(hash))
		if (!func_37())
			return false;

	num = Global_40.f_11945[iParam0];
	func_39(&num, 0, 0, 0, func_38(iParam0), 0, 0, false);

	if (!func_40(num, true))
		return false;

	if (func_41(iParam0))
		return false;

	return true;
}

void func_19(var uParam0, int iParam1) // Position - 0xE42 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

ePedType func_20(int iParam0) // Position - 0xE4F Hash - 0xF10AB031 ^0x3529F5B1
{
	switch (iParam0)
	{
		case 0:
			return joaat("a_c_horse_americanpaint_splashedwhite");
	
		case 1:
			return joaat("a_c_horse_andalusian_perlino");
	
		case 2:
			return joaat("a_c_horse_appaloosa_fewspotted_pc");
	
		case 3:
			return joaat("a_c_horse_arabian_redchestnut_pc");
	
		case 4:
			return joaat("a_c_horse_arabian_warpedbrindle_pc");
	
		case 5:
			return joaat("a_c_horse_arabian_white");
	
		case 6:
			return joaat("a_c_horse_mustang_tigerstripedbay");
	
		default:
		
	}

	return 0;
}

void func_21(var uParam0) // Position - 0xEC2 Hash - 0x82985C28 ^0x957259AB
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (uParam0->f_8)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
			uParam0->f_8 = 0;
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_3));
		}
	
		uParam0->f_3 = 0;
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
		VOLUME::DELETE_VOLUME(uParam0->f_4);

	if (uParam0->f_9)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Special_Ambient_Horse", false);
		PED::_UNRESERVE_AMBIENT_PEDS(1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_20(uParam0->f_1));
		uParam0->f_9 = 0;
	}

	return;
}

Ped func_22(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0xF32 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_42(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_23(var uParam0) // Position - 0xF74 Hash - 0xBB5003A ^0x36248B6E
{
	float num;
	Vector3 vector;

	num = func_43(uParam0->f_1);
	vector = { num, num, num };
	uParam0->f_4 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_5, func_44(), vector, "Special Ambient Horse Unalerted");
	return;
}

void func_24(Ped pedParam0) // Position - 0xFAA Hash - 0x4C9A12AA ^0x5B9D01EA
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

BOOL func_25(var uParam0) // Position - 0x1028 Hash - 0x7DFFEA8D ^0xA8B72821
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_3, true))
		return true;

	if (PED::IS_PED_RESPONDING_TO_THREAT(uParam0->f_3))
		return true;

	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, joaat("event_animal_detected_threat")))
		return true;

	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, joaat("EVENT_ANIMAL_TAMING_CALLOUT")))
		return true;

	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, joaat("EVENT_PLAYER_IN_CLOSE_PROXIMITY_TO_HORSE")))
		return true;

	if (func_41(uParam0->f_1))
		return true;

	return false;
}

void func_26(int iParam0) // Position - 0x10AB Hash - 0x107F0910 ^0x107F0910
{
	Global_40.f_11945[iParam0] = func_45();
	return;
}

BOOL func_27(int iParam0) // Position - 0x10C1 Hash - 0xD4333B2B ^0x519A5C88
{
	if (!func_46(iParam0))
		return true;

	return func_47(Global_1392626[iParam0 /*32*/].f_3, true);
}

BOOL func_28(int iParam0) // Position - 0x10E6 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_48(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

void func_29(int iParam0) // Position - 0x1135 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_48(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::SET_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	
		MISC::SET_BIT(&Global_1058888.f_40497[num2], offset);
	}

	Global_1934765 = 0;
	return;
}

void func_30(int iParam0) // Position - 0x11CE Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_48(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	}

	Global_1934765 = 0;
	return;
}

void func_31() // Position - 0x1254 Hash - 0xFC9331C1 ^0xC3C8E241
{
	int i;

	for (i = 0; i < 1; i = i + 1)
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uLocal_24[i]))
			VOLUME::_RELEASE_LOCK_VOLUME(uLocal_24[i]);
	}

	return;
}

void func_32(var uParam0, int iParam1) // Position - 0x1285 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_33() // Position - 0x129A Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

float func_34(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x12BB Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_35(int iParam0) // Position - 0x12D9 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_47(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_36(Hash hParam0) // Position - 0x1338 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_37() // Position - 0x137A Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

int func_38(int iParam0) // Position - 0x138B Hash - 0xDAA98FD3 ^0xDAA98FD3
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 2;
	
		case 5:
			return 2;
	
		case 6:
			return 2;
	
		default:
		
	}

	return 0;
}

void func_39(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x13E2 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_49(*uParam0);
	i = func_50(*uParam0);
	num2 = func_51(*uParam0);
	j = func_52(*uParam0);
	k = func_53(*uParam0);
	l = func_54(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_55(i, num); num2 > m; m = func_55(i, num))
	{
		iParam5 = iParam5 + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			iParam6 = iParam6 + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	if (!bParam7)
		num = num + iParam6;

	func_56(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_40(int iParam0, BOOL bParam1) // Position - 0x156A Hash - 0x10DE2364 ^0x10DE2364
{
	return func_58(func_57(), iParam0, bParam1);
}

BOOL func_41(int iParam0) // Position - 0x157E Hash - 0xA3777B6 ^0xA3777B6
{
	Hash hash;
	int i;

	hash = func_20(iParam0);

	for (i = 0; i < 7; i = i + 1)
	{
		if (func_59(i) == hash)
			return true;
	}

	return false;
}

void func_42(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x15B0 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_60(eptParam1))
		{
			func_61(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_62(pedParam0, 0, true);
	
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
			func_63(pedParam0, false);
			flag = true;
		}
	
		func_64(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

float func_43(int iParam0) // Position - 0x1691 Hash - 0x2E856262 ^0x2E856262
{
	float num;

	num = 50f;

	switch (iParam0)
	{
		case 1:
		case 5:
		case 6:
			num = 20f;
			break;
	}

	return num;
}

Vector3 func_44() // Position - 0x16C6 Hash - 0xA9B5EBA8 ^0xA9B5EBA8
{
	return 0f, 0f, 0f;
}

int func_45() // Position - 0x16D1 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_46(int iParam0) // Position - 0x16DD Hash - 0xDA60CC84 ^0xDA60CC84
{
	return iParam0 > -1 && iParam0 < 9;
}

BOOL func_47(int iParam0, BOOL bParam1) // Position - 0x16F3 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_65(iParam0))
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

int func_48(int iParam0, int iParam1) // Position - 0x1724 Hash - 0x8FA0E29 ^0xC3F68E87
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
	
		case -2106214197:
			return 104;
	
		case -2101264851:
			return 195;
	
		case -2073072369:
			return 59;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
	
		case -2058120606:
			return 197;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 92;
	
		case -2022369555:
			return 265;
	
		case -2021582629:
			return 112;
	
		case -2020023971:
			return 278;
	
		case -1957523409:
			return 208;
	
		case -1952856164:
			return 165;
	
		case -1949204933:
			return 276;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
	
		case -1852605133:
			return 10;
	
		case -1847672446:
			return 376;
	
		case -1840704908:
			return 289;
	
		case -1838712533:
			return 26;
	
		case -1838352012:
			return 57;
	
		case -1835851517:
			return 56;
	
		case -1831552326:
			return 123;
	
		case -1825294305:
			return 266;
	
		case -1824738758:
			return 277;
	
		case -1818850842:
			return 253;
	
		case -1799960545:
			return 257;
	
		case -1764522338:
			return 372;
	
		case -1763509974:
			return 141;
	
		case -1741667789:
			return 64;
	
		case -1738165526:
			return 3;
	
		case -1718674470:
			return 23;
	
		case -1717960576:
			return 61;
	
		case -1711895055:
			return 13;
	
		case -1706438978:
			return 233;
	
		case -1700452710:
			return 53;
	
		case -1674179981:
			return 55;
	
		case -1666278201:
			return 33;
	
		case -1612662716:
			return 201;
	
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
	
		case -1582926490:
			return 146;
	
		case -1579419919:
			return 147;
	
		case -1558439474:
			return 301;
	
		case -1556423728:
			return 218;
	
		case -1532284567:
			return 116;
	
		case -1530132748:
			return 311;
	
		case -1524512402:
			return 209;
	
		case -1523910291:
			return 155;
	
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
	
		case -1447311849:
			return 215;
	
		case -1436021162:
			return 172;
	
		case -1433686245:
			return 12;
	
		case -1425209566:
			return 32;
	
		case -1419919497:
			return 22;
	
		case -1414537028:
			return 73;
	
		case -1405998267:
			return 105;
	
		case -1344601768:
			return 314;
	
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
	
		case -1329135070:
			return 140;
	
		case -1318987693:
			return 222;
	
		case -1311865656:
			return 37;
	
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
	
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
	
		case -1282804314:
			return 270;
	
		case -1278074582:
			return 171;
	
		case -1271608261:
			return 98;
	
		case -1257057567:
			return 21;
	
		case -1241340344:
			return 300;
	
		case -1236261996:
			return 235;
	
		case -1232809834:
			return 113;
	
		case -1230112817:
			return 170;
	
		case -1223121209:
			return 126;
	
		case -1215445344:
			return 131;
	
		case -1209597203:
			return 333;
	
		case -1206122982:
			return 156;
	
		case -1187950766:
			return 45;
	
		case -1179948750:
			return 136;
	
		case -1170496998:
			return 46;
	
		case -1164215952:
			return 234;
	
		case -1151084372:
			return 124;
	
		case -1145519186:
			return 100;
	
		case -1124061431:
			return 242;
	
		case -1123615607:
			return 29;
	
		case -1080627546:
			return 378;
	
		case -1077783786:
			return 194;
	
		case -1063147448:
			return 151;
	
		case -1062490780:
			return 79;
	
		case -1060078174:
			return 239;
	
		case -1056767524:
			return 176;
	
		case -1053549743:
			return 58;
	
		case -1029225159:
			return 106;
	
		case -1014145132:
			return 288;
	
		case -978957786:
			return 251;
	
		case -959357075:
			return 36;
	
		case -950054349:
			return 152;
	
		case -939420910:
			return 44;
	
		case -939114198:
			return 221;
	
		case -919512195:
			return 40;
	
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
	
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
	
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
	
		case -879507474:
			return 236;
	
		case -868076593:
			return 84;
	
		case -857964358:
			return 83;
	
		case -853383233:
			return 65;
	
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
	
		case -828139293:
			return 260;
	
		case -811637947:
			return 245;
	
		case -796902762:
			return 88;
	
		case -792853067:
			return 254;
	
		case -789397228:
			return 262;
	
		case -785605431:
			return 250;
	
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
	
		case -764163380:
			return 228;
	
		case -748969569:
			return 78;
	
		case -741351766:
			return 60;
	
		case -736853952:
			return 366;
	
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
	
		case -699277634:
			return 4;
	
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
	
		case -683458244:
			return 80;
	
		case -666014935:
			return 157;
	
		case -664512648:
			return 67;
	
		case -664252410:
			return 191;
	
		case -644722288:
			return 261;
	
		case -640663440:
			return 214;
	
		case -639037538:
			return 185;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_49(int iParam0) // Position - 0x283D Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_50(int iParam0) // Position - 0x2862 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_51(int iParam0) // Position - 0x2875 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_52(int iParam0) // Position - 0x2888 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_53(int iParam0) // Position - 0x289B Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_54(int iParam0) // Position - 0x28AD Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_55(int iParam0, int iParam1) // Position - 0x28BF Hash - 0x893AC59E ^0x893AC59E
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

void func_56(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2959 Hash - 0xA65AB937 ^0xA65AB937
{
	func_67(uParam0, iParam6);
	func_68(uParam0, iParam5);
	func_69(uParam0, iParam4);
	func_70(uParam0, iParam3);
	func_71(uParam0, iParam2);
	func_72(uParam0, iParam1);
	return;
}

int func_57() // Position - 0x2991 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_58(int iParam0, int iParam1, BOOL bParam2) // Position - 0x299D Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_73(iParam1) || !func_73(iParam0))
			return true;

	return iParam0 > iParam1;
}

Hash func_59(int iParam0) // Position - 0x29CA Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_74(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

BOOL func_60(ePedType eptParam0) // Position - 0x29FD Hash - 0x5000025C ^0x5000025C
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

void func_61(Ped pedParam0, Hash hParam1) // Position - 0x2E50 Hash - 0xEA1C858E ^0x21280076
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

void func_62(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x2EFA Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_63(Ped pedParam0, BOOL bParam1) // Position - 0x2F2A Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_64(Ped pedParam0, int iParam1) // Position - 0x2F6F Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_65(int iParam0) // Position - 0x2F96 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_79(iParam0))
		return -1;

	return func_80(iParam0);
}

var func_66(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2FB2 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_67(var uParam0, int iParam1) // Position - 0x2FC9 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_68(var uParam0, int iParam1) // Position - 0x304F Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_69(var uParam0, int iParam1) // Position - 0x308B Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_50(*uParam0);
	num2 = func_49(*uParam0);

	if (iParam1 < 1 || iParam1 > func_55(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_70(var uParam0, int iParam1) // Position - 0x30DE Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_71(var uParam0, int iParam1) // Position - 0x3119 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_72(var uParam0, int iParam1) // Position - 0x3152 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_73(int iParam0) // Position - 0x318A Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_54(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_53(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_52(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_49(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_50(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_51(iParam0);

	if (num6 < 1 || num6 > func_55(num5, num4))
		return false;

	return true;
}

int func_74(int iParam0) // Position - 0x3266 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_75(Ped pedParam0, Hash hParam1) // Position - 0x327F Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_76(Ped pedParam0, Hash hParam1) // Position - 0x32AD Hash - 0xA54F3032 ^0x92782097
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

BOOL func_77(Ped pedParam0, Hash hParam1) // Position - 0x32FE Hash - 0xA54F3032 ^0x92782097
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

void func_78(Ped pedParam0) // Position - 0x3370 Hash - 0x446F1BDD ^0xE1F57F1A
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_79(int iParam0) // Position - 0x338E Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_80(int iParam0) // Position - 0x33C1 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_81(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_81(int iParam0) // Position - 0x3402 Hash - 0x6EC15CF9 ^0xE613EBE0
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

