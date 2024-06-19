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
	Interior inLocal_14 = 0;
	Volume volLocal_15 = 0;
	Object obLocal_16 = 0;
	var uLocal_17 = 0;
	BOOL bLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	eStackSize essLocal_23 = 0;
	int iLocal_24 = 0;
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
	iLocal_20 = 20000;
	essLocal_23 = essScriptParam_0;
	iLocal_21 = essScriptParam_0.f_2;
	func_1();
	func_2();
	iLocal_22 = MISC::GET_GAME_TIMER();
	num = 0;

	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_22)
		{
			iLocal_22 = 0;
			func_4(essLocal_23, &iLocal_21);
		
			switch (iLocal_21)
			{
				case 0:
					iLocal_21 = 1;
					break;
			
				case 1:
					func_5(essLocal_23);
				
					if (func_7(func_6(essLocal_23)))
						func_8(func_6(essLocal_23), 4);
				
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_9(essLocal_23));
					num2 = func_10(essLocal_23);
				
					if (num2 != -1)
						Global_1935183.f_6[num2] = 1;
				
					Global_1897950 = -1;
					iLocal_24 = MISC::GET_GAME_TIMER() + iLocal_20;
					iLocal_21 = 2;
					break;
			
				case 2:
					if (func_11() || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT(essLocal_23);
						iLocal_24 = MISC::GET_GAME_TIMER() + iLocal_20;
						iLocal_21 = 3;
					}
					break;
			
				case 3:
					if (func_13(essLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0(essLocal_23);
						iLocal_24 = iLocal_20 + MISC::GET_GAME_TIMER();
						iLocal_21 = 4;
					}
					break;
			
				case 4:
					if (func_15(essLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0_0(essLocal_23);
						iLocal_24 = iLocal_20 + MISC::GET_GAME_TIMER();
						iLocal_21 = 6;
					}
					break;
			
				case 6:
					if (func_7(func_6(essLocal_23)))
						if (func_17(func_6(essLocal_23), 4) && !(iLocal_24 < MISC::GET_GAME_TIMER()))
							break;
				
					if (func_18(essLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						func_19(essLocal_23, 4);
						iLocal_24 = iLocal_20 + MISC::GET_GAME_TIMER();
						iLocal_21 = 7;
					}
					break;
			
				case 7:
					if (iLocal_24 < MISC::GET_GAME_TIMER() || func_20() != false || Global_1051260.f_3790)
					{
						_DEBUG_PRINT_0_0_0(essLocal_23);
						func_22();
					
						if (!func_23(2057, false))
							func_24();
					
						func_25();
						func_26();
						_DEBUG_PRINT_0_0_0_0(essLocal_23);
						_DEBUG_PRINT_0_0_0_0_0(essLocal_23);
						func_29();
						func_30();
						iLocal_21 = 8;
					}
					break;
			
				case 8:
					_DEBUG_PRINT_0_0_0_0_0_0(essLocal_23);
					func_32();
					iLocal_21 = 9;
					break;
			
				case 9:
					func_33(&Global_1898004);
					func_34(essLocal_23, &Global_1898004);
					iLocal_21 = 10;
					break;
			
				case 10:
					func_35(essLocal_23);
				
					if (func_20() == -1)
						HUD::_DISABLE_HUD_CONTEXT(1833957607);
				
					func_19(essLocal_23, 8);
				
					if (func_36(32))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_IN(500);
					
						func_37(32);
					}
				
					iLocal_21 = 11;
					break;
			
				case 11:
					if (func_38(essLocal_23))
						iLocal_22 = 1000 + MISC::GET_GAME_TIMER();
				
					func_39(&Global_1898004, essLocal_23);
					func_40(essLocal_23);
					func_19(essLocal_23, 8);
				
					if (func_41())
						PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				
					PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[essLocal_23 /*35*/].f_10);
				
					if (Global_1888801[essLocal_23 /*35*/].f_11 > 0f)
						PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[essLocal_23 /*35*/].f_11);
					break;
			
				case 12:
					func_42(num);
					num = 1 + num;
					break;
			}
		}
	
		if (Global_1888801[essLocal_23 /*35*/].f_12 != 0)
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1888801[essLocal_23 /*35*/].f_12);
	
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

BOOL func_11() // Position - 0x7BC Hash - 0x4B5EEF1 ^0xC90340DA
{
	volLocal_15 = VOLUME::CREATE_VOLUME_CYLINDER(2747.629f, 2006.864f, 214.971f, 0f, 0f, 0f, 32f, 25f, 40f);
	return true;
}

void _DEBUG_PRINT(eStackSize essParam0) // Position - 0x7EC Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

BOOL func_13(eStackSize essParam0) // Position - 0x7F8 Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	essParam0 = essParam0;
	return true;
}

void _DEBUG_PRINT_0(eStackSize essParam0) // Position - 0x805 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

BOOL func_15(eStackSize essParam0) // Position - 0x811 Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	essParam0 = essParam0;
	return true;
}

void _DEBUG_PRINT_0_0(eStackSize essParam0) // Position - 0x81E Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

BOOL func_17(int iParam0, BOOL bParam1) // Position - 0x82A Hash - 0xFB77C6C8 ^0xFB77C6C8
{
	return Global_1897952[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_18(eStackSize essParam0) // Position - 0x83F Hash - 0x6DE0FDC2 ^0x6DE0FDC2
{
	return func_46(essParam0, -1, -1, false);
}

void func_19(eStackSize essParam0, BOOL bParam1) // Position - 0x850 Hash - 0x1F53BD85 ^0xA70B55E5
{
	if (Global_1572887.f_12 == -1)
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] || bParam1;
	else
		Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] || bParam1;

	return;
}

BOOL func_20() // Position - 0x893 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void _DEBUG_PRINT_0_0_0(eStackSize essParam0) // Position - 0x8A1 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

void func_22() // Position - 0x8AD Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_23(int iParam0, BOOL bParam1) // Position - 0x8B5 Hash - 0x26407603 ^0x721F15B0
{
	if (func_47(iParam0))
		return true;

	if (!bParam1)
		if (func_48(5000))
			return true;

	switch (func_49(0))
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

void func_24() // Position - 0x9CF Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_25() // Position - 0x9D7 Hash - 0xED6E739D ^0x5C2BD0A9
{
	func_50(6, true);
	func_51(6, volLocal_15);

	if (!func_52(true, true))
	{
		func_53(799);
		func_54(true);
		func_55(joaat("DOOR_ROC_HOUSE_INT_2"), true, 0f, false, false, 0, false, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(750713851, false);
	}
	else
	{
		func_56(6, 1, joaat("DOOR_ROC_HOUSE_INT_2"));
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(750713851, true);
	
		if (func_57(59))
			func_58();
	}

	return;
}

void func_26() // Position - 0xA42 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void _DEBUG_PRINT_0_0_0_0(eStackSize essParam0) // Position - 0xA4A Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

void _DEBUG_PRINT_0_0_0_0_0(eStackSize essParam0) // Position - 0xA56 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

void func_29() // Position - 0xA62 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_30() // Position - 0xA6A Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void _DEBUG_PRINT_0_0_0_0_0_0(eStackSize essParam0) // Position - 0xA72 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

void func_32() // Position - 0xA7E Hash - 0x2E7B6F22 ^0x3889AD2B
{
	if (!Global_1894899.f_186)
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1894899.f_182, Global_1894899.f_183, Global_1894899.f_184, Global_1894899.f_185);

	return;
}

void func_33(var uParam0) // Position - 0xAAF Hash - 0x28951280 ^0x95B241A
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

void func_34(eStackSize essParam0, var uParam1) // Position - 0xAF5 Hash - 0x41BC629D ^0x41BC629D
{
	essParam0 = essParam0;
	func_59(uParam1, volLocal_15, 1);
	return;
}

void func_35(eStackSize essParam0) // Position - 0xB0A Hash - 0xD90F0DEC ^0xD90F0DEC
{
	if (!func_60(essParam0))
		return;

	func_61();
	return;
}

BOOL func_36(BOOL bParam0) // Position - 0xB23 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1894899 && bParam0 != false;
}

void func_37(BOOL bParam0) // Position - 0xB34 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1894899 = Global_1894899 - Global_1894899 && bParam0;
	return;
}

BOOL func_38(eStackSize essParam0) // Position - 0xB4C Hash - 0xBEFB2386 ^0xBEFB2386
{
	if (func_20() != -1)
		return false;

	func_62();
	func_63();
	func_64();
	func_65();
	return false;
}

void func_39(var uParam0, eStackSize essParam1) // Position - 0xB71 Hash - 0x8A7E7334 ^0x9F0B10C1
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;
	int num;

	if (BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_66(Global_1935630, 16384) || func_66(Global_1935630, 8388608))
		return;

	if (func_67(uParam0, 1))
		return;

	uParam0->f_63 = uParam0->f_63 + 1;

	if (uParam0->f_63 < 10)
		return;

	uParam0->f_63 = 0;
	flag = 0;
	flag2 = CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT();
	flag3 = func_68();

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
							if (!func_69(&uParam0->[i /*3*/], 1) && func_70(essParam1) && !func_71(essParam1, 16))
							{
								func_73(essParam1, func_72(), -1, false, -1, false);
								func_74(&uParam0->[i /*3*/], 1);
							}
						
							func_75(essParam1, false);
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
		if (func_76() != flag)
		{
			num = 0;
		
			if (flag)
				num = 2;
			else
				num = 1;
		
			func_77();
			func_78(Global_1310750.f_16071, false, num, false, false);
		}
	}

	func_79(flag);

	if (func_20() == -1)
		func_81(essParam1 == func_80() && flag);

	return;
}

int func_40(eStackSize essParam0) // Position - 0xCFE Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	essParam0 = essParam0;
	return 1;
}

BOOL func_41() // Position - 0xD0B Hash - 0x1E5EE2B6 ^0xA7F309C
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

	if (func_82(unk))
		return true;

	return false;
}

BOOL func_42(int iParam0) // Position - 0xD41 Hash - 0xA6DB229E ^0x72633A56
{
	if (iParam0 == 0)
	{
		func_83();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_19(essLocal_23, 2048);
	
		if (func_7(func_72()))
			func_8(func_72(), 8);
	
		func_84(essLocal_23, 4);
		func_84(essLocal_23, 8);
		func_79(0);
	
		if (func_20() == -1)
			func_81(false);
	
		func_85(essLocal_23);
		func_32();
		return false;
	}
	else
	{
		func_86(essLocal_23);
		func_87(essLocal_23);
		func_88(essLocal_23);
	
		if (!func_89(essLocal_23, false))
			return false;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

BOOL func_43(eStackSize essParam0) // Position - 0xDD2 Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_60(essParam0))
		return false;

	return func_90(essParam0, 8);
}

BOOL func_44(int iParam0) // Position - 0xDF0 Hash - 0xC67CC87B ^0x33ED18E1
{
	return Global_1894899.f_7 && iParam0 != false;
}

void func_45(int iParam0) // Position - 0xE03 Hash - 0xDD4F2B2E ^0xED52CD7
{
	Global_1894899.f_7 = Global_1894899.f_7 - Global_1894899.f_7 && iParam0;
	return;
}

BOOL func_46(eStackSize essParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xE21 Hash - 0x156C7489 ^0x156C7489
{
	int num;
	int num2;
	int num3;

	if (func_20() != -1)
		return 1;

	if (!func_60(essParam0))
		return 1;

	if (func_90(essParam0, 16))
		return 1;

	func_91(essParam0) && !func_92(essParam0);

	if (func_93(essParam0, &num, &num2, false, false))
	{
		if (func_94(iParam1))
			num = iParam1;
	
		if (func_94(iParam2))
			num2 = iParam2;
	
		if (Global_1897950 < num || Global_1897950 > num2)
			Global_1897950 = num;
	
		while (true)
		{
			if (!func_91(essParam0) || func_92(essParam0) || func_95(Global_1897950))
				func_96(Global_1897950, false);
		
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

BOOL func_47(int iParam0) // Position - 0xF19 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1935630 && iParam0 != false;
}

BOOL func_48(int iParam0) // Position - 0xF2A Hash - 0x9C8B9DFE ^0x5874CE32
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1898438;
}

int func_49(int iParam0) // Position - 0xF3E Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_50(int iParam0, BOOL bParam1) // Position - 0xF52 Hash - 0x946FD834 ^0x76EA7554
{
	if (func_20() != -1)
		return;

	if (!bParam1)
		func_97(iParam0);

	func_98(iParam0);
	Global_1392240.f_146 = 0;
	func_99(iParam0, 512);
	return;
}

void func_51(int iParam0, Volume volParam1) // Position - 0xF88 Hash - 0xCF7D517E ^0x9D145040
{
	Global_1392240.f_1[iParam0 /*18*/].f_3 = volParam1;
	return;
}

BOOL func_52(BOOL bParam0, BOOL bParam1) // Position - 0xF9E Hash - 0xA7DB7D70 ^0xA7DB7D70
{
	if (bParam1)
		if (func_100(6, 8))
			return false;

	if (!func_101(58))
		return false;

	if (bParam0)
		if (func_100(6, 1))
			if (func_102() && !func_100(6, 8))
				return true;
			else if (!func_102())
				return false;

	return true;
}

int func_53(int iParam0) // Position - 0xFFD Hash - 0x1B19432F ^0x9C562F71
{
	Ped perscharPedIndex;

	if (!func_94(iParam0))
		return 0;

	if (!func_104(func_103(iParam0)))
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_105(iParam0)))
		return 0;

	if (NETWORK::NETWORK_IS_IN_SESSION())
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_105(iParam0))))
			return 1;

	perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_105(iParam0));

	if (ENTITY::DOES_ENTITY_EXIST(perscharPedIndex))
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(perscharPedIndex))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(perscharPedIndex, true, true);

	PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_105(iParam0));
	return 1;
}

void func_54(BOOL bParam0) // Position - 0x1086 Hash - 0xE2E63AEB ^0xE11DDE73
{
	func_55(joaat("DOOR_ROC_HOUSE_INT_1"), bParam0, 0, false, false, 0, false, false);

	if (bParam0)
		OBJECT::_0xC07B91B996C1DE89(joaat("DOOR_ROC_HOUSE_INT_1"), 0);

	return;
}

void func_55(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x10AE Hash - 0xD777F4CF ^0xBFF3124C
{
	func_106(hParam0, false, false);

	if (func_107(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_108(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_109(hParam0, true);
			else
				func_110(hParam0, true);
		else
			func_111(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_112())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

void func_56(int iParam0, int iParam1, Hash hParam2) // Position - 0x1139 Hash - 0x5D20159 ^0xBA302B7C
{
	iParam1 < 0 || iParam1 >= 4;
	Global_1392240.f_1[iParam0 /*18*/].f_6[iParam1] = func_106(hParam2, false, false);
	return;
}

BOOL func_57(int iParam0) // Position - 0x116A Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_113(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

void func_58() // Position - 0x11C9 Hash - 0x644B2FF6 ^0x793F939B
{
	BOOL flag;

	if (!func_100(6, 16))
	{
		if (!func_100(6, 32))
		{
			if (!flag)
			{
				func_114();
				return;
			}
		}
	}

	if (func_115(6, 16384) || !func_116())
	{
		func_117(6, 8192);
		func_117(6, 16384);
		return;
	}

	if (!flag)
		func_118();

	func_119(6, 8192);
	func_119(6, 16384);
	return;
}

void func_59(var uParam0, Volume volParam1, int iParam2) // Position - 0x1237 Hash - 0x5828D351 ^0x6F1B8F85
{
	if (uParam0->f_61 >= 20)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	if (!func_120(iParam2))
		return;

	uParam0->[uParam0->f_61 /*3*/] = volParam1;
	uParam0->[uParam0->f_61 /*3*/].f_1 = iParam2;
	uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	uParam0->f_61 = uParam0->f_61 + 1;
	return;
}

BOOL func_60(eStackSize essParam0) // Position - 0x1290 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

void func_61() // Position - 0x12A6 Hash - 0xC70365F7 ^0xC70365F7
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_121(i))
			Global_1898130[i] = -1;
	}

	return;
}

void func_62() // Position - 0x12D3 Hash - 0xE6D02888 ^0xAEC08FB
{
	if (func_122(1))
		return;

	if (func_123(799))
		func_124(1);
	else
		func_125(1);

	return;
}

void func_63() // Position - 0x12FD Hash - 0xF4B7B539 ^0x96B2536
{
	if (func_122(2))
		return;

	inLocal_14 = INTERIOR::GET_INTERIOR_AT_COORDS(func_126(6));

	if (!INTERIOR::IS_VALID_INTERIOR(inLocal_14))
		return;

	if (func_100(6, 8192))
	{
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inLocal_14, "rocky_int_messy"))
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(inLocal_14, "rocky_int_messy", true);
	
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inLocal_14, "rocky_int_clean"))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(inLocal_14, "rocky_int_clean", 0);
	}
	else
	{
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inLocal_14, "rocky_int_clean"))
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(inLocal_14, "rocky_int_clean", true);
	
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inLocal_14, "rocky_int_messy"))
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(inLocal_14, "rocky_int_messy", 0);
	}

	func_124(2);
	return;
}

void func_64() // Position - 0x1391 Hash - 0xECC71A58 ^0x22709DF
{
	if (func_127(6, 64))
		return;

	if (func_100(6, 16384))
	{
		func_128(joaat("roc_01_garden01_die"));
		func_128(-786579336);
		func_129(joaat("roc_01_garden01_nice"));
		func_129(-1305545118);
	}
	else
	{
		func_128(joaat("roc_01_garden01_nice"));
		func_128(-1305545118);
		func_129(joaat("roc_01_garden01_die"));
		func_129(-786579336);
	}

	func_130(6, 64);
	return;
}

void func_65() // Position - 0x1403 Hash - 0xB7555F2C ^0x9190660F
{
	int num;

	func_131();

	if (func_122(4))
		return;

	if (!func_122(2))
		return;

	num = func_132(-1370243643);

	if (func_100(6, 2) || func_100(6, 1) || func_115(6, 16384) || func_133(PLAYER::PLAYER_ID(), true, false, true))
	{
		func_124(8);
		func_134(&num, false);
	}
	else
	{
		func_134(&num, true);
	}

	func_124(4);
	return;
}

BOOL func_66(int iParam0, int iParam1) // Position - 0x1481 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_67(var uParam0, int iParam1) // Position - 0x1490 Hash - 0x718DD1EF ^0x7E064505
{
	return uParam0->f_62 && iParam1 != false;
}

BOOL func_68() // Position - 0x14A1 Hash - 0x463DA432 ^0x3948CA04
{
	return func_66(Global_1935630, 4096);
}

BOOL func_69(var uParam0, int iParam1) // Position - 0x14B4 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_70(eStackSize essParam0) // Position - 0x14C5 Hash - 0x97598EC0 ^0xADF7FB13
{
	if (!func_60(essParam0))
		return false;

	return Global_1888801[essParam0 /*35*/].f_20 == 1 || Global_1888801[essParam0 /*35*/].f_20 == 2 && !func_135(essParam0);
}

BOOL func_71(eStackSize essParam0, int iParam1) // Position - 0x1505 Hash - 0xA98B69C6 ^0xAD9FDA10
{
	if (essParam0 < 0 || essParam0 >= 150)
		return false;

	return Global_1888801[essParam0 /*35*/].f_21 && iParam1 != false;
}

int func_72() // Position - 0x1532 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

void func_73(eStackSize essParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x1540 Hash - 0x2E95BD15 ^0x14AE7C0C
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

	if (!func_136())
		return;

	str = func_137(essParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (bParam3)
			return;
	
		str = "DISTRICT_GRIZZLIES";
	}

	if (!func_138(iParam4))
		if (func_60(essParam0))
			iParam4 = func_139(func_6(essParam0));
		else
			iParam4 = func_139(iParam1);

	if (func_138(iParam4))
		hash = func_140(iParam4);

	if (flag && bParam3)
	{
		str2 = func_142(func_141(iParam2));
	}
	else if (func_143(iParam1, 2) || func_144(iParam4, 2) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1894899.f_9 = 1;
	}
	else if (func_60(essParam0) && func_90(essParam0, 16777216) && !Global_1894899.f_9)
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
		num = func_146(func_145());
		num2 = func_147(func_145());
	
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
				temperatureAtCoords = func_148(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(674, str3, num, func_149(&unk, joaat("COLOR_PURE_WHITE")), str4, func_149(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str3 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_148(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(162, str3, num, func_149(&unk, joaat("COLOR_PURE_WHITE")), func_149(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1894899.f_9 = 0;
	}

	Global_1934266.f_148 = func_150(str, str2, 4000, 0, 0, 0, false, true);
	return;
}

void func_74(var uParam0, int iParam1) // Position - 0x17A5 Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_75(int iParam0, BOOL bParam1) // Position - 0x17B8 Hash - 0x1E78A51E ^0x8BB44A98
{
	if (Global_1572887.f_10 && func_20() == false)
		return;

	if (func_151(128))
		return;

	if (!func_152(iParam0))
		return;

	if (func_90(iParam0, 32))
		return;

	func_19(iParam0, 32);
	func_153(&Global_1935630, 8192);
	func_155(func_154(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_155(func_154(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_155(func_154(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_155(func_154(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_155(func_154(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_155(func_154(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_155(func_154(joaat("discovered"), joaat("new_austin_areas")), 1);
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

BOOL func_76() // Position - 0x1E2D Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_156() != -1;
}

void func_77() // Position - 0x1E48 Hash - 0x18ACD9D3 ^0xB2ADEAB8
{
	if (!func_157(Global_1327479))
		return;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));

	func_158(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
	return;
}

void func_78(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1EBB Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_159() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_157(num) && !func_160(num, iParam2) && !bParam3 || !func_161(num) && !bParam4 || !func_162(num))
			if (num != iParam0)
				func_163(i);
	}

	return;
}

void func_79(BOOL bParam0) // Position - 0x1F49 Hash - 0xC844E228 ^0x91C15397
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

eStackSize func_80() // Position - 0x1F90 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

void func_81(BOOL bParam0) // Position - 0x1FA0 Hash - 0x3703A155 ^0x3703A155
{
	if (bParam0)
		Global_1894899 = Global_1894899 | 2;
	else
		Global_1894899 = Global_1894899 - Global_1894899 & 2;

	return;
}

BOOL func_82(int iParam0) // Position - 0x1FC9 Hash - 0x5000025C ^0x5000025C
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

void func_83() // Position - 0x200E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_84(eStackSize essParam0, BOOL bParam1) // Position - 0x2016 Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] - Global_23118[essParam0 /*11*/] && bParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] - Global_1058888.f_40545[essParam0 /*11*/] && bParam1;
	return;
}

void func_85(eStackSize essParam0) // Position - 0x206F Hash - 0x1BDB259B ^0x1BDB259B
{
	func_164(6, 4);
	func_164(6, 32);
	func_164(6, 64);
	func_165(&uLocal_17);
	obLocal_16 = 0;
	return;
}

void func_86(eStackSize essParam0) // Position - 0x2094 Hash - 0x1BC1B95A ^0xE45E58CB
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1935369.f_5[i /*11*/].f_5 == essParam0)
			func_166(i);
	}

	return;
}

void func_87(int iParam0) // Position - 0x20C5 Hash - 0xB8A02AF0 ^0xD2299111
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (Global_1914319.f_3[i /*446*/].f_9 == iParam0)
			func_167(i);
	}

	return;
}

void func_88(eStackSize essParam0) // Position - 0x20F8 Hash - 0x315657D9 ^0xE44E20F6
{
	int num;
	int i;

	num = func_168(essParam0);

	if (num == -1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		func_169(Global_1392240.f_1[num /*18*/].f_6[i]);
		Global_1392240.f_1[num /*18*/].f_6[i] = 0;
	}

	return;
}

BOOL func_89(eStackSize essParam0, BOOL bParam1) // Position - 0x2148 Hash - 0xF908F79F ^0xFA4C6B92
{
	int num;
	int num2;
	int num3;

	if (func_20() != -1)
		return true;

	if (!func_60(essParam0))
		return true;

	if (func_93(essParam0, &num, &num2, false, false))
	{
		if (Global_1897950.f_1 < num || Global_1897950.f_1 > num2)
			Global_1897950.f_1 = num;
	
		while (true)
		{
			if (!func_170(Global_1897950.f_1, 16))
				func_171(Global_1897950.f_1, false);
		
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

BOOL func_90(eStackSize essParam0, BOOL bParam1) // Position - 0x21FE Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

BOOL func_91(eStackSize essParam0) // Position - 0x2231 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_60(essParam0))
		return false;

	return func_90(essParam0, 33554432);
}

BOOL func_92(eStackSize essParam0) // Position - 0x2252 Hash - 0xA5F6A570 ^0xA5F6A570
{
	if (!func_60(essParam0))
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

BOOL func_93(eStackSize essParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x22A5 Hash - 0xCBEA69A ^0xCBEA69A
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

BOOL func_94(int iParam0) // Position - 0x2965 Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

BOOL func_95(int iParam0) // Position - 0x297C Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

int func_96(int iParam0, BOOL bParam1) // Position - 0x29BF Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_94(iParam0))
		return 0;

	if (!func_170(iParam0, 2))
		return 0;

	if (func_170(iParam0, 32) && !bParam1)
	{
		func_172(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_103(iParam0)));
	
		if (func_20() == -1)
		{
			if (func_170(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_105(iParam0));
				func_173(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_105(iParam0));
		}
	
		return 0;
	}

	if (!func_174(iParam0) && func_20() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_105(iParam0)))
	{
		func_173(iParam0, 128);
		return 1;
	}

	func_172(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_103(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_105(iParam0));

	if (func_170(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_105(iParam0));
		func_173(iParam0, 2048);
	}

	return 1;
}

void func_97(int iParam0) // Position - 0x2AAA Hash - 0x917ADBBF ^0xEC44C5A
{
	func_175(iParam0, 4);
	func_177(Global_1392240.f_1[iParam0 /*18*/].f_4, 58, Global_1392240.f_1[iParam0 /*18*/], func_176(iParam0));

	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam0 /*18*/].f_5))
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392240.f_1[iParam0 /*18*/].f_5, func_176(iParam0));

	return;
}

int func_98(int iParam0) // Position - 0x2B06 Hash - 0xADF56C97 ^0xADF56C97
{
	if (!func_178(iParam0))
		return 0;

	if (func_179(iParam0))
		return 0;

	!func_180(94) && !func_181(94) && !func_180(95) && !func_181(95);
	func_175(iParam0, 1);
	return 1;
}

void func_99(int iParam0, int iParam1) // Position - 0x2B5F Hash - 0x9E6D13B9 ^0xEE34FD4F
{
	if (func_182(iParam0, iParam1))
		return;

	Global_1392240.f_1[iParam0 /*18*/].f_14 = Global_1392240.f_1[iParam0 /*18*/].f_14 || iParam1;
	return;
}

BOOL func_100(int iParam0, int iParam1) // Position - 0x2B90 Hash - 0x833F7FAB ^0x8F10A7ED
{
	return Global_40.f_9422[iParam0 /*7*/].f_5 && iParam1 != false;
}

BOOL func_101(int iParam0) // Position - 0x2BA9 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_20() != -1)
		return false;

	if (!func_183(iParam0))
		return false;

	return func_113(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_102() // Position - 0x2BDA Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_20() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

Hash func_103(int iParam0) // Position - 0x2BFF Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_94(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_104(Hash hParam0) // Position - 0x2C1D Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

PersChar func_105(int iParam0) // Position - 0x2C29 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_94(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

Hash func_106(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2C49 Hash - 0xEC5804B5 ^0x15A1D925
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

BOOL func_107(Hash hParam0) // Position - 0x2CED Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_184(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

void func_108(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2D08 Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_107(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_109(Hash hParam0, BOOL bParam1) // Position - 0x2D40 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_107(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_110(Hash hParam0, BOOL bParam1) // Position - 0x2D6E Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_107(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_111(Hash hParam0, BOOL bParam1) // Position - 0x2D9C Hash - 0x4844A91D ^0x50E23246
{
	if (func_107(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_112() // Position - 0x2DCA Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_113(int iParam0, BOOL bParam1) // Position - 0x2DD3 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_185(iParam0))
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

void func_114() // Position - 0x2E04 Hash - 0x2EC33637 ^0x8B50BD3C
{
	func_175(6, 16777216);
	return;
}

BOOL func_115(int iParam0, int iParam1) // Position - 0x2E16 Hash - 0x833F7FAB ^0x9717C427
{
	return Global_40.f_9422[iParam0 /*7*/].f_4 && iParam1 != false;
}

BOOL func_116() // Position - 0x2E2F Hash - 0xAC971DCB ^0xAC971DCB
{
	if (func_186() || func_187())
		return true;

	return false;
}

void func_117(int iParam0, int iParam1) // Position - 0x2E4D Hash - 0x599443D0 ^0x4FAC5F67
{
	if (!func_100(iParam0, iParam1))
		return;

	Global_40.f_9422[iParam0 /*7*/].f_5 = Global_40.f_9422[iParam0 /*7*/].f_5 - Global_40.f_9422[iParam0 /*7*/].f_5 && iParam1;
	return;
}

void func_118() // Position - 0x2E8C Hash - 0x24A49766 ^0x8C7BAF00
{
	func_175(6, 8388608);
	return;
}

void func_119(int iParam0, int iParam1) // Position - 0x2E9D Hash - 0x70089F5 ^0x4739B5DA
{
	if (func_100(iParam0, iParam1))
		return;

	Global_40.f_9422[iParam0 /*7*/].f_5 = Global_40.f_9422[iParam0 /*7*/].f_5 || iParam1;
	return;
}

BOOL func_120(int iParam0) // Position - 0x2ECE Hash - 0x1F2EC350 ^0x1F2EC350
{
	return iParam0 > -1 && iParam0 < 12;
}

BOOL func_121(int iParam0) // Position - 0x2EE4 Hash - 0x532FA545 ^0x532FA545
{
	return iParam0 > -1 && iParam0 < 16;
}

BOOL func_122(int iParam0) // Position - 0x2EFA Hash - 0xE2693F54 ^0xE2693F54
{
	return bLocal_18 && iParam0 != false;
}

BOOL func_123(int iParam0) // Position - 0x2F09 Hash - 0xF86ACD88 ^0x5E8F4AB5
{
	PersChar persChar;

	if (func_170(iParam0, 32))
		return true;

	if (!func_94(iParam0))
		return false;

	persChar = func_105(iParam0);

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return false;

	PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	func_188(iParam0, 32);
	return true;
}

void func_124(BOOL bParam0) // Position - 0x2F53 Hash - 0xBDD9F5CB ^0xBDD9F5CB
{
	if (func_122(bParam0))
		return;

	bLocal_18 = bLocal_18 || bParam0;
	return;
}

void func_125(BOOL bParam0) // Position - 0x2F6E Hash - 0xE331AB2B ^0xE331AB2B
{
	if (!func_122(bParam0))
		return;

	bLocal_18 = bLocal_18 - bLocal_18 && bParam0;
	return;
}

Vector3 func_126(int iParam0) // Position - 0x2F8D Hash - 0x563C355B ^0x563C355B
{
	switch (iParam0)
	{
		case 0:
			return 1789f, -81.2f, 56.8f;
	
		case 1:
			return 777.04694f, 848.3318f, 117.90971f;
	
		case 2:
			return 1319.0719f, -2281.907f, 51.31572f;
	
		case 3:
			return -415.0638f, 1752.6582f, 217.66754f;
	
		case 4:
			return 1623.0446f, -364.02344f, 75.39715f;
	
		case 5:
			return 2820.8657f, 275.31424f, 51.84647f;
	
		case 6:
			return 2990.4836f, 2188.2888f, 165.7838f;
	
		case 7:
			return -1817.3707f, 657.6644f, 130.86272f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_127(int iParam0, int iParam1) // Position - 0x3060 Hash - 0xECB143B0 ^0xF87C0A2B
{
	return Global_1392240.f_1[iParam0 /*18*/].f_15 && iParam1 != false;
}

void func_128(Hash hParam0) // Position - 0x3079 Hash - 0x7DD010A2 ^0xA0826F55
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		STREAMING::REMOVE_IPL_HASH(hParam0);

	return;
}

void func_129(Hash hParam0) // Position - 0x3090 Hash - 0x78302BA0 ^0x558F2DE9
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		STREAMING::REQUEST_IPL_HASH(hParam0);

	return;
}

void func_130(int iParam0, int iParam1) // Position - 0x30A8 Hash - 0x9E6D13B9 ^0xB2B835C5
{
	if (func_127(iParam0, iParam1))
		return;

	Global_1392240.f_1[iParam0 /*18*/].f_15 = Global_1392240.f_1[iParam0 /*18*/].f_15 || iParam1;
	return;
}

void func_131() // Position - 0x30D9 Hash - 0x1F4D38D8 ^0xD4891899
{
	if (!func_122(8))
		return;

	switch (iLocal_19)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("p_fireplacelogs02x"), false);
			func_189(1);
			break;
	
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_fireplacelogs02x")))
				return;
		
			if (!func_190(&obLocal_16, joaat("p_fireplacelogs02x"), &uLocal_17, 2992.5903f, 2194.7092f, 165.788f, 4, false))
				return;
		
			func_189(2);
			break;
	
		case 2:
			ENTITY::_0x56E0735D6273B227(obLocal_16, 1);
			OBJECT::_SET_OBJECT_BURN_OPACITY(obLocal_16, 0f);
			func_189(3);
			break;
	
		case 3:
			break;
	}

	return;
}

int func_132(int iParam0) // Position - 0x3176 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

BOOL func_133(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3180 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_191(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return false;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return false;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return true;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return false;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return true;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return true;

	return false;
}

void func_134(var uParam0, BOOL bParam1) // Position - 0x32B5 Hash - 0xEE5105FF ^0x351E529
{
	if (bParam1)
		if (GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(*uParam0))
			return;
	else if (!GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(*uParam0))
		return;

	GRAPHICS::_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(*uParam0, bParam1);
	return;
}

BOOL func_135(eStackSize essParam0) // Position - 0x32E9 Hash - 0x43A4311 ^0x43A4311
{
	if (essParam0 == 22 || essParam0 == 37 && !func_102())
		return true;

	if (essParam0 == 61)
		return true;

	return false;
}

BOOL func_136() // Position - 0x331E Hash - 0xB5F1D039 ^0x491A8075
{
	if (Global_16)
		return false;

	if (!func_192())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
		return false;

	if (func_193(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_137(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x3361 Hash - 0xAA95C4FB ^0xB3C7DDA0
{
	const char* str;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
		str = func_194(Global_1894899.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) && bParam4)
		str = func_196(func_195(Global_36));

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (!func_197(iParam0) || func_198(45))
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

BOOL func_138(int iParam0) // Position - 0x3DC4 Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_139(int iParam0) // Position - 0x3DD9 Hash - 0xA08D7C4E ^0xA08D7C4E
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

Hash func_140(int iParam0) // Position - 0x3E94 Hash - 0x7493E565 ^0x5CB7541E
{
	if (!func_138(iParam0))
		return -1;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/];

	return Global_1058888.f_42196[iParam0 /*12*/];
}

int func_141(int iParam0) // Position - 0x3ECE Hash - 0x653F925B ^0x653F925B
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

char* func_142(int iParam0) // Position - 0x402B Hash - 0x21CE226B ^0x32CC558F
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

BOOL func_143(int iParam0, BOOL bParam1) // Position - 0x4066 Hash - 0x60CCFF55 ^0x376285D7
{
	if (!func_7(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_431[iParam0] && bParam1 != false;

	return Global_1058888.f_42269[iParam0] && bParam1 != false;
}

BOOL func_144(int iParam0, int iParam1) // Position - 0x40AA Hash - 0xD0DCDA48 ^0x4E1FA2FB
{
	if (!func_138(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1 != false;
}

eStackSize func_145() // Position - 0x40F2 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_146(eStackSize essParam0) // Position - 0x40FE Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_147(eStackSize essParam0) // Position - 0x4111 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

float func_148(float fParam0) // Position - 0x4123 Hash - 0xC643B4E3 ^0xC643B4E3
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_149(var uParam0, int iParam1) // Position - 0x4139 Hash - 0xB0CFF0C3 ^0xF24F44AE
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_199(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_150(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x416F Hash - 0x10503CC4 ^0x6232183B
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

BOOL func_151(int iParam0) // Position - 0x41B2 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_152(eStackSize essParam0) // Position - 0x41C5 Hash - 0xEC19E423 ^0x3F24553E
{
	int num;

	if (func_197(essParam0))
		if (!func_198(45))
			return false;

	num = func_6(essParam0);

	if (func_200())
		if (!func_113(Global_1835011[3 /*74*/].f_1, true))
			return num == 7 || num == 6;

	return true;
}

void func_153(int iParam0, int iParam1) // Position - 0x4217 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_154(int iParam0, int iParam1) // Position - 0x4228 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_155(var uParam0, var uParam1, int iParam2) // Position - 0x423E Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

eStackSize func_156() // Position - 0x424E Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_157(int iParam0) // Position - 0x425C Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_158(int iParam0) // Position - 0x4272 Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1327479.f_3 = iParam0;
	return;
}

int func_159() // Position - 0x4282 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_160(int iParam0, int iParam1) // Position - 0x4291 Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_157(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_161(int iParam0) // Position - 0x42B4 Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_157(iParam0))
		return false;

	if (func_201(64) && func_202(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_162(int iParam0) // Position - 0x42EC Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_157(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_163(int iParam0) // Position - 0x430C Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_157(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_203(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

void func_164(int iParam0, int iParam1) // Position - 0x4375 Hash - 0x722D8B43 ^0x9A7D4F76
{
	if (!func_127(iParam0, iParam1))
		return;

	Global_1392240.f_1[iParam0 /*18*/].f_15 = Global_1392240.f_1[iParam0 /*18*/].f_15 - Global_1392240.f_1[iParam0 /*18*/].f_15 && iParam1;
	return;
}

void func_165(var uParam0) // Position - 0x43B4 Hash - 0x6F4EA9D3 ^0x586498AB
{
	if (*uParam0 == 0)
		return;

	if (!ENTITY::IS_MAP_ENTITY_PINNED(*uParam0))
		return;

	ENTITY::_UNPIN_MAP_ENTITY(*uParam0);
	return;
}

void func_166(int iParam0) // Position - 0x43DB Hash - 0x3E288458 ^0xC75F9664
{
	func_204(Global_1935369.f_5[iParam0 /*11*/].f_6, true);
	func_205(Global_1935369.f_5[iParam0 /*11*/].f_6, false);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1935369.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1935369.f_5[iParam0 /*11*/].f_8);
		Global_1935369.f_5[iParam0 /*11*/].f_8 = 0;
	}

	func_206(iParam0, 8192);
	func_206(iParam0, 16384);
	func_206(iParam0, 32768);
	func_206(iParam0, 131072);
	func_206(iParam0, 16777216);
	func_206(iParam0, 524288);
	func_206(iParam0, 1048576);
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

void func_167(int iParam0) // Position - 0x44E6 Hash - 0x3CD01C93 ^0xBF009143
{
	int i;
	int num;

	if (func_94(Global_1914319.f_3[iParam0 /*446*/].f_21) && func_207(Global_1914319.f_3[iParam0 /*446*/].f_21))
		func_208(Global_1914319.f_3[iParam0 /*446*/].f_21, false, true, false, false);

	Global_1914319.f_3[iParam0 /*446*/].f_11 = { 0f, 0f, 0f };
	Global_1914319.f_3[iParam0 /*446*/].f_21 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_17 = 0;
	Global_1914319.f_3[iParam0 /*446*/].f_1 = 0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1914319.f_3[iParam0 /*446*/].f_34))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1914319.f_3[iParam0 /*446*/].f_34, false);

	func_209(Global_1914319.f_3[iParam0 /*446*/].f_10, false);
	func_210(iParam0, 536870912);
	num = func_211(iParam0);

	if (num >= 15)
	{
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_169(Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/]);
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
	func_212(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_10 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = -1;
	func_213(iParam0, false);
	return;
}

int func_168(eStackSize essParam0) // Position - 0x46C5 Hash - 0xAC39A336 ^0xDF4F13BE
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_1392240.f_1[i /*18*/].f_4 == essParam0)
			return i;
	}

	return -1;
}

void func_169(Hash hParam0) // Position - 0x46F7 Hash - 0xDB9A74EC ^0x13B3F16D
{
	if (func_107(hParam0) && func_214())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

BOOL func_170(int iParam0, BOOL bParam1) // Position - 0x4717 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_20() != -1)
		return false;

	if (!func_94(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

int func_171(int iParam0, BOOL bParam1) // Position - 0x4745 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_94(iParam0))
		return 0;

	if (!func_170(iParam0, 2))
		return 0;

	if (func_103(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_105(iParam0)))
		return 1;

	if (func_170(iParam0, true) && !bParam1)
	{
		func_188(iParam0, 128);
		return 1;
	}

	func_173(iParam0, 129);
	func_215(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_105(iParam0));
	func_172(iParam0, 0);
	return 1;
}

void func_172(int iParam0, PersChar pchParam1) // Position - 0x47C8 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_94(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

void func_173(int iParam0, BOOL bParam1) // Position - 0x47E9 Hash - 0x452DF11A ^0x452DF11A
{
	if (func_20() != -1)
		return;

	if (!func_94(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_174(int iParam0) // Position - 0x4822 Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_94(iParam0))
		return false;

	if (!func_170(iParam0, 2))
		return false;

	return true;
}

void func_175(int iParam0, int iParam1) // Position - 0x4848 Hash - 0x70089F5 ^0x5D9054CC
{
	if (func_115(iParam0, iParam1))
		return;

	Global_40.f_9422[iParam0 /*7*/].f_4 = Global_40.f_9422[iParam0 /*7*/].f_4 || iParam1;
	return;
}

char* func_176(int iParam0) // Position - 0x4879 Hash - 0x58E7BC8C ^0x2D384904
{
	if (func_115(iParam0, 4))
		return "PROC_BLIP_HROB2";

	switch (iParam0)
	{
		case 0:
			return "PROC_BLIP_HROB_AB";
	
		case 1:
			return "PROC_BLIP_HROB_CD";
	
		case 2:
			return "PROC_BLIP_HROB_CJ";
	
		case 3:
			return "PROC_BLIP_HROB_CP";
	
		case 4:
			return "PROC_BLIP_HROB_LN";
	
		case 5:
			return "PROC_BLIP_HROB_VH";
	
		case 6:
			return "PROC_BLIP_HROB_RS";
	
		case 7:
			return "PROC_BLIP_HROB_WC";
	
		default:
		
	}

	return "PROC_BLIP_HROB";
}

void func_177(eStackSize essParam0, int iParam1, var uParam2, var uParam3, var uParam4, char* sParam5) // Position - 0x4906 Hash - 0x9A7ECD55 ^0x9A7ECD55
{
	BOOL flag;
	Hash i;

	flag = func_216(uParam2);

	for (i = 0; i < Global_36308; i = i + 1)
	{
		if (func_217(i) == essParam0 && func_218(i) == iParam1 && func_219(i) == flag)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_36308[i], sParam5);
		
			return;
		}
	}

	return;
}

BOOL func_178(int iParam0) // Position - 0x4972 Hash - 0xD1716FE1 ^0xD1716FE1
{
	return iParam0 > -1 && iParam0 < 8;
}

BOOL func_179(int iParam0) // Position - 0x4988 Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_115(iParam0, 1);
}

BOOL func_180(int iParam0) // Position - 0x4997 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_20() != -1)
		return false;

	if (!func_183(iParam0))
		return false;

	return func_220(Global_1347702[iParam0 /*49*/].f_15);
}

BOOL func_181(int iParam0) // Position - 0x49C7 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_20() != -1)
		return false;

	if (!func_183(iParam0))
		return false;

	return func_221(Global_1347702[iParam0 /*49*/].f_15);
}

BOOL func_182(int iParam0, int iParam1) // Position - 0x49F7 Hash - 0xECB143B0 ^0x2ED246AF
{
	return Global_1392240.f_1[iParam0 /*18*/].f_14 && iParam1 != false;
}

BOOL func_183(int iParam0) // Position - 0x4A10 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_184(Hash hParam0) // Position - 0x4A26 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

int func_185(int iParam0) // Position - 0x4A32 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_222(iParam0))
		return -1;

	return func_223(iParam0);
}

BOOL func_186() // Position - 0x4A4E Hash - 0xCCAAB885 ^0xEFC5DED
{
	return func_115(6, 4194304);
}

BOOL func_187() // Position - 0x4A5F Hash - 0xCCAAB885 ^0x4EC0CCBE
{
	return func_115(6, 8388608);
}

void func_188(int iParam0, BOOL bParam1) // Position - 0x4A70 Hash - 0x61515A20 ^0x61515A20
{
	if (func_20() != -1)
		return;

	if (!func_94(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_189(int iParam0) // Position - 0x4AA1 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_19 = iParam0;
	return;
}

BOOL func_190(var uParam0, Hash hParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0x4AAD Hash - 0x2439149A ^0x5995B83
{
	Entity pinnedMapEntity;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (bParam7)
			if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(*uParam0))
				return false;
	
		return true;
	}

	if (*uParam2 == 0)
	{
		*uParam2 = ENTITY::PIN_CLOSEST_MAP_ENTITY(hParam1, fParam3, iParam6 | 2 | 1);
		return false;
	}

	if (!ENTITY::IS_MAP_ENTITY_PINNED(*uParam2))
		return false;

	pinnedMapEntity = ENTITY::_GET_PINNED_MAP_ENTITY(*uParam2);
	*uParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pinnedMapEntity);
	return false;
}

BOOL func_191(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B18 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_192() // Position - 0x4BB6 Hash - 0x7BF82DA8 ^0x7BF82DA8
{
	if (func_20() != false)
		return true;

	return true;
}

BOOL func_193(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4BCB Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_224())
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
		num = func_225(Global_1898164.f_1[0 /*5*/]);
	
		if (func_183(num) && func_226(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_222(Global_1898164.f_1[0 /*5*/]))
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

const char* func_194(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x4DCF Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_195(var uParam0, var uParam1, var uParam2) // Position - 0x4DE3 Hash - 0xD993B6FD ^0xD993B6FD
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_227(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_196(int iParam0) // Position - 0x4E11 Hash - 0xE6862179 ^0xF8F6FDC8
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

BOOL func_197(eStackSize essParam0) // Position - 0x50F5 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_198(int iParam0) // Position - 0x511F Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_228(iParam0))
		return false;

	return func_229(iParam0);
}

const char* func_199(const char* sParam0, int iParam1) // Position - 0x513B Hash - 0x9E99F03 ^0x778068F9
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_200() // Position - 0x5155 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_201(int iParam0) // Position - 0x5174 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_202(int iParam0) // Position - 0x5188 Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_160(iParam0, Global_1310750.f_16072 | 64);
}

void func_203(int iParam0) // Position - 0x51A0 Hash - 0x3D0B339A ^0xB87B2B3D
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

void func_204(int iParam0, BOOL bParam1) // Position - 0x522D Hash - 0x2F9EB0B9 ^0x64288D41
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

void func_205(int iParam0, BOOL bParam1) // Position - 0x5261 Hash - 0x342D57CF ^0x7E166F3
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

void func_206(int iParam0, int iParam1) // Position - 0x5296 Hash - 0x823E3440 ^0x340E01B4
{
	func_230(&(Global_1935369.f_5[iParam0 /*11*/].f_7), iParam1);
	return;
}

BOOL func_207(int iParam0) // Position - 0x52B0 Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_94(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_208(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x52D5 Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_94(iParam0))
		return;

	if (!func_170(iParam0, 1))
		return;

	if (!func_170(iParam0, 2))
		return;

	if (!bParam4 && !func_207(iParam0) && func_231(iParam0))
		return;

	func_173(iParam0, 1);
	func_215(iParam0);

	if (func_104(func_103(iParam0)))
	{
		persChar = func_105(iParam0);
	
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
	
		func_173(iParam0, 16);
	}

	if (func_170(iParam0, 128) && !bParam3)
		func_171(iParam0, false);

	return;
}

void func_209(int iParam0, BOOL bParam1) // Position - 0x53C1 Hash - 0x6FB1865F ^0x85C63E45
{
	if (!func_232(iParam0))
		return;

	if (bParam1)
	{
		if (!func_233(iParam0, 1024))
		{
			func_234(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_233(iParam0, 1024))
	{
		func_235(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	func_236(iParam0);
	return;
}

void func_210(int iParam0, int iParam1) // Position - 0x5417 Hash - 0xD75877A8 ^0xA8B353E5
{
	if (!func_237(iParam0))
		return;

	Global_1914319.f_3[iParam0 /*446*/].f_7 = Global_1914319.f_3[iParam0 /*446*/].f_7 - Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1;
	return;
}

int func_211(int iParam0) // Position - 0x5457 Hash - 0x47F93C28 ^0x59A8BC1F
{
	return Global_1914319.f_3[iParam0 /*446*/].f_408;
}

void func_212(int iParam0) // Position - 0x546D Hash - 0x53643336 ^0x7E4A5E20
{
	Global_1914319.f_3[iParam0 /*446*/].f_7 = 0;
	return;
}

void func_213(int iParam0, BOOL bParam1) // Position - 0x5483 Hash - 0x1BC36FD9 ^0xDFBA1F0
{
	int num;
	int num2;
	int offset;

	if (!func_237(iParam0))
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

BOOL func_214() // Position - 0x54D4 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_215(int iParam0) // Position - 0x54DD Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_94(iParam0))
		return;

	ped = func_238(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

BOOL func_216(float fParam0, var uParam1, var uParam2) // Position - 0x5521 Hash - 0xEEEBBA53 ^0xA3D9EE1A
{
	BOOL flag;

	flag = BUILTIN::ROUND(MISC::ABSF(fParam0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(fParam0.f_1)) & 32767, 15);

	if (fParam0 > 0f)
		flag = flag | 1073741824;

	if (fParam0.f_1 > 0f)
		flag = flag | -2147483648;

	return flag;
}

eStackSize func_217(Hash hParam0) // Position - 0x5576 Hash - 0x28677675 ^0xD6005963
{
	if (Global_1572887.f_12 == -1)
		return Global_40.f_7862[hParam0 /*4*/];

	return Global_42606[hParam0 /*4*/];
}

int func_218(Hash hParam0) // Position - 0x559C Hash - 0x9D68FB33 ^0x4832040D
{
	if (Global_1572887.f_12 == -1)
		return Global_40.f_7862[hParam0 /*4*/].f_1;

	return Global_42606[hParam0 /*4*/].f_1;
}

BOOL func_219(Hash hParam0) // Position - 0x55C6 Hash - 0x9D68FB33 ^0xB64B3BD7
{
	if (Global_1572887.f_12 == -1)
		return Global_40.f_7862[hParam0 /*4*/].f_2;

	return Global_42606[hParam0 /*4*/].f_2;
}

BOOL func_220(int iParam0) // Position - 0x55F0 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_185(iParam0);
	return num == 3 || num == 4;
}

BOOL func_221(int iParam0) // Position - 0x560E Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return 0;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return 0;
	
		num = func_223(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

BOOL func_222(int iParam0) // Position - 0x5679 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_223(int iParam0) // Position - 0x56AC Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_239(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_224() // Position - 0x56ED Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_225(int iParam0) // Position - 0x5740 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_222(iParam0))
		return -1;

	return func_241(func_240(iParam0));
}

BOOL func_226(int iParam0, int iParam1) // Position - 0x5760 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_227(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x576F Hash - 0x5431B0F9 ^0x1E2109F7
{
	var unk;
	float num;
	float num2;

	func_242(iParam3, &unk, &num, &num2);

	if (func_243(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

BOOL func_228(int iParam0) // Position - 0x579F Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_229(int iParam0) // Position - 0x57B2 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_230(BOOL bParam0, int iParam1) // Position - 0x57DC Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_231(int iParam0) // Position - 0x57F1 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_94(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

BOOL func_232(int iParam0) // Position - 0x5815 Hash - 0x91023C9F ^0x91023C9F
{
	return iParam0 > -1 && iParam0 < 153;
}

BOOL func_233(int iParam0, BOOL bParam1) // Position - 0x582B Hash - 0xC3E950D6 ^0xC3E950D6
{
	if (!func_232(iParam0))
		return false;

	return Global_1914319.f_15614[iParam0] && bParam1 != false;
}

void func_234(int iParam0, BOOL bParam1) // Position - 0x5851 Hash - 0x7639AFD6 ^0x7639AFD6
{
	if (!func_232(iParam0))
		return;

	Global_1914319.f_15614[iParam0] = Global_1914319.f_15614[iParam0] || bParam1;
	return;
}

void func_235(int iParam0, BOOL bParam1) // Position - 0x587F Hash - 0xECD22DFB ^0xECD22DFB
{
	if (!func_232(iParam0))
		return;

	Global_1914319.f_15614[iParam0] = Global_1914319.f_15614[iParam0] - Global_1914319.f_15614[iParam0] && bParam1;
	return;
}

void func_236(int iParam0) // Position - 0x58B9 Hash - 0xB29062D ^0xB29062D
{
	func_245(func_244(iParam0));
	return;
}

BOOL func_237(int iParam0) // Position - 0x58CB Hash - 0x895544C2 ^0x895544C2
{
	return iParam0 > -1 && iParam0 < 35;
}

Ped func_238(int iParam0) // Position - 0x58E1 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_105(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

int func_239(int iParam0) // Position - 0x590F Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_240(int iParam0) // Position - 0x5990 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_241(BOOL bParam0) // Position - 0x59CE Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

void func_242(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x59E1 Hash - 0x7A16E50C ^0x7A16E50C
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

BOOL func_243(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0x647E Hash - 0x3D2F8087 ^0xB0BC8DD5
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

int func_244(int iParam0) // Position - 0x64E4 Hash - 0x1497AC6A ^0x1497AC6A
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

void func_245(int iParam0) // Position - 0x6938 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1914319.f_15923 = iParam0;
	return;
}

