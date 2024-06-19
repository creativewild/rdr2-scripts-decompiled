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
#endregion

void main() // Position - 0x0 Hash - 0x8841D59C ^0x439DA722
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	func_2();
	ENTITY::CREATE_MODEL_HIDE(3366.87f, -680.8071f, 41.6795f, 1f, joaat("ann_jail_main_door_01"), true);
	flag = true;

	while (flag)
	{
		if (func_3() != -1)
		{
			Global_1896646.f_51 = NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(Global_1896646.f_42);
		
			if (func_4(true, true))
				flag = false;
		}
	
		BUILTIN::WAIT(0);
	}

	func_5();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x6C Hash - 0x93CB8779 ^0xB3D1DA9
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
		func_5();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0xA5 Hash - 0x19D5465F ^0x3648B944
{
	volLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCanebreakManor_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 2482.6252f, -400.4976f, 45f, 0f, 0f, 34.000004f, 25f, 35f, 30f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, 2493.368f, -424.8734f, 45f, 0f, 0f, 34.000004f, 25f, 22.5f, 30f);
	func_6(volLocal_16, 0, false);
	volLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquatic_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 2212.7852f, -513.7505f, 42.642555f, 0f, 0f, 7.584539f, 120.19865f, 73.423035f, 13.125085f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 2123.3167f, -450.16333f, 42.35445f, 0f, 0f, 19.191689f, 52.02959f, 103.78668f, 11.124783f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 2079.1357f, -508.03748f, 40.543533f, 0f, 0f, 32.833843f, 30.269764f, 12.101878f, 4.106483f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 2072.0896f, -541.5287f, 41.156963f, 0f, 0f, -50.048935f, 49.114185f, 29.080034f, 4.101138f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 1961.4598f, -546.4242f, 41.596233f, 0f, 0f, 39.876522f, 7.433012f, 46.590137f, 14.381131f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 1943.024f, -490.11182f, 41.596233f, 0f, 0f, 7.680464f, 8.796555f, 80.459625f, 14.381131f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 1940.4108f, -433.7933f, 41.75349f, 0f, 0f, -9.29702f, 7.885364f, 34.769665f, 14.381131f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, 2116.1326f, -512.6361f, 40.472847f, 0f, 0f, -9.836303f, 46.08441f, 5.162654f, 4.285973f);
	func_7(volLocal_17);
	return;
}

int func_3() // Position - 0x27A Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_4(BOOL bParam0, BOOL bParam1) // Position - 0x288 Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_5() // Position - 0x368 Hash - 0x6EC80FD5 ^0xACFE0681
{
	ENTITY::REMOVE_MODEL_HIDE(3366.87f, -680.8071f, 41.6795f, 1f, joaat("ann_jail_main_door_01"), 0);
	return;
}

void func_6(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x38A Hash - 0x70E2F07C ^0x478B1462
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_8(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_7(Volume volParam0) // Position - 0x409 Hash - 0x84C5D4FF ^0x7D12B93C
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228767, 0, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228767, 0, 0, -1, -1, volParam0);
	return;
}

void func_8(var uParam0, int iParam1) // Position - 0x44A Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

