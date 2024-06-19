#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 256;
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
	var uLocal_22 = 1048576000;
	var uLocal_23 = 1048576000;
	var uLocal_24 = 1193033728;
	var uLocal_25 = 1092616192;
	var uLocal_26 = 1065353216;
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
	var uLocal_37 = 0;
	int iLocal_38 = 0;
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
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 1097859072;
	var uLocal_60 = 1000;
	var uLocal_61 = 1067450368;
	var uLocal_62 = 5000;
	var uLocal_63 = 42;
	var uLocal_64 = 1103626240;
	var uLocal_65 = 1077936128;
	var uLocal_66 = 1106247680;
	var uLocal_67 = 1103101952;
	var uLocal_68 = 1097859072;
	var uLocal_69 = 1103626240;
	var uLocal_70 = 0;
	Ped pedLocal_71 = 0;
	var uLocal_72 = 10;
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
	Ped pedLocal_83 = 0;
	var uLocal_84 = 1;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	BOOL bLocal_87 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xD68D7862 ^0x2245B29F
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (true)
	{
		if (func_2())
			func_3(3);
	
		switch (iLocal_3)
		{
			case 0:
				iLocal_38 = func_4(Global_1425351.f_18);
				func_5(&uLocal_42);
			
				if (!func_6(iLocal_38) || _IS_NULL_VECTOR(func_7(Global_1425351.f_18)))
				{
					func_3(3);
				}
				else
				{
					func_9(&uLocal_39);
					func_3(1);
				}
				break;
		
			case 1:
				if (func_10(&uLocal_39, 5f))
				{
					if (func_11())
					{
						func_12(&uLocal_39);
						func_3(2);
					}
				}
				break;
		
			case 2:
				if (func_13())
					func_3(3);
				break;
		
			case 3:
				func_1();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0xCD Hash - 0xDB8EFBAD ^0xDB8EFBAD
{
	if (func_14(pedLocal_71, pedLocal_83))
		func_15(pedLocal_83, true, true);

	func_16(false);

	if (func_6(iLocal_38) && func_17(iLocal_38, false))
		func_18(iLocal_38, false, true, false, false);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83))
		func_19(&pedLocal_83);

	func_20();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x123 Hash - 0x9BE537FE ^0xB05566BA
{
	if (func_21() != Global_1425351.f_18)
		if (iLocal_3 < 2)
			return true;
		else if (!func_22(pedLocal_71, 100f, false))
			return true;

	return false;
}

void func_3(int iParam0) // Position - 0x15A Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_3 = iParam0;
	return;
}

int func_4(eStackSize essParam0) // Position - 0x166 Hash - 0x46C3AD69 ^0x46C3AD69
{
	switch (essParam0)
	{
		case 105:
			return 82;
	
		default:
		
	}

	return -1;
}

void func_5(var uParam0) // Position - 0x182 Hash - 0xD2F4094 ^0xD2F4094
{
	func_23(uParam0, false);
	func_24(uParam0, false);
	func_25(uParam0, true);
	func_26(uParam0, true);
	func_27(uParam0, false);
	func_28(uParam0, true);
	func_29(uParam0, true, true, true);
	return;
}

BOOL func_6(int iParam0) // Position - 0x1BD Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

Vector3 func_7(eStackSize essParam0) // Position - 0x1D4 Hash - 0x72DB1375 ^0x72DB1375
{
	switch (essParam0)
	{
		case 105:
			return 1300.0249f, -1319.0314f, 75.5864f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1FF Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_9(var uParam0) // Position - 0x229 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_30(uParam0, 0f);
	return;
}

BOOL func_10(var uParam0, float fParam1) // Position - 0x238 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_31(uParam0))
		return false;

	if (func_32(uParam0) > fParam1)
		return true;

	return false;
}

BOOL func_11() // Position - 0x25F Hash - 0xD7CF60C7 ^0xD52EA24C
{
	if (func_6(iLocal_38))
	{
		if (func_33(iLocal_38, false))
		{
			pedLocal_71 = func_34(iLocal_38, false, false, false, true, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_71))
				return true;
			else
				return false;
		}
	}

	return true;
}

void func_12(var uParam0) // Position - 0x29C Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_13() // Position - 0x2B2 Hash - 0x1667212E ^0x6933C5BB
{
	var taskSequenceId;

	func_35();

	switch (iLocal_4)
	{
		case 0:
			iLocal_86 = func_36();
		
			if (func_37(iLocal_86))
			{
				if (func_38(iLocal_86, Global_1425351.f_18))
				{
					func_16(true);
					func_39(1);
				}
				else
				{
					func_40(iLocal_86);
				}
			}
			else
			{
				func_39(7);
			}
			break;
	
		case 1:
			if (func_37(iLocal_86))
			{
				if (func_41())
				{
					PED::SET_PED_RESET_FLAG(pedLocal_71, 49, true);
					TASK::CLEAR_PED_TASKS(pedLocal_71, true, false);
					func_42();
					func_39(2);
				}
				else
				{
					func_40(iLocal_86);
					func_39(0);
				}
			}
			break;
	
		case 2:
			ENTITY::_0xC3ABCFBC7D74AFA5(pedLocal_83, 7, true);
			PED::SET_PED_RESET_FLAG(pedLocal_71, 49, true);
		
			if (func_43(&uLocal_5, 106))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_71, true, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83) && func_44(pedLocal_71, pedLocal_83, true, true) < 50f && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(pedLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					TASK::TASK_GO_TO_ENTITY(0, pedLocal_83, 20000, 1056964608, 1f, 1073741824, 0);
					TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, pedLocal_83);
					func_45(pedLocal_71, &taskSequenceId, 0, 0, true, true);
					func_39(3);
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83))
						func_19(&pedLocal_83);
				
					func_39(0);
				}
			}
			break;
	
		case 3:
			ENTITY::_0xC3ABCFBC7D74AFA5(pedLocal_83, 7, true);
			PED::SET_PED_RESET_FLAG(pedLocal_71, 49, true);
		
			if (func_14(pedLocal_71, pedLocal_83))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_71, true, false);
				func_46();
				func_39(4);
			}
			break;
	
		case 4:
			PED::SET_PED_RESET_FLAG(pedLocal_71, 49, true);
		
			if (func_43(&uLocal_5, 106))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(pedLocal_71, pedLocal_83, func_7(Global_1425351.f_18), 1f, 1);
				func_39(5);
			}
			break;
	
		case 5:
			PED::SET_PED_RESET_FLAG(pedLocal_71, 49, true);
		
			if (!func_14(pedLocal_71, pedLocal_83))
			{
				func_19(&pedLocal_83);
				func_39(0);
			}
			break;
	
		case 6:
			break;
	
		case 7:
			return true;
	}

	return false;
}

BOOL func_14(Ped pedParam0, Ped pedParam1) // Position - 0x497 Hash - 0xF5CF6AEA ^0x2F940AE8
{
	int carriableEntityState;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (PED::_GET_CARRIER_AS_PED(pedParam1) != pedParam0)
		return false;

	carriableEntityState = ENTITY::GET_CARRIABLE_ENTITY_STATE(pedParam1);

	if (carriableEntityState == 5)
		return true;

	if (carriableEntityState == 7)
		return true;

	return false;
}

void func_15(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4D9 Hash - 0xC4F231CE ^0xB86F5EAB
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			ENTITY::DETACH_ENTITY(pedParam0, bParam1, bParam2);

	return;
}

void func_16(BOOL bParam0) // Position - 0x4FE Hash - 0x288A9A ^0x13FBE14E
{
	PED::SET_PED_CONFIG_FLAG(pedLocal_71, 123, !bParam0);
	PED::SET_PED_CONFIG_FLAG(pedLocal_71, 374, !bParam0);
	return;
}

BOOL func_17(int iParam0, BOOL bParam1) // Position - 0x51D Hash - 0x956894C4 ^0x956894C4
{
	if (func_47() != -1)
		return false;

	if (!func_6(iParam0))
		return false;

	if (!func_48(iParam0) && bParam1)
		return false;

	return func_49(iParam0, 1);
}

void func_18(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x55B Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_6(iParam0))
		return;

	if (!func_49(iParam0, true))
		return;

	if (!func_49(iParam0, 2))
		return;

	if (!bParam4 && !func_48(iParam0) && func_50(iParam0))
		return;

	func_51(iParam0, 1);
	func_52(iParam0);

	if (func_54(func_53(iParam0)))
	{
		persChar = func_55(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return;
	
		PERSCHAR::_0xBB68908CD11AEBDC(persChar);
		PERSCHAR::_0xB65E7F733956CF25(persChar);
	
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
	
		perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
	
		if (!PED::IS_PED_INJURED(perscharPedIndex))
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex, 171, false);
	
		if (bParam1)
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		func_51(iParam0, 16);
	}

	if (func_49(iParam0, 128) && !bParam3)
		func_56(iParam0, false);

	return;
}

void func_19(var uParam0) // Position - 0x647 Hash - 0x335265BB ^0x1DDC3B5C
{
	DECORATOR::DECOR_REMOVE(*uParam0, func_57());
	PED::SET_PED_CONFIG_FLAG(*uParam0, 186, true);
	return;
}

void func_20() // Position - 0x665 Hash - 0x54676713 ^0x98DBA862
{
	Global_1425351.f_17 = 0;
	return;
}

eStackSize func_21() // Position - 0x674 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_22(Ped pedParam0, float fParam1, BOOL bParam2) // Position - 0x682 Hash - 0xEC134423 ^0x61E394A8
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0) && func_58(Global_35, pedParam0, false, fParam1, bParam2))
		return true;

	return false;
}

void func_23(var uParam0, BOOL bParam1) // Position - 0x6AB Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_59(&(uParam0->f_1), 16384);
	else
		func_60(&(uParam0->f_1), 16384);

	return;
}

void func_24(var uParam0, BOOL bParam1) // Position - 0x6D1 Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_59(&(uParam0->f_1), 2048);
	else
		func_60(&(uParam0->f_1), 2048);

	return;
}

void func_25(var uParam0, BOOL bParam1) // Position - 0x6F7 Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_59(&(uParam0->f_1), 256);
	else
		func_60(&(uParam0->f_1), 256);

	return;
}

void func_26(var uParam0, BOOL bParam1) // Position - 0x71D Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_60(uParam0, 16);
	}
	else
	{
		func_59(uParam0, 67108864);
		func_59(uParam0, 16);
	}

	return;
}

void func_27(var uParam0, BOOL bParam1) // Position - 0x748 Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_59(&(uParam0->f_1), 128);
	else
		func_60(&(uParam0->f_1), 128);

	return;
}

void func_28(var uParam0, BOOL bParam1) // Position - 0x76C Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_60(uParam0, 256);
	else
		func_59(uParam0, 256);

	return;
}

void func_29(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x78E Hash - 0x3145AA70 ^0xBCD5B3EB
{
	if (!bParam1)
		func_60(uParam0, 268435456);
	else
		func_59(uParam0, 268435456);

	if (!bParam2)
		func_60(uParam0, 1073741824);
	else
		func_59(uParam0, 1073741824);

	if (!bParam3)
		func_60(uParam0, 536870912);
	else
		func_59(uParam0, 536870912);

	return;
}

void func_30(var uParam0, float fParam1) // Position - 0x7F3 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_61() - fParam1;
	func_62(uParam0, 1);
	func_63(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_31(var uParam0) // Position - 0x819 Hash - 0x5001E582 ^0x5001E582
{
	return func_64(*uParam0, 1);
}

float func_32(var uParam0) // Position - 0x829 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_31(uParam0))
		return uParam0->f_1;

	if (func_65(uParam0))
		return uParam0->f_2;

	return func_61() - uParam0->f_1;
}

BOOL func_33(int iParam0, BOOL bParam1) // Position - 0x85E Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_47() != -1)
		return false;

	if (!func_6(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_55(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_66(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_55(iParam0));
}

Ped func_34(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x8B6 Hash - 0x816A3A36 ^0x24211010
{
	Ped ped;
	PersChar persChar;

	if (!func_67(iParam0, true))
		return 0;

	if (func_54(func_53(iParam0)))
	{
		persChar = func_55(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return 0;
	
		if (bParam1)
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
				PERSCHAR::_REVIVE_PERSCHAR(persChar);
	
		PERSCHAR::_0x6759BEE6762E140B(persChar);
		ped = PERSCHAR::_FORCE_SPAWN_PERSCHAR(persChar, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(ped))
			return 0;
	}

	if (bParam4 && !func_48(iParam0) && !ENTITY::IS_ENTITY_DEAD(ped))
	{
		PED::SET_PED_CONFIG_FLAG(ped, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	}

	func_68(iParam0, true);
	func_69(iParam0);

	if (bParam3)
		func_68(iParam0, 16);

	!bParam2;
	return ped;
}

void func_35() // Position - 0x973 Hash - 0xC252FDFC ^0x61BCC108
{
	var taskSequenceId;

	if (!bLocal_87 && func_70(pedLocal_71, 0, &uLocal_42, &uLocal_70, 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	
		if (func_14(pedLocal_71, pedLocal_83))
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, pedLocal_83, ENTITY::GET_ENTITY_COORDS(pedLocal_71, true, false), 2f, 3);
	
		TASK::TASK_FLEE_PED(0, Global_35, 4, 0, -1082130432, -1, 0);
		func_45(pedLocal_71, &taskSequenceId, 0, 0, true, true);
		bLocal_87 = true;
		func_39(6);
	}

	return;
}

int func_36() // Position - 0x9DA Hash - 0xC7BF7ADB ^0xC7BF7ADB
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (!_IS_NULL_VECTOR(Global_1425351[i /*3*/]))
			return i;
	}

	return -1;
}

BOOL func_37(int iParam0) // Position - 0xA0C Hash - 0x7C32D0C8 ^0x7C32D0C8
{
	if (iParam0 < 0 || iParam0 >= 5)
		return false;

	return true;
}

BOOL func_38(int iParam0, eStackSize essParam1) // Position - 0xA2A Hash - 0xBD5106A8 ^0x2A3E8EE6
{
	return VOLUME::IS_POINT_IN_VOLUME(func_71(essParam1), Global_1425351[iParam0 /*3*/]);
}

void func_39(int iParam0) // Position - 0xA46 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_4 = iParam0;
	return;
}

void func_40(int iParam0) // Position - 0xA52 Hash - 0x5E2E0CBD ^0x5E2E0CBD
{
	Global_1425351[iParam0 /*3*/] = { 0f, 0f, 0f };
	return;
}

BOOL func_41() // Position - 0xA67 Hash - 0x736DEC4C ^0x53F442E5
{
	int num;
	BOOL num2;
	int i;

	num = func_72(&uLocal_72, &uLocal_84, 10, Global_1425351[iLocal_86 /*3*/], 15f, false, false, false, -1, false, false, -1082130432, false, false);

	if (num <= 0)
		return false;

	for (i = 0; i < num; i = i + 1)
	{
		if (!PED::IS_PED_A_PLAYER(uLocal_72[i]))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_72[i]))
			{
				if (DECORATOR::DECOR_EXIST_ON(uLocal_72[i], func_57()) && DECORATOR::DECOR_GET_BOOL(uLocal_72[i], func_57()))
				{
					num2 = 1;
					pedLocal_83 = uLocal_72[i];
					break;
				}
			}
			else
			{
				func_73(uLocal_72[i], true);
				PED::SET_PED_CONFIG_FLAG(uLocal_72[i], 288, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_72[i]);
			}
		}
	}

	return num2;
}

void func_42() // Position - 0xB2C Hash - 0xA81B8F4B ^0x93DD94BC
{
	func_74(&uLocal_5);
	uLocal_5.f_1 = pedLocal_71;
	uLocal_5.f_8 = { Global_1425351[iLocal_86 /*3*/] };
	uLocal_5.f_17 = 15f;
	uLocal_5.f_18 = 15f;
	uLocal_5.f_21 = 1f;
	func_60(&(uLocal_5.f_23), 128);
	func_43(&uLocal_5, 106);
	return;
}

BOOL func_43(var uParam0, int iParam1) // Position - 0xB7A Hash - 0xB032CB60 ^0x73941DE5
{
	int num;
	int taskFlag;
	Vehicle vehiclePedIsIn;
	int num2;
	int taskFlag2;
	Ped firstEntityPedIsCarrying;
	Ped lastMount;
	int num3;
	int flags;
	var taskSequenceId;
	BOOL flag;
	int num4;
	int num5;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !func_75(uParam0->f_23, 4))
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);

	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				func_9(&(uParam0->f_5));
			
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
				
					if (func_75(uParam0->f_23, 2048))
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
				}
			
				if (uParam0->f_24 == 0)
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			
				if (!func_75(uParam0->f_23, 4))
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
			
				if (!func_75(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
				
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && func_76(uParam0->f_1))
					{
						func_77(uParam0->f_1);
						num = func_78(uParam0->f_1, uParam0->f_8, 1f);
					
						switch (num)
						{
							case 2:
								taskFlag = 262144;
								break;
						
							case 3:
								taskFlag = 131072;
								break;
						}
					
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, taskFlag, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(vehiclePedIsIn, 5f, -1, false);
						num2 = func_78(uParam0->f_1, uParam0->f_8, 1f);
					
						switch (num2)
						{
							case 2:
								taskFlag2 = 262144;
								break;
						
							case 3:
								taskFlag2 = 131072;
								break;
						}
					
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, taskFlag2);
					}
					else
					{
						func_60(&(uParam0->f_23), 2);
					}
				}
			
				if (_IS_NULL_VECTOR(uParam0->f_14))
					uParam0->f_14 = { uParam0->f_8 };
			
				func_79(uParam0, 1, iParam1);
			}
			else
			{
				func_79(uParam0, 6, iParam1);
			}
			break;
	
		case 1:
			if (func_80(uParam0, iParam1))
			{
				func_9(&(uParam0->f_5));
			
				if (!func_81(uParam0, iParam1))
					func_82();
			
				func_79(uParam0, 2, iParam1);
			}
			break;
	
		case 2:
			if (func_81(uParam0, iParam1))
			{
				func_9(&(uParam0->f_5));
			
				if (!func_75(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, func_75(uParam0->f_23, 512), 0, 0);
				}
			
				func_79(uParam0, 3, iParam1);
			}
			break;
	
		case 3:
			if (func_83(uParam0, iParam1))
			{
				func_9(&(uParam0->f_5));
			
				if (!PED::IS_PED_CARRYING_SOMETHING(uParam0->f_1))
					func_60(&(uParam0->f_23), 256);
			
				if (func_75(uParam0->f_23, 4096) && !PED::IS_PED_CARRYING_SOMETHING(uParam0->f_1))
				{
					func_60(&(uParam0->f_23), 256);
					lastMount = PED::_GET_LAST_MOUNT(uParam0->f_1);
				
					if (func_44(lastMount, uParam0->f_1, true, true) < 5f)
					{
						firstEntityPedIsCarrying = func_84(lastMount);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, firstEntityPedIsCarrying);
					}
				}
				else if (!func_75(uParam0->f_23, 256))
				{
					firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, firstEntityPedIsCarrying, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
			
				func_79(uParam0, 4, iParam1);
			}
			break;
	
		case 4:
			if (func_85(uParam0, iParam1))
			{
				func_9(&(uParam0->f_5));
			
				if (func_75(uParam0->f_23, 8192))
				{
					if (func_75(uParam0->f_23, 1024))
						num3 = 64;
					else
						num3 = 2;
				
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, false, num3, 20000, -1082130432);
				}
				else
				{
					!_IS_NULL_VECTOR(uParam0->f_11);
					flags = 0;
				
					if (!func_75(uParam0->f_23, 1024))
						flags = flags | 1;
				
					TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
				
					if (!_IS_NULL_VECTOR(uParam0->f_11))
						if (func_75(uParam0->f_23, 16))
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, !func_75(uParam0->f_23, 128) ? 20000 : -1, uParam0->f_19, uParam0->f_17, 0);
						else
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, !func_75(uParam0->f_23, 128) ? 20000 : -1, uParam0->f_17, flags, uParam0->f_19);
				
					if (func_75(uParam0->f_23, 16))
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, !func_75(uParam0->f_23, 128) ? 20000 : -1, uParam0->f_19, uParam0->f_17, 0);
					else
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, !func_75(uParam0->f_23, 128) ? 20000 : -1, uParam0->f_17, flags, uParam0->f_19);
				
					if (func_75(uParam0->f_23, 1))
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
				
					func_45(uParam0->f_1, &taskSequenceId, 0, 0, true, true);
				}
			
				func_79(uParam0, 5, iParam1);
			}
			break;
	
		case 5:
			if (func_75(uParam0->f_23, 8192))
				if (ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(uParam0->f_25, &(uParam0->f_30)))
					flag = true;
			else if (!func_75(uParam0->f_23, 1))
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
		
			if (!func_75(uParam0->f_23, 128) && func_87(&(uParam0->f_5), 15f))
				flag = true;
		
			if (!func_75(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, SCRIPT_TASK_PERFORM_SEQUENCE, true) == 8)
					flag = true;
			
				if (_IS_NULL_VECTOR(uParam0->f_11) || !func_88(uParam0->f_1, SCRIPT_TASK_PERFORM_SEQUENCE) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
					num4 = 1;
			
				if (func_89(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_75(uParam0->f_23, 8)) && !func_75(uParam0->f_23, 64) || MISC::ABSF(func_90(uParam0->f_1, uParam0->f_8)) < uParam0->f_22)
					num5 = 1;
			}
		
			if (num4 && num5 || flag)
			{
				if (func_75(uParam0->f_23, 32))
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
			
				func_12(&(uParam0->f_5));
				func_79(uParam0, 6, iParam1);
				return true;
			}
			break;
	
		case 6:
			return true;
	}

	return false;
}

float func_44(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x11AF Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

void func_45(Ped pedParam0, int* piParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x11F7 Hash - 0xAB850FC2 ^0x2509CA9B
{
	TASK::CLOSE_SEQUENCE_TASK(*piParam1);

	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam2 > 0f)
		{
			if (iParam3 < iParam2)
				iParam3 = iParam2;
		
			TASK::_TASK_PERFORM_SEQUENCE_2(pedParam0, *piParam1, iParam2, iParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, *piParam1);
		}
	}

	if (bParam4)
		TASK::CLEAR_SEQUENCE_TASK(piParam1);

	return;
}

void func_46() // Position - 0x1250 Hash - 0x73A57E5F ^0xB306F854
{
	func_74(&uLocal_5);
	uLocal_5.f_1 = pedLocal_71;
	uLocal_5.f_8 = { func_7(Global_1425351.f_18) };
	uLocal_5.f_18 = 5f;
	uLocal_5.f_21 = 1f;
	func_60(&(uLocal_5.f_23), 128);
	func_43(&uLocal_5, 106);
	return;
}

BOOL func_47() // Position - 0x1291 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_48(int iParam0) // Position - 0x129F Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_6(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

BOOL func_49(int iParam0, BOOL bParam1) // Position - 0x12C4 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_47() != -1)
		return false;

	if (!func_6(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_50(int iParam0) // Position - 0x12F2 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_6(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_51(int iParam0, BOOL bParam1) // Position - 0x1316 Hash - 0x452DF11A ^0x452DF11A
{
	if (func_47() != -1)
		return;

	if (!func_6(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_52(int iParam0) // Position - 0x134F Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_6(iParam0))
		return;

	ped = func_66(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

Hash func_53(int iParam0) // Position - 0x1393 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_6(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_54(Hash hParam0) // Position - 0x13B1 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

PersChar func_55(int iParam0) // Position - 0x13BD Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_6(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_56(int iParam0, BOOL bParam1) // Position - 0x13DD Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_6(iParam0))
		return 0;

	if (!func_49(iParam0, 2))
		return 0;

	if (func_53(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_55(iParam0)))
		return 1;

	if (func_49(iParam0, true) && !bParam1)
	{
		func_68(iParam0, 128);
		return 1;
	}

	func_51(iParam0, 129);
	func_52(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_55(iParam0));
	func_91(iParam0, 0);
	return 1;
}

char* func_57() // Position - 0x1460 Hash - 0xBAF7C719 ^0xBAF7C719
{
	return "bPickupThisCorpse";
}

BOOL func_58(Ped pedParam0, Ped pedParam1, BOOL bParam2, float fParam3, BOOL bParam4) // Position - 0x146A Hash - 0x438C0E9B ^0x528609E0
{
	if (bParam2)
		if (!func_92(pedParam0, pedParam1, 0f))
			return false;

	if (!func_93(pedParam0, pedParam1, fParam3, true))
		return false;

	if (bParam4 && ENTITY::IS_ENTITY_A_PED(pedParam1))
		return PED::CAN_PED_SEE_PED_CACHED(pedParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), false) == 1;

	return PED::CAN_PED_SEE_ENTITY(pedParam0, pedParam1, bParam2, false) == 1;
}

void func_59(var uParam0, int iParam1) // Position - 0x14CD Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_60(var uParam0, int iParam1) // Position - 0x14E2 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

float func_61() // Position - 0x14F3 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_62(var uParam0, int iParam1) // Position - 0x1525 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_63(var uParam0, int iParam1) // Position - 0x1536 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_64(int iParam0, int iParam1) // Position - 0x154B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_65(var uParam0) // Position - 0x155A Hash - 0x39705408 ^0x39705408
{
	return func_64(*uParam0, 2);
}

Ped func_66(int iParam0) // Position - 0x156A Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_55(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

BOOL func_67(int iParam0, BOOL bParam1) // Position - 0x1598 Hash - 0x5C4302E7 ^0x5C4302E7
{
	if (!func_6(iParam0))
		return false;

	if (func_49(iParam0, true) && !func_48(iParam0) && func_50(iParam0))
		return false;

	if (!func_49(iParam0, 2))
		return false;

	if (!bParam1)
		if (!func_33(iParam0, false))
			return false;

	return true;
}

void func_68(int iParam0, BOOL bParam1) // Position - 0x15F8 Hash - 0x61515A20 ^0x61515A20
{
	if (func_47() != -1)
		return;

	if (!func_6(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_69(int iParam0) // Position - 0x1629 Hash - 0x5A948764 ^0xFC1342AE
{
	if (!func_6(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

BOOL func_70(Ped pedParam0, Entity eParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x164C Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > uParam2->f_5)
		func_94(uParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			uParam2->f_12 = iParam5;
		else
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(uParam2->f_1 & 128 != 0))
		{
			if (func_95(pedParam0, uParam2))
			{
				*uParam3 = 128;
				func_96(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8 != 0))
			{
				if (func_97(pedParam0, uParam2))
				{
					*uParam3 = 8;
					func_96(pedParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_98(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 8;
					func_96(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 32 != 0)
			{
				if (func_99(pedParam0, uParam2))
				{
					*uParam3 = 64;
					func_96(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_100(PLAYER::PLAYER_ID(), false, true, uParam2->f_1 & 524288 == 0))
		{
			if (!(uParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_96(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_101(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4 != 0))
				{
					if (func_102(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 4;
						func_96(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			
				if (!(uParam2->f_1 & 256 != 0))
				{
					if (func_103(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 256;
						func_96(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 16 != 0))
		{
			if (uParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_104(Global_35, pedParam0, uParam2, false))
				{
					*uParam3 = 16;
					func_96(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_104(Global_35, pedParam0, uParam2, true))
			{
				*uParam3 = 16;
				func_96(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_105(pedParam0, uParam2))
				{
					*uParam3 = 32;
					func_96(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_106(&pedParam0, uParam2))
				{
					*uParam3 = 4096;
					func_96(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2 != 0))
			{
				if (func_107(uParam2, 4000))
				{
					if (func_108(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, false, *uParam2 & 256 != 0) && func_109(uParam2, pedParam0) && func_110(uParam2, pedParam0))
					{
						*uParam3 = 2;
						func_96(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 2 != 0))
		{
			if (uParam2->f_12 < 4f)
			{
				if (func_108(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, true, *uParam2 & 256 != 0) && func_109(uParam2, pedParam0) && func_110(uParam2, pedParam0))
				{
					*uParam3 = 2;
					func_96(pedParam0, uParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_111(pedParam0, Global_1935630.f_41))
							{
								func_112();
								*uParam3 = 2;
								func_96(pedParam0, uParam2, *uParam3);
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
						if (func_111(pedParam0, Global_1935630.f_41))
						{
							func_112();
							*uParam3 = 2;
							func_96(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (uParam2->f_12 < 10f)
			{
				if (func_113(uParam2, pedParam0) || uParam2->f_9 > 0 && func_114() - uParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_112();
						*uParam3 = 2;
						func_96(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_115())
					{
						if (func_111(pedParam0, Global_1935630.f_42))
						{
							func_112();
							*uParam3 = 2;
							func_96(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 1024 != 0))
		{
			if (func_116(uParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_96(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & 2048 != 0))
			{
				if (func_117(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 2048;
					func_96(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_118(pedParam0, uParam2))
					{
						*uParam3 = 8192;
						func_96(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*uParam2 & 64 != 0)
			{
				if (func_119(pedParam0, uParam2))
				{
					*uParam3 = 32768;
					func_96(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_120(uParam2, 4000))
				{
					if (func_121(&pedParam0, uParam2))
					{
						*uParam3 = 512;
						func_96(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_122(pedParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_96(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_123(uParam2, pedParam0))
			{
				*uParam3 = 1;
				func_96(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

Volume func_71(eStackSize essParam0) // Position - 0x1C75 Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_124(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_3;
}

int func_72(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, Hash hParam10, BOOL bParam11, BOOL bParam12, int iParam13, BOOL bParam14, BOOL bParam15) // Position - 0x1C95 Hash - 0x1CD7D100 ^0xAEA25770
{
	Volume volume;
	int num;

	if (iParam13 <= 0f)
		volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	else
		volume = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, iParam13);

	num = func_125(uParam0, uParam1, iParam2, volume, bParam7, bParam8, bParam9, hParam10, bParam11, bParam12, bParam14, bParam15);
	func_126(volume);
	return num;
}

void func_73(Ped pedParam0, BOOL bParam1) // Position - 0x1CF3 Hash - 0xB65F767E ^0x8BE8F46F
{
	PED::SET_PED_CONFIG_FLAG(pedParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 178, bParam1);
	return;
}

void func_74(var uParam0) // Position - 0x1D10 Hash - 0xFC30D01A ^0xE539B84F
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_12(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_30), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_26), "", 32);
	return;
}

BOOL func_75(int iParam0, int iParam1) // Position - 0x1D9F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_76(Ped pedParam0) // Position - 0x1DAE Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

void func_77(Ped pedParam0) // Position - 0x1DC9 Hash - 0xA4A93D3E ^0x77210186
{
	Ped mount;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (!PED::IS_PED_ON_MOUNT(pedParam0))
		return;

	mount = PED::GET_MOUNT(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return;

	TASK::CLEAR_PED_TASKS(mount, true, false);
	TASK::TASK_STAND_STILL(mount, -1);
	return;
}

int func_78(Entity eParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x1E3F Hash - 0x2AE5C8B1 ^0x9995651A
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
	value = func_127(entityForwardVector, unk5);

	if (MISC::ABSF(value) > fParam4)
		if (value > 0f)
			return 0;
		else
			return 1;

	if (func_128(entityCoords, entityCoords + entityForwardVector, uParam1))
		return 3;

	return 2;
}

void func_79(var uParam0, int iParam1, int iParam2) // Position - 0x1ECE Hash - 0x962C2257 ^0x962C2257
{
	*uParam0 = iParam1;
	return;
}

BOOL func_80(var uParam0, int iParam1) // Position - 0x1EDB Hash - 0x6CFA8DD1 ^0xA9167A2A
{
	if (func_87(&(uParam0->f_5), 5f))
		return true;

	if (func_75(uParam0->f_23, 2))
		return true;

	if (!func_76(uParam0->f_1) && !func_88(uParam0->f_1, SCRIPT_TASK_DISMOUNT_ANIMAL) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true) && !func_88(uParam0->f_1, SCRIPT_TASK_LEAVE_ANY_VEHICLE))
		return true;

	return false;
}

BOOL func_81(var uParam0, int iParam1) // Position - 0x1F49 Hash - 0x65FCF8C8 ^0x7001F3EE
{
	var unk;

	if (func_87(&(uParam0->f_5), 4f))
		return true;

	if (!func_75(uParam0->f_23, 16384))
		return true;

	if (uParam0->f_1 != Global_35)
		return true;

	if (!func_129(&unk))
		return true;

	return false;
}

int func_82() // Position - 0x1F91 Hash - 0x68C03105 ^0x68C03105
{
	Hash hash;

	if (!func_130())
		return 0;

	if (!func_131(&hash))
		return 0;

	if (!func_132(hash))
		return 0;

	return func_133(hash, 0);
}

BOOL func_83(var uParam0, int iParam1) // Position - 0x1FC8 Hash - 0x8BBDECA2 ^0x5F7A844B
{
	int weaponHash;
	int weaponHash2;

	if (func_87(&(uParam0->f_5), 4f))
		return true;

	if (func_75(uParam0->f_23, 4))
		return true;

	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &weaponHash2, true, 1, false);

	if (func_75(uParam0->f_23, 512) || weaponHash == joaat("WEAPON_UNARMED") && weaponHash2 == joaat("WEAPON_UNARMED"))
		return true;

	return false;
}

Ped func_84(Ped pedParam0) // Position - 0x203A Hash - 0x55D81973 ^0x7B7A1446
{
	Ped ped;

	ped = func_134(pedParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return 0;

	if (PED::IS_PED_HOGTIED(ped))
		return ped;

	return 0;
}

BOOL func_85(var uParam0, int iParam1) // Position - 0x2066 Hash - 0x29AC59FE ^0x519C803A
{
	if (func_87(&(uParam0->f_5), 15f))
		return true;

	if (func_75(uParam0->f_23, 4096) && func_88(uParam0->f_1, 1245594896))
		return false;

	if (func_75(uParam0->f_23, 256))
		return true;

	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, -208384378, true) == 8)
		return true;

	return false;
}

var func_86(BOOL bParam0, var uParam1, var uParam2) // Position - 0x20D0 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_87(var uParam0, float fParam1) // Position - 0x20E7 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_10(uParam0, fParam1))
	{
		func_12(uParam0);
		return true;
	}

	return false;
}

BOOL func_88(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x2105 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_89(Entity eParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7) // Position - 0x215E Hash - 0x995BD73A ^0x723FD09
{
	float num;

	num = func_135(ENTITY::GET_ENTITY_HEADING(eParam0));
	fParam4 = func_135(fParam4);

	if (ENTITY::IS_ENTITY_AT_COORD(eParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF(num - fParam4) <= fParam6)
		return true;

	return false;
}

float func_90(Entity eParam0, var uParam1, var uParam2, var uParam3) // Position - 0x21A6 Hash - 0x1BA12134 ^0x898B2CCA
{
	var entityCoords;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0f;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, true, false) };
	return entityCoords.f_2 - uParam1.f_2;
}

void func_91(int iParam0, int iParam1) // Position - 0x21D1 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_6(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
	return;
}

BOOL func_92(Ped pedParam0, Ped pedParam1, float fParam2) // Position - 0x21F2 Hash - 0x5CE04B94 ^0xEC2FA7B8
{
	return func_136(pedParam0, ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), fParam2);
}

BOOL func_93(Ped pedParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x220A Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

void func_94(var uParam0, BOOL bParam1, int iParam2) // Position - 0x2252 Hash - 0x37D64B11 ^0xE7060A9E
{
	func_137(iParam2);

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
		uParam0->f_13 = func_138(0);

	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
				if (!(*uParam0 & 33554432 != 0))
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_60(uParam0, 33554432);
					else if (!(*uParam0 & 8192 != 0))
						if (func_139(true))
							func_60(uParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_139(true) || *uParam0 & 8192 != 0)
					func_59(uParam0, 33554432);
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
			if (func_140(uParam0))
				uParam0->f_15 = func_114();
		}
		else if (uParam0->f_15 > 0)
		{
			if (func_114() - uParam0->f_15 > 500)
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

	func_141(uParam0);
	return;
}

BOOL func_95(Ped pedParam0, var uParam1) // Position - 0x241D Hash - 0x3A755B4E ^0xDBAC23C2
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
		
			if (!func_142(pedParam0, uParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_143(pedParam0, pedIndexFromEntityIndex) <= func_144(uParam1))
				return true;
			break;
	}

	return false;
}

void func_96(Ped pedParam0, var uParam1, int iParam2) // Position - 0x24F4 Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		uParam1->f_10 = pedParam0;

	if (func_145(iParam2, 1, 1, 1, 0))
		func_60(uParam1, 2048);

	uParam1->f_16 = iParam2;
	func_146(uParam1, true);
	func_147();
	return;
}

BOOL func_97(Ped pedParam0, var uParam1) // Position - 0x2531 Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_148(pedParam0, !(*uParam1 & 268435456 != 0), !(*uParam1 & 536870912 != 0), !(*uParam1 & 1073741824 != 0), 0, false))
		{
			if (uParam1->f_12 < 5f)
				num = 95f;
			else if (uParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_149(uParam1);
		
			if (func_150(uParam1, pedParam0, num, num2))
			{
				if (uParam1->f_2 == 0)
					uParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - uParam1->f_2;
				num4 = func_151(uParam1);
			
				if (uParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_146(uParam1, true);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_146(uParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_98(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x2618 Hash - 0x899101A2 ^0xBCA80002
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

	if (func_152(eParam1, !(*uParam2 & 268435456 != 0), !(*uParam2 & 536870912 != 0), !(*uParam2 & 1073741824 != 0), 0))
	{
		if (uParam2->f_12 < 5f)
			num = 95f;
		else if (uParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_149(uParam2);
	
		if (func_150(uParam2, pedParam0, num, num2))
		{
			if (uParam2->f_2 == 0)
				uParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2 > func_151(uParam2))
				{
					func_146(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_99(Ped pedParam0, var uParam1) // Position - 0x26EE Hash - 0xC62373A5 ^0xD1ADE674
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

	if (func_142(pedParam0, uParam1, pedIndexFromEntityIndex))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3 > func_151(uParam1))
		{
			customDistance = func_149(uParam1);
		
			if (uParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_100(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x27F7 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_153(bParam1, bParam2, bParam3);

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

BOOL func_101(var uParam0, int iParam1) // Position - 0x292C Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_114();
	num2 = num - uParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_102(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x2963 Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_154(uParam2);
		
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
			if (func_110(uParam2, pedParam1))
			{
				func_146(uParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_103(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x2A6A Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (uParam2->f_12 < (float)func_155(uParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_110(uParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_146(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_104(Ped pedParam0, Ped pedParam1, var uParam2, BOOL bParam3) // Position - 0x2AD5 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_156(uParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_146(uParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, uParam2->f_27))
				{
					func_146(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords, false, false);
				
					if (func_157(pedParam1, entityCoords, outCoords))
					{
						func_146(uParam2, true);
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
					func_146(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords2, false, false);
				
					if (func_157(pedParam1, entityCoords, outCoords2))
					{
						func_146(uParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_105(Ped pedParam0, var uParam1) // Position - 0x2C1D Hash - 0xEB9C0B04 ^0x4A60CD30
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
		if (!func_142(pedParam0, uParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_158(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_159(Global_1935630.f_34[i]))
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
		
			if (func_160(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_161(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_162(uParam1, pedParam0, num, i))
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

BOOL func_106(var uParam0, var uParam1) // Position - 0x2DF9 Hash - 0xF223CED2 ^0xA472D0A4
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

BOOL func_107(var uParam0, int iParam1) // Position - 0x2E71 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_114();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_108(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2EA0 Hash - 0x8119700D ^0x42D5A76B
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
		if (func_163(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_164(entity2, pedParam0))
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

int func_109(var uParam0, Ped pedParam1) // Position - 0x3026 Hash - 0x2A1B4F69 ^0x12CCC150
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

BOOL func_110(var uParam0, Ped pedParam1) // Position - 0x3073 Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_165(uParam0))
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

BOOL func_111(Ped pedParam0, Ped pedParam1) // Position - 0x3110 Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_44(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_112() // Position - 0x315D Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_113(var uParam0, Ped pedParam1) // Position - 0x3165 Hash - 0x6BE02E92 ^0x188EF1A2
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
	
		if (func_166(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			uParam0->f_9 = func_114();
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
						if (func_167(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								uParam0->f_9 = func_114();
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

int func_114() // Position - 0x3226 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_115() // Position - 0x3244 Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_114() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_116(var uParam0, Ped pedParam1) // Position - 0x3291 Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_144(uParam0);

	if (uParam0->f_12 > func_168(uParam0) && uParam0->f_12 > num)
		return false;

	num3 = func_169(pedParam1);
	num2 = func_170(uParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (uParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, uParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, uParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, uParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_117(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x33AD Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (uParam2->f_12 > 4f)
		return false;

	flag = *uParam2 & 256 != 0;
	flag2 = *uParam2 & 524288 != 0;
	flag3 = *uParam2 & 128 != 0;
	return func_171(pedParam0, eParam1, flag, flag3, uParam2->f_12, flag2);
}

BOOL func_118(Ped pedParam0, var uParam1) // Position - 0x33F5 Hash - 0x23BB3370 ^0x36BD6CCF
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
		if (func_172(pedParam0, uParam1, true))
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
					if (!func_173(uParam1, pedParam0))
						if (func_167(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_119(Ped pedParam0, var uParam1) // Position - 0x364E Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_174(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_120(var uParam0, int iParam1) // Position - 0x3687 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_114();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_121(var uParam0, var uParam1) // Position - 0x36B6 Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_122(Ped pedParam0, var uParam1) // Position - 0x36CA Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (uParam1->f_4 == 0)
		uParam1->f_4 = func_114();
	else if (func_114() - uParam1->f_4 > func_175(uParam1))
		return func_176(pedParam0, uParam1, false, -1082130432);

	return false;
}

BOOL func_123(var uParam0, Ped pedParam1) // Position - 0x3717 Hash - 0xFBF48841 ^0xFDAE97F0
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

BOOL func_124(eStackSize essParam0) // Position - 0x376A Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

int func_125(var uParam0, var uParam1, int iParam2, Volume volParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, Hash hParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11) // Position - 0x3780 Hash - 0x27EEDACD ^0xD08EAB77
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
				if (func_177(ped, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(ped, "bIgnoreThisPed"))
				{
					if (!func_178(ped, uParam1))
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

void func_126(Volume volParam0) // Position - 0x3894 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

float func_127(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x38AB Hash - 0x4C6A3038 ^0xA855205
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

BOOL func_128(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x3912 Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

BOOL func_129(var uParam0) // Position - 0x393B Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_179(81053684))
		if (func_131(uParam0))
			return true;
	else if (func_180(-525676072, uParam0))
		if (func_131(uParam0))
			return true;

	return false;
}

BOOL func_130() // Position - 0x3980 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

BOOL func_131(var uParam0) // Position - 0x398F Hash - 0x313F44CF ^0x6235E18A
{
	if (func_180(81053684, uParam0))
		return true;

	if (func_180(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_132(Hash hParam0) // Position - 0x39BC Hash - 0x2759F6FA ^0x4BDB091E
{
	if (func_181())
		return false;

	if (!func_182(hParam0, 0))
		return false;

	if (!func_183(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

int func_133(Hash hParam0, int iParam1) // Position - 0x39F3 Hash - 0x4FF8311F ^0x88E4CE75
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_184(hParam0);

	if (func_185(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_129(&hash))
			if (flag)
				interactionAnimHash = func_186();
			else
				interactionAnimHash = func_187();
		else if (func_188(iParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_189();
		else
			interactionAnimHash = func_190();
	else if (func_131(&hash))
		if (func_185(hash, -1303648999))
			interactionAnimHash = func_186();
		else
			interactionAnimHash = func_187();
	else if (flag)
		interactionAnimHash = func_189();
	else
		interactionAnimHash = func_190();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

Ped func_134(Ped pedParam0) // Position - 0x3AC6 Hash - 0xE591CF9E ^0x5F1C7BF1
{
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(pedParam0);

	if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
	{
		if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
			return pedIndexFromEntityIndex;
		}
	}

	return 0;
}

float func_135(float fParam0) // Position - 0x3B11 Hash - 0xAEA651F2 ^0xAEA651F2
{
	float num;

	num = fParam0;

	if (fParam0 < 0f)
		num = num + 360f;
	else if (fParam0 >= 360f)
		num = num - 360f;

	return num;
}

BOOL func_136(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x3B48 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

void func_137(int iParam0) // Position - 0x3B89 Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_191();

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
			func_192(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_138(int iParam0) // Position - 0x3CF5 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_139(BOOL bParam0) // Position - 0x3D08 Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_193(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_140(var uParam0) // Position - 0x3D22 Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_47() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_194(uParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_194(uParam0);

	if (ped == 0)
		return false;

	if (func_170(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	uParam0->f_14 = ped;
	return true;
}

void func_141(var uParam0) // Position - 0x3DBA Hash - 0x256C27DD ^0x256C27DD
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
		func_195(uParam0);

	return;
}

BOOL func_142(Ped pedParam0, var uParam1, Ped pedParam2) // Position - 0x3DE1 Hash - 0x7FBD27D8 ^0x4C0BB7C4
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
		num2 = func_170(pedParam2);
	else
		num2 = func_169(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_170(pedParam0);
	else
		num = func_169(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_75(*uParam1, 8388608))
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

float func_143(Ped pedParam0, Ped pedParam1) // Position - 0x3EDA Hash - 0xF9959663 ^0xF9959663
{
	return func_44(pedParam0, pedParam1, true, true);
}

float func_144(var uParam0) // Position - 0x3EEC Hash - 0xD73B9827 ^0xDE12990D
{
	return uParam0->f_26;
}

BOOL func_145(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3EF8 Hash - 0x5A9E12AC ^0x5A9E12AC
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

void func_146(var uParam0, BOOL bParam1) // Position - 0x3F5D Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_60(uParam0, 134217728);
	else
		func_59(uParam0, 134217728);

	return;
}

void func_147() // Position - 0x3F83 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_148(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x3F97 Hash - 0x7ED53456 ^0xD7A590DD
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
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_44(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_196(ped, 0)))
			if (func_197(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_149(var uParam0) // Position - 0x40FA Hash - 0xD73B9827 ^0x8CE07B2A
{
	return uParam0->f_17;
}

BOOL func_150(var uParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x4106 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (uParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_75(*uParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*uParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_151(var uParam0) // Position - 0x4167 Hash - 0xD73B9827 ^0x372EC0B
{
	return uParam0->f_18;
}

BOOL func_152(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x4173 Hash - 0x838BDEFB ^0xB1D5C032
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_196(ped, 0)))
			if (func_198(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_153(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4235 Hash - 0xC9655EC3 ^0x88C9AFE1
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

float func_154(var uParam0) // Position - 0x42D3 Hash - 0xD73B9827 ^0x9F7F0764
{
	return uParam0->f_23;
}

int func_155(var uParam0) // Position - 0x42DF Hash - 0xD73B9827 ^0x303D0BA3
{
	return uParam0->f_21;
}

int func_156(var uParam0) // Position - 0x42EB Hash - 0xB202FF2A ^0xFD1BAB10
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

BOOL func_157(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x4428 Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_136(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_158(Ped pedParam0) // Position - 0x446B Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_199(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_159(Ped pedParam0) // Position - 0x44D1 Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_160(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x44FD Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_200(pedParam1))
			return false;

	num = 5f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_161(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4544 Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_200(pedParam1))
			return false;

	num = 10f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_162(var uParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x458F Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_200(pedParam1))
		return false;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_163(Ped pedParam0, var uParam1) // Position - 0x4608 Hash - 0x64FF5121 ^0xD9ABCD76
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

BOOL func_164(Ped pedParam0, Ped pedParam1) // Position - 0x4655 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_201(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_165(var uParam0) // Position - 0x469D Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*uParam0 & 2 != 0);
}

BOOL func_166(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x46AD Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_167(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_167(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x46D9 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_168(var uParam0) // Position - 0x4701 Hash - 0xD73B9827 ^0x4905FA06
{
	return uParam0->f_24;
}

int func_169(Ped pedParam0) // Position - 0x470D Hash - 0xEF5F0FBB ^0xA0EE0634
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_170(Ped pedParam0) // Position - 0x4761 Hash - 0xFC3FCA7F ^0xAAF9D270
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_171(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x47CB Hash - 0x89708384 ^0x6760E23F
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
			if (func_163(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_44(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_44(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_172(Ped pedParam0, var uParam1, BOOL bParam2) // Position - 0x493B Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_193(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_173(uParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_173(uParam1, ped2))
					if (func_167(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_173(var uParam0, Ped pedParam1) // Position - 0x4A29 Hash - 0xB0F12416 ^0x48C2EC4E
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

BOOL func_174(int iParam0) // Position - 0x4A9D Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_202())
		return false;

	return func_203(Global_1347702[58 /*49*/].f_15, true);
}

int func_175(var uParam0) // Position - 0x4ABF Hash - 0xD73B9827 ^0xAC2E3C80
{
	return uParam0->f_20;
}

BOOL func_176(Ped pedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x4ACB Hash - 0x9E17B061 ^0x19F2F061
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

BOOL func_177(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x4B46 Hash - 0x866F5694 ^0x9EEAB7E1
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

	if (bParam3 && func_204(pedParam0))
		return false;

	if (bParam4)
		if (PED::IS_PED_ON_MOUNT(pedParam0))
			return false;

	if (bParam2)
		if (func_205(pedParam0, false) != -1)
			return false;

	return true;
}

BOOL func_178(Ped pedParam0, var uParam1) // Position - 0x4BD2 Hash - 0xDC7D3FF5 ^0xDC7D3FF5
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (pedParam0 == uParam1->[i])
			return true;
	}

	return false;
}

Hash func_179(Hash hParam0) // Position - 0x4BFE Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_207(func_206(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_180(Hash hParam0, var uParam1) // Position - 0x4C2D Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_207(func_206(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_208(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

BOOL func_181() // Position - 0x4CA4 Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1946054.f_2793)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1946054.f_2791) < 1250)
		return true;

	if (func_209())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return true;

	return false;
}

BOOL func_182(Hash hParam0, int iParam1) // Position - 0x4CEE Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_183(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x4D08 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_182(hParam0, 0))
		return false;

	num = func_210(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_211(hParam0, 1))
			return false;

	return func_212(hParam0, false, bParam2) >= iParam1;
}

BOOL func_184(Hash hParam0) // Position - 0x4D72 Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_131(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_185(Hash hParam0, Hash hParam1) // Position - 0x4D9C Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_186() // Position - 0x4DCD Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_213())
	{
		case 0:
			num = joaat("mask_off_left_hand");
			break;
	
		case 1:
			num = joaat("mask_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_187() // Position - 0x4E24 Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_213())
	{
		case 0:
			num = joaat("bandana_off_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_off_left_hand_rifle");
			break;
	}

	return num;
}

BOOL func_188(int iParam0, int iParam1) // Position - 0x4E7B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_189() // Position - 0x4E8A Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_213())
	{
		case 0:
			num = joaat("mask_on_left_hand");
			break;
	
		case 1:
			num = joaat("mask_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_on_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_190() // Position - 0x4EE1 Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_213())
	{
		case 0:
			num = joaat("bandana_on_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_on_left_hand_rifle");
			break;
	}

	return num;
}

BOOL func_191() // Position - 0x4F38 Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_214())
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

void func_192(int iParam0, int iParam1) // Position - 0x4F8E Hash - 0x787BB1AC ^0x11099E69
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

BOOL func_193(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5036 Hash - 0x2A9340EF ^0xAD765E32
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

Ped func_194(var uParam0) // Position - 0x50FD Hash - 0xF229F24F ^0x47381422
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

void func_195(var uParam0) // Position - 0x51A5 Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_59(uParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_60(uParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

Hash func_196(Ped pedParam0, int iParam1) // Position - 0x520A Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_197(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x5221 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_198(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_198(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x524F Hash - 0xBF2250D5 ^0x34592C3E
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

BOOL func_199(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5299 Hash - 0x1D055735 ^0x5D260F19
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

BOOL func_200(Ped pedParam0) // Position - 0x5312 Hash - 0xF2F988FE ^0xA63CD631
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

int func_201(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x53FA Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_202() // Position - 0x543C Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_47() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_203(int iParam0, BOOL bParam1) // Position - 0x5461 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_215(iParam0))
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

BOOL func_204(Ped pedParam0) // Position - 0x5492 Hash - 0x66CDA584 ^0x67C9C44C
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_GROUP_MEMBER(pedParam0, func_216(), true))
		return 1;

	return 0;
}

int func_205(Ped pedParam0, BOOL bParam1) // Position - 0x54BB Hash - 0x46B9578F ^0x31193522
{
	return func_217(pedParam0, Global_1894899.f_2, bParam1);
}

int func_206(Hash hParam0) // Position - 0x54D1 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_218(outSlotId);
}

int func_207(int iParam0, int iParam1) // Position - 0x54F4 Hash - 0x9D981F95 ^0x9D981F95
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
	
		case -1505978566:
			return 22;
	
		case -1489346253:
			return 38;
	
		case -1364808185:
			return 19;
	
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
	
		case -1197751823:
			return 20;
	
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
	
		case -1130865351:
			return 31;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
	
		case -893163968:
			return 17;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
	
		case -450913544:
			return 18;
	
		case -426430150:
			return 29;
	
		case -358215195:
			return 39;
	
		case -338487716:
			return 11;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
	
		case 304805134:
			return 21;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
	
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
	
		case 788010710:
			return 34;
	
		case 1108822547:
			return 10;
	
		case 1145151482:
			return 23;
	
		case 1250092473:
			return 16;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
	
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
	
		case 1600962399:
			return 13;
	
		case 1672288269:
			return 15;
	
		case 1742327865:
			return 12;
	
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
	
		case 1788623170:
			return 30;
	
		case 1849504272:
			return 14;
	
		case 1900541263:
			return 37;
	
		case 1958421083:
			return 35;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

Hash func_208(Hash hParam0) // Position - 0x56C5 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_182(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_209() // Position - 0x56F0 Hash - 0xFF29F962 ^0xFF29F962
{
	int num;

	num = Global_1946054.f_529[9];
	num = num + Global_1946054.f_529[4];
	num = num + Global_1946054.f_529[10];
	num = num + Global_1946054.f_529[1];
	num = num + Global_1946054.f_529[2];
	num = num + Global_1946054.f_529[6];
	num = num + Global_1946054.f_529[29];
	num = num + Global_1946054.f_529[26];
	num = num + Global_1946054.f_529[18];
	num = num + Global_1946054.f_529[19];
	return num > 0;
}

int func_210(Hash hParam0) // Position - 0x5795 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_182(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_211(Hash hParam0, int iParam1) // Position - 0x57C0 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_182(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_219(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_220("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_221(&unk, i, num, num2))
			{
			}
			else if (!func_222(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_223(num);
				return true;
			}
		}
	
		func_223(num);
	}

	return false;
}

int func_212(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5867 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_182(hParam0, 0))
		return 0;

	num = func_210(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_219(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_224(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_225(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_213() // Position - 0x58E9 Hash - 0x6AC5469B ^0xEA730EC
{
	Hash weaponHash;
	int weaponHash2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		return 1;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash2, true, 1, false);

	if (weaponHash2 == joaat("WEAPON_UNARMED"))
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_226(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_226(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

BOOL func_214() // Position - 0x59DF Hash - 0x50F36DAB ^0xF55A49EF
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

int func_215(int iParam0) // Position - 0x5A10 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_227(iParam0))
		return -1;

	return func_228(iParam0);
}

int func_216() // Position - 0x5A2C Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_217(Ped pedParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x5A3C Hash - 0x7B4C7353 ^0x7B4C7353
{
	var unk;
	var unk2;

	if (essParam1 == -1)
		return -1;

	if (!func_229(essParam1, &unk, &unk2, false, false))
		return -1;

	return func_230(pedParam0, unk, unk2, bParam2);
}

int func_218(var uParam0) // Position - 0x5A6E Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_231(i, 1);
	}

	return -358215195;
}

Hash func_219(Hash hParam0, int iParam1) // Position - 0x5AA9 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_182(hParam0, 0))
		return 0;

	num = func_210(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_185(hParam0, 1399091007))
	{
		func_232(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_220(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x5B23 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_225(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_221(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5B4A Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_222(Hash hParam0) // Position - 0x5B85 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_223(int iParam0) // Position - 0x5BA0 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_224(Hash hParam0, BOOL bParam1) // Position - 0x5BC1 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_233(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_235(&unk, func_234(false));

	if (!func_236(&unk, &num, &num2, false))
		return 0;

	func_223(num);
	return num2;
}

int func_225(BOOL bParam0) // Position - 0x5C1F Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_47() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_226(Hash hParam0) // Position - 0x5C60 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

BOOL func_227(int iParam0) // Position - 0x5C6E Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_228(int iParam0) // Position - 0x5CA1 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_237(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_229(eStackSize essParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5CE2 Hash - 0xCBEA69A ^0xCBEA69A
{
	BOOL flag;

	flag = func_47() != -1;

	switch (essParam0)
	{
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
		
			if (flag)
				*uParam2 = 142;
			break;
	
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 22:
			if (bParam4)
				*uParam1 = 715;
			else
				*uParam1 = 715;
		
			*uParam2 = 723;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 26:
			*uParam1 = 472;
		
			if (bParam3)
				*uParam2 = 500;
			else
				*uParam2 = 502;
		
			if (flag)
				*uParam2 = 472;
			break;
	
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 38:
			*uParam1 = 508;
			*uParam2 = &func_9;
		
			if (flag)
				*uParam2 = 509;
			break;
	
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
		
			if (flag)
				*uParam2 = 380;
			break;
	
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
		
			if (flag)
				*uParam2 = 566;
			break;
	
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 69:
			*uParam1 = 589;
		
			if (bParam3)
				*uParam2 = 598;
			else
				*uParam2 = 612;
		
			if (flag)
				*uParam2 = 590;
			break;
	
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 76:
			*uParam1 = 0;
		
			if (bParam3)
				*uParam2 = 47;
			else
				*uParam2 = 63;
		
			if (flag)
				*uParam2 = 5;
			break;
	
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
	
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
		
			if (flag)
				*uParam2 = 384;
			break;
	
		case 82:
			*uParam1 = 659;
		
			if (bParam3)
				*uParam2 = 673;
			else
				*uParam2 = &func_13;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
		
			if (flag)
				*uParam2 = 443;
			break;
	
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 105:
			*uParam1 = 69;
		
			if (bParam3)
				*uParam2 = 127;
			else
				*uParam2 = 136;
		
			if (flag)
				*uParam2 = 72;
			break;
	
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
		
			if (flag)
				*uParam2 = 375;
			break;
	
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case MICRO:
			*uParam1 = 834;
			*uParam2 = 857;
		
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

int func_230(Ped pedParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x63A2 Hash - 0x32945A99 ^0xFCA9036B
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
	
		if (func_53(num) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_55(num)))
			if (func_55(num) == perscharIndexFromPedIndex)
				return num;
	}

	return -1;
}

int func_231(int iParam0, int iParam1) // Position - 0x641C Hash - 0xE1D12727 ^0xA46110B3
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
	
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
	
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
	
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
	
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
	
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
	
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
	
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
	
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
	
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
	
		case 10:
			return 1108822547;
	
		case 11:
			return -338487716;
	
		case 12:
			return 1742327865;
	
		case 13:
			return 1600962399;
	
		case 14:
			return 1849504272;
	
		case 15:
			return 1672288269;
	
		case 16:
			return 1250092473;
	
		case 17:
			return -893163968;
	
		case 18:
			return -450913544;
	
		case 19:
			return -1364808185;
	
		case 20:
			return -1197751823;
	
		case 21:
			return 304805134;
	
		case 22:
			return -1505978566;
	
		case 23:
			return 1145151482;
	
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
	
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
	
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
	
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
	
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
	
		case 29:
			return -426430150;
	
		case 30:
			return 1788623170;
	
		case 31:
			return -1130865351;
	
		case 32:
			return -1884748965;
	
		case 33:
			return -1586649372;
	
		case 34:
			return 788010710;
	
		case 35:
			return 1958421083;
	
		case 36:
			return -1944638739;
	
		case 37:
			return 1900541263;
	
		case 38:
			return -1489346253;
	
		case 39:
			return -358215195;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_232(Hash hParam0, var uParam1, var uParam2) // Position - 0x666B Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_233(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x6877 Hash - 0x84700F53 ^0xB9E7AA96
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

	return hash;
}

struct<4> func_234(BOOL bParam0) // Position - 0x6949 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_225(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_239(923904168, func_238(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_239(923904168, func_238(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_239(923904168, func_238(bParam0), -740156546, false);
}

void func_235(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x69DE Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_236(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x69F9 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_225(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_237(int iParam0) // Position - 0x6A1E Hash - 0x6EC15CF9 ^0xE613EBE0
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

struct<4> func_238(BOOL bParam0) // Position - 0x6A9F Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_239(joaat("character"), func_240(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_239(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x6ABB Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_182(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_225(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_240() // Position - 0x6AEC Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

