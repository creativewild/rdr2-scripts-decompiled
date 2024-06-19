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
	var uLocal_24 = 1073741824;
	var uLocal_25 = 1;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	BOOL bLocal_37 = 0;
	BOOL bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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

BOOL func_22(var uParam0, Any* panParam1) // Position - 0x8B7 Hash - 0x3745D0CB ^0xD6916468
{
	uParam0->f_26 = 852;
	return true;
}

void func_23(var uParam0) // Position - 0x8C7 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_24(var uParam0) // Position - 0x8CF Hash - 0x74014A98 ^0x4C9A575C
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

BOOL func_25(Vehicle veParam0) // Position - 0x951 Hash - 0xD8F57421 ^0xD07B2EEC
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false, false))
		return false;

	if (func_65(veParam0, 0) && func_65(veParam0, 1))
		return false;

	return true;
}

void func_26(Vehicle veParam0, BOOL bParam1) // Position - 0x995 Hash - 0x8E8C6964 ^0xCABC518B
{
	Ped pedInVehicleSeat;
	int i;

	if (func_66(veParam0))
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

BOOL func_27(var uParam0, Entity eParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x9ED Hash - 0x68325883 ^0x6F6E637A
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

void func_28(int iParam0) // Position - 0xB1D Hash - 0x4F769ECC ^0x83CF268
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_10 = Global_1289643[num /*19*/].f_10 - Global_1289643[num /*19*/].f_10 && iParam0;
	return;
}

void func_29() // Position - 0xB4D Hash - 0xB30E24CD ^0xDFB72892
{
	func_67(97);
	func_67(98);
	func_67(99);
	func_67(100);
	Global_1290271.f_814.f_77 = { func_68() };
	Global_1290271.f_814.f_81 = -1;
	Global_1903838.f_536 = 0;
	Global_1903838.f_537 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_30() // Position - 0xB99 Hash - 0x8190E5D8 ^0x1AD5F36F
{
	return Global_1149432.f_5568.f_132;
}

void func_31(int iParam0, Player plParam1, Player plParam2, BOOL bParam3) // Position - 0xBAA Hash - 0x8CA21210 ^0x89C8C688
{
	BOOL flag;
	Player bitIndex;
	var value;
	var unk;

	flag = true;

	if (bParam3)
		flag = false;

	if (func_69(plParam1, flag))
		return;

	if (Global_1901671.f_740.f_41 < 1)
	{
		if (func_70(Global_1295666.f_149[Global_1295666], plParam1))
		{
			if (2 == iParam0 || 3 == iParam0)
				func_17(767, false);
		
			return;
		}
	}

	if (!func_71(iParam0) && Global_1149432.f_5568.f_2 == iParam0)
		if (Global_17418.f_2641.f_1 >= Global_1295666.f_16 - func_72(iParam0))
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
		func_73(&unk, value);
	}

	if (plParam1 != 255)
	{
		Global_1149432.f_5568.f_3 = func_74(plParam1, true);
		Global_1149432.f_5568.f_4 = func_75(plParam1, false, true);
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

void func_32(Hash hParam0, int iParam1, char* sParam2) // Position - 0xD2D Hash - 0xF9431F25 ^0x8AB975EB
{
	int cashBalance;
	int num;

	cashBalance = func_76(hParam0, true, 59806960);

	if (cashBalance <= 0)
		return;

	if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0))
		return;

	if (!func_77(hParam0, 1, 59806960))
		return;

	num = func_78(hParam0, sParam2, 1, true, false, 59806960);

	if (num == -1)
		return;

	func_79(iParam1, cashBalance, false);
	return;
}

void func_33() // Position - 0xD91 Hash - 0x2100AD75 ^0x947C32AD
{
	Global_1149432.f_5568.f_132 = 0;
	return;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0xDA3 Hash - 0xDC1A83B4 ^0xAE29DD8D
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_10 && iParam0 != false;
}

void func_35(int iParam0, int iParam1) // Position - 0xDDD Hash - 0x429BCC45 ^0xBC59CA01
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

BOOL func_36(int iParam0, int iParam1) // Position - 0xF01 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_37(BOOL bParam0, BOOL bParam1) // Position - 0xF10 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_38(var uParam0, var uParam1) // Position - 0xFF0 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

void func_39(var uParam0) // Position - 0xFF9 Hash - 0x69446760 ^0x5DAB1B3D
{
	BOOL flag;

	flag = false;

	if (func_80(255) == 1)
		flag = true;

	if (flag)
	{
		if (func_81(uParam0->f_2))
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

void func_40(var uParam0) // Position - 0x1096 Hash - 0x698973BF ^0x319551A9
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
				if (!func_82(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_VEHICLE))
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

BOOL func_41(var uParam0, var uParam1) // Position - 0x11D7 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_42(var uParam0, var uParam1) // Position - 0x11E0 Hash - 0x627E5DCF ^0x84453419
{
	if (!func_8(*uParam0, 128))
	{
		if (!func_83(uParam0))
			return false;
	
		if (func_25(uParam0->f_3))
			return false;
	
		func_84(&(uParam0->f_19), false);
		func_13(uParam0, 128);
		func_85(uParam0, uParam1);
		func_57(uParam0);
		func_86(uParam0);
	}

	if (!func_14(uParam0))
		return false;

	if (!func_45(&(uParam0->f_19), 5f))
		return false;

	return true;
}

BOOL func_43() // Position - 0x1257 Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_44(var uParam0) // Position - 0x127C Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_87(uParam0, 0f);
	return;
}

BOOL func_45(var uParam0, int iParam1) // Position - 0x128B Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_4(uParam0))
		return false;

	if (func_88(uParam0) > iParam1)
		return true;

	return false;
}

void func_46(var uParam0, int iParam1) // Position - 0x12B2 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_47(var uParam0) // Position - 0x12C7 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_48(var uParam0) // Position - 0x12D0 Hash - 0x4728C32C ^0x562288F8
{
	int expected;
	var actual;
	int i;
	int num;

	if (!func_83(uParam0))
	{
		if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(uParam0->f_3, &expected, &actual))
		{
			num = 0;
		
			for (i = 0; i < 6; i = i + 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[i]))
				{
					uParam0->f_4[i] = func_89(uParam0->f_3, i);
				
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

BOOL func_49(var uParam0) // Position - 0x13E8 Hash - 0x7010358D ^0x8BA0DE7E
{
	if (func_14(uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			return false;
		}
	}

	if (!func_90())
		return false;

	return true;
}

BOOL func_50() // Position - 0x141F Hash - 0x61E8C0F8 ^0x61E8C0F8
{
	int i;

	if (func_91())
		return true;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1904402[i] != 0)
			return true;
	}

	return false;
}

BOOL func_51(BOOL bParam0) // Position - 0x1456 Hash - 0xC4B2DC07 ^0x9B02603B
{
	if (func_92())
		return false;

	if (!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT())
		return false;

	if (func_93(&(Global_1102813.f_4), 1, 5))
		return false;

	if (!bParam0)
		if (!func_50())
			return false;

	if (Global_13 || Global_1048584 || func_94())
		return false;

	if (!func_95())
		return false;

	if (func_96())
		return false;

	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
		return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (Global_1915656.f_20638 && Global_1915656.f_20241.f_43 == 2 && Global_1940252.f_2)
		return false;

	if (func_97())
		return false;

	return true;
}

void func_52(int iParam0, var uParam1, var uParam2) // Position - 0x152E Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_53(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x154A Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_98(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_99(iParam0))
		return false;

	if (func_100(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_101(iParam0, 1) || func_102(32768))
		if (!func_101(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_95())
		return false;

	return true;
}

void func_54(int iParam0, int iParam1) // Position - 0x15EC Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_55(var uParam0) // Position - 0x1610 Hash - 0x87EA6335 ^0x2CDD26B7
{
	if (func_14(uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_3) != joaat("wagonarmoured01x"))
				return false;
	
		if (func_103(&(uParam0->f_3)))
		{
			func_104(&(uParam0->f_3));
			func_105(&(uParam0->f_3));
		}
	}
	else if (func_106(uParam0))
	{
		func_105(&(uParam0->f_3));
	}

	func_107(uParam0);
	return false;
}

void func_56(var uParam0) // Position - 0x1677 Hash - 0x1E00259A ^0x92E04489
{
	if (!func_108(uParam0->f_2))
		return;

	switch (func_109(uParam0))
	{
		case 0:
			break;
	
		case 1:
			if (func_14(uParam0))
			{
				func_110(uParam0);
				func_28(4);
				func_28(2);
			}
			break;
	
		case 2:
			if (func_14(uParam0))
			{
				func_110(uParam0);
				func_17(79, true);
				func_28(4);
				func_28(2);
			}
			break;
	}

	return;
}

void func_57(var uParam0) // Position - 0x16EE Hash - 0x53539468 ^0xED4629A8
{
	int num;
	Any gangId;
	Ped pedInTransportSeat;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Player playerIndexFromPed;

	num = func_111(uParam0, true);

	if (!func_14(uParam0))
	{
		gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	
		if (num == 0 || !GANG::NETWORK_IS_GANG_ID_VALID(gangId) || GANG::NETWORK_GET_GANG_ID(uParam0->f_2) != gangId)
		{
			func_112(uParam0);
			return;
		}
	}

	pedInTransportSeat = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_3, -1);

	if (ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat))
	{
		if (pedInTransportSeat == PLAYER::PLAYER_PED_ID())
		{
			func_112(uParam0);
			return;
		}
	}

	hash = joaat("BLIP_MODIFIER_MP_OBJECTIVE_NEUTRAL");
	hash2 = joaat("BLIP_MODIFIER_MP_OBJECTIVE_ENEMY");
	hash3 = joaat("BLIP_MODIFIER_MP_OBJECTIVE_FRIENDLY");

	if (num == 0)
	{
		hash = joaat("BLIP_MODIFIER_MP_PLAYER_NEUTRAL");
		hash2 = 0;
		hash3 = joaat("BLIP_MODIFIER_MP_PLAYER_ALLY");
	}

	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (num != uLocal_19.f_17)
		{
			uLocal_19.f_17 = num;
		
			if (num == 0)
				func_113(uParam0, 768962966);
			else
				func_113(uParam0, joaat("BLIP_STYLE_AMBIENT_COACH"));
		}
	
		if (func_108(uParam0->f_2))
			func_114(uParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
		else
			func_115(uParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat))
		{
			if (num > 0)
				func_114(uParam0, hash);
		
			func_115(uParam0, hash2);
			func_115(uParam0, hash3);
		}
		else if (!PED::IS_PED_A_PLAYER(pedInTransportSeat))
		{
			func_115(uParam0, hash2);
			func_115(uParam0, hash3);
			func_115(uParam0, hash);
		}
		else
		{
			playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedInTransportSeat);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndexFromPed))
			{
				func_115(uParam0, hash2);
				func_115(uParam0, hash3);
				func_115(uParam0, hash);
			}
			else if (func_116(playerIndexFromPed, false))
			{
				func_115(uParam0, hash2);
				func_115(uParam0, hash);
				func_114(uParam0, hash3);
			}
			else if (num > 0)
			{
				func_115(uParam0, hash3);
				func_115(uParam0, hash);
				func_114(uParam0, hash2);
			}
		}
	
		if (num > 0)
		{
			switch (num)
			{
				case 1:
					func_114(uParam0, joaat("BLIP_MODIFIER_OVERLAY_1"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_2"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_3"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_4"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_5"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_6"));
					break;
			
				case 2:
					func_114(uParam0, joaat("BLIP_MODIFIER_OVERLAY_2"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_1"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_3"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_4"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_5"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_6"));
					break;
			
				case 3:
					func_114(uParam0, joaat("BLIP_MODIFIER_OVERLAY_3"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_1"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_2"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_4"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_5"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_6"));
					break;
			
				case 4:
					func_114(uParam0, joaat("BLIP_MODIFIER_OVERLAY_4"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_1"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_2"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_3"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_5"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_6"));
					break;
			
				case 5:
					func_114(uParam0, joaat("BLIP_MODIFIER_OVERLAY_5"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_1"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_2"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_3"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_4"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_6"));
					break;
			
				case 6:
					func_114(uParam0, joaat("BLIP_MODIFIER_OVERLAY_6"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_1"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_2"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_3"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_4"));
					func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_5"));
					break;
			}
		}
		else
		{
			func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_1"));
			func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_2"));
			func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_3"));
			func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_4"));
			func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_5"));
			func_115(uParam0, joaat("BLIP_MODIFIER_OVERLAY_6"));
		}
	}

	if (MAP::_DOES_ENTITY_HAVE_BLIP(uParam0->f_3))
		return;

	if (num == 0)
		func_113(uParam0, 768962966);
	else
		func_113(uParam0, joaat("BLIP_STYLE_AMBIENT_COACH"));

	return;
}

void func_58(var uParam0) // Position - 0x1AF2 Hash - 0x20E2678 ^0xFD18D6EB
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
		if (!func_117(flags, 1))
			flags2 = 1;
	
		if (Global_1289643[num /*19*/].f_8 & 32 != 0)
			if (!func_117(flags, 32))
				flags2 = flags2 | 32;
	}
	else
	{
		if (Global_1289643[num /*19*/].f_8 & 2 != 0)
			if (!func_117(flags, 2))
				flags2 = flags2 | 2;
	
		if (Global_1289643[num /*19*/].f_8 & 4 != 0)
			if (!func_117(flags, 4))
				flags2 = flags2 | 4;
	
		if (Global_1289643[num /*19*/].f_8 & 8 != 0)
			if (!func_117(flags, 8))
				flags2 = flags2 | 8;
	
		if (Global_1289643[num /*19*/].f_8 & 64 != 0)
			if (!func_117(flags, 64))
				flags2 = flags2 | 64;
	
		if (Global_1289643[num /*19*/].f_8 & 128 != 0)
			if (!func_117(flags, 128))
				flags2 = flags2 | 128;
	
		if (Global_1289643[num /*19*/].f_8 & 256 != 0)
			if (!func_117(flags, 256))
				flags2 = flags2 | 256;
	
		if (Global_1289643[num /*19*/].f_8 & 16 != 0)
			if (!func_117(flags, 16))
				flags2 = 16;
	
		if (Global_1289643[num /*19*/].f_8 & 512 != 0)
			if (!func_117(flags, 512))
				flags2 = flags2 | 512;
	
		if (func_117(flags, 1024))
			if (!func_117(flags, 1024))
				flags2 = flags2 | 1024;
	}

	if (flags2 != 0)
		AITRANSPORT::_SET_TRANSPORT_USAGE_FLAGS(transportEntity, flags2);

	return;
}

void func_59(var uParam0) // Position - 0x1CE1 Hash - 0x9E724ABF ^0x87D15840
{
	Vehicle vehicle;
	Ped ped;
	var unk;
	int num;

	if (!func_118(uParam0))
		return;

	vehicle = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(vehicle))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!func_119(vehicle, ped, &unk))
		return;

	func_120(vehicle);
	num = uParam0->f_2;

	if (Global_1289643[num /*19*/].f_8 & 16 != 0 || Global_1289642 & 32 != 0)
		if (func_16())
			func_17(80, true);
	else if (func_16())
		func_17(81, true);

	return;
}

void func_60(var uParam0) // Position - 0x1D6C Hash - 0xEDB5DE0 ^0xA882C0F1
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
			func_121(playerPed, ped2);
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

void func_61(int iParam0) // Position - 0x1E30 Hash - 0xB751AE80 ^0xB751AE80
{
	func_35(2, iParam0);
	return;
}

void func_62(int iParam0) // Position - 0x1E3F Hash - 0x44B9E71C ^0x44B9E71C
{
	func_35(3, iParam0);
	return;
}

BOOL func_63(var uParam0, var uParam1, var uParam2) // Position - 0x1E4E Hash - 0xFCBB8B79 ^0xFCBB8B79
{
	return 0;
}

BOOL func_64(var uParam0, var uParam1, var uParam2) // Position - 0x1E57 Hash - 0x72A2EC16 ^0x740A968C
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
			if (func_122(uParam0, uParam2))
			{
				func_123(uParam0);
				return 1;
			}
			break;
	
		case 1:
		case 2:
			if (func_122(uParam0, uParam2))
			{
				func_124(uParam0);
				return 1;
			}
			break;
	
		case 4:
			break;
	
		case 5:
			break;
	
		case 6:
			if (func_122(uParam0, uParam2))
				func_125(uParam0, uParam1);
			break;
	
		case 12:
			func_126(uParam0, uParam2, false);
			break;
	
		case 13:
			func_126(uParam0, uParam2, true);
			break;
	
		case 14:
			func_127(uParam0, uParam2);
			break;
	
		case 15:
			if (func_122(uParam0, uParam2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
					if (!func_66(uParam0->f_3))
					{
						TASK::_0x141BC64C8D7C5529(uParam0->f_3);
						TASK::_0xEBA2081E0A5F4D17(uParam0->f_3);
					}
				}
			}
			break;
	
		case 16:
			if (func_122(uParam0, uParam2))
			{
				func_13(uParam0, 4096);
				func_123(uParam0);
				return 1;
			}
			break;
	}

	return 0;
}

int func_65(Vehicle veParam0, int iParam1) // Position - 0x1FA4 Hash - 0x92F566DD ^0xED527D94
{
	Ped pedInDraftHarness;

	pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(veParam0, iParam1);

	if (ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
		return 1;

	return 0;
}

BOOL func_66(Vehicle veParam0) // Position - 0x1FC4 Hash - 0x9318EC92 ^0xE8ACCA9D
{
	int vehicleNumberOfPassengers;

	vehicleNumberOfPassengers = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(veParam0);

	if (vehicleNumberOfPassengers > 0)
		return true;

	return false;
}

void func_67(int iParam0) // Position - 0x1FDF Hash - 0x7317FD65 ^0x259FA389
{
	int num;
	int offset;

	if (!func_128(iParam0))
		return;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::CLEAR_BIT(&Global_1903838.f_496[num], offset);
	return;
}

struct<4> func_68() // Position - 0x2013 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_69(Player plParam0, BOOL bParam1) // Position - 0x201F Hash - 0x9DDD16F1 ^0x74519E6F
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_1048577)
		return true;

	if (Global_1572887.f_72.f_40 > 10)
		return true;

	if (!func_129(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	if (func_129(func_130()))
		if (!func_75(Global_1295666.f_149[Global_1295666], false, true) && func_131(plParam0, bParam1))
			return true;

	return false;
}

BOOL func_70(Player plParam0, Player plParam1) // Position - 0x20AF Hash - 0xEB911828 ^0x45597204
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

BOOL func_71(int iParam0) // Position - 0x2123 Hash - 0xFEE6C2C1 ^0xFEE6C2C1
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

int func_72(int iParam0) // Position - 0x216A Hash - 0x2BB0D5C9 ^0x2BB0D5C9
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

void func_73(Any* panParam0, var uParam1) // Position - 0x21B3 Hash - 0x22B84C24 ^0x2E1C636D
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 186;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 8, 2, &uParam1);
	func_132(*panParam0);
	return;
}

float func_74(Player plParam0, BOOL bParam1) // Position - 0x21F3 Hash - 0x41550721 ^0x79E4DF3F
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

BOOL func_75(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2293 Hash - 0x15E0EAC1 ^0x8D0C1A49
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

int func_76(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0x235C Hash - 0x7D4A7F9 ^0x7D4A7F9
{
	if (!func_133(hParam0, 0))
		return 0;

	return func_134(hParam0, hParam2, true, bParam1, true, 0);
}

BOOL func_77(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x2380 Hash - 0x314C46E8 ^0x314C46E8
{
	int num;
	BOOL flag;

	num = func_76(hParam0, false, hParam2) * iParam1;
	flag = false;
	num == 0;

	if (num >= 0)
		flag = func_135(num);

	return flag;
}

int func_78(Hash hParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, Hash hParam5) // Position - 0x23AF Hash - 0x8994BB7F ^0xDE1269F5
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

	if (!func_133(hParam0, 0))
		return -1;

	if (func_136(hParam0) != joaat("fee"))
		return -1;

	if (func_137())
		bParam3 = true;

	unk = 15;

	if (hParam5 == -570078785 || hParam5 == -915411861)
	{
		cashBalance = func_134(hParam0, hParam5, true, false, true, joaat("currency_cash")) * iParam2;
		goldBarBalance = 0;
	
		if (cashBalance <= 0)
		{
			goldBarBalance = func_134(hParam0, hParam5, true, false, true, joaat("currency_gold_bar")) * iParam2;
		
			if (goldBarBalance <= 0)
				return -1;
		}
	
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, goldBarBalance))
			return -1;
	}
	else if (func_138(hParam0, hParam5, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = unk[i /*2*/].f_1 * iParam2;
		
			if (!(func_139(unk[i /*2*/], false, bParam3, false) >= num2))
				return -1;
		}
	}
	else
	{
		return -1;
	}

	if (!bParam3 && func_140(false))
	{
		if (cashBalance > 0)
		{
			func_141(joaat("currency_cash"), cashBalance, -142743235, 0, false);
		}
		else if (goldBarBalance > 0)
		{
			func_141(joaat("currency_gold_bar"), goldBarBalance, -142743235, 0, false);
		}
		else if (func_142(hParam5))
		{
			for (i = 0; i < num; i = i + 1)
			{
				num2 = unk[i /*2*/].f_1 * iParam2;
				func_141(unk[i /*2*/], num2, -142743235, 0, false);
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
	num3 = func_143(joaat("spend"), &unk32, bParam4);

	if (num3 == -1)
	{
	}
	else
	{
		unk49.f_7 = -142743235;
		unk49.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk49.f_12), sParam1, 32);
		func_144(num3, unk49);
	}

	return num3;
}

void func_79(int iParam0, int iParam1, BOOL bParam2) // Position - 0x259F Hash - 0x365C2264 ^0x11ABF134
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0);

	if (func_146(iParam0) && !bParam2)
		return;

	Global_1290271.f_11.f_755[iParam0] = func_147(MISC::VAR_STRING(2, str, iParam1), 10000, 0, 0, 0, true);
	return;
}

int func_80(int iParam0) // Position - 0x25E4 Hash - 0x14C162FD ^0x1A715561
{
	if (iParam0 == 255)
		return Global_1102813;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/];

	return 26;
}

BOOL func_81(int iParam0) // Position - 0x262B Hash - 0xA1D0C977 ^0xA1D0C977
{
	if (func_34(32, iParam0))
		return true;

	return false;
}

BOOL func_82(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x2643 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_83(var uParam0) // Position - 0x269C Hash - 0xD809D5C9 ^0xD809D5C9
{
	return func_8(*uParam0, 64);
}

void func_84(var uParam0, BOOL bParam1) // Position - 0x26AD Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_4(uParam0))
		func_44(uParam0);

	return;
}

void func_85(var uParam0, var uParam1) // Position - 0x26CD Hash - 0x624A1DDF ^0x4FF89B17
{
	bLocal_37 = func_148(&(uParam0->f_3));
	func_104(&(uParam0->f_3));
	func_26(uParam0->f_3, true);
	func_105(&(uParam0->f_3));
	return;
}

void func_86(var uParam0) // Position - 0x26F8 Hash - 0xC3BE6CFE ^0x2D95785B
{
	if (!func_14(uParam0))
		return;

	if (bLocal_38)
	{
		if (bLocal_37)
		{
			func_149("FETCH_HELP_BOUNTY_SET_UP_CAPTIVES_DEAD_WAGON_DESTROYED", 0, 10000, 0, 0, 0, true);
			bLocal_38 = false;
			bLocal_37 = false;
		}
		else
		{
			func_149("FETCH_HELP_BOUNTY_SET_UP_WAGON_DESTROYED", 0, 10000, 0, 0, 0, true);
			bLocal_38 = false;
		}
	}
	else
	{
		func_17(70, true);
	}

	return;
}

void func_87(var uParam0, float fParam1) // Position - 0x274C Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_150() - fParam1;
	func_151(uParam0, 1);
	func_152(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

float func_88(var uParam0) // Position - 0x2772 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_4(uParam0))
		return uParam0->f_1;

	if (func_153(uParam0))
		return uParam0->f_2;

	return func_150() - uParam0->f_1;
}

Ped func_89(Vehicle veParam0, int iParam1) // Position - 0x27A7 Hash - 0xE6B6CA7E ^0x25E8F64E
{
	Ped pedInDraftHarness;

	pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(veParam0, iParam1);
	!ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness);
	ENTITY::IS_ENTITY_DEAD(pedInDraftHarness);
	return pedInDraftHarness;
}

BOOL func_90() // Position - 0x27CE Hash - 0xC82BB3B3 ^0x6740E474
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_154(vehicleOwnedByPlayer))
		return false;

	if (uLocal_19.f_16 != PLAYER::PLAYER_ID())
	{
		uLocal_19.f_16 = PLAYER::PLAYER_ID();
		return false;
	}

	return true;
}

BOOL func_91() // Position - 0x2834 Hash - 0xC2ABD0AE ^0xC2ABD0AE
{
	return Global_1904402.f_8872 != -1;
}

BOOL func_92() // Position - 0x2845 Hash - 0xC131FBEB ^0x955222E7
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

BOOL func_93(Any* panParam0, int iParam1, int iParam2) // Position - 0x2865 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

BOOL func_94() // Position - 0x289C Hash - 0xA3BE243F ^0x24B01457
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

BOOL func_95() // Position - 0x28B1 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_155())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_96() // Position - 0x28CC Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1896762.f_352;
}

BOOL func_97() // Position - 0x28DB Hash - 0x84CBCCC1 ^0x84CBCCC1
{
	BOOL num;

	if (!func_155())
		return false;

	num = Global_1904402.f_8874;
	Global_1904402.f_8874 = 0;
	return num;
}

BOOL func_98(int iParam0, int iParam1) // Position - 0x2902 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_99(int iParam0) // Position - 0x291A Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_101(iParam0, 4))
		return false;

	return true;
}

BOOL func_100(int iParam0) // Position - 0x2931 Hash - 0x7F4C96B ^0x650690F6
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

BOOL func_101(int iParam0, int iParam1) // Position - 0x29FD Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_102(int iParam0) // Position - 0x2A16 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_103(var uParam0) // Position - 0x2A29 Hash - 0xDD259675 ^0x2E2D9D85
{
	int seatPedIsUsing;

	if (PED::IS_PED_SITTING_IN_VEHICLE(Global_33, *uParam0))
	{
		seatPedIsUsing = PED::GET_SEAT_PED_IS_USING(Global_33);
	
		if (seatPedIsUsing == -1)
			return false;
	
		if (seatPedIsUsing == 0)
			return false;
	
		return true;
	}

	return false;
}

void func_104(var uParam0) // Position - 0x2A60 Hash - 0x52A9179A ^0x8488DE3A
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*uParam0);
	}
	else if (!func_156(Global_33, SCRIPT_TASK_EVERYONE_LEAVE_VEHICLE))
	{
		AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(*uParam0, 17, true);
		TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(*uParam0, false);
	}

	return;
}

void func_105(var uParam0) // Position - 0x2AA0 Hash - 0x7251B049 ^0xCA390ABE
{
	uLocal_19.f_10 = 0;
	uLocal_19.f_11 = 0;
	uLocal_19.f_12 = 0;
	AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(*uParam0, 17, false);
	return;
}

BOOL func_106(var uParam0) // Position - 0x2AC1 Hash - 0xBC821E4D ^0x2F0872EB
{
	switch (uLocal_19.f_10)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
				if (func_103(&(uParam0->f_3)))
					func_157(&(uLocal_19.f_10), 1);
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				if (func_103(&(uParam0->f_3)))
				{
					if (func_158(uParam0))
						func_157(&(uLocal_19.f_10), 2);
				
					if (func_159(uParam0, false))
					{
						if (func_160(4, 255))
							if (!func_160(128, 255))
								func_161(128);
						else
							func_162(true, true);
					
						func_157(&(uLocal_19.f_10), 3);
					}
				}
				else
				{
					func_157(&(uLocal_19.f_10), 3);
				}
			}
			else
			{
				func_157(&(uLocal_19.f_10), 3);
			}
			break;
	
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				func_104(&(uParam0->f_3));
			
				if (func_163(&(uParam0->f_3)))
					func_157(&(uLocal_19.f_10), 3);
			}
			break;
	
		case 3:
			func_164();
			return true;
	}

	return false;
}

void func_107(var uParam0) // Position - 0x2BBD Hash - 0xC67F791F ^0x57122F7C
{
	int num;
	Entity entity;
	Entity entity2;

	num = 855;

	if (func_165(false, &(uLocal_19.f_13), &(uLocal_19.f_14)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_19.f_13))
		{
			if (uLocal_19.f_13 != uLocal_19.f_15 && PED::GET_PED_CONFIG_FLAG(uLocal_19.f_13, 565, true))
			{
				entity = func_166(uLocal_19.f_13);
			
				if (func_167(entity, uParam0->f_3, true, true) < 20f && GANG::NETWORK_IS_IN_SAME_GANG(PLAYER::PLAYER_ID(), uParam0->f_2))
					func_17(num, false);
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_19.f_14))
		{
			if (uLocal_19.f_14 != uLocal_19.f_15 && PED::GET_PED_CONFIG_FLAG(uLocal_19.f_14, 565, true))
			{
				entity2 = func_166(uLocal_19.f_13);
			
				if (func_167(entity2, uParam0->f_3, true, true) < 20f && GANG::NETWORK_IS_IN_SAME_GANG(PLAYER::PLAYER_ID(), uParam0->f_2))
					func_17(num, false);
			}
		}
	}

	return;
}

BOOL func_108(int iParam0) // Position - 0x2C98 Hash - 0x50BDBAE5 ^0x50BDBAE5
{
	if (func_34(4, iParam0))
		return true;

	return false;
}

int func_109(var uParam0) // Position - 0x2CAF Hash - 0x8C9D8EAE ^0x472C63C5
{
	return func_168(uParam0, 1086324736, 1094713344, 1077936128, 1090519040);
}

void func_110(var uParam0) // Position - 0x2CD1 Hash - 0x9223C5D0 ^0x9223C5D0
{
	if (func_14(uParam0))
		func_35(15, 3);

	return;
}

int func_111(var uParam0, BOOL bParam1) // Position - 0x2CE9 Hash - 0x154E39E5 ^0xA53F45BD
{
	int i;
	int num;
	Ped pedInVehicleSeat;
	int seatIndex;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		seatIndex = -1 + i;
	
		if (seatIndex == -1 || seatIndex == 0)
		{
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_3, seatIndex))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_3, seatIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
				if (bParam1 || !ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat))
					num = num + 1;
		}
	}

	return num;
}

void func_112(var uParam0) // Position - 0x2D5E Hash - 0x2F9D6A60 ^0xE660A15F
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		MAP::REMOVE_BLIP(&(uParam0->f_1));

	return;
}

void func_113(var uParam0, Hash hParam1) // Position - 0x2D79 Hash - 0x7DF553FC ^0xD271B224
{
	Hash entityModel;
	Hash hash;

	func_112(uParam0);
	uParam0->f_1 = MAP::BLIP_ADD_FOR_ENTITY(hParam1, uParam0->f_3);
	entityModel = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);

	if (STREAMING::IS_MODEL_VALID(entityModel))
	{
		hash = func_169(entityModel);
	
		if (func_133(hash, 0))
			MAP::_SET_BLIP_NAME(uParam0->f_1, MISC::VAR_STRING(0, func_170(hash, false)));
		else
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_171(2));
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_171(2));
	}

	MAP::BLIP_ADD_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	return;
}

void func_114(var uParam0, Hash hParam1) // Position - 0x2DFC Hash - 0xE91543FA ^0x70FB9E63
{
	if (hParam1 != 0)
		MAP::BLIP_ADD_MODIFIER(uParam0->f_1, hParam1);

	return;
}

void func_115(var uParam0, Hash hParam1) // Position - 0x2E15 Hash - 0xE91543FA ^0xF13BA47A
{
	if (hParam1 != 0)
		MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, hParam1);

	return;
}

BOOL func_116(Player plParam0, BOOL bParam1) // Position - 0x2E2E Hash - 0xF0471E4C ^0xFE2D6C4D
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

BOOL func_117(int iParam0, int iParam1) // Position - 0x2F30 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_118(var uParam0) // Position - 0x2F3F Hash - 0xC131BF52 ^0x8D76D22A
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

	if (!func_119(vehicle, ped, &unk))
		return false;

	gamerHandle = { uParam0->f_11 };
	player = uParam0->f_2;
	player2 = PLAYER::PLAYER_ID();

	if (player == player2)
		return false;

	player3 = player;
	num = func_172(player3);

	if (func_173(player3))
	{
		num2 = func_174(num);
	
		if (num2 == 15 || num2 == 10)
			if (func_175(num, vehicle))
				return true;
	}

	if (Global_1289643[player3 /*19*/].f_8 & 16 != 0 || Global_1289642 & 32 != 0)
		return false;

	if (Global_1289643[player3 /*19*/].f_8 & 2 != 0 || Global_1289642 & 4 != 0)
		if (GANG::NETWORK_GET_GANG_ID(player2) == GANG::NETWORK_GET_GANG_ID(player))
			return false;

	unk3 = { func_176(player) };

	if (Global_1289643[player3 /*19*/].f_8 & 4 != 0 || Global_1289642 & 8 != 0)
		if (func_177(unk3, gamerHandle))
			return false;

	if (Global_1289643[player3 /*19*/].f_8 & 8 != 0 || Global_1289642 & 16 != 0)
		if (NETWORK::NETWORK_IS_FRIEND(&gamerHandle))
			return false;

	return true;
}

BOOL func_119(Vehicle veParam0, Ped pedParam1, var uParam2) // Position - 0x30B1 Hash - 0xD04D4B6D ^0x223FF6C3
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

void func_120(Vehicle veParam0) // Position - 0x3122 Hash - 0xDA093C59 ^0xF8DC1E22
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

	if (!func_119(veParam0, ped, &unk))
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

void func_121(Ped pedParam0, Ped pedParam1) // Position - 0x31A9 Hash - 0x6F67FB05 ^0x3D7299C8
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

BOOL func_122(var uParam0, var uParam1) // Position - 0x31F1 Hash - 0x8ED84F8C ^0x61C669C8
{
	if (uParam0->f_2 != uParam1->f_1)
		return false;

	return true;
}

void func_123(var uParam0) // Position - 0x3209 Hash - 0xCA40BA01 ^0xCA40BA01
{
	if (!func_8(*uParam0, 4))
		func_13(uParam0, 4);

	return;
}

void func_124(var uParam0) // Position - 0x3224 Hash - 0x59ACF74D ^0x59ACF74D
{
	if (!func_8(*uParam0, 4))
		func_13(uParam0, 2);

	return;
}

void func_125(var uParam0, var uParam1) // Position - 0x323F Hash - 0x552DA3D0 ^0x204D4381
{
	if (func_4(&(uParam0->f_13)))
		func_5(&(uParam0->f_13));

	if (func_4(&(uParam0->f_16)))
		func_5(&(uParam0->f_16));

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		func_178(uParam0, 0f, 0f, 0f);

	if (!func_14(uParam0))
		return;

	if (func_34(4, uParam0->f_2))
		return;

	TELEMETRY::_TELEMETRY_PERSONAL_VEHICLE_WAGON(joaat("CALL"), &(uParam1->f_2), 0);
	func_67(100);
	func_179(4);
	return;
}

void func_126(var uParam0, var uParam1, BOOL bParam2) // Position - 0x32B7 Hash - 0x4074F2C6 ^0x9CAA9E24
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

	if (!func_119(vehicle, ped, &unk))
		return;

	func_180(vehicle);

	if (!flag)
		if (func_16())
			func_17(80, true);

	return;
}

void func_127(var uParam0, var uParam1) // Position - 0x3362 Hash - 0x8FDC8F1B ^0x3BE1ACEE
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

	if (!func_119(vehicle, ped, &unk))
		return;

	func_180(vehicle);
	return;
}

BOOL func_128(int iParam0) // Position - 0x33CB Hash - 0x5EE14A7B ^0x5EE14A7B
{
	if (iParam0 <= -1 || iParam0 >= 117)
		return false;

	return true;
}

BOOL func_129(var uParam0, var uParam1) // Position - 0x33EA Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_181(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_182(uParam0))
		return false;

	return true;
}

struct<2> func_130() // Position - 0x341E Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_183(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_183(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_131(Player plParam0, BOOL bParam1) // Position - 0x3469 Hash - 0x341369BB ^0xFE185C1F
{
	Player player;

	if (!Global_1149432.f_5568)
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;

	if (player < 0 || player >= 32)
		return false;

	if (func_117(Global_1101558[player /*38*/].f_35, 2))
		return false;

	if (bParam1)
		if (func_184())
			return true;

	if (func_185(Global_1056554[player /*491*/].f_2))
		return true;

	return false;
}

void func_132(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x34E5 Hash - 0xF0CCFFF3 ^0xF0CCFFF3
{
	return;
}

BOOL func_133(Hash hParam0, int iParam1) // Position - 0x34ED Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
int func_134(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x3507 Hash - 0x8D867191 ^0xF02772A4
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_186(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_187(hParam0) || func_188(hParam0, 1077060302))
		return func_190(func_189(hParam0, false), hParam1, bParam3, true);

	if (!func_138(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

BOOL func_135(int iParam0) // Position - 0x35F7 Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_191() == 0)
		return func_192(iParam0);

	return iParam0 <= func_193();
}

int func_136(Hash hParam0) // Position - 0x3624 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_133(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_137() // Position - 0x364F Hash - 0xD3E48215 ^0xDBA46110
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_138(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x366B Hash - 0x18E9762 ^0x852B384E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_133(hParam0, 0))
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
		func_194(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_139(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x36FB Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_133(hParam0, 0))
		return 0;

	num = func_136(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_195(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_196(hParam0, false);
	}

	if (func_197(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_198(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_199(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_198(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_140(BOOL bParam0) // Position - 0x37BD Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_191() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_198(bParam0));
}

BOOL func_141(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x37DB Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_133(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_197(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_200(hParam0, iParam1, iParam2, iParam3, bParam4);

	unk = { func_201(hParam0, bParam4, 0) };
	unk6 = { func_202(hParam0, unk, unk.f_4, bParam4) };
	return func_203(hParam0, &unk6, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_142(Hash hParam0) // Position - 0x3853 Hash - 0x5000025C ^0x5000025C
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

int func_143(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x3880 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_204(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_206(func_205(num, hParam0, panParam1), num, panParam1);
	else
		return func_207(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_144(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x38EA Hash - 0x4EE39F09 ^0x4C62B7DF
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x3968 Hash - 0xA17D549C ^0x7D610294
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

BOOL func_146(int iParam0) // Position - 0x3B0F Hash - 0xDE0EAD7B ^0x974D95A
{
	return func_208(Global_1290271.f_11.f_755[iParam0]);
}

int func_147(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3B28 Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_148(var uParam0) // Position - 0x3B63 Hash - 0x6EE1363A ^0xB9C36B48
{
	int i;
	int num;
	int num2;
	int seatIndex;

	num = 9;
	bLocal_38 = false;

	for (i = 0; i < num; i = i + 1)
	{
		num2 = 1 + i;
		seatIndex = num2;
	
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, seatIndex))
		{
			num[i] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, seatIndex);
			bLocal_38 = true;
		
			if (ENTITY::IS_ENTITY_DEAD(num[i]))
				return 1;
		}
	}

	return 0;
}

void func_149(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x3BC2 Hash - 0x2A2B8D2B ^0xEE9FA841
{
	const char* str;
	Blip blip;

	str = 0;

	if (hParam1 != 0)
	{
		blip = MAP::_BLIP_ADD_FOR_STYLE(hParam1);
		str = MISC::VAR_STRING(2, sParam0, blip);
	}
	else
	{
		str = MISC::VAR_STRING(2, sParam0);
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(str))
	{
		MAP::REMOVE_BLIP(&blip);
		return;
	}

	if (Global_1290271.f_814.f_290 != 0)
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1290271.f_814.f_290, false);
		Global_1290271.f_814.f_290 = 0;
	}

	if (MAP::DOES_BLIP_EXIST(Global_1290271.f_814.f_289))
		MAP::REMOVE_BLIP(&(Global_1290271.f_814.f_289));

	Global_1290271.f_814.f_289 = blip;
	Global_1290271.f_814.f_290 = func_147(str, iParam2, iParam3, iParam4, iParam5, bParam6);
	return;
}

float func_150() // Position - 0x3C71 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_151(var uParam0, int iParam1) // Position - 0x3CA3 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_152(var uParam0, int iParam1) // Position - 0x3CB4 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_153(var uParam0) // Position - 0x3CC9 Hash - 0x39705408 ^0x39705408
{
	return func_36(*uParam0, 2);
}

BOOL func_154(Vehicle veParam0) // Position - 0x3CD9 Hash - 0xDEF9F967 ^0x717FC3F4
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("wagonarmoured01x"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_155() // Position - 0x3CF8 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_156(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x3D0C Hash - 0x98858871 ^0xC2A41514
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 2)
		return false;

	return TASK::_GET_SCRIPT_TASK_ACTION_TIME(pedParam0, esthParam1) != -1f || scriptTaskStatus == 0;
}

void func_157(var uParam0, int iParam1) // Position - 0x3D3D Hash - 0x6140DB6F ^0x6140DB6F
{
	if (*uParam0 != iParam1)
		*uParam0 = iParam1;

	return;
}

BOOL func_158(var uParam0) // Position - 0x3D52 Hash - 0xB11B8E22 ^0xF0BD867F
{
	switch (uLocal_19.f_11)
	{
		case 0:
			if (!func_209(uLocal_19.f_8))
				uLocal_19.f_8 = func_210("PLAYER_SURRENDER_BREAK_OUT", joaat("INPUT_CONTEXT_X"), uParam0->f_3, 1, 0, false, 0, 10, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, 0);
		
			func_211(uLocal_19.f_8, false, true);
			func_212(uLocal_19.f_8, false, true, true);
		
			if (func_209(uLocal_19.f_8))
				func_213(&(uLocal_19.f_11), 1);
			break;
	
		case 1:
			if (func_214(uLocal_19.f_8, false))
			{
				func_211(uLocal_19.f_8, false, true);
				func_212(uLocal_19.f_8, false, true, true);
			}
		
			if (!func_215(uParam0) && !func_216(uParam0) && VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_3))
				func_213(&(uLocal_19.f_11), 2);
			break;
	
		case 2:
			if (!func_214(uLocal_19.f_8, false))
			{
				func_211(uLocal_19.f_8, true, true);
				func_212(uLocal_19.f_8, true, true, true);
			}
		
			if (func_215(uParam0))
				func_213(&(uLocal_19.f_11), 1);
		
			if (func_216(uParam0))
				func_213(&(uLocal_19.f_11), 1);
		
			if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_3))
				func_213(&(uLocal_19.f_11), 1);
		
			if (func_217(uLocal_19.f_8, true))
				func_213(&(uLocal_19.f_11), 3);
			break;
	
		case 3:
			if (func_209(uLocal_19.f_8))
				func_218(&(uLocal_19.f_8), true, true);
		
			return true;
	}

	return false;
}

BOOL func_159(var uParam0, BOOL bParam1) // Position - 0x3EC9 Hash - 0xBC5B41A9 ^0x621C382B
{
	if (bParam1)
		func_213(&(uLocal_19.f_12), 3);

	switch (uLocal_19.f_12)
	{
		case 0:
			if (!func_209(uLocal_19.f_9))
				uLocal_19.f_9 = func_210("PLAYER_SURRENDER", joaat("INPUT_SURRENDER"), uParam0->f_3, 1, 0, false, 0, 4, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, 0);
		
			func_211(uLocal_19.f_9, false, true);
			func_212(uLocal_19.f_9, false, true, true);
		
			if (func_209(uLocal_19.f_9))
				func_213(&(uLocal_19.f_12), 2);
			break;
	
		case 2:
			if (!func_214(uLocal_19.f_9, false))
			{
				func_211(uLocal_19.f_9, true, true);
				func_212(uLocal_19.f_9, true, true, true);
			}
		
			if (func_217(uLocal_19.f_9, true))
				func_213(&(uLocal_19.f_12), 3);
			break;
	
		case 3:
			if (func_209(uLocal_19.f_9))
				func_218(&(uLocal_19.f_9), true, true);
		
			return true;
	}

	return false;
}

BOOL func_160(int iParam0, int iParam1) // Position - 0x3FBE Hash - 0x278C3338 ^0x1736C159
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)) && Global_1225687[iParam1 /*303*/].f_300 && iParam0 != false;
}

void func_161(int iParam0) // Position - 0x3FF3 Hash - 0xC966256 ^0x9EBF3FA8
{
	Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 = Global_1225687[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 || iParam0;
	return;
}

void func_162(BOOL bParam0, BOOL bParam1) // Position - 0x401E Hash - 0x2F17103B ^0x1C4D2C36
{
	if (func_219(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_221(0);
	}
	else
	{
		if (bParam1)
			func_222(0, false, 0, true);
	
		func_223(0);
		func_224(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_225(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_226(Global_1102813.f_3839, 36);
	func_227(Global_1102813.f_3878, 36);
	return;
}

BOOL func_163(var uParam0) // Position - 0x4169 Hash - 0x73902E86 ^0x5008FA83
{
	int i;
	int num;
	BOOL num2;
	int num3;
	int seatIndex;

	num = 9;
	num2 = 1;

	for (i = 0; i < num; i = i + 1)
	{
		num3 = -1 + i;
		seatIndex = num3;
	
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, seatIndex))
		{
			num[i] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, seatIndex);
		
			if (!ENTITY::IS_ENTITY_DEAD(num[i]))
				num2 = 0;
		}
	}

	return num2;
}

void func_164() // Position - 0x41C9 Hash - 0x94805FD8 ^0x4BF586AF
{
	if (func_209(uLocal_19.f_9))
		func_218(&(uLocal_19.f_9), true, true);

	if (func_209(uLocal_19.f_8))
		func_218(&(uLocal_19.f_8), true, true);

	return;
}

BOOL func_165(BOOL bParam0, var uParam1, var uParam2) // Position - 0x41FB Hash - 0x2A9340EF ^0x2C24036C
{
	BOOL num;
	Ped lassoTarget;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940199.f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940199.f_26))
		{
			*uParam1 = Global_1940199.f_26;
			num = 1;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940199.f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940199.f_27))
		{
			if (PED::IS_PED_HOGTIED(Global_1940199.f_27) || ENTITY::IS_ENTITY_DEAD(Global_1940199.f_27))
			{
				*uParam2 = Global_1940199.f_27;
				num = 1;
			}
		}
	}

	if (Global_1940199.f_24 && !PED::IS_PED_INJURED(Global_33))
	{
		lassoTarget = PED::_GET_LASSO_TARGET(Global_33);
	
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

Entity func_166(var uParam0) // Position - 0x42C2 Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

float func_167(Entity eParam0, Entity eParam1, BOOL bParam2, BOOL bParam3) // Position - 0x42CC Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(eParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false), bParam2);
}

int func_168(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x4314 Hash - 0xDC28FE76 ^0x58C547E8
{
	var unk;
	var unk2;
	Vector3 vector;
	int netID;
	Player playerOwnerOfNetworkId;

	vector = { func_228(uParam0) };

	if (!func_229(uParam0))
		return 2;

	if (func_14(uParam0))
	{
		if (func_230(uParam0, &unk, iParam2) || BUILTIN::VDIST(vector, ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) <= iParam3)
			return 1;
	
		if (func_231(uParam0, 1092616192))
			return 2;
	}

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		if (func_232(uParam0, vector, &unk2))
		{
			if (!func_178(uParam0, unk2))
			{
			}
			else
			{
				vector = { unk2 };
			}
		}
	
		if (_IS_NULL_VECTOR(vector))
			if (func_233(uParam0, 1092616192) == 2)
				return 2;
		else if (!TASK::_0x583AE9AF9CEE0958(uParam0->f_3, vector))
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_3, vector, iParam1, 1147928963, 2, iParam4, iParam3);
		else if (func_233(uParam0, 1092616192) == 2)
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
				if (func_233(uParam0, 1092616192) == 2)
					return 2;
		}
	}

	return 0;
}

Hash func_169(Hash hParam0) // Position - 0x444D Hash - 0x9C4129B6 ^0xB08803C3
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

Hash func_170(Hash hParam0, BOOL bParam1) // Position - 0x448B Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_133(hParam0, 0))
		return 0;

	hash = func_234(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

char* func_171(int iParam0) // Position - 0x44B9 Hash - 0x9231ACCA ^0xE7A1B525
{
	var unk;

	if (iParam0 == -1)
		return "";

	func_235();
	Global_1903838.f_106.f_2 = 1292413058;
	Global_1903838.f_106.f_3 = func_236(iParam0);

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, &(Global_1903838.f_106)))
		return "";

	return func_237(unk);
}

int func_172(Player plParam0) // Position - 0x450D Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1283730[plParam0 /*2*/];
}

BOOL func_173(Player plParam0) // Position - 0x451D Hash - 0x7647021A ^0xF0097466
{
	return Global_1283730[plParam0 /*2*/].f_1;
}

int func_174(int iParam0) // Position - 0x452F Hash - 0xA78B2E8C ^0xA78B2E8C
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

BOOL func_175(int iParam0, Vehicle veParam1) // Position - 0x4A4C Hash - 0xBD49035B ^0x5D15CA9E
{
	int num;
	var unk;
	float num2;
	float num3;

	num = func_174(iParam0);
	unk = { Global_1051832.f_92[num /*75*/].f_3 };

	if (iParam0 == 154)
		unk = { func_238(PLAYER::GET_PLAYER_INDEX()) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	num2 = func_239(iParam0);

	if (num == 10 || num == 15 || num == 29)
	{
		num3 = func_240(veParam1, unk, false);
	
		if (num3 < num2)
			return true;
	}
	else if (num == 2)
	{
		if (func_240(veParam1, unk, false) < num2)
			return true;
	}

	return false;
}

struct<2> func_176(Player plParam0) // Position - 0x4AEE Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_177(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x4B02 Hash - 0xC8AB68FB ^0xE3EA044B
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

BOOL func_178(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x4B5E Hash - 0xFE114C1 ^0xE62A0A60
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		return false;

	if (!DECORATOR::DECOR_SET_INT(uParam0->f_3, "SummonPosXY", func_241(fParam1)))
		return false;

	if (!DECORATOR::DECOR_SET_FLOAT(uParam0->f_3, "SummonPosZ", fParam1.f_2))
		return false;

	return true;
}

void func_179(int iParam0) // Position - 0x4BAB Hash - 0x5D11B287 ^0x71DF9EF4
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_10 = Global_1289643[num /*19*/].f_10 || iParam0;
	return;
}

void func_180(Vehicle veParam0) // Position - 0x4BD0 Hash - 0xBB2A7A5E ^0x98FD878D
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

	if (!func_119(veParam0, ped, &unk))
		return;

	args.f_5 = 1073741824;
	args.f_6 = 1;
	args.f_3 = ped;
	args.f_4 = veParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&args);
	return;
}

BOOL func_181(int iParam0) // Position - 0x4C55 Hash - 0x5000025C ^0x5000025C
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

int func_182(int iParam0) // Position - 0x4C94 Hash - 0xE34A477A ^0xE34A477A
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

struct<2> func_183(int iParam0) // Position - 0x4D2A Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_184() // Position - 0x4D3E Hash - 0x9CA0027A ^0x448EE929
{
	if (Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return true;

	return false;
}

BOOL func_185(int iParam0) // Position - 0x4D6B Hash - 0x2F9680B9 ^0x1035116F
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
				if (func_242(Global_1108965.f_775.f_28))
					if (!Global_1108965.f_775.f_19)
						return false;
			
				if (!func_243())
					return true;
			}
			else if (Global_1048579 && !Global_1572887.f_10)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(Global_1295666.f_149[Global_1295666]))
					return true;
			
				if (func_93(&(Global_1102813.f_4), 1, 5))
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

BOOL func_186(Hash hParam0, Hash hParam1) // Position - 0x4E5D Hash - 0xFB5CB038 ^0x83BB35B8
{
	if (!func_133(hParam0, 0))
		return false;

	if (func_187(hParam0) || func_188(hParam0, 1077060302))
		return func_244(func_189(hParam0, false), hParam1, false);

	return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1) > 0;
}

BOOL func_187(Hash hParam0) // Position - 0x4EA9 Hash - 0x672E565C ^0xD531C7FC
{
	if (func_188(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_188(Hash hParam0, Hash hParam1) // Position - 0x4EC4 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_133(hParam0, 0))
		return func_246(func_245(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_189(Hash hParam0, BOOL bParam1) // Position - 0x4F05 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_133(hParam0, 0))
		return func_247(func_245(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

int func_190(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4F5D Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_248(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

int func_191() // Position - 0x4FF1 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_192(int iParam0) // Position - 0x4FFF Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_193() // Position - 0x5022 Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_191() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_194(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x503D Hash - 0x7EFAC478 ^0x4E4217E0
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_249(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

Hash func_195(Hash hParam0, int iParam1) // Position - 0x5213 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_133(hParam0, 0))
		return 0;

	num = func_136(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_188(hParam0, 1399091007))
	{
		func_250(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_196(Hash hParam0, BOOL bParam1) // Position - 0x528D Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_251(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_253(&unk, func_252(false));

	if (!func_254(&unk, &num, &num2, false))
		return 0;

	func_255(num);
	return num2;
}

int func_197(Hash hParam0, Hash hParam1) // Position - 0x52EC Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_256(func_245(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_198(BOOL bParam0) // Position - 0x5318 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_191() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_199(Hash hParam0, BOOL bParam1) // Position - 0x5359 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_201(hParam0, bParam1, 0) };
	return func_202(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_200(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x537E Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_257(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_197(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_140(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_258(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_259(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_143(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_144(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_198(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

struct<5> func_201(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x5496 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_260(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_136(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_265(hParam0, -1823706425))
			{
				unk = { func_202(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_265(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_202(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_202(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_265(hParam0, -1653629781))
			{
				unk = { func_202(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_264(bParam1) };
		
			switch (func_249(hParam0))
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
			unk = { func_202(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_252(bParam1) };
		
			if (iParam2 && func_261(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_262(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_262(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_263(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_266(unk, &unk28, bParam1, false, -1))
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
			else if (func_265(hParam0, -1653629781))
			{
				unk = { func_202(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_202(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x580A Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_133(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_198(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_203(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x583B Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_257(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_266(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_140(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_191() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_143(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_144(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_198(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_204(Hash hParam0, Any* panParam1) // Position - 0x5959 Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_267(panParam1->f_8, hParam0, num, 2048) || func_267(panParam1->f_8, hParam0, num, 32768) || func_267(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_267(panParam1->f_8, hParam0, num, 4) || func_267(panParam1->f_8, hParam0, num, 256) || func_267(panParam1->f_8, hParam0, num, 65536) || func_267(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_267(panParam1->f_8, hParam0, num, 1) || func_267(panParam1->f_8, hParam0, num, 8) || func_267(panParam1->f_8, hParam0, num, 65536) || func_267(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_267(panParam1->f_8, hParam0, num, 1) || func_267(panParam1->f_8, hParam0, num, 16) || func_267(panParam1->f_8, hParam0, num, 2) || func_267(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_267(panParam1->f_8, hParam0, num, 8) || func_267(panParam1->f_8, hParam0, num, 4096) || func_267(panParam1->f_8, hParam0, num, 256) || func_267(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_205(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x5B2F Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_206(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x5B46 Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_268(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_268(iParam1, 2, 0, 0);
	return -1;
}

int func_207(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x5B8F Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_268(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

BOOL func_208(int iParam0) // Position - 0x5BAB Hash - 0xED7B1FA3 ^0x96F9ACB3
{
	if (iParam0 == 0)
		return false;

	return UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

BOOL func_209(int iParam0) // Position - 0x5BC5 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

// Unhandled jump detected. Output should be considered invalid
int func_210(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, int iParam16) // Position - 0x5C04 Hash - 0xA385BF6B ^0x5950F9F
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_269(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (pedParam2 == Global_1951910[i /*23*/].f_11 && hParam1 == Global_1951910[i /*23*/].f_4)
					if (iParam3 <= Global_1951910[i /*23*/])
						return i;
			
				goto 0x8C;
			}
		}
	
		if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_270(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, iParam16);
		return num;
	}

	return 0;
}

void func_211(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5CDB Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_209(iParam0))
		return;

	num = func_271(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[num /*23*/].f_3, bParam1);
	return;
}

void func_212(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5D24 Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_209(iParam0))
		return;

	num = func_271(iParam0);

	if (bParam1)
	{
		func_272(iParam0, 4);
	
		if (bParam3)
			func_273(num, true);
	
		func_274(num, true);
	}
	else
	{
		func_275(iParam0, 4);
		func_274(num, false);
	}

	return;
}

void func_213(var uParam0, int iParam1) // Position - 0x5D78 Hash - 0x6140DB6F ^0x6140DB6F
{
	if (*uParam0 != iParam1)
		*uParam0 = iParam1;

	return;
}

BOOL func_214(int iParam0, BOOL bParam1) // Position - 0x5D8D Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_209(iParam0))
		return false;

	return !func_269(iParam0, 4);
}

BOOL func_215(var uParam0) // Position - 0x5DB2 Hash - 0x746A1D71 ^0x4C5AEE41
{
	float num;
	float num2;

	uLocal_19.f_15 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	num = func_167(uParam0->f_3, uLocal_19.f_15, true, true);
	num2 = 20f;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_19.f_15))
		return false;

	if (num >= num2)
		return false;

	return true;
}

BOOL func_216(var uParam0) // Position - 0x5DF9 Hash - 0x87099A77 ^0x25861A60
{
	Vector3 entityCoords;
	Vector3 vector;
	int entityType;
	Volume volume;
	ItemSet itemSet;
	Entity entityFromItem;
	int matchingEntities;
	int i;
	Ped pedIndexFromEntityIndex;
	Player playerIndexFromPed;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false) };
	vector = { 20f, 20f, 20f };
	entityType = 1;
	volume = VOLUME::CREATE_VOLUME_SPHERE(entityCoords, 0f, 0f, 0f, vector);
	itemSet = ITEMSET::CREATE_ITEMSET(false);
	matchingEntities = ENTITY::GET_MATCHING_ENTITIES(volume, itemSet, entityType, 1, 0, 0);
	i = 0;

	for (i = 0; i <= matchingEntities - 1; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
	
		if (ENTITY::DOES_ENTITY_EXIST(entityFromItem) && !ENTITY::IS_ENTITY_DEAD(entityFromItem) && ENTITY::IS_ENTITY_A_PED(entityFromItem))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
		
			if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
			{
				playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedIndexFromEntityIndex);
			
				if (GANG::NETWORK_IS_IN_SAME_GANG(playerIndexFromPed, uParam0->f_2))
				{
					VOLUME::DELETE_VOLUME(volume);
					ITEMSET::DESTROY_ITEMSET(itemSet);
					return true;
				}
			}
		}
	}

	VOLUME::DELETE_VOLUME(volume);
	ITEMSET::DESTROY_ITEMSET(itemSet);
	return false;
}

BOOL func_217(int iParam0, BOOL bParam1) // Position - 0x5ED5 Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_209(iParam0))
		return false;

	num = func_271(iParam0);

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

void func_218(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5FCF Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_209(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_271(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_276(num);
	*uParam0 = 0;
	return;
}

int func_219(int iParam0) // Position - 0x6023 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x606E Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_221(int iParam0) // Position - 0x6098 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_277(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_222(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x60B5 Hash - 0x79169E9C ^0xA3FE4569
{
	func_278(iParam0);

	if (!func_279(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_280(128) && !func_281(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_282() == 4)
		func_221(18);

	func_283(1024);
	return;
}

int func_223(int iParam0) // Position - 0x6117 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_284(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_224(var uParam0) // Position - 0x6134 Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_225(var uParam0) // Position - 0x6146 Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_226(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x6158 Hash - 0x63EE9672 ^0xDAC9325D
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0.f_4))
			{
			}
			break;
	}

	uParam0.f_16;
	VOLUME::DOES_VOLUME_EXIST(uParam0.f_27) && uParam0.f_28;
	return;
}

void func_227(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x61AE Hash - 0x6DF4F0B2 ^0x7B946ED1
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	return;
}

Vector3 func_228(var uParam0) // Position - 0x61DB Hash - 0x4B33EF28 ^0x1749D787
{
	int _int;
	var unk;

	_int = DECORATOR::DECOR_GET_INT(uParam0->f_3, "SummonPosXY");

	if (_int == 0)
		return 0f, 0f, 0f;

	unk = { func_285(_int) };
	unk.f_2 = DECORATOR::DECOR_GET_FLOAT(uParam0->f_3, "SummonPosZ");
	return unk;
}

BOOL func_229(var uParam0) // Position - 0x621B Hash - 0x6F657A6A ^0x23529422
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

BOOL func_230(var uParam0, var uParam1, int iParam2) // Position - 0x6267 Hash - 0x56F90732 ^0x5C7B469E
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

	if (func_66(uParam0->f_3))
		return true;

	return false;
}

BOOL func_231(var uParam0, int iParam1) // Position - 0x62D7 Hash - 0x7CDE7FE7 ^0x1BEECBC4
{
	Ped playerPed;
	int num;

	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_2);

	if (ENTITY::DOES_ENTITY_EXIST(playerPed))
	{
		num = func_286(uParam0->f_3, playerPed, 1060437492);
	
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

BOOL func_232(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3* pvParam4) // Position - 0x6366 Hash - 0x3CFB764 ^0x27DF3663
{
	var unk;

	if (!func_287(uParam0->f_2, uParam0->f_3, pvParam4, &unk))
		return false;

	if (BUILTIN::VDIST(*pvParam4, vParam1) >= 10f)
		return true;

	if (!TASK::_0x583AE9AF9CEE0958(uParam0->f_3, vParam1))
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), vParam1) > 5f)
			return true;

	return false;
}

int func_233(var uParam0, int iParam1) // Position - 0x63CB Hash - 0x8EC234D0 ^0xEB7ED529
{
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_3) == 0f)
		if (!func_4(&(uParam0->f_13)))
			func_44(&(uParam0->f_13));
		else if (func_288(&(uParam0->f_13), iParam1))
			return 2;
	else if (func_4(&(uParam0->f_13)))
		func_5(&(uParam0->f_13));

	return 0;
}

Hash func_234(Hash hParam0, BOOL bParam1) // Position - 0x641F Hash - 0xBBDA5425 ^0xCC730553
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

void func_235() // Position - 0x64C1 Hash - 0xF8D33D29 ^0xCFCF9382
{
	Global_1903838.f_106 = Global_1072759.f_28418[49 /*4*/].f_3;
	Global_1903838.f_106.f_1 = 0;
	Global_1903838.f_106.f_2 = 0;
	Global_1903838.f_106.f_3 = 0;
	Global_1903838.f_106.f_4 = 0;
	return;
}

int func_236(int iParam0) // Position - 0x6500 Hash - 0xF10AB031 ^0x12D4E830
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

char* func_237(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x6573 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

Vector3 func_238(Player plParam0) // Position - 0x6587 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

float func_239(int iParam0) // Position - 0x659B Hash - 0xF5CBAB81 ^0xF5CBAB81
{
	int num;

	num = func_174(iParam0);

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

float func_240(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x6605 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(veParam0, false, false), vParam1, bParam4);
}

BOOL func_241(float fParam0, var uParam1, var uParam2) // Position - 0x662D Hash - 0xEEEBBA53 ^0xA3D9EE1A
{
	BOOL flag;

	flag = BUILTIN::ROUND(MISC::ABSF(fParam0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(fParam0.f_1)) & 32767, 15);

	if (fParam0 > 0f)
		flag = flag | 1073741824;

	if (fParam0.f_1 > 0f)
		flag = flag | -2147483648;

	return flag;
}

BOOL func_242(int iParam0) // Position - 0x6682 Hash - 0x77815697 ^0x77815697
{
	if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
		return true;

	return false;
}

BOOL func_243() // Position - 0x66AA Hash - 0x96DF4A78 ^0x70EB39DA
{
	if (Global_1572887.f_72.f_40 >= 10 && Global_1572887.f_72.f_40 <= 14)
		return true;

	return false;
}

BOOL func_244(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x66D5 Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_289(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_290(hParam0, hParam1);

	return true;
}

Hash func_245(Hash hParam0) // Position - 0x670D Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_246(Hash hParam0, Hash hParam1) // Position - 0x6717 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_256(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

Hash func_247(Hash hParam0, BOOL bParam1) // Position - 0x674D Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_256(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_248(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x6786 Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_289(hParam0))
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
		func_291(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

Hash func_249(Hash hParam0) // Position - 0x6815 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_133(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

void func_250(Hash hParam0, var uParam1, var uParam2) // Position - 0x6840 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_251(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6A4C Hash - 0x90CCF0F4 ^0xA5F3D799
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

struct<4> func_252(BOOL bParam0) // Position - 0x6B2A Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_198(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_202(923904168, func_260(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_202(923904168, func_260(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_202(923904168, func_260(bParam0), -740156546, false);
}

void func_253(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6BCB Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_254(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x6BE6 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_198(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_255(int iParam0) // Position - 0x6C0B Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_256(Hash hParam0, int iParam1) // Position - 0x6C2C Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_257(Hash hParam0) // Position - 0x6C46 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_258(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x6C5C Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_197(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_292(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_259(Hash hParam0, var uParam1) // Position - 0x6CC9 Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_202(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

struct<4> func_260(BOOL bParam0) // Position - 0x6D1C Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_198(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_202(joaat("character"), func_68(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_202(joaat("character"), func_68(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_202(joaat("character"), func_68(), joaat("SLOTID_NONE"), bParam0);
}

int func_261(Hash hParam0, BOOL bParam1) // Position - 0x6DBC Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_249(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_293();
		else
			return 1;

	return 0;
}

BOOL func_262(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6DF3 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_294(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_263(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x6E0E Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_295(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_264(BOOL bParam0) // Position - 0x6E2F Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_198(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_202(271701509, func_260(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_202(271701509, func_260(bParam0), 12999093, false);
}

BOOL func_265(Hash hParam0, Hash hParam1) // Position - 0x6E99 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_249(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_296(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_266(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x6F06 Hash - 0x113CD144 ^0x113CD144
{
	return func_297(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_267(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x6F1C Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_117(iParam2, iParam3))
		return true;

	return false;
}

void func_268(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x6F34 Hash - 0x3169A239 ^0x47E831EC
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

	func_298(iParam0, iParam1, iParam2, iParam3);
	return;
}

BOOL func_269(int iParam0, int iParam1) // Position - 0x6FD2 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_270(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x6FF3 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { fParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = iParam9;
	Global_1951910[iParam0 /*23*/].f_10 = volParam10;
	Global_1951910[iParam0 /*23*/].f_11 = pedParam11;
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
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, pedParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
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
	func_273(iParam0, true);
	func_274(iParam0, true);
	func_275(iParam0, 128);
	return;
}

int func_271(int iParam0) // Position - 0x730D Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_272(int iParam0, int iParam1) // Position - 0x7317 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_273(int iParam0, BOOL bParam1) // Position - 0x734A Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_269(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_274(int iParam0, BOOL bParam1) // Position - 0x73A2 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_275(int iParam0, int iParam1) // Position - 0x73CB Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

void func_276(int iParam0) // Position - 0x73F3 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_299(iParam0))
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

BOOL func_277(Any* panParam0, int iParam1, int iParam2) // Position - 0x74A6 Hash - 0x8AC008A3 ^0x375BADC3
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::CLEAR_BIT(&panParam0->[num], offset);
	return isBitSet;
}

void func_278(int iParam0) // Position - 0x74D8 Hash - 0x42868A8 ^0x3D52297C
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_279(int iParam0) // Position - 0x74EA Hash - 0xA1D29AFD ^0xABA18533
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_280(BOOL bParam0) // Position - 0x74FF Hash - 0xA1D29AFD ^0x8B9D4F17
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_281(int iParam0) // Position - 0x7514 Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_282() // Position - 0x7542 Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_283(BOOL bParam0) // Position - 0x7575 Hash - 0xEBD3AD20 ^0x6E10961F
{
	if (func_300(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_284(Any* panParam0, int iParam1, int iParam2) // Position - 0x759C Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::SET_BIT(&panParam0->[num], offset);
	return !isBitSet;
}

Vector3 func_285(int iParam0) // Position - 0x75CF Hash - 0xAC89079C ^0xF0D7C0AA
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

int func_286(Entity eParam0, Ped pedParam1, int iParam2) // Position - 0x762B Hash - 0x175892DC ^0xF10F49E5
{
	var entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	return func_301(eParam0, entityCoords, iParam2);
}

BOOL func_287(Player plParam0, Entity eParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x764B Hash - 0x7F4DC569 ^0x37AB3F2C
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

	if (!func_302(entityCoords, entityCoords2, pvParam2, pfParam3))
		return true;

	return false;
}

BOOL func_288(var uParam0, int iParam1) // Position - 0x770E Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_45(uParam0, iParam1))
	{
		func_5(uParam0);
		return true;
	}

	return false;
}

BOOL func_289(Hash hParam0) // Position - 0x772C Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

BOOL func_290(Hash hParam0, Hash hParam1) // Position - 0x7744 Hash - 0x86D562BB ^0xB258F193
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

void func_291(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x788D Hash - 0x7EFAC478 ^0x4E4217E0
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_249(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_292(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x7A63 Hash - 0x8E6DB586 ^0xC3CF8308
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
	
		if (func_303(&anParam0->[i /*6*/]))
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
				anParam0->[i /*6*/] = { func_68() };
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

int func_293() // Position - 0x7B7A Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_304(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_294(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x7B97 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_133(hParam0, 0))
		return 0;

	if (!bParam7 && func_197(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_202(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_198(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_198(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_295(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x7C16 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_198(false);
	*panParam1 = { func_202(hParam0, func_252(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_296(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x7C5B Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_297(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x7C8E Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_198(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

void func_298(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7CC8 Hash - 0xBC161045 ^0xD3B33F74
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

	func_305(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

BOOL func_299(int iParam0) // Position - 0x7DA4 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_269(iParam0, 2);
}

BOOL func_300(BOOL bParam0) // Position - 0x7DB3 Hash - 0x695C3191 ^0x86E70E17
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

int func_301(Entity eParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x7DC9 Hash - 0x2AE5C8B1 ^0x9995651A
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
	value = func_306(entityForwardVector, unk5);

	if (MISC::ABSF(value) > iParam4)
		if (value > 0f)
			return 0;
		else
			return 1;

	if (func_307(entityCoords, entityCoords + entityForwardVector, uParam1))
		return 3;

	return 2;
}

BOOL func_302(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, Vector3* pvParam6, float* pfParam7) // Position - 0x7E58 Hash - 0xF122548E ^0x207DA323
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
			*pfParam7 = func_308(vector2, vector, 1);
		else
			*pfParam7 = func_308(vector, vector2, 1);
	
		return true;
	}

	return false;
}

BOOL func_303(Any* panParam0) // Position - 0x7EE2 Hash - 0x7865E948 ^0x92258F24
{
	if (!func_309(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

int func_304(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7EFE Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_310(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_198(bParam1), hParam0, bParam3);
}

void func_305(int iParam0) // Position - 0x7F31 Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_311(&(iParam0->f_4));
	return;
}

float func_306(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x7F54 Hash - 0x4C6A3038 ^0xA855205
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

BOOL func_307(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x7FBB Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

float func_308(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x7FE4 Hash - 0xAEC23BEE ^0x1C179E88
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

BOOL func_309(Any* panParam0) // Position - 0x804A Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_310(Hash hParam0) // Position - 0x8080 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_311(var uParam0) // Position - 0x808E Hash - 0x58FD8C3D ^0x7E71AD66
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

