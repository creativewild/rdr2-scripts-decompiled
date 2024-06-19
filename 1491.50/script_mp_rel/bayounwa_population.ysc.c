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
	Volume volLocal_22 = 0;
	Volume volLocal_23 = 0;
	Volume volLocal_24 = 0;
	Volume volLocal_25 = 0;
	Volume volLocal_26 = 0;
	Volume volLocal_27 = 0;
	Volume volLocal_28 = 0;
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
	
		BUILTIN::WAIT(0);
	}

	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x56 Hash - 0x93CB8779 ^0xB3D1DA9
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

void func_2() // Position - 0x8F Hash - 0xEE967B59 ^0xBC8BE76F
{
	volLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCaligaHall_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1765f, -1365f, 50f, 0f, 0f, 20f, 30f, 30f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1752.5f, -1332.5f, 50f, 0f, 0f, 7f, 100f, 150f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1850f, -1330f, 50f, 0f, 0f, 169f, 150f, 250f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1650f, -1465f, 50f, 0f, 0f, 26f, 150f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1647.5f, -1377.5f, 50f, 0f, 0f, 9f, 200f, 100f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1592.5f, -1282.5f, 50f, 0f, 0f, -2f, 100f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1660f, -1300f, 50f, 0f, 0f, 50f, 100f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1705f, -1532.5f, 50f, 0f, 0f, 53f, 150f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1810f, -1485f, 50f, 0f, 0f, 115f, 250f, 175f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1927.5f, -1447.5f, 50f, 0f, 0f, 146f, 150f, 175f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1975f, -1342.5f, 50f, 0f, 0f, 170f, 150f, 125f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1750f, -1582.5f, 50f, 0f, 0f, 86f, 100f, 75f, 40f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 1977.5f, -1300f, 50f, 0f, 0f, 147f, 135f, 100f, 40f);
	func_7(volLocal_16);
	volLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2090f, -1817.5f, 39f, 0f, 0f, 0f, 18f, 18f, 10f, "m_volCrawdadWilliesRestriction");
	func_7(volLocal_17);
	volLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2125.35f, -597.55f, 45f, 0f, 0f, 45f, 50f, 70f, 10f, "m_volLagrasRestriction");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_18, 4295, 4210688, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_18, 4295, 4210688, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(4295, 4210688, 0, -1, -1, volLocal_18);
	volLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLakayRestriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, 2252.5f, -762.5f, 45f, 0f, 0f, 0f, 40f, 40f, 10f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, 2288f, -723f, 45f, 0f, 0f, -40f, 12f, 15f, 10f);
	func_7(volLocal_19);
	volLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2011.9f, -840.7f, 44.7f, 0f, 0f, 0f, 98.7f, 64.1f, 10f, "m_volOrangePlantationRestriction");
	func_7(volLocal_20);
	volLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisFountainAquaticRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 2331.8687f, -1216.2615f, 45.5096f, 0f, 0f, 0f, 18f, 9f, 5f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 2401.4084f, -1036.9542f, 43.691425f, 0f, 0f, 0f, 3.15f, 3.15f, 3.297321f);
	func_8(volLocal_21, 512, false);
	volLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisNorthShacksRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 2352.919f, -862.3568f, 45f, 0f, 0f, 18f, 7.5f, 7.5f, 30f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 2352.267f, -854.82f, 45f, 0f, 0f, 36f, 10f, 10f, 30f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 2370.363f, -861.704f, 45f, 0f, 0f, 21f, 15f, 20f, 30f);
	func_8(volLocal_22, 0, false);
	volLocal_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1789.165f, -815.8882f, 51f, 0f, 0f, 0f, 12.5f, 12.5f, 15f, "m_volBoardedHouseRestriction");
	func_9(volLocal_23, 0, false);
	volLocal_24 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volMacombsEndRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_24, 1881.9042f, -773.98486f, 50f, 0f, 0f, 0f, 24f, 10f, 30f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_24, 1884.9268f, -749.2661f, 50f, 0f, 0f, 0f, 30f, 40f, 30f);
	func_9(volLocal_24, 0, false);
	volLocal_25 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2154.009f, -1293.059f, 50f, 0f, 0f, 71.44212f, 52.13922f, 102.3606f, 40f, "m_volMeatFacotryRestriction");
	func_8(volLocal_25, 0, false);
	volLocal_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1892.398f, -1861.472f, 57.8087f, 0f, 0f, -39f, 61f, 40f, 30f, "m_volShadyBelleCampRestriction");
	func_8(volLocal_26, 0, false);
	volLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisRuralHouse");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 2557.4424f, -913.55414f, 43.843704f, 0f, 0f, 25.869274f, 21.310034f, 16.896072f, 13.635855f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 2531.7644f, -930.9406f, 41.67561f, 0f, 0f, 25.869274f, 19.013983f, 16.502909f, 13.635855f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_27, 2508.3877f, -936.4707f, 43.20302f, 0f, 0f, 25.869274f, 10.157813f, 10.611897f, 10.522942f);
	func_10(volLocal_27, 0, false);
	volLocal_28 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquaticRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_28, 2051.69f, -1716.6672f, 45.476383f, 0f, 0f, -22.361008f, 43.12104f, 125.38013f, 18.724556f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_28, 2212.7852f, -513.7505f, 42.642555f, 0f, 0f, 7.584539f, 120.19865f, 73.423035f, 13.125085f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_28, 2123.3167f, -450.16333f, 42.35445f, 0f, 0f, 19.191689f, 52.02959f, 103.78668f, 11.124783f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_28, 1774.6295f, -754.3323f, 40.551804f, 0f, 0f, -48.024715f, 41.931942f, 15.110202f, 8.930059f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_28, 2079.1357f, -508.03748f, 40.543533f, 0f, 0f, 32.833843f, 30.269764f, 12.101878f, 4.106483f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_28, 2072.0896f, -541.5287f, 41.156963f, 0f, 0f, -50.048935f, 49.114185f, 29.080034f, 4.101138f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_28, 1961.4598f, -546.4242f, 41.596233f, 0f, 0f, 39.876522f, 7.433012f, 46.590137f, 14.381131f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_28, 1943.024f, -490.11182f, 41.596233f, 0f, 0f, 7.680464f, 8.796555f, 80.459625f, 14.381131f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_28, 1940.4108f, -433.7933f, 41.75349f, 0f, 0f, -9.29702f, 7.885364f, 34.769665f, 14.381131f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_28, 2116.1326f, -512.6361f, 40.472847f, 0f, 0f, -9.836303f, 46.08441f, 5.162654f, 4.285973f);
	func_11(volLocal_28);
	return;
}

void func_3() // Position - 0x830 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

int func_4() // Position - 0x838 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_5(BOOL bParam0, BOOL bParam1) // Position - 0x846 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_6() // Position - 0x926 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_7(Volume volParam0) // Position - 0x92E Hash - 0x14EA5472 ^0xD9C3A23E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);
	return;
}

void func_8(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x96F Hash - 0x70E2F07C ^0x478B1462
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_12(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_9(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x9EE Hash - 0x271123A7 ^0x11BA4E3D
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_12(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_10(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0xA61 Hash - 0x7087DF6F ^0x70765503
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_12(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_11(Volume volParam0) // Position - 0xAD7 Hash - 0x84C5D4FF ^0x7D12B93C
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228767, 0, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228767, 0, 0, -1, -1, volParam0);
	return;
}

void func_12(var uParam0, int iParam1) // Position - 0xB18 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

