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
	var uLocal_20 = 6;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 6;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 6;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 6;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 4;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 3;
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
	int iLocal_74 = 0;
	Hash hLocal_75 = 0;
	Hash hLocal_76 = 0;
	Object obLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	Hash hLocal_87 = 0;
	Hash hLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	Volume volLocal_95 = 0;
	Volume volLocal_96 = 0;
	Volume volLocal_97 = 0;
	Volume volLocal_98 = 0;
	Volume volLocal_99 = 0;
	Volume volLocal_100 = 0;
	Volume volLocal_101 = 0;
	Volume volLocal_102 = 0;
	Volume volLocal_103 = 0;
	Volume volLocal_104 = 0;
	Volume volLocal_105 = 0;
	Volume volLocal_106 = 0;
	Volume volLocal_107 = 0;
	Volume volLocal_108 = 0;
	Volume volLocal_109 = 0;
	Volume volLocal_110 = 0;
	Volume volLocal_111 = 0;
	Volume volLocal_112 = 0;
	Volume volLocal_113 = 0;
	Volume volLocal_114 = 0;
	Volume volLocal_115 = 0;
	Volume volLocal_116 = 0;
	Volume volLocal_117 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xFAF28E84 ^0x866A4CBC
{
	Volume volume;
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	hLocal_75 = -791673850;
	hLocal_76 = joaat("s_valerianroot01x");
	uLocal_78 = { -350.64352f, 288.28122f, 97.46367f };
	fLocal_81 = 7f;
	fLocal_82 = 0f;
	fLocal_83 = 0f;
	fLocal_84 = 100f;
	fLocal_85 = 100f;
	fLocal_86 = 0f;
	hLocal_87 = joaat("ui_note_dutch");
	hLocal_88 = joaat("world_player_inspect_letter_80cm_paper_w15_1_h24_foldvertical_p_cs_letter03x");
	uLocal_92 = { -129.1927f, -68.5704f, 90.6221f };
	func_1();
	func_2();
	func_3();
	volume = VOLUME::CREATE_VOLUME_CYLINDER(-128f, 153f, 92.509f, 0f, 0f, 0f, 7.5f, 7.5f, 10f);

	if (func_4() == 1)
	{
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1554291097))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1554291097, false);
	
		PATHFIND::SET_ROADS_IN_VOLUME(volume, false, false, false);
	}
	else
	{
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1554291097))
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1554291097, true);
	
		PATHFIND::RESET_ROADS_IN_VOLUME(volume, false);
	}

	flag = true;

	while (flag)
	{
		if (!func_5(Global_40.f_10991.f_37, 8))
			if (STREAMING::IS_IPL_ACTIVE_HASH(hLocal_75))
				func_6();
	
		func_7();
		func_8();
		BUILTIN::WAIT(0);
	}

	func_9();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x124 Hash - 0x93CB8779 ^0xB3D1DA9
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
		func_9();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0x15D Hash - 0xA6D34823 ^0x90D5E97A
{
	Vector3 vector;
	Vector3 vector2;

	vector = { fLocal_81, fLocal_82, fLocal_83 };
	vector2 = { fLocal_84, fLocal_85, fLocal_86 };
	FLOCK::_0xF2CCA7B68CFAB2B9(joaat("SPECIES_BIRD_CROW"), 725.8305f, -468.8784f, 149f, vector, vector2, 9.5f, 50f, 1f, 6f);
	return;
}

void func_3() // Position - 0x1A5 Hash - 0x3E85043B ^0xB073DEF0
{
	volLocal_95 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	func_10(volLocal_95, true);
	volLocal_96 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_10(volLocal_96, true);
	volLocal_98 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HRT_volCornwall_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_98, 557.5f, 585f, 120f, 0f, 0f, -16f, 60f, 100f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_98, 495f, 650f, 120f, 0f, 0f, 0f, 80f, 80f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_98, 582.5f, 695f, 120f, 0f, 0f, 0f, 25f, 25f, 15f);

	if (func_11())
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_98, 2238463, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_98, 2238463, 0, 0, -1, -1, 0);
	}
	else
	{
		func_12(volLocal_98, 0, false, true);
	}

	volLocal_99 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1120f, 432.5f, 94.789f, 0f, 0f, 45f, 150f, 135f, 20f, "m_volCropFarm_Restriction");
	func_10(volLocal_99, true);
	volLocal_100 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(892.5f, 260f, 102.5f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volLarnedSod_Restriction");
	func_10(volLocal_100, true);
	volLocal_101 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-62.5f, -397.5f, 75f, 0f, 0f, 0f, 25f, 25f, 15f, "m_volSouthernShack_Restriction");
	func_12(volLocal_101, 0, false, true);
	volLocal_102 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-340.7f, -349.1f, 127.9f, 0f, 0f, 0f, 50f, 50f, 50f, "m_volFlatneckStation_Restriction");
	func_13(volLocal_102, true);
	volLocal_103 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volValentine_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_103, -205f, 670f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_103, -330f, 795f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_103, -205f, 820f, 130f, 0f, 0f, -55f, 125f, 50f, 20f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_103, -385f, 655f, 115f, 0f, 0f, 0f, 100f, 100f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_103, -390f, 920f, 115f, 0f, 0f, 0f, 60f, 60f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_103, -250f, 935f, 130f, 0f, 0f, 0f, 70f, 70f, 20f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_103, -330f, 970f, 125f, 0f, 0f, 0f, 60f, 60f, 15f);
	func_14(volLocal_103, true);
	volLocal_105 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(311.33002f, 301.27386f, 147.3381f, 0f, 0f, 0f, 25f, 25f, 50f, "m_volGiantRock_Restriction1");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_105, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_105, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volLocal_105);
	volLocal_106 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(295.45584f, 335.83475f, 144.37329f, 0f, 0f, 0f, 7f, 7f, 5f, "m_volGiantRock_Restriction2");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_106, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_106, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volLocal_106);
	volLocal_107 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(372.38614f, 149.449f, 144.5227f, 0f, 0f, 27.750002f, 37.75f, 44.75f, 21.5f, "m_volGiantRock_Restriction3");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_107, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_107, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volLocal_107);
	volLocal_104 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1520f, 440f, 92.5f, 0f, 0f, 0f, 20f, 50f, 10f, "m_volER_Trainstation_Restriction");
	func_10(volLocal_104, true);
	volLocal_108 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-838f, 343f, 95.5f, 0f, 0f, 0f, 80f, 50f, 44f, "m_volDownesRanch_Restriction");
	func_12(volLocal_108, 0, false, true);
	volLocal_109 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1416.5f, 321.5f, 93f, 0f, 0f, -21f, 70f, 80f, 25f, "m_volEmeraldRanch_Restriction");
	func_15(volLocal_109, 0, false, true);
	volLocal_110 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1185.274f, -101.3631f, 105f, 0f, 0f, 0f, 15f, 10f, 30f, "m_volRuinsNorthOfHorseShop_Restriction");
	func_12(volLocal_110, 0, false, true);
	volLocal_111 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIsland_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_111, 237.21304f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.43071f, 81.38799f, 25.722523f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_111, -401.96164f, -1012.6383f, 42.9804f, 0f, 0f, -51.00734f, 240.53346f, 103.68801f, 24.89919f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_111, 440.32156f, -1462.0266f, 55.90892f, 0f, 0f, 13.402258f, 421.29385f, 982.8425f, 99.70844f);
	func_16(volLocal_111, 0, false, true);

	if (func_17() == 1)
	{
		volLocal_112 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volHorseShoeOverLook_Restriction");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_112, -118.5499f, -30.44764f, 110.3997f, 0f, 0f, 99f, 54f, 31f, 35f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_112, -140.179f, -28.55973f, 110.3997f, 0f, 0f, -14.999996f, 49f, 38f, 41f);
		func_18(volLocal_112, 0, false, true);
	}

	volLocal_97 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-435.5f, 498f, 107f, 0f, 0f, -7f, 27f, 17f, 20f, "m_volCastorsPond_Restriction");
	func_15(volLocal_97, 0, false, true);
	volLocal_113 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_113, -61.782875f, 1236.5985f, 171.7316f, 0f, 0f, 30.499935f, 17.574043f, 11.672787f, 13.050807f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_113, -26.603022f, 1223.1174f, 175.03629f, 0f, 0f, 0f, 17.604649f, 14.424184f, 5.206519f);
	func_18(volLocal_113, 0, false, true);
	volLocal_114 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBardsCrossing_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_114, -730.6474f, -548.06537f, 77.02292f, 0f, 0f, 26.999998f, 353.06906f, 8.967957f, 13.352211f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_114, -892.47064f, -627.4682f, 77.269936f, 0f, 0f, 18.919636f, 20.999908f, 7.632857f, 11.381501f);
	func_18(volLocal_114, 0, false, true);
	volLocal_115 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLimpany_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_115, -344.20517f, -155.74205f, 51.927116f, 0f, 0f, -25.598995f, 7.007796f, 12.391521f, 9.160034f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_115, -326.24954f, -151.11435f, 51.75295f, 0f, 0f, -40.792118f, 9.133691f, 7.226022f, 8.362908f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_115, -337.78375f, -123.23148f, 49.78259f, 0f, 0f, -30.275806f, 12.478072f, 6.990203f, 9.129834f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_115, -368.2776f, -141.58112f, 49.432507f, 0f, 0f, -25.079357f, 8.474558f, 7.734136f, 6.674875f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_115, -381.19443f, -138.45233f, 48.6927f, 0f, 0f, -26.4314f, 10.547347f, 16.194529f, 11.171678f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_115, -359.6013f, -115.60306f, 48.095158f, 0f, 0f, -36.89244f, 15.661706f, 18.049475f, 13.863669f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_115, -317.62708f, -131.93431f, 51.768715f, 0f, 0f, 0f, 6.531308f, 7.349917f, 8.040896f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_115, -314.7265f, -105.85126f, 50.300213f, 0f, 0f, 33.49742f, 11.551975f, 8.022533f, 6.21626f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_115, -372.80255f, -109.96154f, 47.05131f, 0f, 0f, -34.511166f, 5.588199f, 6.904874f, 7.632836f);
	func_15(volLocal_115, 0, false, true);
	volLocal_116 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBurnedSettlement_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_116, -355f, -132.5f, 50f, 0f, 0f, -20f, 50f, 30f, 25f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_116, -320f, -115f, 50f, 0f, 0f, 0f, 20f, 20f, 25f);
	func_12(volLocal_116, 0, false, true);
	volLocal_117 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFishermansShack_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_117, 343.05405f, -669.0029f, 42.165f, 0f, 0f, -31.011257f, 11.020414f, 15.739729f, 10.955836f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_117, 338.94785f, -681.7498f, 43.027786f, 0f, 0f, -31.246874f, 3.800817f, 10.349405f, 9.244935f);
	func_18(volLocal_117, 0, false, true);
	return;
}

eStackSize func_4() // Position - 0xAFB Hash - 0xFD016E51 ^0xFD016E51
{
	switch (func_19())
	{
		case -1:
			return Global_40.f_4283;
	}

	return -1;
}

BOOL func_5(int iParam0, int iParam1) // Position - 0xB20 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_6() // Position - 0xB2F Hash - 0x37CD4840 ^0x37CD4840
{
	if (func_20(uLocal_78, Global_36, 50f, true))
	{
		switch (iLocal_74)
		{
			case 0:
				if (func_21())
					iLocal_74 = 1;
				break;
		
			case 1:
				if (func_22())
					iLocal_74 = 2;
				break;
		
			case 2:
				func_23();
				break;
		}
	}
	else if (iLocal_74 != 0)
	{
		func_24();
	}

	return;
}

void func_7() // Position - 0xB95 Hash - 0xC2B6ABC ^0xCA4C40DF
{
	PersChar persChar;

	if (MISC::GET_FRAME_COUNT() % 20 != 0)
		return;

	persChar = PERSCHAR::_0x112DDF56300BC6E5(joaat("HRT_CRD_TENANT_01"));

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
		if (!func_25(-1530132748))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-389510791, Global_36))
				func_26(-1530132748);
	else if (func_25(-1530132748))
		if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-389510791, Global_36))
			func_27(-1530132748);

	return;
}

void func_8() // Position - 0xC1E Hash - 0x2437E69D ^0x551F1884
{
	func_28(&uLocal_89, &uLocal_91, &uLocal_90, uLocal_92, hLocal_87, -1209372002, hLocal_88);
	return;
}

void func_9() // Position - 0xC3E Hash - 0x672CF3B1 ^0xA093EEE9
{
	FLOCK::_0xFB16F08F47B83B4C(joaat("SPECIES_BIRD_CROW"));
	func_24();
	return;
}

void func_10(Volume volParam0, BOOL bParam1) // Position - 0xC53 Hash - 0xD9C0069 ^0xCF70485C
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);

	return;
}

BOOL func_11() // Position - 0xC99 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_19() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

void func_12(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xCBE Hash - 0x32B7D26A ^0x27C31929
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_29(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_13(Volume volParam0, BOOL bParam1) // Position - 0xD36 Hash - 0xFE673D83 ^0xF340C8A2
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);

	return;
}

void func_14(Volume volParam0, BOOL bParam1) // Position - 0xD82 Hash - 0xBEDD85C3 ^0x76253760
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, volParam0);

	return;
}

void func_15(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDC8 Hash - 0xAB9EF6C3 ^0x6AF001EA
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_29(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_16(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE4C Hash - 0xA0926E1 ^0x971FFD25
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_29(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

eStackSize func_17() // Position - 0xEC7 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

void func_18(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xED5 Hash - 0x28C5CE40 ^0xE969725E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_29(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

BOOL func_19() // Position - 0xF50 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_20(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0xF5E Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

BOOL func_21() // Position - 0xFB3 Hash - 0x49580B74 ^0x7F991F79
{
	STREAMING::REQUEST_MODEL(hLocal_76, false);
	return true;
}

BOOL func_22() // Position - 0xFC3 Hash - 0xE370A14 ^0xF18F5486
{
	if (STREAMING::HAS_MODEL_LOADED(hLocal_76))
	{
		obLocal_77 = OBJECT::CREATE_OBJECT(hLocal_76, uLocal_78, false, true, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_76);
		return true;
	}

	return false;
}

void func_23() // Position - 0xFF0 Hash - 0x33BD5B1E ^0x98CE1C6
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_77))
	{
		if (func_20(uLocal_78, Global_36, 3f, true))
		{
			if (func_30(joaat("consumable_valerian_root")))
			{
				func_31(&(Global_40.f_10991.f_37), 8);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_77);
			}
		}
	}

	return;
}

void func_24() // Position - 0x1033 Hash - 0xAF630B9F ^0x63FC5A8B
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_77))
		OBJECT::DELETE_OBJECT(&obLocal_77);

	iLocal_74 = 0;
	return;
}

BOOL func_25(int iParam0) // Position - 0x104D Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_32(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

void func_26(int iParam0) // Position - 0x109C Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_32(iParam0, 1);
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

void func_27(int iParam0) // Position - 0x1135 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_32(iParam0, 1);
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

int func_28(var uParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, Hash hParam6, int iParam7, Hash hParam8) // Position - 0x11BB Hash - 0x9DF496E9 ^0x857DFE74
{
	Entity propForScenarioPoint;

	if (func_33(Global_35, vParam3, true) > 225f)
		return 1;

	if (*uParam0)
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
				*uParam0 = 0;
			else
				return 1;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(*uParam2))
	{
		*uParam2 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vParam3, hParam8, 1f, 0, false);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(*uParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(propForScenarioPoint);
		TXD::REQUEST_STREAMED_TXD(hParam6, false);
		return 0;
	}
	else
	{
		if (!TXD::HAS_STREAMED_TXD_LOADED(hParam6))
		{
			TXD::REQUEST_STREAMED_TXD(hParam6, false);
			return 0;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam7);
				return 0;
			}
			else
			{
				OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(*uParam1, hParam6, 0, 0);
				TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(hParam6);
				*uParam0 = 1;
				return 1;
			}
		}
	}

	return 0;
}

void func_29(var uParam0, int iParam1) // Position - 0x12B4 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_30(int iParam0) // Position - 0x12C9 Hash - 0x2C6D6290 ^0xF2EA2FC
{
	struct<10> eventData;
	int i;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i) == -1730772208)
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 10))
					if (eventData.f_2 == iParam0 || iParam0 == 0)
						return true;
		}
	}

	return false;
}

void func_31(int iParam0, int iParam1) // Position - 0x1328 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_32(int iParam0, int iParam1) // Position - 0x1339 Hash - 0x8FA0E29 ^0xC3F68E87
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

float func_33(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x2452 Hash - 0x1A58F423 ^0x2317B76D
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

float func_34(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x24A2 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

