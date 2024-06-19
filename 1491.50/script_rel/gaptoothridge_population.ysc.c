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
#endregion

void main() // Position - 0x0 Hash - 0x914F6D73 ^0x2526B636
{
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	flag = true;

	while (flag)
	{
		BUILTIN::WAIT(0);
	}

	func_3();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x2E Hash - 0x93CB8779 ^0xB3D1DA9
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
		func_3();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0x67 Hash - 0xB400F72F ^0xB542866E
{
	volLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTumbleweed_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, -5534.95f, -2962.377f, 38.52466f, 0f, 0f, 40.25f, 100f, 100f, 50f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, -5620.958f, -2940.959f, 32.69263f, 0f, 0f, 0f, 50f, 50f, 50f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, -5523.102f, -3041.372f, 32.692627f, 0f, 0f, 0f, 50f, 50f, 50f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, -5486.5107f, -2894.6543f, 32.692627f, 0f, 0f, 0f, 75f, 75f, 50f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_14, -5426.3965f, -2936.432f, 32.692627f, 0f, 0f, 0f, 43f, 25f, 50f);
	func_4(volLocal_14, true);
	volLocal_15 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5193.5f, -2122f, 17f, 0f, 0f, 45f, 87f, 77f, 25f, "m_volRathskellerFork_Restriction");
	func_5(volLocal_15, 0, false, true);
	volLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5409.0347f, -3657.2664f, -14.496647f, 0f, 0f, -23.999998f, 36f, 30f, 30f, "m_volAbandonedBarn_Restriction");
	func_6(volLocal_16, 0, false, true);
	return;
}

void func_3() // Position - 0x1B3 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_4(Volume volParam0, BOOL bParam1) // Position - 0x1BB Hash - 0xFE673D83 ^0xF340C8A2
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);

	return;
}

void func_5(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x207 Hash - 0xAB9EF6C3 ^0x6AF001EA
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_7(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_6(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x28B Hash - 0x32B7D26A ^0x27C31929
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_7(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_7(var uParam0, int iParam1) // Position - 0x303 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

