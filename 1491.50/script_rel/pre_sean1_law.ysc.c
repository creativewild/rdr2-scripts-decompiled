#region Local Var
	var uLocal_0 = 4;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 4;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	var uLocal_11 = 4;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 4;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	Volume volLocal_23 = 0;
	Volume volLocal_24 = 0;
	Volume volLocal_25 = 0;
	Volume volLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = -1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 1097859072;
	var uLocal_46 = 1000;
	var uLocal_47 = 1067450368;
	var uLocal_48 = 5000;
	var uLocal_49 = 42;
	var uLocal_50 = 1103626240;
	var uLocal_51 = 1077936128;
	var uLocal_52 = 1106247680;
	var uLocal_53 = 1103101952;
	var uLocal_54 = 1097859072;
	var uLocal_55 = 1103626240;
	int iLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	BOOL bLocal_61 = 0;
	BOOL bLocal_62 = 0;
	BOOL bLocal_63 = 0;
	BOOL bLocal_64 = 0;
	BOOL bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x3089D649 ^0xF13DE730
{
	int i;
	BOOL flag;
	int num;

	iLocal_66 = -1;
	iLocal_67 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		SCRIPTS::TERMINATE_THIS_THREAD();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		switch (iLocal_10)
		{
			case 0:
				func_1(&uLocal_28);
				func_2(&uLocal_28, true);
				volLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1409f, -958f, 68f, 0f, 0f, 29f, 1000f, 500f, 100f, "pre_sean1_trigger");
				volLocal_24 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("pre_sean1_squad1");
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_24, -1374.059f, -964.364f, 70.254f, 0f, 0f, 41f, 90f, 45f, 40f);
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_24, -1447.488f, -944.557f, 70.254f, 0f, 0f, -18f, 34f, 13f, 40f);
				volLocal_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1179.3567f, -1230.7299f, 73.20396f, 0f, 0f, 0f, 170f, 170f, 40f, "pre_sean1_squad2");
				volLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1413.668f, -962.834f, 62.681f, 0f, 0f, 61.59f, 105.15f, 74.578f, 12.986f, "pre_sean1_help");
				PED::_RESERVE_AMBIENT_PEDS(8);
				STREAMING::REQUEST_MODEL(func_3(), false);
				STREAMING::REQUEST_MODEL(func_4(), false);
				STREAMING::REQUEST_MODEL(func_5(), false);
				TASK::REQUEST_WAYPOINT_RECORDING("pre_sean1_0");
				TASK::REQUEST_WAYPOINT_RECORDING("pre_sean1_1");
				iLocal_10 = 1;
				break;
		
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(func_3()) && STREAMING::HAS_MODEL_LOADED(func_4()) && STREAMING::HAS_MODEL_LOADED(func_5()) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("pre_sean1_0") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("pre_sean1_1"))
					iLocal_10 = 2;
				break;
		
			case 2:
				if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= 8)
					if (func_6())
						iLocal_10 = 3;
				break;
		
			case 3:
				func_7();
			
				if (!bLocal_65)
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_26, true, 0))
					{
						func_8();
					}
					else
					{
						for (i = 0; i < 4; i = i + 1)
						{
							if (MAP::DOES_BLIP_EXIST(uLocal_16[i]))
								if (MAP::IS_BLIP_ON_MINIMAP(uLocal_16[i]))
									func_8();
						}
					}
				}
				break;
		}
	
		num = func_9(0);
	
		if (func_10() != 4 && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_23, true, 0))
			flag = true;
		else if (num == 1 || num == 8)
			flag = true;
	
		if (flag)
			SCRIPTS::TERMINATE_THIS_THREAD();
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0x262 Hash - 0xD2F4094 ^0xD2F4094
{
	func_2(uParam0, false);
	func_11(uParam0, false);
	func_12(uParam0, true);
	func_13(uParam0, true);
	func_14(uParam0, false);
	func_15(uParam0, true);
	func_16(uParam0, true, true, true);
	return;
}

void func_2(var uParam0, BOOL bParam1) // Position - 0x29D Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_17(&(uParam0->f_1), 16384);
	else
		func_18(&(uParam0->f_1), 16384);

	return;
}

ePedType func_3() // Position - 0x2C3 Hash - 0x9F572D68 ^0xA34774BE
{
	return joaat("s_m_m_pinlaw_01");
}

ePedType func_4() // Position - 0x2D0 Hash - 0x9F572D68 ^0xEB8AF3F8
{
	return joaat("a_c_horse_americanstandardbred_black");
}

ePedType func_5() // Position - 0x2DD Hash - 0x9F572D68 ^0x32E3C406
{
	return joaat("a_c_horse_appaloosa_blanket");
}

BOOL func_6() // Position - 0x2EA Hash - 0x48C51F07 ^0x48C51F07
{
	int i;
	var unk;
	float num;
	BOOL flag;
	ePedType type;
	char* name;

	for (i = 0; i < 4; i = i + 1)
	{
		switch (i)
		{
			case 0:
				unk = { -1382.0284f, -960.3683f, 72.23132f };
				num = 15.37f;
				break;
		
			case 1:
				unk = { -1384.8297f, -962.4933f, 72.15043f };
				num = 44.21f;
				break;
		
			case 2:
				unk = { -1182.3247f, -1233.5548f, 74.01484f };
				num = 20.7f;
				break;
		
			case 3:
				unk = { -1182.0536f, -1229.8574f, 73.2746f };
				num = 80.2f;
				break;
		}
	
		flag = true;
	
		if (i <= 1 && MISC::GET_GAME_TIMER() < Global_1934266.f_156)
			flag = false;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_5[i]) && flag)
		{
			type = PED_TYPE_PLAYER_0;
		
			if (i == 0 || i == 2)
				type = func_4();
			else
				type = func_5();
		
			uLocal_5[i] = func_19(type, unk, num, true, true, 0, true, true, true, false, false, false, false);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uLocal_5[i], true);
			return false;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_0[i]) && flag)
		{
			uLocal_0[i] = func_19(func_3(), unk, num, true, true, 0, true, true, true, false, false, false, false);
			PED::SET_PED_ONTO_MOUNT(uLocal_0[i], uLocal_5[i], -1, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uLocal_0[i], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_0[i], true);
			PED::SET_PED_KEEP_TASK(uLocal_0[i], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_0[i], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_0[i], joaat("rel_pinkertons"));
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_0[i], func_20(4194304, 1056964608, 1065353216), 500, true, true, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
			LAW::_SET_PED_LAW_BEHAVIOUR(uLocal_0[i], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_0[i], 167, true);
			PED::SET_PED_SEEING_RANGE(uLocal_0[i], 35f);
			uLocal_16[i] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COP"), uLocal_0[i]);
			MAP::BLIP_ADD_MODIFIER(uLocal_16[i], joaat("BLIP_MODIFIER_ENEMY_ON_GUARD"));
		
			switch (i)
			{
				case 0:
				case 2:
					name = "0373_S_M_M_PinLaw_01_WHITE_01";
					break;
			
				default:
					name = "0374_S_M_M_PinLaw_01_WHITE_02";
					break;
			}
		
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_0[i], name);
		
			switch (i)
			{
				case 0:
					iLocal_21 = PED::CREATE_GROUP(0);
					PED::SET_GROUP_FORMATION(iLocal_21, 0);
					PED::SET_PED_AS_GROUP_LEADER(uLocal_0[i], iLocal_21, false);
					break;
			
				case 2:
					iLocal_22 = PED::CREATE_GROUP(0);
					PED::SET_GROUP_FORMATION(iLocal_22, 0);
					PED::SET_PED_AS_GROUP_LEADER(uLocal_0[i], iLocal_22, false);
					break;
			}
		
			return false;
		}
	}

	return true;
}

void func_7() // Position - 0x5A2 Hash - 0xF9B0AAB ^0x958A018
{
	int i;
	BOOL flag;
	BOOL flag2;
	int num;
	int num2;
	char* waypointRecording;
	int num3;
	char* str;

	if (!bLocal_61)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_24, true, 0))
		{
			bLocal_61 = true;
			iLocal_70 = MISC::GET_GAME_TIMER();
		}
	}

	if (!bLocal_62)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_25, true, 0))
		{
			bLocal_62 = true;
			iLocal_71 = MISC::GET_GAME_TIMER();
		}
	}

	flag = false;

	if (!bLocal_60)
		if (bLocal_57)
			flag = true;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_21(uLocal_0[i], 0))
		{
			switch (uLocal_11[i])
			{
				case 0:
				case 1:
					if (uLocal_11[i] == 0)
					{
						flag2 = false;
					
						if (i <= 1)
						{
							if (bLocal_61)
							{
								num = iLocal_70;
								flag2 = true;
							}
						}
						else if (bLocal_62)
						{
							num = iLocal_71;
							flag2 = true;
						}
					
						if (flag2)
						{
							switch (i)
							{
								case 0:
									num2 = 400;
									break;
							
								case 1:
									num2 = 1200;
									break;
							
								case 2:
									num2 = 200;
									break;
							
								case 3:
									num2 = 2300;
									break;
							}
						
							if (MISC::GET_GAME_TIMER() >= num + num2)
							{
								if (i <= 1)
								{
									waypointRecording = "";
								
									switch (i)
									{
										case 0:
											waypointRecording = "pre_sean1_0";
											break;
									
										case 1:
											waypointRecording = "pre_sean1_1";
											break;
									}
								
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_0[i], waypointRecording, 0, 0, -1, false, 0, -1);
								}
								else if (i == 2)
								{
									TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(uLocal_0[i], -1577.9268f, -1213.422f, 73.6259f, 1073741824, 1.5f, 0, 0);
								}
								else
								{
									PED::SET_PED_AS_GROUP_MEMBER(uLocal_0[i], iLocal_22);
								}
							
								func_22(i, 1);
							}
						}
					}
					else if (i == 0)
					{
						if (!bLocal_63)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_70 + 300000)
							{
								TASK::TASK_MOVE_IN_TRAFFIC(uLocal_0[i], 1f, 0, 0);
								PED::SET_PED_AS_GROUP_MEMBER(uLocal_0[1], iLocal_21);
								bLocal_63 = true;
							}
						}
					}
					else if (i == 2)
					{
						if (!bLocal_64)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(uLocal_0[i], -1577.9268f, -1213.422f, 73.6259f, 10f, 10f, 10f, false, false, 0))
							{
								TASK::TASK_MOVE_IN_TRAFFIC(uLocal_0[i], 1.5f, 0, 0);
								bLocal_64 = true;
							}
						}
					}
				
					if (iLocal_66 >= 0)
						if (iLocal_66 == i || iLocal_66 == func_23(i) && MISC::GET_GAME_TIMER() >= iLocal_68 + 700)
							func_22(i, 2);
					break;
			
				case 2:
					if (i == iLocal_66)
					{
						if (!bLocal_58)
						{
							if (func_24(uLocal_0[i], "WHO_GOES_THERE"))
							{
								bLocal_58 = true;
								iLocal_69 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!bLocal_59)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_69 + 4000)
							{
								if (func_24(uLocal_0[i], "ITS_DUTCHS_GANG_MALE_EXTREME"))
								{
									bLocal_59 = true;
									bLocal_60 = true;
									iLocal_69 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_0[i], SCRIPT_TASK_PERFORM_SEQUENCE, true) == 8)
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_0[i], Global_35, -1, 0, 51, 0);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_27);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_27);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1082130432, -1082130432, -1082130432);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_27);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_0[i], iLocal_27);
					}
					break;
			
				case 3:
					if (!PED::IS_PED_IN_COMBAT(uLocal_0[i], 0))
					{
						num3 = 0;
					
						if (i == iLocal_67)
							num3 = 16384;
					
						TASK::TASK_CLEAR_LOOK_AT(uLocal_0[i]);
						TASK::TASK_COMBAT_PED(uLocal_0[i], Global_35, num3, 0);
					}
				
					if (flag)
					{
						if (i == iLocal_67 || func_23(i) == iLocal_67 || i == iLocal_66 || func_23(i) == iLocal_66)
						{
							str = "GENERIC_SHOCKED_HIGH";
						
							if (bLocal_58 || iLocal_56 == 16384 && func_21(uLocal_0[func_23(i)], 0))
								str = "ITS_DUTCHS_GANG_MALE_EXTREME";
						
							if (func_24(uLocal_0[i], str))
							{
								flag = false;
								bLocal_60 = true;
							}
						}
					}
					break;
			}
		
			if (!bLocal_57)
			{
				if (func_25(uLocal_0[i], 0, &uLocal_28, &iLocal_56, 0, 0))
				{
					iLocal_67 = i;
					bLocal_57 = true;
					iLocal_72 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_66 < 0)
				{
					if (i == 0 || i == 2)
					{
						if (PED::CAN_PED_SEE_ENTITY(uLocal_0[i], Global_35, true, false) == 1)
						{
							iLocal_66 = i;
							iLocal_68 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (bLocal_59 && MISC::GET_GAME_TIMER() >= iLocal_69 + 1500 || MISC::GET_GAME_TIMER() >= iLocal_68 + 8000)
				{
					iLocal_67 = iLocal_66;
					bLocal_57 = true;
					iLocal_72 = MISC::GET_GAME_TIMER();
				}
			}
			else if (uLocal_11[i] != 3)
			{
				if (i == iLocal_67 || MISC::GET_GAME_TIMER() >= iLocal_72 + 400)
					func_22(i, 3);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uLocal_0[i]))
		{
			bLocal_57 = true;
			iLocal_67 = i;
		}
	}

	return;
}

void func_8() // Position - 0xA49 Hash - 0x891685EE ^0x891685EE
{
	if (!func_26(120))
	{
		func_27(120, false);
		bLocal_65 = true;
	}

	return;
}

int func_9(int iParam0) // Position - 0xA65 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_10() // Position - 0xA79 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

void func_11(var uParam0, BOOL bParam1) // Position - 0xA87 Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_17(&(uParam0->f_1), 2048);
	else
		func_18(&(uParam0->f_1), 2048);

	return;
}

void func_12(var uParam0, BOOL bParam1) // Position - 0xAAD Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_17(&(uParam0->f_1), 256);
	else
		func_18(&(uParam0->f_1), 256);

	return;
}

void func_13(var uParam0, BOOL bParam1) // Position - 0xAD3 Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_18(uParam0, 16);
	}
	else
	{
		func_17(uParam0, 67108864);
		func_17(uParam0, 16);
	}

	return;
}

void func_14(var uParam0, BOOL bParam1) // Position - 0xAFE Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_17(&(uParam0->f_1), 128);
	else
		func_18(&(uParam0->f_1), 128);

	return;
}

void func_15(var uParam0, BOOL bParam1) // Position - 0xB22 Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_18(uParam0, 256);
	else
		func_17(uParam0, 256);

	return;
}

void func_16(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB44 Hash - 0x3145AA70 ^0xBCD5B3EB
{
	if (!bParam1)
		func_18(uParam0, 268435456);
	else
		func_17(uParam0, 268435456);

	if (!bParam2)
		func_18(uParam0, 1073741824);
	else
		func_17(uParam0, 1073741824);

	if (!bParam3)
		func_18(uParam0, 536870912);
	else
		func_17(uParam0, 536870912);

	return;
}

void func_17(var uParam0, int iParam1) // Position - 0xBA9 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0xBBE Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

Ped func_19(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0xBCF Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_28(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

Hash func_20(int iParam0, int iParam1, int iParam2) // Position - 0xC11 Hash - 0xBAEEB505 ^0x609FE3FC
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash i;
	int num;
	Hash hash4;

	if (func_29(iParam0, 8388608) && func_29(iParam0, 1048576) && func_29(iParam0, 2097152) && func_29(iParam0, 4194304))
		return joaat("weapon_repeater_carbine");

	hash = WEAPON::_0xF8204EF17410BF43(joaat("group_repeater"), iParam1, iParam2, 0);
	hash2 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_RIFLE"), iParam1, iParam2, 0);
	hash3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SNIPER"), iParam1, iParam2, 0);

	for (i = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0); func_30(i); i = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0))
	{
		num = num + 1;
	
		if (num >= 10)
		{
			i = joaat("weapon_shotgun_doublebarrel");
			break;
		}
	}

	if (!func_31(i))
		i = joaat("weapon_repeater_carbine");

	hash4 = 0;

	if (!func_29(iParam0, 8388608))
		hash4 = hash;

	if (!func_29(iParam0, 1048576))
		if (!func_32(hash4) || WEAPON::_0xF2F585411E748B9C(hash2, 0) > WEAPON::_0xF2F585411E748B9C(hash4, 0))
			hash4 = hash2;

	if (!func_29(iParam0, 2097152))
		if (!func_32(hash4) || WEAPON::_0xF2F585411E748B9C(i, 0) > WEAPON::_0xF2F585411E748B9C(hash4, 0))
			hash4 = i;

	if (!func_29(iParam0, 4194304))
		if (!func_32(hash4) || WEAPON::_0xF2F585411E748B9C(hash3, 0) > WEAPON::_0xF2F585411E748B9C(hash4, 0))
			hash4 = hash3;

	if (!func_32(hash4))
		return joaat("weapon_repeater_carbine");

	return hash4;
}

BOOL func_21(Ped pedParam0, int iParam1) // Position - 0xD9E Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_33(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_33(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_33(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_33(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_33(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_33(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_33(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_33(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_22(int iParam0, int iParam1) // Position - 0xE9D Hash - 0x44485D5C ^0x621CBE2C
{
	if (iParam0 <= 1)
		Global_1934266.f_156 = MISC::GET_GAME_TIMER() + 600000;

	switch (iParam1)
	{
		case 3:
			PED::SET_PED_SEEING_RANGE(uLocal_0[iParam0], 60f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_0[iParam0], false);
			func_34(uLocal_0[iParam0]);
			break;
	}

	uLocal_11[iParam0] = iParam1;
	return;
}

int func_23(int iParam0) // Position - 0xEF7 Hash - 0xCE2BEE70 ^0xCE2BEE70
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 0;
	
		case 2:
			return 3;
	
		case 3:
			return 2;
	}

	return -1;
}

BOOL func_24(Ped pedParam0, char* sParam1) // Position - 0xF3C Hash - 0xAA41CC40 ^0x1304A1FC
{
	char* str;
	int num;

	if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(pedParam0))
	{
		str.f_5 = 1;
		str.f_6 = 1;
		str = sParam1;
		str.f_3 = -500314840;
		str.f_4 = Global_35;
		str.f_5 = 0;
		num = AUDIO::_0x72E4D1C4639BC465(pedParam0, &str);
	
		if (num >= 0)
		{
			AUDIO::_0xB18FEC133C7C6C69(num);
			return true;
		}
	}

	return false;
}

BOOL func_25(Ped pedParam0, Entity eParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0xF92 Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > uParam2->f_5)
		func_35(uParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			uParam2->f_12 = iParam5;
		else
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(uParam2->f_1 & 128 != 0))
		{
			if (func_36(pedParam0, uParam2))
			{
				*uParam3 = 128;
				func_37(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8 != 0))
			{
				if (func_38(pedParam0, uParam2))
				{
					*uParam3 = 8;
					func_37(pedParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_39(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 8;
					func_37(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 32 != 0)
			{
				if (func_40(pedParam0, uParam2))
				{
					*uParam3 = 64;
					func_37(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_41(PLAYER::PLAYER_ID(), false, true, uParam2->f_1 & 524288 == 0))
		{
			if (!(uParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_37(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_42(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4 != 0))
				{
					if (func_43(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 4;
						func_37(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			
				if (!(uParam2->f_1 & 256 != 0))
				{
					if (func_44(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 256;
						func_37(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 16 != 0))
		{
			if (uParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_45(Global_35, pedParam0, uParam2, false))
				{
					*uParam3 = 16;
					func_37(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_45(Global_35, pedParam0, uParam2, true))
			{
				*uParam3 = 16;
				func_37(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_46(pedParam0, uParam2))
				{
					*uParam3 = 32;
					func_37(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_47(&pedParam0, uParam2))
				{
					*uParam3 = 4096;
					func_37(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2 != 0))
			{
				if (func_48(uParam2, 4000))
				{
					if (func_49(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, false, *uParam2 & 256 != 0) && func_50(uParam2, pedParam0) && func_51(uParam2, pedParam0))
					{
						*uParam3 = 2;
						func_37(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 2 != 0))
		{
			if (uParam2->f_12 < 4f)
			{
				if (func_49(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, true, *uParam2 & 256 != 0) && func_50(uParam2, pedParam0) && func_51(uParam2, pedParam0))
				{
					*uParam3 = 2;
					func_37(pedParam0, uParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_52(pedParam0, Global_1935630.f_41))
							{
								func_53();
								*uParam3 = 2;
								func_37(pedParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_52(pedParam0, Global_1935630.f_41))
						{
							func_53();
							*uParam3 = 2;
							func_37(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (uParam2->f_12 < 10f)
			{
				if (func_54(uParam2, pedParam0) || uParam2->f_9 > 0 && func_55() - uParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_53();
						*uParam3 = 2;
						func_37(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_56())
					{
						if (func_52(pedParam0, Global_1935630.f_42))
						{
							func_53();
							*uParam3 = 2;
							func_37(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 1024 != 0))
		{
			if (func_57(uParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_37(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & 2048 != 0))
			{
				if (func_58(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 2048;
					func_37(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_59(pedParam0, uParam2))
					{
						*uParam3 = 8192;
						func_37(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*uParam2 & 64 != 0)
			{
				if (func_60(pedParam0, uParam2))
				{
					*uParam3 = 32768;
					func_37(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_61(uParam2, 4000))
				{
					if (func_62(&pedParam0, uParam2))
					{
						*uParam3 = 512;
						func_37(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_63(pedParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_37(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_64(uParam2, pedParam0))
			{
				*uParam3 = 1;
				func_37(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

BOOL func_26(int iParam0) // Position - 0x15BB Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_65() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_27(int iParam0, BOOL bParam1) // Position - 0x1600 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_66(iParam0, &num, &num2);

	if (!func_67(iParam0, num, num2, bParam1))
		return;

	func_68(num, num2);
	return;
}

void func_28(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x162D Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_69(eptParam1))
		{
			func_70(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_71(pedParam0, 0, true);
	
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
			func_72(pedParam0, false);
			flag = true;
		}
	
		func_73(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_29(int iParam0, int iParam1) // Position - 0x170E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_30(Hash hParam0) // Position - 0x171D Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case joaat("weapon_shotgun_sawedoff_charles"):
		case joaat("weapon_shotgun_sawedoff"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_31(Hash hParam0) // Position - 0x173E Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_32(Hash hParam0) // Position - 0x1766 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_33(int iParam0, int iParam1) // Position - 0x1781 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_34(Ped pedParam0) // Position - 0x1790 Hash - 0x5B77FEF ^0xF781C33C
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0) && PED::IS_PED_IN_GROUP(pedParam0))
		PED::REMOVE_PED_FROM_GROUP(pedParam0);

	return;
}

void func_35(var uParam0, BOOL bParam1, int iParam2) // Position - 0x17BE Hash - 0x37D64B11 ^0xE7060A9E
{
	func_74(iParam2);

	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return;
	
		if (Global_1935630.f_12)
			return;
	}
	else
	{
		if (!Global_1224589.f_6)
			return;
	
		if (Global_1224589.f_7)
			return;
	}

	if (bParam1)
		uParam0->f_10 = 0;

	uParam0->f_5 = iParam2;

	if (Global_1572887.f_12 == -1)
		uParam0->f_13 = Global_1935630.f_44;
	else
		uParam0->f_13 = func_75(0);

	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
				if (!(*uParam0 & 33554432 != 0))
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_18(uParam0, 33554432);
					else if (!(*uParam0 & 8192 != 0))
						if (func_76(true))
							func_18(uParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_76(true) || *uParam0 & 8192 != 0)
					func_17(uParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(uParam0->f_1 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_77(uParam0))
				uParam0->f_15 = func_55();
		}
		else if (uParam0->f_15 > 0)
		{
			if (func_55() - uParam0->f_15 > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}

	uParam0->f_6 = uParam0->f_6 + 1;

	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7 = uParam0->f_7 + 1;
	
		if (uParam0->f_7 > 4)
			uParam0->f_7 = 0;
	}

	func_78(uParam0);
	return;
}

BOOL func_36(Ped pedParam0, var uParam1) // Position - 0x1989 Hash - 0x3A755B4E ^0xDBAC23C2
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Ped pedIndexFromEntityIndex;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_acquaintance_ped_dead"):
		case joaat("event_ped_seen_dead_ped"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("event_dead_ped_found"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent))
				return false;
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
		
			if (!PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
				return false;
		
			if (DECORATOR::DECOR_EXIST_ON(pedIndexFromEntityIndex, "bIgnoreDamageChecking"))
				return false;
		
			if (pedIndexFromEntityIndex == Global_1935630.f_33)
				return false;
		
			if (pedIndexFromEntityIndex == Global_1935630.f_32)
				return false;
		
			if (!func_79(pedParam0, uParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_80(pedParam0, pedIndexFromEntityIndex) <= func_81(uParam1))
				return true;
			break;
	}

	return false;
}

void func_37(Ped pedParam0, var uParam1, int iParam2) // Position - 0x1A60 Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		uParam1->f_10 = pedParam0;

	if (func_82(iParam2, 1, 1, 1, 0))
		func_18(uParam1, 2048);

	uParam1->f_16 = iParam2;
	func_83(uParam1, true);
	func_84();
	return;
}

BOOL func_38(Ped pedParam0, var uParam1) // Position - 0x1A9D Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_85(pedParam0, !(*uParam1 & 268435456 != 0), !(*uParam1 & 536870912 != 0), !(*uParam1 & 1073741824 != 0), 0, false))
		{
			if (uParam1->f_12 < 5f)
				num = 95f;
			else if (uParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_86(uParam1);
		
			if (func_87(uParam1, pedParam0, num, num2))
			{
				if (uParam1->f_2 == 0)
					uParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - uParam1->f_2;
				num4 = func_88(uParam1);
			
				if (uParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_83(uParam1, true);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_83(uParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_39(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x1B84 Hash - 0x899101A2 ^0xBCA80002
{
	float num;
	float num2;

	if (eParam1 == 0)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(eParam1))
		return false;

	num = 85f;

	if (func_89(eParam1, !(*uParam2 & 268435456 != 0), !(*uParam2 & 536870912 != 0), !(*uParam2 & 1073741824 != 0), 0))
	{
		if (uParam2->f_12 < 5f)
			num = 95f;
		else if (uParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_86(uParam2);
	
		if (func_87(uParam2, pedParam0, num, num2))
		{
			if (uParam2->f_2 == 0)
				uParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2 > func_88(uParam2))
				{
					func_83(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_40(Ped pedParam0, var uParam1) // Position - 0x1C5A Hash - 0xC62373A5 ^0xD1ADE674
{
	Entity entity;
	Ped pedIndexFromEntityIndex;
	Entity outEntity;
	float customDistance;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &entity))
		return false;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
		if (outEntity == entity)
			return false;

	if (!ENTITY::IS_ENTITY_A_PED(entity))
		return false;

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == pedParam0)
			return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (func_79(pedParam0, uParam1, pedIndexFromEntityIndex))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3 > func_88(uParam1))
		{
			customDistance = func_86(uParam1);
		
			if (uParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_41(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1D63 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_90(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return 0;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return 0;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return 0;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return 1;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return 0;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return 1;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return 1;

	return 0;
}

BOOL func_42(var uParam0, int iParam1) // Position - 0x1E98 Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_55();
	num2 = num - uParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_43(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x1ECF Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_91(uParam2);
		
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
				PED::_0xD355E2F1BB41087E(pedParam1, num);
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
				PED::_0xD355E2F1BB41087E(pedParam1, 5f);
			else
				PED::_0xD355E2F1BB41087E(pedParam1, num);
		}
	
		if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED") || WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
		{
			num2 = 3f;
			shotNearRecentlyTime = 3000;
		}
		else
		{
			num2 = 1f;
			shotNearRecentlyTime = 1000;
		}
	
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), pedParam1, shotNearRecentlyTime) && PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= num2)
		{
			if (func_51(uParam2, pedParam1))
			{
				func_83(uParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_44(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x1FD6 Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (uParam2->f_12 < (float)func_92(uParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_51(uParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_83(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_45(Ped pedParam0, Ped pedParam1, var uParam2, BOOL bParam3) // Position - 0x2041 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_93(uParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_83(uParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, uParam2->f_27))
				{
					func_83(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords, false, false);
				
					if (func_94(pedParam1, entityCoords, outCoords))
					{
						func_83(uParam2, true);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_83(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords2, false, false);
				
					if (func_94(pedParam1, entityCoords, outCoords2))
					{
						func_83(uParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_46(Ped pedParam0, var uParam1) // Position - 0x2189 Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *uParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_79(pedParam0, uParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_95(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_96(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						uParam1->f_10 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_97(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_98(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_99(uParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_47(var uParam0, var uParam1) // Position - 0x2367 Hash - 0xF223CED2 ^0xA472D0A4
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	var entityCoords;
	var entityCoords2;

	if (!EVENT::_0x1D1B448D719415AB(*uParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(*uParam0, 0, 0);

	switch (recentEvent)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("event_shocking_window_smashed"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(sourceEntityFromEvent, false, false) };
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(tar, false, false) };
			EVENT::_0x1A5C5D350068A673(*uParam0, 0);
			return true;
	}

	return false;
}

BOOL func_48(var uParam0, int iParam1) // Position - 0x23DF Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_55();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_49(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x240E Hash - 0x8119700D ^0x42D5A76B
{
	Ped entity2;
	Vehicle playersLastVehicle;
	Entity entity;

	entity2 = PLAYER::PLAYER_PED_ID();

	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(pedParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(pedParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, entity2, true, true))
				return 1;
		
			playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		
			if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle))
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, playersLastVehicle, true, true))
					return 1;
		
			if (PED::IS_PED_ON_MOUNT(entity2))
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(entity2)))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PED::GET_MOUNT(entity2), true, true))
						return 1;
			else if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
				if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
						return 1;
		}
	}
	else if (!bParam2)
	{
		if (func_100(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_101(entity2, pedParam0))
		return 1;

	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == pedParam0)
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
			return 1;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_BEING_JACKED(pedParam0))
			if (PED::GET_PEDS_JACKER(pedParam0) == entity2)
				return 1;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(entity2, 8, 0))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam0))
			return 1;

	return 0;
}

int func_50(var uParam0, Ped pedParam1) // Position - 0x2594 Hash - 0x42A83B1F ^0xF0650653
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", uParam0->f_5);
	else if (uParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_51(var uParam0, Ped pedParam1) // Position - 0x25E4 Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_102(uParam0))
		return true;

	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam1, 400))
		return true;

	if (PED::IS_PED_DEAD_OR_DYING(pedParam1, true))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam1))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 10, true))
		return false;

	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
		return true;

	if (!PED::IS_PED_RAGDOLL(pedParam1))
		return true;

	return false;
}

BOOL func_52(Ped pedParam0, Ped pedParam1) // Position - 0x2681 Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_103(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_53() // Position - 0x26CE Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_54(var uParam0, Ped pedParam1) // Position - 0x26D6 Hash - 0x6BE02E92 ^0x188EF1A2
{
	Vehicle vehiclePedIsUsing;
	var entityCoords;
	int actual;
	int expected;
	int i;
	Ped pedInDraftHarness;

	vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);

	if (vehiclePedIsUsing != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing)))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	
		if (func_104(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			uParam0->f_9 = func_55();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(vehiclePedIsUsing, &expected, &actual))
		{
			if (expected <= 0)
			{
				return false;
			}
			else if (actual == expected)
			{
				for (i = 0; i < actual; i = i + 1)
				{
					pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehiclePedIsUsing, i);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness))
					{
						if (func_105(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								uParam0->f_9 = func_55();
								return true;
							}
						}
					}
				}
			}
		}
	}

	return false;
}

int func_55() // Position - 0x2797 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_56() // Position - 0x27B5 Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_55() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_57(var uParam0, Ped pedParam1) // Position - 0x2802 Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_81(uParam0);

	if (uParam0->f_12 > func_106(uParam0) && uParam0->f_12 > num)
		return false;

	num3 = func_107(pedParam1);
	num2 = func_108(uParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (uParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, uParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, uParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, uParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_58(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x291E Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (uParam2->f_12 > 4f)
		return false;

	flag = *uParam2 & 256 != 0;
	flag2 = *uParam2 & 524288 != 0;
	flag3 = *uParam2 & 128 != 0;
	return func_109(pedParam0, eParam1, flag, flag3, uParam2->f_12, flag2);
}

BOOL func_59(Ped pedParam0, var uParam1) // Position - 0x2966 Hash - 0x23BB3370 ^0x36BD6CCF
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*uParam1 & 67108864 != 0)
		return true;

	if (Global_1935630.f_24)
		return true;

	if (*uParam1 & 33554432 != 0)
	{
		if (func_110(pedParam0, uParam1, true))
			return true;
	
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam0, Global_35, true, false) == 1)
			return true;
	}

	jackTarget = PED::GET_JACK_TARGET(Global_35);

	if (ENTITY::DOES_ENTITY_EXIST(jackTarget) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(jackTarget, true))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return true;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_shocking_seen_ped_robbed"):
		case joaat("event_shocking_seen_ped_intimidated"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("event_shocking_mount_stolen"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (pedIndexFromEntityIndex != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedIndexFromEntityIndex2))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			return true;
	
		case joaat("event_shocking_entity_hogtied"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, -1082130432, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!func_111(uParam1, pedParam0))
						if (func_105(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_60(Ped pedParam0, var uParam1) // Position - 0x2BBF Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_112(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_61(var uParam0, int iParam1) // Position - 0x2BF8 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_55();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_62(var uParam0, var uParam1) // Position - 0x2C27 Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_63(Ped pedParam0, var uParam1) // Position - 0x2C3B Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (uParam1->f_4 == 0)
		uParam1->f_4 = func_55();
	else if (func_55() - uParam1->f_4 > func_113(uParam1))
		return func_114(pedParam0, uParam1, false, -1082130432);

	return false;
}

BOOL func_64(var uParam0, Ped pedParam1) // Position - 0x2C88 Hash - 0x336CE611 ^0xC7A7E011
{
	Entity pedSourceOfDeath;
	Ped pedIndexFromEntityIndex;

	pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(pedParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedSourceOfDeath))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIgnoreDamageChecking"))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedSourceOfDeath);

	if (Global_35 == pedIndexFromEntityIndex || Global_1935630.f_40 == pedIndexFromEntityIndex)
		return true;

	return false;
}

BOOL func_65() // Position - 0x2CDB Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_66(int iParam0, var uParam1, var uParam2) // Position - 0x2CE9 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_67(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2D05 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_115(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_116(iParam0))
		return false;

	if (func_117(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_118(iParam0, 1) || func_119(32768))
		if (!func_118(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_120())
		return false;

	return true;
}

void func_68(int iParam0, int iParam1) // Position - 0x2DA7 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_69(ePedType eptParam0) // Position - 0x2DCB Hash - 0x5000025C ^0x5000025C
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

void func_70(Ped pedParam0, Hash hParam1) // Position - 0x321E Hash - 0xEA1C858E ^0x80F6BA18
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_121(pedParam0, hParam1))
		{
			if (func_122(pedParam0, hParam1))
			{
				if (func_123(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_124(pedParam0);
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

void func_71(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x32C8 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_72(Ped pedParam0, BOOL bParam1) // Position - 0x32F8 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_73(Ped pedParam0, int iParam1) // Position - 0x333D Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

void func_74(int iParam0) // Position - 0x3364 Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_125();

	if (Global_1935630.f_27)
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();

	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
			{
			}
			else
			{
				weaponHash = Global_1935630.f_44;
			}
		
			Global_1935630.f_46 = weaponHash;
		}
	}

	switch (num)
	{
		case 0:
			func_126(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
	
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
		
			if (!Global_1935630.f_30)
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
			break;
	
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
			
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 3f;
					else
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1f;
				
					if (Global_1935630.f_25)
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					break;
			}
			break;
	
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}

	Global_22 = Global_22 | 4;
	return;
}

var func_75(int iParam0) // Position - 0x34D0 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_76(BOOL bParam0) // Position - 0x34E3 Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_127(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_77(var uParam0) // Position - 0x34FD Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_65() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_128(uParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_128(uParam0);

	if (ped == 0)
		return false;

	if (func_108(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	uParam0->f_14 = ped;
	return true;
}

void func_78(var uParam0) // Position - 0x3597 Hash - 0x256C27DD ^0x256C27DD
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
		func_129(uParam0);

	return;
}

BOOL func_79(Ped pedParam0, var uParam1, Ped pedParam2) // Position - 0x35BE Hash - 0x7FBD27D8 ^0x4C0BB7C4
{
	int num;
	int num2;
	Hash pedRelationshipGroupHash;
	Hash pedRelationshipGroupHash2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam2))
		num2 = func_108(pedParam2);
	else
		num2 = func_107(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_108(pedParam0);
	else
		num = func_107(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_130(*uParam1, 8388608))
		return true;

	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0);
	pedRelationshipGroupHash2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam2);

	switch (pedRelationshipGroupHash)
	{
		case joaat("rel_civmale"):
		case joaat("rel_re_victim"):
		case joaat("rel_civnative"):
		case joaat("rel_pinkertons"):
		case joaat("rel_guama_law"):
		case joaat("rel_cop"):
		case joaat("rel_civfemale"):
			switch (pedRelationshipGroupHash2)
			{
				case joaat("rel_civmale"):
				case joaat("rel_re_victim"):
				case joaat("rel_civnative"):
				case joaat("rel_civfemale"):
					return true;
			}
			break;
	}

	if (pedRelationshipGroupHash == pedRelationshipGroupHash2)
		return true;

	return false;
}

float func_80(Ped pedParam0, Ped pedParam1) // Position - 0x36B7 Hash - 0xF9959663 ^0xF9959663
{
	return func_103(pedParam0, pedParam1, true, true);
}

float func_81(var uParam0) // Position - 0x36C9 Hash - 0xD73B9827 ^0xDE12990D
{
	return uParam0->f_26;
}

BOOL func_82(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x36D5 Hash - 0x5A9E12AC ^0x5A9E12AC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 2048:
			return true;
	
		case 4:
		case 16:
			return bParam1;
	
		case 8:
			return bParam2;
	
		case 32:
		case 64:
		case 128:
			return bParam3;
	
		case 8192:
			return bParam4;
	
		default:
		
	}

	return false;
}

void func_83(var uParam0, BOOL bParam1) // Position - 0x373A Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_18(uParam0, 134217728);
	else
		func_17(uParam0, 134217728);

	return;
}

void func_84() // Position - 0x3760 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_85(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x3774 Hash - 0x7ED53456 ^0xD7A590DD
{
	Ped ped;
	Player playerIndex;
	Entity outEntity;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(outEntity) && pedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity))
			return false;
	}

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == pedParam0)
			return false;

	if (bParam3)
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_103(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_131(ped, 0)))
			if (func_132(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_86(var uParam0) // Position - 0x38D4 Hash - 0xD73B9827 ^0x8CE07B2A
{
	return uParam0->f_17;
}

BOOL func_87(var uParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x38E0 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (uParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_130(*uParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*uParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_88(var uParam0) // Position - 0x3941 Hash - 0xD73B9827 ^0x372EC0B
{
	return uParam0->f_18;
}

BOOL func_89(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x394D Hash - 0x838BDEFB ^0xB1D5C032
{
	Ped ped;
	Player playerIndex;

	if (ENTITY::IS_ENTITY_DEAD(eParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	bParam3;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, eParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, eParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_131(ped, 0)))
			if (func_133(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_90(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3A0F Hash - 0xC9655EC3 ^0x88C9AFE1
{
	if (Global_1935630.f_18)
		if (bParam2 || Global_1935630.f_19 > 0 || Global_1935630.f_17 > 0)
			return 1;
	else if (bParam1 && !(Global_1935630.f_15 == 1370593166))
		return 0;

	if (Global_1935630.f_20 > 0 || bParam2 && Global_1935630.f_20 > -1)
		return 1;

	if (bParam0)
		if (Global_1935630.f_13)
			if (bParam2 || Global_1935630.f_21 > 0)
				return 1;

	return 0;
}

float func_91(var uParam0) // Position - 0x3AAD Hash - 0xD73B9827 ^0x9F7F0764
{
	return uParam0->f_23;
}

int func_92(var uParam0) // Position - 0x3AB9 Hash - 0xD73B9827 ^0x303D0BA3
{
	return uParam0->f_21;
}

int func_93(var uParam0) // Position - 0x3AC5 Hash - 0xB202FF2A ^0xFD1BAB10
{
	int num;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 1;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 1:
			switch (uParam0->f_6)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 0;
					break;
			}
			break;
	
		case 2:
			switch (uParam0->f_6)
			{
				case 1:
					num = 2;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	
		case 3:
			switch (uParam0->f_6)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	}

	if (*uParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_94(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x3C02 Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_134(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_95(Ped pedParam0) // Position - 0x3C45 Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_135(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_96(Ped pedParam0) // Position - 0x3CAB Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_97(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3CD7 Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_136(pedParam1))
			return false;

	num = 5f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_98(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3D1E Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_136(pedParam1))
			return false;

	num = 10f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_99(var uParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x3D69 Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_136(pedParam1))
		return false;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_100(Ped pedParam0, var uParam1) // Position - 0x3DE2 Hash - 0x64FF5121 ^0xD9ABCD76
{
	if (!TASK::_IS_PED_LEADING_HORSE(pedParam0))
		return false;

	*uParam1 = TASK::_GET_LED_HORSE_FROM_PED(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
		return false;

	if (!PED::CAN_PED_BE_MOUNTED(*uParam1))
		return false;

	return true;
}

BOOL func_101(Ped pedParam0, Ped pedParam1) // Position - 0x3E2F Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_137(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_102(var uParam0) // Position - 0x3E77 Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*uParam0 & 2 != 0);
}

float func_103(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3E87 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_104(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3ECF Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_105(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_105(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x3EFB Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_106(var uParam0) // Position - 0x3F23 Hash - 0xD73B9827 ^0x4905FA06
{
	return uParam0->f_24;
}

int func_107(Ped pedParam0) // Position - 0x3F2F Hash - 0x3625637A ^0x4B06E9E9
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_108(Ped pedParam0) // Position - 0x3F85 Hash - 0x9FD5D3D9 ^0xC5546B34
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_109(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x3FF3 Hash - 0x454CBA4D ^0x83AAF396
{
	BOOL flag;
	Entity entity;
	float num;

	if (Global_1935630.f_40 != 0)
		flag = true;

	if (!ENTITY::IS_ENTITY_DEAD(eParam1))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(eParam1, PLAYER::PLAYER_PED_ID(), true, true))
			return 1;

	if (flag)
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, Global_1935630.f_40, true, true))
			return 1;

	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (bParam3)
			if (func_100(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_103(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_103(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_110(Ped pedParam0, var uParam1, BOOL bParam2) // Position - 0x4164 Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_127(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_111(uParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_111(uParam1, ped2))
					if (func_105(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_111(var uParam0, Ped pedParam1) // Position - 0x4252 Hash - 0x27FC2906 ^0x98B30697
{
	Hash pedRelationshipGroupDefaultHash;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(pedParam1, "bIsCriminal"))
		return true;

	if (PED::GET_PED_CONFIG_FLAG(pedParam1, 4, false))
		return true;

	pedRelationshipGroupDefaultHash = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam1);

	switch (pedRelationshipGroupDefaultHash)
	{
		case joaat("rel_gang_odriscoll"):
		case joaat("rel_gang_skinner_brothers"):
		case joaat("rel_gunslingers"):
		case joaat("rel_gang_creole"):
		case joaat("rel_gang_lemoyne_raiders"):
		case joaat("rel_gang_murfree_brood"):
		case joaat("rel_criminals"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_112(int iParam0) // Position - 0x42C8 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_138())
		return false;

	return func_139(Global_1347702[58 /*49*/].f_15, true);
}

int func_113(var uParam0) // Position - 0x42EA Hash - 0xD73B9827 ^0xAC2E3C80
{
	return uParam0->f_20;
}

BOOL func_114(Ped pedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x42F6 Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (uParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = uParam1->f_12;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_35))
			return 1;

	return 0;
}

BOOL func_115(int iParam0, int iParam1) // Position - 0x4371 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_65() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_116(int iParam0) // Position - 0x43A4 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_65() != -1)
		if (func_118(iParam0, 4))
			return false;
	else if (func_118(iParam0, 2))
		return false;

	return true;
}

BOOL func_117(int iParam0) // Position - 0x43D4 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_118(iParam0, 65536) && !func_118(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_118(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_118(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_118(int iParam0, int iParam1) // Position - 0x4480 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_119(int iParam0) // Position - 0x4499 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_120() // Position - 0x44AC Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_121(Ped pedParam0, Hash hParam1) // Position - 0x44BB Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_122(Ped pedParam0, Hash hParam1) // Position - 0x44E9 Hash - 0xA54F3032 ^0x99A86291
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

BOOL func_123(Ped pedParam0, Hash hParam1) // Position - 0x453A Hash - 0xA54F3032 ^0x99A86291
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_121(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_124(Ped pedParam0) // Position - 0x45AC Hash - 0x446F1BDD ^0xCC9C2EA3
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_125() // Position - 0x45CA Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_140())
		return false;

	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
			return PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_ATTACK"));
	
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1954819.f_992[2];
	}

	return false;
}

void func_126(int iParam0, int iParam1) // Position - 0x4620 Hash - 0x787BB1AC ^0x11099E69
{
	int num;
	int i;
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!PLAYER::_0x72AD59F7B7FB6E24(player, 200))
	{
		*iParam1 = 0;
		return;
	}

	if (PLAYER::_0x1A6E84F13C952094(player, 200, iParam0))
	{
		for (i = 0; i < *iParam0; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->[i]))
			{
			}
			else if (!PED::IS_PED_HUMAN(iParam0->[i]) && !(DECORATOR::DECOR_EXIST_ON(iParam0->[i], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(iParam0->[i], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam0->[i], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				num = num + 1;
			}
		}
	}

	*iParam1 = num;
	return;
}

BOOL func_127(BOOL bParam0, var uParam1, var uParam2) // Position - 0x46C9 Hash - 0x2A9340EF ^0xAD765E32
{
	BOOL num;
	Ped lassoTarget;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*uParam1 = Global_1935630.f_32;
			num = 1;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*uParam2 = Global_1935630.f_33;
				num = 1;
			}
		}
	}

	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		lassoTarget = PED::_GET_LASSO_TARGET(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(lassoTarget))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(lassoTarget))
			{
				*uParam1 = lassoTarget;
				num = 1;
			}
		}
	}

	return num;
}

Ped func_128(var uParam0) // Position - 0x4790 Hash - 0xF229F24F ^0x47381422
{
	Ped pedIndexFromEntityIndex;
	Entity outEntity;

	if (pedIndexFromEntityIndex == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(outEntity))
				{
					if (ENTITY::IS_ENTITY_A_PED(outEntity))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(outEntity)))
						{
							pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
							return pedIndexFromEntityIndex;
						}
					}
				}
			}
		}
	}

	if (uParam0->f_6 == 3)
	{
		if (pedIndexFromEntityIndex == 0)
			if (!Global_1935630.f_12)
				pedIndexFromEntityIndex = PED::_0x4B19F171450E0D4F(Global_35);
	
		if (pedIndexFromEntityIndex == 0)
			pedIndexFromEntityIndex = PED::_GET_LASSO_TARGET(Global_35);
	
		if (pedIndexFromEntityIndex != 0)
			if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex)))
					pedIndexFromEntityIndex = 0;
	}

	return pedIndexFromEntityIndex;
}

void func_129(var uParam0) // Position - 0x4838 Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_17(uParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_18(uParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

BOOL func_130(int iParam0, int iParam1) // Position - 0x489D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_131(Ped pedParam0, int iParam1) // Position - 0x48AC Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_132(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x48C3 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_133(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_133(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x48F1 Hash - 0xBF2250D5 ^0x34592C3E
{
	float screenX;
	float screenY;
	int hudScreenPositionFromWorldPosition;

	hudScreenPositionFromWorldPosition = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &screenX, &screenY);

	if (hudScreenPositionFromWorldPosition == 0)
		if (screenX > fParam3 && screenX < fParam4 && screenY > fParam5 && screenY < fParam6)
			return true;

	return false;
}

BOOL func_134(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x493B Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_135(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x497C Hash - 0x1D055735 ^0x5D260F19
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, joaat("WEAPON_UNARMED"), iParam1))
			return true;
		else if (!bParam2)
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("weapon_melee_knife"))
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, Global_1935630.f_44, iParam1))
						return true;

	return false;
}

BOOL func_136(Ped pedParam0) // Position - 0x49F5 Hash - 0xF2F988FE ^0xA63CD631
{
	Hash scenarioPointTypePedIsUsing;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return false;

	scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedParam0);

	if (scenarioPointTypePedIsUsing == 0)
		return false;

	if (scenarioPointTypePedIsUsing == joaat("world_player_sleep_ground") || scenarioPointTypePedIsUsing == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_arm") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_pillow") || scenarioPointTypePedIsUsing == joaat("world_animal_dog_sleeping") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow") || scenarioPointTypePedIsUsing == joaat("prop_player_prpty_save_game") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_left") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_right"))
		return true;

	if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_a_frame") || scenarioPointTypePedIsUsing == joaat("world_player_sleep_bedroll"))
	{
		scenarioPointTypePedIsUsing = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(pedParam0);
	
		if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_male_a"))
			return true;
	
		return false;
	}

	return false;
}

int func_137(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x4ADD Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_138() // Position - 0x4B1F Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_65() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_139(int iParam0, BOOL bParam1) // Position - 0x4B44 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_141(iParam0))
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

BOOL func_140() // Position - 0x4B75 Hash - 0x50F36DAB ^0xF55A49EF
{
	switch (Global_1935630.f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return true;
	
		default:
		
	}

	return false;
}

int func_141(int iParam0) // Position - 0x4BA6 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_142(iParam0))
		return -1;

	return func_143(iParam0);
}

BOOL func_142(int iParam0) // Position - 0x4BC2 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_143(int iParam0) // Position - 0x4BF5 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_144(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_144(int iParam0) // Position - 0x4C36 Hash - 0x6EC15CF9 ^0xE613EBE0
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

