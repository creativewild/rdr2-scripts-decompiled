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
	int iLocal_24 = 0;
	float fLocal_25 = 0f;
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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	Vehicle veLocal_45 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x96285BC6 ^0x96285BC6
{
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_25 = 7f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 100f;
	fLocal_29 = 100f;
	fLocal_30 = 0f;
	fLocal_31 = 200f;
	uLocal_42 = { 2590.4f, 151.7f, 56.8f };
	func_1();
	func_2();
	func_3();
	func_4(&uLocal_14, 1);
	PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("GLO_WILDERNESS_TRAPPER"), "Roanoke/ROA_Trapper_1");

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER"))))
		PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER")));

	flag = true;

	while (flag)
	{
		func_5(&uLocal_14);
		func_6();
		func_7();
		BUILTIN::WAIT(0);
	}

	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xA3 Hash - 0xD0925A9B ^0xC30A3E3B
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		func_8();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0xC4 Hash - 0xA6D34823 ^0x90D5E97A
{
	Vector3 vector;
	Vector3 vector2;

	vector = { fLocal_25, fLocal_26, fLocal_27 };
	vector2 = { fLocal_28, fLocal_29, fLocal_30 };
	FLOCK::_0xF2CCA7B68CFAB2B9(joaat("SPECIES_BIRD_CROW"), 2638.8f, 1972.1f, 185.1f, vector, vector2, 9.5f, 50f, 1f, 6f);
	return;
}

void func_3() // Position - 0x10C Hash - 0xAB2BEB8F ^0x20DDAFF3
{
	volLocal_32 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	func_9(volLocal_32, true);
	volLocal_33 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2930f, 1360f, 75f, 0f, 0f, 0f, 170f, 170f, 75f, "m_volAnnesburg_Restriction");
	func_10(volLocal_33, true);

	if (func_11() == 6)
	{
		volLocal_34 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBeaverHollow_Restriction");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_34, 2361.296f, 1344.457f, 123.1171f, 0f, 0f, 22f, 38f, 52f, 35f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_34, 2326.496f, 1326.393f, 125.5935f, 0f, 0f, 0f, 9f, 7f, 35f);
		func_12(volLocal_34, 0, false, true);
	}
	else
	{
		volLocal_34 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2350f, 1370f, 105f, 0f, 0f, 0f, 35f, 35f, 15f, "m_volBeaverHollow_Restriction");
		func_10(volLocal_34, true);
	}

	volLocal_35 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2590f, 827.5f, 85f, 0f, 0f, 0f, 80f, 80f, 20f, "m_volButchersCreek_Restriction");
	func_10(volLocal_35, true);
	volLocal_36 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2270f, -95f, 45f, 0f, 0f, 0f, 65f, 65f, 15f, "m_volMacleansHouse_Restriction");
	func_9(volLocal_36, true);
	volLocal_37 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3085f, 2232.5f, 210f, 0f, 0f, 7f, 130f, 150f, 75f, "m_volRockySeven_Restriction");
	func_13(volLocal_37, 0, false, true);
	volLocal_38 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2965f, 475f, 45f, 0f, 0f, 0f, 75f, 75f, 15f, "m_volTallulahJetty_Restriction");
	func_13(volLocal_38, 0, false, true);
	volLocal_39 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2518.25f, 2293f, 185.25f, 0f, 0f, 0f, 40f, 40f, 25f, "m_volTeslaLab_Restriction");
	func_13(volLocal_39, 0, false, true);
	volLocal_40 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2964f, 780f, 52f, 0f, 0f, 0f, 45f, 35f, 25f, "m_volVanHornHorseShop_Restriction");
	func_13(volLocal_40, 0, false, true);
	return;
}

void func_4(var uParam0, int iParam1) // Position - 0x341 Hash - 0x14D831A2 ^0x6022E62
{
	uParam0->f_1 = iParam1;
	*uParam0 = 0;
	uParam0->f_2 = func_14(iParam1);
	uParam0->f_5 = { func_15(iParam1) };
	return;
}

void func_5(var uParam0) // Position - 0x369 Hash - 0xBB372775 ^0x177430E5
{
	float num;

	switch (*uParam0)
	{
		case 0:
			num = func_16(Global_35, uParam0->f_5, true);
		
			if (num > BUILTIN::POW(400f, 2f) || num < BUILTIN::POW(100f, 2f))
				return;
		
			if (func_17(uParam0->f_1))
				func_18(uParam0, 1);
			else
				func_18(uParam0, 6);
			break;
	
		case 1:
			TASK::SET_SCENARIO_GROUP_ENABLED("Special_Ambient_Horse", true);
			STREAMING::REQUEST_MODEL(func_19(uParam0->f_1), false);
			PED::_RESERVE_AMBIENT_PEDS(1);
			uParam0->f_9 = 1;
			func_18(uParam0, 2);
			break;
	
		case 2:
			if (!STREAMING::HAS_MODEL_LOADED(func_19(uParam0->f_1)))
				return;
		
			if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
				return;
		
			num = func_16(Global_35, uParam0->f_5, true);
		
			if (num < BUILTIN::POW(100f, 2f))
			{
				func_20(uParam0);
				func_18(uParam0, 6);
				return;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				uParam0->f_3 = func_21(func_19(uParam0->f_1), uParam0->f_5, 0, false, true, uParam0->f_2, false, false, false, false, true, false, false);
				return;
			}
		
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, false);
			func_22(uParam0);
			func_18(uParam0, 3);
			[[fallthrough]];
	
		case 3:
			func_23(uParam0->f_3);
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
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_19(uParam0->f_1));
			func_18(uParam0, 4);
			break;
	
		case 4:
			if (func_24(uParam0))
				func_18(uParam0, 5);
			break;
	
		case 5:
			func_25(uParam0->f_1);
			uParam0->f_8 = 1;
			func_20(uParam0);
			func_18(uParam0, 6);
			break;
	
		case 6:
			break;
	}

	return;
}

void func_6() // Position - 0x57F Hash - 0x4FD0270C ^0x88AC53B8
{
	var expected;
	int actual;
	var minimum;
	var maximum;
	Vector3 vector;
	var unk7;
	int i;
	Ped pedInDraftHarness;

	if (func_26() != -1)
		return;

	if (!func_27(56) || func_27(57) || func_28(57))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_45))
			func_29();
	
		return;
	}

	switch (iLocal_24)
	{
		case 0:
			if (func_30(Global_35, uLocal_42, fLocal_31, false, true))
			{
				STREAMING::REQUEST_MODEL(joaat("wagon02x"), false);
				iLocal_24 = 1;
			}
			break;
	
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("wagon02x")))
			{
				veLocal_45 = VEHICLE::CREATE_VEHICLE(joaat("wagon02x"), uLocal_42, 22.22f, true, true, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(veLocal_45, true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_45, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_45, 2);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_45, false);
				ENTITY::SET_ENTITY_PROOFS(veLocal_45, 6, true);
				iLocal_24 = 2;
			}
			break;
	
		case 2:
			VEHICLE::GET_DRAFT_ANIMAL_COUNT(veLocal_45, &expected, &actual);
		
			if (actual >= VEHICLE::_GET_NUM_DRAFT_VEHICLE_HARNESS_PED(joaat("wagon02x")))
			{
				MISC::GET_MODEL_DIMENSIONS(joaat("wagon02x"), &minimum, &maximum);
				vector = { maximum - minimum };
				vector = { vector * { 0.9f, 0.9f, 0.9f } };
			
				for (i = 0; i < 6; i = i + 1)
				{
					pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(veLocal_45, i);
				
					if (!ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
					{
						PED::SET_PED_CONFIG_FLAG(pedInDraftHarness, 301, true);
						PED::SET_PED_CONFIG_FLAG(pedInDraftHarness, 253, true);
						ENTITY::SET_ENTITY_PROOFS(pedInDraftHarness, 6, true);
						PED::SET_PED_CAN_BE_TARGETTED(pedInDraftHarness, false);
						MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(pedInDraftHarness), &minimum, &maximum);
						unk7 = { maximum - minimum };
						unk7 = { unk7 * { 0.9f, 0.9f, 0.9f } };
					}
				}
			
				vector.f_1 = vector.f_1 + (unk7.f_1 / 2f);
				volLocal_41 = VOLUME::CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(veLocal_45, true, false), ENTITY::GET_ENTITY_ROTATION(veLocal_45, 2), vector);
				PED::_ATTACH_VOLUME_TO_ENTITY(volLocal_41, veLocal_45, 0f, unk7.f_1 / 2f, 0f, 0f, 0f, 0f, 2, true);
				PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(volLocal_41, 7);
				iLocal_24 = 3;
			}
			break;
	
		case 3:
			if (!func_30(Global_35, uLocal_42, fLocal_31 * 1.5f, false, true))
			{
				func_29();
				iLocal_24 = 0;
			}
			break;
	}

	return;
}

void func_7() // Position - 0x77D Hash - 0x9B9E88BD ^0x962E7CB2
{
	PersChar persChar;
	PersChar persChar2;

	if (MISC::GET_FRAME_COUNT() % 20 != 0)
		return;

	persChar = PERSCHAR::_0x112DDF56300BC6E5(joaat("ROA_MLH_RANCHHAND"));
	persChar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("ROA_MLH_RANCHHAND_2"));

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar) || !PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar2))
		return;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar) && PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar2))
		if (!func_31(2024769126))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(516817794, Global_36))
				func_32(2024769126);
	else if (func_31(2024769126))
		if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(516817794, Global_36))
			func_33(2024769126);

	return;
}

void func_8() // Position - 0x829 Hash - 0x6ECEF558 ^0xB0FFD05F
{
	func_20(&uLocal_14);
	func_29();
	FLOCK::_0xFB16F08F47B83B4C(joaat("SPECIES_BIRD_CROW"));
	return;
}

void func_9(Volume volParam0, BOOL bParam1) // Position - 0x844 Hash - 0xD9C0069 ^0xCF70485C
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);

	return;
}

void func_10(Volume volParam0, BOOL bParam1) // Position - 0x88A Hash - 0xFE673D83 ^0xF340C8A2
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);

	return;
}

eStackSize func_11() // Position - 0x8D6 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

void func_12(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8E4 Hash - 0x28C5CE40 ^0xE969725E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_34(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_13(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x95F Hash - 0xAB9EF6C3 ^0x6AF001EA
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_34(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

int func_14(int iParam0) // Position - 0x9E3 Hash - 0x2B6E690 ^0x2B6E690
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
			if (func_35())
				num = 1;
			break;
	}

	return num;
}

Vector3 func_15(int iParam0) // Position - 0xA29 Hash - 0x563C355B ^0x563C355B
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

float func_16(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xAB4 Hash - 0x1A58F423 ^0x2317B76D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_36(entityCoords, vParam1);
}

BOOL func_17(int iParam0) // Position - 0xB04 Hash - 0xF4891FF8 ^0xF4891FF8
{
	Hash hash;
	eStackSize stackSize;

	if (func_26() != -1)
		return false;

	if (!func_27(15))
		return false;

	hash = func_19(iParam0);

	if (func_37(hash))
		if (!func_38())
			return false;

	stackSize = Global_40.f_11945[iParam0];
	func_40(&stackSize, 0, 0, 0, func_39(iParam0), 0, 0, false);

	if (!func_41(stackSize, true))
		return false;

	if (func_42(iParam0))
		return false;

	return true;
}

void func_18(var uParam0, int iParam1) // Position - 0xB7E Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

ePedType func_19(int iParam0) // Position - 0xB8B Hash - 0xF10AB031 ^0x3529F5B1
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

void func_20(var uParam0) // Position - 0xBFE Hash - 0x82985C28 ^0x957259AB
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
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_19(uParam0->f_1));
		uParam0->f_9 = 0;
	}

	return;
}

Ped func_21(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0xC6E Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_43(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_22(var uParam0) // Position - 0xCB0 Hash - 0xBB5003A ^0xAFD93741
{
	float num;
	Vector3 vector;

	num = func_44(uParam0->f_1);
	vector = { num, num, num };
	uParam0->f_4 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_5, func_45(), vector, "Special Ambient Horse Unalerted");
	return;
}

void func_23(Ped pedParam0) // Position - 0xCE6 Hash - 0x4C9A12AA ^0x5B9D01EA
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

BOOL func_24(var uParam0) // Position - 0xD64 Hash - 0x7DFFEA8D ^0xA8B72821
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

	if (func_42(uParam0->f_1))
		return true;

	return false;
}

void func_25(int iParam0) // Position - 0xDE7 Hash - 0x107F0910 ^0x107F0910
{
	Global_40.f_11945[iParam0] = func_46();
	return;
}

BOOL func_26() // Position - 0xDFD Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_27(int iParam0) // Position - 0xE0B Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_47(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_28(int iParam0) // Position - 0xE6A Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_48(Global_1835011[iParam0 /*74*/].f_1);
}

void func_29() // Position - 0xE96 Hash - 0xD5200358 ^0x69AD9EE4
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_45))
		VEHICLE::DELETE_VEHICLE(&veLocal_45);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_41))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(volLocal_41);
		VOLUME::DELETE_VOLUME(volLocal_41);
	}

	return;
}

BOOL func_30(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0xEC2 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_36(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_31(int iParam0) // Position - 0xF1D Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_49(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

void func_32(int iParam0) // Position - 0xF6C Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_49(iParam0, 1);
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

void func_33(int iParam0) // Position - 0x1005 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_49(iParam0, 1);
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

void func_34(var uParam0, int iParam1) // Position - 0x108B Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_35() // Position - 0x10A0 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

float func_36(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x10C1 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_37(Hash hParam0) // Position - 0x10DF Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_38() // Position - 0x1121 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

int func_39(int iParam0) // Position - 0x1132 Hash - 0xDAA98FD3 ^0xDAA98FD3
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

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1189 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_50(*uParam0);
	i = func_51(*uParam0);
	num2 = func_52(*uParam0);
	j = func_53(*uParam0);
	k = func_54(*uParam0);
	l = func_55(*uParam0);

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

	for (m = func_56(i, num); num2 > m; m = func_56(i, num))
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

	func_57(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_41(eStackSize essParam0, BOOL bParam1) // Position - 0x1311 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_59(func_58(), essParam0, bParam1);
}

BOOL func_42(int iParam0) // Position - 0x1325 Hash - 0xA3777B6 ^0xA3777B6
{
	Hash hash;
	int i;

	hash = func_19(iParam0);

	for (i = 0; i < 7; i = i + 1)
	{
		if (func_60(i) == hash)
			return true;
	}

	return false;
}

void func_43(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1357 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_61(eptParam1))
		{
			func_62(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_63(pedParam0, 0, true);
	
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
			func_64(pedParam0, false);
			flag = true;
		}
	
		func_65(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

float func_44(int iParam0) // Position - 0x1438 Hash - 0x2E856262 ^0x2E856262
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

Vector3 func_45() // Position - 0x146D Hash - 0xA9B5EBA8 ^0xA9B5EBA8
{
	return 0f, 0f, 0f;
}

eStackSize func_46() // Position - 0x1478 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_47(int iParam0, BOOL bParam1) // Position - 0x1484 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_66(iParam0))
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

BOOL func_48(int iParam0) // Position - 0x14B5 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_66(iParam0);
	return num == 3 || num == 4;
}

int func_49(int iParam0, int iParam1) // Position - 0x14D3 Hash - 0x8FA0E29 ^0xC3F68E87
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

int func_50(eStackSize essParam0) // Position - 0x25EC Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

int func_51(eStackSize essParam0) // Position - 0x2611 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_52(eStackSize essParam0) // Position - 0x2624 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_53(eStackSize essParam0) // Position - 0x2637 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_54(eStackSize essParam0) // Position - 0x264A Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

int func_55(eStackSize essParam0) // Position - 0x265C Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 0) & 63;
}

int func_56(int iParam0, int iParam1) // Position - 0x266E Hash - 0x893AC59E ^0x893AC59E
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

void func_57(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2708 Hash - 0xA65AB937 ^0xA65AB937
{
	func_68(uParam0, iParam6);
	func_69(uParam0, iParam5);
	func_70(uParam0, iParam4);
	func_71(uParam0, iParam3);
	func_72(uParam0, iParam2);
	func_73(uParam0, iParam1);
	return;
}

eStackSize func_58() // Position - 0x2740 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_59(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x274C Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_74(essParam1) || !func_74(essParam0))
			return true;

	return essParam0 > essParam1;
}

Hash func_60(int iParam0) // Position - 0x2779 Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_75(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

BOOL func_61(ePedType eptParam0) // Position - 0x27AC Hash - 0x5000025C ^0x5000025C
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

void func_62(Ped pedParam0, Hash hParam1) // Position - 0x2BFF Hash - 0xEA1C858E ^0xC4DA85F7
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_76(pedParam0, hParam1))
		{
			if (func_77(pedParam0, hParam1))
			{
				if (func_78(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_79(pedParam0);
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

void func_63(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x2CA9 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_64(Ped pedParam0, BOOL bParam1) // Position - 0x2CD9 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_65(Ped pedParam0, int iParam1) // Position - 0x2D1E Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_66(int iParam0) // Position - 0x2D45 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_80(iParam0))
		return -1;

	return func_81(iParam0);
}

var func_67(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2D61 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_68(var uParam0, int iParam1) // Position - 0x2D78 Hash - 0xD05180BA ^0x39589262
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

void func_69(var uParam0, int iParam1) // Position - 0x2DFE Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_70(var uParam0, int iParam1) // Position - 0x2E3A Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_51(*uParam0);
	num2 = func_50(*uParam0);

	if (iParam1 < 1 || iParam1 > func_56(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_71(var uParam0, int iParam1) // Position - 0x2E8D Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_72(var uParam0, int iParam1) // Position - 0x2EC8 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_73(var uParam0, int iParam1) // Position - 0x2F01 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_74(eStackSize essParam0) // Position - 0x2F39 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_55(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_54(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_53(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_50(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_51(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_52(essParam0);

	if (num6 < 1 || num6 > func_56(num5, num4))
		return false;

	return true;
}

int func_75(int iParam0) // Position - 0x3015 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_76(Ped pedParam0, Hash hParam1) // Position - 0x302E Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_77(Ped pedParam0, Hash hParam1) // Position - 0x305C Hash - 0xA54F3032 ^0x659D0509
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

BOOL func_78(Ped pedParam0, Hash hParam1) // Position - 0x30AD Hash - 0xA54F3032 ^0x659D0509
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_76(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_79(Ped pedParam0) // Position - 0x311F Hash - 0x446F1BDD ^0xC13068E2
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_80(int iParam0) // Position - 0x313D Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_81(int iParam0) // Position - 0x3170 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_82(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_82(int iParam0) // Position - 0x31B1 Hash - 0x6EC15CF9 ^0xE613EBE0
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

