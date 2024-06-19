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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xEFA4D438 ^0x9C4712CB
{
	int num;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	num.f_2 = 255;
	num.f_4 = 6;
	num.f_26 = -1;

	if (!func_1(&num, &uScriptParam_0))
		func_2(&num, "failed to launch the script.");

	if (uScriptParam_0.f_15)
		func_3();

	if (func_4(&(Global_1290271.f_814.f_72)))
		func_5(&(Global_1290271.f_814.f_72));

	while (true)
	{
		func_6(&num, &uScriptParam_0);
	
		if (func_7(&num, &uScriptParam_0))
			func_2(&num, "script should terminate.");
	
		if (!func_8(num, 2048))
		{
			if (func_9(&num, &uScriptParam_0))
			{
				func_10(&num, "script should terminate due to async update.");
			}
			else if (!func_11(&num))
			{
			}
			else
			{
				if (!func_8(num, 8))
					if (func_12(&num))
						func_13(&num, 8);
			
				if (func_8(num, 8))
					if (func_14(&num))
						if (num.f_26 != -1)
							if (!func_15(num.f_26))
								if (func_16())
									func_17(num.f_26, true);
			
				if (func_18(&num))
					func_10(&num, "update requested thread termination.");
			}
		}
		else if (NETWORK::GET_TIME_DIFFERENCE(num.f_25, NETWORK::GET_NETWORK_TIME_ACCURATE()) > &func_5)
		{
			if (func_14(&num))
			{
				num.f_25 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			
				if (func_8(num, 2))
					func_19();
				else
					func_20();
			}
		}
	
		if (func_21(&num, &uScriptParam_0) || func_8(num, 2048))
			func_2(&num, "event requested thread termination.");
	
		BUILTIN::WAIT(0);
	}

	func_2(&num, "end of thread.");
	return;
}

BOOL func_1(var uParam0, Any* panParam1) // Position - 0x187 Hash - 0xD114B772 ^0xB0EA1DF9
{
	Entity scriptBrainEntity;
	int netID;

	scriptBrainEntity = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();

	if (!ENTITY::DOES_ENTITY_EXIST(scriptBrainEntity))
		return false;

	if (!ENTITY::IS_ENTITY_A_VEHICLE(scriptBrainEntity))
		return false;

	uParam0->f_3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(scriptBrainEntity);

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		return false;

	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_11), panParam1, 2);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2))
		return false;

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		func_13(uParam0, 1);
		netID = NETWORK::VEH_TO_NET(uParam0->f_3);
	
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(netID))
		{
		}
		else
		{
			NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(netID, PLAYER::PLAYER_ID(), true);
		}
	}

	if (!func_22(uParam0, panParam1))
		return false;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0xA6AC35DB4A7957A8(275);
	return true;
}

void func_2(var uParam0, char* sParam1) // Position - 0x24A Hash - 0xE5F8F126 ^0xD0213F64
{
	BOOL flag;

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1))
	{
	}

	VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
	func_23(uParam0);
	func_24(uParam0);

	if (func_4(&(uParam0->f_13)))
		func_5(&(uParam0->f_13));

	if (func_4(&(uParam0->f_16)))
		func_5(&(uParam0->f_16));

	if (func_4(&(uParam0->f_19)))
		func_5(&(uParam0->f_19));

	if (func_4(&(Global_1290271.f_814.f_72)))
		func_5(&(Global_1290271.f_814.f_72));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		flag = func_8(*uParam0, 2);
	
		if (!flag)
			if (func_25(uParam0->f_3))
				flag = true;
	
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(uParam0->f_3, 17, true);
		
			if (flag)
			{
				func_26(uParam0->f_3, false);
			}
			else
			{
				func_26(uParam0->f_3, true);
				TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(uParam0->f_3, false);
			}
		}
	
		!func_27(&(uParam0->f_11), uParam0->f_3, 2, !flag, func_14(uParam0));
	
		if (func_8(*uParam0, 4096))
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true) == uParam0->f_3)
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
	}

	if (func_14(uParam0))
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), 0);
		func_28(4);
		func_28(2);
		func_29();
	}
	else if (func_30())
	{
		func_31(11, uParam0->f_2, Global_1295666.f_149[Global_1295666], false);
		func_32(1649473200, 31, "NSTM_STABLE_DESTROYED_VEHICLE");
		func_33();
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Position - 0x3BD Hash - 0x74C3CA8D ^0x74C3CA8D
{
	if (func_34(8, 255))
		return;

	func_35(6, 3);
	return;
}

BOOL func_4(var uParam0) // Position - 0x3D8 Hash - 0x5001E582 ^0x5001E582
{
	return func_36(*uParam0, 1);
}

void func_5(var uParam0) // Position - 0x3E8 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_6(var uParam0, Any* panParam1) // Position - 0x3FE Hash - 0xC34FC4AA ^0x4B76A56F
{
	Vehicle vehicle;
	Player player;
	Entity vehicleOwner;
	Ped pedIndexFromEntityIndex;
	Ped ped;

	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);

	if (!func_14(uParam0))
		return;

	vehicle = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(vehicle))
		return;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	if (PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(player) != vehicle)
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(player, vehicle);

	vehicleOwner = VEHICLE::_GET_VEHICLE_OWNER(vehicle);

	if (ENTITY::IS_ENTITY_A_PED(vehicleOwner))
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vehicleOwner);

	ped = PLAYER::PLAYER_PED_ID();

	if (pedIndexFromEntityIndex != ped)
		VEHICLE::SET_PED_OWNS_VEHICLE(ped, vehicle);

	return;
}

BOOL func_7(var uParam0, var uParam1) // Position - 0x491 Hash - 0xB950389B ^0x8D1AD936
{
	if (func_37(true, true))
		return true;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		return true;

	if (!func_14(uParam0))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_11)) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_11)))
		{
			func_13(uParam0, 2);
			return true;
		}
	}

	if (func_38(uParam0, uParam1))
		return true;

	return false;
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x4F6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_9(var uParam0, var uParam1) // Position - 0x505 Hash - 0xFE873285 ^0xFE873285
{
	BOOL flag;

	func_39(uParam0);
	func_40(uParam0);

	if (func_41(uParam0, uParam1))
		return true;

	if (func_42(uParam0, uParam1))
		return true;

	if (func_14(uParam0))
	{
		if (func_43())
		{
			func_13(uParam0, 2);
			return true;
		}
	
		if (!func_8(*uParam0, 8192))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) > 250f)
			{
				func_13(uParam0, 8192);
				func_13(uParam0, 2);
				return true;
			}
			else
			{
				flag = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) >= 188f;
			
				if (!func_8(*uParam0, 16384))
				{
					if (flag)
					{
						func_17(933, true);
						func_44(&(uParam0->f_22));
						func_13(uParam0, 16384);
					}
				}
				else if (!flag && func_45(&(uParam0->f_22), 3f))
				{
					func_5(&(uParam0->f_22));
					func_46(uParam0, 16384);
				}
			}
		}
	}

	return false;
}

void func_10(var uParam0, char* sParam1) // Position - 0x60D Hash - 0x960AC126 ^0xD00F81CC
{
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1))
	{
	}

	if (!func_14(uParam0))
		return;

	func_13(uParam0, 2048);
	uParam0->f_25 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (func_8(*uParam0, 2))
		func_19();
	else
		func_20();

	return;
}

BOOL func_11(var uParam0) // Position - 0x655 Hash - 0x2DCCEB7A ^0xD5F8CB2A
{
	if (!func_8(*uParam0, 16))
	{
		if (func_14(uParam0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			}
			else
			{
				PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_3);
				VEHICLE::SET_PED_OWNS_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3);
				func_13(uParam0, 16);
			}
		}
		else
		{
			func_13(uParam0, 16);
		}
	}

	if (!func_8(*uParam0, 32))
		if (func_47(uParam0))
			func_13(uParam0, 32);

	if (func_8(*uParam0, 16))
		if (func_8(*uParam0, 32))
			return true;

	return false;
}

BOOL func_12(var uParam0) // Position - 0x6F1 Hash - 0xA26DB50F ^0xA26DB50F
{
	BOOL num;

	num = 1;

	if (!func_48(uParam0))
		num = 0;

	if (!func_49(uParam0))
		num = 0;

	return num;
}

void func_13(var uParam0, int iParam1) // Position - 0x718 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_14(var uParam0) // Position - 0x729 Hash - 0x5001E582 ^0x5001E582
{
	return func_8(*uParam0, 1);
}

BOOL func_15(int iParam0) // Position - 0x739 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_17418.f_2585[num2], offset);
}

BOOL func_16() // Position - 0x763 Hash - 0x8E012C29 ^0x8E012C29
{
	if (!func_50() && func_51(true))
		return true;

	return false;
}

void func_17(int iParam0, BOOL bParam1) // Position - 0x782 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_52(iParam0, &num, &num2);

	if (!func_53(iParam0, num, num2, bParam1))
		return;

	func_54(num, num2);
	return;
}

BOOL func_18(var uParam0) // Position - 0x7AF Hash - 0xBCE2E7A4 ^0xBCE2E7A4
{
	if (func_55(uParam0))
		return true;

	func_56(uParam0);
	func_57(uParam0);
	func_58(uParam0);
	func_59(uParam0);

	if (func_14(uParam0))
		func_60(uParam0);

	return false;
}

void func_19() // Position - 0x7EC Hash - 0xCA40A0D7 ^0xCA40A0D7
{
	if (func_34(8, 255))
		return;

	func_61(3);
	return;
}

void func_20() // Position - 0x806 Hash - 0xCA40A0D7 ^0xCA40A0D7
{
	if (func_34(8, 255))
		return;

	func_62(3);
	return;
}

BOOL func_21(var uParam0, var uParam1) // Position - 0x820 Hash - 0xF8F480B6 ^0xBC00E66C
{
	int numberOfEvents;
	BOOL flag;
	struct<6> eventData;
	eEventType eventAtIndex;
	int i;

	numberOfEvents = SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK);
	flag = false;
	eventData.f_4 = -1;
	eventData.f_5 = -1;
	i = 0;

	for (i = 0; i < numberOfEvents; i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case -507840394:
				if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 6))
					break;
			
				if (eventData != 47)
					break;
			
				flag = func_63(uParam0, uParam1, &eventData);
			
				if (flag)
					return true;
			
				flag = func_64(uParam0, uParam1, &eventData);
			
				if (flag)
					return true;
				break;
		}
	}

	return false;
}

BOOL func_22(var uParam0, Any* panParam1) // Position - 0x8B7 Hash - 0x3745D0CB ^0x17C5884E
{
	uParam0->f_26 = 851;
	return true;
}

void func_23(var uParam0) // Position - 0x8C7 Hash - 0x2E64D355 ^0xB19BEC49
{
	if (func_4(&(uLocal_19.f_3)))
		func_5(&(uLocal_19.f_3));

	func_65(uLocal_19.f_2);
	func_66(&(uLocal_19.f_7), true, true);
	return;
}

void func_24(var uParam0) // Position - 0x8F4 Hash - 0x74014A98 ^0x4C9A575C
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[i]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4[i]))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 467, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 277, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 209, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 208, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam0->f_4[i]);
			}
		}
	}

	return;
}

BOOL func_25(Vehicle veParam0) // Position - 0x976 Hash - 0xD8F57421 ^0xD07B2EEC
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false, false))
		return false;

	if (func_67(veParam0, 0) && func_67(veParam0, 1))
		return false;

	return true;
}

void func_26(Vehicle veParam0, BOOL bParam1) // Position - 0x9BA Hash - 0x8E8C6964 ^0xCABC518B
{
	Ped pedInVehicleSeat;
	int i;

	if (func_68(veParam0))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, i);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedInVehicleSeat))
					if (!bParam1 || ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat))
						PED::_WARP_PED_OUT_OF_VEHICLE(pedInVehicleSeat);
		}
	}

	return;
}

BOOL func_27(var uParam0, Entity eParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA12 Hash - 0x68325883 ^0x6F6E637A
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1290271.f_11.f_320, i))
		{
			Global_1290271.f_11.f_323[i /*6*/].f_2 = eParam1;
			Global_1290271.f_11.f_323[i /*6*/].f_3 = iParam2;
			Global_1290271.f_11.f_323[i /*6*/] = { *uParam0 };
			Global_1290271.f_11.f_323[i /*6*/].f_4 = 0;
			Global_1290271.f_11.f_323[i /*6*/].f_5 = 0;
		
			if (bParam4)
				Global_1290271.f_11.f_323[i /*6*/].f_4 = Global_1290271.f_11.f_323[i /*6*/].f_4 | 8;
		
			if (bParam3)
				Global_1290271.f_11.f_323[i /*6*/].f_4 = Global_1290271.f_11.f_323[i /*6*/].f_4 | 2;
		
			if (bParam4)
			{
				switch (iParam2)
				{
					case 0:
					case 1:
						Global_1291939 = i;
						Global_1291939.f_2 = 0;
						break;
				
					case 2:
					case 3:
						Global_1291939.f_1 = i;
						break;
				}
			}
		
			MISC::SET_BIT(&(Global_1290271.f_11.f_320), i);
			return true;
		}
	}

	return false;
}

void func_28(int iParam0) // Position - 0xB42 Hash - 0x4F769ECC ^0x83CF268
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_10 = Global_1289643[num /*19*/].f_10 - Global_1289643[num /*19*/].f_10 && iParam0;
	return;
}

void func_29() // Position - 0xB72 Hash - 0xB30E24CD ^0xDFB72892
{
	func_69(97);
	func_69(98);
	func_69(99);
	func_69(100);
	Global_1290271.f_814.f_77 = { func_70() };
	Global_1290271.f_814.f_81 = -1;
	Global_1903838.f_536 = 0;
	Global_1903838.f_537 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_30() // Position - 0xBBE Hash - 0x8190E5D8 ^0x1AD5F36F
{
	return Global_1149432.f_5568.f_132;
}

void func_31(int iParam0, Player plParam1, Player plParam2, BOOL bParam3) // Position - 0xBCF Hash - 0x8CA21210 ^0x89C8C688
{
	BOOL flag;
	Player bitIndex;
	var value;
	var unk;

	flag = true;

	if (bParam3)
		flag = false;

	if (func_71(plParam1, flag))
		return;

	if (Global_1901671.f_740.f_41 < 1)
	{
		if (func_72(Global_1295666.f_149[Global_1295666], plParam1))
		{
			if (2 == iParam0 || 3 == iParam0)
				func_17(767, false);
		
			return;
		}
	}

	if (!func_73(iParam0) && Global_1149432.f_5568.f_2 == iParam0)
		if (Global_17418.f_2641.f_1 >= Global_1295666.f_16 - func_74(iParam0))
			return;

	if (iParam0 == 1 && Global_1149432.f_5568.f_1 != 1 && Global_1149432.f_5568.f_1 != 0 && Global_1149432.f_5568.f_9 == Global_1295666.f_16)
		return;

	if (iParam0 == 1 || iParam0 == 9)
	{
		bitIndex = plParam1;
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
		unk.f_6 = 255;
		unk.f_4 = 4;
		unk.f_6 = plParam1;
		unk.f_7 = 3;
		func_75(&unk, value);
	}

	if (plParam1 != 255)
	{
		Global_1149432.f_5568.f_3 = func_76(plParam1, true);
		Global_1149432.f_5568.f_4 = func_77(plParam1, false, true);
		Global_1149432.f_5568.f_5 = plParam1;
	}
	else
	{
		Global_1149432.f_5568.f_3 = 0f;
		Global_1149432.f_5568.f_4 = 0;
		Global_1149432.f_5568.f_5 = 255;
	}

	Global_1149432.f_5568.f_1 = iParam0;
	Global_1149432.f_5568.f_9 = Global_1295666.f_16;
	return;
}

void func_32(Hash hParam0, int iParam1, char* sParam2) // Position - 0xD52 Hash - 0xF9431F25 ^0x8AB975EB
{
	int cashBalance;
	int num;

	cashBalance = func_78(hParam0, true, 59806960);

	if (cashBalance <= 0)
		return;

	if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0))
		return;

	if (!func_79(hParam0, 1, 59806960))
		return;

	num = func_80(hParam0, sParam2, 1, true, false, 59806960);

	if (num == -1)
		return;

	func_81(iParam1, cashBalance, false);
	return;
}

void func_33() // Position - 0xDB6 Hash - 0x2100AD75 ^0x947C32AD
{
	Global_1149432.f_5568.f_132 = 0;
	return;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0xDC8 Hash - 0xDC1A83B4 ^0xAE29DD8D
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_10 && iParam0 != false;
}

void func_35(int iParam0, int iParam1) // Position - 0xE02 Hash - 0x429BCC45 ^0xBC59CA01
{
	int eventData;
	var value;
	Player player;
	int i;

	eventData.f_4 = -1;
	eventData.f_5 = -1;
	eventData = 47;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	eventData.f_4 = iParam0;
	eventData.f_5 = iParam1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(eventData.f_1))
		return;

	if (eventData.f_4 == 2 || eventData.f_4 == 3 || eventData.f_4 == 6 || eventData.f_4 == 7 || eventData.f_4 == 8 || eventData.f_4 == 9 || eventData.f_4 == 10 || eventData.f_4 == 11 || eventData.f_4 == 12 || eventData.f_4 == 13 || eventData.f_4 == 14 || eventData.f_4 == 15)
	{
		for (i = 0; i < 32; i = i + 1)
		{
			player = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
			}
		}
	}
	else
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 6, 0, &value);
	return;
}

BOOL func_36(int iParam0, int iParam1) // Position - 0xF26 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_37(BOOL bParam0, BOOL bParam1) // Position - 0xF35 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_38(var uParam0, var uParam1) // Position - 0x1015 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

void func_39(var uParam0) // Position - 0x101E Hash - 0x69446760 ^0x5DAB1B3D
{
	BOOL flag;

	flag = false;

	if (func_82(255) == 1)
		flag = true;

	if (flag)
	{
		if (func_83(uParam0->f_2))
		{
			if (!func_8(*uParam0, 256))
			{
				NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_3), true, 256);
				func_13(uParam0, 256);
			}
		
			NETWORK::PREVENT_NETWORK_ID_MIGRATION(NETWORK::_0xF260AF6F43953316(uParam0->f_3));
		}
		else if (func_8(*uParam0, 256))
		{
			NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_3), false, 256);
			func_46(uParam0, 256);
		}
	}
	else if (func_8(*uParam0, 256))
	{
		func_46(uParam0, 256);
	}

	return;
}

void func_40(var uParam0) // Position - 0x10BB Hash - 0x698973BF ^0x319551A9
{
	Player player;
	Any gangId;
	Any gangId2;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}

	if (func_14(uParam0))
	{
		func_46(uParam0, 512);
		return;
	}

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}

	gangId = GANG::NETWORK_GET_GANG_ID(uParam0->f_2);
	gangId2 = GANG::NETWORK_GET_GANG_ID(player);

	if (gangId == gangId2)
	{
		if (!func_8(*uParam0, 512))
		{
			func_13(uParam0, 512);
			func_46(uParam0, 1024);
		}
	}
	else
	{
		if (func_8(*uParam0, 512))
		{
			func_46(uParam0, 512);
		
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
				func_13(uParam0, 1024);
		}
	
		if (func_8(*uParam0, 1024))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, false))
			{
				if (!func_84(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_VEHICLE))
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 64, 0);
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
			{
			}
			else
			{
				func_46(uParam0, 1024);
			}
		}
	}

	return;
}

BOOL func_41(var uParam0, var uParam1) // Position - 0x11FC Hash - 0x34BF9C73 ^0x34BF9C73
{
	func_85(uParam0);
	return false;
}

BOOL func_42(var uParam0, var uParam1) // Position - 0x120B Hash - 0x627E5DCF ^0x84453419
{
	if (!func_8(*uParam0, 128))
	{
		if (!func_86(uParam0))
			return false;
	
		if (func_25(uParam0->f_3))
			return false;
	
		func_87(&(uParam0->f_19), false);
		func_13(uParam0, 128);
		func_88(uParam0, uParam1);
		func_57(uParam0);
		func_89(uParam0);
	}

	if (!func_14(uParam0))
		return false;

	if (!func_45(&(uParam0->f_19), 5f))
		return false;

	return true;
}

BOOL func_43() // Position - 0x1282 Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_44(var uParam0) // Position - 0x12A7 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_90(uParam0, 0f);
	return;
}

BOOL func_45(var uParam0, int iParam1) // Position - 0x12B6 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_4(uParam0))
		return false;

	if (func_91(uParam0) > iParam1)
		return true;

	return false;
}

void func_46(var uParam0, int iParam1) // Position - 0x12DD Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_47(var uParam0) // Position - 0x12F2 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_48(var uParam0) // Position - 0x12FB Hash - 0x4728C32C ^0x562288F8
{
	int expected;
	var actual;
	int i;
	int num;

	if (!func_86(uParam0))
	{
		if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(uParam0->f_3, &expected, &actual))
		{
			num = 0;
		
			for (i = 0; i < 6; i = i + 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[i]))
				{
					uParam0->f_4[i] = func_92(uParam0->f_3, i);
				
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[i]))
					{
						num = num + 1;
						PED::SET_PED_OWNS_ANIMAL(PLAYER::GET_PLAYER_PED(uParam0->f_2), uParam0->f_4[i], false);
					
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4[i]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[i], true, false);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 467, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 277, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 209, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 208, true);
						}
					}
				}
			}
		
			if (num < expected)
			{
			}
			else if (num == expected)
			{
				func_13(uParam0, 64);
				return true;
			}
			else if (num > expected)
			{
				func_13(uParam0, 64);
				return true;
			}
		}
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_49(var uParam0) // Position - 0x1413 Hash - 0xD67DB847 ^0xFE2AA382
{
	BOOL flag;

	flag = true;

	if (func_14(uParam0))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uLocal_19.f_2))
		{
			uLocal_19.f_2 = VOLUME::CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), 0f, 0f, -7.0567f, 4.75f, 3.25f, 1.85f);
		
			if (VOLUME::DOES_VOLUME_EXIST(uLocal_19.f_2))
				PED::_ATTACH_VOLUME_TO_ENTITY(uLocal_19.f_2, uParam0->f_3, 0f, 0f, 0f, 0f, 0f, 90f, 2, true);
		}
	
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			return false;
		}
	}

	if (func_14(uParam0))
	{
		if (!func_8(uLocal_19.f_1, 1))
		{
			PROPSET::_ADD_ADDITIONAL_PROP_SET_FOR_VEHICLE(uParam0->f_3, joaat("pg_mp005_huntingWagonTarp01"));
			func_13(&(uLocal_19.f_1), 1);
			flag = false;
		}
		else if (!PROPSET::_IS_VEHICLE_PROP_SET_LOADED_ADDITIONAL(uParam0->f_3) || !VEHICLE::_GET_VEHICLE_IS_PROP_SET_APPLIED(uParam0->f_3))
		{
			flag = false;
		}
	
		if (!func_8(uLocal_19.f_1, 2))
		{
			PROPSET::_ADD_LIGHT_PROP_SET_TO_VEHICLE(uParam0->f_3, joaat("pg_veh_cart06_lanterns01"));
			func_13(&(uLocal_19.f_1), 2);
			flag = false;
		}
	
		if (flag)
		{
			if (!func_93())
				return false;
		
			func_94(uParam0->f_3, true, true);
		}
	}

	if (flag)
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_3, false);

	return flag;
}

BOOL func_50() // Position - 0x1538 Hash - 0x61E8C0F8 ^0x61E8C0F8
{
	int i;

	if (func_95())
		return true;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1904402[i] != 0)
			return true;
	}

	return false;
}

BOOL func_51(BOOL bParam0) // Position - 0x156F Hash - 0xC4B2DC07 ^0x9B02603B
{
	if (func_96())
		return false;

	if (!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT())
		return false;

	if (func_97(&(Global_1102813.f_4), 1, 5))
		return false;

	if (!bParam0)
		if (!func_50())
			return false;

	if (Global_13 || Global_1048584 || func_98())
		return false;

	if (!func_99())
		return false;

	if (func_100())
		return false;

	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
		return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (Global_1915656.f_20638 && Global_1915656.f_20241.f_43 == 2 && Global_1940252.f_2)
		return false;

	if (func_101())
		return false;

	return true;
}

void func_52(int iParam0, var uParam1, var uParam2) // Position - 0x1647 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_53(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1663 Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_102(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_103(iParam0))
		return false;

	if (func_104(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_105(iParam0, 1) || func_106(32768))
		if (!func_105(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_99())
		return false;

	return true;
}

void func_54(int iParam0, int iParam1) // Position - 0x1705 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_55(var uParam0) // Position - 0x1729 Hash - 0x83030C5C ^0xAD3E7F8A
{
	Entity firstEntityPedIsCarrying;
	Hash hash;

	if (func_14(uParam0))
	{
		switch (uLocal_19.f_6)
		{
			case 0:
				if (func_107(uLocal_19.f_7))
					func_66(&(uLocal_19.f_7), true, true);
			
				if (func_4(&(uLocal_19.f_3)))
					func_5(&(uLocal_19.f_3));
			
				if (func_108(uParam0))
				{
					if (func_109())
					{
						uLocal_19.f_7 = func_110("HWAGON_TITLE", joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), uLocal_19.f_2, 2, 1, 0, 4, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), 0);
						uLocal_19.f_6 = 1;
					}
				}
				else if (func_111() && !func_112(false))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), uLocal_19.f_2, true, 0))
					{
						if (func_113(-889932290))
						{
							if (func_114(-889932290))
							{
								func_115();
								func_116(0);
							}
						}
					}
				}
				break;
		
			case 1:
				if (!func_108(uParam0))
				{
					uLocal_19.f_6 = 0;
				}
				else
				{
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), true);
				
					if (func_117(uLocal_19.f_7, true))
					{
						func_118(true, 0);
						func_116(-889932290);
						func_44(&(uLocal_19.f_3));
						func_66(&(uLocal_19.f_7), true, true);
						uLocal_19.f_6 = 2;
					}
				}
				break;
		
			case 2:
				if (func_119())
					uLocal_19.f_6 = 0;
				else if (func_45(&(uLocal_19.f_3), 3f))
					uLocal_19.f_6 = 0;
				break;
		}
	
		if (!func_15(856))
		{
			if (PED::IS_PED_CARRYING_SOMETHING(PLAYER::PLAYER_PED_ID()))
			{
				firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
			
				if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
				{
					hash = func_120(firstEntityPedIsCarrying);
				
					if (Global_1901671.f_701.f_32)
					{
					}
					else if (func_121())
					{
					}
					else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(firstEntityPedIsCarrying))
					{
					}
					else if (!func_122(ENTITY::GET_ENTITY_MODEL(firstEntityPedIsCarrying)))
					{
					}
					else if (!func_123(hash))
					{
					}
					else if (func_16())
					{
						func_17(856, false);
					}
				}
			}
		}
	}

	return false;
}

void func_56(var uParam0) // Position - 0x1903 Hash - 0x1E00259A ^0x92E04489
{
	if (!func_124(uParam0->f_2))
		return;

	switch (func_125(uParam0))
	{
		case 0:
			break;
	
		case 1:
			if (func_14(uParam0))
			{
				func_126(uParam0);
				func_28(4);
				func_28(2);
			}
			break;
	
		case 2:
			if (func_14(uParam0))
			{
				func_126(uParam0);
				func_17(79, true);
				func_28(4);
				func_28(2);
			}
			break;
	}

	return;
}

void func_57(var uParam0) // Position - 0x197A Hash - 0x646928F0 ^0x646928F0
{
	func_127(uParam0);
	return;
}

void func_58(var uParam0) // Position - 0x1988 Hash - 0x20E2678 ^0xFD18D6EB
{
	Vehicle transportEntity;
	int num;
	int flags;
	int flags2;

	transportEntity = uParam0->f_3;
	num = uParam0->f_2;

	if (num < 0 || num >= 32)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(transportEntity))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(transportEntity))
		return;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(transportEntity, false, false))
		return;

	flags2 = 0;
	AITRANSPORT::_GET_TRANSPORT_USAGE_FLAGS(transportEntity, &flags);

	if (Global_1289643[num /*19*/].f_8 & 1 != 0)
	{
		if (!func_128(flags, 1))
			flags2 = 1;
	
		if (Global_1289643[num /*19*/].f_8 & 32 != 0)
			if (!func_128(flags, 32))
				flags2 = flags2 | 32;
	}
	else
	{
		if (Global_1289643[num /*19*/].f_8 & 2 != 0)
			if (!func_128(flags, 2))
				flags2 = flags2 | 2;
	
		if (Global_1289643[num /*19*/].f_8 & 4 != 0)
			if (!func_128(flags, 4))
				flags2 = flags2 | 4;
	
		if (Global_1289643[num /*19*/].f_8 & 8 != 0)
			if (!func_128(flags, 8))
				flags2 = flags2 | 8;
	
		if (Global_1289643[num /*19*/].f_8 & 64 != 0)
			if (!func_128(flags, 64))
				flags2 = flags2 | 64;
	
		if (Global_1289643[num /*19*/].f_8 & 128 != 0)
			if (!func_128(flags, 128))
				flags2 = flags2 | 128;
	
		if (Global_1289643[num /*19*/].f_8 & 256 != 0)
			if (!func_128(flags, 256))
				flags2 = flags2 | 256;
	
		if (Global_1289643[num /*19*/].f_8 & 16 != 0)
			if (!func_128(flags, 16))
				flags2 = 16;
	
		if (Global_1289643[num /*19*/].f_8 & 512 != 0)
			if (!func_128(flags, 512))
				flags2 = flags2 | 512;
	
		if (func_128(flags, 1024))
			if (!func_128(flags, 1024))
				flags2 = flags2 | 1024;
	}

	if (flags2 != 0)
		AITRANSPORT::_SET_TRANSPORT_USAGE_FLAGS(transportEntity, flags2);

	return;
}

void func_59(var uParam0) // Position - 0x1B77 Hash - 0x9E724ABF ^0x87D15840
{
	Vehicle vehicle;
	Ped ped;
	var unk;
	int num;

	if (!func_129(uParam0))
		return;

	vehicle = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(vehicle))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!func_130(vehicle, ped, &unk))
		return;

	func_131(vehicle);
	num = uParam0->f_2;

	if (Global_1289643[num /*19*/].f_8 & 16 != 0 || Global_1289642 & 32 != 0)
		if (func_16())
			func_17(80, true);
	else if (func_16())
		func_17(81, true);

	return;
}

void func_60(var uParam0) // Position - 0x1C02 Hash - 0xEDB5DE0 ^0xA882C0F1
{
	Vehicle vehicle;
	Ped ped;
	Player playerOwnerOfVehicle;
	Ped playerPed;
	int i;
	Ped ped2;
	Entity vehicleOwner;
	Ped pedIndexFromEntityIndex;

	vehicle = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(vehicle))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	playerOwnerOfVehicle = PLAYER::_GET_PLAYER_OWNER_OF_VEHICLE(vehicle);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerOwnerOfVehicle))
		return;

	playerPed = PLAYER::GET_PLAYER_PED(playerOwnerOfVehicle);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return;

	for (i = 0; i < 6; i = i + 1)
	{
		ped2 = uParam0->f_4[i];
	
		if (ENTITY::DOES_ENTITY_EXIST(ped2))
			func_132(playerPed, ped2);
	}

	vehicleOwner = VEHICLE::_GET_VEHICLE_OWNER(vehicle);

	if (ENTITY::IS_ENTITY_A_PED(vehicleOwner))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vehicleOwner);
	
		if (pedIndexFromEntityIndex == playerPed)
			return;
	}

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(vehicle);
		return;
	}

	VEHICLE::SET_PED_OWNS_VEHICLE(playerPed, vehicle);
	return;
}

void func_61(int iParam0) // Position - 0x1CC6 Hash - 0xB751AE80 ^0xB751AE80
{
	func_35(2, iParam0);
	return;
}

void func_62(int iParam0) // Position - 0x1CD5 Hash - 0x44B9E71C ^0x44B9E71C
{
	func_35(3, iParam0);
	return;
}

BOOL func_63(var uParam0, var uParam1, var uParam2) // Position - 0x1CE4 Hash - 0xFCBB8B79 ^0xFCBB8B79
{
	return 0;
}

BOOL func_64(var uParam0, var uParam1, var uParam2) // Position - 0x1CED Hash - 0x72A2EC16 ^0x740A968C
{
	int num;

	num = uParam2->f_4;

	switch (uParam2->f_5)
	{
		case -1:
		case 0:
		case 2:
		case 4:
			return 0;
	}

	switch (num)
	{
		case 0:
		case 3:
			if (func_133(uParam0, uParam2))
			{
				func_134(uParam0);
				return 1;
			}
			break;
	
		case 1:
		case 2:
			if (func_133(uParam0, uParam2))
			{
				func_135(uParam0);
				return 1;
			}
			break;
	
		case 4:
			break;
	
		case 5:
			break;
	
		case 6:
			if (func_133(uParam0, uParam2))
				func_136(uParam0, uParam1);
			break;
	
		case 12:
			func_137(uParam0, uParam2, false);
			break;
	
		case 13:
			func_137(uParam0, uParam2, true);
			break;
	
		case 14:
			func_138(uParam0, uParam2);
			break;
	
		case 15:
			if (func_133(uParam0, uParam2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
					if (!func_68(uParam0->f_3))
					{
						TASK::_0x141BC64C8D7C5529(uParam0->f_3);
						TASK::_0xEBA2081E0A5F4D17(uParam0->f_3);
					}
				}
			}
			break;
	
		case 16:
			if (func_133(uParam0, uParam2))
			{
				func_13(uParam0, 4096);
				func_134(uParam0);
				return 1;
			}
			break;
	}

	return 0;
}

void func_65(Volume volParam0) // Position - 0x1E3A Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_66(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1E51 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_107(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_139(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_140(num);
	*uParam0 = 0;
	return;
}

int func_67(Vehicle veParam0, int iParam1) // Position - 0x1EA5 Hash - 0x92F566DD ^0xED527D94
{
	Ped pedInDraftHarness;

	pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(veParam0, iParam1);

	if (ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
		return 1;

	return 0;
}

BOOL func_68(Vehicle veParam0) // Position - 0x1EC5 Hash - 0x9318EC92 ^0xE8ACCA9D
{
	int vehicleNumberOfPassengers;

	vehicleNumberOfPassengers = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(veParam0);

	if (vehicleNumberOfPassengers > 0)
		return true;

	return false;
}

void func_69(int iParam0) // Position - 0x1EE0 Hash - 0x7317FD65 ^0x259FA389
{
	int num;
	int offset;

	if (!func_141(iParam0))
		return;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::CLEAR_BIT(&Global_1903838.f_496[num], offset);
	return;
}

struct<4> func_70() // Position - 0x1F14 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_71(Player plParam0, BOOL bParam1) // Position - 0x1F20 Hash - 0x9DDD16F1 ^0x74519E6F
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_1048577)
		return true;

	if (Global_1572887.f_72.f_40 > 10)
		return true;

	if (!func_142(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	if (func_142(func_143()))
		if (!func_77(Global_1295666.f_149[Global_1295666], false, true) && func_144(plParam0, bParam1))
			return true;

	return false;
}

BOOL func_72(Player plParam0, Player plParam1) // Position - 0x1FB0 Hash - 0xEB911828 ^0x45597204
{
	Player bitIndex;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	bitIndex = plParam1;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), bitIndex))
		return false;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex))
		return false;

	if (NETWORK::_0xFE53B1F8D43F19BF(plParam0, plParam1) == 2 || Global_1108965.f_34[bitIndex /*11*/].f_10)
		return true;

	return false;
}

BOOL func_73(int iParam0) // Position - 0x2024 Hash - 0xFEE6C2C1 ^0xFEE6C2C1
{
	switch (iParam0)
	{
		case 7:
			return false;
	
		case 9:
			return false;
	
		case 10:
			return false;
	
		case 11:
			return false;
	
		case 12:
			return false;
	
		default:
		
	}

	return true;
}

int func_74(int iParam0) // Position - 0x206B Hash - 0x2BB0D5C9 ^0x2BB0D5C9
{
	switch (iParam0)
	{
		case 7:
			return 5;
	
		case 9:
			return 10;
	
		case 10:
			return 5;
	
		case 11:
			return 10;
	
		case 12:
			return 5;
	
		default:
		
	}

	return 0;
}

void func_75(Any* panParam0, var uParam1) // Position - 0x20B4 Hash - 0x22B84C24 ^0x2E1C636D
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 186;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 8, 2, &uParam1);
	func_145(*panParam0);
	return;
}

float func_76(Player plParam0, BOOL bParam1) // Position - 0x20F4 Hash - 0x41550721 ^0x79E4DF3F
{
	Player player;

	if (!Global_1149432.f_5568)
		return 0f;

	if (plParam0 == Global_1295666.f_149[Global_1295666])
		return Global_17418.f_2641;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0f;

	player = plParam0;

	if (player < 0 || player >= 32)
		return 0f;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(plParam0)) > 1 && bParam1 && Global_1101558[player /*38*/].f_18 >= Global_1101558[player /*38*/].f_30)
		return Global_1101558[player /*38*/].f_18;

	return Global_1101558[player /*38*/].f_30;
}

BOOL func_77(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2194 Hash - 0x15E0EAC1 ^0x8D0C1A49
{
	Player player;

	if (!Global_1149432.f_5568)
		return false;

	if (plParam0 == Global_1295666.f_149[Global_1295666])
		return Global_17418.f_2641.f_2 == 2 || bParam1 && Global_17418.f_2641.f_2 == 1 || bParam2 && Global_17418.f_2641.f_2 == 3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;

	if (player < 0 || player >= 32)
		return false;

	return Global_1101558[player /*38*/].f_33 == 2 || bParam1 && Global_1101558[player /*38*/].f_33 == 1 || bParam2 && Global_1101558[player /*38*/].f_33 == 3;
}

int func_78(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0x225D Hash - 0x7D4A7F9 ^0x7D4A7F9
{
	if (!func_146(hParam0, 0))
		return 0;

	return func_147(hParam0, hParam2, true, bParam1, true, 0);
}

BOOL func_79(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x2281 Hash - 0x314C46E8 ^0x314C46E8
{
	int num;
	BOOL flag;

	num = func_78(hParam0, false, hParam2) * iParam1;
	flag = false;
	num == 0;

	if (num >= 0)
		flag = func_148(num);

	return flag;
}

int func_80(Hash hParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, Hash hParam5) // Position - 0x22B0 Hash - 0x8994BB7F ^0xDE1269F5
{
	int cashBalance;
	int goldBarBalance;
	var unk;
	int num;
	int num2;
	int i;
	var unk32;
	int num3;
	var unk49;

	if (!func_146(hParam0, 0))
		return -1;

	if (func_149(hParam0) != joaat("fee"))
		return -1;

	if (func_150())
		bParam3 = true;

	unk = 15;

	if (hParam5 == -570078785 || hParam5 == -915411861)
	{
		cashBalance = func_147(hParam0, hParam5, true, false, true, joaat("currency_cash")) * iParam2;
		goldBarBalance = 0;
	
		if (cashBalance <= 0)
		{
			goldBarBalance = func_147(hParam0, hParam5, true, false, true, joaat("currency_gold_bar")) * iParam2;
		
			if (goldBarBalance <= 0)
				return -1;
		}
	
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, goldBarBalance))
			return -1;
	}
	else if (func_151(hParam0, hParam5, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = unk[i /*2*/].f_1 * iParam2;
		
			if (!(func_152(unk[i /*2*/], false, bParam3, false) >= num2))
				return -1;
		}
	}
	else
	{
		return -1;
	}

	if (!bParam3 && func_153(false))
	{
		if (cashBalance > 0)
		{
			func_154(joaat("currency_cash"), cashBalance, -142743235, 0, false);
		}
		else if (goldBarBalance > 0)
		{
			func_154(joaat("currency_gold_bar"), goldBarBalance, -142743235, 0, false);
		}
		else if (func_155(hParam5))
		{
			for (i = 0; i < num; i = i + 1)
			{
				num2 = unk[i /*2*/].f_1 * iParam2;
				func_154(unk[i /*2*/], num2, -142743235, 0, false);
			}
		}
	
		return -1;
	}

	unk32.f_9 = 1;
	unk32.f_11 = joaat("SLOTID_NONE");
	unk32.f_8 = hParam0;
	unk32.f_9 = iParam2;
	unk32.f_13 = hParam5;
	unk32.f_12 = -142743235;
	num3 = func_156(joaat("spend"), &unk32, bParam4);

	if (num3 == -1)
	{
	}
	else
	{
		unk49.f_7 = -142743235;
		unk49.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk49.f_12), sParam1, 32);
		func_157(num3, unk49);
	}

	return num3;
}

void func_81(int iParam0, int iParam1, BOOL bParam2) // Position - 0x24A0 Hash - 0x365C2264 ^0x11ABF134
{
	char* str;

	str = func_158(iParam0);

	if (func_159(iParam0) && !bParam2)
		return;

	Global_1290271.f_11.f_755[iParam0] = func_160(MISC::VAR_STRING(2, str, iParam1), 10000, 0, 0, 0, true);
	return;
}

int func_82(int iParam0) // Position - 0x24E5 Hash - 0x14C162FD ^0x1A715561
{
	if (iParam0 == 255)
		return Global_1102813;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/];

	return 26;
}

BOOL func_83(int iParam0) // Position - 0x252C Hash - 0xA1D0C977 ^0xA1D0C977
{
	if (func_34(32, iParam0))
		return true;

	return false;
}

BOOL func_84(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x2544 Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

void func_85(var uParam0) // Position - 0x259D Hash - 0x5B06FE07 ^0xCEFCEFC0
{
	PropSet vehicleLightPropSet;
	ItemSet itemSet;
	int num;
	int entitiesFromPropSet;
	int i;
	Entity entityFromItem;

	if (!func_14(uParam0))
		return;

	if (func_8(uLocal_19.f_1, 16))
		return;

	vehicleLightPropSet = PROPSET::_GET_VEHICLE_LIGHT_PROP_SET(uParam0->f_3);

	if (!PROPSET::DOES_PROP_SET_EXIST(vehicleLightPropSet))
	{
	}
	else if (!PROPSET::IS_PROP_SET_FULLY_LOADED(vehicleLightPropSet))
	{
	}
	else
	{
		itemSet = ITEMSET::CREATE_ITEMSET(false);
		num = 0;
		entitiesFromPropSet = PROPSET::_GET_ENTITIES_FROM_PROP_SET(vehicleLightPropSet, itemSet, joaat("s_veh_lantern01_lf"), false, false);
	
		if (entitiesFromPropSet == 0)
		{
		}
		else
		{
			for (i = 0; i < entitiesFromPropSet; i = i + 1)
			{
				entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
			
				if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entityFromItem))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(entityFromItem);
					}
					else
					{
						ENTITY::SET_ENTITY_INVINCIBLE(entityFromItem, true);
						num = num + 1;
					}
				}
			}
		
			if (num == entitiesFromPropSet)
				func_13(&(uLocal_19.f_1), 16);
		
			ITEMSET::_CLEAR_ITEMSET(itemSet);
		}
	
		ITEMSET::DESTROY_ITEMSET(itemSet);
	}

	return;
}

BOOL func_86(var uParam0) // Position - 0x2672 Hash - 0xD809D5C9 ^0xD809D5C9
{
	return func_8(*uParam0, 64);
}

void func_87(var uParam0, BOOL bParam1) // Position - 0x2683 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_4(uParam0))
		func_44(uParam0);

	return;
}

void func_88(var uParam0, var uParam1) // Position - 0x26A3 Hash - 0x9147FD03 ^0x9147FD03
{
	return;
}

void func_89(var uParam0) // Position - 0x26AB Hash - 0xE3FED54E ^0xE3FED54E
{
	if (func_14(uParam0))
		func_17(70, true);

	return;
}

void func_90(var uParam0, float fParam1) // Position - 0x26C3 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_161() - fParam1;
	func_162(uParam0, 1);
	func_163(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

float func_91(var uParam0) // Position - 0x26E9 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_4(uParam0))
		return uParam0->f_1;

	if (func_164(uParam0))
		return uParam0->f_2;

	return func_161() - uParam0->f_1;
}

Ped func_92(Vehicle veParam0, int iParam1) // Position - 0x271E Hash - 0xE6B6CA7E ^0x25E8F64E
{
	Ped pedInDraftHarness;

	pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(veParam0, iParam1);
	!ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness);
	ENTITY::IS_ENTITY_DEAD(pedInDraftHarness);
	return pedInDraftHarness;
}

BOOL func_93() // Position - 0x2745 Hash - 0xC82BB3B3 ^0x6740E474
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_165(vehicleOwnedByPlayer))
		return false;

	return true;
}

void func_94(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2794 Hash - 0x320AAEF3 ^0x273CEC26
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return;

	if (bParam1)
		func_166(true);

	func_169(veParam0, func_167(), func_168(PLAYER::PLAYER_ID(), true), bParam2);
	return;
}

BOOL func_95() // Position - 0x27C8 Hash - 0xC2ABD0AE ^0xC2ABD0AE
{
	return Global_1904402.f_8872 != -1;
}

BOOL func_96() // Position - 0x27D9 Hash - 0xC131FBEB ^0x955222E7
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

BOOL func_97(Any* panParam0, int iParam1, int iParam2) // Position - 0x27F9 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

BOOL func_98() // Position - 0x2830 Hash - 0xA3BE243F ^0x24B01457
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

BOOL func_99() // Position - 0x2845 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_170())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_100() // Position - 0x2860 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1896762.f_352;
}

BOOL func_101() // Position - 0x286F Hash - 0x84CBCCC1 ^0x84CBCCC1
{
	BOOL num;

	if (!func_170())
		return false;

	num = Global_1904402.f_8874;
	Global_1904402.f_8874 = 0;
	return num;
}

BOOL func_102(int iParam0, int iParam1) // Position - 0x2896 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_103(int iParam0) // Position - 0x28AE Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_105(iParam0, 4))
		return false;

	return true;
}

BOOL func_104(int iParam0) // Position - 0x28C5 Hash - 0x7F4C96B ^0x650690F6
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
		return false;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	for (i = 0; i < Global_38.f_3542; i = i + 1)
	{
		if (Global_38.f_3542[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
				num2 = 2;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
				num2 = 5;
		
			num = cloudTimeAsInt - Global_38.f_3542[i /*3*/];
		
			if (Global_38.f_3542[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && Global_1904402.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
				return true;
		}
	}

	return false;
}

BOOL func_105(int iParam0, int iParam1) // Position - 0x2991 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_106(int iParam0) // Position - 0x29AA Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_107(int iParam0) // Position - 0x29BD Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

BOOL func_108(var uParam0) // Position - 0x29FC Hash - 0xB9DA4748 ^0xAA5D8C6D
{
	Ped ped;

	if (!func_14(uParam0))
		return false;

	if (CAM::HAS_LETTER_BOX())
		return false;

	if (func_111())
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (PED::IS_PED_RAGDOLL(ped))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(ped)))
		return false;

	if (!func_171(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), 1050253722, 1060320051, 0, 1061158912))
		return false;

	return true;
}

BOOL func_109() // Position - 0x2A81 Hash - 0xAF52340F ^0x4790E85B
{
	HUD::TEXT_BLOCK_REQUEST("SATCH");

	if (!HUD::TEXT_BLOCK_IS_LOADED("SATCH"))
		return false;

	return true;
}

int func_110(char* sParam0, Hash hParam1, Volume volParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, Hash hParam12, int iParam13) // Position - 0x2AA1 Hash - 0x8F454A79 ^0x7ED5D3D0
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam2))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_172(i, 2))
			if (volParam2 == Global_1951910[i /*23*/].f_10 && hParam1 == Global_1951910[i /*23*/].f_4)
				return i;
		else if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_173(num, hParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, volParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, false, false, 0, hParam12, iParam13);
		return num;
	}

	return 0;
}

BOOL func_111() // Position - 0x2B61 Hash - 0xC24BA3AE ^0xA4363903
{
	return Global_1940252.f_2 || Global_1940252 == 1;
}

BOOL func_112(BOOL bParam0) // Position - 0x2B7B Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_113(int iParam0) // Position - 0x2BAB Hash - 0x5E96C64E ^0x9919C25E
{
	if (iParam0 == Global_1940252.f_40)
		return true;

	return false;
}

BOOL func_114(int iParam0) // Position - 0x2BC3 Hash - 0xF5789336 ^0xF5789336
{
	int i;

	for (i = 0; i < 12; i = i + 1)
	{
		if (Global_1940252.f_11564[i] == iParam0)
			return true;
	}

	return false;
}

void func_115() // Position - 0x2BF3 Hash - 0xF4E9A977 ^0xD563EF2A
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("satchel")) > 0)
		Global_1940252.f_13 = 1;

	return;
}

void func_116(int iParam0) // Position - 0x2C12 Hash - 0x29A8F290 ^0x30794E3
{
	Global_1940252.f_40 = iParam0;
	return;
}

BOOL func_117(int iParam0, BOOL bParam1) // Position - 0x2C22 Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_107(iParam0))
		return false;

	num = func_139(iParam0);

	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951910[num /*23*/].f_3))
	{
		if (Global_1951910[num /*23*/].f_20)
			gameTimer = MISC::GET_GAME_TIMER();
		else
			gameTimer = MISC::GET_SYSTEM_TIME();
	
		progress = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
	
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3))
		{
			num2 = gameTimer - Global_1951910[num /*23*/].f_21;
			num3 = BUILTIN::FLOOR((float)Global_1951910[num /*23*/].f_18 * (1f - Global_1951910[num /*23*/].f_22));
		
			if (num2 > num3)
				return true;
		}
		else
		{
			Global_1951910[num /*23*/].f_21 = gameTimer;
			Global_1951910[num /*23*/].f_22 = progress;
		}
	}

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);
}

void func_118(BOOL bParam0, int iParam1) // Position - 0x2D1C Hash - 0xCC16269 ^0xB563FF97
{
	if (bParam0)
	{
		Global_1940252 = 1;
		Global_1940252.f_1 = iParam1;
	}
	else
	{
		Global_1940252 = 2;
	}

	return;
}

BOOL func_119() // Position - 0x2D3E Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1940252.f_2;
}

Hash func_120(Entity eParam0) // Position - 0x2D4C Hash - 0xCBDF2AE2 ^0xCD5FF04E
{
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ENTITY::GET_IS_ANIMAL(eParam0) || ENTITY::_GET_IS_BIRD(eParam0))
	{
		hash = func_174(&eParam0);
	
		if (!func_146(hash, 0))
			hash = func_175(eParam0);
	}
	else
	{
		hash = func_175(eParam0);
	}

	return hash;
}

BOOL func_121() // Position - 0x2D9F Hash - 0x3630EC94 ^0x3630EC94
{
	return func_176() || func_177();
}

BOOL func_122(Hash hParam0) // Position - 0x2DB5 Hash - 0x339D45CE ^0x339D45CE
{
	switch (hParam0)
	{
		case joaat("mp005_s_mp_tradegoodswrapped01x"):
		case joaat("mp005_p_mp_trader_gen_bag02x"):
			return false;
	
		default:
		
	}

	return true;
}

BOOL func_123(Hash hParam0) // Position - 0x2DD6 Hash - 0x36909805 ^0x36909805
{
	if (!func_179(func_178(hParam0)))
		return false;

	return func_180(hParam0) > 0;
}

BOOL func_124(int iParam0) // Position - 0x2DF8 Hash - 0x50BDBAE5 ^0x50BDBAE5
{
	if (func_34(4, iParam0))
		return true;

	return false;
}

int func_125(var uParam0) // Position - 0x2E0F Hash - 0x8C9D8EAE ^0x472C63C5
{
	return func_181(uParam0, 1086324736, 1094713344, 1077936128, 1090519040);
}

void func_126(var uParam0) // Position - 0x2E31 Hash - 0x9223C5D0 ^0x9223C5D0
{
	if (func_14(uParam0))
		func_35(15, 3);

	return;
}

void func_127(var uParam0) // Position - 0x2E49 Hash - 0xB6430F77 ^0x25615A98
{
	Ped pedInTransportSeat;
	Player playerIndexFromPed;
	Hash entityModel;
	Hash hash;

	if (!func_14(uParam0))
	{
		func_182(uParam0);
		return;
	}

	pedInTransportSeat = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_3, -1);

	if (ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat))
	{
		if (pedInTransportSeat == PLAYER::PLAYER_PED_ID())
		{
			func_182(uParam0);
			return;
		}
	}

	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (func_124(uParam0->f_2))
			MAP::BLIP_ADD_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
		else
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_POSSE_ALLY_OWNED"));
			return;
		}
	
		if (!PED::IS_PED_A_PLAYER(pedInTransportSeat))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_POSSE_ALLY_OWNED"));
			return;
		}
	
		playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedInTransportSeat);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndexFromPed))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_POSSE_ALLY_OWNED"));
			return;
		}
	
		if (func_183(playerIndexFromPed, false))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
			MAP::BLIP_ADD_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_POSSE_ALLY_OWNED"));
		}
	
		return;
	}

	if (MAP::_DOES_ENTITY_HAVE_BLIP(uParam0->f_3))
		return;

	uParam0->f_1 = MAP::BLIP_ADD_FOR_ENTITY(768962966, uParam0->f_3);
	entityModel = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);

	if (STREAMING::IS_MODEL_VALID(entityModel))
	{
		hash = func_184(entityModel);
	
		if (func_146(hash, 0))
			MAP::_SET_BLIP_NAME(uParam0->f_1, MISC::VAR_STRING(0, func_185(hash, false)));
		else
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_186(2));
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_186(2));
	}

	MAP::BLIP_ADD_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	return;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x2FE3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_129(var uParam0) // Position - 0x2FF2 Hash - 0xC131BF52 ^0x8D76D22A
{
	Vehicle vehicle;
	Ped ped;
	var unk;
	var gamerHandle;
	Player player;
	Player player2;
	Player player3;
	int num;
	int num2;
	var unk3;

	vehicle = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(vehicle))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	if (!func_130(vehicle, ped, &unk))
		return false;

	gamerHandle = { uParam0->f_11 };
	player = uParam0->f_2;
	player2 = PLAYER::PLAYER_ID();

	if (player == player2)
		return false;

	player3 = player;
	num = func_187(player3);

	if (func_188(player3))
	{
		num2 = func_189(num);
	
		if (num2 == 15 || num2 == 10)
			if (func_190(num, vehicle))
				return true;
	}

	if (Global_1289643[player3 /*19*/].f_8 & 16 != 0 || Global_1289642 & 32 != 0)
		return false;

	if (Global_1289643[player3 /*19*/].f_8 & 2 != 0 || Global_1289642 & 4 != 0)
		if (GANG::NETWORK_GET_GANG_ID(player2) == GANG::NETWORK_GET_GANG_ID(player))
			return false;

	unk3 = { func_191(player) };

	if (Global_1289643[player3 /*19*/].f_8 & 4 != 0 || Global_1289642 & 8 != 0)
		if (func_192(unk3, gamerHandle))
			return false;

	if (Global_1289643[player3 /*19*/].f_8 & 8 != 0 || Global_1289642 & 16 != 0)
		if (NETWORK::NETWORK_IS_FRIEND(&gamerHandle))
			return false;

	return true;
}

BOOL func_130(Vehicle veParam0, Ped pedParam1, var uParam2) // Position - 0x3164 Hash - 0xD04D4B6D ^0x223FF6C3
{
	Ped pedInTransportSeat;
	int seatIndex;
	int i;
	int num;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	num = -1;
	num2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0) - 1;

	for (i = num; i <= num2; i = i + 1)
	{
		seatIndex = i;
		pedInTransportSeat = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(veParam0, seatIndex);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat))
		{
		}
		else if (pedInTransportSeat == pedParam1)
		{
			*uParam2 = seatIndex;
			return true;
		}
	}

	return false;
}

void func_131(Vehicle veParam0) // Position - 0x31D5 Hash - 0xDA093C59 ^0xF8DC1E22
{
	Ped ped;
	var unk;
	var args;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false, false))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (!func_130(veParam0, ped, &unk))
		return;

	if (AITRANSPORT::IS_PED_EXITING_TRANSPORT(ped, veParam0))
		return;

	args.f_5 = 1073741824;
	args.f_6 = 1;
	args.f_3 = ped;
	args.f_4 = veParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&args);
	return;
}

void func_132(Ped pedParam0, Ped pedParam1) // Position - 0x325C Hash - 0x6F67FB05 ^0x3D7299C8
{
	Ped activeAnimalOwner;
	Ped pedIndexFromEntityIndex;

	activeAnimalOwner = PED::_GET_ACTIVE_ANIMAL_OWNER(pedParam1);

	if (ENTITY::IS_ENTITY_A_PED(activeAnimalOwner))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(activeAnimalOwner);
	
		if (pedIndexFromEntityIndex == pedParam0)
			return;
	}

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedParam1);
		return;
	}

	PED::SET_PED_OWNS_ANIMAL(pedParam0, pedParam1, false);
	return;
}

BOOL func_133(var uParam0, var uParam1) // Position - 0x32A4 Hash - 0x8ED84F8C ^0x61C669C8
{
	if (uParam0->f_2 != uParam1->f_1)
		return false;

	return true;
}

void func_134(var uParam0) // Position - 0x32BC Hash - 0xCA40BA01 ^0xCA40BA01
{
	if (!func_8(*uParam0, 4))
		func_13(uParam0, 4);

	return;
}

void func_135(var uParam0) // Position - 0x32D7 Hash - 0x59ACF74D ^0x59ACF74D
{
	if (!func_8(*uParam0, 4))
		func_13(uParam0, 2);

	return;
}

void func_136(var uParam0, var uParam1) // Position - 0x32F2 Hash - 0x552DA3D0 ^0x204D4381
{
	if (func_4(&(uParam0->f_13)))
		func_5(&(uParam0->f_13));

	if (func_4(&(uParam0->f_16)))
		func_5(&(uParam0->f_16));

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		func_193(uParam0, 0f, 0f, 0f);

	if (!func_14(uParam0))
		return;

	if (func_34(4, uParam0->f_2))
		return;

	TELEMETRY::_TELEMETRY_PERSONAL_VEHICLE_WAGON(joaat("CALL"), &(uParam1->f_2), 0);
	func_69(100);
	func_194(4);
	return;
}

void func_137(var uParam0, var uParam1, BOOL bParam2) // Position - 0x336A Hash - 0x4074F2C6 ^0x9CAA9E24
{
	Vehicle vehicle;
	Player player;
	Ped ped;
	Player player2;
	Player player3;
	BOOL flag;
	var unk;

	vehicle = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(vehicle))
		return;

	if (ENTITY::IS_ENTITY_DEAD(vehicle))
		return;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();
	player2 = uParam0->f_2;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player2))
		return;

	player3 = uParam1->f_1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player3))
		return;

	if (player2 != player3)
		return;

	flag = false;

	if (player == player2)
		flag = true;

	if (flag && !bParam2)
		return;

	if (!func_130(vehicle, ped, &unk))
		return;

	func_195(vehicle);

	if (!flag)
		if (func_16())
			func_17(80, true);

	return;
}

void func_138(var uParam0, var uParam1) // Position - 0x3415 Hash - 0x8FDC8F1B ^0x3BE1ACEE
{
	Player player;
	Ped ped;
	Vehicle vehicle;
	Player player2;
	var unk;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();
	vehicle = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(vehicle))
		return;

	player2 = uParam1->f_1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player2))
		return;

	if (player == player2)
		return;

	if (vehicle != PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(player2))
		return;

	if (!func_130(vehicle, ped, &unk))
		return;

	func_195(vehicle);
	return;
}

int func_139(int iParam0) // Position - 0x347E Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_140(int iParam0) // Position - 0x3488 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_196(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1951910[iParam0 /*23*/].f_3);

	Global_1951910[iParam0 /*23*/].f_4 = 0;
	Global_1951910[iParam0 /*23*/] = 1;
	Global_1951910[iParam0 /*23*/].f_16 = 0;
	Global_1951910[iParam0 /*23*/].f_1 = 0;
	Global_1951910[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_9 = 0f;
	Global_1951910[iParam0 /*23*/].f_10 = 0;
	Global_1951910[iParam0 /*23*/].f_11 = 0;
	Global_1951910[iParam0 /*23*/].f_2 = 1;
	Global_1951910[iParam0 /*23*/].f_15 = -1f;
	return;
}

BOOL func_141(int iParam0) // Position - 0x353B Hash - 0x5EE14A7B ^0x5EE14A7B
{
	if (iParam0 <= -1 || iParam0 >= 117)
		return false;

	return true;
}

BOOL func_142(var uParam0, var uParam1) // Position - 0x355A Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_197(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_198(uParam0))
		return false;

	return true;
}

struct<2> func_143() // Position - 0x358E Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_199(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_199(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_144(Player plParam0, BOOL bParam1) // Position - 0x35D9 Hash - 0x341369BB ^0xFE185C1F
{
	Player player;

	if (!Global_1149432.f_5568)
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;

	if (player < 0 || player >= 32)
		return false;

	if (func_128(Global_1101558[player /*38*/].f_35, 2))
		return false;

	if (bParam1)
		if (func_200())
			return true;

	if (func_201(Global_1056554[player /*491*/].f_2))
		return true;

	return false;
}

void func_145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x3655 Hash - 0xF0CCFFF3 ^0xF0CCFFF3
{
	return;
}

BOOL func_146(Hash hParam0, int iParam1) // Position - 0x365D Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
int func_147(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x3677 Hash - 0x8D867191 ^0xF02772A4
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_202(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_203(hParam0) || func_204(hParam0, 1077060302))
		return func_206(func_205(hParam0, false), hParam1, bParam3, true);

	if (!func_151(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (iParam5 != 0 && unk[i /*2*/] != iParam5)
			{
			}
			else
			{
				return unk[i /*2*/].f_1;
				goto 0xDD;
			}
		}
	
		if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_148(int iParam0) // Position - 0x3767 Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_207() == 0)
		return func_208(iParam0);

	return iParam0 <= func_209();
}

int func_149(Hash hParam0) // Position - 0x3794 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_146(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_150() // Position - 0x37BF Hash - 0xD3E48215 ^0xDBA46110
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_151(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x37DB Hash - 0x18E9762 ^0x852B384E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_146(hParam0, 0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_210(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_152(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x386B Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_146(hParam0, 0))
		return 0;

	num = func_149(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_211(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_212(hParam0, false);
	}

	if (func_213(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_214(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_215(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_214(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_153(BOOL bParam0) // Position - 0x392D Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_207() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_214(bParam0));
}

BOOL func_154(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x394B Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_146(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_213(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_216(hParam0, iParam1, iParam2, iParam3, bParam4);

	unk = { func_217(hParam0, bParam4, 0) };
	unk6 = { func_218(hParam0, unk, unk.f_4, bParam4) };
	return func_219(hParam0, &unk6, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_155(Hash hParam0) // Position - 0x39C3 Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
	
		default:
		
	}

	return false;
}

int func_156(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x39F0 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_220(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_222(func_221(num, hParam0, panParam1), num, panParam1);
	else
		return func_223(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_157(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x3A5A Hash - 0x4EE39F09 ^0x4C62B7DF
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == 1 || Global_1292143.f_20.f_1[i /*21*/].f_1 == 5)
				Global_1292143.f_20.f_1[i /*21*/].f_4 = { uParam1 };
		
			return;
		}
	}

	return;
}

char* func_158(int iParam0) // Position - 0x3AD8 Hash - 0x348D2FD2 ^0xC271E171
{
	switch (iParam0)
	{
		case 0:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
	
		case 1:
			return "NSHM_HORSE_MOUNT_RESPAWNING";
	
		case 2:
			return "NSHM_HORSE_MOUNT_DISMISSED_RECENTLY";
	
		case 3:
			return "NSHM_HORSE_MOUNT_SWAPPED_RECENTLY";
	
		case 4:
			return "NSHM_HORSE_NO_HORSES_AVAILABLE";
	
		case 5:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
	
		case 6:
			return "NSHM_HORSE_CALL_HORSE_DISABLED";
	
		case 7:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD";
	
		case 8:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_ALT";
	
		case 9:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_VET_FEES";
	
		case 10:
			return "NSHM_HORSE_PLAYER_VEHICLE_NOT_DISMISSED";
	
		case 11:
			return "NSHM_HORSE_CALL_HORSE_VEHICLE";
	
		case 13:
			return "NSHM_VEHICLE_CANNOT_CONTACT_STABLE";
	
		case 14:
			return "NSHM_HORSE_YOU_DO_NOT_OWN_HORSE";
	
		case 15:
			return "NSHM_HORSE_PARLEYED_WITH_OWNER";
	
		case 16:
			return "NSHM_HORSE_OWNER_KICKED_YOU";
	
		case 17:
			return "NSHM_HORSE_DIED";
	
		case 18:
			return "NSHM_HORSE_DIED_INSURANCE";
	
		case 19:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION_INSURANCE";
	
		case 20:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION";
	
		case 21:
			return "NSHM_HORSE_REVIVE_COOLDOWN_COMPLETE";
	
		case 22:
			return "NSHM_HORSE_PENALTY_COOLDOWN";
	
		case 23:
			return "NSHM_HORSE_PENALTY_COOLDOWN_INSURANCE";
	
		case 24:
			return "NSHM_HORSE_PENALTY_COOLDOWN_COMPLETE";
	
		case 25:
			return "NSHM_HORSE_INSURANCE_EXPIRED";
	
		case 26:
			return "NSHM_HORSE_CANNOT_DISMISS_CARRYING_OBJECT";
	
		case 27:
			return "NSHM_HORSE_MOUNTED_POSSE_MEMBER";
	
		case 28:
			return "NSHM_HORSE_CANT_MOUNT_PLAYER_HORSE";
	
		case 29:
			return "NSHM_HORSE_BAD_SPORT_KILLED_ENEMY_HORSE";
	
		case 30:
			return "NSHM_VEHICLE_MOUNTED_POSSE_MEMBER";
	
		case 31:
			return "NSHM_VEHICLE_BAD_SPORT_DESTROYED_ENEMY_VEHICLE";
	
		default:
		
	}

	return "";
}

BOOL func_159(int iParam0) // Position - 0x3C7D Hash - 0xDE0EAD7B ^0x974D95A
{
	return func_224(Global_1290271.f_11.f_755[iParam0]);
}

int func_160(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3C96 Hash - 0x8EBD6187 ^0x42F0F0AC
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = iParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = sParam0;
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

float func_161() // Position - 0x3CD1 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_162(var uParam0, int iParam1) // Position - 0x3D03 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_163(var uParam0, int iParam1) // Position - 0x3D14 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_164(var uParam0) // Position - 0x3D29 Hash - 0x39705408 ^0x39705408
{
	return func_36(*uParam0, 2);
}

BOOL func_165(Vehicle veParam0) // Position - 0x3D39 Hash - 0xDEF9F967 ^0x717FC3F4
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("huntercart01"):
			return true;
	
		default:
		
	}

	return false;
}

void func_166(BOOL bParam0) // Position - 0x3D58 Hash - 0xF33C9A73 ^0x9EED1DAB
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;

	Global_1290271.f_814.f_280 = 0;

	if (bParam0)
		func_225(true);

	if (func_226("ALL SATCHEL EXCLUDING CLOTHING", &num, &num2, -2015960939, true))
	{
		if (num2 > 0)
		{
			unk.f_9 = joaat("SLOTID_NONE");
		
			for (i = 0; i < num2; i = i + 1)
			{
				if (func_227(&unk, i, num, num2))
				{
					if (func_228(unk.f_4))
					{
						if (bParam0)
							func_229(unk.f_11, true);
					}
					else
					{
						num3 = func_230(unk.f_4);
					
						if (num3 > 0)
							Global_1290271.f_814.f_280 = Global_1290271.f_814.f_280 + (num3 * unk.f_11);
					}
				}
			}
		}
	
		func_231(num);
	}

	return;
}

int func_167() // Position - 0x3E0F Hash - 0x1B9090CC ^0x1B9090CC
{
	return Global_1290271.f_814.f_280;
}

int func_168(Player plParam0, BOOL bParam1) // Position - 0x3E21 Hash - 0x3F7AD65E ^0x63BC394F
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return func_232(false);

	player = plParam0;

	if (player < 0 || player >= 32)
		return func_232(false);

	return func_233(player, bParam1);
}

void func_169(Vehicle veParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3E61 Hash - 0x41A0FCF4 ^0x393B8619
{
	float num;
	float num2;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return;

	num = BUILTIN::TO_FLOAT(iParam1) * func_234(false, 1048576000);
	num2 = BUILTIN::TO_FLOAT(iParam2) * func_234(true, 1048576000);

	if (Global_1901671.f_701.f_32)
	{
		num = 0f;
		num2 = 0f;
	}

	VEHICLE::_SET_BATCH_TARP_HEIGHT(veParam0, num + num2, bParam3);
	return;
}

BOOL func_170() // Position - 0x3EBB Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_171(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3ECF Hash - 0xBF2250D5 ^0x34592C3E
{
	float screenX;
	float screenY;
	int hudScreenPositionFromWorldPosition;

	hudScreenPositionFromWorldPosition = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &screenX, &screenY);

	if (hudScreenPositionFromWorldPosition == 0)
		if (screenX > iParam3 && screenX < iParam4 && screenY > iParam5 && screenY < iParam6)
			return true;

	return false;
}

BOOL func_172(int iParam0, int iParam1) // Position - 0x3F19 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_173(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x3F3A Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { fParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = fParam9;
	Global_1951910[iParam0 /*23*/].f_10 = volParam10;
	Global_1951910[iParam0 /*23*/].f_11 = volParam11;
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_5 = iParam12;
	Global_1951910[iParam0 /*23*/].f_1 = 2;
	Global_1951910[iParam0 /*23*/].f_17 = -1;
	Global_1951910[iParam0 /*23*/].f_18 = iParam16;
	Global_1951910[iParam0 /*23*/].f_19 = iParam15;
	Global_1951910[iParam0 /*23*/].f_20 = bParam25;
	Global_1951910[iParam0 /*23*/].f_22 = 0f;

	if (bParam25)
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	else
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();

	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam1);

	if (hParam23 != 0)
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam23);

	HUD::_UI_PROMPT_SET_TEXT(prompt, sParam2);

	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, fParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}

	HUD::_UI_PROMPT_SET_PRIORITY(prompt, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(prompt, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 18, true);

	if (bParam22)
		HUD::_0x53CE46C01A089DA1(prompt, true);

	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, false);
			break;
	
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(prompt, iParam16);
			break;
	
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, true);
			break;
	
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(prompt);
			break;
	
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, hParam24);
			break;
	
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 7:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1951910[iParam0 /*23*/].f_3 = prompt;
	func_235(iParam0, true);
	func_236(iParam0, true);
	func_237(iParam0, 128);
	return;
}

Hash func_174(var uParam0) // Position - 0x4255 Hash - 0xDAEBAE6 ^0xFAD9C5D0
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0);
	return func_238(pedIndexFromEntityIndex);
}

Hash func_175(Entity eParam0) // Position - 0x427B Hash - 0xB3A7ACD3 ^0xEF2020CA
{
	Hash carriableFromEntity;

	carriableFromEntity = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ENTITY::IS_ENTITY_A_PED(eParam0) && TASK::_0x6DAC799857EF3F11(PLAYER::PLAYER_PED_ID(), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0)))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(eParam0);

	if (carriableFromEntity == 0)
		if (ENTITY::IS_ENTITY_A_PED(eParam0))
			carriableFromEntity = func_238(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0));

	return carriableFromEntity;
}

BOOL func_176() // Position - 0x42D9 Hash - 0x1B9090CC ^0x1B9090CC
{
	return Global_1290271.f_814.f_284;
}

BOOL func_177() // Position - 0x42EB Hash - 0xEEC08FFD ^0xEEC08FFD
{
	return Global_1290271.f_814.f_283 != -1;
}

int func_178(Hash hParam0) // Position - 0x42FF Hash - 0xB8EC44B7 ^0x47115E69
{
	switch (hParam0)
	{
		case joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY"):
			return 772815941;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return 590763523;
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_POOR"):
			return -800990234;
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY"):
			return 1870052953;
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR"):
			return 157600273;
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"):
			return 622704213;
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR"):
			return -1809574093;
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR"):
			return 1091662795;
	
		case -2115566177:
			return -812348041;
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT"):
			return 285459296;
	
		case -2102079544:
			return 1665117534;
	
		case -2092697195:
			return 195048975;
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT"):
			return -9870681;
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT"):
			return -2079304485;
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY"):
			return 327705288;
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT"):
			return 1666627023;
	
		case joaat("provision_beaver_fur"):
			return 478256501;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return -1383606050;
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR"):
			return 786387404;
	
		case -2043601589:
			return -104850773;
	
		case -2040849706:
			return -2121345370;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return -2129601667;
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT"):
			return -1359600522;
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY"):
			return 2094082294;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return 637459650;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 1922992885;
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT"):
			return 213675443;
	
		case -1946740647:
			return -2090366073;
	
		case joaat("PROVISION_SKINNED_CARCASS_OWL_POOR"):
			return -989662224;
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR"):
			return -1604751590;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return -568415076;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return -286651444;
	
		case -1924159110:
			return 2019212836;
	
		case -1886936864:
			return -1078006288;
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT"):
			return -1117023247;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 659005977;
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY"):
			return 1221975438;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return -1597636811;
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT"):
			return -1306257518;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return -509393273;
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return 1257170615;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return 1045329345;
	
		case joaat("provision_deer_hide"):
			return -1832121185;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 1100310307;
	
		case -1821314478:
			return -130246565;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return -1140231877;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return 1612873893;
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR"):
			return -1809370620;
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 1146883867;
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT"):
			return -875336946;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 834120727;
	
		case -1787430524:
			return 1226615434;
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR"):
			return -1585718810;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return -1846596769;
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR"):
			return -1085630227;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return -1628899142;
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT"):
			return -112981243;
	
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return 891487295;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return -92340513;
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR"):
			return -4490683;
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT"):
			return 2126822237;
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR"):
			return 425489026;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return 995534052;
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY"):
			return 1991763855;
	
		case -1671125008:
			return -660029308;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -1582650542;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 45874041;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return 643029198;
	
		case -1638839614:
			return -1393971825;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 596590814;
	
		case -1621144167:
			return 1185012403;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -979079160;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return 100739460;
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY"):
			return -1782999617;
	
		case -1572330336:
			return 927409174;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return -232007656;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return 1221255602;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return -1364685383;
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT"):
			return -508623201;
	
		case -1548204069:
			return 1271176258;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -1194176543;
	
		case joaat("provision_fish_muskie"):
			return -755340618;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return -798568163;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -771957300;
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"):
			return -1962565360;
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT"):
			return -1801089352;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return 1914482046;
	
		case -1475338121:
			return -752126075;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 1915869310;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -1430069792;
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"):
			return 623984063;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 1675254736;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return -291878865;
	
		case -1434083213:
			return 175848664;
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"):
			return 1020167279;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -372283616;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 379141135;
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"):
			return 702905543;
	
		case joaat("provision_javelina_skin"):
			return -1135509110;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 178588058;
	
		case -1378208045:
			return -1849017470;
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT"):
			return 934062207;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1454259523;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return 2084769890;
	
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return 1080677561;
	
		case joaat("provision_sheep_wool"):
			return -30369031;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 179793498;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 738250137;
	
		case -1282621313:
			return 975820334;
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY"):
			return 926836797;
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT"):
			return 1293957931;
	
		case -1262044528:
			return 1319943174;
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY"):
			return 1740443788;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR"):
			return 494095577;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -1763677083;
	
		case -1249752300:
			return 636584299;
	
		case -1243878166:
			return -978241196;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -369028960;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 245773581;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -1201528492;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return 75684692;
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY"):
			return 1517438769;
	
		case -1218522879:
			return -451410282;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT"):
			return 224070180;
	
		case -1195518864:
			return 975852512;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return 1434794005;
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return 1955497943;
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"):
			return -1483573607;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 222730798;
	
		case -1087205695:
			return 207478289;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -1608758596;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -176022019;
	
		case -1066678466:
			return -984787596;
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY"):
			return 1087304069;
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR"):
			return 1671304715;
	
		case -1061362634:
			return 701417305;
	
		case -1061253029:
			return -1795655841;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 885447719;
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_POOR"):
			return 851638420;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 226674781;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT"):
			return -2046702261;
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -162653027;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 539212240;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return -278500197;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return 29804808;
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR"):
			return 766332028;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -588738567;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return 105057785;
	
		case -963027403:
			return 1559976099;
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR"):
			return 1574944766;
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -397897626;
	
		case -940052481:
			return 1538321641;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return 431553826;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1833664130;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 564968345;
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR"):
			return 1406497512;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 63328590;
	
		case -907373381:
			return 1468707790;
	
		case -906131571:
			return -750277466;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -677211393;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -2008306533;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return 2265787;
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_POOR"):
			return -309925418;
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR"):
			return 2092698587;
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"):
			return 2084956560;
	
		case -885592109:
			return 1212248669;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return 276180683;
	
		case joaat("provision_buck_fur"):
			return -1985596288;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return -1053027662;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 392259955;
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY"):
			return -379489403;
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR"):
			return 1397626289;
	
		case -857265622:
			return 449542892;
	
		case joaat("provision_fish_lake_sturgeon"):
			return -1108373076;
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY"):
			return -880049552;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return -507336551;
	
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return -96726590;
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_POOR"):
			return 511869570;
	
		case -827518870:
			return -383061723;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 1742727635;
	
		case joaat("provision_alligator_skin"):
			return -1670497261;
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT"):
			return 54441032;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 501072671;
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR"):
			return -1884753879;
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR"):
			return -734978095;
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"):
			return -996945065;
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY"):
			return -788362738;
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT"):
			return -1297983889;
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT"):
			return -764672668;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 2109109029;
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT"):
			return 1328165841;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return -1886002303;
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT"):
			return -313281876;
	
		case -675142890:
			return -998699255;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return -562880581;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR"):
			return 545086564;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return -1633300610;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 332878276;
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY"):
			return 953077128;
	
		case -634716689:
			return 1683892733;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return 253511830;
	
		case -591844128:
			return -537016814;
	
		case joaat("provision_buffalo_fur"):
			return -901855085;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 2050798648;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return -1730963015;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 1401257519;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 1775800065;
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT"):
			return -1941388598;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return 1281075400;
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY"):
			return -123071275;
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT"):
			return 2004430445;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -1860395611;
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_POOR"):
			return -562468122;
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return 4633231;
	
		case joaat("provision_ram_hide"):
			return -963727698;
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR"):
			return 1792621383;
	
		case -438328437:
			return -426122094;
	
		case -420237085:
			return 1333821068;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return -2064547947;
	
		case joaat("provision_panther_fur"):
			return -1125735460;
	
		case -375348364:
			return -2003656613;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 726300604;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return -654290128;
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY"):
			return -1602510454;
	
		case -352805801:
			return -523105155;
	
		case joaat("provision_bull_hide"):
			return 1698233050;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -1409703989;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 980503581;
	
		case -308200059:
			return 258890562;
	
		case joaat("provision_fish_muskie_poor"):
			return -274405663;
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return 1935981234;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR"):
			return -299634134;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return 2094969043;
	
		case -260181673:
			return -299916907;
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT"):
			return 1709510426;
	
		case -251416414:
			return -929748607;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return 127221449;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 2029824605;
	
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -1647829735;
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return -977624126;
	
		case -229670230:
			return -1720266128;
	
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return -2104728156;
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return 1619108346;
	
		default:
		
	}

	return 0;
}

BOOL func_179(int iParam0) // Position - 0x5E58 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

int func_180(Hash hParam0) // Position - 0x5E64 Hash - 0x180B0019 ^0x180B0019
{
	if (func_228(hParam0))
		return 1;

	return func_230(hParam0);
}

int func_181(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x5E7F Hash - 0xDC28FE76 ^0x58C547E8
{
	var unk;
	var unk2;
	Vector3 vector;
	int netID;
	Player playerOwnerOfNetworkId;

	vector = { func_239(uParam0) };

	if (!func_240(uParam0))
		return 2;

	if (func_14(uParam0))
	{
		if (func_241(uParam0, &unk, iParam2) || BUILTIN::VDIST(vector, ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) <= iParam3)
			return 1;
	
		if (func_242(uParam0, 1092616192))
			return 2;
	}

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		if (func_243(uParam0, vector, &unk2))
		{
			if (!func_193(uParam0, unk2))
			{
			}
			else
			{
				vector = { unk2 };
			}
		}
	
		if (_IS_NULL_VECTOR(vector))
			if (func_245(uParam0, 1092616192) == 2)
				return 2;
		else if (!TASK::_0x583AE9AF9CEE0958(uParam0->f_3, vector))
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_3, vector, iParam1, 1147928963, 2, iParam4, iParam3);
		else if (func_245(uParam0, 1092616192) == 2)
			return 2;
	}
	else
	{
		netID = NETWORK::VEH_TO_NET(uParam0->f_3);
	
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(netID))
		{
		}
		else
		{
			playerOwnerOfNetworkId = NETWORK::_NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID(netID);
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerOwnerOfNetworkId))
				if (func_245(uParam0, 1092616192) == 2)
					return 2;
		}
	}

	return 0;
}

void func_182(var uParam0) // Position - 0x5FB8 Hash - 0x2F9D6A60 ^0xE660A15F
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		MAP::REMOVE_BLIP(&(uParam0->f_1));

	return;
}

BOOL func_183(Player plParam0, BOOL bParam1) // Position - 0x5FD3 Hash - 0xF0471E4C ^0xFE2D6C4D
{
	Player bitIndex;
	int playerTeam;
	int playerTeam2;

	if (plParam0 == 255)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (plParam0 == Global_1295666.f_5)
		return true;

	bitIndex = plParam0;

	if (!Global_1295666.f_17[bitIndex])
		return false;

	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), bitIndex))
			return false;
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), bitIndex))
			return true;
	}

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), bitIndex))
		return true;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), bitIndex))
		return false;

	playerTeam = PLAYER::GET_PLAYER_TEAM(Global_1295666.f_5);
	playerTeam2 = PLAYER::GET_PLAYER_TEAM(plParam0);

	if (playerTeam != -1 && playerTeam2 != -1 && playerTeam == playerTeam2)
		return true;
	else if (GANG::_NETWORK_IS_IN_MY_GANG(plParam0))
		return true;

	return false;
}

Hash func_184(Hash hParam0) // Position - 0x60D5 Hash - 0x9C4129B6 ^0xB08803C3
{
	if (!STREAMING::IS_MODEL_VALID(hParam0))
		return 0;

	switch (hParam0)
	{
		case joaat("wagonarmoured01x"):
			return joaat("coach_bounty_hunter");
	
		case joaat("huntercart01"):
			return joaat("coach_trader");
	
		default:
		
	}

	return 0;
}

Hash func_185(Hash hParam0, BOOL bParam1) // Position - 0x6113 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_146(hParam0, 0))
		return 0;

	hash = func_246(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

char* func_186(int iParam0) // Position - 0x6141 Hash - 0x9231ACCA ^0x89408181
{
	var unk;

	if (iParam0 == -1)
		return "";

	func_247();
	Global_1903838.f_106.f_2 = 1292413058;
	Global_1903838.f_106.f_3 = func_248(iParam0);

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, &(Global_1903838.f_106)))
		return "";

	return func_249(unk);
}

int func_187(Player plParam0) // Position - 0x6195 Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1283730[plParam0 /*2*/];
}

BOOL func_188(Player plParam0) // Position - 0x61A5 Hash - 0x7647021A ^0xF0097466
{
	return Global_1283730[plParam0 /*2*/].f_1;
}

int func_189(int iParam0) // Position - 0x61B7 Hash - 0xA78B2E8C ^0xA78B2E8C
{
	if (!(iParam0 > -1 && iParam0 < 180))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
	
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
	
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
	
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
	
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
	
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
	
		case 8:
		case 43:
		case 78:
			return 8;
	
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
	
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
	
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
	
		case 12:
		case 60:
			return 18;
	
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
	
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
	
		case 19:
		case 53:
			return 7;
	
		case 20:
			return 33;
	
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
	
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
	
		case 26:
			return 14;
	
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
	
		case 61:
		case 62:
		case 89:
			return 36;
	
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
	
		case 70:
		case 90:
			return 17;
	
		case 109:
		case 113:
		case 114:
			return 35;
	
		case 119:
			return 11;
	
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
	
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
	
		case 133:
			return 27;
	
		case 134:
			return 37;
	
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
	
		case 149:
		case 150:
		case 151:
			return 39;
	
		case 152:
			return 34;
	
		case 153:
			return 28;
	
		case 154:
			return 29;
	
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
	
		case 163:
			return 5;
	
		case 176:
			return 19;
	
		case 177:
			return 20;
	
		case 178:
			return 21;
	
		case 179:
			return 20;
	
		default:
		
	}

	return -1;
}

BOOL func_190(int iParam0, Vehicle veParam1) // Position - 0x66D4 Hash - 0xBD49035B ^0x5D15CA9E
{
	int num;
	var unk;
	float num2;
	float num3;

	num = func_189(iParam0);
	unk = { Global_1051832.f_92[num /*75*/].f_3 };

	if (iParam0 == 154)
		unk = { func_250(PLAYER::GET_PLAYER_INDEX()) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	num2 = func_251(iParam0);

	if (num == 10 || num == 15 || num == 29)
	{
		num3 = func_252(veParam1, unk, false);
	
		if (num3 < num2)
			return true;
	}
	else if (num == 2)
	{
		if (func_252(veParam1, unk, false) < num2)
			return true;
	}

	return false;
}

struct<2> func_191(Player plParam0) // Position - 0x6776 Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_192(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x678A Hash - 0xC8AB68FB ^0xE3EA044B
{
	var clanDesc;
	var clanDesc2;

	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam0))
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&clanDesc, 22, &uParam0);
	else
		return false;

	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam2))
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&clanDesc2, 22, &uParam2);
	else
		return false;

	if (clanDesc != clanDesc2)
		return false;

	return true;
}

BOOL func_193(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x67E6 Hash - 0xFE114C1 ^0x9A86439D
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		return false;

	if (!DECORATOR::DECOR_SET_INT(uParam0->f_3, "SummonPosXY", func_253(fParam1)))
		return false;

	if (!DECORATOR::DECOR_SET_FLOAT(uParam0->f_3, "SummonPosZ", fParam1.f_2))
		return false;

	return true;
}

void func_194(int iParam0) // Position - 0x6833 Hash - 0x5D11B287 ^0x71DF9EF4
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_10 = Global_1289643[num /*19*/].f_10 || iParam0;
	return;
}

void func_195(Vehicle veParam0) // Position - 0x6858 Hash - 0xBB2A7A5E ^0x98FD878D
{
	Ped ped;
	var unk;
	var args;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(veParam0))
		return;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false, false))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (!func_130(veParam0, ped, &unk))
		return;

	args.f_5 = 1073741824;
	args.f_6 = 1;
	args.f_3 = ped;
	args.f_4 = veParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&args);
	return;
}

BOOL func_196(int iParam0) // Position - 0x68DD Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_172(iParam0, 2);
}

BOOL func_197(int iParam0) // Position - 0x68EC Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
	
		default:
		
	}

	return false;
}

int func_198(int iParam0) // Position - 0x692B Hash - 0xE34A477A ^0xE34A477A
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
	
		case 3:
			return Global_1072759.f_573.f_2103;
	
		case 4:
			return Global_1072759.f_573.f_12605;
	
		case 5:
			return Global_1072759.f_573.f_12907;
	
		case 6:
			return Global_1072759.f_573.f_15909;
	
		case 7:
			return Global_1072759.f_573.f_16511;
	
		case 8:
			return Global_1072759.f_573.f_18913;
	
		default:
		
	}

	return -1;
}

struct<2> func_199(int iParam0) // Position - 0x69C1 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_200() // Position - 0x69D5 Hash - 0x9CA0027A ^0x448EE929
{
	if (Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return true;

	return false;
}

BOOL func_201(int iParam0) // Position - 0x6A02 Hash - 0x2F9680B9 ^0x1035116F
{
	int i;

	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 7:
			if (Global_1572887.f_7)
			{
				if (func_254(Global_1108965.f_775.f_28))
					if (!Global_1108965.f_775.f_19)
						return false;
			
				if (!func_255())
					return true;
			}
			else if (Global_1048579 && !Global_1572887.f_10)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(Global_1295666.f_149[Global_1295666]))
					return true;
			
				if (func_97(&(Global_1102813.f_4), 1, 5))
					return true;
			}
			break;
	
		case 6:
			for (i = 0; i <= 7; i = i + 1)
			{
				if (Global_1206497.f_78[i /*20*/].f_2 && Global_1206497.f_78[i /*20*/].f_1 == 2)
					return true;
			}
			break;
	}

	return false;
}

BOOL func_202(Hash hParam0, Hash hParam1) // Position - 0x6AF4 Hash - 0xFB5CB038 ^0x83BB35B8
{
	if (!func_146(hParam0, 0))
		return false;

	if (func_203(hParam0) || func_204(hParam0, 1077060302))
		return func_256(func_205(hParam0, false), hParam1, false);

	return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1) > 0;
}

BOOL func_203(Hash hParam0) // Position - 0x6B40 Hash - 0x672E565C ^0xD531C7FC
{
	if (func_204(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_204(Hash hParam0, Hash hParam1) // Position - 0x6B5B Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_146(hParam0, 0))
		return func_258(func_257(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_205(Hash hParam0, BOOL bParam1) // Position - 0x6B9C Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_146(hParam0, 0))
		return func_259(func_257(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

int func_206(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6BF4 Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_260(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar") || unk[i /*2*/] == joaat("character_role_token"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

int func_207() // Position - 0x6C88 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_208(int iParam0) // Position - 0x6C96 Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_209() // Position - 0x6CB9 Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_207() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_210(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x6CD4 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_261(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

Hash func_211(Hash hParam0, int iParam1) // Position - 0x6EAA Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_146(hParam0, 0))
		return 0;

	num = func_149(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_204(hParam0, 1399091007))
	{
		func_262(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_212(Hash hParam0, BOOL bParam1) // Position - 0x6F24 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_263(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_265(&unk, func_264(false));

	if (!func_266(&unk, &num, &num2, false))
		return 0;

	func_231(num);
	return num2;
}

int func_213(Hash hParam0, Hash hParam1) // Position - 0x6F83 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_267(func_257(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_214(BOOL bParam0) // Position - 0x6FAF Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_207() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_215(Hash hParam0, BOOL bParam1) // Position - 0x6FF0 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_217(hParam0, bParam1, 0) };
	return func_218(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_216(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x7015 Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_268(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_213(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_153(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_269(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_270(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_156(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_157(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_214(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

struct<5> func_217(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x712D Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_271(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_149(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_276(hParam0, -1823706425))
			{
				unk = { func_218(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_276(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_218(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_218(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_276(hParam0, -1653629781))
			{
				unk = { func_218(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_275(bParam1) };
		
			switch (func_261(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_218(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_264(bParam1) };
		
			if (iParam2 && func_272(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_273(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_273(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_274(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else
					unk.f_4 = joaat("SLOTID_WEAPON_1");
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_SATCHEL")))
			{
				unk.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_CURRENCY")))
			{
				unk28.f_9 = joaat("SLOTID_NONE");
			
				if (!func_277(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_276(hParam0, -1653629781))
			{
				unk = { func_218(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

struct<4> func_218(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x74A1 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_146(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_214(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_219(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x74D2 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_268(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_277(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_153(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_207() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_156(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_157(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_214(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_220(Hash hParam0, Any* panParam1) // Position - 0x75F0 Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_278(panParam1->f_8, hParam0, num, 2048) || func_278(panParam1->f_8, hParam0, num, 32768) || func_278(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_278(panParam1->f_8, hParam0, num, 4) || func_278(panParam1->f_8, hParam0, num, 256) || func_278(panParam1->f_8, hParam0, num, 65536) || func_278(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_278(panParam1->f_8, hParam0, num, 1) || func_278(panParam1->f_8, hParam0, num, 8) || func_278(panParam1->f_8, hParam0, num, 65536) || func_278(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_278(panParam1->f_8, hParam0, num, 1) || func_278(panParam1->f_8, hParam0, num, 16) || func_278(panParam1->f_8, hParam0, num, 2) || func_278(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_278(panParam1->f_8, hParam0, num, 8) || func_278(panParam1->f_8, hParam0, num, 4096) || func_278(panParam1->f_8, hParam0, num, 256) || func_278(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_221(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x77C6 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_222(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x77DD Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_279(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_279(iParam1, 2, 0, 0);
	return -1;
}

int func_223(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x7826 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_279(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

BOOL func_224(int iParam0) // Position - 0x7842 Hash - 0xED7B1FA3 ^0x96F9ACB3
{
	if (iParam0 == 0)
		return false;

	return UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

void func_225(BOOL bParam0) // Position - 0x785C Hash - 0x92F1D4D0 ^0x10F037E1
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return;

	player = PLAYER::PLAYER_ID();

	if (player < 0 || player >= 32)
		return;

	if (!bParam0)
		Global_1289643[player /*19*/] = 0;
	else
		Global_1289643[player /*19*/].f_1 = 0;

	return;
}

BOOL func_226(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x78AB Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_214(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_227(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x78D2 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_228(Hash hParam0) // Position - 0x790D Hash - 0x6AEB7416 ^0x6AEB7416
{
	int i;
	int num;
	Hash hash;

	if (!func_280(hParam0))
		return false;

	for (i = 0; i < 77; i = i + 1)
	{
		num = func_281(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

int func_229(int iParam0, BOOL bParam1) // Position - 0x794F Hash - 0x7B65B858 ^0xB5F74795
{
	Player player;
	Player player2;
	int num;
	int num2;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return 0;

	player2 = player;

	if (player2 < 0 || player2 >= 32)
		return 0;

	if (func_233(player2, bParam1) >= func_232(bParam1))
		return 0;

	num = iParam0;
	num2 = num + func_233(player2, bParam1);

	if (num2 > func_232(bParam1))
		num = func_232(bParam1) - func_233(player2, bParam1);

	if (num < 1)
		return 0;

	if (!bParam1)
		Global_1289643[player2 /*19*/] = Global_1289643[player2 /*19*/] + num;
	else
		Global_1289643[player2 /*19*/].f_1 = Global_1289643[player2 /*19*/].f_1 + num;

	return 1;
}

int func_230(Hash hParam0) // Position - 0x7A05 Hash - 0x1C37ACD7 ^0x22120269
{
	int outSatchelItemSize;
	Hash hash;

	if (func_282(hParam0, &hash))
		hParam0 = hash;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	switch (outSatchelItemSize)
	{
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 4;
	
		case 4:
			return 8;
	
		default:
		
	}

	return -1;
}

int func_231(int iParam0) // Position - 0x7A5E Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_232(BOOL bParam0) // Position - 0x7A7F Hash - 0x929DFA50 ^0x5A58BCD2
{
	return bParam0 ? Global_1901671.f_701.f_30 : Global_1901671.f_701.f_29;
}

int func_233(Player plParam0, BOOL bParam1) // Position - 0x7A9F Hash - 0x5A8EAA13 ^0xC5357BF7
{
	return bParam1 ? Global_1289643[plParam0 /*19*/].f_1 : Global_1289643[plParam0 /*19*/];
}

float func_234(BOOL bParam0, int iParam1) // Position - 0x7ABF Hash - 0x2F617802 ^0xCA18ADBF
{
	float num;

	iParam1 = func_284(iParam1, 0f, 1f);
	num = (1f / BUILTIN::TO_FLOAT(Global_1901671.f_701.f_28)) * bParam0 ? iParam1 : 1f - iParam1;

	if (bParam0)
		return (BUILTIN::TO_FLOAT(Global_1901671.f_701.f_28) / BUILTIN::TO_FLOAT(Global_1901671.f_701.f_29)) * num;

	return num;
}

void func_235(int iParam0, BOOL bParam1) // Position - 0x7B17 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_172(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_236(int iParam0, BOOL bParam1) // Position - 0x7B6F Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_237(int iParam0, int iParam1) // Position - 0x7B98 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

Hash func_238(Ped pedParam0) // Position - 0x7BC0 Hash - 0x159F0730 ^0x5BA63351
{
	Ped pedAttached;
	int pedDamageCleanliness;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	pedAttached = pedParam0;
	pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(pedAttached);
	num = func_286(pedAttached);

	if (!ENTITY::DOES_ENTITY_EXIST(pedAttached))
		return 0;

	if (TASK::_0x7CB99FADDE73CD1B(pedAttached))
		return 0;

	num2 = pedDamageCleanliness;
	num3 = num;

	if (num3 < num2)
		pedDamageCleanliness = num3;

	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&num4, pedAttached, pedDamageCleanliness))
		return 0;

	if (num4 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedAttached, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(pedAttached))
		{
			num5 = func_287(num4);
			return num5;
		}
	
		return num4;
	}

	switch (pedDamageCleanliness)
	{
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
	
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
	
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
	
		default:
		
	}

	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

Vector3 func_239(var uParam0) // Position - 0x7C93 Hash - 0x4B33EF28 ^0xD796AB33
{
	int _int;
	var unk;

	_int = DECORATOR::DECOR_GET_INT(uParam0->f_3, "SummonPosXY");

	if (_int == 0)
		return 0f, 0f, 0f;

	unk = { func_288(_int) };
	unk.f_2 = DECORATOR::DECOR_GET_FLOAT(uParam0->f_3, "SummonPosZ");
	return unk;
}

BOOL func_240(var uParam0) // Position - 0x7CD3 Hash - 0x6F657A6A ^0x23529422
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(uParam0->f_2)))
		return false;

	return true;
}

BOOL func_241(var uParam0, var uParam1, int iParam2) // Position - 0x7D1F Hash - 0x56F90732 ^0x5C7B469E
{
	Ped playerPed;

	*uParam1 = 0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
		return true;

	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_2);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed) || ENTITY::IS_ENTITY_DEAD(playerPed))
		return true;

	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(playerPed, true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) < iParam2)
		return true;

	if (func_68(uParam0->f_3))
		return true;

	return false;
}

BOOL func_242(var uParam0, int iParam1) // Position - 0x7D8F Hash - 0x7CDE7FE7 ^0x1BEECBC4
{
	Ped playerPed;
	int num;

	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_2);

	if (ENTITY::DOES_ENTITY_EXIST(playerPed))
	{
		num = func_289(uParam0->f_3, playerPed, 1060437492);
	
		if (num == 1 && ENTITY::GET_ENTITY_SPEED(uParam0->f_3) > 0f)
			if (!func_4(&(uParam0->f_16)))
				func_44(&(uParam0->f_16));
		else if (func_4(&(uParam0->f_16)))
			func_5(&(uParam0->f_16));
	}

	if (!func_4(&(uParam0->f_16)))
		return false;

	if (!func_45(&(uParam0->f_16), iParam1))
		return false;

	return true;
}

BOOL func_243(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3* pvParam4) // Position - 0x7E1E Hash - 0x3CFB764 ^0x27DF3663
{
	var unk;

	if (!func_290(uParam0->f_2, uParam0->f_3, pvParam4, &unk))
		return false;

	if (BUILTIN::VDIST(*pvParam4, vParam1) >= 10f)
		return true;

	if (!TASK::_0x583AE9AF9CEE0958(uParam0->f_3, vParam1))
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), vParam1) > 5f)
			return true;

	return false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x7E83 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_245(var uParam0, int iParam1) // Position - 0x7EAD Hash - 0x8EC234D0 ^0xEB7ED529
{
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_3) == 0f)
		if (!func_4(&(uParam0->f_13)))
			func_44(&(uParam0->f_13));
		else if (func_291(&(uParam0->f_13), iParam1))
			return 2;
	else if (func_4(&(uParam0->f_13)))
		func_5(&(uParam0->f_13));

	return 0;
}

Hash func_246(Hash hParam0, BOOL bParam1) // Position - 0x7F01 Hash - 0xBBDA5425 ^0x4DD4856F
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

void func_247() // Position - 0x7FA3 Hash - 0xF8D33D29 ^0xCFCF9382
{
	Global_1903838.f_106 = Global_1072759.f_28418[49 /*4*/].f_3;
	Global_1903838.f_106.f_1 = 0;
	Global_1903838.f_106.f_2 = 0;
	Global_1903838.f_106.f_3 = 0;
	Global_1903838.f_106.f_4 = 0;
	return;
}

int func_248(int iParam0) // Position - 0x7FE2 Hash - 0x5DFC44DD ^0x5DFC44DD
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
	
		case 0:
			return joaat("NSMT_HORSE");
	
		case 1:
			return joaat("NSMT_DONKEY");
	
		case 2:
			return joaat("NSMT_VEHICLE");
	
		case 3:
			return joaat("NSMT_CANOE");
	
		case 4:
			return joaat("NSMT_TRAIN");
	
		case 5:
			return joaat("NSMT_CANNON");
	
		default:
		
	}

	return 0;
}

char* func_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x806C Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

Vector3 func_250(Player plParam0) // Position - 0x8080 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

float func_251(int iParam0) // Position - 0x8094 Hash - 0xF5CBAB81 ^0xF5CBAB81
{
	int num;

	num = func_189(iParam0);

	switch (num)
	{
		case 2:
			return 75f;
	
		case 10:
			return 10f;
	
		case 15:
			if (iParam0 == 63)
				return 40f;
			else
				return 25f;
			break;
	
		case 29:
			return 70f;
	}

	return 10f;
}

float func_252(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x80FE Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(veParam0, false, false), vParam1, bParam4);
}

BOOL func_253(float fParam0, var uParam1, var uParam2) // Position - 0x8126 Hash - 0xEEEBBA53 ^0xA3D9EE1A
{
	BOOL flag;

	flag = BUILTIN::ROUND(MISC::ABSF(fParam0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(fParam0.f_1)) & 32767, 15);

	if (fParam0 > 0f)
		flag = flag | 1073741824;

	if (fParam0.f_1 > 0f)
		flag = flag | -2147483648;

	return flag;
}

BOOL func_254(int iParam0) // Position - 0x817B Hash - 0x77815697 ^0x77815697
{
	if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
		return true;

	return false;
}

BOOL func_255() // Position - 0x81A3 Hash - 0x96DF4A78 ^0x70EB39DA
{
	if (Global_1572887.f_72.f_40 >= 10 && Global_1572887.f_72.f_40 <= 14)
		return true;

	return false;
}

BOOL func_256(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x81CE Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_292(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_293(hParam0, hParam1);

	return true;
}

Hash func_257(Hash hParam0) // Position - 0x8206 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_258(Hash hParam0, Hash hParam1) // Position - 0x8210 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_267(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

Hash func_259(Hash hParam0, BOOL bParam1) // Position - 0x8246 Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_267(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_260(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x827F Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_292(hParam0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam4;
		return false;
	}

	!bParam4;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ACQUIRE_COST(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x70;
	
		!bParam4;
	}

	if (bParam5)
		func_294(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

Hash func_261(Hash hParam0) // Position - 0x830E Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_146(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

void func_262(Hash hParam0, var uParam1, var uParam2) // Position - 0x8339 Hash - 0x38E6C2DD ^0xA4FE6475
{
	*uParam1 = 0;
	*uParam2 = 0;

	switch (hParam0)
	{
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("ammo_repeater_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("ammo_repeater");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_revolver_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_rifle_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("ammo_pistol_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("ammo_rifle_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_repeater_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("ammo_shotgun_slug");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("ammo_22");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("ammo_revolver_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_pistol_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("ammo_repeater");
			break;
	}

	return;
}

struct<18> func_263(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x8545 Hash - 0x90CCF0F4 ^0xA5F3D799
{
	Hash hash;

	hash = -1;
	hash.f_1 = -1;
	hash.f_2 = -1;
	hash.f_3 = -1;
	hash.f_4 = -1;
	hash.f_5 = -1;
	hash.f_6 = -1;
	hash.f_7 = -1;
	hash.f_8 = -1;
	hash.f_13 = -1;
	hash.f_14 = -1;
	hash.f_15 = -1;
	hash.f_16 = -1;
	hash.f_17 = -1;

	if (hParam0 != 0)
		hash = hParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

struct<4> func_264(BOOL bParam0) // Position - 0x8623 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_214(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_218(923904168, func_271(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_218(923904168, func_271(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_218(923904168, func_271(bParam0), -740156546, false);
}

void func_265(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x86C4 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_266(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x86DF Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_214(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_267(Hash hParam0, int iParam1) // Position - 0x8704 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_268(Hash hParam0) // Position - 0x871E Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_269(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x8734 Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_213(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_295(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_270(Hash hParam0, var uParam1) // Position - 0x87A1 Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_218(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

struct<4> func_271(BOOL bParam0) // Position - 0x87F4 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_214(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_218(joaat("character"), func_70(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_218(joaat("character"), func_70(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_218(joaat("character"), func_70(), joaat("SLOTID_NONE"), bParam0);
}

int func_272(Hash hParam0, BOOL bParam1) // Position - 0x8894 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_261(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_296();
		else
			return 1;

	return 0;
}

BOOL func_273(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x88CB Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_297(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_274(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x88E6 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_298(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_275(BOOL bParam0) // Position - 0x8907 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_214(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_218(271701509, func_271(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_218(271701509, func_271(bParam0), 12999093, false);
}

BOOL func_276(Hash hParam0, Hash hParam1) // Position - 0x8971 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_261(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_299(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_277(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x89DE Hash - 0x113CD144 ^0x113CD144
{
	return func_300(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_278(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x89F4 Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_128(iParam2, iParam3))
		return true;

	return false;
}

void func_279(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x8A0C Hash - 0x3169A239 ^0x47E831EC
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292143.f_20.f_1[i /*21*/].f_1 = iParam1;
			}
		
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = iParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = iParam3;
			}
		
			return;
		}
	}

	func_301(iParam0, iParam1, iParam2, iParam3);
	return;
}

BOOL func_280(Hash hParam0) // Position - 0x8AAA Hash - 0x8740500B ^0x17CABE34
{
	if (!func_146(hParam0, 0))
		return false;

	return func_204(hParam0, 1686880204) || INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

int func_281(int iParam0, int iParam1) // Position - 0x8AD8 Hash - 0xE1D12727 ^0xAE678AE7
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_alligator_skin");
	
		case 1:
			return joaat("PROVISION_ALLIGATOR_SKIN_POOR");
	
		case 2:
			return joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE");
	
		case 3:
			return joaat("provision_beaver_fur");
	
		case 4:
			return joaat("PROVISION_BEAVER_FUR_POOR");
	
		case 5:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
	
		case 6:
			return joaat("provision_boar_skin");
	
		case 7:
			return joaat("PROVISION_BOAR_SKIN_POOR");
	
		case 8:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
	
		case 9:
			return joaat("provision_buck_fur");
	
		case 10:
			return joaat("PROVISION_BUCK_FUR_POOR");
	
		case 11:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
	
		case 12:
			return joaat("provision_cougar_fur");
	
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
	
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
	
		case 15:
			return joaat("provision_coyote_fur");
	
		case 16:
			return joaat("PROVISION_COYOTE_FUR_POOR");
	
		case 17:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
	
		case 18:
			return joaat("provision_deer_hide");
	
		case 19:
			return joaat("PROVISION_DEER_HIDE_POOR");
	
		case 20:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
	
		case 21:
			return joaat("provision_fox_fur");
	
		case 22:
			return joaat("PROVISION_FOX_FUR_POOR");
	
		case 23:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
	
		case 24:
			return joaat("provision_goat_hair");
	
		case 25:
			return joaat("PROVISION_GOAT_HAIR_POOR");
	
		case 26:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
	
		case 27:
			return joaat("provision_javelina_skin");
	
		case 28:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
	
		case 29:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
	
		case 30:
			return joaat("provision_loanshark_skins");
	
		case 31:
			return joaat("provision_panther_fur");
	
		case 32:
			return joaat("PROVISION_PANTHER_FUR_POOR");
	
		case 33:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
	
		case 34:
			return joaat("provision_pig_skin");
	
		case 35:
			return joaat("PROVISION_PIG_SKIN_POOR");
	
		case 36:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
	
		case 37:
			return joaat("provision_pronghorn_fur");
	
		case 38:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
	
		case 39:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
	
		case 40:
			return joaat("provision_ram_hide");
	
		case 41:
			return joaat("PROVISION_RAM_HIDE_POOR");
	
		case 42:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
	
		case 43:
			return joaat("provision_sheep_wool");
	
		case 44:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
	
		case 45:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
	
		case 46:
			return joaat("provision_wolf_fur");
	
		case 47:
			return joaat("PROVISION_WOLF_FUR_POOR");
	
		case 48:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
	
		case 49:
			return 121494806;
	
		case 50:
			return -251416414;
	
		case 51:
			return -1787430524;
	
		case 52:
			return -1572330336;
	
		case 53:
			return -1249752300;
	
		case 54:
			return -940052481;
	
		case 55:
			return -308200059;
	
		case 56:
			return -1218522879;
	
		case 57:
			return 923422806;
	
		case 58:
			return 832214437;
	
		case 59:
			return 397926876;
	
		case 60:
			return 219794592;
	
		case 61:
			return -1061362634;
	
		case 62:
			return 1728819413;
	
		case 63:
			return 1009802015;
	
		case 64:
			return 1276143905;
	
		case 65:
			return -1262044528;
	
		case 66:
			return -963027403;
	
		case 67:
			return 2088901891;
	
		case 68:
			return 836208559;
	
		case 69:
			return 1600479946;
	
		case 70:
			return -675142890;
	
		case 71:
			return -906131571;
	
		case 72:
			return -591844128;
	
		case 73:
			return -1946740647;
	
		case 74:
			return -1548204069;
	
		case 75:
			return -907373381;
	
		case 76:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_282(Hash hParam0, var uParam1) // Position - 0x8F29 Hash - 0xC0DD27FA ^0xC0DD27FA
{
	*uParam1 = func_302(hParam0);
	return *uParam1 != 0;
}

var func_283(BOOL bParam0, var uParam1, var uParam2) // Position - 0x8F3F Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_284(float fParam0, float fParam1, float fParam2) // Position - 0x8F56 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

var func_285(BOOL bParam0, var uParam1, var uParam2) // Position - 0x8F7D Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_286(Ped pedParam0) // Position - 0x8F94 Hash - 0x32EB82AB ^0x786A6EFC
{
	int num;
	int pedQuality;

	num = 2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return num;

	pedQuality = PED::_GET_PED_QUALITY(pedParam0);

	switch (pedQuality)
	{
		case -1:
		case 2:
			num = 2;
			break;
	
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	}

	return num;
}

int func_287(int iParam0) // Position - 0x8FEA Hash - 0xB8EC44B7 ^0x162CC37E
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
	
		case -2092697195:
			return 777641606;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
	
		case -2043601589:
			return 1815502722;
	
		case -2040849706:
			return -375348364;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
	
		case -1821314478:
			return 1135507073;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
	
		case -1638839614:
			return 213936563;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
	
		case -1434083213:
			return -1671125008;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
	
		case -1378208045:
			return 1586020612;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
	
		case -1282621313:
			return 1718756614;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case -885592109:
			return -132069363;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case -827518870:
			return -2115566177;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
	
		case -229670230:
			return -352805801;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case -70954328:
			return 616254818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
	
		case 546758456:
			return 1491466288;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
	
		case 1367447057:
			return -1886936864;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
	
		case 1450608653:
			return 1892902297;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
	
		case 1493601140:
			return -438328437;
	
		case 1527400190:
			return 1020297399;
	
		case 1543592331:
			return 1920759986;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
	
		case 1705186999:
			return 897866285;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case 1758585485:
			return 1518910503;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
	
		case 1842740532:
			return 1683741809;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
	
		case 1888419655:
			return -1066678466;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
	
		case 2004357248:
			return 403588059;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
	
		case 2014346813:
			return -101301217;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
	
		default:
		
	}

	return 0;
}

Vector3 func_288(int iParam0) // Position - 0x9A27 Hash - 0xAC89079C ^0xF0D7C0AA
{
	float num;
	int value;
	int value2;

	value = iParam0 & 32767;
	value2 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	num = BUILTIN::TO_FLOAT(value);
	num.f_1 = BUILTIN::TO_FLOAT(value2);

	if (iParam0 & 1073741824 == 0)
		num = num * -1f;

	if (iParam0 & -2147483648 == 0)
		num.f_1 = num.f_1 * -1f;

	return num;
}

int func_289(Entity eParam0, Ped pedParam1, int iParam2) // Position - 0x9A83 Hash - 0x175892DC ^0xF10F49E5
{
	var entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	return func_303(eParam0, entityCoords, iParam2);
}

BOOL func_290(Player plParam0, Entity eParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x9AA3 Hash - 0x7F4DC569 ^0x37AB3F2C
{
	Ped playerPed;
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	playerPed = PLAYER::GET_PLAYER_PED(plParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, true, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(eParam1, true, false) };

	if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(entityCoords, entityCoords2, 1, pvParam2, pfParam3, 1, 1077936128, 0))
		return true;

	if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(entityCoords, entityCoords2, 0, pvParam2, pfParam3, 1, 1077936128, 0))
		return true;

	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(entityCoords, pvParam2, pfParam3, 1, 1077936128, 0))
		return true;

	if (!func_304(entityCoords, entityCoords2, pvParam2, pfParam3))
		return true;

	return false;
}

BOOL func_291(var uParam0, int iParam1) // Position - 0x9B66 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_45(uParam0, iParam1))
	{
		func_5(uParam0);
		return true;
	}

	return false;
}

BOOL func_292(Hash hParam0) // Position - 0x9B84 Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

BOOL func_293(Hash hParam0, Hash hParam1) // Position - 0x9B9C Hash - 0x86D562BB ^0xB258F193
{
	var outData;
	int outUnk;
	Hash unlockHash;
	int num;
	int i;
	int j;

	outData = 10;
	outData.f_1.f_4 = 15;
	outData.f_1.f_36 = 10;
	outData.f_1.f_47.f_4 = 15;
	outData.f_1.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(hParam0, &outData, &outUnk, 10) || outUnk == 0)
		return false;

	num = 0;

	for (i = 0; i < outUnk; i = i + 1)
	{
		if (outData[i /*47*/] == hParam1)
		{
			num = outData[i /*47*/].f_35;
		
			for (j = 0; j < num; j = j + 1)
			{
				unlockHash = outData[i /*47*/].f_36[j];
			
				if (unlockHash == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				{
					return true;
				}
			}
		}
	}

	return false;
}

void func_294(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x9CE5 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_261(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_295(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x9EBB Hash - 0x8E6DB586 ^0xC3CF8308
{
	int i;

	*uParam1 = 0;

	if (*anParam0 != 10)
		return false;

	for (i = 0; i < 10; i = i + 1)
	{
		if (iParam2 < 1)
			break;
	
		if (anParam0->[i /*6*/].f_4 == 0)
			goto 0xF4;
	
		if (anParam0->[i /*6*/].f_5 == 0)
			goto 0xF4;
	
		if (func_305(&anParam0->[i /*6*/]))
		{
		}
		else
		{
			if (i != *uParam1)
			{
				anParam0->[*uParam1 /*6*/] = { anParam0->[i /*6*/] };
				anParam0->[*uParam1 /*6*/].f_4 = anParam0->[i /*6*/].f_4;
			}
		
			if (anParam0->[i /*6*/].f_5 > iParam2)
			{
				anParam0->[*uParam1 /*6*/].f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				anParam0->[*uParam1 /*6*/].f_5 = anParam0->[i /*6*/].f_5;
				iParam2 = iParam2 - anParam0->[*uParam1 /*6*/].f_5;
			}
		
			if (i > *uParam1)
			{
				anParam0->[i /*6*/] = { func_70() };
				anParam0->[i /*6*/].f_4 = 0;
				anParam0->[i /*6*/].f_5 = 0;
			}
		
			*uParam1 = *uParam1 + 1;
		}
	}

	if (bParam3 && iParam2 > 0)
	{
		*uParam1 = 0;
		return false;
	}

	return true;
}

int func_296() // Position - 0x9FD2 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_306(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_297(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x9FEF Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_146(hParam0, 0))
		return 0;

	if (!bParam7 && func_213(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_218(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_214(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_214(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_298(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0xA06E Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_214(false);
	*panParam1 = { func_218(hParam0, func_264(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_299(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0xA0B3 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_300(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xA0E6 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_214(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

void func_301(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA120 Hash - 0xBC161045 ^0xD3B33F74
{
	int i;

	if (iParam0 == -1)
		return;

	if (Global_1292143.f_20 < 20)
	{
		Global_1292143.f_20 = Global_1292143.f_20 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_20.f_1[i /*21*/] = { Global_1292143.f_20.f_1[i + 1 /*21*/] };
		}
	}

	func_307(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

int func_302(int iParam0) // Position - 0xA1FC Hash - 0xB8EC44B7 ^0x34C82EA7
{
	switch (iParam0)
	{
		case joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR");
	
		case -2115566177:
			return -827518870;
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OWL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR");
	
		case -1886936864:
			return 1367447057;
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY");
	
		case -1671125008:
			return -1434083213;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY");
	
		case -1066678466:
			return 1888419655;
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR");
	
		case -438328437:
			return 1493601140;
	
		case -375348364:
			return -2040849706;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY");
	
		case -352805801:
			return -229670230;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY");
	
		case -132069363:
			return -885592109;
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR");
	
		case -101301217:
			return 2014346813;
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY");
	
		case 213936563:
			return -1638839614;
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY");
	
		case 403588059:
			return 2004357248;
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case 616254818:
			return -70954328;
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY");
	
		case 777641606:
			return -2092697195;
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY");
	
		case 897866285:
			return 1705186999;
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY");
	
		case 1020297399:
			return 1527400190;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY");
	
		case 1135507073:
			return -1821314478;
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY");
	
		case 1491466288:
			return 546758456;
	
		case 1518910503:
			return 1758585485;
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT");
	
		case 1586020612:
			return -1378208045;
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case 1683741809:
			return 1842740532;
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY");
	
		case 1718756614:
			return -1282621313;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case 1815502722:
			return -2043601589;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR");
	
		case 1892902297:
			return 1450608653;
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case 1920759986:
			return 1543592331;
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT");
	
		default:
		
	}

	return 0;
}

int func_303(Entity eParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0xAC38 Hash - 0x2AE5C8B1 ^0x9995651A
{
	var entityCoords;
	var entityForwardVector;
	var unk5;
	float value;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && !ENTITY::IS_ENTITY_DEAD(eParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, false, false) };
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(eParam0) };
	}

	unk5 = { uParam1 - entityCoords };
	value = func_308(entityForwardVector, unk5);

	if (MISC::ABSF(value) > iParam4)
		if (value > 0f)
			return 0;
		else
			return 1;

	if (func_309(entityCoords, entityCoords + entityForwardVector, uParam1))
		return 3;

	return 2;
}

BOOL func_304(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, Vector3* pvParam6, float* pfParam7) // Position - 0xACC7 Hash - 0xF122548E ^0x207DA323
{
	Vector3 vector;
	Vector3 vector2;
	var unk5;
	var unk6;
	var unk7;

	if (_IS_NULL_VECTOR(vParam0))
		return false;

	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, 2f, 1, &vector, &vector2, &unk5, &unk6, &unk7, true))
	{
		*pvParam6 = { { 0.5f, 0.5f, 0.5f } * (vector + vector2) };
	
		if (BUILTIN::VDIST(vParam3, vector) < BUILTIN::VDIST(vParam3, vector2))
			*pfParam7 = func_310(vector2, vector, 1);
		else
			*pfParam7 = func_310(vector, vector2, 1);
	
		return true;
	}

	return false;
}

BOOL func_305(Any* panParam0) // Position - 0xAD51 Hash - 0x7865E948 ^0x92258F24
{
	if (!func_311(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

int func_306(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAD6D Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_312(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_214(bParam1), hParam0, bParam3);
}

void func_307(int iParam0) // Position - 0xADA0 Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_313(&(iParam0->f_4));
	return;
}

float func_308(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0xADC3 Hash - 0x4C6A3038 ^0xA855205
{
	float num;

	fParam0.f_2 = 0f;
	fParam3.f_2 = 0f;
	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		fParam0 = fParam0 / num;
		fParam0.f_1 = fParam0.f_1 / num;
	}

	num = BUILTIN::VMAG(fParam3);

	if (num != 0f)
	{
		fParam3 = fParam3 / num;
		fParam3.f_1 = fParam3.f_1 / num;
	}

	return (fParam0 * fParam3) + (fParam0.f_1 * fParam3.f_1);
}

BOOL func_309(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0xAE2A Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

float func_310(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0xAE53 Hash - 0x9F66817B ^0xCA5C01B6
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

BOOL func_311(Any* panParam0) // Position - 0xAEB8 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_312(Hash hParam0) // Position - 0xAEEE Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_313(var uParam0) // Position - 0xAEFC Hash - 0x58FD8C3D ^0x7E71AD66
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
	return;
}

