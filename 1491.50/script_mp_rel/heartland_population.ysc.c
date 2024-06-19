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
	Volume volLocal_38 = 0;
	Volume volLocal_39 = 0;
	Volume volLocal_40 = 0;
	Volume volLocal_41 = 0;
	Volume volLocal_42 = 0;
	Volume volLocal_43 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xB7994A1A ^0xB7994A1A
{
	Volume volume;
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
	volume = VOLUME::CREATE_VOLUME_CYLINDER(-128f, 153f, 92.509f, 0f, 0f, 0f, 7.5f, 7.5f, 10f);

	if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1554291097))
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1554291097, true);

	PATHFIND::RESET_ROADS_IN_VOLUME(volume, false);
	flag = true;

	while (flag)
	{
		if (func_4() != -1)
		{
			Global_1896646.f_51 = NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(Global_1896646.f_42);
		
			if (func_5(true, true))
				flag = false;
		}
	
		BUILTIN::WAIT(0);
	}

	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xB5 Hash - 0x93CB8779 ^0xB3D1DA9
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

void func_2() // Position - 0xEE Hash - 0xA6D34823 ^0x90D5E97A
{
	Vector3 vector;
	Vector3 vector2;

	vector = { fLocal_16, fLocal_17, fLocal_18 };
	vector2 = { fLocal_19, fLocal_20, fLocal_21 };
	FLOCK::_0xF2CCA7B68CFAB2B9(joaat("SPECIES_BIRD_CROW"), 725.8305f, -468.8784f, 149f, vector, vector2, 9.5f, 50f, 1f, 6f);
	return;
}

void func_3() // Position - 0x136 Hash - 0x53BCB764 ^0xABA6973A
{
	volLocal_22 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	func_7(volLocal_22);
	volLocal_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_7(volLocal_23);
	volLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HRT_volCornwall_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_25, 557.5f, 585f, 120f, 0f, 0f, -16f, 60f, 100f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_25, 495f, 650f, 120f, 0f, 0f, 0f, 80f, 80f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_25, 582.5f, 695f, 120f, 0f, 0f, 0f, 25f, 25f, 15f);

	if (func_8())
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_25, 2238463, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_25, 2238463, 0, 0, -1, -1, 0);
	}
	else
	{
		func_9(volLocal_25, 0, false);
	}

	volLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1120f, 432.5f, 94.789f, 0f, 0f, 45f, 150f, 135f, 20f, "m_volCropFarm_Restriction");
	func_7(volLocal_26);
	volLocal_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(892.5f, 260f, 102.5f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volLarnedSod_Restriction");
	func_7(volLocal_27);
	volLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-62.5f, -397.5f, 75f, 0f, 0f, 0f, 25f, 25f, 15f, "m_volSouthernShack_Restriction");
	func_9(volLocal_28, 0, false);
	volLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-340.7f, -349.1f, 127.9f, 0f, 0f, 0f, 50f, 50f, 50f, "m_volFlatneckStation_Restriction");
	func_10(volLocal_29);
	volLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volValentine_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, -205f, 670f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, -330f, 795f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, -205f, 820f, 130f, 0f, 0f, -55f, 125f, 50f, 20f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, -385f, 655f, 115f, 0f, 0f, 0f, 100f, 100f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, -390f, 920f, 115f, 0f, 0f, 0f, 60f, 60f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, -250f, 935f, 130f, 0f, 0f, 0f, 70f, 70f, 20f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, -330f, 970f, 125f, 0f, 0f, 0f, 60f, 60f, 15f);
	func_11(volLocal_30);
	volLocal_32 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(311.33002f, 301.27386f, 147.3381f, 0f, 0f, 0f, 25f, 25f, 50f, "m_volGiantRock_Restriction1");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_32, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_32, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volLocal_32);
	volLocal_33 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(295.45584f, 335.83475f, 144.37329f, 0f, 0f, 0f, 7f, 7f, 5f, "m_volGiantRock_Restriction2");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_33, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_33, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volLocal_33);
	volLocal_34 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(372.38614f, 149.449f, 144.5227f, 0f, 0f, 27.750002f, 37.75f, 44.75f, 21.5f, "m_volGiantRock_Restriction3");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_34, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_34, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volLocal_34);
	volLocal_31 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1520f, 440f, 92.5f, 0f, 0f, 0f, 20f, 50f, 10f, "m_volER_Trainstation_Restriction");
	func_7(volLocal_31);
	volLocal_35 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-838f, 343f, 95.5f, 0f, 0f, 0f, 80f, 50f, 44f, "m_volDownesRanch_Restriction");
	func_9(volLocal_35, 0, false);
	volLocal_36 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1416.5f, 321.5f, 93f, 0f, 0f, -21f, 70f, 80f, 25f, "m_volEmeraldRanch_Restriction");
	func_12(volLocal_36, 0, false);
	volLocal_37 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1185.274f, -101.3631f, 105f, 0f, 0f, 0f, 15f, 10f, 30f, "m_volRuinsNorthOfHorseShop_Restriction");
	func_9(volLocal_37, 0, false);
	volLocal_38 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIsland_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_38, 237.21304f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.43071f, 81.38799f, 25.722523f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_38, -401.96164f, -1012.6383f, 42.9804f, 0f, 0f, -51.00734f, 240.53346f, 103.68801f, 24.89919f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_38, 440.32156f, -1462.0266f, 55.90892f, 0f, 0f, 13.402258f, 421.29385f, 982.8425f, 99.70844f);
	func_13(volLocal_38, 0, false);
	volLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-435.5f, 498f, 107f, 0f, 0f, -7f, 27f, 17f, 20f, "m_volCastorsPond_Restriction");
	func_12(volLocal_24, 0, false);
	volLocal_39 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_39, -61.782875f, 1236.5985f, 171.7316f, 0f, 0f, 30.499935f, 17.574043f, 11.672787f, 13.050807f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_39, -26.603022f, 1223.1174f, 175.03629f, 0f, 0f, 0f, 17.604649f, 14.424184f, 5.206519f);
	func_14(volLocal_39, 0, false);
	volLocal_40 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBardsCrossing_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_40, -730.6474f, -548.06537f, 77.02292f, 0f, 0f, 26.999998f, 353.06906f, 8.967957f, 13.352211f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_40, -892.47064f, -627.4682f, 77.269936f, 0f, 0f, 18.919636f, 20.999908f, 7.632857f, 11.381501f);
	func_14(volLocal_40, 0, false);
	volLocal_41 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLimpany_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_41, -344.20517f, -155.74205f, 51.927116f, 0f, 0f, -25.598995f, 7.007796f, 12.391521f, 9.160034f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_41, -326.24954f, -151.11435f, 51.75295f, 0f, 0f, -40.792118f, 9.133691f, 7.226022f, 8.362908f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_41, -337.78375f, -123.23148f, 49.78259f, 0f, 0f, -30.275806f, 12.478072f, 6.990203f, 9.129834f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_41, -368.2776f, -141.58112f, 49.432507f, 0f, 0f, -25.079357f, 8.474558f, 7.734136f, 6.674875f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_41, -381.19443f, -138.45233f, 48.6927f, 0f, 0f, -26.4314f, 10.547347f, 16.194529f, 11.171678f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_41, -359.6013f, -115.60306f, 48.095158f, 0f, 0f, -36.89244f, 15.661706f, 18.049475f, 13.863669f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_41, -317.62708f, -131.93431f, 51.768715f, 0f, 0f, 0f, 6.531308f, 7.349917f, 8.040896f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_41, -314.7265f, -105.85126f, 50.300213f, 0f, 0f, 33.49742f, 11.551975f, 8.022533f, 6.21626f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_41, -372.80255f, -109.96154f, 47.05131f, 0f, 0f, -34.511166f, 5.588199f, 6.904874f, 7.632836f);
	func_12(volLocal_41, 0, false);
	volLocal_42 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBurnedSettlement_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_42, -355f, -132.5f, 50f, 0f, 0f, -20f, 50f, 30f, 25f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_42, -320f, -115f, 50f, 0f, 0f, 0f, 20f, 20f, 25f);
	func_9(volLocal_42, 0, false);
	volLocal_43 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFishermansShack_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_43, 343.05405f, -669.0029f, 42.165f, 0f, 0f, -31.011257f, 11.020414f, 15.739729f, 10.955836f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_43, 338.94785f, -681.7498f, 43.027786f, 0f, 0f, -31.246874f, 3.800817f, 10.349405f, 9.244935f);
	func_14(volLocal_43, 0, false);
	return;
}

int func_4() // Position - 0xA08 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_5(BOOL bParam0, BOOL bParam1) // Position - 0xA16 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_6() // Position - 0xAF6 Hash - 0x221E018B ^0x9CCF2CD2
{
	FLOCK::_0xFB16F08F47B83B4C(joaat("SPECIES_BIRD_CROW"));
	return;
}

void func_7(Volume volParam0) // Position - 0xB07 Hash - 0x14EA5472 ^0xD9C3A23E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);
	return;
}

BOOL func_8() // Position - 0xB48 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

void func_9(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0xB51 Hash - 0x271123A7 ^0x11BA4E3D
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_15(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_10(Volume volParam0) // Position - 0xBC4 Hash - 0xAE5E218A ^0x11F4FAD4
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);
	return;
}

void func_11(Volume volParam0) // Position - 0xC0B Hash - 0x84C5D4FF ^0x54901B26
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, volParam0);
	return;
}

void func_12(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0xC4C Hash - 0x70E2F07C ^0x478B1462
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

void func_13(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0xCCB Hash - 0x749033A ^0xC3DF4340
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_15(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_14(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0xD41 Hash - 0x7087DF6F ^0x70765503
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_15(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_15(var uParam0, int iParam1) // Position - 0xDB7 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

