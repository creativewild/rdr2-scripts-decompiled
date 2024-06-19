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
	Volume volLocal_14 = 0;
	Volume volLocal_15 = 0;
	Volume volLocal_16 = 0;
	Volume volLocal_17 = 0;
	Volume volLocal_18 = 0;
	Volume volLocal_19 = 0;
	Volume volLocal_20 = 0;
	Volume volLocal_21 = 0;
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
	const char* sLocal_32 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x4D579839 ^0x39340F71
{
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3();
	flag = true;

	while (flag)
	{
		BUILTIN::WAIT(0);
	}

	func_4();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x32 Hash - 0xD0925A9B ^0xC30A3E3B
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		func_4();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0x53 Hash - 0xEE967B59 ^0xBC8BE76F
{
	volLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCaligaHall_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1765f, -1365f, 50f, 0f, 0f, 20f, 30f, 30f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1752.5f, -1332.5f, 50f, 0f, 0f, 7f, 100f, 150f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1850f, -1330f, 50f, 0f, 0f, 169f, 150f, 250f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1650f, -1465f, 50f, 0f, 0f, 26f, 150f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1647.5f, -1377.5f, 50f, 0f, 0f, 9f, 200f, 100f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1592.5f, -1282.5f, 50f, 0f, 0f, -2f, 100f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1660f, -1300f, 50f, 0f, 0f, 50f, 100f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1705f, -1532.5f, 50f, 0f, 0f, 53f, 150f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1810f, -1485f, 50f, 0f, 0f, 115f, 250f, 175f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1927.5f, -1447.5f, 50f, 0f, 0f, 146f, 150f, 175f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1975f, -1342.5f, 50f, 0f, 0f, 170f, 150f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1750f, -1582.5f, 50f, 0f, 0f, 86f, 100f, 75f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1977.5f, -1300f, 50f, 0f, 0f, 147f, 135f, 100f, 40f);
	func_5(volLocal_14, true);
	volLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2090f, -1817.5f, 39f, 0f, 0f, 0f, 18f, 18f, 10f, "m_volCrawdadWilliesRestriction");
	func_5(volLocal_15, true);
	volLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2125.35f, -597.55f, 45f, 0f, 0f, 45f, 50f, 70f, 10f, "m_volLagrasRestriction");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_16, 4295, 4210688, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_16, 4295, 4210688, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(4295, 4210688, 0, -1, -1, volLocal_16);
	volLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLakayRestriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 2252.5f, -762.5f, 45f, 0f, 0f, 0f, 40f, 40f, 10f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 2288f, -723f, 45f, 0f, 0f, -40f, 12f, 15f, 10f);
	func_5(volLocal_17, true);
	volLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2011.9f, -840.7f, 44.7f, 0f, 0f, 0f, 98.7f, 64.1f, 10f, "m_volOrangePlantationRestriction");
	func_5(volLocal_18, true);
	volLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisFountainAquaticRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, 2331.8687f, -1216.2615f, 45.5096f, 0f, 0f, 0f, 18f, 9f, 5f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, 2401.4084f, -1036.9542f, 43.691425f, 0f, 0f, 0f, 3.15f, 3.15f, 3.297321f);
	func_6(volLocal_19, 512, false, true);
	volLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisNorthShacksRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 2352.919f, -862.3568f, 45f, 0f, 0f, 18f, 7.5f, 7.5f, 30f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 2352.267f, -854.82f, 45f, 0f, 0f, 36f, 10f, 10f, 30f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 2370.363f, -861.704f, 45f, 0f, 0f, 21f, 15f, 20f, 30f);
	func_6(volLocal_20, 0, false, true);
	volLocal_21 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1789.165f, -815.8882f, 51f, 0f, 0f, 0f, 12.5f, 12.5f, 15f, "m_volBoardedHouseRestriction");
	func_7(volLocal_21, 0, false, true);
	volLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volMacombsEndRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 1881.9042f, -773.98486f, 50f, 0f, 0f, 0f, 24f, 10f, 30f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 1884.9268f, -749.2661f, 50f, 0f, 0f, 0f, 30f, 40f, 30f);
	func_7(volLocal_22, 0, false, true);
	volLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2154.009f, -1293.059f, 50f, 0f, 0f, 71.44212f, 52.13922f, 102.3606f, 40f, "m_volMeatFacotryRestriction");
	func_6(volLocal_23, 0, false, true);
	volLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1892.398f, -1861.472f, 57.8087f, 0f, 0f, -39f, 61f, 40f, 30f, "m_volShadyBelleCampRestriction");

	if (func_8() == 3)
		func_9(volLocal_24, 0, false, true);
	else
		func_6(volLocal_24, 0, false, true);

	if (func_8() == 5)
	{
		volLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLakayCampRestriction");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_25, 2253.741f, -742.7828f, 61.2578f, 0f, 0f, 66f, 28f, 43f, 30f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_25, 2240.492f, -772.2779f, 52.7971f, 0f, 0f, -1f, 51f, 60f, 60f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_25, 2280.981f, -762.709f, 60.5683f, 0f, 0f, -12f, 22f, 46f, 30f);
		func_9(volLocal_25, 0, false, true);
	}

	volLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisRuralHouse");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_26, 2557.4424f, -913.55414f, 43.843704f, 0f, 0f, 25.869274f, 21.310034f, 16.896072f, 13.635855f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_26, 2531.7644f, -930.9406f, 41.67561f, 0f, 0f, 25.869274f, 19.013983f, 16.502909f, 13.635855f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_26, 2508.3877f, -936.4707f, 43.20302f, 0f, 0f, 25.869274f, 10.157813f, 10.611897f, 10.522942f);
	func_9(volLocal_26, 0, false, true);
	volLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquaticRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 2051.69f, -1716.6672f, 45.476383f, 0f, 0f, -22.361008f, 43.12104f, 125.38013f, 18.724556f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 2212.7852f, -513.7505f, 42.642555f, 0f, 0f, 7.584539f, 120.19865f, 73.423035f, 13.125085f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 2123.3167f, -450.16333f, 42.35445f, 0f, 0f, 19.191689f, 52.02959f, 103.78668f, 11.124783f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 1774.6295f, -754.3323f, 40.551804f, 0f, 0f, -48.024715f, 41.931942f, 15.110202f, 8.930059f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 2079.1357f, -508.03748f, 40.543533f, 0f, 0f, 32.833843f, 30.269764f, 12.101878f, 4.106483f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 2072.0896f, -541.5287f, 41.156963f, 0f, 0f, -50.048935f, 49.114185f, 29.080034f, 4.101138f);
	func_10(volLocal_27, true);
	return;
}

void func_3() // Position - 0x800 Hash - 0x6BE53D52 ^0x78DF868C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_11() && !func_12(3) && !func_13(3) && func_14(5) || !func_14(3))
	{
		volLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1793.6027f, -1357.115f, 59.45f, 0f, 0f, 0.830428f, 280.52875f, 283.5385f, 120f, "Caliga Hall - m_volGuardRegistration Agg");
		volLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardRestricted Agg");
		volLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardWarning Agg");
		sLocal_32 = "CALIGA_HALL";
		LAW::_CREATE_GUARD_ZONE(sLocal_32);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 2015.5447f, -1230.9236f, 65.09399f, 0f, 0f, -163.3201f, 47.59768f, 35.07034f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1684.5116f, -1521.5713f, 65.09399f, 0f, 0f, 42.25353f, 67.10063f, 92.68093f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1896.7999f, -1203.7574f, 65.09399f, 0f, 0f, -117.12582f, 80.43096f, 50.729797f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1594.0693f, -1221.3539f, 65.09399f, 0f, 0f, -6.760809f, 29.95752f, 54.788544f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1582.7981f, -1352.3953f, 65.09399f, 0f, 0f, 7.267992f, 29.82035f, 66.61618f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1945.5634f, -1447.9117f, 65.09399f, 0f, 0f, 54.951084f, 136.39612f, 64.92802f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1995.0253f, -1311.8551f, 65.09399f, 0f, 0f, -97.03504f, 114.374306f, 64.92802f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1831.1597f, -1538.8811f, 62.20444f, 0f, 0f, 25.889488f, 158.39366f, 60.541508f, 32.917126f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1839.7334f, -1217.3251f, 65.093994f, 0f, 0f, -131.7009f, 11.350723f, 25.893005f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1575.9937f, -1387.4832f, 65.093994f, 0f, 0f, 11.551748f, 24.333445f, 36.544594f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1584.6537f, -1293.9783f, 65.093994f, 0f, 0f, 7.267992f, 29.82035f, 72.82359f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1623.1194f, -1267.9337f, 65.093994f, 0f, 0f, 33.29202f, 53.21782f, 54.42033f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1606.2593f, -1475.6755f, 65.3014f, 0f, 0f, 21.888727f, 24.333445f, 42.41337f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1882.4387f, -1399.8188f, 65.093994f, 0f, 0f, -117.8525f, 114.374306f, 36.55597f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1923.1163f, -1281.7762f, 65.093994f, 0f, 0f, -117.8525f, 106.44945f, 64.92802f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1758.5358f, -1481.6432f, 65.093994f, 0f, 0f, -69.267494f, 45.783928f, 132.30031f, 30.025177f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1820.7966f, -1440.2549f, 55.323944f, 0f, 0f, -69.24527f, 59.006702f, 183.15244f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1668.8782f, -1456.1654f, 55.323944f, 0f, 0f, -70.83253f, 89.61581f, 108.719604f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1634.383f, -1350.1757f, 55.323944f, 0f, 0f, -69.24527f, 92.78974f, 103.85963f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1761.8724f, -1284.7659f, 55.323944f, 0f, 0f, -69.24527f, 49.45402f, 183.15244f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1867.0037f, -1316.1516f, 55.323944f, 0f, 0f, -69.24527f, 84.884964f, 58.364807f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1782.5159f, -1361.2622f, 59.55394f, 0f, 0f, 20.258823f, 138.00243f, 117.95604f, 68.83923f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1732.4109f, -1432.2838f, 67.17402f, 0f, 0f, 10.793382f, 8.046697f, 19.96923f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1724.8699f, -1402.8099f, 67.17402f, 0f, 0f, 13.501313f, 7.162543f, 55.344494f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1728.568f, -1429.2828f, 67.18265f, 0f, 0f, 8.192761f, 2.675812f, 5.677442f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1729.7047f, -1434.1353f, 67.18265f, 0f, 0f, 17.074152f, 2.675812f, 5.677442f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1714.3895f, -1372.7511f, 58.51695f, 0f, 0f, 21.895008f, 3.164398f, 16.979877f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1697.7107f, -1337.1909f, 58.51695f, 0f, 0f, 25.674936f, 5.856398f, 16.979877f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1705.3364f, -1351.0765f, 58.51695f, 0f, 0f, 32.169937f, 5.856398f, 16.979877f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1711.3995f, -1361.8315f, 58.51695f, 0f, 0f, 21.617748f, 5.856398f, 11.640935f, 70.85926f);
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_31, volLocal_29);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1693.7577f, -1398.4979f, 59.55394f, 0f, 0f, 20.258816f, 96.84109f, 118.605316f, 68.83923f);
		volLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardThreat");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, 1774.2184f, -1361.0415f, 53.054867f, 0f, 0f, 19.748442f, 4.524646f, 8.63999f, 21.724937f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, 1753.4446f, -1368.499f, 53.054867f, 0f, 0f, 19.748442f, 4.524646f, 8.63999f, 21.724937f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, 1763.4965f, -1376.5806f, 53.054867f, 0f, 0f, 19.748442f, 2.945491f, 3.407134f, 21.724937f);
	
		if (func_15(95))
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_30, volLocal_31);
	
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_32, volLocal_30);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_32, volLocal_28);
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_32, volLocal_29);
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_32, volLocal_31);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_32, 1763.708f, -1365.2758f, 46.6304f);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_32, volLocal_28);
	}

	return;
}

void func_4() // Position - 0xEAB Hash - 0x5A04A0B0 ^0xAFCED1F2
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_32);
	return;
}

void func_5(Volume volParam0, BOOL bParam1) // Position - 0xEB9 Hash - 0xD9C0069 ^0xCF70485C
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);

	return;
}

void func_6(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xEFF Hash - 0xAB9EF6C3 ^0x6AF001EA
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_16(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_7(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF83 Hash - 0x32B7D26A ^0x27C31929
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_16(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

int func_8() // Position - 0xFFB Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

void func_9(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1009 Hash - 0x28C5CE40 ^0xE969725E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_16(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_10(Volume volParam0, BOOL bParam1) // Position - 0x1084 Hash - 0xBEDD85C3 ^0xDE436B98
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228767, 0, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(2228767, 0, 0, -1, -1, volParam0);

	return;
}

BOOL func_11() // Position - 0x10CA Hash - 0xC3712DB3 ^0xF130EE35
{
	if (Global_1894899.f_187)
		return true;

	if (func_17(16) && !func_17(21))
		return true;

	return false;
}

BOOL func_12(int iParam0) // Position - 0x10F9 Hash - 0xAD2044D7 ^0xA119206F
{
	if (func_18() != -1)
		return false;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false) && !func_19(Global_1347702[iParam0 /*49*/].f_15) && !func_20(Global_1347702[iParam0 /*49*/].f_13, 4))
		return true;

	return false;
}

BOOL func_13(int iParam0) // Position - 0x114D Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_18() != -1)
		return false;

	if (!func_21(iParam0))
		return false;

	return func_22(Global_1347702[iParam0 /*49*/].f_15);
}

BOOL func_14(int iParam0) // Position - 0x117D Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_18() != -1)
		return false;

	if (!func_21(iParam0))
		return false;

	return func_23(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_15(int iParam0) // Position - 0x11AE Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_24(iParam0))
		return false;

	return func_25(iParam0, 33554432);
}

void func_16(var uParam0, int iParam1) // Position - 0x11CF Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_17(int iParam0) // Position - 0x11E4 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_23(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_18() // Position - 0x1243 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_19(int iParam0) // Position - 0x1251 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_26(iParam0);
	return num == 3 || num == 4;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x126F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(int iParam0) // Position - 0x127E Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_22(int iParam0) // Position - 0x1294 Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return 0;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return 0;
	
		num = func_27(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

BOOL func_23(int iParam0, BOOL bParam1) // Position - 0x12FF Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_26(iParam0))
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

BOOL func_24(int iParam0) // Position - 0x1330 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_25(int iParam0, BOOL bParam1) // Position - 0x1346 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

int func_26(int iParam0) // Position - 0x1379 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_28(iParam0))
		return -1;

	return func_27(iParam0);
}

int func_27(int iParam0) // Position - 0x1395 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_29(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_28(int iParam0) // Position - 0x13D6 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_29(int iParam0) // Position - 0x1409 Hash - 0x6EC15CF9 ^0xE613EBE0
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

