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
	var uLocal_18 = -1;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = -1;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 1;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = -1;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 1;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	eStackSize essLocal_47 = 0;
	int iLocal_48 = 0;
	eStackSize essScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x660C08F ^0xD41284A0
{
	int num;
	int num2;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_44 = 20000;
	essLocal_47 = essScriptParam_0;
	iLocal_45 = essScriptParam_0.f_2;
	func_1();
	func_2();
	iLocal_46 = MISC::GET_GAME_TIMER();
	num = 0;

	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_46)
		{
			iLocal_46 = 0;
			func_4(essLocal_47, &iLocal_45);
		
			switch (iLocal_45)
			{
				case 0:
					iLocal_45 = 1;
					break;
			
				case 1:
					func_5(essLocal_47);
				
					if (func_7(func_6(essLocal_47)))
						func_8(func_6(essLocal_47), 4);
				
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_9(essLocal_47));
					num2 = func_10(essLocal_47);
				
					if (num2 != -1)
						Global_1935183.f_6[num2] = 1;
				
					Global_1897950 = -1;
					iLocal_48 = MISC::GET_GAME_TIMER() + iLocal_44;
					iLocal_45 = 2;
					break;
			
				case 2:
					if (func_11() || iLocal_48 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT(essLocal_47);
						iLocal_48 = MISC::GET_GAME_TIMER() + iLocal_44;
						iLocal_45 = 3;
					}
					break;
			
				case 3:
					if (func_13(essLocal_47) || iLocal_48 < MISC::GET_GAME_TIMER())
					{
						func_14(essLocal_47);
						iLocal_48 = iLocal_44 + MISC::GET_GAME_TIMER();
						iLocal_45 = 4;
					}
					break;
			
				case 4:
					if (func_15(essLocal_47) || iLocal_48 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0(essLocal_47);
						iLocal_48 = iLocal_44 + MISC::GET_GAME_TIMER();
						iLocal_45 = 6;
					}
					break;
			
				case 6:
					if (func_7(func_6(essLocal_47)))
						if (func_17(func_6(essLocal_47), 4) && !(iLocal_48 < MISC::GET_GAME_TIMER()))
							break;
				
					if (func_18(essLocal_47) || iLocal_48 < MISC::GET_GAME_TIMER())
					{
						func_19(essLocal_47, 4);
						iLocal_48 = iLocal_44 + MISC::GET_GAME_TIMER();
						iLocal_45 = 7;
					}
					break;
			
				case 7:
					if (iLocal_48 < MISC::GET_GAME_TIMER() || func_20() != false || Global_1051260.f_3790)
					{
						_DEBUG_PRINT_0_0(essLocal_47);
						func_22();
					
						if (!func_23(2057, false))
							func_24();
					
						func_25();
						func_26();
						func_27(essLocal_47);
						_DEBUG_PRINT_0_0_0(essLocal_47);
						func_29();
						func_30();
						iLocal_45 = 8;
					}
					break;
			
				case 8:
					_DEBUG_PRINT_0_0_0_0(essLocal_47);
					func_32();
					iLocal_45 = 9;
					break;
			
				case 9:
					func_33(&Global_1898004);
					func_34(essLocal_47, &Global_1898004);
					iLocal_45 = 10;
					break;
			
				case 10:
					func_35(essLocal_47);
				
					if (func_20() == -1)
						HUD::_DISABLE_HUD_CONTEXT(1833957607);
				
					func_19(essLocal_47, 8);
				
					if (func_36(32))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_IN(500);
					
						func_37(32);
					}
				
					iLocal_45 = 11;
					break;
			
				case 11:
					if (func_38(essLocal_47))
						iLocal_46 = 1000 + MISC::GET_GAME_TIMER();
				
					func_39(&Global_1898004, essLocal_47);
					func_40(essLocal_47);
					func_19(essLocal_47, 8);
				
					if (func_41())
						PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				
					PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[essLocal_47 /*35*/].f_10);
				
					if (Global_1888801[essLocal_47 /*35*/].f_11 > 0f)
						PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[essLocal_47 /*35*/].f_11);
					break;
			
				case 12:
					func_42(num);
					num = 1 + num;
					break;
			}
		}
	
		if (Global_1888801[essLocal_47 /*35*/].f_12 != 0)
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1888801[essLocal_47 /*35*/].f_12);
	
		BUILTIN::WAIT(0);
	}

	num = 0;

	while (!func_42(num))
	{
		num = 1 + num;
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x357 Hash - 0x9015350 ^0xDF5F78B6
{
	int num;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		num = 0;
	
		while (!func_42(num))
		{
			num = num + 1;
			BUILTIN::WAIT(0);
		}
	
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0x3A7 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_3() // Position - 0x3AF Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void func_4(eStackSize essParam0, var uParam1) // Position - 0x3B8 Hash - 0x1DD95532 ^0x798CA2F1
{
	if (!func_36(16))
		return;

	if (Global_1894899.f_7 == 0)
	{
		func_37(16);
		return;
	}

	if (!func_43(essParam0))
	{
		Global_1894899.f_7 = 0;
		func_37(16);
		return;
	}

	if (func_44(8))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 7;
			return;
		}
		else if (*uParam1 != 7)
		{
			func_45(8);
			*uParam1 = 11;
			return;
		}
	}

	if (func_44(2))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 3;
			return;
		}
		else if (*uParam1 != 3)
		{
			func_45(2);
			*uParam1 = 11;
			return;
		}
	}

	if (func_44(16))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 8;
			return;
		}
		else if (*uParam1 != 8)
		{
			func_45(16);
			*uParam1 = 11;
			return;
		}
	}

	if (func_44(4))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 6;
			return;
		}
		else if (*uParam1 != 6)
		{
			func_45(4);
			*uParam1 = 11;
			return;
		}
	}

	if (func_44(1))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 2;
			return;
		}
		else if (*uParam1 != 2)
		{
			func_45(1);
			*uParam1 = 11;
			return;
		}
	}

	return;
}

void func_5(eStackSize essParam0) // Position - 0x4E6 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

int func_6(eStackSize essParam0) // Position - 0x4EE Hash - 0x224FC50D ^0x224FC50D
{
	if (essParam0 < 0)
		return -1;
	else if (essParam0 <= 10)
		return 0;
	else if (essParam0 <= 29)
		return 1;
	else if (essParam0 <= 32)
		return 2;
	else if (essParam0 <= 36)
		return 3;
	else if (essParam0 <= 39)
		return 4;
	else if (essParam0 <= 49)
		return 7;
	else if (essParam0 <= 56)
		return 6;
	else if (essParam0 <= 61)
		return 8;
	else if (essParam0 <= 76)
		return 9;
	else if (essParam0 <= 92)
		return 10;
	else if (essParam0 <= 106)
		return 11;
	else if (essParam0 <= 113)
		return 12;
	else if (essParam0 <= 116)
		return 13;
	else if (essParam0 <= 119)
		return 14;
	else if (essParam0 <= 125)
		return 15;
	else if (essParam0 <= 127)
		return 16;

	return -1;
}

BOOL func_7(int iParam0) // Position - 0x5EA Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

void func_8(int iParam0, BOOL bParam1) // Position - 0x600 Hash - 0xACB2A3A5 ^0xACB2A3A5
{
	Global_1897952[iParam0 /*2*/] = Global_1897952[iParam0 /*2*/] || bParam1;
	return;
}

Hash func_9(int iParam0) // Position - 0x61B Hash - 0x9C8621E4 ^0xA7A3B249
{
	Hash num;

	switch (iParam0)
	{
		case 5:
			num = joaat("SAINTDENIS_RESIDENTS");
			break;
	
		case 26:
			num = joaat("STRAWBERRY_RESIDENTS");
			break;
	
		case 35:
			num = joaat("OLDFORTWALLACE_RESIDENTS");
			break;
	
		case 38:
			num = joaat("BLACKWATER_RESIDENTS");
			break;
	
		case 56:
			num = joaat("WAPITI_RESIDENTS");
			break;
	
		case 61:
			num = joaat("MANICATO_RESIDENTS");
			break;
	
		case 69:
			num = joaat("EMERALDRANCH_RESIDENTS");
			break;
	
		case 76:
			num = joaat("VALENTINE_RESIDENTS");
			break;
	
		case 78:
			num = joaat("ANNESBURG_RESIDENTS");
			break;
	
		case 82:
			num = joaat("BUTCHERCREEK_RESIDENTS");
			break;
	
		case 92:
			num = joaat("VANHORNPOST_RESIDENTS");
			break;
	
		case 105:
			num = joaat("RHODES_RESIDENTS");
			break;
	
		case 110:
			num = joaat("MANZANITAPOST_RESIDENTS");
			break;
	
		default:
			num = 0;
			break;
	}

	return num;
}

int func_10(int iParam0) // Position - 0x703 Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case 3:
			return 6;
	
		case 5:
			return 9;
	
		case 26:
			return 10;
	
		case 38:
			return 2;
	
		case 56:
			return 15;
	
		case 65:
			return 5;
	
		case 75:
			return 11;
	
		case 76:
			return 13;
	
		case 78:
			return 0;
	
		case 82:
			return 4;
	
		case 92:
			return 14;
	
		case 93:
			return 3;
	
		case 105:
			return 8;
	
		case 110:
			return 7;
	
		case 115:
			return 12;
	
		case 120:
			return 1;
	
		default:
		
	}

	return -1;
}

BOOL func_11() // Position - 0x7BC Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void _DEBUG_PRINT(eStackSize essParam0) // Position - 0x7C5 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

BOOL func_13(eStackSize essParam0) // Position - 0x7D1 Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	essParam0 = essParam0;
	return true;
}

void func_14(eStackSize essParam0) // Position - 0x7DE Hash - 0xF8223F35 ^0xDCC5830F
{
	essParam0 = essParam0;
	func_46(398241243, 1);
	func_46(90310950, 1);
	func_46(178754137, 1);
	func_46(441201058, 1);
	func_46(-1035861617, 1);
	func_46(-721377524, 1);
	func_46(-1514256248, 1);
	func_46(1381081784, 1);
	func_46(2145058250, 1);
	func_46(64259291, 1);
	OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(398241243, false);
	OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(90310950, false);
	OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(178754137, false);
	OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(441201058, false);
	OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(-1035861617, false);
	OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(-721377524, false);
	OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(-1514256248, false);
	OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(1381081784, false);
	OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(2145058250, false);
	OBJECT::_DOOR_SYSTEM_SET_AUTOMATIC_STATE(64259291, false);
	return;
}

BOOL func_15(eStackSize essParam0) // Position - 0x8B2 Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	essParam0 = essParam0;
	return true;
}

void _DEBUG_PRINT_0(eStackSize essParam0) // Position - 0x8BF Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

BOOL func_17(int iParam0, BOOL bParam1) // Position - 0x8CB Hash - 0xFB77C6C8 ^0xFB77C6C8
{
	return Global_1897952[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_18(eStackSize essParam0) // Position - 0x8E0 Hash - 0x6DE0FDC2 ^0x6DE0FDC2
{
	return func_47(essParam0, -1, -1, false);
}

void func_19(eStackSize essParam0, BOOL bParam1) // Position - 0x8F1 Hash - 0x1F53BD85 ^0xA70B55E5
{
	if (Global_1572887.f_12 == -1)
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] || bParam1;
	else
		Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] || bParam1;

	return;
}

BOOL func_20() // Position - 0x934 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void _DEBUG_PRINT_0_0(eStackSize essParam0) // Position - 0x942 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

void func_22() // Position - 0x94E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_23(int iParam0, BOOL bParam1) // Position - 0x956 Hash - 0x26407603 ^0x721F15B0
{
	if (func_48(iParam0))
		return true;

	if (!bParam1)
		if (func_49(5000))
			return true;

	switch (func_50(0))
	{
		case 0:
			return false;
	
		case 1:
			if (iParam0 & 1 != 0)
				return true;
			break;
	
		case 2:
			if (iParam0 & 16 != 0)
				return true;
			break;
	
		case 3:
			if (iParam0 & 128 != 0)
				return true;
			break;
	
		case 4:
			if (iParam0 & 2 != 0)
				return true;
			break;
	
		case 5:
			if (iParam0 & 32 != 0)
				return true;
			break;
	
		case 6:
			if (iParam0 & 4 != 0)
				return true;
			break;
	
		case 8:
			if (iParam0 & 8 != 0)
				return true;
			break;
	
		case 9:
			if (iParam0 & 64 != 0)
				return true;
			break;
	
		case 10:
			if (iParam0 & 512 != 0)
				return true;
			break;
	
		case 11:
			if (iParam0 & 256 != 0)
				return true;
			break;
	}

	return false;
}

void func_24() // Position - 0xA70 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_25() // Position - 0xA78 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_26() // Position - 0xA80 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_27(eStackSize essParam0) // Position - 0xA88 Hash - 0x7341CB79 ^0x4134664C
{
	if (func_20() == -1)
	{
		if (!func_51(0, false, true))
		{
			func_52(-1217326873, true, 0, false, false, 0, false, false);
			func_52(-382798750, true, 0, false, false, 0, false, false);
			func_52(-1907171172, true, 0, false, false, 0, false, false);
			func_52(1603339033, true, 0, false, false, 0, false, false);
			func_52(612230150, true, 0, false, false, 0, false, false);
			func_52(-215219869, true, 0, false, false, 0, false, false);
			func_52(1624230601, true, 0, false, false, 0, false, false);
			func_52(1473624189, true, 0, false, false, 0, false, false);
			func_52(104193638, true, 0, false, false, 0, false, false);
			func_52(-221005918, true, 0, false, false, 0, false, false);
			func_52(34778421, true, 0, false, false, 0, false, false);
			func_52(-263452248, true, 0, false, false, 0, false, false);
			func_52(-1194059083, true, 0, false, false, 0, false, false);
			func_52(638645553, true, 0, false, false, 0, false, false);
			func_52(-1120193049, true, 0, false, false, 0, false, false);
			func_52(-2022127005, true, 0, false, false, 0, false, false);
			func_52(-1715573010, true, 0, false, false, 0, false, false);
			func_52(1754631325, true, 0, false, false, 0, false, false);
			func_52(119948423, true, 0, false, false, 0, false, false);
			func_52(351789098, true, 0, false, false, 0, false, false);
		}
		else
		{
			func_52(-1907171172, false, 0, false, true, 0, false, false);
			func_52(1603339033, false, 0, false, true, 0, false, false);
			func_52(-1217326873, false, 0, false, true, 0, false, false);
			func_52(-382798750, false, 0, false, true, 0, false, false);
			func_52(612230150, false, 0, false, true, 0, false, false);
			func_52(-215219869, false, 0, false, true, 0, false, false);
			func_52(1624230601, false, 0, false, true, 0, false, false);
			func_52(1473624189, false, 0, false, true, 0, false, false);
			func_52(104193638, false, 0, false, true, 0, false, false);
			func_52(-221005918, false, 0, false, true, 0, false, false);
			func_52(34778421, false, 0, false, true, 0, false, false);
			func_52(-263452248, false, 0, false, true, 0, false, false);
			func_52(-1194059083, false, 0, false, true, 0, false, false);
			func_52(638645553, false, 0, false, true, 0, false, false);
			func_52(-1120193049, false, 0, false, true, 0, false, false);
			func_52(-2022127005, false, 0, false, true, 0, false, false);
			func_52(-1715573010, false, 0, false, true, 0, false, false);
			func_52(1754631325, false, 0, false, true, 0, false, false);
			func_52(119948423, false, 0, false, true, 0, false, false);
			func_52(351789098, false, 0, false, true, 0, false, false);
		}
	}

	return;
}

void _DEBUG_PRINT_0_0_0(eStackSize essParam0) // Position - 0xD26 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

void func_29() // Position - 0xD32 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_30() // Position - 0xD3A Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void _DEBUG_PRINT_0_0_0_0(eStackSize essParam0) // Position - 0xD42 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

void func_32() // Position - 0xD4E Hash - 0x2E7B6F22 ^0x3889AD2B
{
	if (!Global_1894899.f_186)
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1894899.f_182, Global_1894899.f_183, Global_1894899.f_184, Global_1894899.f_185);

	return;
}

void func_33(var uParam0) // Position - 0xD7F Hash - 0x28951280 ^0x95B241A
{
	int i;

	if (uParam0->f_61 == 0)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		uParam0->[i /*3*/] = 0;
		uParam0->[i /*3*/].f_1 = 0;
		uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	}

	uParam0->f_61 = 0;
	return;
}

void func_34(eStackSize essParam0, var uParam1) // Position - 0xDC5 Hash - 0x71931A41 ^0x38641BC4
{
	essParam0 = essParam0;
	uParam1->f_61 = uParam1->f_61;
	return;
}

void func_35(eStackSize essParam0) // Position - 0xDD9 Hash - 0xD90F0DEC ^0xD90F0DEC
{
	if (!func_53(essParam0))
		return;

	func_54();
	return;
}

BOOL func_36(BOOL bParam0) // Position - 0xDF2 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1894899 && bParam0 != false;
}

void func_37(BOOL bParam0) // Position - 0xE03 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1894899 = Global_1894899 - Global_1894899 && bParam0;
	return;
}

BOOL func_38(eStackSize essParam0) // Position - 0xE1B Hash - 0x12878ED6 ^0x12878ED6
{
	essParam0 = essParam0;
	return false;
}

void func_39(var uParam0, eStackSize essParam1) // Position - 0xE28 Hash - 0x8A7E7334 ^0x9F0B10C1
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;
	int num;

	if (BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_55(Global_1935630, 16384) || func_55(Global_1935630, 8388608))
		return;

	if (func_56(uParam0, 1))
		return;

	uParam0->f_63 = uParam0->f_63 + 1;

	if (uParam0->f_63 < 10)
		return;

	uParam0->f_63 = 0;
	flag = 0;
	flag2 = CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT();
	flag3 = func_57();

	for (i = 0; i < uParam0->f_61; i = i + 1)
	{
		switch (uParam0->[i /*3*/].f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->[i /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME(uParam0->[i /*3*/], Global_36))
					{
						if (!flag2 && !flag3)
						{
							if (!func_58(&uParam0->[i /*3*/], 1) && func_59(essParam1) && !func_60(essParam1, 16))
							{
								func_62(essParam1, func_61(), -1, false, -1, false);
								func_63(&uParam0->[i /*3*/], 1);
							}
						
							func_64(essParam1, false);
						}
					
						flag = 1;
					}
				}
				break;
		
			default:
				break;
		}
	}

	if (func_20() == -1)
	{
		if (func_65() != flag)
		{
			num = 0;
		
			if (flag)
				num = 2;
			else
				num = 1;
		
			func_66();
			func_67(Global_1310750.f_16071, false, num, false, false);
		}
	}

	func_68(flag);

	if (func_20() == -1)
		func_70(essParam1 == func_69() && flag);

	return;
}

int func_40(eStackSize essParam0) // Position - 0xFB5 Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	essParam0 = essParam0;
	return 1;
}

BOOL func_41() // Position - 0xFC2 Hash - 0x1E5EE2B6 ^0xA7F309C
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	var unk;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.75f)
		unk = weatherType1;
	else
		unk = weatherType2;

	if (func_71(unk))
		return true;

	return false;
}

BOOL func_42(int iParam0) // Position - 0xFF8 Hash - 0xA6DB229E ^0x72633A56
{
	if (iParam0 == 0)
	{
		func_72();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_19(essLocal_47, 2048);
	
		if (func_7(func_61()))
			func_8(func_61(), 8);
	
		func_73(essLocal_47, 4);
		func_73(essLocal_47, 8);
		func_68(0);
	
		if (func_20() == -1)
			func_70(false);
	
		func_74(essLocal_47);
		func_32();
		return false;
	}
	else
	{
		func_75(essLocal_47);
		func_76(essLocal_47);
		func_77(essLocal_47);
	
		if (!func_78(essLocal_47, false))
			return false;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

BOOL func_43(eStackSize essParam0) // Position - 0x1089 Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_53(essParam0))
		return false;

	return func_79(essParam0, 8);
}

BOOL func_44(int iParam0) // Position - 0x10A7 Hash - 0xC67CC87B ^0x33ED18E1
{
	return Global_1894899.f_7 && iParam0 != false;
}

void func_45(int iParam0) // Position - 0x10BA Hash - 0xDD4F2B2E ^0xED52CD7
{
	Global_1894899.f_7 = Global_1894899.f_7 - Global_1894899.f_7 && iParam0;
	return;
}

void func_46(Hash hParam0, int iParam1) // Position - 0x10D8 Hash - 0x303982C6 ^0x303982C6
{
	func_52(hParam0, false, 0, false, true, 0, false, false);
	return;
}

BOOL func_47(eStackSize essParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x10ED Hash - 0x156C7489 ^0x156C7489
{
	int num;
	int num2;
	int num3;

	if (func_20() != -1)
		return 1;

	if (!func_53(essParam0))
		return 1;

	if (func_79(essParam0, 16))
		return 1;

	func_80(essParam0) && !func_81(essParam0);

	if (func_82(essParam0, &num, &num2, false, false))
	{
		if (func_83(iParam1))
			num = iParam1;
	
		if (func_83(iParam2))
			num2 = iParam2;
	
		if (Global_1897950 < num || Global_1897950 > num2)
			Global_1897950 = num;
	
		while (true)
		{
			if (!func_80(essParam0) || func_81(essParam0) || func_84(Global_1897950))
				func_85(Global_1897950, false);
		
			Global_1897950 = Global_1897950 + 1;
			num3 = num3 + 1;
		
			if (Global_1897950 > num2)
			{
				Global_1897950 = -1;
				return 1;
			}
		
			if (num3 >= 10 && !bParam3)
				return 0;
		}
	}

	return 1;
}

BOOL func_48(int iParam0) // Position - 0x11E5 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1935630 && iParam0 != false;
}

BOOL func_49(int iParam0) // Position - 0x11F6 Hash - 0x9C8B9DFE ^0x5874CE32
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1898438;
}

int func_50(int iParam0) // Position - 0x120A Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_51(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x121E Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_86())
			return true;
	
		if (Global_1058888.f_3 && !Global_1572887.f_8)
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1898164.f_163;
		else
			return Global_1898164.f_164;
	}

	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		num = func_87(Global_1898164.f_1[0 /*5*/]);
	
		if (func_88(num) && func_89(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_90(Global_1898164.f_1[0 /*5*/]))
		return true;

	if (Global_1935630 && 40959 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1898438)
			return true;

	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
	
		case 1:
			return iParam0 & 1 == 0;
	
		case 2:
			return iParam0 & 16 == 0;
	
		case 3:
			return iParam0 & 128 == 0;
	
		case 4:
			return iParam0 & 2 == 0;
	
		case 5:
			return iParam0 & 32 == 0;
	
		case 6:
			return iParam0 & 4 == 0;
	
		case 8:
			return iParam0 & 8 == 0;
	
		case 9:
			return iParam0 & 64 == 0;
	
		case 10:
			return iParam0 & 512 == 0;
	
		case 11:
			return iParam0 & 256 == 0;
	
		default:
		
	}

	return false;
}

void func_52(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1422 Hash - 0xD777F4CF ^0xBFF3124C
{
	func_91(hParam0, false, false);

	if (func_92(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_93(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_94(hParam0, true);
			else
				func_95(hParam0, true);
		else
			func_96(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_97())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

BOOL func_53(eStackSize essParam0) // Position - 0x14AD Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

void func_54() // Position - 0x14C3 Hash - 0xC70365F7 ^0xC70365F7
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_98(i))
			Global_1898130[i] = -1;
	}

	return;
}

BOOL func_55(int iParam0, int iParam1) // Position - 0x14F0 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_56(var uParam0, int iParam1) // Position - 0x14FF Hash - 0x718DD1EF ^0x7E064505
{
	return uParam0->f_62 && iParam1 != false;
}

BOOL func_57() // Position - 0x1510 Hash - 0x463DA432 ^0x3948CA04
{
	return func_55(Global_1935630, 4096);
}

BOOL func_58(var uParam0, int iParam1) // Position - 0x1523 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_59(eStackSize essParam0) // Position - 0x1534 Hash - 0x97598EC0 ^0xADF7FB13
{
	if (!func_53(essParam0))
		return false;

	return Global_1888801[essParam0 /*35*/].f_20 == 1 || Global_1888801[essParam0 /*35*/].f_20 == 2 && !func_99(essParam0);
}

BOOL func_60(eStackSize essParam0, int iParam1) // Position - 0x1574 Hash - 0xA98B69C6 ^0xAD9FDA10
{
	if (essParam0 < 0 || essParam0 >= 150)
		return false;

	return Global_1888801[essParam0 /*35*/].f_21 && iParam1 != false;
}

int func_61() // Position - 0x15A1 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

void func_62(eStackSize essParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x15AF Hash - 0x659AC4C5 ^0x8A3286AA
{
	BOOL flag;
	const char* str;
	char* str2;
	Hash hash;
	int num;
	int num2;
	var unk;
	float temperatureAtCoords;
	char* str3;
	char* str4;
	var unk2;

	if (!func_100())
		return;

	str = func_101(essParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (bParam3)
			return;
	
		str = "DISTRICT_GRIZZLIES";
	}

	if (!func_102(iParam4))
		if (func_53(essParam0))
			iParam4 = func_103(func_6(essParam0));
		else
			iParam4 = func_103(iParam1);

	if (func_102(iParam4))
		hash = func_104(iParam4);

	if (flag && bParam3)
	{
		str2 = func_106(func_105(iParam2));
	}
	else if (func_107(iParam1, 2) || func_108(iParam4, 2) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1894899.f_9 = 1;
	}
	else if (func_53(essParam0) && func_79(essParam0, 16777216) && !Global_1894899.f_9)
	{
		str2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (hash >= 1 && !Global_1894899.f_9)
	{
		str2 = MISC::VAR_STRING(2, "REGION_BOUNTY", hash);
		Global_1894899.f_9 = 1;
	}
	else
	{
		num = func_110(func_109());
		num2 = func_111(func_109());
	
		if (num2 < 10)
			TEXT_LABEL_APPEND_STRING(&unk, "0", 8);
	
		TEXT_LABEL_APPEND_INT(&unk, num2, 8);
		temperatureAtCoords = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
	
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			str4 = "AM";
		
			if (num >= 12)
			{
				str4 = "PM";
			
				if (num > 12)
					num = num - 12;
			}
			else if (num == 0)
			{
				num = 12;
			}
		
			str3 = "TIME_AND_TEMP_C";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_112(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(674, str3, num, func_113(&unk, joaat("COLOR_PURE_WHITE")), str4, func_113(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str3 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_112(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(162, str3, num, func_113(&unk, joaat("COLOR_PURE_WHITE")), func_113(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1894899.f_9 = 0;
	}

	Global_1934266.f_148 = func_114(str, str2, 4000, 0, 0, 0, false, true);
	return;
}

void func_63(var uParam0, int iParam1) // Position - 0x1813 Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_64(int iParam0, BOOL bParam1) // Position - 0x1826 Hash - 0x1E78A51E ^0x8BB44A98
{
	if (Global_1572887.f_10 && func_20() == false)
		return;

	if (func_115(128))
		return;

	if (!func_116(iParam0))
		return;

	if (func_79(iParam0, 32))
		return;

	func_19(iParam0, 32);
	func_117(&Global_1935630, 8192);
	func_119(func_118(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_119(func_118(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_119(func_118(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_119(func_118(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_119(func_118(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_119(func_118(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_119(func_118(joaat("discovered"), joaat("new_austin_areas")), 1);
			break;
	}

	switch (iParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_CRAWDAD_WILLIES"));
			break;
	
		case 1:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MACOMBS_END"));
			break;
	
		case 2:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MERKINS_WALLER"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FISHING_SPOT"));
			break;
	
		case 6:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HAGEN_ORCHARDS"));
			break;
	
		case 7:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SERIAL_KILLER"));
			break;
	
		case 9:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SHADY_BELLE"));
			break;
	
		case 10:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_SILTWATER_STRAND"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_SILTWATER_STRAND"));
			break;
	
		case 11:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_EVENTAREA_APPLESEED_TIMBER_COMPANY"));
			break;
	
		case 12:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BERYLS_DREAM"));
			break;
	
		case 15:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_EVENTAREA_FORT_RIGGS"));
			break;
	
		case 16:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HANGING_DOG_RANCH"));
			break;
	
		case 17:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LONE_MULE_STEAD"));
			break;
	
		case 21:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_PAINTED_SKY"));
			break;
	
		case 22:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SETTLEMENT_PRONGHORN_RANCH"));
			break;
	
		case 24:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_STILT_SHACK"));
			break;
	
		case 25:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_SHEPHERDS_RISE"));
			break;
	
		case 26:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TAXIDERMIST_HOUSE"));
			break;
	
		case 27:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VALLEY_VIEW"));
			break;
	
		case 28:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_WALLACE_OVERLOOK"));
			break;
	
		case 29:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WATSONS_CABIN"));
			break;
	
		case 30:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_CANEBREAK_MANOR"));
			break;
	
		case 31:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COPPERHEAD_LANDING"));
			break;
	
		case 34:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FIRWOOD_RISE"));
			break;
	
		case 36:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SIX_POINT_CABIN"));
			break;
	
		case 37:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BEECHERS_HOPE"));
			break;
	
		case 40:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ADLER_RANCH"));
			break;
	
		case 42:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CHEZ_PORTER"));
			break;
	
		case 43:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_COLTER"));
			break;
	
		case 44:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_FROZEN_EXPLORERS"));
			break;
	
		case 45:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MILLESANI_CLAIM"));
			break;
	
		case 49:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_EWING_BASIN"));
			break;
	
		case 54:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_THE_LOFT"));
			break;
	
		case 55:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VETERANS_HOMESTEAD"));
			break;
	
		case 62:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_OLD_GREENBANK_MILL"));
			break;
	
		case 63:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_BEECHERS_C"));
			break;
	
		case 64:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CARMODY_DELL"));
			break;
	
		case 65:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_CORNWALL_KEROSENE_TAR"));
			break;
	
		case 66:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_GUTHRIE_FARM"));
			break;
	
		case 68:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOWNES_RANCH"));
			break;
	
		case 71:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HORSESHOE_OVERLOOK"));
			break;
	
		case 72:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LARNED_SOD"));
			break;
	
		case 74:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LUCKYS_CABIN"));
			break;
	
		case 77:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ABERDEEN_PIG_FARM"));
			break;
	
		case 79:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_BEAVER_HOLLOW"));
			break;
	
		case 80:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BLACK_BALSAM_RISE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_01"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_02"));
			break;
	
		case 82:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BUTCHER_CREEK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_POISON_LEAK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_29"));
			break;
	
		case 83:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOVERHILL"));
			break;
	
		case 85:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_ANGRY_ISOLATIONIST"));
			break;
	
		case 86:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_MACLEANS_HOUSE"));
			break;
	
		case 87:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MOSSY_FLATS"));
			break;
	
		case 89:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WILLARDS_REST"));
			break;
	
		case 91:
			MAP::_MAP_DISCOVER_REGION(85299473);
			break;
	
		case 96:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CATFISH_JACKSONS"));
			break;
	
		case 98:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_CLEMENS_POINT"));
			break;
	
		case 99:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COMPSONS_STEAD"));
			break;
	
		case 100:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HILL_HAVEN_RANCH"));
			break;
	
		case 102:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LONNIES_SHACK"));
			break;
	
		case 104:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_PASTURE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_HOUSE"));
			break;
	
		case 106:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SLAVE_PEN"));
			break;
	
		case 107:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_AURORA_BASIN"));
			break;
	
		case 109:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COCHINAY"));
			break;
	
		case 112:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TANNERS_REACH"));
			MAP::_MAP_DISCOVER_REGION(-960425936);
			break;
	
		case 114:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_GAPTOOTH_BREACH"));
			break;
	
		case 121:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_COOTS_CHAPEL"));
			break;
	
		case 122:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LAKE_DON_JULIO_HOUSE"));
			break;
	
		case 123:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RILEYS_CHARGE"));
			break;
	
		case 124:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_RIDGEWOOD_FARM"));
			break;
	}

	if (bParam1)
		func_19(iParam0, 64);

	return;
}

BOOL func_65() // Position - 0x1E9B Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_120() != -1;
}

void func_66() // Position - 0x1EB6 Hash - 0x18ACD9D3 ^0xB2ADEAB8
{
	if (!func_121(Global_1327479))
		return;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));

	func_122(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
	return;
}

void func_67(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1F29 Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_123() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_121(num) && !func_124(num, iParam2) && !bParam3 || !func_125(num) && !bParam4 || !func_126(num))
			if (num != iParam0)
				func_127(i);
	}

	return;
}

void func_68(BOOL bParam0) // Position - 0x1FB7 Hash - 0xC844E228 ^0x91C15397
{
	BOOL flag;

	flag = Global_1894899 & true != 0;

	if (flag == bParam0)
		return;

	if (bParam0)
	{
		Global_1894899 = Global_1894899 | true;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = Global_1894899 - Global_1894899 & true;
		STATS::_0xDA26263C07CCE9C2(0);
	}

	return;
}

eStackSize func_69() // Position - 0x1FFE Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

void func_70(BOOL bParam0) // Position - 0x200E Hash - 0x3703A155 ^0x3703A155
{
	if (bParam0)
		Global_1894899 = Global_1894899 | 2;
	else
		Global_1894899 = Global_1894899 - Global_1894899 & 2;

	return;
}

BOOL func_71(int iParam0) // Position - 0x2037 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("Shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("Thunderstorm"):
			return true;
	
		default:
		
	}

	return false;
}

void func_72() // Position - 0x207C Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_73(eStackSize essParam0, BOOL bParam1) // Position - 0x2084 Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] - Global_23118[essParam0 /*11*/] && bParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] - Global_1058888.f_40545[essParam0 /*11*/] && bParam1;
	return;
}

void func_74(eStackSize essParam0) // Position - 0x20DD Hash - 0x2DD991DD ^0x2DD991DD
{
	essParam0 = essParam0;
	func_128(false);
	func_129(&uLocal_14, false);
	func_129(&uLocal_24, false);
	func_129(&uLocal_34, false);
	return;
}

void func_75(eStackSize essParam0) // Position - 0x2103 Hash - 0x1BC1B95A ^0xE45E58CB
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1935369.f_5[i /*11*/].f_5 == essParam0)
			func_130(i);
	}

	return;
}

void func_76(int iParam0) // Position - 0x2134 Hash - 0xB8A02AF0 ^0xD2299111
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (Global_1914319.f_3[i /*446*/].f_9 == iParam0)
			func_131(i);
	}

	return;
}

void func_77(eStackSize essParam0) // Position - 0x2167 Hash - 0x315657D9 ^0xE44E20F6
{
	int num;
	int i;

	num = func_132(essParam0);

	if (num == -1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		func_133(Global_1392240.f_1[num /*18*/].f_6[i]);
		Global_1392240.f_1[num /*18*/].f_6[i] = 0;
	}

	return;
}

BOOL func_78(eStackSize essParam0, BOOL bParam1) // Position - 0x21B7 Hash - 0xF908F79F ^0xFA4C6B92
{
	int num;
	int num2;
	int num3;

	if (func_20() != -1)
		return true;

	if (!func_53(essParam0))
		return true;

	if (func_82(essParam0, &num, &num2, false, false))
	{
		if (Global_1897950.f_1 < num || Global_1897950.f_1 > num2)
			Global_1897950.f_1 = num;
	
		while (true)
		{
			if (!func_134(Global_1897950.f_1, 16))
				func_135(Global_1897950.f_1, false);
		
			Global_1897950.f_1 = Global_1897950.f_1 + 1;
			num3 = num3 + 1;
		
			if (Global_1897950.f_1 > num2)
			{
				Global_1897950.f_1 = -1;
				return true;
			}
		
			if (num3 >= 20 && !bParam1)
				return false;
		}
	}

	return true;
}

BOOL func_79(eStackSize essParam0, BOOL bParam1) // Position - 0x226D Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

BOOL func_80(eStackSize essParam0) // Position - 0x22A0 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_53(essParam0))
		return false;

	return func_79(essParam0, 33554432);
}

BOOL func_81(eStackSize essParam0) // Position - 0x22C1 Hash - 0xA5F6A570 ^0xA5F6A570
{
	if (!func_53(essParam0))
		return false;

	switch (essParam0)
	{
		case 32:
			return true;
	
		case 35:
			return true;
	
		case 65:
			return true;
	
		case 95:
			return true;
	}

	return false;
}

BOOL func_82(eStackSize essParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2314 Hash - 0xCBEA69A ^0xCBEA69A
{
	BOOL flag;

	flag = func_20() != -1;

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
			*uParam2 = 553;
		
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
				*uParam2 = 690;
		
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
	
		case 128:
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

BOOL func_83(int iParam0) // Position - 0x29D4 Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

BOOL func_84(int iParam0) // Position - 0x29EB Hash - 0xDEBEF6D4 ^0xDEBEF6D4
{
	switch (iParam0)
	{
		case 64:
			return true;
	
		case 65:
			return true;
	
		case 66:
			return true;
	
		case 67:
			return true;
	
		case 68:
			return true;
	
		default:
		
	}

	return false;
}

int func_85(int iParam0, BOOL bParam1) // Position - 0x2A2E Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_83(iParam0))
		return 0;

	if (!func_134(iParam0, 2))
		return 0;

	if (func_134(iParam0, 32) && !bParam1)
	{
		func_137(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_136(iParam0)));
	
		if (func_20() == -1)
		{
			if (func_134(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_138(iParam0));
				func_139(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_138(iParam0));
		}
	
		return 0;
	}

	if (!func_140(iParam0) && func_20() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_138(iParam0)))
	{
		func_139(iParam0, 128);
		return 1;
	}

	func_137(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_136(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_138(iParam0));

	if (func_134(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_138(iParam0));
		func_139(iParam0, 2048);
	}

	return 1;
}

BOOL func_86() // Position - 0x2B19 Hash - 0x2C13EB06 ^0x38F12C8A
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_4)
		return true;

	if (Global_524298)
		return true;

	if (Global_1048577)
		return true;

	if (Global_1051043 == -1 && Global_1572887.f_6 & true != 0)
		return true;

	return false;
}

int func_87(int iParam0) // Position - 0x2B6C Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_90(iParam0))
		return -1;

	return func_142(func_141(iParam0));
}

BOOL func_88(int iParam0) // Position - 0x2B8C Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_89(int iParam0, int iParam1) // Position - 0x2BA2 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_90(int iParam0) // Position - 0x2BB1 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

Hash func_91(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2BE4 Hash - 0xEC5804B5 ^0x15A1D925
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

BOOL func_92(Hash hParam0) // Position - 0x2C88 Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_143(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

void func_93(Hash hParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2CA3 Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_92(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam1, bParam3);
	}

	return;
}

void func_94(Hash hParam0, BOOL bParam1) // Position - 0x2CDB Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_92(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_95(Hash hParam0, BOOL bParam1) // Position - 0x2D09 Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_92(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_96(Hash hParam0, BOOL bParam1) // Position - 0x2D37 Hash - 0x4844A91D ^0x50E23246
{
	if (func_92(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_97() // Position - 0x2D65 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_98(int iParam0) // Position - 0x2D6E Hash - 0x532FA545 ^0x532FA545
{
	return iParam0 > -1 && iParam0 < 16;
}

BOOL func_99(eStackSize essParam0) // Position - 0x2D84 Hash - 0x43A4311 ^0x43A4311
{
	if (essParam0 == 22 || essParam0 == 37 && !func_144())
		return true;

	if (essParam0 == 61)
		return true;

	return false;
}

BOOL func_100() // Position - 0x2DB9 Hash - 0xB5F1D039 ^0x491A8075
{
	if (Global_16)
		return false;

	if (!func_145())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
		return false;

	if (func_51(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_101(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x2DFC Hash - 0xAA95C4FB ^0xB3C7DDA0
{
	const char* str;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
		str = func_146(Global_1894899.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) && bParam4)
		str = func_148(func_147(Global_36));

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (!func_149(iParam0) || func_150(45))
		{
			switch (iParam0)
			{
				case 1:
					str = "LANDMARK_MACOMBS_END";
					break;
			
				case 2:
					str = "LANDMARK_MERKINS_WALLER";
					break;
			
				case 3:
					str = "SETTLEMENT_LAGRAS";
					break;
			
				case 4:
					str = "HIDEOUT_LAKAY";
					break;
			
				case 5:
					str = "TOWN_SAINTDENIS";
					break;
			
				case 6:
					str = "LANDMARK_HAGEN_ORCHARDS";
					break;
			
				case 8:
					str = "SETTLEMENT_GRAND_KORRIGAN";
					break;
			
				case 9:
					str = "HIDEOUT_SHADY_BELLE";
					break;
			
				case 10:
					str = "LANDMARK_SILTWATER_STRAND";
					break;
			
				case 11:
					str = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
			
				case 12:
					str = "LANDMARK_BERYLS_DREAM";
					break;
			
				case 15:
					str = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
			
				case 16:
					str = "HIDEOUT_HANGING_DOG_RANCH";
					break;
			
				case 17:
					str = "HOMESTEAD_LONE_MULE_STEAD";
					break;
			
				case 19:
					str = "LANDMARK_MONTOS_REST";
					break;
			
				case 20:
					str = "LANDMARK_OWANJILA_DAM";
					break;
			
				case 21:
					str = "HOMESTEAD_PAINTED_SKY";
					break;
			
				case 22:
					str = "SETTLEMENT_PRONGHORN_RANCH";
					break;
			
				case 23:
					str = "LANDMARK_RIGGS_STATION";
					break;
			
				case 25:
					str = "HOMESTEAD_SHEPHERDS_RISE";
					break;
			
				case 26:
					str = "TOWN_STRAWBERRY";
					break;
			
				case 27:
					str = "LANDMARK_VALLEY_VIEW";
					break;
			
				case 28:
					str = "LANDMARK_WALLACE_STATION";
					break;
			
				case 29:
					str = "HOMESTEAD_WATSONS_CABIN";
					break;
			
				case 30:
					str = "LANDMARK_CANEBREAK_MANOR";
					break;
			
				case 31:
					str = "LANDMARK_COPPERHEAD_LANDING";
					break;
			
				case 32:
					str = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
			
				case 33:
					str = "LANDMARK_BACCHUS_BRIDGE";
					break;
			
				case 34:
					str = "HOMESTEAD_FIRWOOD_RISE";
					break;
			
				case 35:
					str = "SETTLEMENT_FORT_WALLACE";
					break;
			
				case 36:
					str = "HIDEOUT_SIX_POINT_CABIN";
					break;
			
				case 37:
					str = "SETTLEMENT_BEECHERS_HOPE";
					break;
			
				case 38:
					str = "TOWN_BLACKWATER";
					break;
			
				case 39:
					str = "LANDMARK_QUAKERS_COVE";
					break;
			
				case 40:
					str = "HOMESTEAD_ADLER_RANCH";
					break;
			
				case 41:
					str = "LANDMARK_WINDOW_ROCK";
					break;
			
				case 42:
					str = "HOMESTEAD_CHEZ_PORTER";
					break;
			
				case 43:
					str = "HIDEOUT_COLTER";
					break;
			
				case 45:
					str = "LANDMARK_MILLESANI_CLAIM";
					break;
			
				case 48:
					str = "LANDMARK_TEMPEST_RIM";
					break;
			
				case 49:
					str = "LANDMARK_EWING_BASIN";
					break;
			
				case 50:
					str = "LANDMARK_CALUMET_RAVINE";
					break;
			
				case 54:
					str = "LANDMARK_THE_LOFT";
					break;
			
				case 56:
					str = "SETTLEMENT_WAPITI";
					break;
			
				case 57:
					str = "SETTLEMENT_AGUASDULCES";
					break;
			
				case 59:
					str = "LANDMARK_CINCO_TORRES";
					break;
			
				case 60:
					str = "LANDMARK_LA_CAPILLA";
					break;
			
				case 61:
					str = "TOWN_MANICATO";
					break;
			
				case 62:
					str = "LANDMARK_OLD_GREENBANK_MILL";
					break;
			
				case 64:
					str = "HOMESTEAD_CARMODY_DELL";
					break;
			
				case 65:
					str = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
			
				case 66:
					str = "HOMESTEAD_GUTHRIE_FARM";
					break;
			
				case 67:
					str = "LANDMARK_CUMBERLAND_FALLS";
					break;
			
				case 68:
					str = "HOMESTEAD_DOWNES_RANCH";
					break;
			
				case 69:
					str = "SETTLEMENT_EMERALD_RANCH";
					break;
			
				case 70:
					str = "LANDMARK_GRANGERS_HOGGERY";
					break;
			
				case 72:
					str = "HOMESTEAD_LARNED_SOD";
					break;
			
				case 74:
					str = "LANDMARK_LUCKYS_CABIN";
					break;
			
				case 75:
					str = "LANDMARK_FLATNECK_STATION";
					break;
			
				case 76:
					str = "TOWN_VALENTINE";
					break;
			
				case 77:
					str = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
			
				case 78:
					str = "TOWN_ANNESBURG";
					break;
			
				case 79:
					str = "HIDEOUT_BEAVER_HOLLOW";
					break;
			
				case 80:
					str = "LANDMARK_BLACK_BALSAM_RISE";
					break;
			
				case 81:
					str = "LANDMARK_BRANDYWINE_DROP";
					break;
			
				case 82:
					str = "SETTLEMENT_BUTCHER_CREEK";
					break;
			
				case 83:
					str = "HOMESTEAD_DOVERHILL";
					break;
			
				case 86:
					str = "HOMESTEAD_MACLEANS_HOUSE";
					break;
			
				case 87:
					str = "LANDMARK_MOSSY_FLATS";
					break;
			
				case 88:
					str = "LANDMARK_ROANOKE_VALLEY";
					break;
			
				case 89:
					str = "HOMESTEAD_WILLARDS_REST";
					break;
			
				case 92:
					str = "TOWN_VANHORN";
					break;
			
				case 93:
					str = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
			
				case 94:
					str = "LANDMARK_BOLGER_GLADE";
					break;
			
				case 95:
					str = "SETTLEMENT_CALIGA_HALL";
					break;
			
				case 96:
					str = "HOMESTEAD_CATFISH_JACKSONS";
					break;
			
				case 98:
					str = "HIDEOUT_CLEMENS_POINT";
					break;
			
				case 99:
					str = "HOMESTEAD_COMPSONS_STEAD";
					break;
			
				case 100:
					str = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
			
				case 102:
					str = "HOMESTEAD_LONNIES_SHACK";
					break;
			
				case 104:
					str = "LANDMARK_RADLEYS_PASTURE";
					break;
			
				case 105:
					str = "TOWN_RHODES";
					break;
			
				case 108:
					str = "LANDMARK_BEAR_CLAW";
					break;
			
				case 110:
					str = "SETTLEMENT_MANZANITA_POST";
					break;
			
				case 111:
					str = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
			
				case 112:
					str = "LANDMARK_TANNERS_REACH";
					break;
			
				case 114:
					str = "HIDEOUT_GAPTOOTH_BREACH";
					break;
			
				case 115:
					str = "TOWN_TUMBLEWEED";
					break;
			
				case 116:
					str = "SETTLEMENT_RATHSKELLER_FORK";
					break;
			
				case 117:
					str = "SETTLEMENT_BENEDICT_POINT";
					break;
			
				case 118:
					str = "HIDEOUT_FORT_MERCER";
					break;
			
				case 119:
					str = "SETTLEMENT_PLAINVIEW";
					break;
			
				case 120:
					str = "TOWN_ARMADILLO";
					break;
			
				case 121:
					str = "SETTLEMENT_COOTS_CHAPEL";
					break;
			
				case 123:
					str = "LANDMARK_RILEYS_CHARGE";
					break;
			
				case 124:
					str = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
			
				case 125:
					str = "HIDEOUT_TWIN_ROCKS";
					break;
			
				case 126:
					str = "TOWN_MACFARLANES_RANCH";
					break;
			
				case 127:
					str = "SETTLEMENT_THIEVES_LANDING";
					break;
			
				case 128:
					str = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("water_lannahechee_river"):
				str = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_O_CREAGHS_RUN"):
				str = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
		
			case joaat("water_upper_montana_river"):
				str = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_san_luis_river"):
				if (iParam1 == 4 || iParam1 == 12)
					str = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				else
					str = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_little_creek_river"):
				str = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_don_julio"):
				str = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
		
			case joaat("water_flat_iron_lake"):
				str = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_lower_montana_river"):
				str = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_owanjila"):
				str = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
		
			case joaat("water_stillwater_creek"):
				str = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_hawks_eye_creek"):
				str = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_kamassa_river"):
				if (iParam1 == 10)
					str = "WATER_KAMASSA_RIVER";
				else if (iParam1 == 2)
					str = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				else
					str = "WATER_KAMASSA_RIVER_BAYOU_NWA";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_bahia_de_la_paz"):
				str = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
		
			case joaat("water_cairn_lake"):
				str = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_southfield_flats"):
				str = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
		
			case joaat("water_moonstone_pond"):
				str = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_CATTIAL_POND"):
				str = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_bayou_nwa"):
				str = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
		
			case joaat("water_whinyard_strait"):
				str = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
		
			case joaat("water_sea_of_coronado"):
				str = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
		
			case joaat("water_spider_gorge"):
				str = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
		
			case joaat("water_aurora_basin"):
				str = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
		
			case joaat("water_elysian_pool"):
				str = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
		
			case joaat("water_arroyo_de_la_vibora"):
				str = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
		
			case joaat("water_mattlock_pond"):
				str = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_dakota_river"):
				str = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_isabella"):
				str = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
		
			case joaat("water_barrow_lagoon"):
				str = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
		
			case joaat("water_hot_springs"):
				str = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
		
			case joaat("water_deadboot_creek"):
				str = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_heartlands_overflow"):
				str = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
		
			case joaat("water_ringneck_creek"):
				str = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		switch (iParam1)
		{
			case 0:
				str = "DISTRICT_BAYOU_NWA";
				break;
		
			case 1:
				str = "DISTRICT_BIG_VALLEY";
				break;
		
			case 2:
				str = "DISTRICT_BLUEWATER_MARSH";
				break;
		
			case 3:
				str = "DISTRICT_CUMBERLAND_FOREST";
				break;
		
			case 4:
				str = "DISTRICT_GREAT_PLAINS";
				break;
		
			case 6:
				str = "DISTRICT_GRIZZLIES";
				break;
		
			case 7:
				str = "DISTRICT_GRIZZLIES";
				break;
		
			case 8:
				str = "DISTRICT_GUARMA";
				break;
		
			case 9:
				str = "DISTRICT_HEARTLANDS";
				break;
		
			case 10:
				str = "DISTRICT_ROANOAKE_RIDGE";
				break;
		
			case 11:
				str = "DISTRICT_SCARLETT_MEADOWS";
				break;
		
			case 12:
				str = "DISTRICT_TALL_TREES";
				break;
		
			case 13:
				str = "DISTRICT_GAPTOOTH_RIDGE";
				break;
		
			case 14:
				str = "DISTRICT_RIO_BRAVO";
				break;
		
			case 15:
				str = "DISTRICT_CHOLLA_SPRINGS";
				break;
		
			case 16:
				str = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		switch (iParam3)
		{
			case 0:
				str = "STATE_AMBARINO";
				break;
		
			case 1:
				str = "STATE_NEW_HANOVER";
				break;
		
			case 2:
				str = "STATE_LEMOYNE";
				break;
		
			case 3:
				str = "STATE_WEST_ELIZABETH";
				break;
		
			case 4:
				str = "STATE_NEW_AUSTIN";
				break;
		
			case 5:
				str = "STATE_GUARMA";
				break;
		}
	}

	return str;
}

BOOL func_102(int iParam0) // Position - 0x385B Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_103(int iParam0) // Position - 0x3870 Hash - 0xA08D7C4E ^0xA08D7C4E
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 2;
	
		case 3:
			return 1;
	
		case 4:
			return 3;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 5;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 13:
			return 4;
	
		case 14:
			return 4;
	
		case 15:
			return 4;
	
		case 16:
			return 4;
	
		default:
		
	}

	return -1;
}

Hash func_104(int iParam0) // Position - 0x392B Hash - 0x7493E565 ^0x5CB7541E
{
	if (!func_102(iParam0))
		return -1;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/];

	return Global_1058888.f_42196[iParam0 /*12*/];
}

int func_105(int iParam0) // Position - 0x3965 Hash - 0x653F925B ^0x653F925B
{
	switch (iParam0)
	{
		case joaat("water_lannahechee_river"):
			return 1;
	
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
	
		case joaat("water_upper_montana_river"):
			return 1;
	
		case joaat("water_san_luis_river"):
			return 1;
	
		case joaat("water_little_creek_river"):
			return 1;
	
		case joaat("water_lake_don_julio"):
			return 0;
	
		case joaat("water_flat_iron_lake"):
			return 0;
	
		case joaat("water_lower_montana_river"):
			return 1;
	
		case joaat("water_owanjila"):
			return 0;
	
		case joaat("water_stillwater_creek"):
			return 1;
	
		case joaat("water_hawks_eye_creek"):
			return 1;
	
		case joaat("water_kamassa_river"):
			return 1;
	
		case joaat("water_cairn_lake"):
			return 0;
	
		case joaat("water_southfield_flats"):
			return 0;
	
		case joaat("water_moonstone_pond"):
			return 0;
	
		case joaat("WATER_CATTIAL_POND"):
			return 0;
	
		case joaat("water_bayou_nwa"):
			return 2;
	
		case joaat("water_whinyard_strait"):
			return 1;
	
		case joaat("water_sea_of_coronado"):
			return 1;
	
		case joaat("water_spider_gorge"):
			return 1;
	
		case joaat("water_aurora_basin"):
			return 0;
	
		case joaat("water_elysian_pool"):
			return 0;
	
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
	
		case joaat("water_mattlock_pond"):
			return 0;
	
		case joaat("water_dakota_river"):
			return 1;
	
		case joaat("water_dewberry_creek"):
			return 1;
	
		case joaat("water_lake_isabella"):
			return 0;
	
		case joaat("water_beartooth_beck"):
			return 1;
	
		case joaat("water_barrow_lagoon"):
			return 0;
	
		case joaat("water_hot_springs"):
			return 0;
	
		case joaat("water_deadboot_creek"):
			return 1;
	
		case joaat("water_heartlands_overflow"):
			return 0;
	
		case joaat("water_ringneck_creek"):
			return 1;
	
		default:
		
	}

	return -1;
}

char* func_106(int iParam0) // Position - 0x3AC0 Hash - 0x21CE226B ^0x117FC044
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
	
		case 1:
			return "WATER_TYPE_RIVER";
	
		case 2:
			return "WATER_TYPE_SWAMP";
	
		default:
		
	}

	return "";
}

BOOL func_107(int iParam0, BOOL bParam1) // Position - 0x3AFB Hash - 0x60CCFF55 ^0x376285D7
{
	if (!func_7(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_431[iParam0] && bParam1 != false;

	return Global_1058888.f_42269[iParam0] && bParam1 != false;
}

BOOL func_108(int iParam0, int iParam1) // Position - 0x3B3F Hash - 0xD0DCDA48 ^0x4E1FA2FB
{
	if (!func_102(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1 != false;
}

eStackSize func_109() // Position - 0x3B87 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_110(eStackSize essParam0) // Position - 0x3B93 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_111(eStackSize essParam0) // Position - 0x3BA6 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

float func_112(float fParam0) // Position - 0x3BB8 Hash - 0xC643B4E3 ^0xC643B4E3
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_113(var uParam0, int iParam1) // Position - 0x3BCE Hash - 0xB0CFF0C3 ^0x9F1AE808
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_151(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_114(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x3C04 Hash - 0x10503CC4 ^0x6232183B
{
	int duration;
	var data;
	int num;

	duration = -2;
	duration = iParam2;
	duration.f_1 = iParam3;
	duration.f_2 = iParam4;
	duration.f_3 = iParam5;
	data.f_1 = sParam0;
	data.f_2 = sParam1;
	num = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&duration, &data, bParam6, bParam7);
	return num;
}

BOOL func_115(int iParam0) // Position - 0x3C47 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_116(eStackSize essParam0) // Position - 0x3C5A Hash - 0xEC19E423 ^0x3F24553E
{
	int num;

	if (func_149(essParam0))
		if (!func_150(45))
			return false;

	num = func_6(essParam0);

	if (func_152())
		if (!func_153(Global_1835011[3 /*74*/].f_1, true))
			return num == 7 || num == 6;

	return true;
}

void func_117(int iParam0, int iParam1) // Position - 0x3CAC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_118(int iParam0, int iParam1) // Position - 0x3CBD Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_119(var uParam0, var uParam1, int iParam2) // Position - 0x3CD3 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

eStackSize func_120() // Position - 0x3CE3 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_121(int iParam0) // Position - 0x3CF1 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_122(int iParam0) // Position - 0x3D07 Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1327479.f_3 = iParam0;
	return;
}

int func_123() // Position - 0x3D17 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_124(int iParam0, int iParam1) // Position - 0x3D26 Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_121(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_125(int iParam0) // Position - 0x3D49 Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_121(iParam0))
		return false;

	if (func_154(64) && func_155(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_126(int iParam0) // Position - 0x3D81 Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_121(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_127(int iParam0) // Position - 0x3DA1 Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_121(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_156(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

void func_128(BOOL bParam0) // Position - 0x3E0A Hash - 0xABEBAAED ^0x110F0C15
{
	func_157(238680582, bParam0);
	func_157(1555588463, bParam0);
	func_157(-1482639045, bParam0);
	func_157(254520182, bParam0);
	func_157(1335986638, bParam0);
	func_157(joaat("DOOR_STR_WHORE_INT_2"), bParam0);
	func_157(-1335647241, bParam0);
	func_157(1997650502, bParam0);
	func_157(1275780106, bParam0);
	func_157(-833560428, bParam0);
	func_157(-1601174253, bParam0);
	func_157(-1295111793, bParam0);
	return;
}

void func_129(var uParam0, BOOL bParam1) // Position - 0x3E96 Hash - 0x94FA4FD3 ^0x2137F904
{
	if (func_158(uParam0->f_1))
		func_159(uParam0->f_1);

	if (MAP::DOES_BLIP_EXIST(uParam0->f_9) && bParam1)
		MAP::REMOVE_BLIP(&(uParam0->f_9));

	if (func_160(uParam0->f_8))
		func_161(&(uParam0->f_8), true, true);

	return;
}

void func_130(int iParam0) // Position - 0x3EE4 Hash - 0x3E288458 ^0xC75F9664
{
	func_162(Global_1935369.f_5[iParam0 /*11*/].f_6, true);
	func_163(Global_1935369.f_5[iParam0 /*11*/].f_6, false);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1935369.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1935369.f_5[iParam0 /*11*/].f_8);
		Global_1935369.f_5[iParam0 /*11*/].f_8 = 0;
	}

	func_164(iParam0, 8192);
	func_164(iParam0, 16384);
	func_164(iParam0, 32768);
	func_164(iParam0, 131072);
	func_164(iParam0, 16777216);
	func_164(iParam0, 524288);
	func_164(iParam0, 1048576);
	Global_1935369.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1935369.f_5[Global_1935369 /*11*/].f_9 = 0;
	Global_1935369.f_5[iParam0 /*11*/] = false;
	Global_1935369.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1935369.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_7 = 0;
	return;
}

void func_131(int iParam0) // Position - 0x3FEF Hash - 0xC3C87B05 ^0xFB69AC71
{
	int i;
	int num;

	if (func_83(Global_1914319.f_3[iParam0 /*446*/].f_21) && func_165(Global_1914319.f_3[iParam0 /*446*/].f_21))
		func_166(Global_1914319.f_3[iParam0 /*446*/].f_21, false, true, false, false);

	Global_1914319.f_3[iParam0 /*446*/].f_11 = { 0f, 0f, 0f };
	Global_1914319.f_3[iParam0 /*446*/].f_21 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_17 = 0;
	Global_1914319.f_3[iParam0 /*446*/].f_1 = 0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1914319.f_3[iParam0 /*446*/].f_34))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1914319.f_3[iParam0 /*446*/].f_34, false);

	func_167(Global_1914319.f_3[iParam0 /*446*/].f_10, false);
	func_168(iParam0, 536870912);
	num = func_169(iParam0);

	if (num >= 15)
	{
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_133(Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/]);
			Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/] = 0;
			Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/].f_4 = 0f;
			Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/].f_5 = 0;
		}
	
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}

	if (Global_1914319.f_3[iParam0 /*446*/].f_440 != 0)
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1914319.f_3[iParam0 /*446*/].f_440, false);

	Global_1914319.f_3[iParam0 /*446*/].f_23 = 0;
	func_170(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_10 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = -1;
	func_171(iParam0, false);
	return;
}

int func_132(eStackSize essParam0) // Position - 0x41CF Hash - 0xAC39A336 ^0xDF4F13BE
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_1392240.f_1[i /*18*/].f_4 == essParam0)
			return i;
	}

	return -1;
}

void func_133(Hash hParam0) // Position - 0x4201 Hash - 0xDB9A74EC ^0x13B3F16D
{
	if (func_92(hParam0) && func_172())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

BOOL func_134(int iParam0, BOOL bParam1) // Position - 0x4221 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_20() != -1)
		return false;

	if (!func_83(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

int func_135(int iParam0, BOOL bParam1) // Position - 0x424F Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_83(iParam0))
		return 0;

	if (!func_134(iParam0, 2))
		return 0;

	if (func_136(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_138(iParam0)))
		return 1;

	if (func_134(iParam0, true) && !bParam1)
	{
		func_173(iParam0, 128);
		return 1;
	}

	func_139(iParam0, 129);
	func_174(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_138(iParam0));
	func_137(iParam0, 0);
	return 1;
}

Hash func_136(int iParam0) // Position - 0x42D2 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_83(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

void func_137(int iParam0, PersChar pchParam1) // Position - 0x42F0 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_83(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

PersChar func_138(int iParam0) // Position - 0x4311 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_83(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_139(int iParam0, BOOL bParam1) // Position - 0x4331 Hash - 0x452DF11A ^0x452DF11A
{
	if (func_20() != -1)
		return;

	if (!func_83(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_140(int iParam0) // Position - 0x436A Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_83(iParam0))
		return false;

	if (!func_134(iParam0, 2))
		return false;

	return true;
}

BOOL func_141(int iParam0) // Position - 0x4390 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_142(BOOL bParam0) // Position - 0x43CE Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_143(Hash hParam0) // Position - 0x43E1 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_144() // Position - 0x43ED Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_20() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_145() // Position - 0x4412 Hash - 0x7BF82DA8 ^0x7BF82DA8
{
	if (func_20() != false)
		return true;

	return true;
}

const char* func_146(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x4427 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_147(var uParam0, var uParam1, var uParam2) // Position - 0x443B Hash - 0xD993B6FD ^0xD993B6FD
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_175(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_148(int iParam0) // Position - 0x4469 Hash - 0xE6862179 ^0x694904AD
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
	
		case 1:
			return "LANDMARK_SCRATCHING_POST";
	
		case 2:
			return "LANDMARK_JORGES_GAP";
	
		case 3:
			return "LANDMARK_MERCER_STATION";
	
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
	
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
	
		case 6:
			return "LANDMARK_SILENT_STEAD";
	
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
	
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
	
		case 9:
			return "LANDMARK_TWO_CROWS";
	
		case 10:
			return "LANDMARK_REPENTANCE";
	
		case 11:
			return "LANDMARK_BENEDICT_PASS";
	
		case 12:
			return "WATER_MANTECA_FALLS";
	
		case 13:
			return "SETTLEMENT_LIMPANY";
	
		case 14:
			return "WATER_MOUNT_SHANN";
	
		case 15:
			return "LANDMARK_THREE_SISTERS";
	
		case 16:
			return "HIDEOUT_PIKES_BASIN";
	
		case 17:
			return "SETTLEMENT_EL_NIDO";
	
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
	
		case 19:
			return "LANDMARK_ERIS_FIELD";
	
		case 20:
			return "LANDMARK_GRANITE_PASS";
	
		case 21:
			return "LANDMARK_VENTERS_PLACE";
	
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
	
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
	
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
	
		case 25:
			return "LANDMARK_CITADEL_ROCK";
	
		case 26:
			return "LANDMARK_CUEVA_SECA";
	
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
	
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
	
		case 29:
			return "LANDMARK_DONNER_FALLS";
	
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
	
		case 32:
			return "LANDMARK_FORT_BRENNAND";
	
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
	
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
	
		case 35:
			return "LANDMARK_MESCALERO";
	
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
	
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
	
		case 38:
			return "LANDMARK_BROKEN_TREE";
	
		case 39:
			return "LANDMARK_BARDS_CROSSING";
	
		case 40:
			return "LANDMARK_FACE_ROCK";
	
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
	}

	return "";
}

BOOL func_149(eStackSize essParam0) // Position - 0x474D Hash - 0xE48228D0 ^0xE48228D0
{
	switch (essParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}

	return false;
}

BOOL func_150(int iParam0) // Position - 0x4777 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_176(iParam0))
		return false;

	return func_177(iParam0);
}

const char* func_151(const char* sParam0, int iParam1) // Position - 0x4793 Hash - 0x9E99F03 ^0xC711C1D
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_152() // Position - 0x47AD Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_153(int iParam0, BOOL bParam1) // Position - 0x47CC Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_178(iParam0))
	{
		case 5:
			return true;
	
		case 6:
			if (bParam1)
				return true;
			break;
	}

	return false;
}

BOOL func_154(int iParam0) // Position - 0x47FD Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_155(int iParam0) // Position - 0x4811 Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_124(iParam0, Global_1310750.f_16072 | 64);
}

void func_156(int iParam0) // Position - 0x4829 Hash - 0x3D0B339A ^0xB87B2B3D
{
	int i;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;

	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[i] = -1881652455;
	}

	return;
}

void func_157(Hash hParam0, BOOL bParam1) // Position - 0x48B6 Hash - 0x79849C12 ^0x79849C12
{
	if (func_143(hParam0))
		if (bParam1)
			if (!func_179(hParam0))
				func_52(hParam0, true, 0f, false, false, 1f, false, false);
		else if (func_179(hParam0))
			func_46(hParam0, 1);

	return;
}

BOOL func_158(Volume volParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x48F6 Hash - 0x16CD1F21 ^0x2C43B1FB
{
	return VOLUME::DOES_VOLUME_EXIST(volParam0);
}

void func_159(Volume volParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x4904 Hash - 0x433C0E5E ^0xA5B8D6DC
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	volParam0.f_1 = 0;
	volParam0.f_2 = -1;
	volParam0.f_3 = -1;
	volParam0.f_4 = 0;

	if (MAP::DOES_BLIP_EXIST(volParam0.f_5))
		MAP::REMOVE_BLIP(&(volParam0.f_5));

	return;
}

BOOL func_160(int iParam0) // Position - 0x4942 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_161(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4981 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_160(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_180(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_181(num);
	*uParam0 = 0;
	return;
}

void func_162(int iParam0, BOOL bParam1) // Position - 0x49D5 Hash - 0x2F9EB0B9 ^0x6044C33B
{
	char* ambientZone;

	switch (iParam0)
	{
		case 5:
			ambientZone = "IZ_val_saloon_int_room_main";
			break;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(ambientZone))
		return;

	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(ambientZone, bParam1, true);
	return;
}

void func_163(int iParam0, BOOL bParam1) // Position - 0x4A09 Hash - 0x342D57CF ^0x740EC4B7
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			else
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			break;
	}

	return;
}

void func_164(int iParam0, int iParam1) // Position - 0x4A3E Hash - 0x823E3440 ^0x340E01B4
{
	func_182(&(Global_1935369.f_5[iParam0 /*11*/].f_7), iParam1);
	return;
}

BOOL func_165(int iParam0) // Position - 0x4A58 Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_83(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_166(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4A7D Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_83(iParam0))
		return;

	if (!func_134(iParam0, 1))
		return;

	if (!func_134(iParam0, 2))
		return;

	if (!bParam4 && !func_165(iParam0) && func_183(iParam0))
		return;

	func_139(iParam0, 1);
	func_174(iParam0);

	if (func_184(func_136(iParam0)))
	{
		persChar = func_138(iParam0);
	
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
	
		func_139(iParam0, 16);
	}

	if (func_134(iParam0, 128) && !bParam3)
		func_135(iParam0, false);

	return;
}

void func_167(int iParam0, BOOL bParam1) // Position - 0x4B69 Hash - 0x6FB1865F ^0x85C63E45
{
	if (!func_185(iParam0))
		return;

	if (bParam1)
	{
		if (!func_186(iParam0, 1024))
		{
			func_187(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_186(iParam0, 1024))
	{
		func_188(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	func_189(iParam0);
	return;
}

void func_168(int iParam0, int iParam1) // Position - 0x4BBF Hash - 0xD75877A8 ^0xA8B353E5
{
	if (!func_190(iParam0))
		return;

	Global_1914319.f_3[iParam0 /*446*/].f_7 = Global_1914319.f_3[iParam0 /*446*/].f_7 - Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1;
	return;
}

int func_169(int iParam0) // Position - 0x4BFF Hash - 0x47F93C28 ^0x59A8BC1F
{
	return Global_1914319.f_3[iParam0 /*446*/].f_408;
}

void func_170(int iParam0) // Position - 0x4C15 Hash - 0x53643336 ^0x7E4A5E20
{
	Global_1914319.f_3[iParam0 /*446*/].f_7 = 0;
	return;
}

void func_171(int iParam0, BOOL bParam1) // Position - 0x4C2B Hash - 0x1BC36FD9 ^0xDFBA1F0
{
	int num;
	int num2;
	int offset;

	if (!func_190(iParam0))
		return;

	num = iParam0;
	num2 = num / 32;
	offset = num % 32;

	if (bParam1)
		MISC::SET_BIT(&Global_1914319.f_15924[num2], offset);
	else
		MISC::CLEAR_BIT(&Global_1914319.f_15924[num2], offset);

	return;
}

BOOL func_172() // Position - 0x4C7C Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_173(int iParam0, BOOL bParam1) // Position - 0x4C85 Hash - 0x61515A20 ^0x61515A20
{
	if (func_20() != -1)
		return;

	if (!func_83(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_174(int iParam0) // Position - 0x4CB6 Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_83(iParam0))
		return;

	ped = func_191(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

BOOL func_175(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x4CFA Hash - 0x5431B0F9 ^0x1E2109F7
{
	var unk;
	float num;
	float num2;

	func_192(iParam3, &unk, &num, &num2);

	if (func_193(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

BOOL func_176(int iParam0) // Position - 0x4D2A Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_177(int iParam0) // Position - 0x4D3D Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

int func_178(int iParam0) // Position - 0x4D67 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_90(iParam0))
		return -1;

	return func_194(iParam0);
}

BOOL func_179(Hash hParam0) // Position - 0x4D83 Hash - 0xD46620F0 ^0x47EF7B12
{
	func_91(hParam0, false, false);

	if (func_92(hParam0))
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) == 1;

	return false;
}

int func_180(var uParam0) // Position - 0x4DBA Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

void func_181(int iParam0) // Position - 0x4DC4 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_195(iParam0))
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

void func_182(BOOL bParam0, int iParam1) // Position - 0x4E77 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_183(int iParam0) // Position - 0x4E8C Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_83(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

BOOL func_184(Hash hParam0) // Position - 0x4EB0 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_185(int iParam0) // Position - 0x4EBC Hash - 0x91023C9F ^0x91023C9F
{
	return iParam0 > -1 && iParam0 < 153;
}

BOOL func_186(int iParam0, BOOL bParam1) // Position - 0x4ED2 Hash - 0xC3E950D6 ^0xC3E950D6
{
	if (!func_185(iParam0))
		return false;

	return Global_1914319.f_15614[iParam0] && bParam1 != false;
}

void func_187(int iParam0, BOOL bParam1) // Position - 0x4EF8 Hash - 0x7639AFD6 ^0x7639AFD6
{
	if (!func_185(iParam0))
		return;

	Global_1914319.f_15614[iParam0] = Global_1914319.f_15614[iParam0] || bParam1;
	return;
}

void func_188(int iParam0, BOOL bParam1) // Position - 0x4F26 Hash - 0xECD22DFB ^0xECD22DFB
{
	if (!func_185(iParam0))
		return;

	Global_1914319.f_15614[iParam0] = Global_1914319.f_15614[iParam0] - Global_1914319.f_15614[iParam0] && bParam1;
	return;
}

void func_189(int iParam0) // Position - 0x4F60 Hash - 0xB29062D ^0xB29062D
{
	func_197(func_196(iParam0));
	return;
}

BOOL func_190(int iParam0) // Position - 0x4F72 Hash - 0x895544C2 ^0x895544C2
{
	return iParam0 > -1 && iParam0 < 35;
}

Ped func_191(int iParam0) // Position - 0x4F88 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_138(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

void func_192(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x4FB6 Hash - 0x7A16E50C ^0x7A16E50C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
	
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
	
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
	
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
	
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
	
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
	
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
	
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
	
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
	
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
	
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
	
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
	
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
	
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
	
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
	
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
	
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
	
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
	
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
	
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
	
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
	
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
	
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
	
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
	
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
	
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
	
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
	
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
	
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
	
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
	
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
	
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
	
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
	
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
	
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
	
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
	
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
	
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
	
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
	
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}

	return;
}

BOOL func_193(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0x5A53 Hash - 0x3D2F8087 ^0xB0BC8DD5
{
	float num;
	float num2;
	float num3;

	num = { uParam0 - uParam3 };
	num2 = (num * BUILTIN::COS(fParam8)) + (num.f_1 * BUILTIN::SIN(fParam8));
	num2.f_1 = (num * BUILTIN::SIN(fParam8)) - (num.f_1 * BUILTIN::COS(fParam8));
	num3 = ((num2 * num2) / (fParam6 * fParam6)) + ((num2.f_1 * num2.f_1) / (fParam7 * fParam7));
	return num3 <= 1f;
}

int func_194(int iParam0) // Position - 0x5AB9 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_198(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_195(int iParam0) // Position - 0x5AFA Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_199(iParam0, 2);
}

int func_196(int iParam0) // Position - 0x5B09 Hash - 0x1497AC6A ^0x1497AC6A
{
	if (!(iParam0 > -1 && iParam0 < 153))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
	
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
	
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
	
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
	
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
	
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
	
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
	
		case 9:
		case 37:
		case 69:
			return 8;
	
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
	
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
	
		case 12:
		case 54:
			return 21;
	
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
	
		case 17:
		case 47:
			return 7;
	
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
	
		case 22:
			return 17;
	
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
	
		case 48:
			return 12;
	
		case 49:
			return 13;
	
		case 50:
			return 14;
	
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
	
		case 62:
		case 79:
			return 20;
	
		case 101:
			return 11;
	
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
	
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
	
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
	
		case 126:
			return 32;
	
		case 127:
			return 34;
	
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
	
		case 136:
			return 5;
	
		case 149:
			return 23;
	
		case 150:
			return 24;
	
		case 151:
			return 25;
	
		case 152:
			return 24;
	
		default:
		
	}

	return -1;
}

void func_197(int iParam0) // Position - 0x5F5D Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1914319.f_15923 = iParam0;
	return;
}

int func_198(int iParam0) // Position - 0x5F6E Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_199(int iParam0, int iParam1) // Position - 0x5FEF Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

