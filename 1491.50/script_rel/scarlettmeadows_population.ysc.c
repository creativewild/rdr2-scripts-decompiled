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
	Volume volLocal_32 = 0;
	Volume volLocal_33 = 0;
	Volume volLocal_34 = 0;
	const char* sLocal_35 = 0;
	Volume volLocal_36 = 0;
	Volume volLocal_37 = 0;
	Volume volLocal_38 = 0;
	Volume volLocal_39 = 0;
	const char* sLocal_40 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x35D2AA33 ^0x4DC9D131
{
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3();
	func_4();
	func_5(1264.8778f, -402.9338f, 96.61f, "UI_LETTER_SC_REPO_T1", "UI_LETTER_SC_REPO", 0, -1, Global_1347702[137 /*49*/].f_15);
	func_5(1265.2294f, -411.9569f, 96.6217f, "UI_LETTER_SC_REPO_T1", "UI_LETTER_SC_REPO", 0, -1, Global_1347702[137 /*49*/].f_15);
	flag = true;

	while (flag)
	{
		BUILTIN::WAIT(0);
	}

	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x7E Hash - 0x93CB8779 ^0xB3D1DA9
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

void func_2() // Position - 0xB7 Hash - 0xAD1FEAC0 ^0xBD5E5CD3
{
	volLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBraithwaites_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1147.5f, -1930f, 55f, 0f, 0f, 0f, 425f, 225f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 997.5f, -2037.5f, 55f, 0f, 0f, -32f, 100f, 75f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 980f, -1420f, 55f, 0f, 0f, 0f, 185f, 75f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 995f, -1532.5f, 55f, 0f, 0f, 0f, 250f, 150f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1102.5f, -1525f, 55f, 0f, 0f, -58f, 275f, 100f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1110f, -1712.5f, 55f, 0f, 0f, 0f, 350f, 210f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1275f, -1730f, 55f, 0f, 0f, -70f, 225f, 100f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1275f, -1730f, 55f, 0f, 0f, -70f, 225f, 100f, 35f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 905f, -1795f, 52f, 0f, 0f, 0f, 60f, 60f, 20f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 895f, -1900f, 52f, 0f, 0f, 0f, 85f, 85f, 20f);
	func_7(volLocal_14, true);
	volLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCaligaHall_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1765f, -1365f, 50f, 0f, 0f, 20f, 30f, 30f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1752.5f, -1332.5f, 50f, 0f, 0f, 7f, 100f, 150f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1850f, -1330f, 50f, 0f, 0f, 169f, 150f, 250f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1650f, -1465f, 50f, 0f, 0f, 26f, 150f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1647.5f, -1377.5f, 50f, 0f, 0f, 9f, 200f, 100f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1592.5f, -1282.5f, 50f, 0f, 0f, -2f, 100f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1660f, -1300f, 50f, 0f, 0f, 50f, 100f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1705f, -1532.5f, 50f, 0f, 0f, 53f, 150f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1810f, -1485f, 50f, 0f, 0f, 115f, 250f, 175f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1927.5f, -1447.5f, 50f, 0f, 0f, 146f, 150f, 175f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1975f, -1342.5f, 50f, 0f, 0f, 170f, 150f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1750f, -1582.5f, 50f, 0f, 0f, 86f, 100f, 75f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 1977.5f, -1300f, 50f, 0f, 0f, 147f, 135f, 100f, 40f);
	func_7(volLocal_15, true);
	volLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1325f, -2285f, 35f, 0f, 0f, 0f, 55f, 55f, 20f, "m_volCatfishJacksons_Restriction");
	func_8(volLocal_16, true);
	volLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volDairyFarm_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 1415f, -850.5f, 61f, 0f, 0f, 6f, 115f, 75f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 1450f, -897.5f, 61f, 0f, 0f, -50f, 75f, 60f, 35f);
	func_8(volLocal_17, true);
	volLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1622.5f, -365f, 62f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volLonniesShack_Restriction");
	func_8(volLocal_18, true);
	volLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volPondHutCrops_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, 1055f, -985f, 55f, 0f, 0f, -68f, 100f, 50f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, 1112.5f, -945f, 55f, 0f, 0f, 10f, 100f, 50f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, 1160f, -975f, 55f, 0f, 0f, -44f, 100f, 50f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, 1110f, -997.5f, 55f, 0f, 0f, 6f, 130f, 75f, 35f);
	func_8(volLocal_19, true);
	volLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volRedBarnCrops_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 990f, -1102.5f, 55f, 0f, 0f, 0f, 125f, 75f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 977.5f, -1060f, 55f, 0f, 0f, 0f, 100f, 75f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 980f, -1127.5f, 55f, 0f, 0f, -34f, 75f, 75f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 1040f, -1145f, 55f, 0f, 0f, 12f, 115f, 50f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 1040f, -1080f, 55f, 0f, 0f, -54f, 110f, 50f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 1057.5f, -1120f, 72f, 0f, 0f, -62f, 20f, 40f, 35f);
	func_8(volLocal_20, true);
	volLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volYellowShackFarm_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 1422.5f, -1605f, 60f, 0f, 0f, -25f, 110f, 40f, 35f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 1435f, -1640f, 60f, 0f, 0f, -5f, 60f, 35f, 35f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, 1462.5f, -1580f, 55f, 0f, 0f, 0f, 35f, 35f, 25f);
	func_8(volLocal_22, true);
	volLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volKudzu_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_23, 1783.37f, -403.6557f, 50f, 0f, 0f, 0f, 15f, 15f, 10f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_23, 1705.752f, -407.7098f, 50f, 0f, 0f, 0f, 8f, 8f, 10f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_23, 1743.89f, -412.7235f, 50f, 0f, 0f, 0f, 10f, 10f, 10f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_23, 1702.182f, -385.1766f, 50f, 0f, 0f, 0f, 10f, 10f, 10f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_23, 1777.5435f, -470.48523f, 50f, 0f, 0f, 0f, 10f, 10f, 10f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_23, 1741.846f, -463.6705f, 50f, 0f, 0f, 0f, 5f, 5f, 10f);
	func_9(volLocal_23, 0, false, true);
	volLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volRhodes_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 1366.5309f, -1244.1764f, 86f, 0f, 0f, 24.99999f, 35f, 45f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 1446.5446f, -1321.9401f, 86f, 0f, 0f, -25f, 50f, 60f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 1419.1686f, -1296.9817f, 86f, 0f, 0f, 17.999998f, 70f, 75f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 1431.117f, -1384.8312f, 86f, 0f, 0f, -27f, 85f, 80f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 1321.0995f, -1341.1487f, 86f, 0f, 0f, -41.5f, 290f, 100f, 40f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 1341.1754f, -1189.3447f, 86f, 0f, 0f, -12.999999f, 35f, 40f, 20f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 1284.103f, -1229.0417f, 86f, 0f, 0f, -24f, 50f, 50f, 20f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 1310.1931f, -1148.4506f, 86f, 0f, 0f, -24f, 40f, 40f, 20f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 1345.9679f, -1315.7898f, 86f, 0f, 0f, 30.000002f, 100f, 150f, 40f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 1394.8175f, -1142.353f, 86f, 0f, 0f, 0f, 50f, 45f, 20f);
	func_10(volLocal_21, 0, false, true);
	volLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2154.009f, -1293.059f, 50f, 0f, 0f, 71.44212f, 52.13922f, 102.3606f, 40f, "m_volMeatFacotryRestriction");
	func_10(volLocal_24, 0, false, true);
	volLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIslandRestriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_25, 237.21304f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.43071f, 81.38799f, 25.722523f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_25, -401.96164f, -1012.6383f, 42.9804f, 0f, 0f, -51.00734f, 240.53346f, 103.68801f, 24.89919f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_25, 440.32156f, -1462.0266f, 55.90892f, 0f, 0f, 13.402258f, 421.29385f, 982.8425f, 99.70844f);
	func_11(volLocal_25, 0, false, true);
	volLocal_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1892.398f, -1861.472f, 57.8087f, 0f, 0f, -39f, 61f, 40f, 30f, "m_volShadyBelleCampRestriction");

	if (func_12() == 3)
		func_13(volLocal_26, 0, false, true);
	else
		func_10(volLocal_26, 0, false, true);

	if (func_12() == 2)
	{
		volLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volClemensPointCampRestriction");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 676.1342f, -1244.41f, 60f, 0f, 0f, 0f, 34f, 40f, 35f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 714.5854f, -1246.16f, 60f, 0f, 0f, 0f, 25f, 25f, 35f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 665.8077f, -1253.38f, 67.0239f, 0f, 0f, -45f, 61f, 43f, 37f);
		func_13(volLocal_27, 0, false, true);
	}

	volLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1134.166f, -977.60596f, 70.21151f, 0f, 0f, -36.638454f, 15.33205f, 13.647432f, 11.364527f, "m_volLoveShackRestriction");
	func_13(volLocal_28, 0, false, true);
	volLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volScarlettMeadowsHorseShop_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1199.7004f, -218.24916f, 108f, 0f, 0f, 18f, 55f, 27f, 30f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1168.627f, -181.73279f, 108f, 0f, 0f, 12f, 15f, 22f, 30f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1209.2804f, -192.79865f, 108f, 0f, 0f, 21f, 20f, 20f, 30f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1192.4312f, -209.9298f, 108f, 0f, 0f, 45f, 38f, 27f, 30f);
	func_10(volLocal_29, 0, false, true);
	return;
}

void func_3() // Position - 0xD04 Hash - 0x2E69472C ^0x47F45758
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		volLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Braithwaite Manor - m_volGuardRestricted Agg");
		sLocal_35 = "BRAITHWAITE_MANOR";
		LAW::_CREATE_GUARD_ZONE(sLocal_35);
		volLocal_32 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Braithwaite Manor - m_volGuardThreat Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, 1011.25946f, -1770.558f, 54.474f, 0f, 0f, 0f, 32.240562f, 25.425041f, 29.43f);
	
		if (func_15(func_14(20), true) && func_16(0) != func_14(26))
		{
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, 1002.5689f, -1779.3743f, 51.878765f, 0f, 0f, 0f, 110.644066f, 258.019f, 44.246166f);
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_31, volLocal_32);
		}
	
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1118.4402f, -1929.9598f, 60.68164f, 0f, 0f, 0f, 501.54242f, 235.47078f, 34.78567f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 875.22797f, -1914.4028f, 44.913685f, 0f, 0f, -3.879577f, 55.835705f, 52.571087f, 38.739017f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1211.3473f, -1752.2622f, 60.68164f, 0f, 0f, -0.332804f, 81.77956f, 131.71375f, 34.78567f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 905.61865f, -1799.341f, 44.913696f, 0f, 0f, 25.889574f, 55.835705f, 29.760439f, 38.739017f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 836.1697f, -1453.6814f, 44.91368f, 0f, 0f, 87.68149f, 93.74749f, 154.58678f, 38.739017f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1115.3953f, -1525.6227f, 44.913666f, 0f, 0f, 31.335901f, 36.92995f, 80.09516f, 38.739017f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1105.2686f, -1614.5848f, 60.68164f, 0f, 0f, -80.074196f, 230.3989f, 96.574585f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1067.1208f, -1446.755f, 60.68164f, 0f, 0f, -146.6021f, 45.74788f, 59.07155f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1263.9825f, -1687.4596f, 60.68164f, 0f, 0f, -42.72432f, 86.92022f, 64.20754f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1290.883f, -1787.4784f, 60.68164f, 0f, 0f, 0f, 93.158455f, 74.91695f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1281.606f, -1726.193f, 60.68164f, 0f, 0f, 13.672419f, 86.92022f, 64.20754f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1239.4895f, -1656.3505f, 60.68164f, 0f, 0f, 1.90049f, 86.92022f, 64.20754f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 871.9549f, -1582.5657f, 60.68164f, 0f, 0f, 41.592575f, 88.5479f, 214.94164f, 34.78567f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1223.2778f, -1631.8242f, 44.91368f, 0f, 0f, 6.249954f, 55.835705f, 29.760439f, 38.739017f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1038.4175f, -2041.7483f, 44.913685f, 0f, 0f, -3.879577f, 83.999146f, 48.882294f, 37.704292f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1107.553f, -2053.2847f, 44.91368f, 0f, 0f, 142.32904f, 83.999146f, 51.027603f, 37.704292f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1230.1946f, -2047.5823f, 60.68164f, 0f, 0f, 10.412063f, 112.58592f, 18.675562f, 33.750946f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1152.3507f, -1732.3385f, 60.68164f, 0f, 0f, -0.332802f, 230.22232f, 207.02464f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1165.9054f, -1602.2366f, 60.68164f, 0f, 0f, -35.152504f, 86.92022f, 64.20754f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 971.02985f, -1523.872f, 60.68164f, 0f, 0f, -1.077511f, 70.56633f, 272.17447f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 940.7705f, -1713.1622f, 60.68164f, 0f, 0f, -0.332802f, 100.60582f, 412.94083f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1045.9248f, -1525.8468f, 60.68164f, 0f, 0f, -0.113033f, 52.126965f, 272.17447f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1010.2972f, -1753.0582f, 60.68164f, 0f, 0f, 0.031469f, 60.592625f, 206.084f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 1046.2996f, -1388.0975f, 60.68164f, 0f, 0f, 3.738009f, 51.485123f, 8.848132f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_31, 976.0677f, -1386.4202f, 60.68164f, 0f, 0f, -8.397814f, 64.26683f, 12.412266f, 34.78567f);
		volLocal_33 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Braithwaite Manor - m_volGuardWarning Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_33, volLocal_31);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_33, 1011.0309f, -1627.8746f, 54.474f, 0f, 0f, 0f, 57.80508f, 84.32041f, 42.66307f);
		volLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Braithwaite Manor - m_volGuardRegistration Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_30, volLocal_33);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_30, 1011.0309f, -1498.0731f, 54.474f, 0f, 0f, 0f, 57.80508f, 256.8415f, 42.66307f);
		volLocal_34 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1016.87476f, -1739.8976f, 44.913666f, 0f, 0f, 31.3359f, 330.0987f, 510.54404f, 38.739017f, "Braithwaite Manor - m_volGuardDefensive");
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_35, volLocal_32);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_35, volLocal_30);
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_35, volLocal_31);
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_35, volLocal_33);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_35, 1010.9274f, -1769.488f, 48.4326f);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_35, volLocal_34);
	}

	return;
}

void func_4() // Position - 0x12B2 Hash - 0x6BE53D52 ^0x78DF868C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_17() && !func_18(3) && !func_19(3) && func_20(5) || !func_20(3))
	{
		volLocal_36 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1793.6027f, -1357.115f, 59.45f, 0f, 0f, 0.830428f, 280.52875f, 283.5385f, 120f, "Caliga Hall - m_volGuardRegistration Agg");
		volLocal_37 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardRestricted Agg");
		volLocal_39 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardWarning Agg");
		sLocal_40 = "CALIGA_HALL";
		LAW::_CREATE_GUARD_ZONE(sLocal_40);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 2015.5447f, -1230.9236f, 65.09399f, 0f, 0f, -163.3201f, 47.59768f, 35.07034f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1684.5116f, -1521.5713f, 65.09399f, 0f, 0f, 42.25353f, 67.10063f, 92.68093f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1896.7999f, -1203.7574f, 65.09399f, 0f, 0f, -117.12582f, 80.43096f, 50.729797f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1594.0693f, -1221.3539f, 65.09399f, 0f, 0f, -6.760809f, 29.95752f, 54.788544f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1582.7981f, -1352.3953f, 65.09399f, 0f, 0f, 7.267992f, 29.82035f, 66.61618f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1945.5634f, -1447.9117f, 65.09399f, 0f, 0f, 54.951084f, 136.39612f, 64.92802f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1995.0253f, -1311.8551f, 65.09399f, 0f, 0f, -97.03504f, 114.374306f, 64.92802f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1831.1597f, -1538.8811f, 62.20444f, 0f, 0f, 25.889488f, 158.39366f, 60.541508f, 32.917126f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1839.7334f, -1217.3251f, 65.093994f, 0f, 0f, -131.7009f, 11.350723f, 25.893005f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1575.9937f, -1387.4832f, 65.093994f, 0f, 0f, 11.551748f, 24.333445f, 36.544594f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1584.6537f, -1293.9783f, 65.093994f, 0f, 0f, 7.267992f, 29.82035f, 72.82359f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1623.1194f, -1267.9337f, 65.093994f, 0f, 0f, 33.29202f, 53.21782f, 54.42033f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1606.2593f, -1475.6755f, 65.3014f, 0f, 0f, 21.888727f, 24.333445f, 42.41337f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1882.4387f, -1399.8188f, 65.093994f, 0f, 0f, -117.8525f, 114.374306f, 36.55597f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1923.1163f, -1281.7762f, 65.093994f, 0f, 0f, -117.8525f, 106.44945f, 64.92802f, 30.025177f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1758.5358f, -1481.6432f, 65.093994f, 0f, 0f, -69.267494f, 45.783928f, 132.30031f, 30.025177f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1820.7966f, -1440.2549f, 55.323944f, 0f, 0f, -69.24527f, 59.006702f, 183.15244f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1668.8782f, -1456.1654f, 55.323944f, 0f, 0f, -70.83253f, 89.61581f, 108.719604f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1634.383f, -1350.1757f, 55.323944f, 0f, 0f, -69.24527f, 92.78974f, 103.85963f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1761.8724f, -1284.7659f, 55.323944f, 0f, 0f, -69.24527f, 49.45402f, 183.15244f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1867.0037f, -1316.1516f, 55.323944f, 0f, 0f, -69.24527f, 84.884964f, 58.364807f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1782.5159f, -1361.2622f, 59.55394f, 0f, 0f, 20.258823f, 138.00243f, 117.95604f, 68.83923f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1732.4109f, -1432.2838f, 67.17402f, 0f, 0f, 10.793382f, 8.046697f, 19.96923f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1724.8699f, -1402.8099f, 67.17402f, 0f, 0f, 13.501313f, 7.162543f, 55.344494f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1728.568f, -1429.2828f, 67.18265f, 0f, 0f, 8.192761f, 2.675812f, 5.677442f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1729.7047f, -1434.1353f, 67.18265f, 0f, 0f, 17.074152f, 2.675812f, 5.677442f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1714.3895f, -1372.7511f, 58.51695f, 0f, 0f, 21.895008f, 3.164398f, 16.979877f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1697.7107f, -1337.1909f, 58.51695f, 0f, 0f, 25.674936f, 5.856398f, 16.979877f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1705.3364f, -1351.0765f, 58.51695f, 0f, 0f, 32.169937f, 5.856398f, 16.979877f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 1711.3995f, -1361.8315f, 58.51695f, 0f, 0f, 21.617748f, 5.856398f, 11.640935f, 70.85926f);
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_39, volLocal_37);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_39, 1693.7577f, -1398.4979f, 59.55394f, 0f, 0f, 20.258816f, 96.84109f, 118.605316f, 68.83923f);
		volLocal_38 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardThreat");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_38, 1774.2184f, -1361.0415f, 53.054867f, 0f, 0f, 19.748442f, 4.524646f, 8.63999f, 21.724937f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_38, 1753.4446f, -1368.499f, 53.054867f, 0f, 0f, 19.748442f, 4.524646f, 8.63999f, 21.724937f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_38, 1763.4965f, -1376.5806f, 53.054867f, 0f, 0f, 19.748442f, 2.945491f, 3.407134f, 21.724937f);
	
		if (func_21(95))
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_38, volLocal_39);
	
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_40, volLocal_38);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_40, volLocal_36);
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_40, volLocal_37);
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_40, volLocal_39);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_40, 1763.708f, -1365.2758f, 46.6304f);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_40, volLocal_36);
	}

	return;
}

void func_5(float fParam0, float fParam1, float fParam2, char* sParam3, char* sParam4, const char* sParam5, int iParam6, int iParam7) // Position - 0x195D Hash - 0x4AF79246 ^0x848284B1
{
	int num;

	if (_IS_NULL_VECTOR(fParam0))
		return;

	if (func_23(&num, sParam3, sParam4, sParam5, iParam6, iParam7))
		Global_1933981.f_13[num /*11*/] = { fParam0 };

	return;
}

void func_6() // Position - 0x1996 Hash - 0xDC586AA9 ^0x47787CF7
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_35);
	LAW::_REMOVE_GUARD_ZONE(sLocal_40);
	return;
}

void func_7(Volume volParam0, BOOL bParam1) // Position - 0x19AA Hash - 0xFE673D83 ^0xF340C8A2
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);

	return;
}

void func_8(Volume volParam0, BOOL bParam1) // Position - 0x19F6 Hash - 0xD9C0069 ^0xCF70485C
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);

	return;
}

void func_9(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A3C Hash - 0x32B7D26A ^0x27C31929
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_24(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_10(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AB4 Hash - 0xAB9EF6C3 ^0x6AF001EA
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_24(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_11(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1B38 Hash - 0xA0926E1 ^0x971FFD25
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_24(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

eStackSize func_12() // Position - 0x1BB3 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

void func_13(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1BC1 Hash - 0x28C5CE40 ^0xE969725E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_24(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

int func_14(int iParam0) // Position - 0x1C3C Hash - 0x7647021A ^0xF0097466
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

BOOL func_15(int iParam0, BOOL bParam1) // Position - 0x1C4E Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_25(iParam0))
	{
		case 5:
			return true;
	
		case 6:
			if (bParam1)
				return true;
			break;
	}

	return false;
}

int func_16(int iParam0) // Position - 0x1C7F Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

BOOL func_17() // Position - 0x1C91 Hash - 0xC3712DB3 ^0xF130EE35
{
	if (Global_1894899.f_187)
		return true;

	if (func_26(16) && !func_26(21))
		return true;

	return false;
}

BOOL func_18(int iParam0) // Position - 0x1CC0 Hash - 0xAD2044D7 ^0xA119206F
{
	if (func_27() != -1)
		return false;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false) && !func_28(Global_1347702[iParam0 /*49*/].f_15) && !func_29(Global_1347702[iParam0 /*49*/].f_13, 4))
		return true;

	return false;
}

BOOL func_19(int iParam0) // Position - 0x1D14 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_27() != -1)
		return false;

	if (!func_30(iParam0))
		return false;

	return func_31(Global_1347702[iParam0 /*49*/].f_15);
}

BOOL func_20(int iParam0) // Position - 0x1D44 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_27() != -1)
		return false;

	if (!func_30(iParam0))
		return false;

	return func_15(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_21(int iParam0) // Position - 0x1D75 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_32(iParam0))
		return false;

	return func_33(iParam0, 33554432);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1D96 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_23(var uParam0, char* sParam1, char* sParam2, const char* sParam3, int iParam4, int iParam5) // Position - 0x1DC0 Hash - 0xA11F6E1B ^0x4B5DF8DC
{
	int i;

	if (Global_1933981.f_10 != Global_1894899.f_2)
	{
		func_34();
		Global_1933981.f_10 = Global_1894899.f_2;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_1933981.f_13[i /*11*/].f_9 == 0)
		{
			*uParam0 = i;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				Global_1933981.f_13[i /*11*/].f_3 = MISC::GET_HASH_KEY(sParam1);
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
				Global_1933981.f_13[i /*11*/].f_4 = MISC::GET_HASH_KEY(sParam2);
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				Global_1933981.f_13[i /*11*/].f_5 = MISC::GET_HASH_KEY(sParam3);
		
			Global_1933981.f_13[i /*11*/].f_6 = iParam4;
			Global_1933981.f_13[i /*11*/].f_10 = iParam5;
			func_35(&(Global_1933981.f_13[i /*11*/].f_9), 1);
			Global_1933981.f_12 = Global_1933981.f_12 + 1;
		
			if (Global_1933981.f_12 > 5)
				Global_1933981.f_12 = 5;
		
			return true;
		}
	}

	return false;
}

void func_24(var uParam0, int iParam1) // Position - 0x1EB3 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_25(int iParam0) // Position - 0x1EC8 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_36(iParam0))
		return -1;

	return func_37(iParam0);
}

BOOL func_26(int iParam0) // Position - 0x1EE4 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_15(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_27() // Position - 0x1F43 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_28(int iParam0) // Position - 0x1F51 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_25(iParam0);
	return num == 3 || num == 4;
}

BOOL func_29(int iParam0, int iParam1) // Position - 0x1F6F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_30(int iParam0) // Position - 0x1F7E Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_31(int iParam0) // Position - 0x1F94 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_37(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

BOOL func_32(int iParam0) // Position - 0x1FFF Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_33(int iParam0, BOOL bParam1) // Position - 0x2015 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

void func_34() // Position - 0x2048 Hash - 0xED5E453E ^0x72EF0CF4
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		Global_1933981.f_13[i /*11*/].f_3 = -1;
		Global_1933981.f_13[i /*11*/].f_4 = -1;
		Global_1933981.f_13[i /*11*/].f_5 = -1;
		Global_1933981.f_13[i /*11*/].f_6 = -1;
		Global_1933981.f_13[i /*11*/].f_10 = -1;
		func_35(&(Global_1933981.f_13[i /*11*/].f_9), 0);
	}

	Global_1933981.f_11 = 0;
	Global_1933981.f_12 = 0;
	Global_1933981.f_9 = -1;
	return;
}

void func_35(int iParam0, int iParam1) // Position - 0x20C9 Hash - 0x6140DB6F ^0x6140DB6F
{
	if (*iParam0 != iParam1)
		*iParam0 = iParam1;

	return;
}

BOOL func_36(int iParam0) // Position - 0x20DE Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_37(int iParam0) // Position - 0x2111 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_38(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_38(int iParam0) // Position - 0x2152 Hash - 0x6EC15CF9 ^0xE613EBE0
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

