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
	Volume volLocal_27 = 0;
	Volume volLocal_28 = 0;
	Volume volLocal_29 = 0;
	Volume volLocal_30 = 0;
	int iLocal_31 = 0;
	BOOL bLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	BOOL bLocal_38 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xFC6E0ECD ^0x1C3D4A53
{
	int num;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_31 = 1;
	iLocal_33 = 20000;
	iLocal_36 = iScriptParam_0;
	iLocal_34 = iScriptParam_0.f_2;
	bLocal_38 = false;

	if (Global_1901671.f_2.f_26 > 0)
		func_1();

	func_2();
	func_3();
	iLocal_35 = MISC::GET_GAME_TIMER();
	num = 0;

	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_35)
		{
			iLocal_35 = 0;
			func_5(iLocal_36, &iLocal_34);
		
			switch (iLocal_34)
			{
				case 0:
					if (Global_1901671.f_2.f_26 > 0)
					{
						iLocal_37 = MISC::GET_GAME_TIMER() + Global_1901671.f_2.f_26;
						iLocal_34 = 1;
					}
					else
					{
						iLocal_34 = 2;
					}
					break;
			
				case 1:
					if (!func_1() || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						bLocal_38 = false;
						iLocal_34 = 2;
					}
					break;
			
				case 2:
					func_6(iLocal_36);
					func_7();
					func_8();
				
					if (func_10(func_9(iLocal_36)))
						func_11(func_9(iLocal_36), 4);
				
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_36));
					Global_1896644 = -1;
					iLocal_37 = iLocal_33 + MISC::GET_GAME_TIMER();
					iLocal_34 = 3;
					break;
			
				case 3:
					if (func_13() || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT(iLocal_36);
						iLocal_37 = MISC::GET_GAME_TIMER() + iLocal_33;
						iLocal_34 = 4;
					}
					break;
			
				case 4:
					if (func_15(iLocal_36) || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0(iLocal_36);
						iLocal_37 = MISC::GET_GAME_TIMER() + iLocal_33;
						iLocal_34 = 5;
					}
					break;
			
				case 5:
					if (func_17(iLocal_36) || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0_0(iLocal_36);
						iLocal_37 = iLocal_33 + MISC::GET_GAME_TIMER();
						iLocal_34 = 7;
					}
					break;
			
				case 7:
					if (func_10(func_9(iLocal_36)))
						if (func_19(func_9(iLocal_36), 4) && !(iLocal_37 < MISC::GET_GAME_TIMER()))
							break;
				
					if (func_20(iLocal_36) || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						func_21(iLocal_36, 4);
						iLocal_37 = MISC::GET_GAME_TIMER() + iLocal_33;
						iLocal_34 = 8;
					}
					break;
			
				case 8:
					_DEBUG_PRINT_0_0_0(iLocal_36);
					func_23();
				
					if (!func_24(4105, false))
						func_25();
				
					func_26();
					func_27();
					func_28();
					func_29(iLocal_36);
					func_30(iLocal_36);
					func_31();
					func_32();
					iLocal_34 = 9;
					break;
			
				case 9:
					_DEBUG_PRINT_0_0_0_0(iLocal_36);
					func_34();
					iLocal_34 = 10;
					break;
			
				case 10:
					func_35(&Global_1896698);
					func_36(iLocal_36, &Global_1896698);
					iLocal_34 = 11;
					break;
			
				case 11:
					func_37(iLocal_36);
					func_21(iLocal_36, 8);
				
					if (func_38(32))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_IN(500);
					
						func_39(32);
					}
				
					iLocal_34 = 12;
					break;
			
				case 12:
					if (func_40(iLocal_36))
						iLocal_35 = MISC::GET_GAME_TIMER() + 1000;
				
					func_41(&Global_1896698, iLocal_36);
					func_42(iLocal_36);
					func_21(iLocal_36, 8);
				
					if (func_43())
						PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				
					PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_36 /*36*/].f_11);
				
					if (Global_1887363[iLocal_36 /*36*/].f_12 > 0f)
						PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_36 /*36*/].f_12);
					break;
			
				case 13:
					func_8();
					func_44(num);
					num = num + 1;
					break;
			}
		}
	
		if (Global_1887363[iLocal_36 /*36*/].f_13 == 0)
		{
		}
		else
		{
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1887363[iLocal_36 /*36*/].f_13);
		}
	
		BUILTIN::WAIT(0);
	}

	num = 0;

	while (!func_44(num))
	{
		num = num + 1;
		BUILTIN::WAIT(0);
	}

	if (func_45() == -1)
	{
	}
	else
	{
		func_46();
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1() // Position - 0x388 Hash - 0x51BBAF33 ^0x51BBAF33
{
	if (!bLocal_38)
	{
		if (Global_1051194)
		{
			bLocal_38 = true;
			return true;
		}
	
		if (func_47() && func_48())
		{
			bLocal_38 = true;
			return true;
		}
	
		return false;
	}

	if (Global_1051194)
		return true;

	if (func_48())
		return true;

	bLocal_38 = false;
	return false;
}

void func_2() // Position - 0x3D9 Hash - 0x2D3C4881 ^0x5F6A96E
{
	int num;

	if (func_45() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		num = 0;
	
		while (!func_44(num))
		{
			num = num + 1;
			BUILTIN::WAIT(0);
		}
	
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_3() // Position - 0x42A Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_4() // Position - 0x432 Hash - 0xC69268B8 ^0xC69268B8
{
	if (func_45() != -1)
		return !func_49(true, true);

	return true;
}

void func_5(int iParam0, var uParam1) // Position - 0x44D Hash - 0x1DD95532 ^0x798CA2F1
{
	if (!func_38(16))
		return;

	if (Global_1893611.f_7 == 0)
	{
		func_39(16);
		return;
	}

	if (!func_50(iParam0))
	{
		Global_1893611.f_7 = 0;
		func_39(16);
		return;
	}

	if (func_51(8))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 8;
			return;
		}
		else if (*uParam1 != 8)
		{
			func_52(8);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(2))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 4;
			return;
		}
		else if (*uParam1 != 4)
		{
			func_52(2);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(16))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 9;
			return;
		}
		else if (*uParam1 != 9)
		{
			func_52(16);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(4))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 7;
			return;
		}
		else if (*uParam1 != 7)
		{
			func_52(4);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(1))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 3;
			return;
		}
		else if (*uParam1 != 3)
		{
			func_52(1);
			*uParam1 = 12;
			return;
		}
	}

	return;
}

void func_6(int iParam0) // Position - 0x57D Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_7() // Position - 0x585 Hash - 0xFC5DFC3D ^0xFC5DFC3D
{
	if (!Global_1102813.f_3967)
		Global_1102813.f_3967 = 1;

	return;
}

void func_8() // Position - 0x5A3 Hash - 0x6E39B93A ^0x6E39B93A
{
	if (!Global_1072759.f_23824)
		Global_1072759.f_23824 = 1;

	return;
}

int func_9(int iParam0) // Position - 0x5BE Hash - 0x4D13899D ^0x4D13899D
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 30)
		return 1;
	else if (iParam0 <= 34)
		return 2;
	else if (iParam0 <= 38)
		return 3;
	else if (iParam0 <= 41)
		return 4;
	else if (iParam0 <= 52)
		return 7;
	else if (iParam0 <= 61)
		return 6;
	else if (iParam0 <= 66)
		return 8;
	else if (iParam0 <= 81)
		return 9;
	else if (iParam0 <= 98)
		return 10;
	else if (iParam0 <= 112)
		return 11;
	else if (iParam0 <= 119)
		return 12;
	else if (iParam0 <= 122)
		return 13;
	else if (iParam0 <= 126)
		return 14;
	else if (iParam0 <= 134)
		return 15;
	else if (iParam0 <= 138)
		return 16;

	return -1;
}

BOOL func_10(int iParam0) // Position - 0x6BA Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

void func_11(int iParam0, BOOL bParam1) // Position - 0x6D0 Hash - 0xACB2A3A5 ^0xACB2A3A5
{
	Global_1896646[iParam0 /*2*/] = Global_1896646[iParam0 /*2*/] || bParam1;
	return;
}

Hash func_12(int iParam0) // Position - 0x6EB Hash - 0x9C8621E4 ^0xA7A3B249
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
	
		case 37:
			num = joaat("OLDFORTWALLACE_RESIDENTS");
			break;
	
		case 40:
			num = joaat("BLACKWATER_RESIDENTS");
			break;
	
		case 60:
			num = joaat("WAPITI_RESIDENTS");
			break;
	
		case 66:
			num = joaat("MANICATO_RESIDENTS");
			break;
	
		case 74:
			num = joaat("EMERALDRANCH_RESIDENTS");
			break;
	
		case 81:
			num = joaat("VALENTINE_RESIDENTS");
			break;
	
		case 83:
			num = joaat("ANNESBURG_RESIDENTS");
			break;
	
		case 87:
			num = joaat("BUTCHERCREEK_RESIDENTS");
			break;
	
		case 98:
			num = joaat("VANHORNPOST_RESIDENTS");
			break;
	
		case 111:
			num = joaat("RHODES_RESIDENTS");
			break;
	
		case 116:
			num = joaat("MANZANITAPOST_RESIDENTS");
			break;
	
		default:
			num = 0;
			break;
	}

	return num;
}

BOOL func_13() // Position - 0x7D3 Hash - 0x5074ECF7 ^0xEE16C635
{
	if (func_45() == -1)
	{
		volLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1209.0531f, -193.1814f, 101.852f, 0f, 0f, 19.839853f, 6.216366f, 11.625232f, 3.695f, "ScarlettMeadows Horse Shop - m_volHorseShop");
		volLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1207.3763f, -186.34119f, 100.5991f, 0f, 0f, 16.999998f, 4f, 4.18f, 7f, "ScarlettMeadows Horse Shop - m_volHorseShopOutsideDoor");
		func_53(9, volLocal_28);
		volLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SCH_HORSESHOP_GUARD");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1193.4167f, -220.19348f, 101.97852f, 0f, 0f, 14.800278f, 34.68813f, 24.669338f, 23.863998f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1214.5133f, -212.87889f, 101.97852f, 0f, 0f, 15.607538f, 23.67516f, 28.10355f, 23.863998f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_29, 1187.1733f, -208.15097f, 105.19294f, 0f, 0f, 43.482304f, 32.91484f, 13.009473f, 30.263283f);
		volLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1209.0531f, -193.1814f, 101.97852f, 0f, 0f, 19.839853f, 100.21637f, 100.62523f, 30.88881f, "ScarlettMeadows Horse Shop - GUARDS REGISTER");
	}
	else
	{
		volLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1209.0531f, -193.1814f, 101.97852f, 0f, 0f, 19.839853f, 6.216366f, 11.625232f, 2.888809f, "ScarlettMeadows Horse Shop - m_volHorseShop");
	}

	return true;
}

void _DEBUG_PRINT(int iParam0) // Position - 0x927 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

BOOL func_15(int iParam0) // Position - 0x933 Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	iParam0 = iParam0;
	return true;
}

void _DEBUG_PRINT_0(int iParam0) // Position - 0x940 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

BOOL func_17(int iParam0) // Position - 0x94C Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	iParam0 = iParam0;
	return true;
}

void _DEBUG_PRINT_0_0(int iParam0) // Position - 0x959 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

BOOL func_19(int iParam0, BOOL bParam1) // Position - 0x965 Hash - 0xFB77C6C8 ^0xFB77C6C8
{
	return Global_1896646[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_20(int iParam0) // Position - 0x97A Hash - 0x6DE0FDC2 ^0x6DE0FDC2
{
	return func_54(iParam0, -1, -1, false);
}

void func_21(int iParam0, BOOL bParam1) // Position - 0x98B Hash - 0x85549BC4 ^0xED99428
{
	if (Global_1572887.f_14 == -1)
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] || bParam1;
	else
		Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] || bParam1;

	return;
}

void _DEBUG_PRINT_0_0_0(int iParam0) // Position - 0x9CA Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

void func_23() // Position - 0x9D6 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_24(int iParam0, BOOL bParam1) // Position - 0x9DE Hash - 0xB323866B ^0xE9E411E6
{
	if (func_55(iParam0))
		return true;

	if (!bParam1)
		if (func_56(5000))
			return true;

	switch (func_58(func_57(0)))
	{
		case -1:
			return false;
	
		case 2:
			if (iParam0 & 1 != 0)
				return true;
			break;
	
		case 3:
			if (iParam0 & 16 != 0)
				return true;
			break;
	
		case 4:
			if (iParam0 & 32 != 0)
				return true;
			break;
	
		case 5:
			if (iParam0 & 2 != 0)
				return true;
			break;
	
		case 7:
			if (iParam0 & 1024 != 0)
				return true;
			break;
	}

	return false;
}

void func_25() // Position - 0xA8E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_26() // Position - 0xA96 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_27() // Position - 0xA9E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_28() // Position - 0xAA6 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_29(int iParam0) // Position - 0xAAE Hash - 0xF2DF5406 ^0xE2BCC746
{
	if (func_45() == -1)
	{
		func_59(9, 798, volLocal_27, iParam0, 0, 0, 2, -1082130432, 0, 0);
		func_60(9, 1);
		func_60(9, 16384);
		func_61(9, 1024651048, 0, 0);
		func_61(9, -2089878557, 0, 0);
		func_61(9, 1889654345, -1f, 1);
		func_61(9, -937753286, 1f, 1);
		func_62(41, 9, true, false);
	}
	else
	{
		func_63(9, volLocal_27, iParam0, 0, 0, 2, true, false, -1082130432, 0);
		func_64(9, 536870912);
		func_64(9, 16384);
		func_64(9, 32768);
		func_64(9, 1);
		func_64(9, 8388608);
		func_64(9, 8192);
		func_64(9, 4);
		func_64(9, 16777216);
		func_64(9, 67108864);
	
		if (!func_65() && func_66())
		{
			func_67(9, 1889654345, 0, false, false);
			func_67(9, -937753286, 0, false, false);
		}
		else
		{
			func_67(9, 1889654345, -1f, true, true);
			func_67(9, -937753286, 1f, true, true);
		}
	}

	return;
}

void func_30(int iParam0) // Position - 0xBDB Hash - 0xC2713B21 ^0xB4879886
{
	func_68(798, volLocal_27, true);
	LAW::_CREATE_GUARD_ZONE("SCARLET_HORSE_SHOP_OUTSIDE_PENS");
	LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START("SCARLET_HORSE_SHOP_OUTSIDE_PENS", volLocal_30);
	LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED("SCARLET_HORSE_SHOP_OUTSIDE_PENS", volLocal_29);
	LAW::_SET_GUARD_ZONE_VOLUME_WARNING("SCARLET_HORSE_SHOP_OUTSIDE_PENS", volLocal_29);
	LAW::_SET_GUARD_ZONE_VOLUME_THREAT("SCARLET_HORSE_SHOP_OUTSIDE_PENS", volLocal_29);
	func_68(798, volLocal_29, true);
	func_68(800, volLocal_29, false);
	return;
}

void func_31() // Position - 0xC2F Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_32() // Position - 0xC37 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void _DEBUG_PRINT_0_0_0_0(int iParam0) // Position - 0xC3F Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

void func_34() // Position - 0xC4B Hash - 0x2E7B6F22 ^0x3889AD2B
{
	if (!Global_1893611.f_186)
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1893611.f_182, Global_1893611.f_183, Global_1893611.f_184, Global_1893611.f_185);

	return;
}

void func_35(var uParam0) // Position - 0xC7C Hash - 0x28951280 ^0x95B241A
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

void func_36(int iParam0, var uParam1) // Position - 0xCC2 Hash - 0x71931A41 ^0x38641BC4
{
	iParam0 = iParam0;
	uParam1->f_61 = uParam1->f_61;
	return;
}

void func_37(int iParam0) // Position - 0xCD6 Hash - 0xD90F0DEC ^0xD90F0DEC
{
	if (!func_69(iParam0))
		return;

	func_70();
	return;
}

BOOL func_38(BOOL bParam0) // Position - 0xCEF Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1893611 && bParam0 != false;
}

void func_39(BOOL bParam0) // Position - 0xD00 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1893611 = Global_1893611 - Global_1893611 && bParam0;
	return;
}

BOOL func_40(int iParam0) // Position - 0xD18 Hash - 0xF9D45C24 ^0x1E55842F
{
	func_71(41, 799, volLocal_29, 9, &iLocal_31);

	if (func_72(&bLocal_32))
	{
		if (bLocal_32)
		{
			func_73(1024651048, 1);
			func_73(-2089878557, 1);
		}
	}

	return false;
}

void func_41(var uParam0, int iParam1) // Position - 0xD52 Hash - 0xD10A9199 ^0x6508B54A
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;

	if (BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_74(Global_1940199, 32768) || func_74(Global_1940199, 16777216))
		return;

	if (func_75(uParam0, 1))
		return;

	uParam0->f_63 = uParam0->f_63 + 1;

	if (uParam0->f_63 < 10)
		return;

	uParam0->f_63 = 0;
	flag = false;
	flag2 = CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT();
	flag3 = func_76();

	for (i = 0; i < uParam0->f_61; i = i + 1)
	{
		switch (uParam0->[i /*3*/].f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->[i /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME(uParam0->[i /*3*/], Global_34))
					{
						if (!flag2 && !flag3)
						{
							if (!func_77(&uParam0->[i /*3*/], 1) && func_78(iParam1) && !func_79(iParam1, 16))
							{
								func_81(iParam1, func_80(), -1, false, -1, false);
								func_82(&uParam0->[i /*3*/], 1);
							}
						
							func_83(iParam1, false);
						}
					
						flag = true;
					}
				}
				break;
		
			default:
				break;
		}
	}

	func_84(flag);
	return;
}

int func_42(int iParam0) // Position - 0xE91 Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	iParam0 = iParam0;
	return 1;
}

BOOL func_43() // Position - 0xE9E Hash - 0x1E5EE2B6 ^0xA7F309C
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

	if (func_85(unk))
		return true;

	return false;
}

BOOL func_44(int iParam0) // Position - 0xED4 Hash - 0x6217D08D ^0x2FD90261
{
	if (iParam0 == 0)
	{
		func_86();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_36, 2048);
	
		if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("mpac_travel"), joaat("mpac_travel_012")))
		{
			switch (iLocal_36)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 136:
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_87(iLocal_36, false), 1);
					break;
			}
		}
	
		if (func_10(func_80()))
			func_11(func_80(), 8);
	
		func_88(iLocal_36, 4);
		func_88(iLocal_36, 8);
		func_84(false);
	
		if (func_45() == -1)
			func_89(false);
	
		func_90(iLocal_36);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_91(iLocal_36);
		func_92(iLocal_36);
	
		if (!func_93(iLocal_36, false))
			return false;
	}
	else if (!func_94(iLocal_36))
	{
		return false;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_45() // Position - 0xFE8 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

void func_46() // Position - 0xFF6 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_47() // Position - 0x1002 Hash - 0x9B63752F ^0x341C80A6
{
	if (Global_1572887.f_260.f_3 > 0)
		return true;

	if (Global_1572887.f_260.f_4 != 0)
		return true;

	return false;
}

BOOL func_48() // Position - 0x102D Hash - 0x5CB4FB5 ^0x16ECF26F
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_mission_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_deathmatch_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_race_controller"), -1, false, 0))
		return 1;

	return 0;
}

BOOL func_49(BOOL bParam0, BOOL bParam1) // Position - 0x106F Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_50(int iParam0) // Position - 0x114F Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_69(iParam0))
		return false;

	return func_95(iParam0, 8);
}

BOOL func_51(int iParam0) // Position - 0x116D Hash - 0xC67CC87B ^0x33ED18E1
{
	return Global_1893611.f_7 && iParam0 != false;
}

void func_52(int iParam0) // Position - 0x1180 Hash - 0xDD4F2B2E ^0xED52CD7
{
	Global_1893611.f_7 = Global_1893611.f_7 - Global_1893611.f_7 && iParam0;
	return;
}

void func_53(int iParam0, Volume volParam1) // Position - 0x119E Hash - 0xEC3F4CFF ^0x709A6C55
{
	Global_1915656.f_3[iParam0 /*447*/].f_32 = volParam1;
	return;
}

BOOL func_54(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x11B5 Hash - 0x156C7489 ^0x156C7489
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return 1;

	if (!func_69(iParam0))
		return 1;

	if (func_95(iParam0, 16))
		return 1;

	func_96(iParam0) && !func_97(iParam0);

	if (func_98(iParam0, &num, &num2, false, false))
	{
		if (func_99(iParam1))
			num = iParam1;
	
		if (func_99(iParam2))
			num2 = iParam2;
	
		if (Global_1896644 < num || Global_1896644 > num2)
			Global_1896644 = num;
	
		while (true)
		{
			if (!func_96(iParam0) || func_97(iParam0) || func_100(Global_1896644))
				func_101(Global_1896644, false);
		
			Global_1896644 = Global_1896644 + 1;
			num3 = num3 + 1;
		
			if (Global_1896644 > num2)
			{
				Global_1896644 = -1;
				return 1;
			}
		
			if (num3 >= 10 && !bParam3)
				return 0;
		}
	}

	return 1;
}

BOOL func_55(int iParam0) // Position - 0x12AD Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1940199 && iParam0 != false;
}

BOOL func_56(int iParam0) // Position - 0x12BE Hash - 0x9C8B9DFE ^0x5874CE32
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1900595;
}

struct<2> func_57(int iParam0) // Position - 0x12D2 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_58(var uParam0, var uParam1) // Position - 0x12E6 Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

void func_59(int iParam0, int iParam1, Volume volParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x12F0 Hash - 0x88918F10 ^0x88918F10
{
	int num;
	var unk;
	var unk4;

	if (iParam0 == 11)
		return;

	num = func_102(iParam3, iParam0);
	unk = { func_103(num) };
	unk4 = { func_104(num) };

	if (_IS_NULL_VECTOR(unk))
		return;

	if (!func_106(16, 16384))
		if (!func_99(iParam1))
			return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam2))
		return;

	VOLUME::_0x748C5F51A18CB8F0(false);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_107(iParam0);
	Global_1915656.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_10 = { unk };

	if (_IS_NULL_VECTOR(unk4))
		Global_1915656.f_3[iParam0 /*447*/].f_10 = { unk };
	else
		Global_1915656.f_18260[num /*11*/].f_2 = { unk4 };

	Global_1915656.f_3[iParam0 /*447*/].f_9 = num;
	Global_1915656.f_3[iParam0 /*447*/].f_25 = volParam2;
	Global_1915656.f_3[iParam0 /*447*/].f_26 = iParam4;
	Global_1915656.f_3[iParam0 /*447*/].f_28 = iParam5;
	Global_1915656.f_3[iParam0 /*447*/].f_29 = iParam9;
	Global_1915656.f_3[iParam0 /*447*/].f_8 = iParam3;
	Global_1915656.f_3[iParam0 /*447*/].f_410 = iParam8;
	Global_1960050.f_129[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1960050.f_250[iParam0] = 0f;
	Global_1960050.f_648[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[iParam0 /*8*/], "", 64);

	if (iParam7 <= 0f)
		iParam7 = func_108(iParam0);

	Global_1915656.f_3[iParam0 /*447*/].f_18 = iParam7;
	Global_1915656.f_3[iParam0 /*447*/].f_7 = iParam6;
	!func_109(iParam0, iParam1);

	switch (iParam0)
	{
		case 1:
		case 2:
			func_110(iParam3);
			break;
	
		case 9:
			func_113();
			break;
	
		case 10:
			func_111(iParam3);
			break;
	
		case 15:
			func_112();
			break;
	}

	func_114(Global_1915656.f_3[iParam0 /*447*/].f_9);
	func_115(iParam0, 16);
	func_116(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

void func_60(int iParam0, int iParam1) // Position - 0x14FE Hash - 0x24AD4888 ^0xFEE79308
{
	func_117(&(Global_1915656.f_3[iParam0 /*447*/].f_5), iParam1);
	return;
}

void func_61(int iParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x1519 Hash - 0x700A6B1F ^0x3C00F5CD
{
	int num;

	num = func_118(iParam0);

	if (num < 0 || num >= 15)
		return;

	Global_1915656.f_3[iParam0 /*447*/].f_318[num /*6*/] = hParam1;
	Global_1915656.f_3[iParam0 /*447*/].f_318[num /*6*/].f_4 = iParam2;
	Global_1915656.f_3[iParam0 /*447*/].f_318[num /*6*/].f_5 = iParam3;
	Global_1915656.f_3[iParam0 /*447*/].f_318[num /*6*/].f_1 = { 0f, 0f, 0f };
	Global_1915656.f_3[iParam0 /*447*/].f_409 = Global_1915656.f_3[iParam0 /*447*/].f_409 + 1;
	return;
}

void func_62(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x15B5 Hash - 0x8385143A ^0x8385143A
{
	if (!bParam3)
		if (func_119(iParam0))
			return;

	if (bParam2)
		if (!func_120(iParam0, 4))
			func_121(iParam0, 4);
	else
		func_122(iParam0, 4);

	func_123(iParam0);
	return;
}

void func_63(int iParam0, Volume volParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x15F6 Hash - 0x11E8E9ED ^0xEE89D83
{
	if (iParam0 == 9 && !(!func_65() && func_124()))
		if (func_125(255))
			if (VOLUME::IS_POINT_IN_VOLUME(volParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
				func_126(true, true);

	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_127(iParam0, true);
	Global_1051832.f_92[iParam0 /*75*/] = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_18 = func_102(iParam2, iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_24 = volParam1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { VOLUME::GET_VOLUME_COORDS(volParam1) };
	Global_1051832.f_92[iParam0 /*75*/].f_25 = iParam3;
	Global_1051832.f_92[iParam0 /*75*/].f_27 = iParam4;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = iParam2;
	Global_1051832.f_92[iParam0 /*75*/].f_63 = func_128(Global_1051832.f_92[iParam0 /*75*/].f_18);
	Global_1051832.f_92[iParam0 /*75*/].f_72 = iParam9;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;

	if (iParam8 <= 0f)
		iParam8 = func_108(iParam0);

	Global_1051832.f_92[iParam0 /*75*/].f_10 = iParam8;
	Global_1051832.f_92[iParam0 /*75*/].f_14 = iParam5;

	if (bParam6)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24, 0, 0, 0, -1, -1, 0);
	}

	if (bParam7)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25, 0, 0, 0, -1, -1, 0);
	}

	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	func_129(iParam0, 4);
	func_130(iParam0);
	return;
}

void func_64(int iParam0, int iParam1) // Position - 0x17A5 Hash - 0x823E3440 ^0x4606FBC5
{
	func_117(&(Global_1051832.f_92[iParam0 /*75*/].f_49), iParam1);
	return;
}

BOOL func_65() // Position - 0x17BF Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_66() // Position - 0x17D3 Hash - 0x16C45944 ^0x16C45944
{
	return func_131(func_57(0));
}

void func_67(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x17E4 Hash - 0x95E39C5E ^0x11A3DB9C
{
	int num;

	num = func_132(iParam0);

	if (num < 0 || num >= 15)
		return;

	Global_1051832.f_92[iParam0 /*75*/].f_31[num] = func_133(hParam1, false, false);

	if (func_134(Global_1051832.f_92[iParam0 /*75*/].f_31[num]))
		if (!func_135(Global_1051832.f_92[iParam0 /*75*/].f_31[num]))
			func_136(Global_1051832.f_92[iParam0 /*75*/].f_31[num], false, iParam2, bParam3, true, 0, bParam4, false);

	Global_1051832.f_92[iParam0 /*75*/].f_47 = Global_1051832.f_92[iParam0 /*75*/].f_47 + 1;
	return;
}

int func_68(int iParam0, Volume volParam1, BOOL bParam2) // Position - 0x1888 Hash - 0xEDF440C1 ^0x32727141
{
	PersChar persChar;

	if (func_45() != -1)
		return 0;

	if (!func_137(iParam0, false))
		return 0;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return 0;

	persChar = func_138(iParam0);

	if (persChar == 0)
		return 0;

	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(volParam1, persChar, bParam2);
	return 1;
}

BOOL func_69(int iParam0) // Position - 0x18D6 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

void func_70() // Position - 0x18EC Hash - 0xC70365F7 ^0xC70365F7
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_139(i))
			Global_1900426[i] = -1;
	}

	return;
}

void func_71(int iParam0, int iParam1, Volume volParam2, int iParam3, var uParam4) // Position - 0x1919 Hash - 0x1F85DFAF ^0xFCDC9B67
{
	Ped ped;
	int matchingEntities;
	int num;
	ItemSet itemSet;
	int i;
	ScrHandle indexedItemInItemset;
	Ped pedFromIndexedItem;

	if (MISC::GET_FRAME_COUNT() % 10 != 0)
		return;

	if (func_45() != -1)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam2))
		return;

	if (!func_99(iParam1))
		return;

	ped = func_140(iParam1);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (*uParam4)
		{
			itemSet = ITEMSET::CREATE_ITEMSET(true);
			matchingEntities = ENTITY::GET_MATCHING_ENTITIES(volParam2, itemSet, 1, 1, 0, 0);
		
			for (i = 0; i < matchingEntities; i = i + 1)
			{
				indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
				pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(indexedItemInItemset);
			
				if (!func_141(pedFromIndexedItem))
				{
				}
				else if (func_142(pedFromIndexedItem))
				{
				}
				else if (func_143(pedFromIndexedItem))
				{
				}
				else
				{
					func_144(pedFromIndexedItem, iParam0);
					num = num + 1;
				}
			}
		
			ITEMSET::DESTROY_ITEMSET(itemSet);
		
			if (num < iParam3)
				*uParam4 = 1;
			else
				*uParam4 = 0;
		}
	}
	else
	{
		*uParam4 = 1;
	}

	return;
}

BOOL func_72(var uParam0) // Position - 0x19F7 Hash - 0xB4769808 ^0xB4769808
{
	if (func_145())
	{
		if (!*uParam0)
		{
			*uParam0 = 1;
			return true;
		}
	}
	else if (*uParam0)
	{
		*uParam0 = 0;
		return true;
	}

	return false;
}

void func_73(Hash hParam0, int iParam1) // Position - 0x1A27 Hash - 0x1879777F ^0x1879777F
{
	func_136(hParam0, true, 0, false, false, 0, false, false);
	return;
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x1A3C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_75(var uParam0, int iParam1) // Position - 0x1A4B Hash - 0x718DD1EF ^0x7E064505
{
	return uParam0->f_62 && iParam1 != false;
}

BOOL func_76() // Position - 0x1A5C Hash - 0x463DA432 ^0x857E19AF
{
	return func_74(Global_1940199, 8192);
}

BOOL func_77(var uParam0, int iParam1) // Position - 0x1A6F Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_78(int iParam0) // Position - 0x1A80 Hash - 0x97598EC0 ^0xB0C0A04B
{
	if (!func_69(iParam0))
		return false;

	return Global_1887363[iParam0 /*36*/].f_21 == 1 || Global_1887363[iParam0 /*36*/].f_21 == 2 && !func_146(iParam0);
}

BOOL func_79(int iParam0, int iParam1) // Position - 0x1AC0 Hash - 0xA98B69C6 ^0x8AB18C7C
{
	if (iParam0 < 0 || iParam0 >= 150)
		return false;

	return Global_1887363[iParam0 /*36*/].f_22 && iParam1 != false;
}

int func_80() // Position - 0x1AED Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1896646.f_41;
}

void func_81(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x1AFB Hash - 0x3CF16214 ^0xF54A25AE
{
	BOOL flag;
	const char* str;
	char* str2;
	int num;
	int num2;
	int num3;
	var unk;
	float temperatureAtCoords;
	char* str3;
	char* str4;
	var unk2;

	if (!func_147())
		return;

	str = func_148(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (bParam3)
			return;
	
		str = "DISTRICT_GRIZZLIES";
	}

	if (!func_149(iParam4))
		if (func_69(iParam0))
			iParam4 = func_150(func_9(iParam0));
		else
			iParam4 = func_150(iParam1);

	if (func_149(iParam4))
		num = func_151(iParam4);

	if (flag && bParam3)
	{
		str2 = func_153(func_152(iParam2));
	}
	else if (func_154(iParam1, 2) || func_155(iParam4, 2) && !Global_1893611.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1893611.f_9 = 1;
	}
	else if (func_69(iParam0) && func_95(iParam0, 16777216) && !Global_1893611.f_9)
	{
		str2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893611.f_9 = 1;
	}
	else if (num >= 1 && !Global_1893611.f_9)
	{
		str2 = MISC::VAR_STRING(2, "REGION_BOUNTY", num);
		Global_1893611.f_9 = 1;
	}
	else
	{
		num2 = func_157(func_156());
		num3 = func_158(func_156());
	
		if (num3 < 10)
			TEXT_LABEL_APPEND_STRING(&unk, "0", 8);
	
		TEXT_LABEL_APPEND_INT(&unk, num3, 8);
		temperatureAtCoords = MISC::_GET_TEMPERATURE_AT_COORDS(Global_34);
	
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			str4 = "AM";
		
			if (num2 >= 12)
			{
				str4 = "PM";
			
				if (num2 > 12)
					num2 = num2 - 12;
			}
			else if (num2 == 0)
			{
				num2 = 12;
			}
		
			str3 = "TIME_AND_TEMP_C";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_159(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(674, str3, num2, func_160(&unk, joaat("COLOR_PURE_WHITE")), str4, func_160(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str3 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_159(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(162, str3, num2, func_160(&unk, joaat("COLOR_PURE_WHITE")), func_160(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1893611.f_9 = 0;
	}

	Global_1939102.f_145 = func_161(str, str2, 4000, 0, 0, 0, false, true);
	return;
}

void func_82(var uParam0, int iParam1) // Position - 0x1D69 Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_83(int iParam0, BOOL bParam1) // Position - 0x1D7C Hash - 0x2CB19C60 ^0x579311F8
{
	if (Global_1572887.f_12 && func_45() == 0)
		return;

	if (!func_162(iParam0))
		return;

	if (func_95(iParam0, 32))
		return;

	func_21(iParam0, 32);
	func_163(&Global_1940199, 16384);
	func_165(func_164(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_165(func_164(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_165(func_164(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_165(func_164(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_165(func_164(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_165(func_164(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_165(func_164(joaat("discovered"), joaat("new_austin_areas")), 1);
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
	
		case 30:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WATSONS_CABIN"));
			break;
	
		case 31:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_CANEBREAK_MANOR"));
			break;
	
		case 32:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COPPERHEAD_LANDING"));
			break;
	
		case 36:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FIRWOOD_RISE"));
			break;
	
		case 38:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SIX_POINT_CABIN"));
			break;
	
		case 39:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BEECHERS_HOPE"));
			break;
	
		case 42:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ADLER_RANCH"));
			break;
	
		case 44:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CHEZ_PORTER"));
			break;
	
		case 45:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_COLTER"));
			break;
	
		case 46:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_FROZEN_EXPLORERS"));
			break;
	
		case 47:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MILLESANI_CLAIM"));
			break;
	
		case 52:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_EWING_BASIN"));
			break;
	
		case 58:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_THE_LOFT"));
			break;
	
		case 59:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VETERANS_HOMESTEAD"));
			break;
	
		case 67:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_OLD_GREENBANK_MILL"));
			break;
	
		case 68:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_BEECHERS_C"));
			break;
	
		case 69:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CARMODY_DELL"));
			break;
	
		case 70:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_CORNWALL_KEROSENE_TAR"));
			break;
	
		case 71:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_GUTHRIE_FARM"));
			break;
	
		case 73:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOWNES_RANCH"));
			break;
	
		case 76:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HORSESHOE_OVERLOOK"));
			break;
	
		case 77:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LARNED_SOD"));
			break;
	
		case 79:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LUCKYS_CABIN"));
			break;
	
		case 82:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ABERDEEN_PIG_FARM"));
			break;
	
		case 84:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_BEAVER_HOLLOW"));
			break;
	
		case 85:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BLACK_BALSAM_RISE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_01"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_02"));
			break;
	
		case 87:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BUTCHER_CREEK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_POISON_LEAK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_29"));
			break;
	
		case 88:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOVERHILL"));
			break;
	
		case 90:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_ANGRY_ISOLATIONIST"));
			break;
	
		case 91:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_MACLEANS_HOUSE"));
			break;
	
		case 92:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MOSSY_FLATS"));
			break;
	
		case 94:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WILLARDS_REST"));
			break;
	
		case 97:
			MAP::_MAP_DISCOVER_REGION(85299473);
			break;
	
		case 102:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CATFISH_JACKSONS"));
			break;
	
		case 104:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_CLEMENS_POINT"));
			break;
	
		case 105:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COMPSONS_STEAD"));
			break;
	
		case 106:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HILL_HAVEN_RANCH"));
			break;
	
		case 108:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LONNIES_SHACK"));
			break;
	
		case 110:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_PASTURE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_HOUSE"));
			break;
	
		case 112:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SLAVE_PEN"));
			break;
	
		case 113:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_AURORA_BASIN"));
			break;
	
		case 115:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COCHINAY"));
			break;
	
		case 118:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TANNERS_REACH"));
			MAP::_MAP_DISCOVER_REGION(-960425936);
			break;
	
		case 120:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_GAPTOOTH_BREACH"));
			break;
	
		case 128:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_COOTS_CHAPEL"));
			break;
	
		case 129:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LAKE_DON_JULIO_HOUSE"));
			break;
	
		case 130:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RILEYS_CHARGE"));
			break;
	
		case 131:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_RIDGEWOOD_FARM"));
			break;
	}

	if (bParam1)
		func_21(iParam0, 64);

	return;
}

void func_84(BOOL bParam0) // Position - 0x23E5 Hash - 0x8A5944E9 ^0x8A5944E9
{
	if (bParam0)
		Global_1893611 = Global_1893611 | true;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & true;

	return;
}

BOOL func_85(int iParam0) // Position - 0x240E Hash - 0x5000025C ^0x5000025C
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

void func_86() // Position - 0x2453 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

Hash func_87(int iParam0, BOOL bParam1) // Position - 0x245B Hash - 0xE1D12727 ^0xC0A2F1C4
{
	switch (iParam0)
	{
		case 0:
			return joaat("region_bay_crawdadwillies");
	
		case 1:
			return joaat("region_bay_macombs_end");
	
		case 2:
			return joaat("region_bay_merkinswaller");
	
		case 3:
			return joaat("region_bay_lagras");
	
		case 4:
			return joaat("region_bay_lakay");
	
		case 5:
			return joaat("region_bay_saint_denis");
	
		case 6:
			return joaat("region_bay_orange_plantation");
	
		case 7:
			return joaat("region_bay_serial_killer");
	
		case 8:
			return joaat("region_bay_serendipity");
	
		case 9:
			return joaat("region_bay_shadybelle");
	
		case 10:
			return joaat("region_bay_siltwaterstrand");
	
		case 11:
			return joaat("region_bgv_appleseedtimber");
	
		case 12:
			return joaat("region_bgv_beryls_dream");
	
		case 13:
			return joaat("region_bgv_blackboneforest_trapper");
	
		case 14:
			return joaat("region_bgv_dakotariver_trapper");
	
		case 15:
			return joaat("region_bgv_fortriggs");
	
		case 16:
			return joaat("region_bgv_hangingdog");
	
		case 17:
			return joaat("region_bgv_lonemulestead");
	
		case 18:
			return joaat("region_bgv_missing_husband");
	
		case 19:
			return joaat("region_bgv_monto_rest");
	
		case 20:
			return joaat("region_bgv_owanjila_dam");
	
		case 21:
			return joaat("region_bgv_paintedsky");
	
		case 22:
			return joaat("region_bgv_pronghorn");
	
		case 23:
			return joaat("region_bgv_riggs_station");
	
		case 24:
			return joaat("region_bgv_shack");
	
		case 25:
			return joaat("region_bgv_shepherds_rise");
	
		case 26:
			return joaat("region_bgv_strawberry");
	
		case 27:
			return joaat("region_bgv_valley_view");
	
		case 28:
			return joaat("region_bgv_wallace_station");
	
		case 29:
			return joaat("region_bgv_old_man_jones");
	
		case 30:
			return joaat("region_bgv_watsonscabin");
	
		case 31:
			return joaat("region_blu_canebreak_manor");
	
		case 32:
			return joaat("region_blu_copperhead");
	
		case 33:
			return joaat("region_blu_sisika");
	
		case 34:
			return joaat("region_blu_travelling_salesman");
	
		case 35:
			return joaat("region_cml_bacchusbridge");
	
		case 36:
			return joaat("region_cml_dino_lady");
	
		case 37:
			return joaat("region_cml_oldfortwallace");
	
		case 38:
			return joaat("region_cml_sixpointcabin");
	
		case 39:
			return joaat("region_grt_beechers");
	
		case 40:
			return joaat("region_grt_blackwater");
	
		case 41:
			return joaat("region_grt_quakers_cove");
	
		case 42:
			return joaat("region_grz_adlerranch");
	
		case 43:
			return joaat("region_grz_dead_rival");
	
		case 44:
			return joaat("region_grz_chezporter");
	
		case 45:
			return joaat("region_grz_colter");
	
		case 46:
			return joaat("region_grz_frozen_explorer");
	
		case 47:
			return joaat("region_grz_millesani_claim");
	
		case 48:
			return joaat("region_grz_mountain_man");
	
		case 49:
			return joaat("region_grz_mount_hagen_peak");
	
		case 50:
			return joaat("region_grz_starving_children");
	
		case 51:
			return joaat("region_grz_tempest_rim");
	
		case 52:
			return joaat("region_grz_wintermining_town");
	
		case 53:
			return joaat("region_grz_calumetravine");
	
		case 54:
			return joaat("region_gre_civil_war_bride");
	
		case 55:
			return joaat("region_grz_cohutta");
	
		case 56:
			return joaat("region_grz_cotorra_springs");
	
		case 57:
			return joaat("region_grz_gunfight");
	
		case 58:
			return joaat("region_grz_theloft");
	
		case 59:
			return joaat("region_gre_veteran");
	
		case 60:
			return joaat("region_grz_wapiti");
	
		case 61:
			return joaat("region_grz_travelling_salesman");
	
		case 62:
			return joaat("region_gua_aguasdulces");
	
		case 63:
			return joaat("region_gua_camp");
	
		case 64:
			return joaat("region_gua_cincotorres");
	
		case 65:
			return joaat("region_gua_lacapilla");
	
		case 66:
			return joaat("region_gua_manicato");
	
		case 67:
			return joaat("region_hrt_abandoned_mill");
	
		case 68:
			return joaat("region_roa_beechers_c");
	
		case 69:
			return joaat("region_hrt_carmodydell");
	
		case 70:
			return joaat("region_hrt_cornwallkerosene");
	
		case 71:
			return joaat("region_hrt_crop_farm");
	
		case 72:
			return joaat("region_hrt_cumberlandfalls");
	
		case 73:
			return joaat("region_hrt_downsranch");
	
		case 74:
			return joaat("region_hrt_emeraldranch");
	
		case 75:
			return joaat("region_hrt_grangers_hoggery");
	
		case 76:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 77:
			return joaat("region_hrt_larnedsod");
	
		case 78:
			return joaat("region_hrt_loony_cult");
	
		case 79:
			return joaat("region_hrt_luckyscabin");
	
		case 80:
			return joaat("region_hrt_swansons_station");
	
		case 81:
			return joaat("region_hrt_valentine");
	
		case 82:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 83:
			return joaat("region_roa_annesburg");
	
		case 84:
			return joaat("region_roa_beaverhollow");
	
		case 85:
			return joaat("region_roa_black_balsam_rise");
	
		case 86:
			return joaat("region_roa_brandywine_drop");
	
		case 87:
			return joaat("region_roa_butchercreek");
	
		case 88:
			return joaat("region_roa_doverhill");
	
		case 89:
			return joaat("region_roa_happy_family");
	
		case 90:
			return joaat("region_roa_isolationist");
	
		case 91:
			return joaat("region_roa_macleanshouse");
	
		case 92:
			return joaat("region_roa_mossy_flats");
	
		case 93:
			return joaat("region_roa_roanoke_valley");
	
		case 94:
			return joaat("region_roa_rockyseven");
	
		case 95:
			return joaat("region_roa_trapper");
	
		case 96:
			return joaat("region_roa_old_man_jones");
	
		case 97:
			return joaat("region_roa_vanhornmansion");
	
		case 98:
			return joaat("region_roa_vanhornpost");
	
		case 99:
			return joaat("region_scm_braithwaitemanor");
	
		case 100:
			return joaat("region_scm_bulgerglade");
	
		case 101:
			return joaat("region_scm_caligahall");
	
		case 102:
			return joaat("region_scm_catfishjacksons");
	
		case 103:
			return joaat("region_scm_clemenscove");
	
		case 104:
			return joaat("region_scm_clemenspoint");
	
		case 105:
			return joaat("region_scm_compsons_stead");
	
		case 106:
			return joaat("region_scm_dairy_farm");
	
		case 107:
			return joaat("region_scm_horse_shop");
	
		case 108:
			return joaat("region_scm_lonniesshack");
	
		case 109:
			return joaat("region_scm_love_triangle");
	
		case 110:
			return joaat("region_scm_radleys_pasture");
	
		case 111:
			return joaat("region_scm_rhodes");
	
		case 112:
			return joaat("region_scm_slave_pen");
	
		case 113:
			return joaat("region_tal_aurora_basin");
	
		case 114:
			return joaat("region_tal_dead_settler");
	
		case 115:
			return joaat("region_tal_cochinay");
	
		case 116:
			return joaat("region_tal_manzanitapost");
	
		case 117:
			return joaat("region_tal_pacificunionrr");
	
		case 118:
			return joaat("region_tal_tannersreach");
	
		case 119:
			return joaat("region_tal_trapper");
	
		case 120:
			return joaat("region_gap_gaptooth_breach");
	
		case 121:
			return joaat("region_gap_tumbleweed");
	
		case 122:
			return joaat("region_gap_rathskeller_fork");
	
		case 123:
			return joaat("region_rio_benedict_point");
	
		case 124:
			return joaat("region_rio_fort_mercer");
	
		case 125:
			return joaat("region_rio_plain_view");
	
		case 126:
			return joaat("region_rio_travelling_salesman");
	
		case 127:
			return joaat("region_cho_armadillo");
	
		case 128:
			return joaat("region_cho_coots_chapel");
	
		case 129:
			return joaat("region_cho_don_julio_house");
	
		case 130:
			return joaat("region_cho_rileys_charge");
	
		case 131:
			return joaat("region_cho_ridgewood_farm");
	
		case 132:
			return joaat("region_cho_twin_rocks");
	
		case 133:
			return joaat("region_cho_travelling_salesman");
	
		case 134:
			return 1869665995;
	
		case 135:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 136:
			return joaat("region_hen_thieves_landing");
	
		case 137:
			return joaat("region_hen_travelling_salesman");
	
		case 138:
			return -1573562784;
	
		case 139:
			return joaat("region_centralunionrr");
	
		default:
		
	}

	if (bParam1)
		return joaat("Wilderness");

	return 0;
}

void func_88(int iParam0, BOOL bParam1) // Position - 0x2C20 Hash - 0x5DE9DDE5 ^0xCE0029B2
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] - Global_8130[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] - Global_1072759.f_19611[iParam0 /*11*/] && bParam1;
	return;
}

void func_89(BOOL bParam0) // Position - 0x2C73 Hash - 0x3703A155 ^0x3703A155
{
	if (bParam0)
		Global_1893611 = Global_1893611 | 2;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & 2;

	return;
}

void func_90(int iParam0) // Position - 0x2C9C Hash - 0xEADBF29 ^0x10804888
{
	if (func_45() == -1)
		if (HUD::_DOES_TEXT_BLOCK_EXIST("RHRGNAU"))
			if (HUD::TEXT_BLOCK_IS_LOADED("RHRGNAU"))
				HUD::_TEXT_BLOCK_DELETE("RHRGNAU");

	return;
}

void func_91(int iParam0) // Position - 0x2CCA Hash - 0x1BC1B95A ^0xE45E58CB
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1939959.f_5[i /*11*/].f_5 == iParam0)
			func_166(i);
	}

	return;
}

void func_92(int iParam0) // Position - 0x2CFB Hash - 0x602FEA97 ^0x32262E5A
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1915656.f_3[i /*447*/].f_8 == iParam0)
			func_107(i);
	}

	return;
}

BOOL func_93(int iParam0, BOOL bParam1) // Position - 0x2D2E Hash - 0xF908F79F ^0xFA4C6B92
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return true;

	if (!func_69(iParam0))
		return true;

	if (func_98(iParam0, &num, &num2, false, false))
	{
		if (Global_1896644.f_1 < num || Global_1896644.f_1 > num2)
			Global_1896644.f_1 = num;
	
		while (true)
		{
			if (!func_167(Global_1896644.f_1, 16))
				func_168(Global_1896644.f_1, false);
		
			Global_1896644.f_1 = Global_1896644.f_1 + 1;
			num3 = num3 + 1;
		
			if (Global_1896644.f_1 > num2)
			{
				Global_1896644.f_1 = -1;
				return true;
			}
		
			if (num3 >= 10 && !bParam1)
				return false;
		}
	}

	return true;
}

BOOL func_94(int iParam0) // Position - 0x2DE4 Hash - 0x3CF47CAC ^0x9AC30644
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (func_169(i) || func_170(i))
		{
		}
		else
		{
			switch (i)
			{
				case 30:
					func_171();
					break;
			
				case 32:
					func_172();
					break;
			
				case 34:
					break;
			
				default:
					if (Global_1051832.f_92[i /*75*/].f_2 == iParam0)
						func_127(i, false);
					break;
			}
		}
	}

	return true;
}

BOOL func_95(int iParam0, BOOL bParam1) // Position - 0x2E5E Hash - 0x34341F7C ^0xD1267D8C
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_96(int iParam0) // Position - 0x2E8F Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_69(iParam0))
		return false;

	return func_95(iParam0, 33554432);
}

BOOL func_97(int iParam0) // Position - 0x2EB0 Hash - 0xA5F6A570 ^0xA5F6A570
{
	if (!func_69(iParam0))
		return false;

	switch (iParam0)
	{
		case 33:
			return true;
	
		case 37:
			return true;
	
		case 70:
			return true;
	
		case 101:
			return true;
	}

	return false;
}

BOOL func_98(int iParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2F03 Hash - 0xCBEA69A ^0xCBEA69A
{
	BOOL flag;

	flag = func_45() != -1;

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

BOOL func_99(int iParam0) // Position - 0x35C3 Hash - 0x958B152F ^0x888D9460
{
	return iParam0 > -1 && iParam0 < 948;
}

BOOL func_100(int iParam0) // Position - 0x35DA Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

int func_101(int iParam0, BOOL bParam1) // Position - 0x361D Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_99(iParam0))
		return 0;

	if (!func_167(iParam0, 2))
		return 0;

	if (func_167(iParam0, 32) && !bParam1)
	{
		func_174(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_173(iParam0)));
	
		if (func_45() == -1)
		{
			if (func_167(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_138(iParam0));
				func_175(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_138(iParam0));
		}
	
		return 0;
	}

	if (!func_176(iParam0) && func_45() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_138(iParam0)))
	{
		func_175(iParam0, 128);
		return 1;
	}

	func_174(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_173(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_138(iParam0));

	if (func_167(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_138(iParam0));
		func_175(iParam0, 2048);
	}

	return 1;
}

int func_102(int iParam0, int iParam1) // Position - 0x3708 Hash - 0x274C8E8A ^0x274C8E8A
{
	if (iParam1 == 11)
		return 119;
	else if (iParam1 == 27)
		return 133;
	else if (iParam1 == 34)
		return 152;
	else if (iParam1 == 28)
		return 153;
	else if (iParam1 == 29)
		return 154;

	if (iParam1 == 33)
		return 20;

	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
			
				case 39:
					return 151;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
			
				case 6:
					return 170;
			
				case 22:
					return 169;
			
				case 23:
					return 171;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 45;
			
				case 1:
					return 52;
			
				case 2:
					return 51;
			
				case 3:
					return 48;
			
				case 4:
					return 46;
			
				case 6:
					return 49;
			
				case 7:
					return 53;
			
				case 8:
					return 43;
			
				case 9:
					return 50;
			
				case 10:
					return 44;
			
				case 12:
					return 42;
			
				case 15:
					return 63;
			
				case 18:
					return 60;
			
				case 25:
					return 124;
			
				case 26:
					return 125;
			
				case 30:
					return 54;
			
				case 33:
					return 20;
			
				case 36:
					return 61;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
			
				case 6:
					return 174;
			
				case 16:
					return 66;
			
				case 22:
					return 173;
			
				case 23:
					return 175;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					return 28;
			
				case 2:
					return 27;
			
				default:
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 2:
					return 74;
			
				case 3:
					return 69;
			
				case 9:
					return 71;
			
				case 10:
					return 68;
			
				case 17:
					return 70;
			
				case 25:
					return 127;
			
				case 30:
					return 75;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					return 100;
			
				case 2:
					return 101;
			
				case 3:
					return 99;
			
				default:
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
			
				default:
					break;
			}
			break;
	
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
			
				default:
					break;
			}
			break;
	
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 1:
					return 15;
			
				case 2:
					return 14;
			
				case 3:
					return 6;
			
				case 7:
					return 19;
			
				case 8:
					return 8;
			
				case 9:
					return 13;
			
				case 10:
					return 9;
			
				case 12:
					return 5;
			
				case 18:
					return 12;
			
				case 25:
					return 122;
			
				case 26:
					return 123;
			
				case 30:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
			
				default:
					break;
			}
			break;
	
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
			
				default:
					break;
			}
			break;
	
		case 74:
			switch (iParam1)
			{
				case 1:
					return 25;
			
				case 2:
					return 24;
			
				case 3:
					return 23;
			
				case 4:
					return 22;
			
				case 33:
					return 21;
			
				case 38:
					return 140;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
			
				case 6:
					return 166;
			
				case 16:
					return 64;
			
				case 22:
					return 165;
			
				case 23:
					return 167;
			
				case 38:
					return 141;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return 83;
			
				case 1:
					return 88;
			
				case 2:
					return 87;
			
				case 3:
					return 84;
			
				case 6:
					return 85;
			
				case 8:
					return 78;
			
				case 9:
					return 86;
			
				case 10:
					return 82;
			
				case 12:
					return 77;
			
				case 17:
					return 90;
			
				case 25:
					return 120;
			
				case 26:
					return 121;
			
				case 30:
					return 79;
			
				case 36:
					return 89;
			
				case 38:
					return 136;
			
				default:
					break;
			}
			break;
	
		case 83:
			switch (iParam1)
			{
				case 1:
					return 2;
			
				case 2:
					return 1;
			
				case 6:
					return 0;
			
				case 25:
					return 129;
			
				default:
					break;
			}
			break;
	
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
			
				case 6:
					return 157;
			
				case 16:
					return 67;
			
				case 22:
					return 156;
			
				case 23:
					return 158;
			
				default:
					break;
			}
			break;
	
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
			
				default:
					break;
			}
			break;
	
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 1:
					return 97;
			
				case 2:
					return 98;
			
				case 4:
					return 93;
			
				case 9:
					return 96;
			
				case 26:
					return 128;
			
				case 33:
					return 92;
			
				default:
					break;
			}
			break;
	
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
			
				default:
					break;
			}
			break;
	
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
			
				case 6:
					return 161;
			
				case 16:
					return 65;
			
				case 22:
					return 160;
			
				case 23:
					return 162;
			
				default:
					break;
			}
			break;
	
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 1:
					return 39;
			
				case 2:
					return 35;
			
				case 3:
					return 33;
			
				case 4:
					return 31;
			
				case 6:
					return 34;
			
				case 10:
					return 30;
			
				case 12:
					return 29;
			
				case 25:
					return 126;
			
				case 30:
					return 36;
			
				case 33:
					return 32;
			
				default:
					break;
			}
			break;
	
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 3:
					return 102;
			
				case 6:
					return 103;
			
				case 9:
					return 107;
			
				case 10:
					return 104;
			
				case 30:
					return 105;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 1:
					return 118;
			
				case 2:
					return 117;
			
				default:
					break;
			}
			break;
	
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 1:
					return 112;
			
				case 2:
					return 111;
			
				case 3:
					return 108;
			
				case 35:
					return 109;
			
				default:
					break;
			}
			break;
	
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
			
				default:
					break;
			}
			break;
	
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
			
				default:
					break;
			}
			break;
	
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
			
				default:
					break;
			}
			break;
	
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
			
				default:
					break;
			}
			break;
	
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
			
				default:
					break;
			}
			break;
	
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
			
				default:
					break;
			}
			break;
	}

	if (iParam1 == 38)
		return 147;

	if (iParam1 == 33)
		return 20;

	if (iParam1 == 37)
		return 134;

	return -1;
}

Vector3 func_103(int iParam0) // Position - 0x4070 Hash - 0x19C525E7 ^0x19C525E7
{
	if (!func_177(iParam0))
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return 2947.0547f, 1320.1497f, 43.8203f;
	
		case 1:
			return 2939.0627f, 1287.116f, 43.6529f;
	
		case 2:
			return 2932.97f, 1282.56f, 43.67f;
	
		case 3:
			return -2842.2114f, 137.3398f, 183.8268f;
	
		case 4:
			return -1005.9343f, -540.8262f, 97.9502f;
	
		case 6:
			return -784.49f, -1321.95f, 42.88f;
	
		case 8:
			return -814.4116f, -1367.2427f, 43.7509f;
	
		case 9:
			return -753.42194f, -1284.2399f, 43.200493f;
	
		case 12:
			return -813.6f, -1373.8f, 44.2f;
	
		case 13:
			return -868.33563f, -1366.2074f, 44.753105f;
	
		case 14:
			return -875.03f, -1327.09f, 42.97f;
	
		case 15:
			return -875.02f, -1326.71f, 42.97f;
	
		case 19:
			return -762.0716f, -1293.5487f, 42.8355f;
	
		case 22:
			return 1417.288f, 273.5687f, 88.4881f;
	
		case 24:
			return 1521.91f, 441.15f, 89.68f;
	
		case 25:
			return 1523.63f, 442.65f, 89.68f;
	
		case 26:
			return 2161.5f, -618.5f, 43f;
	
		case 27:
			return -1092.88f, -575.69f, 81.41f;
	
		case 28:
			return -1094.35f, -577.48f, 81.41f;
	
		case 29:
			return 1294.0844f, -1303.1022f, 76.0418f;
	
		case 30:
			return 1297.4229f, -1278.4122f, 75.65752f;
	
		case 31:
			return 1319.43f, -1142.08f, 81.41f;
	
		case 33:
			return 1329.7546f, -1294.2175f, 76.0092f;
	
		case 34:
			return 1323.7344f, -1321.7745f, 77.8924f;
	
		case 35:
			return 1226.71f, -1295.08f, 75.9f;
	
		case 39:
			return 1230.34f, -1298.5785f, 75.9027f;
	
		case 40:
			return 2076.8354f, 1000.8294f, 111.4973f;
	
		case 41:
			return 1209.0531f, -193.1814f, 101.97852f;
	
		case 42:
			return 2644.1882f, -1292.5067f, 51.2496f;
	
		case 43:
			return 2657.4658f, -1180.9601f, 53.2785f;
	
		case 44:
			return 2819.495f, -1331.29f, 45.514f;
	
		case 45:
			return 2721.24f, -1231.66f, 49.37f;
	
		case 46:
			return 2859.51f, -1202.16f, 48.59f;
	
		case 48:
			return 2825.6067f, -1318.2065f, 45.7557f;
	
		case 49:
			return 2718f, -1287f, 49.6f;
	
		case 50:
			return 2508.212f, -1449.6539f, 48.415234f;
	
		case 51:
			return 2748.8113f, -1398.2766f, 45.18309f;
	
		case 52:
			return 2747.8245f, -1396.3843f, 45.18309f;
	
		case 53:
			return 2555.09f, -1166.98f, 52.68f;
	
		case 60:
			return 2734.1738f, -1119.7551f, 50.10792f;
	
		case 63:
			return 2832.0198f, -1225.5627f, 46.6422f;
	
		case 64:
			return -142.072f, -23.5242f, 95.0883f;
	
		case 65:
			return 675.3091f, -1251.2332f, 43.0152f;
	
		case 66:
			return 1875.2003f, -1859.1821f, 41.8f;
	
		case 67:
			return 2366.0842f, 1347.1224f, 105.1305f;
	
		case 68:
			return -1753.404f, -392.557f, 155.2576f;
	
		case 69:
			return -1790f, -388.27f, 159.33f;
	
		case 70:
			return -1818.99f, -370.94f, 162.3f;
	
		case 71:
			return -1819.8796f, -561.8194f, 157.23232f;
	
		case 74:
			return -1763.7804f, -385.1118f, 156.7401f;
	
		case 76:
			return -2251.0344f, -1916.9109f, 115.9488f;
	
		case 77:
			return -307.96432f, 773.6048f, 117.70312f;
	
		case 78:
			return -306.3f, 815.08f, 117.98f;
	
		case 79:
			return 0f, 0f, 0f;
	
		case 82:
			return -338.8647f, 767.4334f, 115.56277f;
	
		case 83:
			return -287.9538f, 804.0544f, 118.3859f;
	
		case 84:
			return -324f, 803.72f, 116.88f;
	
		case 85:
			return -281.82f, 778.97f, 118.5f;
	
		case 86:
			return -369.44574f, 786.69354f, 115.9904f;
	
		case 87:
			return -178.0316f, 628.06213f, 113.08961f;
	
		case 88:
			return -175.03769f, 631.79987f, 113.08961f;
	
		case 90:
			return -325.53195f, 773.6285f, 117.50383f;
	
		case 93:
			return 3025.7864f, 562.7253f, 43.7167f;
	
		case 96:
			return 2967.2727f, 796.7416f, 52.5948f;
	
		case 97:
			return 2986.94f, 574.9f, 43.64f;
	
		case 98:
			return 2986.2236f, 569.94684f, 43.62284f;
	
		case 99:
			return -1302.9513f, 394.6608f, 94.3817f;
	
		case 100:
			return -1299.8906f, 401.36154f, 94.38248f;
	
		case 101:
			return -1300.8296f, 399.75986f, 94.38248f;
	
		case 102:
			return -5487.1973f, -2939.0383f, -1.3872f;
	
		case 103:
			return -5507.9927f, -2964.8442f, -1.6215f;
	
		case 104:
			return -5509.0186f, -2947.4353f, -2.8934f;
	
		case 105:
			return -5518.0713f, -2906.2173f, -2.7513f;
	
		case 107:
			return -5520.701f, -3044.4265f, -1.40419f;
	
		case 108:
			return -3687.3f, -2623.39f, -14.44f;
	
		case 117:
			return -5227.3574f, -3470.0674f, -20.49293f;
	
		case 118:
			return -5228.75f, -3468.28f, -21.57f;
	
		case 130:
			return -1402f, -2317f, 43.6f;
	
		case 148:
			return -4730.243f, -2939.0884f, -20.1029f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Vector3 func_104(int iParam0) // Position - 0x47EF Hash - 0xEF0BBC89 ^0xEF0BBC89
{
	if (!func_177(iParam0))
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.9272f, 46.2401f;
	
		case 1:
			return 2939f, 1287f, 0f;
	
		case 2:
			return 2931.596f, 1282.8387f, 44.6783f;
	
		case 3:
			return -2842.2114f, 137.3398f, 183.8268f;
	
		case 4:
			return -1005.9343f, -540.8262f, 97.9502f;
	
		case 6:
			return -785.1682f, -1324.1791f, 46.3505f;
	
		case 8:
			return -814.4116f, -1367.2427f, 43.7509f;
	
		case 9:
			return -753.42194f, -1285.0099f, 43.200493f;
	
		case 12:
			return -813.7f, -1374.1f, 44.2f;
	
		case 13:
			return -868.33563f, -1366.2074f, 44.753105f;
	
		case 14:
			return -875.01855f, -1328.0579f, 44.00846f;
	
		case 19:
			return -764.2743f, -1292.5758f, 44.3442f;
	
		case 22:
			return 1417.288f, 273.5687f, 88.4881f;
	
		case 24:
			return 1522.3048f, 442.8598f, 89.6785f;
	
		case 25:
			return 1525.4069f, 442.7721f, 90.6467f;
	
		case 26:
			return 2161.5f, -618.5f, 43f;
	
		case 27:
			return -1092.88f, -575.69f, 81.41f;
	
		case 28:
			return -1094.41f, -577.51f, 81.41f;
	
		case 29:
			return 1294.0844f, -1303.1022f, 76.0418f;
	
		case 30:
			return 1297.4229f, -1278.4122f, 75.65752f;
	
		case 31:
			return 1319.43f, -1142.08f, 81.41f;
	
		case 33:
			return 1327.0355f, -1292.3862f, 77.2488f;
	
		case 34:
			return 1326.2683f, -1323.1292f, 78.1929f;
	
		case 35:
			return 1228.5079f, -1296.7957f, 77.6347f;
	
		case 39:
			return 1232.2062f, -1300.1968f, 77.8496f;
	
		case 40:
			return 2076.8354f, 1000.8294f, 111.4973f;
	
		case 41:
			return 1209.0531f, -193.1814f, 101.97852f;
	
		case 43:
			return 2657.4658f, -1180.9601f, 53.2785f;
	
		case 44:
			return 2819.495f, -1331.29f, 45.514f;
	
		case 45:
			return 2721.24f, -1231.66f, 49.37f;
	
		case 46:
			return 2858.2065f, -1199.8167f, 49.046f;
	
		case 48:
			return 2828.0874f, -1315.1791f, 47.4196f;
	
		case 49:
			return 2714.5862f, -1286.8928f, 50.3211f;
	
		case 50:
			return 2508.212f, -1449.6539f, 48.415234f;
	
		case 51:
			return 2747.9058f, -1397.0892f, 47.1107f;
	
		case 52:
			return 2746.5986f, -1394.2777f, 46.918f;
	
		case 53:
			return 2554.144f, -1166.0249f, 54.3474f;
	
		case 60:
			return 2734.1738f, -1119.7551f, 50.10792f;
	
		case 63:
			return 2832.0198f, -1225.5627f, 46.6422f;
	
		case 64:
			return -142.072f, -23.5242f, 95.0883f;
	
		case 65:
			return 675.3091f, -1251.2332f, 43.0152f;
	
		case 66:
			return 1875.2003f, -1859.1821f, 41.8f;
	
		case 67:
			return 2366.0842f, 1347.1224f, 105.1305f;
	
		case 68:
			return -1753.404f, -392.557f, 155.2576f;
	
		case 69:
			return -1792.4441f, -385.412f, 160.6924f;
	
		case 70:
			return -1812.3428f, -370.618f, 161.8814f;
	
		case 71:
			return -1819.8796f, -561.8194f, 157.23232f;
	
		case 74:
			return -1763.7804f, -385.1118f, 156.7401f;
	
		case 76:
			return -2251.0344f, -1916.9109f, 115.9488f;
	
		case 77:
			return -307.96432f, 773.6048f, 117.70312f;
	
		case 78:
			return -306.7f, 813.6f, 118.7f;
	
		case 82:
			return -338.8647f, 767.4334f, 115.56277f;
	
		case 83:
			return -286.9307f, 809.6714f, 120.6565f;
	
		case 84:
			return -323.5066f, 799.6924f, 118.973f;
	
		case 85:
			return -279.273f, 781.7448f, 118.7954f;
	
		case 86:
			return -369.44574f, 786.69354f, 115.9904f;
	
		case 87:
			return -176.3f, 630.1f, 115.331f;
	
		case 88:
			return -174.0662f, 633.9207f, 115.109f;
	
		case 90:
			return -326.1232f, 771.9214f, 116.436f;
	
		case 93:
			return 3023.8586f, 561.206f, 46.7352f;
	
		case 96:
			return 2967.2727f, 796.7416f, 52.5948f;
	
		case 98:
			return 2986.0034f, 567.9055f, 45.337f;
	
		case 99:
			return -1302.9513f, 394.6608f, 94.3817f;
	
		case 100:
			return -1299.6079f, 401.55032f, 94.97269f;
	
		case 101:
			return -1300.2832f, 400.4247f, 94.3817f;
	
		case 102:
			return -5488.293f, -2937.6624f, 0.6299f;
	
		case 103:
			return -5506.6914f, -2968.343f, -1.2586f;
	
		case 104:
			return -5509.0186f, -2947.4353f, -2.8934f;
	
		case 105:
			return -5518.0713f, -2906.2173f, -2.7513f;
	
		case 107:
			return -5520.701f, -3044.4265f, -1.40419f;
	
		case 108:
			return -3684.3423f, -2626.8772f, -12.5497f;
	
		case 117:
			return -5227.45f, -3468.19f, -20.49293f;
	
		case 118:
			return -5228.75f, -3468.28f, -21.57f;
	
		case 130:
			return -1402f, -2317f, 43.6f;
	
		case 148:
			return -4730.243f, -2939.0884f, -20.1029f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x4F16 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_106(int iParam0, int iParam1) // Position - 0x4F40 Hash - 0x36B8C524 ^0x73960CC8
{
	return func_178(Global_1915656.f_3[iParam0 /*447*/].f_5, iParam1);
}

void func_107(int iParam0) // Position - 0x4F5B Hash - 0x3CD01C93 ^0xBF009143
{
	int i;
	int num;

	if (func_99(Global_1915656.f_3[iParam0 /*447*/].f_21) && func_179(Global_1915656.f_3[iParam0 /*447*/].f_21))
		func_180(Global_1915656.f_3[iParam0 /*447*/].f_21, false, true, false, false);

	Global_1915656.f_3[iParam0 /*447*/].f_10 = { 0f, 0f, 0f };
	Global_1915656.f_3[iParam0 /*447*/].f_21 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	Global_1915656.f_3[iParam0 /*447*/].f_1 = 0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1915656.f_3[iParam0 /*447*/].f_35))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1915656.f_3[iParam0 /*447*/].f_35, false);

	func_181(Global_1915656.f_3[iParam0 /*447*/].f_9, false);
	func_115(iParam0, 536870912);
	num = func_118(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_182(Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/]);
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/] = 0;
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/].f_4 = 0f;
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/].f_5 = 0;
		}
	
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}

	if (Global_1915656.f_3[iParam0 /*447*/].f_441 != 0)
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1915656.f_3[iParam0 /*447*/].f_441, false);

	Global_1915656.f_3[iParam0 /*447*/].f_23 = 0;
	func_183(iParam0);
	Global_1915656.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_8 = -1;
	return;
}

int func_108(int iParam0) // Position - 0x5133 Hash - 0xFE1A3B7C ^0xFE1A3B7C
{
	switch (iParam0)
	{
		case 3:
			return 50f;
	
		case 9:
			return 25f;
	
		case 10:
			return 25f;
	
		case 15:
			return 25f;
	
		case 29:
			return 25f;
	
		case 37:
			return 30f;
	
		case 38:
			return 70f;
	
		case 39:
			return 100f;
	}

	return 12.5f;
}

BOOL func_109(int iParam0, int iParam1) // Position - 0x51D0 Hash - 0xD1285B51 ^0x6D95132A
{
	Ped ped;
	Ped ped2;
	Ped ped3;

	if (func_106(iParam0, 16384))
		return true;

	if (!func_99(iParam1))
		return false;

	ped = func_140(iParam1);
	!ENTITY::DOES_ENTITY_EXIST(ped);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1915656.f_3[iParam0 /*447*/].f_25))
	{
		ped2 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1915656.f_3[iParam0 /*447*/].f_25);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped2))
			if (ped2 != ped)
				VOLUME::_0x6D5F9E69BA1BE783(Global_1915656.f_3[iParam0 /*447*/].f_25);
	
		func_68(iParam1, Global_1915656.f_3[iParam0 /*447*/].f_25, true);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1915656.f_3[iParam0 /*447*/].f_25, 1, 1);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1915656.f_3[iParam0 /*447*/].f_28))
	{
		ped3 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1915656.f_3[iParam0 /*447*/].f_28);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped3))
			if (ped3 != ped)
				VOLUME::_0x6D5F9E69BA1BE783(Global_1915656.f_3[iParam0 /*447*/].f_28);
	
		func_68(iParam1, Global_1915656.f_3[iParam0 /*447*/].f_28, true);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1915656.f_3[iParam0 /*447*/].f_28, 0, 1);
	}

	Global_1915656.f_3[iParam0 /*447*/].f_21 = iParam1;
	Global_1915656.f_3[iParam0 /*447*/].f_23 = ped;
	return true;
}

void func_110(int iParam0) // Position - 0x5307 Hash - 0xD3C02079 ^0x16146507
{
	int randomIntInRange;
	int randomIntInRange2;

	switch (iParam0)
	{
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[2 /*8*/], "0442_U_M_M_StrFreightStationOwner_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[1 /*8*/], "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[2 /*8*/], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[1 /*8*/], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[2 /*8*/], "0507_U_M_M_VhtStationClerk_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[1 /*8*/], "0507_U_M_M_VhtStationClerk_01", 64);
			return;
	
		default:
		
	}

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, randomIntInRange);

	if (randomIntInRange2 > 80)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[2 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[1 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (randomIntInRange2 < 40)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[2 /*8*/], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[1 /*8*/], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}

	return;
}

void func_111(int iParam0) // Position - 0x5418 Hash - 0x64F957BA ^0x96EE0C2D
{
	if (iParam0 == 81)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[10 /*8*/], "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 121)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[10 /*8*/], "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
		{
			case 0:
			case 3:
				TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[10 /*8*/], "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
		
			case 1:
			case 4:
				TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[10 /*8*/], "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
		
			case 2:
			case 5:
				TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[10 /*8*/], "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}

	return;
}

void func_112() // Position - 0x54C2 Hash - 0xA574184F ^0xA832DCE8
{
	TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[15 /*8*/], "GUS", 64);
	return;
}

void func_113() // Position - 0x54DB Hash - 0x31690749 ^0x72E63D22
{
	int randomIntInRange;
	int randomIntInRange2;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, randomIntInRange);

	if (randomIntInRange2 > 80)
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[9 /*8*/], "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	else if (randomIntInRange2 < 40)
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[9 /*8*/], "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&Global_1960050.f_327[9 /*8*/], "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);

	return;
}

void func_114(int iParam0) // Position - 0x553C Hash - 0x5AF540B6 ^0x5AF540B6
{
	if (!func_177(iParam0))
		return;

	switch (iParam0)
	{
		case 3:
		case 4:
		case 22:
		case 26:
		case 31:
		case 40:
		case 44:
		case 63:
		case 68:
		case 76:
		case 82:
		case 104:
			if (!func_184(iParam0, 2))
				func_185(iParam0, 2);
			break;
	}

	return;
}

void func_115(int iParam0, int iParam1) // Position - 0x55B6 Hash - 0x6F4899EB ^0x5624A2EB
{
	if (!func_186(iParam0))
		return;

	if (func_45() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 - Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;

	return;
}

void func_116(int iParam0, int iParam1) // Position - 0x5629 Hash - 0xF30343A ^0x652CD5E3
{
	if (!func_186(iParam0))
		return;

	if (func_45() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 || iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1;

	return;
}

void func_117(int iParam0, int iParam1) // Position - 0x5681 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_118(int iParam0) // Position - 0x5692 Hash - 0x47F93C28 ^0x59A8BC1F
{
	return Global_1915656.f_3[iParam0 /*447*/].f_409;
}

BOOL func_119(int iParam0) // Position - 0x56A8 Hash - 0x68A468BE ^0x68A468BE
{
	int num;

	if (!func_177(iParam0))
		return false;

	if (iParam0 == 46 || iParam0 == 93)
		return false;

	num = func_187(iParam0);

	if (num == 10 || num == 29 || num == 4 || num == 14 || num == 15 || num == 16 || num == 27 || num == 28 || num == 35 || num == 35 || num == 38 || num == 29 || num == 39 || num == 33)
		return true;

	return false;
}

BOOL func_120(int iParam0, BOOL bParam1) // Position - 0x5778 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_177(iParam0))
		return false;

	return Global_5867.f_2074[iParam0] && bParam1 != false;
}

void func_121(int iParam0, BOOL bParam1) // Position - 0x579D Hash - 0xE131BE14 ^0xE131BE14
{
	if (!func_177(iParam0))
	{
	}
	else
	{
		Global_5867.f_2074[iParam0] = Global_5867.f_2074[iParam0] || bParam1;
	}

	return;
}

void func_122(int iParam0, BOOL bParam1) // Position - 0x57C9 Hash - 0xAFF670A ^0xAFF670A
{
	if (!func_177(iParam0))
	{
	}
	else
	{
		Global_5867.f_2074[iParam0] = Global_5867.f_2074[iParam0] - Global_5867.f_2074[iParam0] && bParam1;
	}

	return;
}

void func_123(int iParam0) // Position - 0x5800 Hash - 0x51CD2547 ^0x51CD2547
{
	if (iParam0 != -1)
		Global_1915656.f_18246 = iParam0;

	return;
}

BOOL func_124() // Position - 0x5817 Hash - 0x16C45944 ^0x16C45944
{
	return func_188(func_57(0));
}

BOOL func_125(int iParam0) // Position - 0x5828 Hash - 0x4B08C8C4 ^0x4B08C8C4
{
	return !func_189(iParam0);
}

void func_126(BOOL bParam0, BOOL bParam1) // Position - 0x5837 Hash - 0x2F17103B ^0x1C4D2C36
{
	if (func_190(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_191(0);
	}
	else
	{
		if (bParam1)
			func_192(0, false, 0, true);
	
		func_193(0);
		func_194(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_195(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_196(Global_1102813.f_3839, 36);
	func_197(Global_1102813.f_3878, 36);
	return;
}

void func_127(int iParam0, BOOL bParam1) // Position - 0x5982 Hash - 0x3F1AD274 ^0x4EDF9754
{
	BOOL flag;
	Entity propForScenarioPoint;
	int i;
	int num;

	flag = func_198(iParam0) && !bParam1;

	if (!flag && !func_199(iParam0, 65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21, true, true);
		
			ENTITY::DELETE_ENTITY(&(Global_1051832.f_92[iParam0 /*75*/].f_21));
			Global_1051832.f_92[iParam0 /*75*/].f_21 = 0;
		}
	
		if (STREAMING::IS_MODEL_VALID(Global_1051832.f_92[iParam0 /*75*/].f_19))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1051832.f_92[iParam0 /*75*/].f_19);
	
		Global_1051832.f_92[iParam0 /*75*/].f_19 = 0;
	}
	else if (func_200(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
	
		if (func_199(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
	
		if (func_199(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
		if (func_199(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);

	if (func_200(iParam0, 16384) && !flag)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		
			if (ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&propForScenarioPoint);
		
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_201(iParam0, 16384);
	}

	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	num = func_132(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_182(Global_1051832.f_92[iParam0 /*75*/].f_31[i]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[i] = 0;
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}

	func_202(iParam0);

	if (func_199(iParam0, 262144))
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	else
		func_203(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_204(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	Global_1051832.f_92[iParam0 /*75*/].f_50 = Global_1051832.f_92[iParam0 /*75*/].f_50 & 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 & 2113536;
	func_205(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
	return;
}

int func_128(int iParam0) // Position - 0x5D31 Hash - 0xF53EDEBA ^0xF53EDEBA
{
	if (!func_177(iParam0))
		return 0;

	if (Global_1051832.f_4492[iParam0] == 0)
		Global_1051832.f_4492[iParam0] = func_206(iParam0);

	return Global_1051832.f_4492[iParam0];
}

void func_129(int iParam0, int iParam1) // Position - 0x5D72 Hash - 0xDCFC48D0 ^0xCB4861A2
{
	!func_200(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1;
	return;
}

void func_130(int iParam0) // Position - 0x5DA1 Hash - 0x93134738 ^0x938C636D
{
	Global_1051832[Global_1051832.f_41] = iParam0;
	Global_1051832.f_41 = Global_1051832.f_41 + 1;

	if (Global_1051832.f_41 >= 40)
		Global_1051832.f_41 = 40 - 1;

	return;
}

BOOL func_131(var uParam0, var uParam1) // Position - 0x5DDA Hash - 0x3EFAE063 ^0x3EFAE063
{
	return func_207(uParam0, 9, 12);
}

int func_132(int iParam0) // Position - 0x5DED Hash - 0x1B04F1B9 ^0x527C4649
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

Hash func_133(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5E01 Hash - 0xEC5804B5 ^0xE95C34A9
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_134(Hash hParam0) // Position - 0x5EA5 Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_208(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

BOOL func_135(Hash hParam0) // Position - 0x5EC0 Hash - 0x51587F69 ^0xAFC63473
{
	func_133(hParam0, false, false);

	if (func_134(hParam0))
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) == 0;

	return false;
}

void func_136(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x5EE9 Hash - 0xD777F4CF ^0xBFF3124C
{
	func_133(hParam0, false, false);

	if (func_134(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_209(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_210(hParam0, true);
			else
				func_211(hParam0, true);
		else
			func_212(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_213())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

BOOL func_137(int iParam0, BOOL bParam1) // Position - 0x5F74 Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_45() != -1)
		return false;

	if (!func_99(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_138(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_140(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_138(iParam0));
}

PersChar func_138(int iParam0) // Position - 0x5FCC Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_99(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/].f_1;
}

BOOL func_139(int iParam0) // Position - 0x5FEC Hash - 0x532FA545 ^0x532FA545
{
	return iParam0 > -1 && iParam0 < 16;
}

Ped func_140(int iParam0) // Position - 0x6002 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_138(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

BOOL func_141(Ped pedParam0) // Position - 0x6030 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_142(Ped pedParam0) // Position - 0x6062 Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_214(pedParam0);

	if (num == -1)
		return false;

	return true;
}

BOOL func_143(Ped pedParam0) // Position - 0x60A0 Hash - 0x4BD81D3A ^0x809FDABD
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0);

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "StableOwnedHorse"))
		return true;

	return false;
}

void func_144(Ped pedParam0, int iParam1) // Position - 0x60D1 Hash - 0x1BA103C9 ^0x614E70E9
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	DECORATOR::DECOR_SET_INT(pedParam0, "StableOwnedHorse", iParam1);
	return;
}

BOOL func_145() // Position - 0x60FC Hash - 0x2C6DE8F6 ^0xBF042FB1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

BOOL func_146(int iParam0) // Position - 0x6118 Hash - 0x6A6EE485 ^0x6A6EE485
{
	if (iParam0 == 22 || iParam0 == 39 && !func_215())
		return true;

	if (iParam0 == 66)
		return true;

	return false;
}

BOOL func_147() // Position - 0x614D Hash - 0xB5F1D039 ^0x59A8BE9D
{
	if (Global_13)
		return false;

	if (!func_216())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939102.f_75.f_55))
		return false;

	if (func_217(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_148(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x6190 Hash - 0xAA95C4FB ^0xB3C7DDA0
{
	const char* str;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
		str = func_218(Global_1893611.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) && bParam4)
		str = func_220(func_219(Global_34));

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (!func_221(iParam0) || func_222(44))
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
			
				case 30:
					str = "HOMESTEAD_WATSONS_CABIN";
					break;
			
				case 31:
					str = "LANDMARK_CANEBREAK_MANOR";
					break;
			
				case 32:
					str = "LANDMARK_COPPERHEAD_LANDING";
					break;
			
				case 33:
					str = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
			
				case 35:
					str = "LANDMARK_BACCHUS_BRIDGE";
					break;
			
				case 36:
					str = "HOMESTEAD_FIRWOOD_RISE";
					break;
			
				case 37:
					str = "SETTLEMENT_FORT_WALLACE";
					break;
			
				case 38:
					str = "HIDEOUT_SIX_POINT_CABIN";
					break;
			
				case 39:
					str = "SETTLEMENT_BEECHERS_HOPE";
					break;
			
				case 40:
					str = "TOWN_BLACKWATER";
					break;
			
				case 41:
					str = "LANDMARK_QUAKERS_COVE";
					break;
			
				case 42:
					str = "HOMESTEAD_ADLER_RANCH";
					break;
			
				case 43:
					str = "LANDMARK_WINDOW_ROCK";
					break;
			
				case 44:
					str = "HOMESTEAD_CHEZ_PORTER";
					break;
			
				case 45:
					str = "HIDEOUT_COLTER";
					break;
			
				case 47:
					str = "LANDMARK_MILLESANI_CLAIM";
					break;
			
				case 51:
					str = "LANDMARK_TEMPEST_RIM";
					break;
			
				case 52:
					str = "LANDMARK_EWING_BASIN";
					break;
			
				case 53:
					str = "LANDMARK_CALUMET_RAVINE";
					break;
			
				case 58:
					str = "LANDMARK_THE_LOFT";
					break;
			
				case 60:
					str = "SETTLEMENT_WAPITI";
					break;
			
				case 62:
					str = "SETTLEMENT_AGUASDULCES";
					break;
			
				case 64:
					str = "LANDMARK_CINCO_TORRES";
					break;
			
				case 65:
					str = "LANDMARK_LA_CAPILLA";
					break;
			
				case 66:
					str = "TOWN_MANICATO";
					break;
			
				case 67:
					str = "LANDMARK_OLD_GREENBANK_MILL";
					break;
			
				case 69:
					str = "HOMESTEAD_CARMODY_DELL";
					break;
			
				case 70:
					str = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
			
				case 71:
					str = "HOMESTEAD_GUTHRIE_FARM";
					break;
			
				case 72:
					str = "LANDMARK_CUMBERLAND_FALLS";
					break;
			
				case 73:
					str = "HOMESTEAD_DOWNES_RANCH";
					break;
			
				case 74:
					str = "SETTLEMENT_EMERALD_RANCH";
					break;
			
				case 75:
					str = "LANDMARK_GRANGERS_HOGGERY";
					break;
			
				case 77:
					str = "HOMESTEAD_LARNED_SOD";
					break;
			
				case 79:
					str = "LANDMARK_LUCKYS_CABIN";
					break;
			
				case 80:
					str = "LANDMARK_FLATNECK_STATION";
					break;
			
				case 81:
					str = "TOWN_VALENTINE";
					break;
			
				case 82:
					str = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
			
				case 83:
					str = "TOWN_ANNESBURG";
					break;
			
				case 84:
					str = "HIDEOUT_BEAVER_HOLLOW";
					break;
			
				case 85:
					str = "LANDMARK_BLACK_BALSAM_RISE";
					break;
			
				case 86:
					str = "LANDMARK_BRANDYWINE_DROP";
					break;
			
				case 87:
					str = "SETTLEMENT_BUTCHER_CREEK";
					break;
			
				case 88:
					str = "HOMESTEAD_DOVERHILL";
					break;
			
				case 91:
					str = "HOMESTEAD_MACLEANS_HOUSE";
					break;
			
				case 92:
					str = "LANDMARK_MOSSY_FLATS";
					break;
			
				case 93:
					str = "LANDMARK_ROANOKE_VALLEY";
					break;
			
				case 94:
					str = "HOMESTEAD_WILLARDS_REST";
					break;
			
				case 98:
					str = "TOWN_VANHORN";
					break;
			
				case 99:
					str = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
			
				case 100:
					str = "LANDMARK_BOLGER_GLADE";
					break;
			
				case 101:
					str = "SETTLEMENT_CALIGA_HALL";
					break;
			
				case 102:
					str = "HOMESTEAD_CATFISH_JACKSONS";
					break;
			
				case 104:
					str = "HIDEOUT_CLEMENS_POINT";
					break;
			
				case 105:
					str = "HOMESTEAD_COMPSONS_STEAD";
					break;
			
				case 106:
					str = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
			
				case 108:
					str = "HOMESTEAD_LONNIES_SHACK";
					break;
			
				case 110:
					str = "LANDMARK_RADLEYS_PASTURE";
					break;
			
				case 111:
					str = "TOWN_RHODES";
					break;
			
				case 114:
					str = "LANDMARK_BEAR_CLAW";
					break;
			
				case 116:
					str = "SETTLEMENT_MANZANITA_POST";
					break;
			
				case 117:
					str = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
			
				case 118:
					str = "LANDMARK_TANNERS_REACH";
					break;
			
				case 120:
					str = "HIDEOUT_GAPTOOTH_BREACH";
					break;
			
				case 121:
					str = "TOWN_TUMBLEWEED";
					break;
			
				case 122:
					str = "SETTLEMENT_RATHSKELLER_FORK";
					break;
			
				case 123:
					str = "SETTLEMENT_BENEDICT_POINT";
					break;
			
				case 124:
					str = "HIDEOUT_FORT_MERCER";
					break;
			
				case 125:
					str = "SETTLEMENT_PLAINVIEW";
					break;
			
				case 127:
					str = "TOWN_ARMADILLO";
					break;
			
				case 128:
					str = "SETTLEMENT_COOTS_CHAPEL";
					break;
			
				case 130:
					str = "LANDMARK_RILEYS_CHARGE";
					break;
			
				case 131:
					str = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
			
				case 132:
					str = "HIDEOUT_TWIN_ROCKS";
					break;
			
				case 135:
					str = "TOWN_MACFARLANES_RANCH";
					break;
			
				case 136:
					str = "SETTLEMENT_THIEVES_LANDING";
					break;
			
				case 139:
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

BOOL func_149(int iParam0) // Position - 0x6BF6 Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_150(int iParam0) // Position - 0x6C0B Hash - 0xA08D7C4E ^0xA08D7C4E
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

int func_151(int iParam0) // Position - 0x6CC6 Hash - 0xDE3AB7BF ^0xBF88E2D7
{
	int i;
	var gamerHandle;
	int bountyData;

	if (!func_149(iParam0))
		return -1;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/];

	i = 0;
	gamerHandle = { func_223(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1072759.f_21262[i /*12*/] = bountyData;
	}

	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_152(int iParam0) // Position - 0x6D34 Hash - 0x653F925B ^0x653F925B
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

char* func_153(int iParam0) // Position - 0x6E8F Hash - 0xF3887B6C ^0x99AD2474
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

BOOL func_154(int iParam0, BOOL bParam1) // Position - 0x6EC9 Hash - 0x420CBA68 ^0x9F9619A9
{
	if (!func_10(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && bParam1 != false;

	return Global_1072759.f_21335[iParam0] && bParam1 != false;
}

BOOL func_155(int iParam0, int iParam1) // Position - 0x6F0B Hash - 0x9AD134EA ^0x3BFBD1FE
{
	if (!func_149(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

int func_156() // Position - 0x6F50 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

int func_157(int iParam0) // Position - 0x6F5C Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_158(int iParam0) // Position - 0x6F6F Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_159(float fParam0) // Position - 0x6F81 Hash - 0xC643B4E3 ^0xC643B4E3
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_160(var uParam0, int iParam1) // Position - 0x6F97 Hash - 0xB0CFF0C3 ^0x74F3CA5D
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_224(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_161(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x6FCD Hash - 0x10503CC4 ^0x6232183B
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

BOOL func_162(int iParam0) // Position - 0x7010 Hash - 0xD7EC85BD ^0xD7EC85BD
{
	if (func_221(iParam0))
		if (!func_222(44))
			return false;

	return true;
}

void func_163(int iParam0, int iParam1) // Position - 0x7030 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_164(int iParam0, int iParam1) // Position - 0x7041 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_165(var uParam0, var uParam1, int iParam2) // Position - 0x7057 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_166(int iParam0) // Position - 0x7074 Hash - 0x3E288458 ^0xC75F9664
{
	func_225(Global_1939959.f_5[iParam0 /*11*/].f_6, true);
	func_226(Global_1939959.f_5[iParam0 /*11*/].f_6, false);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1939959.f_5[iParam0 /*11*/].f_8))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1939959.f_5[iParam0 /*11*/].f_8);

	func_227(iParam0, 8192);
	func_227(iParam0, 32768);
	func_227(iParam0, 524288);
	func_227(iParam0, 1048576);
	Global_1939959.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1939959.f_5[Global_1939959 /*11*/].f_9 = 0;
	Global_1939959.f_5[iParam0 /*11*/] = false;
	Global_1939959.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1939959.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1939959.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1939959.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1939959.f_5[iParam0 /*11*/].f_7 = 0;
	return;
}

BOOL func_167(int iParam0, BOOL bParam1) // Position - 0x7154 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_45() != -1)
		return false;

	if (!func_99(iParam0))
		return false;

	return Global_9899[iParam0 /*2*/] && bParam1 != false;
}

int func_168(int iParam0, BOOL bParam1) // Position - 0x7182 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_99(iParam0))
		return 0;

	if (!func_167(iParam0, 2))
		return 0;

	if (func_173(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_138(iParam0)))
		return 1;

	if (func_167(iParam0, true) && !bParam1)
	{
		func_228(iParam0, 128);
		return 1;
	}

	func_175(iParam0, 129);
	func_229(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_138(iParam0));
	func_174(iParam0, 0);
	return 1;
}

int func_169(int iParam0) // Position - 0x7205 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_170(int iParam0) // Position - 0x722C Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_171() // Position - 0x724D Hash - 0xDE81FF54 ^0x39F3D85F
{
	int i;
	var unk;

	func_203(30);
	func_230(30);
	func_231(30);
	func_205(30);

	for (i = 0; i <= 3; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_3654[i /*19*/].f_6))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_3654[i /*19*/].f_6);
	
		Global_1051832.f_3654[i /*19*/].f_6 = unk;
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_3654[i /*19*/].f_13))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_3654[i /*19*/].f_13);
	
		Global_1051832.f_3654[i /*19*/].f_13 = unk;
	
		if (MAP::DOES_BLIP_EXIST(Global_1051832.f_3654[i /*19*/].f_17))
			MAP::REMOVE_BLIP(&(Global_1051832.f_3654[i /*19*/].f_17));
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_3654[i /*19*/].f_8))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_3654[i /*19*/].f_8))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_3654[i /*19*/].f_8, true, true);
		
			PED::DELETE_PED(&(Global_1051832.f_3654[i /*19*/].f_8));
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_3654[i /*19*/].f_15))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_3654[i /*19*/].f_15))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_3654[i /*19*/].f_15, true, true);
		
			PED::DELETE_PED(&(Global_1051832.f_3654[i /*19*/].f_15));
		}
	
		Global_1051832.f_3654[i /*19*/].f_1 = 0;
		Global_1051832.f_3654[i /*19*/].f_5 = 0;
		Global_1051832.f_3654[i /*19*/].f_8 = 0;
		Global_1051832.f_3654[i /*19*/].f_15 = 0;
		Global_1051832.f_3654[i /*19*/].f_7 = 0;
		Global_1051832.f_3654[i /*19*/].f_14 = 0;
		Global_1051832.f_3654[i /*19*/].f_9 = -1;
		Global_1051832.f_3654[i /*19*/] = -1;
	}

	return;
}

void func_172() // Position - 0x7414 Hash - 0x93D7F24D ^0x457E2679
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_1051832.f_4447[i /*8*/] = -1;
		Global_1051832.f_4447[i /*8*/].f_3 = 0;
		Global_1051832.f_4447[i /*8*/].f_4 = 0;
		Global_1051832.f_4447[i /*8*/].f_7 = 0;
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_4447[i /*8*/].f_6))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_4447[i /*8*/].f_6);
	}

	func_205(32);
	return;
}

Hash func_173(int iParam0) // Position - 0x748F Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_99(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/];
}

void func_174(int iParam0, PersChar pchParam1) // Position - 0x74AD Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_99(iParam0))
		return;

	Global_1893799[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

void func_175(int iParam0, BOOL bParam1) // Position - 0x74CE Hash - 0x452DF11A ^0x452DF11A
{
	if (func_45() != -1)
		return;

	if (!func_99(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] - Global_9899[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_176(int iParam0) // Position - 0x7507 Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_99(iParam0))
		return false;

	if (!func_167(iParam0, 2))
		return false;

	return true;
}

BOOL func_177(int iParam0) // Position - 0x752D Hash - 0x8858DE32 ^0x8858DE32
{
	return iParam0 > -1 && iParam0 < 180;
}

BOOL func_178(int iParam0, int iParam1) // Position - 0x7543 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_179(int iParam0) // Position - 0x7552 Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_99(iParam0))
		return false;

	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_180(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7577 Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_99(iParam0))
		return;

	if (!func_167(iParam0, 1))
		return;

	if (!func_167(iParam0, 2))
		return;

	if (!bParam4 && !func_179(iParam0) && func_232(iParam0))
		return;

	func_175(iParam0, 1);
	func_229(iParam0);

	if (func_233(func_173(iParam0)))
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
	
		func_175(iParam0, 16);
	}

	if (func_167(iParam0, 128) && !bParam3)
		func_168(iParam0, false);

	return;
}

void func_181(int iParam0, BOOL bParam1) // Position - 0x7663 Hash - 0x6FB1865F ^0x85C63E45
{
	if (!func_177(iParam0))
		return;

	if (bParam1)
	{
		if (!func_184(iParam0, 1024))
		{
			func_185(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_184(iParam0, 1024))
	{
		func_234(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	func_235(iParam0);
	return;
}

void func_182(Hash hParam0) // Position - 0x76B9 Hash - 0xDB9A74EC ^0x13B3F16D
{
	if (func_134(hParam0) && func_236())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

void func_183(int iParam0) // Position - 0x76D9 Hash - 0x53643336 ^0xF32C683E
{
	Global_1915656.f_3[iParam0 /*447*/].f_6 = 0;
	return;
}

BOOL func_184(int iParam0, BOOL bParam1) // Position - 0x76EF Hash - 0xC3E950D6 ^0xC3E950D6
{
	if (!func_177(iParam0))
		return false;

	return Global_1915656.f_17884[iParam0] && bParam1 != false;
}

void func_185(int iParam0, BOOL bParam1) // Position - 0x7715 Hash - 0x7639AFD6 ^0x7639AFD6
{
	if (!func_177(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] || bParam1;
	return;
}

BOOL func_186(int iParam0) // Position - 0x7743 Hash - 0xDFD519AF ^0xDFD519AF
{
	return iParam0 > -1 && iParam0 < 40;
}

int func_187(int iParam0) // Position - 0x7759 Hash - 0xA78B2E8C ^0xA78B2E8C
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

BOOL func_188(var uParam0, var uParam1) // Position - 0x7C76 Hash - 0x1268D0E3 ^0x1268D0E3
{
	return func_207(uParam0, 5, 8);
}

BOOL func_189(int iParam0) // Position - 0x7C89 Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_237(1, iParam0);
}

int func_190(int iParam0) // Position - 0x7C98 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

int func_191(int iParam0) // Position - 0x7CE3 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_238(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_192(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x7D00 Hash - 0x79169E9C ^0xA3FE4569
{
	func_239(iParam0);

	if (!func_240(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_241(128) && !func_242(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_243() == 4)
		func_191(18);

	func_244(1024);
	return;
}

int func_193(int iParam0) // Position - 0x7D62 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_245(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_194(var uParam0) // Position - 0x7D7F Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_195(float* pfParam0) // Position - 0x7D91 Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_196(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x7DA3 Hash - 0x63EE9672 ^0xDAC9325D
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

void func_197(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x7DF9 Hash - 0x6DF4F0B2 ^0x7B946ED1
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

BOOL func_198(int iParam0) // Position - 0x7E26 Hash - 0x287157F6 ^0x287157F6
{
	if (iParam0 == 28 || iParam0 == 29 || iParam0 == 38 || iParam0 == 27 || iParam0 == 15 || iParam0 == 39)
		return true;

	if (func_199(iParam0, 65536))
		return true;

	return false;
}

BOOL func_199(int iParam0, int iParam1) // Position - 0x7E83 Hash - 0xECB143B0 ^0x238A26BC
{
	return Global_1051832.f_92[iParam0 /*75*/].f_49 && iParam1 != false;
}

BOOL func_200(int iParam0, int iParam1) // Position - 0x7E9C Hash - 0xECB143B0 ^0x5DBA9B53
{
	return Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1 != false;
}

void func_201(int iParam0, int iParam1) // Position - 0x7EB5 Hash - 0x9E30ADED ^0xA0DD8460
{
	func_200(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;
	return;
}

void func_202(int iParam0) // Position - 0x7EF0 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_203(int iParam0) // Position - 0x7EF8 Hash - 0xEAA35366 ^0xF96CFACE
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
	return;
}

BOOL func_204(int iParam0, int iParam1) // Position - 0x7F0D Hash - 0x685DE635 ^0x335BF63C
{
	if (iParam0 == -1)
		return false;

	return func_178(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

void func_205(int iParam0) // Position - 0x7F34 Hash - 0xF0369B46 ^0xC17C02F0
{
	int i;
	int num;
	BOOL flag;

	if (Global_1051832.f_41 < 1)
		return;

	for (i = 0; i < Global_1051832.f_41; i = i + 1)
	{
		if (iParam0 == Global_1051832[i])
		{
			num = i;
			flag = true;
			break;
		}
	}

	if (!flag)
		return;

	Global_1051832.f_41 = Global_1051832.f_41 - 1;

	if (Global_1051832.f_41 < 0)
		Global_1051832.f_41 = 0;

	Global_1051832[num] = Global_1051832[Global_1051832.f_41];
	return;
}

int func_206(int iParam0) // Position - 0x7FB3 Hash - 0xB89C4DF3 ^0x1393EE39
{
	var unk;

	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149432.f_7) && !func_247(12, func_246(iParam0), &unk))
		return 0;

	return unk.f_2;
}

BOOL func_207(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x7FE4 Hash - 0x6C3E164F ^0x6C3E164F
{
	int num;

	if (!func_248(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_249(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_208(Hash hParam0) // Position - 0x8020 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

void func_209(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x802C Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_134(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_210(Hash hParam0, BOOL bParam1) // Position - 0x8064 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_134(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_211(Hash hParam0, BOOL bParam1) // Position - 0x8092 Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_134(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_212(Hash hParam0, BOOL bParam1) // Position - 0x80C0 Hash - 0x4844A91D ^0x50E23246
{
	if (func_134(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_213() // Position - 0x80EE Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

int func_214(Ped pedParam0) // Position - 0x80F7 Hash - 0xD44AE303 ^0xA29D7F05
{
	int i;

	if (pedParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (pedParam0 == Global_1902887[i /*43*/])
			return i;
	}

	return -1;
}

BOOL func_215() // Position - 0x813C Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_216() // Position - 0x8145 Hash - 0xC0177349 ^0xA55DEE6F
{
	var unk;
	var unk3;

	if (func_45() != 0)
		return true;

	if (func_250())
		return false;

	if (HUD::_0x7EC0D68233E391AC(6) == 1)
		return true;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_251() };

	if (func_248(unk))
		return false;

	unk3 = { func_252() };

	if (func_248(unk3))
		return false;

	return true;
}

BOOL func_217(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x81AD Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_250())
			return true;
	
		if (Global_1072759.f_3 && !Global_1572887.f_10)
			if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1900460.f_67;
		else
			return Global_1900460.f_68;
	}

	if (iParam0 == 0 && func_248(func_57(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_58(func_57(0)))
	{
		case -1:
			return false;
	
		case 2:
			return iParam0 & 1 == 0;
	
		case 3:
			return iParam0 & 16 == 0;
	
		case 4:
			return iParam0 & 32 == 0;
	
		case 5:
			return iParam0 & 2 == 0;
	
		case 7:
			return iParam0 & 1024 == 0;
	
		default:
		
	}

	return false;
}

const char* func_218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x8323 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_219(var uParam0, var uParam1, var uParam2) // Position - 0x8337 Hash - 0xD993B6FD ^0xD993B6FD
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_253(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_220(int iParam0) // Position - 0x8365 Hash - 0xE6862179 ^0xAA6B4F29
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

BOOL func_221(int iParam0) // Position - 0x8647 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}

	return false;
}

BOOL func_222(int iParam0) // Position - 0x8671 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_254(iParam0))
		return false;

	return func_255(iParam0);
}

struct<2> func_223(Player plParam0) // Position - 0x868D Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

const char* func_224(const char* sParam0, int iParam1) // Position - 0x86A1 Hash - 0x9E99F03 ^0xC36F8D4C
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_225(int iParam0, BOOL bParam1) // Position - 0x86BB Hash - 0x2F9EB0B9 ^0xBFB383C9
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

void func_226(int iParam0, BOOL bParam1) // Position - 0x86EF Hash - 0x342D57CF ^0x4FC9C3B8
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

void func_227(int iParam0, int iParam1) // Position - 0x8724 Hash - 0x823E3440 ^0x340E01B4
{
	func_256(&(Global_1939959.f_5[iParam0 /*11*/].f_7), iParam1);
	return;
}

void func_228(int iParam0, BOOL bParam1) // Position - 0x873E Hash - 0x61515A20 ^0x61515A20
{
	if (func_45() != -1)
		return;

	if (!func_99(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] || bParam1;
	return;
}

void func_229(int iParam0) // Position - 0x876F Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_99(iParam0))
		return;

	ped = func_140(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1893799[iParam0 /*3*/].f_2 = 0;
	return;
}

void func_230(int iParam0) // Position - 0x87B3 Hash - 0xEAA35366 ^0x5C75D9EC
{
	Global_1051832.f_92[iParam0 /*75*/].f_50 = 0;
	return;
}

void func_231(int iParam0) // Position - 0x87C8 Hash - 0xEAA35366 ^0x1439656C
{
	Global_1051832.f_92[iParam0 /*75*/].f_1 = 0;
	return;
}

BOOL func_232(int iParam0) // Position - 0x87DD Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_99(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

BOOL func_233(Hash hParam0) // Position - 0x8801 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

void func_234(int iParam0, BOOL bParam1) // Position - 0x880D Hash - 0xECD22DFB ^0xECD22DFB
{
	if (!func_177(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] - Global_1915656.f_17884[iParam0] && bParam1;
	return;
}

void func_235(int iParam0) // Position - 0x8847 Hash - 0xB29062D ^0xB29062D
{
	func_257(func_187(iParam0));
	return;
}

BOOL func_236() // Position - 0x8859 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

BOOL func_237(int iParam0, int iParam1) // Position - 0x8862 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_258(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_259())
		return func_258(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_258(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_238(int* piParam0, int iParam1, int iParam2) // Position - 0x88D6 Hash - 0x8AC008A3 ^0x375BADC3
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(piParam0->[num], offset);
	MISC::CLEAR_BIT(&piParam0->[num], offset);
	return isBitSet;
}

void func_239(int iParam0) // Position - 0x8908 Hash - 0x42868A8 ^0x3D52297C
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_240(int iParam0) // Position - 0x891A Hash - 0xA1D29AFD ^0xABA18533
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_241(BOOL bParam0) // Position - 0x892F Hash - 0xA1D29AFD ^0x8B9D4F17
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_242(int iParam0) // Position - 0x8944 Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_243() // Position - 0x8972 Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_244(BOOL bParam0) // Position - 0x89A5 Hash - 0xEBD3AD20 ^0x6E10961F
{
	if (func_260(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_245(int* piParam0, int iParam1, int iParam2) // Position - 0x89CC Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(piParam0->[num], offset);
	MISC::SET_BIT(&piParam0->[num], offset);
	return !isBitSet;
}

int func_246(int iParam0) // Position - 0x89FF Hash - 0xB8EC44B7 ^0x241D648F
{
	switch (iParam0)
	{
		case 0:
			return joaat("shop_asb_gunsmith");
	
		case 1:
			return joaat("shop_asb_post_office");
	
		case 2:
			return joaat("shop_asb_train_station");
	
		case 3:
			return 548657065;
	
		case 4:
			return 243086140;
	
		case 5:
			return joaat("shop_blk_bank");
	
		case 6:
			return joaat("shop_blk_general_store");
	
		case 7:
			return joaat("shop_blk_gunsmith");
	
		case 8:
			return joaat("shop_blk_barber");
	
		case 9:
			return joaat("shop_blk_butcher");
	
		case 10:
			return joaat("shop_blk_bartender");
	
		case 11:
			return joaat("SHOP_BLK_PIANIST");
	
		case 12:
			return joaat("shop_blk_photo_studio");
	
		case 13:
			return joaat("shop_blk_horse_shop");
	
		case 14:
			return joaat("shop_blk_post_office");
	
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
	
		case 16:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST");
	
		case 17:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND");
	
		case 18:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD");
	
		case 19:
			return joaat("shop_blk_tailor");
	
		case 20:
			return joaat("shop_moonshine_still");
	
		case 21:
			return joaat("shop_moonshine_still");
	
		case 22:
			return joaat("shop_emr_fence");
	
		case 23:
			return joaat("shop_emr_general_store");
	
		case 24:
			return joaat("shop_emr_post_office");
	
		case 25:
			return joaat("shop_emr_train_station");
	
		case 26:
			return joaat("shop_lag_bait_store");
	
		case 27:
			return joaat("shop_rgg_post_office");
	
		case 28:
			return joaat("shop_rgg_train_station");
	
		case 29:
			return joaat("shop_rho_bank");
	
		case 30:
			return joaat("shop_rho_butcher");
	
		case 31:
			return joaat("shop_rho_fence");
	
		case 32:
			return joaat("shop_moonshine_still");
	
		case 33:
			return joaat("shop_rho_general_store");
	
		case 34:
			return joaat("shop_rho_gunsmith");
	
		case 35:
			return joaat("shop_rho_post_office");
	
		case 36:
			return joaat("shop_rho_bartender");
	
		case 37:
			return joaat("SHOP_RHO_PIANIST");
	
		case 38:
			return joaat("SHOP_RHO_MUSICIAN_BANJO");
	
		case 39:
			return joaat("shop_rho_train_station");
	
		case 40:
			return -305029900;
	
		case 41:
			return joaat("shop_scm_horse_shop");
	
		case 42:
			return joaat("shop_sdn_bank");
	
		case 43:
			return joaat("shop_sdn_barber");
	
		case 44:
			return joaat("shop_sdn_butcher");
	
		case 45:
			return joaat("shop_sdn_doctor");
	
		case 46:
			return joaat("shop_sdn_fence");
	
		case 47:
			return joaat("shop_moonshine_still");
	
		case 48:
			return joaat("shop_sdn_general_store");
	
		case 49:
			return joaat("shop_sdn_gunsmith");
	
		case 50:
			return joaat("shop_sdn_horse_shop");
	
		case 51:
			return joaat("shop_sdn_post_office");
	
		case 52:
			return joaat("shop_sdn_train_station");
	
		case 53:
			return joaat("shop_sdn_tailor");
	
		case 54:
			return joaat("shop_sdn_bartender");
	
		case 55:
			return joaat("SHOP_SDN_PIANIST");
	
		case 56:
			return joaat("shop_sdn_bartender_slum");
	
		case 57:
			return joaat("SHOP_SDN_PIANIST_SLUM");
	
		case 58:
			return joaat("SHOP_SDN_MUSICIAN_GUITARIST");
	
		case 59:
			return joaat("SHOP_SDN_MUSICIAN_BANJO");
	
		case 60:
			return joaat("shop_sdn_photo_studio");
	
		case 61:
			return joaat("SHOP_SDN_THEATER_MP");
	
		case 62:
			return joaat("SHOP_SDN_THEATER_MAGIC_MP");
	
		case 63:
			return joaat("shop_sdn_trapper");
	
		case 64:
			return 878376253;
	
		case 65:
			return 1388932648;
	
		case 66:
			return -2076086367;
	
		case 67:
			return 1529797091;
	
		case 68:
			return joaat("shop_str_butcher");
	
		case 69:
			return joaat("shop_str_general_store");
	
		case 70:
			return joaat("rage_p2_3") /* collision: shop_str_welcome_center */;
	
		case 71:
			return joaat("shop_str_horse_shop");
	
		case 72:
			return joaat("SHOP_STR_MUSICIAN_BANJO");
	
		case 73:
			return joaat("SHOP_STR_MUSICIAN_GUITARIST");
	
		case 74:
			return joaat("shop_str_post_office");
	
		case 75:
			return joaat("shop_str_bartender");
	
		case 76:
			return 1008537949;
	
		case 77:
			return joaat("shop_val_bank");
	
		case 78:
			return joaat("shop_val_barber");
	
		case 79:
			return joaat("shop_val_bartender");
	
		case 80:
			return joaat("SHOP_VAL_PIANIST");
	
		case 81:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
	
		case 82:
			return joaat("shop_val_butcher");
	
		case 83:
			return joaat("shop_val_doctor");
	
		case 84:
			return joaat("shop_val_general_store");
	
		case 85:
			return joaat("shop_val_gunsmith");
	
		case 86:
			return joaat("shop_val_horse_shop");
	
		case 87:
			return joaat("shop_val_post_office");
	
		case 88:
			return joaat("shop_val_train_station");
	
		case 89:
			return joaat("SHOP_VAL_THEATER_MAGIC_MP");
	
		case 90:
			return joaat("shop_val_hotel");
	
		case 91:
			return joaat("shop_val_bartender_slum");
	
		case 92:
			return joaat("shop_moonshine_still");
	
		case 93:
			return joaat("SHOP_VAN_FENCE");
	
		case 94:
			return joaat("shop_van_bartender");
	
		case 95:
			return joaat("SHOP_VAN_PIANIST");
	
		case 96:
			return joaat("shop_van_horse_shop");
	
		case 97:
			return joaat("shop_van_train_station");
	
		case 98:
			return joaat("shop_van_post_office");
	
		case 99:
			return joaat("shop_wal_general_store");
	
		case 100:
			return joaat("shop_wal_train_station");
	
		case 101:
			return joaat("shop_wal_post_office");
	
		case 102:
			return joaat("shop_tbl_general_store");
	
		case 103:
			return joaat("shop_tbl_gunsmith");
	
		case 104:
			return joaat("shop_tbl_butcher");
	
		case 105:
			return joaat("shop_tbl_bartender");
	
		case 106:
			return joaat("SHOP_TBL_PIANIST");
	
		case 107:
			return joaat("shop_tbl_horse_shop");
	
		case 108:
			return joaat("shop_amd_general_store");
	
		case 109:
			return joaat("shop_amd_honor_mp");
	
		case 110:
			return joaat("shop_amd_bartender");
	
		case 111:
			return joaat("shop_amd_post_office");
	
		case 112:
			return joaat("shop_amd_train_station");
	
		case 113:
			return joaat("shop_roj_honor_mp");
	
		case 114:
			return joaat("shop_boj_honor_mp");
	
		case 115:
			return joaat("shop_moonshine_still");
	
		case 116:
			return joaat("shop_ryc_fence");
	
		case 117:
			return joaat("shop_ben_post_office");
	
		case 118:
			return joaat("shop_ben_train_station");
	
		case 119:
			return joaat("shop_dynamic");
	
		case 120:
			return joaat("shop_val_bountyhunting_mp_return");
	
		case 121:
			return joaat("shop_val_coach");
	
		case 122:
			return joaat("shop_blk_bountyhunting_mp_return");
	
		case 123:
			return joaat("shop_blk_coach");
	
		case 124:
			return joaat("shop_sdn_bountyhunting_mp_return");
	
		case 125:
			return joaat("shop_sdn_coach");
	
		case 126:
			return joaat("shop_rho_bountyhunting_mp_return");
	
		case 127:
			return joaat("shop_str_bountyhunting_mp_return");
	
		case 128:
			return joaat("shop_van_coach");
	
		case 129:
			return joaat("shop_asb_bountyhunting_mp_return");
	
		case 130:
			return joaat("shop_thl_fence");
	
		case 131:
			return joaat("shop_moonshine_still");
	
		case 132:
			return joaat("SHOP_BUT_MUSICIAN_BANJO");
	
		case 133:
			return joaat("shop_wilderness_supplies");
	
		case 134:
			return -765151559;
	
		case 135:
			return joaat("SHOP_RIO_TRAVELLING_SALESMAN");
	
		case 136:
			return joaat("SHOP_CHO_TRAVELLING_SALESMAN");
	
		case 137:
			return joaat("SHOP_HEN_TRAVELLING_SALESMAN");
	
		case 138:
			return joaat("SHOP_TAL_TRAVELLING_SALESMAN");
	
		case 139:
			return joaat("SHOP_BGV_TRAVELLING_SALESMAN");
	
		case 140:
			return joaat("SHOP_HRT_E_TRAVELLING_SALESMAN");
	
		case 141:
			return joaat("SHOP_HRT_W_TRAVELLING_SALESMAN");
	
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
	
		case 143:
			return joaat("SHOP_SCM_TRAVELLING_SALESMAN");
	
		case 144:
			return joaat("SHOP_BLU_TRAVELLING_SALESMAN");
	
		case 145:
			return joaat("SHOP_DER_TRAVELLING_SALESMAN");
	
		case 146:
			return joaat("SHOP_BBR_TRAVELLING_SALESMAN");
	
		case 147:
			return joaat("SHOP_CAMP_TRAVELLING_SALESMAN");
	
		case 148:
			return 1239556700;
	
		case 149:
			return 1968750441;
	
		case 150:
			return 317019665;
	
		case 151:
			return 1421441577;
	
		case 152:
			return joaat("shop_anywhere_handheld");
	
		case 153:
			return joaat("shop_camp_lockbox");
	
		case 154:
			return joaat("shop_camp_butchertable");
	
		case 155:
			return joaat("shop_bvh_doctor");
	
		case 156:
			return joaat("shop_bvh_general_store");
	
		case 157:
			return joaat("shop_bvh_gunsmith");
	
		case 158:
			return joaat("shop_bvh_horse_trainer");
	
		case 159:
			return joaat("shop_clm_doctor");
	
		case 160:
			return joaat("shop_clm_general_store");
	
		case 161:
			return joaat("shop_clm_gunsmith");
	
		case 162:
			return joaat("shop_clm_horse_trainer");
	
		case 163:
			return joaat("shop_clm_horse_fence");
	
		case 164:
			return joaat("shop_hso_doctor");
	
		case 165:
			return joaat("shop_hso_general_store");
	
		case 166:
			return joaat("shop_hso_gunsmith");
	
		case 167:
			return joaat("shop_hso_horse_trainer");
	
		case 168:
			return joaat("SHOP_LAK_DOCTOR");
	
		case 169:
			return joaat("SHOP_LAK_GENERAL_STORE");
	
		case 170:
			return joaat("SHOP_LAK_GUNSMITH");
	
		case 171:
			return joaat("SHOP_LAK_HORSE_TRAINER");
	
		case 172:
			return joaat("shop_shb_doctor");
	
		case 173:
			return joaat("shop_shb_general_store");
	
		case 174:
			return joaat("shop_shb_gunsmith");
	
		case 175:
			return joaat("shop_shb_horse_trainer");
	
		case 176:
			return joaat("shop_weapon_mod_store");
	
		case 177:
			return joaat("shop_clothing");
	
		case 178:
			return joaat("shop_camp_shaving");
	
		case 179:
			return joaat("shop_wardrobe");
	
		default:
		
	}

	return 0;
}

BOOL func_247(int iParam0, int iParam1, var uParam2) // Position - 0x93E7 Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_261(iParam0, iParam1, &unk))
		func_262(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

BOOL func_248(var uParam0, var uParam1) // Position - 0x940E Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_263(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_264(uParam0))
		return false;

	return true;
}

int func_249(int iParam0, var uParam1) // Position - 0x9442 Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_265(iParam0);

	return -1;
}

BOOL func_250() // Position - 0x945C Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_248(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

struct<2> func_251() // Position - 0x94B4 Hash - 0x46B5D72E ^0x46B5D72E
{
	return Global_1051268;
}

struct<2> func_252() // Position - 0x94C2 Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_57(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_57(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_253(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x950D Hash - 0x5431B0F9 ^0x1E2109F7
{
	var unk;
	float num;
	float num2;

	func_266(iParam3, &unk, &num, &num2);

	if (func_267(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

BOOL func_254(int iParam0) // Position - 0x953D Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_255(int iParam0) // Position - 0x9550 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_256(int iParam0, int iParam1) // Position - 0x957A Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_257(int iParam0) // Position - 0x958F Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1915656.f_18247 = iParam0;
	return;
}

BOOL func_258(int* piParam0, int iParam1, int iParam2) // Position - 0x95A0 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(piParam0->[iParam1 / 31], iParam1 % 31);
}

int func_259() // Position - 0x95D7 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

BOOL func_260(BOOL bParam0) // Position - 0x95E6 Hash - 0x695C3191 ^0x86E70E17
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

BOOL func_261(int iParam0, int iParam1, Any* panParam2) // Position - 0x95FC Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_268(iParam0);
	panParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_262(Any* panParam0, int iParam1, var uParam2) // Position - 0x9630 Hash - 0x59F43AD2 ^0xB9A366FE
{
	var unk;

	*uParam2 = iParam1;
	panParam0->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam0);
	panParam0->f_2 = -2140901307;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0))
		uParam2->f_2 = unk;

	panParam0->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), panParam0);
	panParam0->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), panParam0);
	panParam0->f_2 = 1234058424;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), panParam0);
	return;
}

BOOL func_263(int iParam0) // Position - 0x96AA Hash - 0x5000025C ^0x5000025C
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

int func_264(int iParam0) // Position - 0x96E9 Hash - 0xE34A477A ^0xE34A477A
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

int func_265(var uParam0, var uParam1) // Position - 0x977F Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_269(uParam0, &unk))
		return unk.f_1;

	return -1;
}

void func_266(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x97AB Hash - 0x7A16E50C ^0x7A16E50C
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

BOOL func_267(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0xA248 Hash - 0x3D2F8087 ^0xB0BC8DD5
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

int func_268(int iParam0) // Position - 0xA2AE Hash - 0x5FB59AC3 ^0xE293EFF
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -3:
			num = 1300413597;
			break;
	
		case -2:
			num = joaat("GOLD");
			break;
	
		case 0:
			num = joaat("Challenge");
			break;
	
		case 1:
			num = joaat("feature");
			break;
	
		case 2:
			num = joaat("MISSION_STORY");
			break;
	
		case 3:
			num = joaat("MISSION_PROCEDURAL");
			break;
	
		case 4:
			num = joaat("MISSION_FETCH");
			break;
	
		case 5:
			num = joaat("MISSION_MINIGAME");
			break;
	
		case 6:
			num = joaat("MISSION_FREE_MODE_EVENT");
			break;
	
		case 7:
			num = joaat("MISSION_UGC");
			break;
	
		case 8:
			num = joaat("MISSION_BEAT");
			break;
	
		case 9:
			num = joaat("Property");
			break;
	
		case 10:
			num = joaat("Recipe");
			break;
	
		case 11:
			num = joaat("TITLE");
			break;
	
		case 12:
			num = joaat("SHOP");
			break;
	
		case 13:
			num = joaat("GFH_GIVERS");
			break;
	
		case 14:
			num = joaat("GFH_LOCATIONS");
			break;
	
		case 15:
			num = 1332629624;
			break;
	
		case 16:
			num = 1746212499;
			break;
	
		case 17:
			num = joaat("GVO_UNLOCKS");
			break;
	
		case 18:
			num = 1151893103;
			break;
	
		case 19:
			num = -312924468;
			break;
	}

	return num;
}

BOOL func_269(int iParam0, var uParam1, Any* panParam2) // Position - 0xA423 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_248(iParam0))
		return false;

	func_270(panParam2);

	switch (iParam0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 3:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_602[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 4:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_2104[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 5:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12606[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 6:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12908[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 7:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_15910[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 8:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_16512[iParam0.f_1 /*3*/], 3);
			return true;
	
		default:
		
	}

	return false;
}

void func_270(Any* panParam0) // Position - 0xA52E Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

