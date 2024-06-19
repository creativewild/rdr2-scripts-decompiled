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
	var uLocal_14 = 0;
	var uLocal_15 = 255;
	var uLocal_16 = 4;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 4;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 32;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 15;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x6B289F17 ^0x8FD555A0
{
	func_1(&uScriptParam_0);
	func_2(&uLocal_61, &uScriptParam_0);

	while (!func_3(&uLocal_61))
	{
		func_4(&uLocal_13, &uLocal_28, &uLocal_61);
		BUILTIN::WAIT(0);
	}

	func_5(&uLocal_13, &uLocal_61);
	return;
}

void func_1(var uParam0) // Position - 0x3A Hash - 0x68F407F5 ^0x5F504921
{
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();
	func_6(32, *uParam0);
	func_7();

	if (func_8())
		func_9();

	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_13, 15, 7);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&uLocal_13), 15, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_28, 33, 8);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&uLocal_28[0]), 33, "m_clientData");
	func_12(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	return;
}

void func_2(var uParam0, var uParam1) // Position - 0xA3 Hash - 0x95792B7A ^0x95792B7A
{
	*uParam0 = { *uParam1 };
	return;
}

BOOL func_3(var uParam0) // Position - 0xB3 Hash - 0xAD4C5796 ^0xDD742417
{
	if (func_13(false, false))
		return true;
	else if (uParam0->f_2 == 5)
		return true;

	return false;
}

void func_4(var uParam0, var uParam1, var uParam2) // Position - 0xD8 Hash - 0xD62186A2 ^0xACC81AAE
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		func_14(uParam0, uParam1, uParam2);

	func_15(uParam0, uParam1, uParam2);
	return;
}

void func_5(var uParam0, var uParam1) // Position - 0xFB Hash - 0x2AB8C18C ^0xAFFA88FB
{
	int i;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_16(uParam0, uParam1);
	
		for (i = 0; i <= 3; i = i + 1)
		{
			if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(uParam0->f_3[i]))
				uParam0->f_3[i] = 0;
		
			if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_8[i]))
				VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_8[i]);
		}
	}

	if (MAP::DOES_BLIP_EXIST(uParam1->f_3))
		MAP::REMOVE_BLIP(&(uParam1->f_3));

	func_17(uParam1->f_1);
	func_9();
	return;
}

void func_6(int iParam0, int iParam1) // Position - 0x18A Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_9();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_7() // Position - 0x1A7 Hash - 0x1FABDECD ^0x67C342BC
{
	int scriptStatus;
	int gameTimer;
	int timeoutTime;

	scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	gameTimer = MISC::GET_GAME_TIMER();
	timeoutTime = NETWORK::NETWORK_GET_TIMEOUT_TIME();

	if (timeoutTime < 50000)
		timeoutTime = 50000;

	while (scriptStatus != 2)
	{
		MISC::GET_GAME_TIMER() - gameTimer > timeoutTime - 5000;
	
		if (MISC::GET_GAME_TIMER() - gameTimer > 300000)
			func_9();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_9();
					break;
			
				case 2:
					func_9();
					break;
			
				case 3:
					func_9();
					break;
			
				case 4:
					func_9();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_9();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_9();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_9();
	
		if (func_18() == 0)
			if (func_19())
				func_9();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_9();

	return 1;
}

BOOL func_8() // Position - 0x2B8 Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_9() // Position - 0x2E6 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_10(int iParam0, int iParam1, char* sParam2) // Position - 0x2F2 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

int func_11(int iParam0, int iParam1, char* sParam2) // Position - 0x2FB Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_12(BOOL bParam0) // Position - 0x304 Hash - 0x2B211437 ^0xE0D702E
{
	int num;
	var unk;
	int num2;

	num = MISC::GET_SYSTEM_TIME() + 180000;
	num2 = 0;
	unk = { unk };

	while (true)
	{
		num2 = num2 + 1;
	
		if (bParam0)
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_9();
					break;
			
				case 2:
					func_9();
					break;
			
				case 3:
					func_9();
					break;
			
				case 4:
					func_9();
					break;
			
				default:
					break;
			}
		}
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return;
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			TEXT_LABEL_ASSIGN_STRING(&unk, "HOST", 64);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLIENT", 64);
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return;
	
		if (MISC::GET_SYSTEM_TIME() >= num)
		{
			func_9();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_13(BOOL bParam0, BOOL bParam1) // Position - 0x3CD Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_14(var uParam0, var uParam1, var uParam2) // Position - 0x4AD Hash - 0x5F7DDC99 ^0x5F7DDC99
{
	switch (*uParam0)
	{
		case 0:
			func_20(uParam0, uParam2);
			break;
	
		case 1:
			func_21(uParam0, uParam2);
			break;
	
		case 2:
			func_22(uParam0, uParam2);
			break;
	
		case 3:
			func_23(uParam0, uParam1, uParam2);
			break;
	
		case 4:
			func_24(uParam0, uParam2);
			break;
	}

	return;
}

void func_15(var uParam0, var uParam1, var uParam2) // Position - 0x515 Hash - 0xAA60E9D9 ^0xFC9BCA29
{
	if (*uParam0 >= 4 && uParam2->f_2 < 4)
		func_25(uParam2, 4);

	switch (uParam2->f_2)
	{
		case 0:
			func_26(uParam0, uParam2);
			break;
	
		case 1:
			func_27(uParam0, uParam2);
			break;
	
		case 2:
			func_28(uParam0, uParam2);
			break;
	
		case 3:
			func_29(uParam0, uParam1, uParam2);
			break;
	
		case 4:
			func_30(uParam0, uParam2);
			break;
	}

	return;
}

void func_16(var uParam0, var uParam1) // Position - 0x598 Hash - 0xD40A41AE ^0x148C970B
{
	Vehicle train;

	func_31(uParam1);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_1))
		{
			train = NETWORK::NET_TO_VEH(uParam0->f_1);
			VEHICLE::DELETE_MISSION_TRAIN(&train);
			func_32(*uParam1, false);
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_4[0]))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&uParam1->f_4[0]);
		func_32(*uParam1, false);
	}

	return;
}

void func_17(Hash hParam0) // Position - 0x610 Hash - 0xEED56A13 ^0xF4EE263C
{
	Hash trainModelFromTrainConfigByCarIndex;
	int numCarsFromTrainConfig;
	int i;

	numCarsFromTrainConfig = VEHICLE::_GET_NUM_CARS_FROM_TRAIN_CONFIG(hParam0);
	i = 0;

	for (i = 0; i <= numCarsFromTrainConfig - 1; i = i + 1)
	{
		trainModelFromTrainConfigByCarIndex = VEHICLE::_GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX(hParam0, i);
	
		if (trainModelFromTrainConfigByCarIndex != 0)
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(trainModelFromTrainConfigByCarIndex);
	}

	return;
}

int func_18() // Position - 0x64E Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_19() // Position - 0x65C Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_20(var uParam0, var uParam1) // Position - 0x66A Hash - 0x8706F9E4 ^0x8706F9E4
{
	func_33(uParam0, uParam1, 1);
	return;
}

void func_21(var uParam0, var uParam1) // Position - 0x67B Hash - 0x6EA706DC ^0xD3EB0CDF
{
	if (func_34(uParam1->f_1))
		func_33(uParam0, uParam1, 2);

	return;
}

void func_22(var uParam0, var uParam1) // Position - 0x697 Hash - 0x868128CF ^0x266C811A
{
	var unk;
	BOOL flag;
	BOOL flag2;
	Vehicle train;
	float speed;
	Vehicle train2;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			return;
	
		unk = { func_35(*uParam1) };
		flag = func_36(*uParam1);
		flag2 = func_37(uParam1->f_1);
	
		if (!func_38(&(uParam0->f_1), uParam1->f_1, unk, flag, flag2, false, true, true))
		{
			func_33(uParam0, uParam1, 4);
			return;
		}
	
		train = NETWORK::NET_TO_VEH(uParam0->f_1);
	
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(train))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(train, true, false);
	
		speed = func_39(uParam1->f_1);
		VEHICLE::SET_TRAIN_SPEED(train, speed);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(train, speed);
		VEHICLE::_0x160C1B5AB48AB87C(train, func_40(uParam1->f_1));
		VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(train, func_41(uParam1->f_1));
		VEHICLE::_0xE6BD7DD3FD474415(train, func_42(uParam1->f_1));
		VEHICLE::_0x06A09A6E0C6D2A84(train, false);
	
		if (!func_43(uParam1->f_1))
			VEHICLE::_0xA72B1BF3857B94D7(train, true);
	
		if (func_44(uParam1->f_1))
			VEHICLE::_0x1BFBAFCC6760FF02(train, false);
	}
	else
	{
		train2 = NETWORK::NET_TO_VEH(uParam0->f_1);
	
		if (!ENTITY::DOES_ENTITY_EXIST(train2))
			func_33(uParam0, uParam1, 4);
		else if (ENTITY::IS_ENTITY_DEAD(train2))
			func_33(uParam0, uParam1, 4);
		else if (VEHICLE::_HAS_TRAIN_LOADED(train2))
			func_33(uParam0, uParam1, 3);
	}

	return;
}

void func_23(var uParam0, var uParam1, var uParam2) // Position - 0x7D2 Hash - 0xE3AAFD67 ^0x780ACDD9
{
	Player player;
	int i;

	if (func_45(uParam0, uParam2))
	{
		func_33(uParam0, uParam2, 4);
		return;
	}

	if (uParam0->f_14 == 0 && func_46(uParam1))
		uParam0->f_14 = 1;

	func_47(uParam0, uParam2);

	if (uParam0->f_2 == 255)
	{
		player = 255;
		i = 0;
	
		for (i = 0; i <= 31; i = i + 1)
		{
			if (func_48(uParam1, 1, i))
			{
				player = PLAYER::INT_TO_PARTICIPANTINDEX(i);
			
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(player))
				{
					uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_INDEX(player);
					return;
				}
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_2))
	{
		uParam0->f_2 = 255;
	}

	return;
}

void func_24(var uParam0, var uParam1) // Position - 0x883 Hash - 0x7EDFAD34 ^0x46932B72
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
		func_33(uParam0, uParam1, 5);

	return;
}

void func_25(var uParam0, int iParam1) // Position - 0x8A0 Hash - 0x62FFBD90 ^0x73E753B6
{
	if (uParam0->f_2 != iParam1)
		uParam0->f_2 = iParam1;

	return;
}

void func_26(var uParam0, var uParam1) // Position - 0x8B7 Hash - 0xE090F021 ^0xE090F021
{
	if (*uParam0 > 0)
		func_25(uParam1, 1);

	return;
}

void func_27(var uParam0, var uParam1) // Position - 0x8CD Hash - 0x13983F11 ^0xC4954B47
{
	if (func_34(uParam1->f_1) && *uParam0 > 1)
		func_25(uParam1, 2);

	return;
}

void func_28(var uParam0, var uParam1) // Position - 0x8F1 Hash - 0x8650D1BB ^0x6FD4BCBB
{
	Vehicle train;
	int trainCarriageTrailerNumber;
	Volume volume;
	var minimum;
	var maximum;
	float num;
	int i;

	if (*uParam0 > 2 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		train = NETWORK::NET_TO_VEH(uParam0->f_1);
	
		if (!ENTITY::DOES_ENTITY_EXIST(train))
		{
			func_25(uParam1, 4);
		}
		else if (VEHICLE::_HAS_TRAIN_LOADED(train))
		{
			func_49(*uParam1, train);
		
			if (func_50(uParam1->f_1))
			{
				if (MAP::DOES_BLIP_EXIST(func_51(*uParam1)))
				{
					uParam1->f_3 = func_51(*uParam1);
					MAP::_BLIP_SET_STYLE(uParam1->f_3, joaat("BLIP_STYLE_TRAIN"));
				}
				else
				{
					uParam1->f_3 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_TRAIN"), train);
				}
			
				MAP::SET_BLIP_SPRITE(uParam1->f_3, joaat("blip_ambient_train"), true);
			
				if (!func_52(*uParam1, 16))
					MAP::BLIP_REMOVE_MODIFIER(uParam1->f_3, joaat("BLIP_MODIFIER_HIDDEN"));
				else
					MAP::BLIP_ADD_MODIFIER(uParam1->f_3, joaat("BLIP_MODIFIER_HIDDEN"));
			
				func_53(*uParam1, uParam1->f_3);
			}
		
			if (!func_54(uParam1->f_1))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(train, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(train, PLAYER::PLAYER_ID(), true);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(train, true);
			}
		
			trainCarriageTrailerNumber = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(train);
			func_55(*uParam1, trainCarriageTrailerNumber);
			i = 0;
		
			for (i = 0; i <= trainCarriageTrailerNumber - 1; i = i + 1)
			{
				uParam1->f_4[i] = VEHICLE::GET_TRAIN_CARRIAGE(train, i);
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[i]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_4[i]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_4[i]))
					{
						if (func_56(uParam1->f_1))
							ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_4[i], true);
						else
							ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_4[i], false);
					
						ENTITY::_SET_ENTITY_FADE_IN(uParam1->f_4[i]);
					}
				
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_4[i]), &minimum, &maximum);
					num = { maximum - minimum };
					num = num * 0.9f;
					num.f_2 = num.f_2 * 1.25f;
					volume = VOLUME::CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(uParam1->f_4[i], false, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(uParam1->f_4[i]), num);
					PED::_ATTACH_VOLUME_TO_ENTITY(volume, uParam1->f_4[i], 0f, 0f, num.f_2 * 0.6f, 0f, 0f, 0f, 2, true);
					func_57(*uParam1, i, uParam1->f_4[i]);
					func_58(*uParam1, i, volume);
				}
			}
		
			func_59(*uParam1, 4);
			func_17(uParam1->f_1);
			func_25(uParam1, 3);
		}
	}

	return;
}

void func_29(var uParam0, var uParam1, var uParam2) // Position - 0xB3D Hash - 0x7C69009A ^0xEBB06171
{
	if (func_45(uParam0, uParam2))
	{
		func_25(uParam2, 4);
		return;
	}

	func_31(uParam2);

	if (func_60(uParam0, uParam2))
	{
		if (!func_48(uParam1, 2, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_61(uParam1, 2, NETWORK::PARTICIPANT_ID_TO_INT());
			func_62();
		}
	}

	if (func_63(uParam2))
	{
		if (!func_48(uParam1, 1, NETWORK::PARTICIPANT_ID_TO_INT()))
			func_61(uParam1, 1, NETWORK::PARTICIPANT_ID_TO_INT());
	
		if (uParam0->f_2 == PLAYER::PLAYER_ID())
			func_25(uParam2, 5);
	}

	return;
}

void func_30(var uParam0, var uParam1) // Position - 0xBBE Hash - 0xBE15DE97 ^0xBE15DE97
{
	func_16(uParam0, uParam1);

	if (*uParam0 > 4)
		func_25(uParam1, 5);

	return;
}

void func_31(var uParam0) // Position - 0xBDC Hash - 0x7C7C4064 ^0x31172825
{
	Entity entity;
	Vector3 entityCoords;
	Vector3 vector;

	entity = uParam0->f_4[0];

	if (ENTITY::DOES_ENTITY_EXIST(entity) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entity) && !ENTITY::IS_ENTITY_DEAD(entity))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(entity, true, false) };
	
		if (!_IS_NULL_VECTOR(entityCoords))
		{
			vector = { Global_1148618[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1 };
		
			if (BUILTIN::VDIST(vector, entityCoords) > 10f)
				Global_1148618[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1 = { entityCoords };
		}
	}
	else if (!_IS_NULL_VECTOR(Global_1148618[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1))
	{
		Global_1148618[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1 = { 0f, 0f, 0f };
	}

	return;
}

int func_32(int iParam0, BOOL bParam1) // Position - 0xC9C Hash - 0x8E6CED3D ^0x61946C72
{
	var unk;

	if (!func_65(iParam0, bParam1))
	{
		unk.f_12 = -1;
		unk.f_12.f_1 = -1;
		unk.f_4 = 3;
		unk.f_5 = iParam0;
	
		if (bParam1)
			func_66(iParam0);
	
		return func_68(&unk, func_67(0, 8));
	}

	return 1;
}

void func_33(var uParam0, var uParam1, int iParam2) // Position - 0xCE8 Hash - 0xCBC1B54A ^0xCBC1B54A
{
	if (*uParam0 != iParam2)
		*uParam0 = iParam2;

	return;
}

BOOL func_34(Hash hParam0) // Position - 0xCFD Hash - 0x588CA391 ^0x446C82A5
{
	BOOL num;
	Hash trainModelFromTrainConfigByCarIndex;
	int numCarsFromTrainConfig;
	int i;

	num = 1;
	numCarsFromTrainConfig = VEHICLE::_GET_NUM_CARS_FROM_TRAIN_CONFIG(hParam0);
	i = 0;

	for (i = 0; i <= numCarsFromTrainConfig - 1; i = i + 1)
	{
		trainModelFromTrainConfigByCarIndex = VEHICLE::_GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX(hParam0, i);
	
		if (trainModelFromTrainConfigByCarIndex != 0)
		{
			STREAMING::REQUEST_MODEL(trainModelFromTrainConfigByCarIndex, false);
		
			if (!STREAMING::HAS_MODEL_LOADED(trainModelFromTrainConfigByCarIndex))
				num = 0;
		}
	}

	return num;
}

Vector3 func_35(int iParam0) // Position - 0xD4E Hash - 0xF20DE190 ^0xFB91034
{
	return Global_1148506.f_2[iParam0 /*18*/].f_3;
}

BOOL func_36(int iParam0) // Position - 0xD64 Hash - 0x1B04F1B9 ^0xEF84EF0F
{
	return Global_1148506.f_2[iParam0 /*18*/].f_6;
}

BOOL func_37(var uParam0) // Position - 0xD78 Hash - 0x296BCE22 ^0x296BCE22
{
	if (func_69(uParam0))
		return 1;

	return 0;
}

BOOL func_38(var uParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0xD8E Hash - 0x632087C0 ^0x4A940FB9
{
	int i;
	int numCarsFromTrainConfig;
	BOOL flag;
	Vehicle train;

	!NETWORK::CAN_REGISTER_MISSION_VEHICLES(VEHICLE::_GET_NUM_CARS_FROM_TRAIN_CONFIG(hParam1));

	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
		return false;

	if (bParam7)
	{
		numCarsFromTrainConfig = VEHICLE::_GET_NUM_CARS_FROM_TRAIN_CONFIG(hParam1);
	
		for (i = 0; i <= numCarsFromTrainConfig - 1; i = i + 1)
		{
			if (!func_70(VEHICLE::_GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX(hParam1, i)))
				flag = true;
		}
	
		if (flag)
			return false;
	}

	train = VEHICLE::_CREATE_MISSION_TRAIN(hParam1, vParam2, bParam5, bParam6, true, bParam8);

	if (!ENTITY::DOES_ENTITY_EXIST(train))
		return false;

	VEHICLE::_0x06A09A6E0C6D2A84(train, false);
	*uParam0 = NETWORK::VEH_TO_NET(train);

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		return false;

	if (bParam9)
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(train, true);
	else
		NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);

	return true;
}

float func_39(int iParam0) // Position - 0xE45 Hash - 0x7302E448 ^0x7302E448
{
	if (func_69(iParam0))
		return 4.5f;

	switch (iParam0)
	{
		case joaat("net_fetch_train_kidnapped_buyer_00"):
			return 0f;
	
		case -1371026825:
			return 0f;
	
		case joaat("net_fetch_train_moving_bounty_1"):
			return 0f;
	
		case -735194130:
			return 0f;
	
		case joaat("net_fetch_train_vip_rescue_00"):
			return 0f;
	
		case joaat("net_fetch_train_camp_resupply_00"):
			return 0f;
	
		default:
		
	}

	return 8f;
}

float func_40(int iParam0) // Position - 0xEA7 Hash - 0xC6680F8 ^0xC6680F8
{
	if (func_69(iParam0))
		return 5f;

	return 30f;
}

BOOL func_41(int iParam0) // Position - 0xEC1 Hash - 0xACB1D184 ^0xACB1D184
{
	if (func_69(iParam0))
		return true;

	return true;
}

BOOL func_42(int iParam0) // Position - 0xED7 Hash - 0x296BCE22 ^0x296BCE22
{
	if (func_69(iParam0))
		return true;

	return false;
}

BOOL func_43(int iParam0) // Position - 0xEED Hash - 0x6E9EE2CC ^0x6E9EE2CC
{
	switch (iParam0)
	{
		case -735194130:
			return false;
	
		case -343202759:
			return false;
	
		default:
		
	}

	return true;
}

BOOL func_44(int iParam0) // Position - 0xF12 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -343202759:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_45(var uParam0, var uParam1) // Position - 0xF2D Hash - 0x296BF28 ^0xF6543BA
{
	if (func_71(1))
		return true;
	else if (Global_1149035.f_2[*uParam1 /*43*/].f_3 == 0f)
		return true;
	else if (func_72(*uParam1) != uParam1->f_1)
		return true;
	else if (Global_1149035.f_2[*uParam1 /*43*/] != 3)
		return true;
	else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
		return true;
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[0]))
		return true;

	return false;
}

BOOL func_46(var uParam0) // Position - 0xFAF Hash - 0x8AD31ABF ^0xAF712D3E
{
	int i;
	int num;

	i = 0;
	num = 2;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i)) && func_73(uParam0->[i], num))
			return true;
	}

	return false;
}

void func_47(var uParam0, var uParam1) // Position - 0xFF3 Hash - 0x27ABB53B ^0xF1398FC6
{
	Vehicle train;
	int trainCarriageTrailerNumber;
	int num;
	int num2;

	uParam1->f_21 = uParam1->f_21 + 1;

	if (uParam1->f_21 < 15)
		return;

	uParam1->f_21 = 0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
		return;

	train = NETWORK::NET_TO_VEH(uParam0->f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(train))
		return;

	if (ENTITY::IS_ENTITY_DEAD(train))
		return;

	trainCarriageTrailerNumber = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(train);
	num = uParam0->f_13;
	num2 = uParam0->f_13 * 4;

	if (num2 < trainCarriageTrailerNumber)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[num2]))
			func_74(uParam0, uParam1, num, uParam1->f_4[num2]);
	
		num = num + 1;
	}
	else
	{
		num = 0;
	}

	if (num >= 4)
		num = 0;

	uParam0->f_13 = num;
	return;
}

BOOL func_48(var uParam0, int iParam1, int iParam2) // Position - 0x10A1 Hash - 0xB99E3C40 ^0xB99E3C40
{
	if (iParam2 < 0 || iParam2 >= 32)
		return false;

	return func_73(uParam0->[iParam2], iParam1);
}

void func_49(int iParam0, Vehicle veParam1) // Position - 0x10CB Hash - 0xCF7D517E ^0xF85B1250
{
	Global_1149035.f_2[iParam0 /*43*/].f_2 = veParam1;
	return;
}

BOOL func_50(int iParam0) // Position - 0x10E1 Hash - 0x5B1C0161 ^0x5B1C0161
{
	if (func_69(iParam0))
		return false;

	switch (iParam0)
	{
		case -735194130:
			return false;
	
		case -343202759:
			return false;
	
		default:
		
	}

	return true;
}

Blip func_51(int iParam0) // Position - 0x1113 Hash - 0x1B04F1B9 ^0xEF84EF0F
{
	return Global_1149035.f_2[iParam0 /*43*/].f_6;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x1127 Hash - 0x4B02EE0 ^0x4A2C2E8A
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_73(Global_1148618[i /*13*/][iParam0 /*4*/], iParam1))
			return true;
	}

	return false;
}

void func_53(int iParam0, var uParam1) // Position - 0x116E Hash - 0xCF7D517E ^0x881D2E47
{
	Global_1149035.f_2[iParam0 /*43*/].f_6 = uParam1;
	return;
}

BOOL func_54(int iParam0) // Position - 0x1184 Hash - 0x6E9EE2CC ^0x6E9EE2CC
{
	switch (iParam0)
	{
		case -735194130:
			return false;
	
		case -343202759:
			return false;
	
		default:
		
	}

	return true;
}

void func_55(int iParam0, int iParam1) // Position - 0x11A9 Hash - 0xCF7D517E ^0x4E8E2E5
{
	Global_1149035.f_2[iParam0 /*43*/].f_5 = iParam1;
	return;
}

BOOL func_56(var uParam0) // Position - 0x11BF Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_57(int iParam0, int iParam1, Entity eParam2) // Position - 0x11C8 Hash - 0x6EC6EB5A ^0x6003454A
{
	Global_1149035.f_2[iParam0 /*43*/].f_12[iParam1 /*2*/] = eParam2;
	return;
}

void func_58(int iParam0, int iParam1, Volume volParam2) // Position - 0x11E2 Hash - 0x3C7AAF9F ^0x926E9460
{
	Global_1149035.f_2[iParam0 /*43*/].f_12[iParam1 /*2*/].f_1 = volParam2;
	return;
}

void func_59(int iParam0, int iParam1) // Position - 0x11FE Hash - 0x5BF7A250 ^0xB9FC9AA7
{
	if (!func_73(Global_1148618[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1))
		func_75(&Global_1148618[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1);

	return;
}

BOOL func_60(var uParam0, var uParam1) // Position - 0x1232 Hash - 0x80515B96 ^0xC30FB55
{
	Vehicle vehicle;
	Ped driverOfVehicle;

	vehicle = uParam1->f_4[0];

	if (!ENTITY::DOES_ENTITY_EXIST(vehicle))
		return false;

	if (uParam0->f_14 == 1)
		return false;

	driverOfVehicle = VEHICLE::GET_DRIVER_OF_VEHICLE(vehicle);

	if (driverOfVehicle == Global_33)
		return true;

	return false;
}

void func_61(var uParam0, int iParam1, int iParam2) // Position - 0x1272 Hash - 0xE89F04BA ^0xE89F04BA
{
	if (iParam2 < 0 || iParam2 >= 32)
		return;

	if (!func_73(uParam0->[iParam2], iParam1))
		func_75(&uParam0->[iParam2], iParam1);

	return;
}

void func_62() // Position - 0x12AB Hash - 0xA1759DB3 ^0xA1759DB3
{
	int num;
	int i;
	float num2;
	var unk;
	var unk5;
	Ped ped;

	num2 = 25f;
	unk = 3;
	unk5 = 1;
	num = func_76(&unk, &unk5, 3, Global_34, num2, false, false, false, -1, true, true, -1082130432, false, true);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(unk[i]) && !ENTITY::IS_ENTITY_DEAD(unk[i]) && !LAW::_0x40851BCC33ACD9AB(unk[i]))
		{
			ped = Global_33;
			ped.f_3 = { Global_34 };
			ped.f_6 = func_77();
			ped.f_9 = 1;
			ped.f_2 = joaat("crime_train_robbery");
			ped.f_8 = 1;
			LAW::_0x018F30D762E62DF8(unk[i], &ped);
			func_78(unk[i], Global_34, 2, true, 1);
			TASK::TASK_FLEE_PED(unk[i], Global_33, 3, 0, -1082130432, -1, 0);
		}
	}

	return;
}

BOOL func_63(var uParam0) // Position - 0x1385 Hash - 0x5C6B93EC ^0xA3934537
{
	Entity entity;
	Vector3 entityCoords;
	float num;
	float num2;
	float num3;

	if (func_79(uParam0, 1))
		return true;

	entity = uParam0->f_4[0];

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(entity, false, false) };

	if (_IS_NULL_VECTOR(entityCoords))
	{
		func_80(uParam0, 1);
		return true;
	}

	num = Global_1149035.f_2[*uParam0 /*43*/].f_3;

	if (num > 0f)
	{
		num2 = num + 50f;
		num3 = BUILTIN::VDIST(Global_34, entityCoords);
	
		if (num3 > num2 && !func_81(*uParam0))
		{
			func_80(uParam0, 1);
			return true;
		}
	}

	return false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1427 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_65(int iParam0, BOOL bParam1) // Position - 0x1451 Hash - 0x815298A4 ^0x727D6D05
{
	if (!func_82())
		return false;

	if (Global_1148506.f_2[iParam0 /*18*/].f_1 == 0)
		return false;

	if (bParam1)
		func_66(iParam0);

	func_83(iParam0, 4);
	return true;
}

void func_66(int iParam0) // Position - 0x148C Hash - 0xAAB7EAA9 ^0xFB34E3BB
{
	Global_1149035.f_2[iParam0 /*43*/].f_10 = Global_1295666.f_16 + 60;
	return;
}

var func_67(int iParam0, int iParam1) // Position - 0x14A8 Hash - 0x42C305C ^0x81DF2F42
{
	return func_84(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

int func_68(Any* panParam0, var uParam1) // Position - 0x14C6 Hash - 0x3A276EF5 ^0x35ECB7CC
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return 0;

	*panParam0 = 20;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 24, 0, &uParam1);
	return 1;
}

BOOL func_69(int iParam0) // Position - 0x14FF Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1865722934:
		case -1643549114:
		case -1083616881:
		case -272646696:
		case 1936859429:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_70(Hash hParam0) // Position - 0x1532 Hash - 0x83DCC829 ^0x5CC61030
{
	if (hParam0 == 0)
		return true;

	STREAMING::REQUEST_MODEL(hParam0, false);
	return STREAMING::HAS_MODEL_LOADED(hParam0);
}

BOOL func_71(int iParam0) // Position - 0x1551 Hash - 0xA059D395 ^0x8A024E09
{
	return func_73(Global_1149035.f_1, iParam0);
}

int func_72(int iParam0) // Position - 0x1565 Hash - 0x1B04F1B9 ^0xD8CFB006
{
	return Global_1148506.f_2[iParam0 /*18*/].f_1;
}

BOOL func_73(int iParam0, int iParam1) // Position - 0x1579 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_74(var uParam0, var uParam1, int iParam2, Entity eParam3) // Position - 0x1588 Hash - 0xEED394F4 ^0xA2CA97A6
{
	Vector3 entityCoords;
	float radius;
	Hash hashKey;
	var args;
	Vector3 vector;

	if (ENTITY::IS_ENTITY_DEAD(eParam3))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam3, true, false) };

	if (_IS_NULL_VECTOR(entityCoords))
		return;

	radius = 40f;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(uParam0->f_3[iParam2]))
	{
		hashKey = MISC::GET_HASH_KEY("NET_TRAIN");
	
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(entityCoords, radius, true, 0, hashKey))
			return;
	
		args = { entityCoords };
		args.f_4 = 40f;
		args.f_6 = MISC::GET_HASH_KEY("NET_TRAIN");
		args.f_7 = *uParam1;
		args.f_5 = 48;
		uParam0->f_3[iParam2] = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args);
	}
	else if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_8[iParam2]))
	{
		switch (VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(uParam0->f_3[iParam2]))
		{
			case 3:
				uParam0->f_8[iParam2] = VOLUME::_0x351D71B8B72B858B(uParam0->f_3[iParam2]);
				break;
		
			case 4:
				uParam0->f_3[iParam2] = 0;
				break;
		
			default:
				break;
		}
	}
	else
	{
		vector = { VOLUME::_0xC4019CF9AE8E931A(uParam0->f_8[iParam2]) };
	
		if (BUILTIN::VDIST(vector, entityCoords) > radius)
			VOLUME::_MODIFY_VOLUME_LOCK_LOCATION(uParam0->f_8[iParam2], entityCoords);
	}

	return;
}

void func_75(int iParam0, int iParam1) // Position - 0x16AD Hash - 0xF55E891F ^0xF55E891F
{
	func_85(iParam0, iParam1);
	return;
}

int func_76(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, Hash hParam10, BOOL bParam11, BOOL bParam12, int iParam13, BOOL bParam14, BOOL bParam15) // Position - 0x16BD Hash - 0x1CD7D100 ^0xAEA25770
{
	Volume volume;
	int num;

	if (iParam13 <= 0f)
		volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	else
		volume = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, iParam13);

	num = func_86(uParam0, uParam1, iParam2, volume, bParam7, bParam8, bParam9, hParam10, bParam11, bParam12, bParam14, bParam15);
	func_87(volume);
	return num;
}

Hash func_77() // Position - 0x171B Hash - 0x4228A1C2 ^0xC94C7CFB
{
	return Global_1939102.f_26;
}

void func_78(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x1729 Hash - 0xD3ABA9AA ^0x89487E3E
{
	if (!func_88(pedParam0, 0))
		return;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return;

	if (bParam5 && PED::_0xF9331B3A314EB49D(pedParam0))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedParam0);
		return;
	}

	_IS_NULL_VECTOR(vParam1);

	switch (iParam4)
	{
		case 1:
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedParam0);
			break;
	
		case 2:
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(pedParam0, vParam1, iParam6);
			break;
	
		case 3:
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(pedParam0, vParam1, iParam6);
			break;
	
		case 4:
			PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(pedParam0, vParam1);
			break;
	
		case 5:
			PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(pedParam0, vParam1, iParam6, false);
			break;
	
		case 6:
			PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(pedParam0, vParam1, iParam6, false);
			break;
	
		case 7:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedParam0);
			break;
	
		default:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedParam0);
			break;
	}

	return;
}

BOOL func_79(var uParam0, int iParam1) // Position - 0x180D Hash - 0xBD0B8CC9 ^0x8D76337
{
	return func_73(uParam0->f_20, iParam1);
}

void func_80(var uParam0, int iParam1) // Position - 0x181F Hash - 0x1E39CB4 ^0xC16D76A3
{
	if (!func_73(uParam0->f_20, iParam1))
		func_75(&(uParam0->f_20), iParam1);

	return;
}

BOOL func_81(int iParam0) // Position - 0x183F Hash - 0x4AB2C3FA ^0xA98A8A06
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1149035.f_2[iParam0 /*43*/].f_9 == frameCount || Global_1149035.f_2[iParam0 /*43*/].f_9 == frameCount - 1)
		return true;

	return false;
}

BOOL func_82() // Position - 0x187B Hash - 0x60773223 ^0x694FB74B
{
	return SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[3]) && SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[3], false) && NETWORK::_NETWORK_IS_THREAD_ACTIVE(Global_1051645.f_16[3]) && NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[3]) == PLAYER::PLAYER_ID();
}

void func_83(int iParam0, int iParam1) // Position - 0x18CC Hash - 0x5687C3CD ^0xC5551518
{
	if (Global_1148506.f_2[iParam0 /*18*/] != iParam1)
		Global_1148506.f_2[iParam0 /*18*/] = iParam1;

	return;
}

var func_84(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x18EF Hash - 0x63C3F71D ^0x3019B977
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	Any any;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_89() != 0)
	{
		bitIndex = PLAYER::PLAYER_ID();
	
		if (bitIndex >= 0 && bitIndex < 32)
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	
		return value;
	}

	i = 0;
	flag = false;
	flag2 = false;
	player = Global_1295666.f_5;
	any = Global_1295666.f_10;
	flag3 = true;
	flag4 = bParam10;

	if (BUILTIN::VMAG2(fParam6) < 1f)
	{
		flag3 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("volBox"):
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_90());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_90());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_90());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_91(PLAYER::GET_PLAYER_TEAM(player));

	if (flag4 & 8 != 0 && flag4 & 32768 != 0)
	{
		flag4 = flag4 | 65536;
		flag4 = flag4 - flag4 & 40952;
	}

	if (flag4 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			flag4 = flag4 - flag4 & 4;
			flag4 = flag4 | false;
		}
	}

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
			player2 = Global_1295666.f_149[i];
			flag = false;
			flag2 = false;
		
			if (flag4 & true != 0 && player2 == player)
				flag = true;
		
			if (func_92(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_93(i) != 1)
					flag = true;
		
			if (!flag)
				if (flag4 & 16384 != 0 && PED::IS_PED_INCAPACITATED(playerPed))
					flag = true;
		
			if (!flag)
				if (flag4 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(player2))
					flag = true;
		
			if (!flag)
			{
				if (flag4 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(player2))
					{
						case -1:
							if (flag4 & 16 != 0)
								flag2 = true;
							break;
					
						case 0:
							if (flag4 & 32 != 0)
								flag2 = true;
							break;
					
						case 1:
							if (flag4 & 64 != 0)
								flag2 = true;
							break;
					
						case 2:
							if (flag4 & 128 != 0)
								flag2 = true;
							break;
					
						case 3:
							if (flag4 & 256 != 0)
								flag2 = true;
							break;
					
						case 4:
							if (flag4 & 512 != 0)
								flag2 = true;
							break;
					
						case 5:
							if (flag4 & 1024 != 0)
								flag2 = true;
							break;
					
						case 6:
							if (flag4 & 2048 != 0)
								flag2 = true;
							break;
					
						case 8:
							if (flag4 & 4096 != 0)
								flag2 = true;
							break;
					}
				
					if (!flag2)
						flag = true;
				}
			}
		
			if (!flag)
				if (flag4 & 32768 != 0)
					if (GANG::NETWORK_GET_GANG_ID(player2) != any)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_94(player2))
						flag = true;
		
			if (!flag && flag3)
				if (!VOLUME::IS_POINT_IN_VOLUME(volume, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)))
					flag = true;
		
			if (!flag)
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
		}
	}

	if (flag3)
		VOLUME::DELETE_VOLUME(volume);

	return value;
}

void func_85(int iParam0, int iParam1) // Position - 0x1C82 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_86(var uParam0, var uParam1, int iParam2, Volume volParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, Hash hParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11) // Position - 0x1C93 Hash - 0x27EEDACD ^0xD08EAB77
{
	ItemSet itemSet;
	Ped indexedItemInItemset;
	Ped ped;
	BOOL flag;
	int num;
	int i;
	int entitiesInVolume;
	int j;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volParam3, itemSet, 1);

	if (entitiesInVolume > 0)
	{
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
			ped = indexedItemInItemset;
		
			if (ENTITY::DOES_ENTITY_EXIST(ped) && num < *uParam0 && num < iParam2)
			{
				if (func_95(ped, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(ped, "bIgnoreThisPed"))
				{
					if (!func_96(ped, uParam1))
					{
						flag = false;
					
						if (hParam7 != -1)
						{
							j = 0;
						
							for (j = 0; j < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(hParam7); j = j + 1)
							{
								if (PED::IS_PED_MODEL(ped, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(hParam7, j)))
								{
									flag = true;
									break;
								}
							}
						}
						else
						{
							flag = true;
						}
					
						if (flag)
						{
							if (!bParam11)
								if (!ENTITY::IS_ENTITY_DEAD(ped))
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, bParam5);
						
							uParam0->[num] = ped;
							num = num + 1;
						}
					}
				}
			}
		}
	}

	num >= iParam2 - 1 && entitiesInVolume >= iParam2;
	ITEMSET::DESTROY_ITEMSET(itemSet);
	return num;
}

void func_87(Volume volParam0) // Position - 0x1DA7 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_88(Ped pedParam0, int iParam1) // Position - 0x1DBE Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_73(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_73(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_73(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_73(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_73(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_73(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_73(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_73(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

int func_89() // Position - 0x1EBD Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_90() // Position - 0x1ECB Hash - 0xF7E13FBD ^0xF7E13FBD
{
	return "unnamed";
}

BOOL func_91(int iParam0) // Position - 0x1ED6 Hash - 0xC360B8E6 ^0xCBE2AF9D
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -1:
			num = 16;
			break;
	
		case 0:
			num = 32;
			break;
	
		case 1:
			num = 64;
			break;
	
		case 2:
			num = 128;
			break;
	
		case 3:
			num = 256;
			break;
	
		case 4:
			num = 512;
			break;
	
		case 5:
			num = 1024;
			break;
	
		case 6:
			num = 2048;
			break;
	
		case 8:
			num = 4096;
			break;
	}

	return num;
}

BOOL func_92(int iParam0) // Position - 0x1F65 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_97(36, iParam0);
}

int func_93(int iParam0) // Position - 0x1F83 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_94(Player plParam0) // Position - 0x1FCE Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_98(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_99(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_95(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2013 Hash - 0x866F5694 ^0x9EEAB7E1
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!bParam5 && !PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (PED::IS_PED_A_PLAYER(pedParam0))
		return false;

	if (bParam1)
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedParam0))
			return false;

	if (bParam4)
		if (PED::IS_PED_ON_MOUNT(pedParam0))
			return false;

	if (bParam2)
		if (func_100(pedParam0, false) != -1)
			return false;

	return true;
}

BOOL func_96(Ped pedParam0, var uParam1) // Position - 0x208B Hash - 0xDC7D3FF5 ^0xDC7D3FF5
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (pedParam0 == uParam1->[i])
			return true;
	}

	return false;
}

BOOL func_97(int iParam0, int iParam1) // Position - 0x20B7 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_101(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_102())
		return func_101(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_101(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_98(Player plParam0) // Position - 0x212B Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_99(Player plParam0) // Position - 0x2148 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_103(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_104(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

int func_100(Ped pedParam0, BOOL bParam1) // Position - 0x21CB Hash - 0x46B9578F ^0x31193522
{
	return func_105(pedParam0, Global_1893611.f_2, bParam1);
}

BOOL func_101(Any* panParam0, int iParam1, int iParam2) // Position - 0x21E1 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_102() // Position - 0x2218 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_103(Player plParam0) // Position - 0x2227 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_104(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_104(Player plParam0) // Position - 0x2293 Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

int func_105(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x22CE Hash - 0x7B4C7353 ^0x7B4C7353
{
	var unk;
	var unk2;

	if (iParam1 == -1)
		return -1;

	if (!func_106(iParam1, &unk, &unk2, false, false))
		return -1;

	return func_107(pedParam0, unk, unk2, bParam2);
}

BOOL func_106(int iParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2300 Hash - 0xCBEA69A ^0xCBEA69A
{
	BOOL flag;

	flag = func_18() != -1;

	switch (iParam0)
	{
		case 3:
			*uParam1 = 638;
			*uParam2 = 650;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 5:
			*uParam1 = 137;
			*uParam2 = 318;
		
			if (flag)
				*uParam2 = 142;
			break;
	
		case 6:
			*uParam1 = 651;
			*uParam2 = 652;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 11:
			*uParam1 = 801;
			*uParam2 = 827;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 21:
			*uParam1 = 774;
			*uParam2 = 776;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 22:
			if (bParam4)
				*uParam1 = 709;
			else
				*uParam1 = 703;
		
			*uParam2 = 717;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 23:
			*uParam1 = 795;
			*uParam2 = 795;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 26:
			*uParam1 = 466;
		
			if (bParam3)
				*uParam2 = 494;
			else
				*uParam2 = 496;
		
			if (flag)
				*uParam2 = 466;
			break;
	
		case 28:
			*uParam1 = 796;
			*uParam2 = 797;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 30:
			*uParam1 = 738;
			*uParam2 = 738;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 33:
			*uParam1 = 319;
			*uParam2 = 338;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 37:
			*uParam1 = 685;
			*uParam2 = 694;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 40:
			*uParam1 = 502;
			*uParam2 = 547;
		
			if (flag)
				*uParam2 = 503;
			break;
	
		case 44:
			*uParam1 = 788;
			*uParam2 = 792;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 60:
			*uParam1 = 695;
			*uParam2 = 702;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 66:
			*uParam1 = 374;
			*uParam2 = 375;
		
			if (flag)
				*uParam2 = 374;
			break;
	
		case 69:
			*uParam1 = 730;
			*uParam2 = 734;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 70:
			*uParam1 = 560;
			*uParam2 = 582;
		
			if (flag)
				*uParam2 = 560;
			break;
	
		case 71:
			*uParam1 = 739;
			*uParam2 = 744;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 73:
			*uParam1 = 548;
			*uParam2 = 559;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 74:
			*uParam1 = 583;
		
			if (bParam3)
				*uParam2 = 592;
			else
				*uParam2 = 606;
		
			if (flag)
				*uParam2 = 584;
			break;
	
		case 75:
			*uParam1 = 745;
			*uParam2 = 748;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 77:
			*uParam1 = 727;
			*uParam2 = 729;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 80:
			*uParam1 = 497;
			*uParam2 = 500;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 81:
			*uParam1 = 0;
		
			if (bParam3)
				*uParam2 = 47;
			else
				*uParam2 = 63;
		
			if (flag)
				*uParam2 = 5;
			break;
	
		case 82:
			*uParam1 = 725;
			*uParam2 = 726;
			break;
	
		case 83:
			*uParam1 = 376;
			*uParam2 = 425;
		
			if (flag)
				*uParam2 = 378;
			break;
	
		case 87:
			*uParam1 = 653;
		
			if (bParam3)
				*uParam2 = 667;
			else
				*uParam2 = 684;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 91:
			*uParam1 = 762;
			*uParam2 = 766;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 94:
			*uParam1 = 793;
			*uParam2 = 794;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 98:
			*uParam1 = 437;
			*uParam2 = 465;
		
			if (flag)
				*uParam2 = 437;
			break;
	
		case 99:
			*uParam1 = 607;
			*uParam2 = 619;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 101:
			*uParam1 = 620;
			*uParam2 = 635;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 102:
			*uParam1 = 735;
			*uParam2 = 737;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 103:
			*uParam1 = 636;
			*uParam2 = 637;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 106:
			*uParam1 = 749;
			*uParam2 = 757;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 107:
			*uParam1 = 798;
			*uParam2 = 800;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 108:
			*uParam1 = 758;
			*uParam2 = 761;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 111:
			*uParam1 = 69;
		
			if (bParam3)
				*uParam2 = 127;
			else
				*uParam2 = 136;
		
			if (flag)
				*uParam2 = 72;
			break;
	
		case 116:
			*uParam1 = 718;
			*uParam2 = 724;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 121:
			*uParam1 = 339;
			*uParam2 = 369;
		
			if (flag)
				*uParam2 = 369;
			break;
	
		case 122:
			*uParam1 = 777;
			*uParam2 = 784;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 123:
			*uParam1 = 501;
			*uParam2 = 501;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 127:
			*uParam1 = 426;
			*uParam2 = 436;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 131:
			*uParam1 = 785;
			*uParam2 = 787;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 132:
			*uParam1 = 370;
			*uParam2 = 373;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 135:
			*uParam1 = 767;
			*uParam2 = 773;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 139:
			*uParam1 = 828;
			*uParam2 = 851;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}

	if (*uParam1 == -1 || *uParam2 == -1)
		return false;

	return true;
}

int func_107(Ped pedParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x29C0 Hash - 0x32945A99 ^0xFCA9036B
{
	PersChar perscharIndexFromPedIndex;
	int i;
	int num;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) && !bParam3)
		return -1;

	perscharIndexFromPedIndex = PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(pedParam0);

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(perscharIndexFromPedIndex))
		return -1;

	i = uParam1;

	for (i = uParam1; i <= uParam2; i = i + 1)
	{
		num = i;
	
		if (func_108(num) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_109(num)))
			if (func_109(num) == perscharIndexFromPedIndex)
				return num;
	}

	return -1;
}

Hash func_108(int iParam0) // Position - 0x2A3A Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_110(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/];
}

PersChar func_109(int iParam0) // Position - 0x2A58 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_110(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/].f_1;
}

BOOL func_110(int iParam0) // Position - 0x2A78 Hash - 0x958B152F ^0x888D9460
{
	return iParam0 > -1 && iParam0 < 948;
}

