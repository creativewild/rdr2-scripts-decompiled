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
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = -1;
	var uLocal_25 = 0;
	var uLocal_26 = -1;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = -1;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 1073741824;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 1;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 2;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 570;
	var uLocal_48 = 1065353216;
	var uLocal_49 = -1082130432;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 2;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 570;
	var uLocal_65 = 1065353216;
	var uLocal_66 = -1082130432;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
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
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iScriptParam_0 = 0;
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

void main() // Position - 0x0 Hash - 0x36B2008 ^0xEEB96D44
{
	BOOL flag;
	int num;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = iScriptParam_0;
	iLocal_14.f_1 = iScriptParam_0.f_1;
	iLocal_14.f_4 = iScriptParam_0.f_2;
	iLocal_14.f_2 = func_1(iLocal_14.f_4, iLocal_14.f_1);
	iLocal_14.f_7 = Global_40.f_9829[iScriptParam_0 /*4*/].f_3;
	iLocal_14.f_71 = 0;

	if (func_2())
	{
		PED::_RESERVE_AMBIENT_PEDS(1);
	}
	else
	{
		iLocal_14.f_3 = func_3(iLocal_14.f_2);
		iLocal_14.f_71 = 1;
	}

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_4();

	func_5(&(iLocal_14.f_67), false);

	while (true)
	{
		num = func_6(&iLocal_14);
	
		if (func_7(&iLocal_14, num))
			func_4();
	
		if (!iLocal_14.f_71)
		{
			if (PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				iLocal_14.f_3 = func_8(iLocal_14.f_2, false, false, false, true, true);
				iLocal_14.f_71 = 1;
			}
		}
	
		if (iLocal_14.f_71)
		{
			if (func_9(&(iLocal_14.f_67)) >= 1f)
			{
				if (func_10(iLocal_14.f_3, iLocal_14))
					func_11(&iLocal_14, 2);
			
				flag = true;
				func_12(&(iLocal_14.f_67));
			}
		
			switch (num)
			{
				case 0:
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_14.f_3, true, true);
				
					if (func_13(iLocal_14, 128))
					{
						if (iLocal_14.f_7 != 2)
						{
						}
						else
						{
							PED::REMOVE_TAG_FROM_META_PED(iLocal_14.f_3, joaat("eyewear"), 1);
						}
					
						func_14(iLocal_14.f_3, 1, true);
					}
				
					if (func_15(iLocal_14.f_7) > 0)
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_14.f_3, 130, true);
						func_16(iLocal_14, 4);
						func_17(iLocal_14, 8);
					}
				
					func_11(&iLocal_14, 1);
					break;
			
				case 1:
					func_18(&iLocal_14);
					PED::SET_PED_RESET_FLAG(iLocal_14.f_3, 184, true);
					break;
			
				case 2:
					if (!flag)
						func_10(iLocal_14.f_3, iLocal_14);
					break;
			
				default:
					func_4();
					break;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

int func_1(int iParam0, int iParam1) // Position - 0x1AD Hash - 0x25D84CF8 ^0x366468F
{
	int num;

	num = -1;

	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					num = 281;
					break;
			
				case 1:
					num = 282;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					num = 499;
					break;
			
				case 1:
					num = 500;
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					num = 511;
					break;
			
				case 1:
					num = 512;
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					num = 25;
					break;
			
				case 1:
					num = 26;
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 0:
					num = 430;
					break;
			
				case 1:
					num = 431;
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 0:
					num = 127;
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 0:
					num = 364;
					break;
			
				case 1:
					num = 363;
					break;
			
				case 2:
					num = 362;
					break;
			
				case 3:
					num = 361;
					break;
			
				case 4:
					num = 360;
					break;
			
				case 5:
					num = 359;
					break;
			}
			break;
	}

	num == -1;
	return num;
}

BOOL func_2() // Position - 0x32A Hash - 0x8835C565 ^0x148D7E93
{
	if (iLocal_14.f_7 == 11 || iLocal_14.f_7 == 13 || iLocal_14.f_7 == 12 || iLocal_14.f_7 == 9)
		return true;

	return false;
}

Ped func_3(int iParam0) // Position - 0x368 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_19(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

void func_4() // Position - 0x396 Hash - 0x32ED63DE ^0x554F854B
{
	if (func_2() && iLocal_14.f_71)
		func_20(iLocal_14.f_2, false, true, false, false);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_5(var uParam0, BOOL bParam1) // Position - 0x3BE Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_21(uParam0))
		func_12(uParam0);

	return;
}

int func_6(var uParam0) // Position - 0x3DE Hash - 0xD73B9827 ^0x6B2CFE8C
{
	return uParam0->f_5;
}

BOOL func_7(var uParam0, int iParam1) // Position - 0x3EA Hash - 0xF0AFC71 ^0xF0B36545
{
	if (iParam1 > 0)
	{
		if (uParam0->f_4 != func_22())
		{
			AUDIO::STOP_PED_SPEAKING(Global_35, false);
			return true;
		}
	}

	if (uParam0->f_71 && PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
		return true;
	}

	return false;
}

Ped func_8(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x430 Hash - 0x816A3A36 ^0x24211010
{
	Ped ped;
	PersChar persChar;

	if (!func_23(iParam0, true))
		return 0;

	if (func_25(func_24(iParam0)))
	{
		persChar = func_19(iParam0);
	
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

	if (bParam4 && !func_26(iParam0) && !ENTITY::IS_ENTITY_DEAD(ped))
	{
		PED::SET_PED_CONFIG_FLAG(ped, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	}

	func_27(iParam0, true);
	func_28(iParam0);

	if (bParam3)
		func_27(iParam0, 16);

	!bParam2;
	return ped;
}

float func_9(var uParam0) // Position - 0x4ED Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_21(uParam0))
		return uParam0->f_1;

	if (func_29(uParam0))
		return uParam0->f_2;

	return func_30() - uParam0->f_1;
}

BOOL func_10(Ped pedParam0, int iParam1) // Position - 0x522 Hash - 0x24DEFFFD ^0x5BB9D04D
{
	Hash hash;

	hash = Global_1396116.f_98[iParam1 /*2*/];

	if (func_31(hash))
	{
		if (!func_32(pedParam0, 518218985))
			TASK::TASK_SMART_FLEE_COORD(pedParam0, func_33(hash), 100f, -1, 0, 1077936128);
	
		return true;
	}

	return false;
}

void func_11(var uParam0, int iParam1) // Position - 0x56B Hash - 0x62FFBD90 ^0xE99B5AAB
{
	if (uParam0->f_5 != iParam1)
		uParam0->f_5 = iParam1;

	return;
}

void func_12(var uParam0) // Position - 0x582 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_34(uParam0, 0f);
	return;
}

BOOL func_13(int iParam0, int iParam1) // Position - 0x591 Hash - 0x8D310C3C ^0xC693F2C8
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
		return false;

	return func_35(Global_40.f_9829[iParam0 /*4*/].f_2, iParam1);
}

void func_14(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x5C5 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

int func_15(int iParam0) // Position - 0x5F5 Hash - 0xD85F9884 ^0xD85F9884
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 3;
	
		case 5:
			return 3;
	
		case 6:
			return 2;
	
		case 7:
			return 3;
	
		case 8:
			return 3;
	
		case 9:
			return 3;
	
		case 10:
			return 3;
	
		case 11:
			return 3;
	
		case 12:
			return 3;
	
		case 13:
			return 3;
	
		case 14:
			return 3;
	
		case 15:
			return 3;
	
		default:
		
	}

	return 0;
}

void func_16(int iParam0, int iParam1) // Position - 0x69C Hash - 0x5EA34FE1 ^0xDEE8F37E
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
		return;

	func_36(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
	return;
}

void func_17(int iParam0, int iParam1) // Position - 0x6CF Hash - 0x5EA34FE1 ^0xDEE8F37E
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
		return;

	func_37(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
	return;
}

void func_18(var uParam0) // Position - 0x702 Hash - 0xE9931574 ^0x7CAF4EEB
{
	if (func_13(*uParam0, 4))
	{
		if (!func_13(*uParam0, 8))
		{
			if (func_38(uParam0->f_3, 1))
			{
				func_39(uParam0);
				func_16(*uParam0, 8);
			}
		}
		else if (func_38(uParam0->f_3, 0))
		{
			func_39(uParam0);
		}
		else
		{
			func_40(uParam0);
		}
	}
	else if (!func_13(*uParam0, 1))
	{
		if (func_38(uParam0->f_3, 1))
			if (func_41(uParam0, -1))
				func_16(*uParam0, 1);
	}
	else if (!func_38(uParam0->f_3, 1))
	{
		func_17(*uParam0, 1);
	}

	return;
}

PersChar func_19(int iParam0) // Position - 0x7A0 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_42(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_20(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7C0 Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_42(iParam0))
		return;

	if (!func_43(iParam0, 1))
		return;

	if (!func_43(iParam0, 2))
		return;

	if (!bParam4 && !func_26(iParam0) && func_44(iParam0))
		return;

	func_45(iParam0, 1);
	func_46(iParam0);

	if (func_25(func_24(iParam0)))
	{
		persChar = func_19(iParam0);
	
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
	
		func_45(iParam0, 16);
	}

	if (func_43(iParam0, 128) && !bParam3)
		func_47(iParam0, false);

	return;
}

BOOL func_21(var uParam0) // Position - 0x8AC Hash - 0x5001E582 ^0x5001E582
{
	return func_48(*uParam0, 1);
}

eStackSize func_22() // Position - 0x8BC Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_23(int iParam0, BOOL bParam1) // Position - 0x8CA Hash - 0x5C4302E7 ^0x5C4302E7
{
	if (!func_42(iParam0))
		return false;

	if (func_43(iParam0, true) && !func_26(iParam0) && func_44(iParam0))
		return false;

	if (!func_43(iParam0, 2))
		return false;

	if (!bParam1)
		if (!func_49(iParam0, false))
			return false;

	return true;
}

Hash func_24(int iParam0) // Position - 0x92A Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_42(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_25(Hash hParam0) // Position - 0x948 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_26(int iParam0) // Position - 0x954 Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_42(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_27(int iParam0, BOOL bParam1) // Position - 0x979 Hash - 0x61515A20 ^0x61515A20
{
	if (func_50() != -1)
		return;

	if (!func_42(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_28(int iParam0) // Position - 0x9AA Hash - 0x5A948764 ^0xFC1342AE
{
	if (!func_42(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

BOOL func_29(var uParam0) // Position - 0x9CD Hash - 0x39705408 ^0x39705408
{
	return func_48(*uParam0, 2);
}

float func_30() // Position - 0x9DD Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_31(Hash hParam0) // Position - 0xA0F Hash - 0x783D8692 ^0xC2190628
{
	func_51(hParam0, false, false);

	if (func_52(hParam0))
		return !OBJECT::IS_DOOR_CLOSED(hParam0);

	return false;
}

BOOL func_32(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xA37 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

Vector3 func_33(Hash hParam0) // Position - 0xA60 Hash - 0x34D25890 ^0x7B9C5400
{
	if (ENTITY::DOES_ENTITY_EXIST(func_53(hParam0, 0)))
		return ENTITY::GET_ENTITY_COORDS(func_53(hParam0, 0), false, false);

	return 0f, 0f, 0f;
}

void func_34(var uParam0, float fParam1) // Position - 0xA89 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_30() - fParam1;
	func_54(uParam0, 1);
	func_55(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_35(int iParam0, int iParam1) // Position - 0xAAF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_36(int iParam0, int iParam1) // Position - 0xABE Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_37(int iParam0, int iParam1) // Position - 0xACF Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_38(Ped pedParam0, int iParam1) // Position - 0xAE4 Hash - 0xDD93B4F3 ^0x6AEE47CE
{
	float num;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(pedParam0) == Global_1935630.f_5)
		{
			if (iParam1 == 0)
				return true;
		
			num = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
		
			if (num < 4f)
				return true;
		}
	}

	return false;
}

void func_39(var uParam0) // Position - 0xB2E Hash - 0x7AB23D16 ^0xB6B36312
{
	var unk;
	var unk4;
	var unk7;
	var unk10;
	var unk13;
	var unk16;

	switch (uParam0->f_8)
	{
		case 0:
			if (func_56(uParam0))
			{
				if (!func_13(*uParam0, 16))
				{
					uParam0->f_65 = 0;
				}
				else if (!func_13(*uParam0, 32))
				{
					uParam0->f_65 = 1;
				}
				else if (!func_13(*uParam0, 64))
				{
					uParam0->f_65 = 2;
				}
				else
				{
					uParam0->f_8 = 8;
					return;
				}
			
				if (uParam0->f_65 < func_15(uParam0->f_7))
				{
					HUD::TEXT_BLOCK_REQUEST(func_57(uParam0->f_7, 1));
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 448, true);
					AUDIO::STOP_PED_SPEAKING(Global_35, true);
					uParam0->f_8 = 1;
				}
				else
				{
					uParam0->f_8 = 8;
				}
			}
			break;
	
		case 1:
			if (HUD::TEXT_BLOCK_IS_LOADED(func_57(uParam0->f_7, 1)))
			{
				unk = { func_58(uParam0->f_7, uParam0->f_65, 0) };
				func_59(&Global_1396116, uParam0->f_3, func_57(uParam0->f_7, 0), false);
			
				if (func_60())
					func_59(&Global_1396116, Global_35, "JOHN", false);
				else
					func_59(&Global_1396116, Global_35, "ARTHUR", false);
			
				if (func_61(uParam0->f_7, uParam0->f_65))
				{
					func_62(uParam0);
					uParam0->f_8 = 2;
				}
				else if (MISC::ARE_STRINGS_EQUAL(func_63(unk), ""))
				{
					uParam0->f_8 = 2;
				}
				else if (func_64(&Global_1396116, unk, false, -1, false, false))
				{
					func_62(uParam0);
					uParam0->f_8 = 2;
				}
			}
			break;
	
		case 2:
			if (!func_65(true))
			{
				func_66(&uParam0->f_30[0 /*17*/], "INTERACT_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, true, 0);
				func_66(&uParam0->f_30[1 /*17*/], "INTERACT_INSULT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, true, 0);
				uParam0->f_66 = -1;
				uParam0->f_8 = 3;
			}
			break;
	
		case 3:
			if (uParam0->f_66 == -1)
			{
				uParam0->f_66 = func_67(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
			
				if (uParam0->f_66 == 0)
				{
					func_68(&uParam0->f_30[0 /*17*/], false, false);
					func_68(&uParam0->f_30[1 /*17*/], false, false);
					func_67(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
					func_62(uParam0);
				}
				else if (uParam0->f_66 == 1)
				{
					func_68(&uParam0->f_30[0 /*17*/], false, false);
					func_68(&uParam0->f_30[1 /*17*/], false, false);
					func_67(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
					func_62(uParam0);
				}
			}
		
			if (uParam0->f_66 == 0)
				if (func_64(&Global_1396116, func_58(uParam0->f_7, uParam0->f_65, 1), false, -1, false, false))
					uParam0->f_8 = 4;
			else if (uParam0->f_66 == 1)
				if (func_64(&Global_1396116, func_58(uParam0->f_7, uParam0->f_65, 2), false, -1, false, false))
					uParam0->f_8 = 4;
			break;
	
		case 4:
			if (!func_65(true))
			{
				if (uParam0->f_66 == 0)
				{
					unk4 = { func_58(uParam0->f_7, uParam0->f_65, 3) };
				
					if (MISC::ARE_STRINGS_EQUAL(func_63(unk4), ""))
					{
						if (func_69(uParam0))
							uParam0->f_8 = 7;
						else
							uParam0->f_8 = 8;
					
						func_70(&(uParam0->f_3));
						func_71(&(uParam0->f_30), 0, false, true, false);
						uParam0->f_8 = 8;
					}
					else if (func_64(&Global_1396116, unk4, false, -1, false, false))
					{
						uParam0->f_8 = 5;
					}
				}
				else if (uParam0->f_66 == 1)
				{
					unk7 = { func_58(uParam0->f_7, uParam0->f_65, 5) };
				
					if (MISC::ARE_STRINGS_EQUAL(func_63(unk7), ""))
					{
						if (func_69(uParam0))
							uParam0->f_8 = 7;
						else
							uParam0->f_8 = 8;
					
						func_70(&(uParam0->f_3));
						func_71(&(uParam0->f_30), 0, false, true, false);
						uParam0->f_8 = 8;
					}
					else if (func_64(&Global_1396116, unk7, false, -1, false, false))
					{
						uParam0->f_8 = 5;
					}
				}
			}
			break;
	
		case 5:
			if (!func_65(true))
			{
				if (uParam0->f_66 == 0)
				{
					unk10 = { func_58(uParam0->f_7, uParam0->f_65, 4) };
				
					if (MISC::ARE_STRINGS_EQUAL(func_63(unk10), ""))
					{
						if (func_69(uParam0))
							uParam0->f_8 = 7;
						else
							uParam0->f_8 = 8;
					
						func_70(&(uParam0->f_3));
						func_71(&(uParam0->f_30), 0, false, true, false);
					}
					else if (func_64(&Global_1396116, unk10, false, -1, false, false))
					{
						uParam0->f_8 = 6;
					}
				}
				else if (uParam0->f_66 == 1)
				{
					unk13 = { func_58(uParam0->f_7, uParam0->f_65, 6) };
				
					if (MISC::ARE_STRINGS_EQUAL(func_63(unk13), ""))
					{
						if (func_69(uParam0))
							uParam0->f_8 = 7;
						else
							uParam0->f_8 = 8;
					
						func_70(&(uParam0->f_3));
						func_71(&(uParam0->f_30), 0, false, true, false);
					}
					else if (func_64(&Global_1396116, unk13, false, -1, false, false))
					{
						uParam0->f_8 = 6;
					}
				}
			}
			break;
	
		case 6:
			if (!func_65(true))
			{
				if (func_69(uParam0))
					uParam0->f_8 = 7;
				else
					uParam0->f_8 = 8;
			
				func_70(&(uParam0->f_3));
				func_71(&(uParam0->f_30), 0, false, true, false);
			}
			break;
	
		case 7:
			if (func_72(uParam0))
			{
				unk16 = { func_58(uParam0->f_7, uParam0->f_65, 7) };
			
				if (func_64(&Global_1396116, unk16, false, -1, false, false))
					uParam0->f_8 = 8;
			}
			break;
	
		case 8:
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 448, false);
			AUDIO::STOP_PED_SPEAKING(Global_35, false);
			break;
	}

	return;
}

void func_40(var uParam0) // Position - 0x1095 Hash - 0x47563C56 ^0xB40EBCD6
{
	if (uParam0->f_8 == 3)
	{
		func_70(&(uParam0->f_3));
		func_71(&(uParam0->f_30), 0, false, true, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 448, false);
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
	}

	return;
}

BOOL func_41(var uParam0, int iParam1) // Position - 0x10CD Hash - 0xA44555D5 ^0x8BF53EBB
{
	if (func_65(true))
		return false;

	switch (uParam0->f_7)
	{
		case 1:
			func_73(uParam0->f_3, "NPE_PRIS_GREET", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
			return true;
	}

	return false;
}

BOOL func_42(int iParam0) // Position - 0x110F Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

BOOL func_43(int iParam0, BOOL bParam1) // Position - 0x1126 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_50() != -1)
		return false;

	if (!func_42(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_44(int iParam0) // Position - 0x1154 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_42(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_45(int iParam0, BOOL bParam1) // Position - 0x1178 Hash - 0x452DF11A ^0x452DF11A
{
	if (func_50() != -1)
		return;

	if (!func_42(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_46(int iParam0) // Position - 0x11B1 Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_42(iParam0))
		return;

	ped = func_3(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

int func_47(int iParam0, BOOL bParam1) // Position - 0x11F5 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_42(iParam0))
		return 0;

	if (!func_43(iParam0, 2))
		return 0;

	if (func_24(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_19(iParam0)))
		return 1;

	if (func_43(iParam0, true) && !bParam1)
	{
		func_27(iParam0, 128);
		return 1;
	}

	func_45(iParam0, 129);
	func_46(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_19(iParam0));
	func_74(iParam0, 0);
	return 1;
}

BOOL func_48(int iParam0, int iParam1) // Position - 0x1278 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_49(int iParam0, BOOL bParam1) // Position - 0x1287 Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_50() != -1)
		return false;

	if (!func_42(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_19(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_3(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_19(iParam0));
}

BOOL func_50() // Position - 0x12DF Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

Hash func_51(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12ED Hash - 0xEC5804B5 ^0x15A1D925
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_52(Hash hParam0) // Position - 0x1391 Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_75(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

Entity func_53(Hash hParam0, int iParam1) // Position - 0x13AC Hash - 0x3D4C4025 ^0x9DFFA56D
{
	Entity entityByDoorhash;

	func_51(hParam0, false, false);

	if (func_52(hParam0))
	{
		entityByDoorhash = ENTITY::_GET_ENTITY_BY_DOORHASH(hParam0, iParam1);
	
		if (ENTITY::DOES_ENTITY_EXIST(entityByDoorhash))
			return entityByDoorhash;
	}

	return 0;
}

void func_54(var uParam0, int iParam1) // Position - 0x13E2 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_55(var uParam0, int iParam1) // Position - 0x13F3 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_56(var uParam0) // Position - 0x1408 Hash - 0xEDEF0818 ^0x5DCD1BEB
{
	Hash entityModel;
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
		num = func_76(entityModel);
	
		if (num == 1)
		{
			return true;
		}
		else if (num != uParam0->f_7)
		{
			uParam0->f_7 = num;
			return true;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}

	return false;
}

char* func_57(int iParam0, int iParam1) // Position - 0x145C Hash - 0x4A4B0DD9 ^0x4A4B0DD9
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return "BOU1_BOUNTY";
			
				case 1:
					return "BOU1AUD";
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET5";
			
				case 1:
					return "BT05AUD";
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return "RBDU_TARGET";
			
				case 1:
					return "BDULAUD";
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return "CAVANAUGH";
			
				case 1:
					return "BT03AUD";
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return "RBRA_TARGET";
			
				case 1:
					return "BRANAUD";
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET12";
			
				case 1:
					return "BT12AUD";
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET14";
			
				case 1:
					return "BT14AUD";
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return "RBCO_TARGET";
			
				case 1:
					return "BCONAUD";
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET15";
			
				case 1:
					return "BT15AUD";
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET20";
			
				case 1:
					return "BT20AUD";
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET18";
			
				case 1:
					return "BT18AUD";
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET21";
			
				case 1:
					return "BT21AUD";
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET22";
			
				case 1:
					return "BT22AUD";
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET23";
			
				case 1:
					return "BT23AUD";
			
				default:
					break;
			}
			break;
	}

	return "";
}

Vector3 func_58(int iParam0, int iParam1, int iParam2) // Position - 0x16B5 Hash - 0x6C5E4299 ^0xDF6E3EF8
{
	char* str;
	var unk;

	str = "";

	switch (iParam0)
	{
		case 2:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "BOU1_PERS1CELL";
						break;
				
					case 1:
						str = "BOU1_PERS1POS";
						break;
				
					case 2:
						str = "BOU1_PERS1NEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "BOU1_PERS2CELL";
						break;
				
					case 1:
						str = "BOU1_PERS2POS";
						break;
				
					case 2:
						str = "BOU1_PERS2NEG";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 1:
						str = "BOU1_PERS3POS";
						break;
				
					case 2:
						str = "BOU1_PERS3NEG";
						break;
				}
			}
			break;
	
		case 3:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT05_CELL1";
						break;
				
					case 1:
						str = func_77("RBT05_CELL1POSJ", "RBT05_CELL1POSA");
						break;
				
					case 2:
						str = func_77("RBT05_CELL1NEGJ", "RBT05_CELL1NEGA");
						break;
				
					case 3:
						str = func_77("RBT05_CELL1BPSJ", "RBT05_CELL1BPSA");
						break;
				
					case 5:
						str = func_77("RBT05_CELL1BNGJ", "RBT05_CELL1NEGA");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT05_CELL2";
						break;
				
					case 1:
						str = func_77("RBT05_CELL2POSJ", "RBT05_CELL2POSA");
						break;
				
					case 2:
						str = func_77("RBT05_CELL2NEGJ", "RBT05_CELL2NEGA");
						break;
				
					case 3:
						str = func_77("RBT05_CELL2BPSJ", "RBT05_CELL2BPSA");
						break;
				
					case 5:
						str = func_77("RBT05_CELL2BNGJ", "RBT05_CELL2BNGA");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT05_CELL3";
						break;
				
					case 1:
						str = func_77("RBT05_CELL3POSJ", "RBT05_CELL3POSA");
						break;
				
					case 2:
						str = func_77("RBT05_CELL3NEGJ", "RBT05_CELL3NEGA");
						break;
				
					case 3:
						str = func_77("RBT05_CELL3BPSJ", "RBT05_CELL3BPSA");
						break;
				
					case 5:
						str = func_77("RBT05_CELL3BNGJ", "RBT05_CELL3BNGA");
						break;
				}
			}
			break;
	
		case 4:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "BDUL_RE_CELL";
						break;
				
					case 1:
						str = func_77("RBDULCELL1POSJ", "RBDULCELL1POSA");
						break;
				
					case 2:
						str = func_77("RBDULCELL1NEGJ", "RBDULCELL1NEGA");
						break;
				
					case 7:
						str = "BDUL_BYE";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "BDUL_RE_CELL";
						break;
				
					case 1:
						str = func_77("RBDULCELL2POSJ", "RBDULCELL2POSA");
						break;
				
					case 2:
						str = func_77("RBDULCELL2NEGJ", "RBDULCELL2NEGA");
						break;
				
					case 7:
						str = "BDUL_BYE";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "BDUL_RE_CELL";
						break;
				
					case 1:
						str = func_77("RBDULCELL3POSJ", "RBDULCELL3POSA");
						break;
				
					case 2:
						str = func_77("RBDULCELL3NEGJ", "RBDULCELL3NEGA");
						break;
				
					case 7:
						str = "BDUL_BYE";
						break;
				}
			}
			break;
	
		case 5:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT03_CELL1";
						break;
				
					case 1:
						str = "RBT03_CELL1POS";
						break;
				
					case 2:
						str = "RBT03_CELL1NEG";
						break;
				
					case 3:
						str = "RBT03_CELL1POSR";
						break;
				
					case 5:
						str = "RBT03_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT03_CELL2";
						break;
				
					case 1:
						str = "RBT03_CELL2POS";
						break;
				
					case 2:
						str = "RBT03_CELL2NEG";
						break;
				
					case 3:
						str = "RBT03_CELL2POSR";
						break;
				
					case 5:
						str = "RBT03_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT03_CELL3";
						break;
				
					case 1:
						str = "RBT03_CELL3POS";
						break;
				
					case 2:
						str = "RBT03_CELL3NEG";
						break;
				
					case 3:
						str = "RBT03_CELL3POSR";
						break;
				
					case 5:
						str = "RBT03_CELL3NEGR";
						break;
				}
			}
			break;
	
		case 6:
			if (func_78(13, 8))
			{
				if (iParam1 == 0)
				{
					switch (iParam2)
					{
						case 0:
							str = "BRA_CELL1_FK";
							break;
					
						case 1:
							str = func_77("BRA_CELL1P_FK_J", "BRA_CELL1P_FK_A");
							break;
					
						case 2:
							str = func_77("BRA_CELL1N_FK_J", "BRA_CELL1N_FK_A");
							break;
					
						case 3:
							str = "BRA_CELL1PR_FK";
							break;
					
						case 5:
							str = "BRA_CELL1NR_FK";
							break;
					}
				}
				else if (iParam1 == 1)
				{
					switch (iParam2)
					{
						case 0:
							str = "BRA_CELL1_FK";
							break;
					
						case 1:
							str = func_77("BRA_CELL2P_FK_J", "BRA_CELL2P_FK_A");
							break;
					
						case 2:
							str = func_77("BRA_CELL2N_FK_J", "BRA_CELL2N_FK_A");
							break;
					
						case 3:
							str = "BRA_CELL2PR_FK";
							break;
					
						case 5:
							str = "BRA_CELL2NR_FK";
							break;
					}
				}
			}
			else if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "BRA_CELL1_FA";
						break;
				
					case 1:
						str = func_77("BRA_CELL1P_FA_J", "BRA_CELL1P_FA_A");
						break;
				
					case 2:
						str = func_77("BRA_CELL1N_FA_J", "BRA_CELL1N_FA_A");
						break;
				
					case 3:
						str = "BRA_CELL1PR_FA";
						break;
				
					case 5:
						str = "BRA_CELL1NR_FA";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "BRA_CELL1_FA";
						break;
				
					case 1:
						str = func_77("BRA_CELL2P_FA_J", "BRA_CELL2P_FA_A");
						break;
				
					case 2:
						str = func_77("BRA_CELL2N_FA_J", "BRA_CELL2N_FA_A");
						break;
				
					case 3:
						str = "BRA_CELL2PR_FA";
						break;
				
					case 5:
						str = "BRA_CELL2NR_FA";
						break;
				}
			}
			break;
	
		case 7:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT12PERSCELL1";
						break;
				
					case 1:
						str = func_77("RBT12CELL1POSJ", "RBT12CELL1POSA");
						break;
				
					case 2:
						str = func_77("RBT12CELL1NEGJ", "RBT12CELL1NEGA");
						break;
				
					case 3:
						str = "RBT12CELL1PREP";
						break;
				
					case 5:
						str = "RBT12CELL1PNEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT12PERSCELL2";
						break;
				
					case 1:
						str = func_77("RBT12CELL2POSJ", "RBT12CELL2POSA");
						break;
				
					case 2:
						str = func_77("RBT12CELL2NEGJ", "RBT12CELL2NEGA");
						break;
				
					case 3:
						str = "RBT12CELL2PREP";
						break;
				
					case 5:
						str = "RBT12CELL2NREP";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT12PERSCELL3";
						break;
				
					case 1:
						str = func_77("RBT12CELL3POSJ", "RBT12CELL3POSA");
						break;
				
					case 2:
						str = func_77("RBT12CELL3NEGJ", "RBT12CELL3NEGA");
						break;
				
					case 3:
						str = "RBT12CELL3PREP";
						break;
				
					case 5:
						str = "RBT12CELL3NREP";
						break;
				}
			}
			break;
	
		case 8:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT14_TINCELL";
						break;
				
					case 1:
						str = func_77("RBT14_CELL1POSJ", "RBT14_CELL1POSA");
						break;
				
					case 2:
						str = func_77("RBT14_CELL1NEGJ", "RBT14_CELL1NEGA");
						break;
				
					case 3:
						str = func_77("RBT14_C1POSJRSP", "RBT14_C1POSARSP");
						break;
				
					case 5:
						str = func_77("RBT14_C1NEGJRSP", "RBT14_C1NEGARSP");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT14_TINCELL";
						break;
				
					case 1:
						str = func_77("RBT14_CELL2POSJ", "RBT14_CELL2POSA");
						break;
				
					case 2:
						str = func_77("RBT14_CELL2NEGJ", "RBT14_CELL2NEGA");
						break;
				
					case 3:
						str = func_77("RBT14_C2POSJRSP", "RBT14_C2POSARSP");
						break;
				
					case 5:
						str = func_77("RBT14_C2NEGJRSP", "RBT14_C2NEGARSP");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT14_TINCELL";
						break;
				
					case 1:
						str = func_77("RBT14_CELL3POSJ", "RBT14_CELL3POSA");
						break;
				
					case 2:
						str = func_77("RBT14_CELL3NEGJ", "RBT14_CELL3NEGA");
						break;
				
					case 3:
						str = func_77("RBT14_C3POSJRSP", "RBT14_C3POSARSP");
						break;
				
					case 5:
						str = func_77("RBT14_C3NEGJRSP", "RBT14_C3NEGARSP");
						break;
				}
			}
			break;
	
		case 9:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "";
						break;
				
					case 1:
						str = func_77("RBCON_CELL1POSJ", "RBCON_CELL1POSA");
						break;
				
					case 2:
						str = func_77("RBCON_CELL1NEGJ", "RBCON_CELL1NEGA");
						break;
				
					case 3:
						str = func_77("RBCONCELL1POSRJ", "RBCON_CELL1POSR");
						break;
				
					case 5:
						str = func_77("RBCONCELL1NEGRJ", "RBCON_CELL1NEGR");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "";
						break;
				
					case 1:
						str = func_77("RBCON_CELL2POSJ", "RBCON_CELL2POSA");
						break;
				
					case 2:
						str = func_77("RBCON_CELL2NEGJ", "RBCON_CELL2NEGA");
						break;
				
					case 3:
						str = func_77("RBCONCELL2POSRJ", "RBCON_CELL2POSR");
						break;
				
					case 5:
						str = func_77("RBCONCELL2NEGRJ", "RBCON_CELL2NEGR");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "";
						break;
				
					case 1:
						str = func_77("RBCON_CELL3POSJ", "RBCON_CELL3POSA");
						break;
				
					case 2:
						str = func_77("RBCON_CELL3NEGJ", "RBCON_CELL3NEGA");
						break;
				
					case 3:
						str = func_77("RBCONCELL3POSRJ", "RBCON_CELL3POSR");
						break;
				
					case 5:
						str = func_77("RBCONCELL3NEGRJ", "RBCON_CELL3NEGR");
						break;
				}
			}
			break;
	
		case 10:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT15_CELL1";
						break;
				
					case 1:
						str = "RBT15_CELL1POS";
						break;
				
					case 2:
						str = "RBT15_CELL1NEG";
						break;
				
					case 3:
						str = "RBT15_CELL1POSR";
						break;
				
					case 5:
						str = "RBT15_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT15_CELL2";
						break;
				
					case 1:
						str = "RBT15_CELL2POS";
						break;
				
					case 2:
						str = "RBT15_CELL2NEG";
						break;
				
					case 3:
						str = "RBT15_CELL2POSR";
						break;
				
					case 5:
						str = "RBT15_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT15_CELL3";
						break;
				
					case 1:
						str = "RBT15_CELL3POS";
						break;
				
					case 2:
						str = "RBT15_CELL3NEG";
						break;
				
					case 3:
						str = "RBT15_CELL3POSR";
						break;
				
					case 5:
						str = "RBT15_CELL3NEGR";
						break;
				}
			}
			break;
	
		case 11:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT20CELL1";
						break;
				
					case 1:
						str = "RBT20CELL1POS";
						break;
				
					case 2:
						str = "RBT20CELL1NEG";
						break;
				
					case 3:
						str = "RBT20CELL1PREP";
						break;
				
					case 5:
						str = "RBT20CELL1PNEG";
						break;
				
					case 7:
						str = "RBT20CELL_LEAVE";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT20CELL1";
						break;
				
					case 1:
						str = "RBT20CELL2POS";
						break;
				
					case 2:
						str = "RBT20CELL2NEG";
						break;
				
					case 3:
						str = "RBT20CELL2PREP";
						break;
				
					case 5:
						str = "RBT20CELL2NREP";
						break;
				
					case 7:
						str = "RBT20CELL_LEAVE";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT20CELL1";
						break;
				
					case 1:
						str = "RBT20CELL3POS";
						break;
				
					case 2:
						str = "RBT20CELL3NEG";
						break;
				
					case 3:
						str = "RBT20CELL3PREP";
						break;
				
					case 5:
						str = "RBT20CELL3NREP";
						break;
				
					case 7:
						str = "RBT20CELL_LEAVE";
						break;
				}
			}
			break;
	
		case 12:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT18_CELL1";
						break;
				
					case 1:
						str = "RBT18_CELL1POS";
						break;
				
					case 2:
						str = "RBT18_CELL1NEG";
						break;
				
					case 3:
						str = "RBT18_CELL1POSR";
						break;
				
					case 5:
						str = "RBT18_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT18_CELL2";
						break;
				
					case 1:
						str = "RBT18_CELL2POS";
						break;
				
					case 2:
						str = "RBT18_CELL2NEG";
						break;
				
					case 3:
						str = "RBT18_CELL2POSR";
						break;
				
					case 5:
						str = "RBT18_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT18_CELL3";
						break;
				
					case 1:
						str = "RBT18_CELL3POS";
						break;
				
					case 2:
						str = "RBT18_CELL3NEG";
						break;
				
					case 3:
						str = "RBT18_CELL3POSR";
						break;
				
					case 5:
						str = "RBT18_CELL3NEGR";
						break;
				}
			}
			break;
	
		case 13:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT21_CELL1";
						break;
				
					case 1:
						str = "RBT21_CELL1POS";
						break;
				
					case 2:
						str = "RBT21_CELL1NEG";
						break;
				
					case 3:
						str = "RBT21_CELL1POSR";
						break;
				
					case 4:
						str = "RBT21_CELL1BPOS";
						break;
				
					case 5:
						str = "RBT21_CELL1NEGR";
						break;
				
					case 6:
						str = "RBT21_CELL1BNEG";
						break;
				
					case 7:
						str = "RBT21_LEAVENOW";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT21_CELL2";
						break;
				
					case 1:
						str = "RBT21_CELL2POS";
						break;
				
					case 2:
						str = "RBT21_CELL2NEG";
						break;
				
					case 3:
						str = "RBT21_CELL2POSR";
						break;
				
					case 4:
						str = "RBT21_CELL2BPOS";
						break;
				
					case 5:
						str = "RBT21_CELL2NEGR";
						break;
				
					case 6:
						str = "RBT21_CELL2BNEG";
						break;
				
					case 7:
						str = "RBT21_LEAVENOW";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT21_CELL3";
						break;
				
					case 1:
						str = "RBT21_CELL3POS";
						break;
				
					case 2:
						str = "RBT21_CELL3NEG";
						break;
				
					case 3:
						str = "RBT21_CELL3POSR";
						break;
				
					case 4:
						str = "RBT21_CELL3BPOS";
						break;
				
					case 5:
						str = "RBT21_CELL3NEGR";
						break;
				
					case 6:
						str = "RBT21_CELL3BNEG";
						break;
				
					case 7:
						str = "RBT21_LEAVENOW";
						break;
				}
			}
			break;
	
		case 14:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT22_CELL1";
						break;
				
					case 1:
						str = "RBT22_CELL1POSJ";
						break;
				
					case 2:
						str = "RBT22_CELL1NEGJ";
						break;
				
					case 3:
						str = "RBT22_CELL1PREP";
						break;
				
					case 5:
						str = "RBT22_CELL1PNEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT22_CELL2";
						break;
				
					case 1:
						str = "RBT22_CELL2POSJ";
						break;
				
					case 2:
						str = "RBT22_CELL2NEGJ";
						break;
				
					case 3:
						str = "RBT22_CELL2PREP";
						break;
				
					case 5:
						str = "RBT22_CELL2NREP";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 1:
						str = "RBT22_CELL3POSJ";
						break;
				
					case 2:
						str = "RBT22_CELL3NEGJ";
						break;
				}
			}
			break;
	
		case 15:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT23CELL1";
						break;
				
					case 1:
						str = "RBT23CELL1POSJ";
						break;
				
					case 2:
						str = "RBT23CELL1NEGJ";
						break;
				
					case 3:
						str = "RBT23CELL1POSR";
						break;
				
					case 5:
						str = "RBT23CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT23CELL1";
						break;
				
					case 1:
						str = "RBT23CELL2POSJ";
						break;
				
					case 2:
						str = "RBT23CELL2NEGJ";
						break;
				
					case 3:
						str = "RBT23CELL2POSR";
						break;
				
					case 5:
						str = "RBT23CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT23CELL1";
						break;
				
					case 1:
						str = "RBT23CELL13POSJ";
						break;
				
					case 2:
						str = "RBT23CELL3NEGJ";
						break;
				
					case 3:
						str = "RBT23CELL3POSR";
						break;
				
					case 4:
						str = "RBT23CELL3POS2J";
						break;
				
					case 5:
						str = "RBT23CELL3NEGR";
						break;
				}
			}
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, str, 24);
	return unk;
}

void func_59(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x2863 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_79(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

BOOL func_60() // Position - 0x28C0 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_50() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_61(int iParam0, var uParam1) // Position - 0x28E5 Hash - 0x1FCCC7D5 ^0x1FCCC7D5
{
	switch (iParam0)
	{
		case 9:
			return true;
	}

	return false;
}

void func_62(var uParam0) // Position - 0x2903 Hash - 0x727A72BA ^0xDFF642D6
{
	if (uParam0->f_65 == 0)
		func_16(*uParam0, 16);
	else if (uParam0->f_65 == 1)
		func_16(*uParam0, 32);
	else if (uParam0->f_65 == 2)
		func_16(*uParam0, 64);

	return;
}

const char* func_63(var uParam0, var uParam1, var uParam2) // Position - 0x2944 Hash - 0xE300744B ^0x46E4843E
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_64(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2958 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_80(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

BOOL func_65(BOOL bParam0) // Position - 0x29B2 Hash - 0xD6E12BEB ^0xD87564B0
{
	return AUDIO::_0xFE5C6177064BD390(bParam0);
}

void func_66(int* piParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x29C0 Hash - 0x77C6B9D1 ^0xC3EDC08A
{
	piParam0->f_5 = sParam1;
	piParam0->f_7 = iParam3;
	piParam0->f_8 = iParam6;
	piParam0->f_13 = sParam2;
	piParam0->f_15 = iParam8;
	piParam0->f_11 = iParam4;
	piParam0->f_12 = iParam5;

	if (bParam7)
	{
		if (func_81(piParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*piParam0, 1))
				func_82(piParam0->f_6, piParam0->f_5, piParam0->f_14, false);
			else
				func_83(piParam0->f_6, piParam0->f_5, false);
		
			func_84(piParam0->f_6, false, true);
		}
		else
		{
			MISC::SET_BIT(piParam0, 14);
		}
	
		MISC::SET_BIT(piParam0, 0);
	}
	else
	{
		func_85(piParam0, piParam0->f_5);
	
		if (!MISC::IS_BIT_SET(*piParam0, 13))
			MISC::SET_BIT(piParam0, 0);
	}

	MISC::SET_BIT(piParam0, 15);
	return;
}

int func_67(var uParam0, int* piParam1, float fParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, Volume volParam9, int iParam10, int iParam11, int iParam12) // Position - 0x2A73 Hash - 0x66907D63 ^0x41228033
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	int num2;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_86(&iParam8);
		num = -1;
		flag = false;
		flag2 = volParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(volParam9) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volParam9, false, 0);
		flag3 = iParam8 & 32 != 0;
		flag4 = iParam8 & 524288 != 0;
		flag5 = iParam8 & 16777216 != 0;
		flag6 = iParam8 & 16777216 != 0;
		flag7 = AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0);
		num2 = iParam12 >= 0f ? iParam12 : BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false));
	
		if (!(iParam8 & 2097152 != 0))
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
	
		if (iParam8 & 8388608 != 0)
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
	
		if (flag5)
			flag = AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35);
	
		if (flag7 || flag5 && flag)
			func_12(&(piParam1->f_13));
	
		if (func_88(*uParam0, piParam1, uParam3))
			return -1;
	
		switch (piParam1->f_2)
		{
			case 0:
				if (flag2)
				{
					if (func_89(uParam0, piParam1, uParam3, fParam2, iParam8, sParam7, iParam11, num2))
					{
						piParam1->f_1 = -1;
						piParam1->f_2 = 1;
						return func_67(uParam0, piParam1, fParam2, uParam3, iParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, iParam12);
					}
				}
				break;
		
			case 1:
				if (!flag2 || !(num2 <= fParam2 + 5f))
				{
					func_70(uParam0);
					piParam1->f_2 = 0;
					return -1;
				}
			
				if (!(iParam8 & 33554432 != 0))
					if (iParam8 & 18 != 0)
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
							func_90(*uParam0, true, true);
					else if (func_91(piParam1, 22))
						func_90(*uParam0, false, true);
			
				if (func_92(uParam0, iParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_93(uParam0, true, piParam1, fParam2, uParam3, flag3, iParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4);
					func_94(iParam8);
				
					if (func_95(uParam0, piParam1, num2, fParam2, uParam3, flag3, iParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, false))
					{
						if (piParam1->f_2 != 2 && piParam1->f_2 != 3)
						{
							if (piParam1->f_1 > -1 && piParam1->f_1 < *uParam3)
								if (MISC::IS_BIT_SET(uParam3->[piParam1->f_1 /*17*/], 20))
									func_96(uParam3);
						
							return piParam1->f_1;
						}
					}
					else if (piParam1->f_2 != 2)
					{
						if (piParam1->f_1 != -1)
							piParam1->f_1 = -1;
					}
				}
				else
				{
					func_97(piParam1, uParam3, num2);
				
					if (func_98(*uParam0, piParam1, uParam3))
						return piParam1->f_1;
				
					if (MISC::IS_BIT_SET(*piParam1, 1))
					{
						func_71(uParam3, 0, false, true, true);
						MISC::CLEAR_BIT(piParam1, 1);
					}
				}
				break;
		
			case 2:
				if (func_92(uParam0, iParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_100(*uParam0, piParam1, uParam3, fParam2, iParam5, iParam6, iParam10, flag3);
					func_95(uParam0, piParam1, num2, fParam2, uParam3, flag3, iParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, true);
					func_93(uParam0, func_92(uParam0, iParam8, volParam9, false), piParam1, fParam2, uParam3, flag3, iParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4);
					func_94(iParam8);
				}
				else if (MISC::IS_BIT_SET(*piParam1, 1))
				{
					if (!flag4)
						func_71(uParam3, 0, false, true, true);
				
					func_101(piParam1, 1);
				}
			
				func_97(piParam1, uParam3, num2);
			
				if (func_99(uParam0, piParam1, iParam4, flag6))
				{
					if (iParam8 & 512 != 0)
						piParam1->f_2 = 0;
					else
						piParam1->f_2 = 1;
				
					num = piParam1->f_1;
					piParam1->f_9 = 0;
					piParam1->f_1 = -1;
					return num;
				}
				break;
		
			case 3:
				break;
		
			case 4:
				if (func_99(uParam0, piParam1, iParam4, flag6))
				{
					num = piParam1->f_1;
					piParam1->f_9 = 0;
					piParam1->f_1 = -1;
					return num;
				}
				break;
		}
	}
	else if (!(iParam8 & 1024 != 0))
	{
		if (!MISC::IS_BIT_SET(*piParam1, 3))
		{
			func_102(piParam1, uParam3);
			MISC::SET_BIT(piParam1, 3);
		}
	}

	return -1;
}

void func_68(int* piParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2EB7 Hash - 0xAC8CE43 ^0x1A2D07F
{
	if (bParam1 && !func_103(piParam0, 13))
		func_104(piParam0, 0);
	else
		func_105(piParam0, 0);

	if (func_81(piParam0->f_6))
		if (bParam2)
			func_106(&(piParam0->f_6), false, true);

	return;
}

BOOL func_69(var uParam0) // Position - 0x2EFD Hash - 0x79E27FFF ^0x43744348
{
	if (uParam0->f_7 == 4 || uParam0->f_7 == 13 || uParam0->f_7 == 11)
		return true;

	return false;
}

void func_70(var uParam0) // Position - 0x2F2D Hash - 0x43696AC2 ^0x4C06F87D
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}

	return;
}

void func_71(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2F53 Hash - 0x5EBCB35A ^0x47D35D05
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (bParam3)
		{
			if (func_81(uParam0->[i /*17*/].f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0->[i /*17*/], 11))
				{
				}
				else
				{
					func_106(&(uParam0->[i /*17*/].f_6), true, true);
				
					if (bParam2)
					{
						uParam0->[i /*17*/].f_7 = 0;
						uParam0->[i /*17*/] = 0;
						uParam0->[i /*17*/].f_5 = "";
						uParam0->[i /*17*/].f_14 = 0;
						uParam0->[i /*17*/].f_13 = "";
						uParam0->[i /*17*/].f_15 = 0;
						uParam0->[i /*17*/].f_11 = "";
						uParam0->[i /*17*/].f_12 = "";
					}
				}
			}
		}
	
		if (bParam2)
		{
			uParam0->[i /*17*/].f_7 = 0;
			uParam0->[i /*17*/] = 0;
			uParam0->[i /*17*/].f_5 = "";
			uParam0->[i /*17*/].f_14 = 0;
			uParam0->[i /*17*/].f_13 = "";
			uParam0->[i /*17*/].f_15 = 0;
			uParam0->[i /*17*/].f_11 = "";
			uParam0->[i /*17*/].f_12 = "";
		}
	}

	return;
}

BOOL func_72(var uParam0) // Position - 0x2FFE Hash - 0xF490F975 ^0x19C69C8E
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_70))
		func_107(uParam0->f_4, &(uParam0->f_70));
	else if (!func_108(Global_35, uParam0->f_70, true, 0))
		return true;

	return false;
}

BOOL func_73(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x3037 Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = iParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_109(pedParam0, &str);
}

void func_74(int iParam0, int iParam1) // Position - 0x307E Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_42(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
	return;
}

BOOL func_75(Hash hParam0) // Position - 0x309F Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

int func_76(Hash hParam0) // Position - 0x30AB Hash - 0xA10EBB5C ^0xA10EBB5C
{
	switch (hParam0)
	{
		case joaat("u_m_m_bht_shackescape"):
			return 8;
	
		case joaat("u_m_m_bht_skinnersearch"):
			return 11;
	
		case joaat("u_m_m_htlrancherbounty_01"):
			return 6;
	
		case joaat("u_m_m_bht_blackwaterhunt"):
			return 13;
	
		case joaat("u_m_m_bht_banditoshack"):
			return 14;
	
		case joaat("u_m_m_bht_banditomine"):
			return 15;
	
		case joaat("cs_antonyforemen"):
			return 10;
	
		case joaat("u_m_m_bht_laramiesleeping"):
			return 5;
	
		case joaat("u_m_m_uniexconfedsbounty_01"):
			return 9;
	
		case joaat("u_m_m_bht_benedictallbright"):
			return 2;
	
		case joaat("u_f_m_bht_wife"):
			return 3;
	
		case joaat("u_m_m_bht_exconfedcampreturn"):
			return 7;
	
		case joaat("u_m_m_bht_strawberryduel"):
			return 4;
	
		case joaat("u_m_m_bht_skinnerbrother"):
			return 12;
	
		default:
		
	}

	return 1;
}

char* func_77(char* sParam0, char* sParam1) // Position - 0x3150 Hash - 0x17C60719 ^0x17C60719
{
	if (func_60())
		return sParam0;

	return sParam1;
}

BOOL func_78(int iParam0, int iParam1) // Position - 0x3166 Hash - 0xC3DE0614 ^0x9804EDD5
{
	int num;

	num = func_110(Global_1347702[iParam0 /*49*/].f_15);

	if (func_111(num, iParam1))
		return true;

	return false;
}

BOOL func_79(var uParam0, Entity eParam1, char* sParam2) // Position - 0x318E Hash - 0xFB1C2C0E ^0x6794528D
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < uParam0->f_97 && !flag; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(uParam0->[i /*4*/].f_1)))
		{
			uParam0->[i /*4*/] = eParam1;
			flag = true;
		}
	}

	if (!flag)
	{
		if (uParam0->f_97 < 24)
		{
			uParam0->[uParam0->f_97 /*4*/] = eParam1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[uParam0->f_97 /*4*/].f_1), sParam2, 24);
			uParam0->f_97 = uParam0->f_97 + 1;
			flag = true;
		}
	}

	return flag;
}

void func_80(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x320C Hash - 0xFDACD718 ^0x658C9335
{
	int i;

	for (i = 0; i < uParam3->f_97; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3->[i /*4*/]))
			if (!ENTITY::IS_ENTITY_DEAD(uParam3->[i /*4*/]))
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3->[i /*4*/], &(uParam3->[i /*4*/].f_1));
	}

	return;
}

BOOL func_81(int iParam0) // Position - 0x325E Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_82(int iParam0, const char* sParam1, var uParam2, BOOL bParam3) // Position - 0x329D Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_81(iParam0))
		return;

	num = func_112(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(2, sParam1, uParam2));
	return;
}

void func_83(int iParam0, const char* sParam1, BOOL bParam2) // Position - 0x32ED Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_81(iParam0))
		return;

	num = func_112(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, sParam1);
	return;
}

void func_84(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3336 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_81(iParam0))
		return;

	num = func_112(iParam0);

	if (bParam1)
	{
		func_113(iParam0, 4);
		func_114(num, true);
		func_115(num, true);
	}
	else
	{
		func_116(iParam0, 4);
		func_115(num, false);
	}

	return;
}

void func_85(int* piParam0, const char* sParam1) // Position - 0x3385 Hash - 0x94802979 ^0xDA357E7D
{
	if (func_81(piParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		func_83(piParam0->f_6, sParam1, true);

	piParam0->f_5 = sParam1;
	func_105(piParam0, 1);
	return;
}

void func_86(var uParam0) // Position - 0x33BC Hash - 0x9DBECFB8 ^0xE52A4E97
{
	if (*uParam0 & 1 != 0)
		*uParam0 = *uParam0 | 64 | 16 | 16777216;

	return;
}

var func_87(BOOL bParam0, var uParam1, var uParam2) // Position - 0x33DF Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_88(Ped pedParam0, int* piParam1, var uParam2) // Position - 0x33F6 Hash - 0x84A3184B ^0x2FCA8561
{
	if (piParam1->f_11 != 0)
	{
		if (func_117(pedParam0, piParam1))
		{
			if (!func_35(piParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 178, true);
				func_71(uParam2, 0, false, true, false);
				func_36(&(piParam1->f_10), 1);
			}
		
			return true;
		}
		else if (func_35(piParam1->f_10, 1))
		{
			func_118(uParam2);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 178, false);
			func_37(&(piParam1->f_10), 1);
		}
	}

	return false;
}

BOOL func_89(var uParam0, int* piParam1, var uParam2, float fParam3, int iParam4, char* sParam5, Hash hParam6, int iParam7) // Position - 0x34A0 Hash - 0x95336F37 ^0x42E85BA7
{
	var text;
	BOOL flag;
	Prompt prompt;
	int num;
	BOOL flag2;
	int num2;

	if (iParam7 > fParam3 + 5f)
		return false;

	TEXT_LABEL_ASSIGN_STRING(&text, sParam5, 32);

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		flag = func_35(iParam4, 32);
		func_119(piParam1, uParam2, false);
		prompt = func_120(*uParam0, piParam1, uParam2, fParam3, flag);
	
		if (flag)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
	
		func_71(uParam2, 0, false, true, false);
		num = 0;
	
		if (!func_35(iParam4, 16))
			num = num | 8;
	
		if (func_35(iParam4, 2048))
			num = num | 4;
	
		if (func_35(iParam4, 32768))
			num = num | 128;
	
		if (func_35(iParam4, 4096))
			num = num | 16;
	
		if (func_35(iParam4, 8388608) || func_35(iParam4, 8192))
			num = num | 256;
	
		if (func_35(iParam4, 4194304))
			num = num | 64;
	
		if (func_35(iParam4, 268435456))
			num = num | 8192;
	
		if (func_91(piParam1, 4))
		{
			num = num | 1024;
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
	
		if (!func_91(piParam1, 26))
			num = num | 32768;
	
		if (func_35(iParam4, 67108864))
			num = num | 16384;
	
		if (piParam1->f_6 < -1 || piParam1->f_6 > -1 && piParam1->f_6 > 3)
			piParam1->f_6 = -1;
	
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &text, fParam3, fParam3, num, piParam1->f_7, piParam1->f_8, prompt, false, piParam1->f_6))
		{
			if (hParam6 == 2)
				hParam6 = func_121(uParam0);
		
			if (hParam6 != 2)
				flag2 = true;
		
			if (!flag2)
			{
				switch (hParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&text))
							hParam6 = MISC::GET_HASH_KEY(&text);
						break;
				}
			
				if (hParam6 != 2)
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, hParam6);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && hParam6 == 2)
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				else if (hParam6 != 2)
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, hParam6);
			}
		
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
		
			if (func_35(iParam4, 268435456))
			{
				num2 = func_122(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
			
				if (num2 > -1)
					func_123(piParam1, &uParam2->[num2 /*17*/]);
			}
		
			if (func_91(piParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
		
			if (func_35(iParam4, 2) || func_35(iParam4, 16))
				func_90(*uParam0, true, true);
			else
				func_90(*uParam0, false, true);
		
			return true;
		}
	}

	return false;
}

void func_90(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3791 Hash - 0x61822EFB ^0x98C55DC1
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 317, bParam1);

	return;
}

BOOL func_91(int* piParam0, int iParam1) // Position - 0x37B7 Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_92(var uParam0, int iParam1, Volume volParam2, BOOL bParam3) // Position - 0x37C8 Hash - 0x89673EF ^0xD8D31C9
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	flag = !VOLUME::DOES_VOLUME_EXIST(volParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volParam2, true, 0);
	flag2 = iParam1 & 32 != 0;
	flag3 = iParam1 & 65792 != 0;
	flag4 = iParam1 & 1179648 != 0;

	if (flag)
	{
		if (flag2)
			return true;
	
		if (func_124(*uParam0, bParam3, flag3, flag4))
			return true;
	}

	return false;
}

void func_93(var uParam0, BOOL bParam1, int* piParam2, float fParam3, var uParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14) // Position - 0x382C Hash - 0x3FED85C6 ^0x1A53C527
{
	int i;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*piParam2, 1))
		{
			if (bParam14)
			{
				for (i = 0; i < *uParam4; i = i + 1)
				{
					MISC::SET_BIT(&uParam4->[i /*17*/], 14);
				}
			}
		
			func_125(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_35(iParam10, 32), true, false);
			MISC::SET_BIT(piParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*piParam2, 1))
	{
		MISC::CLEAR_BIT(piParam2, 1);
	}

	return;
}

void func_94(int iParam0) // Position - 0x38A1 Hash - 0x5A9B862A ^0x7ECCD484
{
	if (func_35(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_ATTACK2"), true);
	}

	if (func_35(iParam0, 16384))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_RELOAD"), false);

	if (func_35(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_GRAPPLE"), false);
	}

	return;
}

BOOL func_95(var uParam0, int* piParam1, int iParam2, float fParam3, var uParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x394E Hash - 0x25A0EB38 ^0x81C1ECF6
{
	int i;
	int num;
	BOOL isBitSet;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL isPedOnFoot;
	BOOL isPedInjured;
	BOOL flag7;
	float num2;

	num = func_126(1);
	isBitSet = MISC::IS_BIT_SET(*piParam1, 2);
	flag = false;
	flag2 = false;
	flag3 = false;
	flag4 = iParam10 & 128 != 0;
	flag5 = iParam10 & 64 != 0;
	flag6 = iParam10 & 512 != 0;
	isPedOnFoot = PED::IS_PED_ON_FOOT(Global_35);
	isPedInjured = PED::IS_PED_INJURED(*uParam0);
	flag7 = PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_127(Global_35) || func_128(Global_35) || func_129(Global_35);
	num2 = -1f;

	if (func_21(&(piParam1->f_13)))
		num2 = func_9(&(piParam1->f_13));

	for (i = 0; i < *uParam4; i = i + 1)
	{
		if (uParam4->[i /*17*/].f_8 != iParam12)
			iParam12 = uParam4->[i /*17*/].f_8;
	
		flag2 = func_81(uParam4->[i /*17*/].f_6);
		func_130(*uParam0, &uParam4->[i /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
	
		if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 20))
			flag = true;
	
		if (func_131(*uParam0, piParam1, &uParam4->[i /*17*/], flag2, fParam3, iParam2, iParam7, iParam8, bParam14, bParam16, bParam17, isPedOnFoot, isPedInjured, bParam15, num2, flag7, num))
		{
			if (!bParam18 && !flag3)
			{
				if (func_132(iParam12, uParam4->[i /*17*/].f_6))
				{
					if (!flag5)
						func_71(uParam4, 0, false, true, bParam5);
				
					if (flag4)
						func_133(uParam4, false, false);
				
					if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 11))
						func_119(piParam1, uParam4, MISC::IS_BIT_SET(*piParam1, 6));
				
					piParam1->f_1 = i;
					flag3 = true;
					piParam1->f_9 = MISC::IS_BIT_SET(uParam4->[piParam1->f_1 /*17*/], 16);
				
					if (!piParam1->f_9)
						MISC::SET_BIT(piParam1, 0);
				
					if (!isBitSet)
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_11))
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_12))
								TASK::TASK_PLAY_ANIM(Global_35, uParam4->[i /*17*/].f_11, uParam4->[i /*17*/].f_12, 4f, -4f, -1, 67108880, 0, false, 0, false, 0, false);
				
					if (func_134(piParam1, iParam6, piParam1->f_9))
					{
						func_12(&(piParam1->f_18));
					
						if (flag4)
							func_133(uParam4, false, false);
					
						piParam1->f_2 = 2;
					}
				
					if (piParam1->f_2 != 2)
						if (piParam1->f_2 != 3)
							if (flag6)
								piParam1->f_2 = 0;
				
					if (!bParam14)
						flag3 = true;
				}
			}
		}
	}

	if (flag)
		func_135(piParam1, iParam2);

	return flag3;
}

void func_96(var uParam0) // Position - 0x3BA6 Hash - 0x14F6CB16 ^0xBB9D41ED
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (MISC::IS_BIT_SET(uParam0->[i /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0->[i /*17*/], 21))
			{
				MISC::CLEAR_BIT(&uParam0->[i /*17*/], 20);
				MISC::CLEAR_BIT(&uParam0->[i /*17*/], 21);
			}
		}
	}

	return;
}

void func_97(int* piParam0, var uParam1, int iParam2) // Position - 0x3BF9 Hash - 0x9063AD98 ^0x85323D11
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (func_136(&uParam1->[i /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1->[i /*17*/], 20))
			{
				func_135(piParam0, iParam2);
				return;
			}
		}
	}

	return;
}

BOOL func_98(Ped pedParam0, int* piParam1, var uParam2) // Position - 0x3C3C Hash - 0xEB1F3A6C ^0xB0CA3802
{
	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_137(pedParam0))
			{
				piParam1->f_1 = piParam1->f_3;
				func_138(piParam1, 0);
				func_119(piParam1, uParam2, func_91(piParam1, 6));
				return true;
			}
		}
	}

	return false;
}

BOOL func_99(var uParam0, int* piParam1, int iParam2, BOOL bParam3) // Position - 0x3C94 Hash - 0x384F04E1 ^0xEB00389B
{
	if (piParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
			return false;
	
		piParam1->f_9 = 0;
		MISC::SET_BIT(piParam1, 0);
	
		if (iParam2 > 0f)
		{
			func_12(&(piParam1->f_18));
			return false;
		}
		else if (func_21(&(piParam1->f_18)))
		{
			func_139(&(piParam1->f_18));
			return false;
		}
	}

	if (!func_21(&(piParam1->f_18)))
		return true;

	if (iParam2 > 0f && bParam3)
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			return false;

	return func_140(&(piParam1->f_18), iParam2);
}

void func_100(Object obParam0, int* piParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x3D3E Hash - 0x415C2438 ^0x87B17E4A
{
	int num;

	if (piParam1->f_5 < 0 || piParam1->f_5 > *uParam2 - 1)
		piParam1->f_5 = 0;

	num = piParam1->f_5;
	func_130(obParam0, &uParam2->[num /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	piParam1->f_5 = piParam1->f_5 + 1;
	return;
}

void func_101(int* piParam0, int iParam1) // Position - 0x3D8A Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_102(int* piParam0, var uParam1) // Position - 0x3D9A Hash - 0xC7765EDD ^0x9C4E31FE
{
	int i;
	var src;
	var src2;

	src.f_1 = -1;
	src.f_3 = -1;
	src.f_6 = -1;
	src.f_12 = 1073741824;
	src.f_16 = 1;
	src2.f_2 = 570;
	src2.f_3 = 1065353216;
	src2.f_4 = -1082130432;
	src2.f_9 = 2;
	func_119(piParam0, uParam1, true);
	func_71(uParam1, 0, true, true, false);
	MISC::COPY_SCRIPT_STRUCT(piParam0, &src, 21);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam1->[i /*17*/], &src2, 17);
	}

	return;
}

BOOL func_103(int* piParam0, int iParam1) // Position - 0x3E2B Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

void func_104(int* piParam0, int iParam1) // Position - 0x3E3C Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_105(int* piParam0, int iParam1) // Position - 0x3E4C Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_106(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3E5C Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_81(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_112(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_141(num);
	*uParam0 = 0;
	return;
}

void func_107(int iParam0, var uParam1) // Position - 0x3EB0 Hash - 0x9E3E50A0 ^0x3FB8F22F
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		return;

	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.3323f, -1306.6725f, 49.062435f, 0f, 0f, 0f, 5.38237f, 5.870902f, 2.389851f, "Near Cell");
			break;
	
		case 26:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1813.0663f, -353.33865f, 161.43797f, 0f, 0f, -20.669903f, 5.9382f, 3.494741f, 2.127687f, "Near Cell");
			break;
	
		case 38:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.90515f, -1264.1561f, 43.82976f, 0f, 0f, 0f, 3.441595f, 4.293221f, 2.234505f, "Near Cell");
			break;
	
		case 76:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-273.4034f, 808.0645f, 119.502975f, 0f, 0f, -78.666115f, 2.868701f, 5.577141f, 2.388725f, "Near Cell");
			break;
	
		case 78:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2903.7454f, 1311.1798f, 45.131676f, 0f, 0f, -19.81251f, 1.647195f, 1.766237f, 2.464334f, "Near Cell");
			break;
	
		case 105:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.1954f, -1302.73f, 77.571075f, 0f, 0f, -18.899456f, 3.524552f, 3.867561f, 1.788079f, "Near Cell");
			break;
	
		case 115:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5534.542f, -2948.278f, -0.368f, 0f, 0f, 15f, 9f, 4.7f, 3f, "Near Cell");
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_108(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x4057 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_109(Ped pedParam0, Any* panParam1) // Position - 0x408D Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

int func_110(int iParam0) // Position - 0x409D Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_142(iParam0))
		return -1;

	return func_143(iParam0);
}

BOOL func_111(int iParam0, int iParam1) // Position - 0x40B9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_112(int iParam0) // Position - 0x40C8 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_113(int iParam0, int iParam1) // Position - 0x40D2 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_114(int iParam0, BOOL bParam1) // Position - 0x4105 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_144(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_115(int iParam0, BOOL bParam1) // Position - 0x415D Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_116(int iParam0, int iParam1) // Position - 0x4186 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

BOOL func_117(Ped pedParam0, int* piParam1) // Position - 0x41AE Hash - 0xFB53563C ^0x22205B46
{
	BOOL flag;
	BOOL flag2;

	if (piParam1->f_11 & 1 != 0)
		if (PED::IS_PED_LASSOED(pedParam0))
			return true;

	if (piParam1->f_11 & 2 != 0)
		if (PED::IS_PED_HOGTIED(pedParam0))
			return true;

	flag = piParam1->f_11 & 4 != 0;
	flag2 = piParam1->f_11 & 8 != 0;

	if (flag || flag2)
		if (PED::IS_PED_IN_COMBAT(pedParam0, func_145(flag2 && !flag, Global_35, 0)))
			return true;

	return false;
}

void func_118(var uParam0) // Position - 0x4226 Hash - 0xBF3B7066 ^0xBF3B7066
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_136(&uParam0->[i /*17*/]))
			func_104(&uParam0->[i /*17*/], 14);
	}

	return;
}

void func_119(int* piParam0, var uParam1, BOOL bParam2) // Position - 0x425B Hash - 0x6F91FC09 ^0xBA0ABE9A
{
	if (piParam0->f_3 > -1 && piParam0->f_3 < *uParam1)
	{
		func_106(&(uParam1->[piParam0->f_3 /*17*/].f_6), true, true);
	
		if (bParam2)
			func_146(piParam0, 0);
	}

	return;
}

Prompt func_120(Object obParam0, int* piParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x4295 Hash - 0xAAA1EE43 ^0x1865183
{
	int num;

	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		num = piParam1->f_3;
		uParam2->[num /*17*/].f_8 = 6;
		func_147(obParam0, &uParam2->[num /*17*/], fParam3, 3, 0, 6, bParam4, false);
	
		if (func_81(uParam2->[num /*17*/].f_6))
		{
			func_104(&uParam2->[num /*17*/], 11);
			return Global_1945188[uParam2->[num /*17*/].f_6 /*18*/].f_3;
		}
	}

	return 0;
}

int func_121(var uParam0) // Position - 0x4305 Hash - 0x642E71C7 ^0x2B612313
{
	int num;
	int num2;

	num = func_148(*uParam0);
	num2 = 2;

	switch (num)
	{
		case 0:
			num2 = 1415388528;
			break;
	
		case 1:
			num2 = 768137552;
			break;
	
		case 2:
			num2 = 295425337;
			break;
	
		case 3:
			num2 = -1807204482;
			break;
	
		case 4:
			num2 = 1449436544;
			break;
	
		case 5:
			num2 = -1096701282;
			break;
	}

	return num2;
}

int func_122(var uParam0, int iParam1) // Position - 0x4383 Hash - 0x2E6C9ADE ^0xD0DFC5BC
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_7 == iParam1)
			return i;
	}

	return -1;
}

void func_123(int* piParam0, int* piParam1) // Position - 0x43B2 Hash - 0xFCEC0C12 ^0x65EC5F60
{
	if (!func_91(piParam0, 23))
	{
		if (piParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_104(piParam1, 19);
			func_138(piParam0, 23);
			func_149(piParam1, 2);
		}
	}

	return;
}

BOOL func_124(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x43EF Hash - 0x8E7018BE ^0x1BA834FB
{
	Entity outEntity;

	outEntity = 0;

	if (func_150(16))
		return Global_1935630.f_58 == pedParam0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(outEntity))
			{
				if (ENTITY::IS_ENTITY_A_PED(outEntity))
				{
					func_151(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
				
					if (Global_1935630.f_58 == pedParam0)
						return true;
				}
			}
		}
	}

	return false;
}

void func_125(Object obParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x4464 Hash - 0x1F7F43A4 ^0x1F7F43A4
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		func_147(obParam0, &uParam1->[i /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
	
		if (bParam8)
			MISC::CLEAR_BIT(&uParam1->[i /*17*/], 14);
	}

	return;
}

int func_126(int iParam0) // Position - 0x44A9 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_127(Ped pedParam0) // Position - 0x44B5 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_152(pedParam0, 4) || func_152(pedParam0, 5);
}

BOOL func_128(Ped pedParam0) // Position - 0x44D1 Hash - 0xE0409C42 ^0xE0409C42
{
	return func_152(pedParam0, 7);
}

BOOL func_129(Ped pedParam0) // Position - 0x44E0 Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_152(pedParam0, 6);
}

void func_130(Object obParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x44EF Hash - 0x28F375A9 ^0x20CFE665
{
	if (MISC::IS_BIT_SET(*piParam1, 14))
	{
		if (func_136(piParam1))
		{
			MISC::CLEAR_BIT(piParam1, 14);
			func_147(obParam0, piParam1, fParam2, iParam3, iParam4, iParam5, bParam6, false);
		}
	}

	return;
}

BOOL func_131(Object obParam0, int* piParam1, int* piParam2, BOOL bParam3, float fParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, float fParam14, BOOL bParam15, int iParam16) // Position - 0x4527 Hash - 0x9E28CA55 ^0x9E28CA55
{
	BOOL flag;
	BOOL flag2;

	flag = bParam3;

	if (bParam3)
	{
		flag2 = false;
	
		if (func_153(piParam1, piParam2, obParam0, bParam9, bParam10, iParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
			flag2 = true;
	
		if (func_154(piParam2->f_6, false))
		{
			if (flag2)
			{
				func_84(piParam2->f_6, false, true);
				flag = false;
			}
		}
		else if (!flag2)
		{
			func_84(piParam2->f_6, true, true);
			flag = false;
		}
	
		if (bParam8)
			func_155(piParam2->f_6, obParam0, 0, true, -1);
	}

	return flag;
}

BOOL func_132(int iParam0, int iParam1) // Position - 0x45A5 Hash - 0xFED1B5B5 ^0xFED1B5B5
{
	if (iParam0 == 4 || iParam0 == 6 || iParam0 == 5)
	{
		if (func_156(iParam1, true))
			return true;
	}
	else if (func_157(iParam1, true))
	{
		func_158(iParam1, true);
		return true;
	}

	return false;
}

void func_133(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x45EF Hash - 0x6249DB64 ^0x6249DB64
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_68(&uParam0->[i /*17*/], bParam1, bParam2);
	}

	return;
}

BOOL func_134(int* piParam0, int iParam1, BOOL bParam2) // Position - 0x4619 Hash - 0xD16C56E3 ^0xCC194231
{
	if (piParam0->f_2 != 3)
		if (bParam2 || iParam1 > 0f)
			return true;

	return false;
}

void func_135(int* piParam0, int iParam1) // Position - 0x463D Hash - 0xCA0C813A ^0x642D602A
{
	if (iParam1 <= piParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}

	return;
}

BOOL func_136(int* piParam0) // Position - 0x467A Hash - 0xA750EC1D ^0xA62AC3E5
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(piParam0->f_5))
		return true;

	return false;
}

BOOL func_137(Ped pedParam0) // Position - 0x4693 Hash - 0x38F1F494 ^0xD89820BA
{
	int i;
	int numberOfEvents;
	int num;
	struct<10> eventData;

	numberOfEvents = SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI);

	if (numberOfEvents > 0)
	{
		for (i = 0; i < numberOfEvents; i = i + 1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i))
			{
				case joaat("event_player_prompt_triggered"):
					if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 10))
					{
						num = eventData;
					
						switch (num)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(eventData.f_2))
									if (pedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_2))
										return true;
								break;
						}
					}
					break;
			}
		}
	}

	return false;
}

void func_138(int* piParam0, int iParam1) // Position - 0x4711 Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_139(var uParam0) // Position - 0x4721 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_140(var uParam0, int iParam1) // Position - 0x4737 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_159(uParam0, iParam1))
	{
		func_139(uParam0);
		return 1;
	}

	return 0;
}

void func_141(int iParam0) // Position - 0x4755 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_160(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1945188[iParam0 /*18*/].f_3);

	Global_1945188[iParam0 /*18*/].f_4 = 0;
	Global_1945188[iParam0 /*18*/] = 1;
	Global_1945188[iParam0 /*18*/].f_16 = 0;
	Global_1945188[iParam0 /*18*/].f_1 = 0;
	Global_1945188[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_9 = 0f;
	Global_1945188[iParam0 /*18*/].f_10 = 0;
	Global_1945188[iParam0 /*18*/].f_11 = 0;
	Global_1945188[iParam0 /*18*/].f_2 = 1;
	Global_1945188[iParam0 /*18*/].f_15 = -1f;
	return;
}

BOOL func_142(int iParam0) // Position - 0x4808 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_143(int iParam0) // Position - 0x483B Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

BOOL func_144(int iParam0, int iParam1) // Position - 0x485A Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

Ped func_145(BOOL bParam0, Ped pedParam1, Ped pedParam2) // Position - 0x487B Hash - 0xCF32FBA5 ^0xCF32FBA5
{
	if (bParam0)
		return pedParam1;

	return pedParam2;
}

void func_146(int* piParam0, int iParam1) // Position - 0x488F Hash - 0x5F94E6 ^0xC34AEB03
{
	*piParam0 = 0;
	piParam0->f_1 = -1;
	piParam0->f_2 = 0;
	func_139(&(piParam0->f_18));
	return;
}

void func_147(Object obParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x48AD Hash - 0x9E5AD4FF ^0xCE9B419A
{
	const char* str;
	int num;

	if (func_81(piParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*piParam1, 11))
			return;
	
		func_106(&(piParam1->f_6), false, true);
	}

	if (!func_81(piParam1->f_6) && !MISC::IS_BIT_SET(*piParam1, 4))
	{
		str = piParam1->f_5;
	
		if (func_136(piParam1))
		{
			if (piParam1->f_8 != iParam5)
				iParam5 = piParam1->f_8;
		
			piParam1->f_6 = func_161(str, piParam1->f_7, obParam0, piParam1->f_9, iParam4, false, 0, iParam5, fParam2, piParam1->f_2, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), piParam1->f_10, false);
		
			if (func_81(piParam1->f_6))
			{
				if (!bParam6)
				{
					num = -1;
					func_155(piParam1->f_6, obParam0, 0, true, num);
				}
				else
				{
					func_162(piParam1->f_6, 17, true, true);
				}
			
				if (MISC::IS_BIT_SET(*piParam1, 1))
					if (MISC::IS_BIT_SET(*piParam1, 3))
						func_163(piParam1->f_6, str, piParam1->f_16, piParam1->f_14, true);
					else
						func_82(piParam1->f_6, str, piParam1->f_14, true);
			
				if (MISC::IS_BIT_SET(*piParam1, 10))
					func_162(piParam1->f_6, 16, true, true);
			
				if (!MISC::IS_BIT_SET(*piParam1, 0) || MISC::IS_BIT_SET(*piParam1, 13))
					func_84(piParam1->f_6, false, true);
				else
					func_84(piParam1->f_6, true, true);
			}
		}
	}

	return;
}

int func_148(Ped pedParam0) // Position - 0x4A04 Hash - 0xB2D81349 ^0xACC293B5
{
	Hash pedRelationshipGroupDefaultHash;

	pedRelationshipGroupDefaultHash = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam0);

	switch (pedRelationshipGroupDefaultHash)
	{
		case joaat("rel_gang_odriscoll"):
			return 0;
	
		case joaat("rel_gang_smugglers"):
			return 5;
	
		case joaat("rel_gang_laramie_gang"):
			return 4;
	
		case joaat("rel_gang_skinner_brothers"):
			return 3;
	
		case joaat("rel_gang_lemoyne_raiders"):
			return 2;
	
		case joaat("rel_gang_murfree_brood"):
			return 1;
	
		default:
		
	}

	return -1;
}

void func_149(int* piParam0, int iParam1) // Position - 0x4A59 Hash - 0xF6A14047 ^0x2BDBE9DA
{
	if (!func_103(piParam0, 19))
	{
		if (piParam0->f_9 != iParam1)
		{
			piParam0->f_9 = iParam1;
			func_104(piParam0, 14);
		}
	}

	return;
}

BOOL func_150(BOOL bParam0) // Position - 0x4A84 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_151(BOOL bParam0) // Position - 0x4A94 Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

BOOL func_152(Ped pedParam0, int iParam1) // Position - 0x4AA5 Hash - 0x25D0971D ^0xF7D4E234
{
	var unk;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	num = PED::_0x4642182A298187D0(pedParam0, iParam1, &unk, 4, 1);

	if (num != 0)
		return 1;

	return 0;
}

BOOL func_153(int* piParam0, int* piParam1, Object obParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, float fParam9, BOOL bParam10, int iParam11) // Position - 0x4AE4 Hash - 0x99448FD3 ^0x2F09ABA3
{
	BOOL flag;
	BOOL flag2;

	flag = MISC::IS_BIT_SET(*piParam1, 0) && !MISC::IS_BIT_SET(*piParam1, 4);

	if (MISC::IS_BIT_SET(*piParam1, 13))
		return true;

	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*piParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*piParam0, 25))
				MISC::SET_BIT(piParam0, 24);
		
			return true;
		}
	}

	if (MISC::IS_BIT_SET(*piParam1, 9))
	{
		MISC::CLEAR_BIT(piParam1, 9);
		return true;
	}

	if (bParam6)
		if (MISC::IS_BIT_SET(*piParam1, 6))
			return true;
	else if (MISC::IS_BIT_SET(*piParam1, 5))
		return true;

	if (MISC::IS_BIT_SET(*piParam1, 7))
		if (iParam5 > piParam1->f_4)
			return true;

	if (!MISC::IS_BIT_SET(*piParam1, 17))
		if (bParam3)
			if (bParam4)
				return true;

	if (!MISC::IS_BIT_SET(*piParam1, 18))
	{
		if (MISC::IS_BIT_SET(*piParam1, 8))
		{
			flag2 = 0;
		
			if (fParam9 > -1f)
				if (fParam9 < piParam1->f_3)
					flag2 = 1;
		
			if (!bParam7)
				if (bParam8 || flag2)
					return true;
		}
	}

	if (!MISC::IS_BIT_SET(*piParam1, 2))
		if (MISC::IS_BIT_SET(*piParam1, 1))
			if (iParam11 < piParam1->f_14)
				return true;

	return !flag;
}

BOOL func_154(int iParam0, BOOL bParam1) // Position - 0x4C1E Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_81(iParam0))
		return false;

	return !func_144(iParam0, 4);
}

void func_155(int iParam0, Object obParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x4C43 Hash - 0x8A4F30F0 ^0xE1CE78DB
{
	int num;

	if (bParam3 && !func_81(iParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam1))
		return;

	num = func_112(iParam0);
	func_162(iParam0, 18, false, true);
	func_162(iParam0, 17, false, true);

	if (iParam4 == -1)
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(obParam1);

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam4, iParam2);
	return;
}

BOOL func_156(int iParam0, BOOL bParam1) // Position - 0x4CA8 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_81(iParam0))
		return false;

	num = func_112(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_157(int iParam0, BOOL bParam1) // Position - 0x4D00 Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_81(iParam0))
		return false;

	num = func_112(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_158(int iParam0, BOOL bParam1) // Position - 0x4D33 Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_81(iParam0))
		return;

	num = func_112(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[num /*18*/].f_3);
	return;
}

BOOL func_159(var uParam0, int iParam1) // Position - 0x4D65 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_21(uParam0))
		return false;

	if (func_9(uParam0) > iParam1)
		return true;

	return false;
}

BOOL func_160(int iParam0) // Position - 0x4D8C Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_144(iParam0, 2);
}

// Unhandled jump detected. Output should be considered invalid
int func_161(const char* sParam0, Hash hParam1, Object obParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x4D9B Hash - 0xA9244E74 ^0xC0A4C4ED
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_144(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (obParam2 == Global_1945188[i /*18*/].f_11 && hParam1 == Global_1945188[i /*18*/].f_4)
					if (iParam3 <= Global_1945188[i /*18*/])
						return i;
			
				goto 0x8C;
			}
		}
	
		if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_164(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, obParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_162(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4E72 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_81(iParam0))
		return;

	num = func_112(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_163(int iParam0, const char* sParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x4EBD Hash - 0x3019E4B2 ^0x1E9F9706
{
	int num;

	if (bParam4 && !func_81(iParam0))
		return;

	num = func_112(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(10, sParam1, uParam2, uParam3));
	return;
}

void func_164(int iParam0, Hash hParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Object obParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x4F10 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = obParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
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
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, obParam11);
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
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1945188[iParam0 /*18*/].f_3 = prompt;
	func_114(iParam0, true);
	func_115(iParam0, true);
	func_116(iParam0, 128);
	return;
}

