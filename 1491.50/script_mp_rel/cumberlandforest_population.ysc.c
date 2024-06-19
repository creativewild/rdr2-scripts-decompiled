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
	const char* sLocal_22 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xF5A62EAA ^0x85CCD12B
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	func_2();
	func_3();
	func_4();
	flag = true;

	while (flag)
	{
		if (func_5() != -1)
		{
			Global_1896646.f_51 = NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(Global_1896646.f_42);
		
			if (func_6(true, true))
				flag = false;
		}
	
		BUILTIN::WAIT(0);
	}

	func_7();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x5A Hash - 0x93CB8779 ^0xB3D1DA9
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

void func_2() // Position - 0x93 Hash - 0x3EE7B6D7 ^0xA1F2A86F
{
	volLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(352.5f, 1492.5f, 160f, 0f, 0f, 0f, 75f, 75f, 50f, "m_volOldFortWallace_Restriction");
	func_8(volLocal_16);
	volLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBacchusStation_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 576.5f, 1692.5f, 190f, 0f, 0f, -45f, 40f, 22f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 565f, 1713f, 190f, 0f, 0f, 0f, 33f, 33f, 15f);
	func_9(volLocal_17, 0, false);
	volLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, -61.782875f, 1236.5985f, 171.7316f, 0f, 0f, 30.499935f, 17.574043f, 11.672787f, 13.050807f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, -26.603022f, 1223.1174f, 175.03629f, 0f, 0f, 0f, 17.604649f, 14.424184f, 5.206519f);
	func_10(volLocal_18, 0, false);
	volLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_11(volLocal_19);
	return;
}

void func_3() // Position - 0x1C4 Hash - 0xC170911F ^0x77CEE91E
{
	volLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volThreatVolume Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 343.49112f, 1484.9055f, 183.65851f, 0f, 0f, 125.4594f, 50.44129f, 27.586927f, 15.203485f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 366.83383f, 1481.5552f, 183.30519f, 0f, 0f, 70.84903f, 9.450991f, 11.247877f, 14.865822f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 361.69266f, 1499.3264f, 183.07594f, 0f, 0f, 14.507609f, 15.727253f, 35.53953f, 16.715868f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 327.8768f, 1483.8354f, 182.88647f, 0f, 0f, -11.760571f, 17.000563f, 10.342677f, 16.348568f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 319.27216f, 1495.2861f, 184.54126f, 0f, 0f, -53.96134f, 23.05555f, 18.033838f, 21.160778f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 320.7645f, 1509.2908f, 188.61275f, 0f, 0f, -25.218966f, 4.516489f, 7.110216f, 18.254736f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 324.61423f, 1502.853f, 184.90356f, 0f, 0f, -24.952854f, 14.969668f, 13.847939f, 21.227983f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 350.37363f, 1501.7808f, 184.25311f, 0f, 0f, 33.499294f, 9.61958f, 30.690605f, 13.843413f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 352.13867f, 1513.7289f, 182.77222f, 0f, 0f, 24.749197f, 10.802413f, 11.259045f, 15.891851f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 355.69733f, 1518.419f, 184.7034f, 0f, 0f, 0f, 1.984145f, 5.500231f, 12.257863f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 357.93124f, 1517.9846f, 184.7034f, 0f, 0f, -16.950344f, 4.391377f, 5.500231f, 12.257863f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 362.5482f, 1516.3434f, 182.84227f, 0f, 0f, 0f, 3.488632f, 3.541783f, 9.602388f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 366.56018f, 1473.8092f, 182.55685f, 0f, 0f, 0f, 4f, 4f, 7.516581f);
	volLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volRegistrationVolume Agg");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_21, volLocal_20);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 345.19687f, 1487.9547f, 182.55685f, 0f, 0f, 0f, 63.65347f, 68.76788f, 13.833291f);
	sLocal_22 = "OLD_FORT_WALLACE";
	LAW::_CREATE_GUARD_ZONE(sLocal_22);
	LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_22, volLocal_21);
	LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_22, volLocal_20);
	LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_22, volLocal_20);
	LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_22, volLocal_20);
	LAW::_SET_GUARD_ZONE_POSITION(sLocal_22, 346.9555f, 1488.2167f, 182.0683f);
	LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_22, volLocal_20);
	return;
}

void func_4() // Position - 0x470 Hash - 0xC536968E ^0xFA5CE438
{
	func_12(160425541, 1);
	func_12(-1127035680, 1);
	return;
}

int func_5() // Position - 0x48C Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_6(BOOL bParam0, BOOL bParam1) // Position - 0x49A Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_7() // Position - 0x57A Hash - 0x5A04A0B0 ^0xAFCED1F2
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_22);
	return;
}

void func_8(Volume volParam0) // Position - 0x588 Hash - 0xAE5E218A ^0x11F4FAD4
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);
	return;
}

void func_9(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x5CF Hash - 0x70E2F07C ^0x478B1462
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_13(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_10(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x64E Hash - 0x7087DF6F ^0x70765503
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

void func_11(Volume volParam0) // Position - 0x6C4 Hash - 0x14EA5472 ^0xD9C3A23E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);
	return;
}

void func_12(Hash hParam0, int iParam1) // Position - 0x705 Hash - 0x1879777F ^0x1879777F
{
	func_14(hParam0, true, 0, false, false, 0, false, false);
	return;
}

void func_13(var uParam0, int iParam1) // Position - 0x71A Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_14(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x72F Hash - 0xD777F4CF ^0xBFF3124C
{
	func_15(hParam0, false, false);

	if (func_16(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_17(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_18(hParam0, true);
			else
				func_19(hParam0, true);
		else
			func_20(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_21())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

Hash func_15(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7BA Hash - 0xEC5804B5 ^0xE95C34A9
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

BOOL func_16(Hash hParam0) // Position - 0x85E Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_22(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

void func_17(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x879 Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_16(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_18(Hash hParam0, BOOL bParam1) // Position - 0x8B1 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_16(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_19(Hash hParam0, BOOL bParam1) // Position - 0x8DF Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_16(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_20(Hash hParam0, BOOL bParam1) // Position - 0x90D Hash - 0x4844A91D ^0x50E23246
{
	if (func_16(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_21() // Position - 0x93B Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_22(Hash hParam0) // Position - 0x944 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

