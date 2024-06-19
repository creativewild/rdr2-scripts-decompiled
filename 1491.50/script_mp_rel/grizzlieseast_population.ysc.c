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
	Any anLocal_23 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xA037B017 ^0xA36E8F75
{
	var unk;
	int i;
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	func_2();
	func_3();
	unk = 3;
	i = 0;
	unk[0] = VOLUME::CREATE_VOLUME_CYLINDER(224.43282f, 1906.6709f, 203.57024f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	unk[1] = VOLUME::CREATE_VOLUME_CYLINDER(191.76599f, 1831.39f, 198.46141f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	unk[2] = VOLUME::CREATE_VOLUME_CYLINDER(129.10696f, 1878.3724f, 198.1505f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	flag = true;

	while (flag)
	{
		if (func_4() != -1)
		{
			Global_1896646.f_51 = NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(Global_1896646.f_42);
			i = 0;
		
			for (i = 0; i <= 2; i = i + 1)
			{
				func_5(&unk[i]);
			}
		
			if (func_6(true, true))
				flag = false;
		}
	
		BUILTIN::WAIT(0);
	}

	i = 0;

	for (i = 0; i <= 2; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(unk[i]))
			VOLUME::DELETE_VOLUME(unk[i]);
	}

	func_7();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x11B Hash - 0x93CB8779 ^0xB3D1DA9
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

void func_2() // Position - 0x154 Hash - 0x19D5465F ^0x3648B944
{
	volLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLawSpawn_Blocking Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 876.182f, 1657.9315f, 195.61661f, 0f, 0f, 38.345863f, 200f, 18.62544f, 17.045084f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_22, 1125.1733f, 1763.4497f, 195.61661f, 0f, 0f, 23.339922f, 509.48315f, 82.88351f, 17.045084f);
	anLocal_23 = MISC::_ADD_DISPATCH_SPAWN_BLOCKING_AREA(volLocal_22);
	return;
}

void func_3() // Position - 0x1C2 Hash - 0xB46E9B8E ^0x88BDF077
{
	volLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-382.5f, 1917.5f, 225f, 0f, 0f, 0f, 65f, 65f, 40f, "m_volChezPorter_Restriction");
	func_8(volLocal_16);
	volLocal_17 = func_9(volLocal_17);
	func_10(volLocal_17, 0, false);
	volLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(465f, 2215f, 250f, 0f, 0f, 0f, 110f, 110f, 50f, "m_volWapiti_Restriction");
	func_8(volLocal_18);
	volLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(749.1984f, 1823.5621f, 245.6922f, 0f, 0f, 45f, 12.5f, 10f, 30f, "m_volChelonianHut_Restriction");
	func_11(volLocal_19, 0, false);
	volLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1701.5323f, 1509.786f, 147.55392f, 0f, 0f, 8.3768f, 10.105434f, 7.489669f, 5.494266f, "m_volVeteransHomestead_Restriction");
	func_12(volLocal_20, 0, false);
	volLocal_21 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_8(volLocal_21);
	return;
}

int func_4() // Position - 0x2DA Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

void func_5(var uParam0) // Position - 0x2E8 Hash - 0x28DECACE ^0xEFF5A8B0
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		return;

	if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), *uParam0, true, 0))
		return;

	func_13(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_DROWNING"), false, false);
	return;
}

BOOL func_6(BOOL bParam0, BOOL bParam1) // Position - 0x32F Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_7() // Position - 0x40F Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_14();
	return;
}

void func_8(Volume volParam0) // Position - 0x41B Hash - 0x14EA5472 ^0xD9C3A23E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);
	return;
}

Volume func_9(Volume volParam0) // Position - 0x45C Hash - 0x11EAD39C ^0xBBF0BE69
{
	volParam0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RIVER_RESTRICTION_GRZ_EAST");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volParam0, 65.5f, 1660f, 115f, 0f, 0f, 6f, 50f, 215f, 200f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volParam0, 162.5f, 1645f, 115f, 0f, 0f, -7f, 200f, 225f, 200f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volParam0, 265f, 1645f, 115f, 0f, 0f, 45f, 200f, 150f, 200f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volParam0, 387.5f, 1750f, 115f, 0f, 0f, 11f, 200f, 75f, 200f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volParam0, 410f, 1722.5f, 115f, 0f, 0f, 33f, 150f, 75f, 200f);
	return volParam0;
}

void func_10(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x542 Hash - 0x828A8BB1 ^0x68BBC4EE
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_15(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_11(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x5AC Hash - 0x271123A7 ^0x11BA4E3D
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

void func_12(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x61F Hash - 0x70E2F07C ^0x478B1462
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

void func_13(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x69E Hash - 0x4CB0E6C4 ^0x188C4066
{
	Ped ped;

	if (ENTITY::_IS_ENTITY_FROZEN(Global_1295666.f_3))
		return;

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
	{
		if (bParam2)
			AUDIO::DISABLE_PED_PAIN_AUDIO(Global_1295666.f_3, true);
	
		if (bParam3)
			PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 243, true);
	
		ped = PLAYER::PLAYER_PED_ID();
		ped.f_1 = pedParam0;
		ped.f_2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
		ped.f_3 = 1;
		ped.f_5 = hParam1;
		ped.f_12 = hParam1 != 0 && WEAPON::IS_WEAPON_MELEE_WEAPON(hParam1);
		func_16(&ped, &(Global_1102813.f_3599));
		PED::_FORCE_PED_DEATH(PLAYER::PLAYER_PED_ID(), pedParam0, hParam1);
	}

	return;
}

void func_14() // Position - 0x73C Hash - 0x7530092C ^0xE92E665B
{
	if (VOLUME::DOES_VOLUME_EXIST(volLocal_22))
		MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(anLocal_23);

	return;
}

void func_15(var uParam0, int iParam1) // Position - 0x753 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_16(var uParam0, var uParam1) // Position - 0x768 Hash - 0xB034AA47 ^0x7B94DE54
{
	if (func_17(uParam0, uParam1))
		uParam1->f_63 = func_18(uParam1);

	return;
}

BOOL func_17(var uParam0, var uParam1) // Position - 0x788 Hash - 0x9E80801A ^0xFF488215
{
	BOOL flag;

	func_19(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_62 = uParam0->f_5;
	flag = true;
	func_20(uParam1);

	if (!func_21(*uParam0, &(uParam1->f_18)))
		flag = false;
	else
		!func_22(&(uParam1->f_18), &(uParam1->f_24));

	if (uParam0->f_5 == joaat("WEAPON_FALL"))
	{
		if (*uParam0 != uParam0->f_1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && ENTITY::IS_ENTITY_A_PED(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}

	if (uParam0->f_5 == joaat("WEAPON_DROWNING"))
	{
		if (*uParam0 != uParam0->f_1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && ENTITY::IS_ENTITY_A_PED(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}

	if (uParam0->f_5 == joaat("WEAPON_DROWNING_IN_VEHICLE"))
		return true;

	if (!func_21(uParam0->f_1, &(uParam1->f_6)))
		flag = false;
	else
		!func_22(&(uParam1->f_6), &(uParam1->f_12));

	if (flag)
	{
	}
	else
	{
		return true;
	}

	return flag;
}

int func_18(var uParam0) // Position - 0x88D Hash - 0x3A162CD8 ^0x5AD052F9
{
	int num;

	if (uParam0->f_18 == 6)
		return 0;

	if (uParam0->f_30.f_31)
		return 2;

	if (uParam0->f_30.f_5 == joaat("WEAPON_FALL") && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 2;
		}
	}

	if (uParam0->f_30.f_5 == joaat("WEAPON_DROWNING") || uParam0->f_30.f_5 == joaat("WEAPON_DROWNING_IN_VEHICLE") && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 1;
		}
	}

	if (uParam0->f_30.f_5 == joaat("WEAPON_POISON"))
	{
		if (Global_1940026.f_28.f_1 == 1)
			return 28;
	
		if (uParam0->f_18 == 1 && uParam0->f_6 == 1 || uParam0->f_12 == 1 && uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3)
			return 2;
	}

	num = func_23(uParam0);

	if (num != 0)
		return num;

	num = func_24(uParam0);

	if (num != 0)
		return num;

	num = func_25(uParam0);

	if (num != 0)
		return num;

	if (uParam0->f_18 == 1)
		return 1;

	return 1;
}

void func_19(var uParam0) // Position - 0x9DA Hash - 0x4797EE95 ^0xFFFB3A0C
{
	var unk;

	func_26(uParam0);
	func_26(&(uParam0->f_6));
	func_26(&(uParam0->f_12));
	func_26(&(uParam0->f_18));
	func_26(&(uParam0->f_24));
	uParam0->f_30 = { unk };
	uParam0->f_63 = 0;
	return;
}

int func_20(var uParam0) // Position - 0xA19 Hash - 0x9638D769 ^0x2114C3B7
{
	*uParam0 = 1;
	uParam0->f_3 = PLAYER::PLAYER_ID();
	uParam0->f_2 = PLAYER::GET_PLAYER_PED(uParam0->f_3);
	uParam0->f_1 = func_27(uParam0->f_2);
	uParam0->f_4 = PLAYER::GET_PLAYER_TEAM(uParam0->f_3);
	uParam0->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_2);
	return 1;
}

BOOL func_21(Ped pedParam0, var uParam1) // Position - 0xA5E Hash - 0x2E17FB8D ^0x84807E7C
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = pedParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = joaat("REL_NO_RELATIONSHIP");
		return false;
	}

	if (ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
			*uParam1 = 1;
		else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
			*uParam1 = 3;
		else if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
			*uParam1 = 2;
		else
			*uParam1 = 5;
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
	{
		*uParam1 = 4;
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return false;
	}

	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = pedParam0;
			uParam1->f_2 = pedIndexFromEntityIndex;
			uParam1->f_3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uParam1->f_2);
			uParam1->f_4 = PLAYER::GET_PLAYER_TEAM(uParam1->f_3);
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
	
		case 2:
			uParam1->f_1 = pedParam0;
			uParam1->f_2 = pedIndexFromEntityIndex;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
	
		case 3:
			uParam1->f_1 = pedParam0;
			uParam1->f_2 = pedIndexFromEntityIndex;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
	
		case 4:
			uParam1->f_1 = pedParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = joaat("REL_NO_RELATIONSHIP");
			break;
	
		case 5:
			uParam1->f_1 = pedParam0;
			uParam1->f_2 = pedIndexFromEntityIndex;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
	
		case 6:
			uParam1->f_1 = pedParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = joaat("REL_NO_RELATIONSHIP");
			break;
	}

	return true;
}

BOOL func_22(var uParam0, var uParam1) // Position - 0xC1E Hash - 0x5F8BA395 ^0x7B44D6C2
{
	switch (*uParam0)
	{
		case 3:
			return func_21(PED::_GET_RIDER_OF_MOUNT(uParam0->f_2, false), uParam1);
	
		case 4:
			return func_21(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1), uParam1);
	
		default:
		
	}

	return false;
}

int func_23(var uParam0) // Position - 0xC60 Hash - 0x8497BF32 ^0x43E7977F
{
	BOOL flag;
	int num;
	int num2;
	int relationshipBetweenPeds;

	if (uParam0->f_18 != 1)
		return 0;

	if (uParam0->f_6 == 2)
		return 0;

	flag = false;

	if (uParam0->f_6 == 1)
	{
		flag = true;
		num = uParam0->f_6.f_4;
		num2 = uParam0->f_18.f_4;
		relationshipBetweenPeds = PED::GET_RELATIONSHIP_BETWEEN_PEDS(uParam0->f_6.f_2, uParam0->f_18.f_2);
	}
	else if (uParam0->f_12 == 1 && uParam0->f_6 == 3 || uParam0->f_6 == 4)
	{
		flag = true;
		num = uParam0->f_12.f_4;
		num2 = uParam0->f_18.f_4;
		relationshipBetweenPeds = PED::GET_RELATIONSHIP_BETWEEN_PEDS(uParam0->f_12.f_2, uParam0->f_18.f_2);
	}

	if (!flag)
		return 0;

	if (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3)
	{
		return 2;
	}
	else if (num == 8 && num2 == 8)
	{
		return 8;
	}
	else if (num == 8 && num2 != 8)
	{
		return 5;
	}
	else if (num != 8 && num2 == 8)
	{
		return 6;
	}
	else if (num == -1 && num2 == -1 && NETWORK::_0xFE53B1F8D43F19BF(uParam0->f_6.f_3, uParam0->f_18.f_3) != 1)
	{
		return 7;
	}
	else if (num == num2 || NETWORK::_0xFE53B1F8D43F19BF(uParam0->f_6.f_3, uParam0->f_18.f_3) == 1)
	{
		return 9;
	}
	else if (num != num2)
	{
		return 7;
	}
	else
	{
		switch (relationshipBetweenPeds)
		{
			case 0:
				return 4;
		
			case 1:
				return 9;
		
			case 2:
				return 9;
		
			case 3:
				return 9;
		
			case 4:
				return 7;
		
			case 5:
				return 4;
		
			case 6:
				return 7;
		
			case 7:
				return 4;
		
			default:
			
		}
	
		return 4;
	}

	return 0;
}

int func_24(var uParam0) // Position - 0xE3C Hash - 0x498ED180 ^0xF8672708
{
	BOOL flag;
	int relationshipBetweenGroups;

	if (uParam0->f_6 == 2)
		return 0;

	if (uParam0->f_18 == 1)
		return 0;

	if (uParam0->f_18 == 4)
		return 18;

	if (uParam0->f_18 == 6)
		return 17;

	flag = false;

	if (uParam0->f_6 == 1)
	{
		flag = true;
		relationshipBetweenGroups = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uParam0->f_6.f_5, uParam0->f_18.f_5);
	}
	else if (uParam0->f_12 == 1 && uParam0->f_6 == 3 || uParam0->f_6 == 4)
	{
		flag = true;
		relationshipBetweenGroups = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uParam0->f_12.f_5, uParam0->f_18.f_5);
	}

	if (!flag)
		return 0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18.f_1))
		if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(uParam0->f_18.f_1)))
			return 19;

	if (LAW::_0x40851BCC33ACD9AB(uParam0->f_18.f_2))
		return 11;

	if (!PED::IS_PED_HUMAN(uParam0->f_18.f_2) && !PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(uParam0->f_18.f_1)) && FLOCK::_GET_ANIMAL_RARITY(uParam0->f_18.f_2) == 2 && FLOCK::_GET_ANIMAL_IS_WILD(uParam0->f_18.f_2) == true)
		return 16;

	switch (uParam0->f_18.f_5)
	{
		case joaat("rel_gt_ffa"):
			return 20;
	
		case joaat("rel_gang_odriscoll"):
			return 12;
	
		case joaat("rel_civmale"):
			return 10;
	
		case joaat("rel_gt_team_7"):
			return 20;
	
		case joaat("rel_domesticated_animal"):
			if (FLOCK::_GET_ANIMAL_IS_WILD(uParam0->f_18.f_2) == true)
				return 14;
		
			return 10;
	
		case joaat("rel_player_19"):
			return 20;
	
		case joaat("rel_gang_smugglers"):
			return 12;
	
		case joaat("rel_player_5"):
			return 20;
	
		case joaat("rel_gang_skinner_brothers"):
			return 12;
	
		case joaat("rel_gt_team_2"):
			return 20;
	
		case joaat("rel_hen_animal"):
			return 10;
	
		case joaat("rel_player_18"):
			return 20;
	
		case joaat("rel_player_11"):
			return 20;
	
		case joaat("rel_player_21"):
			return 20;
	
		case joaat("rel_gt_team_1"):
			return 20;
	
		case joaat("rel_player_0"):
			return 20;
	
		case joaat("rel_player_9"):
			return 20;
	
		case joaat("REL_WILD_ANIMAL_PREDATOR"):
			return 15;
	
		case joaat("REL_WILD_ANIMAL"):
			return 14;
	
		case joaat("rel_player_12"):
			return 20;
	
		case joaat("rel_player_20"):
			return 20;
	
		case joaat("rel_civnative"):
			return 10;
	
		case joaat("rel_gunslingers"):
			return 12;
	
		case joaat("REL_BOAR"):
			return 15;
	
		case joaat("rel_player_13"):
			return 20;
	
		case joaat("rel_pinkertons"):
			return 11;
	
		case joaat("rel_player_26"):
			return 20;
	
		case joaat("rel_player_24"):
			return 20;
	
		case joaat("rel_player_2"):
			return 20;
	
		case joaat("rel_guama_law"):
			return 11;
	
		case joaat("rel_gang_creole"):
			return 12;
	
		case joaat("rel_player_27"):
			return 20;
	
		case joaat("rel_player_1"):
			return 20;
	
		case joaat("rel_player_22"):
			return 20;
	
		case joaat("rel_player_4"):
			return 20;
	
		case joaat("rel_gang_lemoyne_raiders"):
			return 12;
	
		case joaat("rel_gt_team_4"):
			return 20;
	
		case joaat("rel_player_10"):
			return 20;
	
		case joaat("rel_cop"):
			return 11;
	
		case joaat("rel_player_23"):
			return 20;
	
		case joaat("rel_player_25"):
			return 20;
	
		case joaat("rel_player_3"):
			return 20;
	
		case joaat("rel_civfemale"):
			return 10;
	
		case joaat("rel_player_31"):
			return 20;
	
		case joaat("REL_ALLIGATOR"):
			return 15;
	
		case joaat("rel_gt_team_3"):
			return 20;
	
		case joaat("rel_player_17"):
			return 20;
	
		case joaat("rel_gang_dutchs"):
			return 12;
	
		case joaat("rel_gang_murfree_brood"):
			return 12;
	
		case joaat("rel_player_30"):
			return 20;
	
		case joaat("rel_gt_team_6"):
			return 20;
	
		case joaat("rel_player_16"):
			return 20;
	
		case joaat("rel_criminals"):
			return 12;
	
		case joaat("rel_player_enemy"):
			return 12;
	
		case joaat("rel_player_6"):
			return 20;
	
		case joaat("rel_player_15"):
			return 20;
	
		case joaat("rel_player_28"):
			return 20;
	
		case joaat("rel_player_29"):
			return 20;
	
		case joaat("rel_network_free_agent"):
			return 20;
	
		case joaat("rel_player_8"):
			return 20;
	
		case joaat("rel_gt_team_5"):
			return 20;
	
		case joaat("rel_gt_team_0"):
			return 20;
	
		case joaat("REL_WILD_ANIMAL_BIRD"):
			return 14;
	
		case joaat("rel_player_7"):
			return 20;
	
		case joaat("rel_player_cop"):
			return 20;
	
		case joaat("rel_player_14"):
			return 20;
	
		default:
		
	}

	switch (relationshipBetweenGroups)
	{
		case 0:
			return 13;
	
		case 1:
			return 10;
	
		case 2:
			return 10;
	
		case 3:
			return 10;
	
		case 4:
			return 12;
	
		case 5:
			return 13;
	
		case 6:
			return 12;
	
		case 7:
			return 13;
	
		default:
		
	}

	return 13;
}

int func_25(var uParam0) // Position - 0x12B4 Hash - 0xF0C73614 ^0x15F864F
{
	BOOL flag;
	BOOL flag2;
	int relationshipBetweenGroups;
	Hash group1;

	if (uParam0->f_6 == 1)
		return 0;

	if (uParam0->f_18 != 1)
		return 0;

	flag = false;
	flag2 = false;

	if (uParam0->f_12 == 2 && uParam0->f_6 == 3 || uParam0->f_6 == 4)
	{
		flag = true;
		group1 = uParam0->f_12.f_5;
		relationshipBetweenGroups = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(group1, uParam0->f_18.f_5);
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12.f_2) && LAW::_0x40851BCC33ACD9AB(uParam0->f_12.f_2))
			flag2 = true;
	}
	else if (uParam0->f_6 != 1 && uParam0->f_6 != 0)
	{
		flag = true;
		group1 = uParam0->f_6.f_5;
		relationshipBetweenGroups = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(group1, uParam0->f_18.f_5);
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6.f_2) && LAW::_0x40851BCC33ACD9AB(uParam0->f_6.f_2))
			flag2 = true;
	}

	if (!flag)
		return 0;

	if (flag2)
		return 22;

	switch (group1)
	{
		case joaat("rel_gt_ffa"):
			return 27;
	
		case joaat("rel_gang_odriscoll"):
			return 23;
	
		case joaat("rel_civmale"):
			return 21;
	
		case joaat("rel_gt_team_7"):
			return 27;
	
		case joaat("rel_domesticated_animal"):
			return 21;
	
		case joaat("rel_player_19"):
			return 27;
	
		case joaat("rel_gang_smugglers"):
			return 23;
	
		case joaat("rel_player_5"):
			return 27;
	
		case joaat("rel_gang_skinner_brothers"):
			return 23;
	
		case joaat("rel_gt_team_2"):
			return 27;
	
		case joaat("rel_hen_animal"):
			return 21;
	
		case joaat("rel_player_18"):
			return 27;
	
		case joaat("rel_player_11"):
			return 27;
	
		case joaat("rel_player_21"):
			return 27;
	
		case joaat("rel_gt_team_1"):
			return 27;
	
		case joaat("rel_player_0"):
			return 27;
	
		case joaat("rel_player_9"):
			return 27;
	
		case joaat("REL_WILD_ANIMAL_PREDATOR"):
			return 26;
	
		case joaat("REL_WILD_ANIMAL"):
			return 25;
	
		case joaat("rel_player_12"):
			return 27;
	
		case joaat("rel_player_20"):
			return 27;
	
		case joaat("rel_civnative"):
			return 21;
	
		case joaat("rel_gunslingers"):
			return 23;
	
		case joaat("REL_BOAR"):
			return 26;
	
		case joaat("rel_player_13"):
			return 27;
	
		case joaat("rel_pinkertons"):
			return 22;
	
		case joaat("rel_player_26"):
			return 27;
	
		case joaat("rel_player_24"):
			return 27;
	
		case joaat("rel_player_2"):
			return 27;
	
		case joaat("rel_guama_law"):
			return 22;
	
		case joaat("rel_gang_creole"):
			return 23;
	
		case joaat("rel_player_27"):
			return 27;
	
		case joaat("rel_player_1"):
			return 27;
	
		case joaat("rel_player_22"):
			return 27;
	
		case joaat("rel_player_4"):
			return 27;
	
		case joaat("rel_gang_lemoyne_raiders"):
			return 23;
	
		case joaat("rel_gt_team_4"):
			return 27;
	
		case joaat("rel_player_10"):
			return 27;
	
		case joaat("rel_cop"):
			return 22;
	
		case joaat("rel_player_23"):
			return 27;
	
		case joaat("rel_player_25"):
			return 27;
	
		case joaat("rel_player_3"):
			return 27;
	
		case joaat("rel_civfemale"):
			return 21;
	
		case joaat("rel_player_31"):
			return 27;
	
		case joaat("REL_ALLIGATOR"):
			return 26;
	
		case joaat("rel_gt_team_3"):
			return 27;
	
		case joaat("rel_player_17"):
			return 27;
	
		case joaat("rel_gang_dutchs"):
			return 23;
	
		case joaat("rel_gang_murfree_brood"):
			return 23;
	
		case joaat("rel_player_30"):
			return 27;
	
		case joaat("rel_gt_team_6"):
			return 27;
	
		case joaat("rel_player_16"):
			return 27;
	
		case joaat("rel_criminals"):
			return 23;
	
		case joaat("rel_player_enemy"):
			return 23;
	
		case joaat("rel_player_6"):
			return 27;
	
		case joaat("rel_player_15"):
			return 27;
	
		case joaat("rel_player_28"):
			return 27;
	
		case joaat("rel_player_29"):
			return 27;
	
		case joaat("rel_network_free_agent"):
			return 27;
	
		case joaat("rel_player_8"):
			return 27;
	
		case joaat("rel_gt_team_5"):
			return 27;
	
		case joaat("rel_gt_team_0"):
			return 27;
	
		case joaat("REL_WILD_ANIMAL_BIRD"):
			return 25;
	
		case joaat("rel_player_7"):
			return 27;
	
		case joaat("rel_player_cop"):
			return 27;
	
		case joaat("rel_player_14"):
			return 27;
	
		default:
		
	}

	switch (relationshipBetweenGroups)
	{
		case 0:
			return 24;
	
		case 1:
			return 21;
	
		case 2:
			return 21;
	
		case 3:
			return 21;
	
		case 4:
			return 23;
	
		case 5:
			return 24;
	
		case 6:
			return 23;
	
		case 7:
			return 24;
	
		default:
		
	}

	return 24;
}

void func_26(var uParam0) // Position - 0x16DC Hash - 0x207E1E71 ^0x9B8CB5EF
{
	var unk;

	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = joaat("REL_NO_RELATIONSHIP");
	*uParam0 = { unk };
	return;
}

var func_27(var uParam0) // Position - 0x1706 Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

