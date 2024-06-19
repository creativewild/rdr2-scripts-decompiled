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
	var uLocal_23 = -1;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 1;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	Volume volLocal_29 = 0;
	Volume volLocal_30 = 0;
	Volume volLocal_31 = 0;
	Volume volLocal_32 = 0;
	Volume volLocal_33 = 0;
	Volume volLocal_34 = 0;
	Volume volLocal_35 = 0;
	var uLocal_36 = 0;
	Volume volLocal_37 = 0;
	Volume volLocal_38 = 0;
	Volume volLocal_39 = 0;
	Volume volLocal_40 = 0;
	Volume volLocal_41 = 0;
	const char* sLocal_42 = 0;
	Volume volLocal_43 = 0;
	Volume volLocal_44 = 0;
	Volume volLocal_45 = 0;
	Volume volLocal_46 = 0;
	Volume volLocal_47 = 0;
	const char* sLocal_48 = 0;
	Volume volLocal_49 = 0;
	Volume volLocal_50 = 0;
	Volume volLocal_51 = 0;
	Volume volLocal_52 = 0;
	Volume volLocal_53 = 0;
	BOOL bLocal_54 = 0;
	Object obLocal_55 = 0;
	Object obLocal_56 = 0;
	Object obLocal_57 = 0;
	Object obLocal_58 = 0;
	Object obLocal_59 = 0;
	Object obLocal_60 = 0;
	Object obLocal_61 = 0;
	Object obLocal_62 = 0;
	Object obLocal_63 = 0;
	Object obLocal_64 = 0;
	Object obLocal_65 = 0;
	BOOL bLocal_66 = 0;
	char* sLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	BOOL bLocal_73 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x8BA04348 ^0x8090EB26
{
	int num;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_67 = "PROPS_MISC@ANNESBURG_COAL";
	iLocal_68 = 20000;
	iLocal_71 = iScriptParam_0;
	iLocal_69 = iScriptParam_0.f_2;
	bLocal_73 = false;

	if (Global_1901671.f_2.f_26 > 0)
		func_1();

	func_2();
	func_3();
	iLocal_70 = MISC::GET_GAME_TIMER();
	num = 0;

	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_70)
		{
			iLocal_70 = 0;
			func_5(iLocal_71, &iLocal_69);
		
			switch (iLocal_69)
			{
				case 0:
					if (Global_1901671.f_2.f_26 > 0)
					{
						iLocal_72 = MISC::GET_GAME_TIMER() + Global_1901671.f_2.f_26;
						iLocal_69 = 1;
					}
					else
					{
						iLocal_69 = 2;
					}
					break;
			
				case 1:
					if (!func_1() || iLocal_72 < MISC::GET_GAME_TIMER())
					{
						bLocal_73 = false;
						iLocal_69 = 2;
					}
					break;
			
				case 2:
					func_6(iLocal_71);
					func_7();
					func_8();
				
					if (func_10(func_9(iLocal_71)))
						func_11(func_9(iLocal_71), 4);
				
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_71));
					Global_1896644 = -1;
					iLocal_72 = iLocal_68 + MISC::GET_GAME_TIMER();
					iLocal_69 = 3;
					break;
			
				case 3:
					if (func_13() || iLocal_72 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT(iLocal_71);
						iLocal_72 = MISC::GET_GAME_TIMER() + iLocal_68;
						iLocal_69 = 4;
					}
					break;
			
				case 4:
					if (func_15(iLocal_71) || iLocal_72 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_71);
						iLocal_72 = MISC::GET_GAME_TIMER() + iLocal_68;
						iLocal_69 = 5;
					}
					break;
			
				case 5:
					if (func_17(iLocal_71) || iLocal_72 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0(iLocal_71);
						iLocal_72 = iLocal_68 + MISC::GET_GAME_TIMER();
						iLocal_69 = 7;
					}
					break;
			
				case 7:
					if (func_10(func_9(iLocal_71)))
						if (func_19(func_9(iLocal_71), 4) && !(iLocal_72 < MISC::GET_GAME_TIMER()))
							break;
				
					if (func_20(iLocal_71) || iLocal_72 < MISC::GET_GAME_TIMER())
					{
						func_21(iLocal_71, 4);
						iLocal_72 = MISC::GET_GAME_TIMER() + iLocal_68;
						iLocal_69 = 8;
					}
					break;
			
				case 8:
					_DEBUG_PRINT_0_0(iLocal_71);
					func_23();
				
					if (!func_24(4105, false))
						func_25();
				
					func_26();
					func_27();
					func_28();
					func_29(iLocal_71);
					func_30(iLocal_71);
					func_31();
					func_32();
					iLocal_69 = 9;
					break;
			
				case 9:
					func_33(iLocal_71);
					func_34();
					iLocal_69 = 10;
					break;
			
				case 10:
					func_35(&Global_1896698);
					func_36(iLocal_71, &Global_1896698);
					iLocal_69 = 11;
					break;
			
				case 11:
					func_37(iLocal_71);
					func_21(iLocal_71, 8);
				
					if (func_38(32))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_IN(500);
					
						func_39(32);
					}
				
					iLocal_69 = 12;
					break;
			
				case 12:
					if (func_40(iLocal_71))
						iLocal_70 = MISC::GET_GAME_TIMER() + 1000;
				
					func_41(&Global_1896698, iLocal_71);
					func_42(iLocal_71);
					func_21(iLocal_71, 8);
				
					if (func_43())
						PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				
					PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_71 /*36*/].f_11);
				
					if (Global_1887363[iLocal_71 /*36*/].f_12 > 0f)
						PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_71 /*36*/].f_12);
					break;
			
				case 13:
					func_8();
					func_44(num);
					num = num + 1;
					break;
			}
		}
	
		if (Global_1887363[iLocal_71 /*36*/].f_13 == 0)
		{
		}
		else
		{
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1887363[iLocal_71 /*36*/].f_13);
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

BOOL func_1() // Position - 0x389 Hash - 0x51BBAF33 ^0x51BBAF33
{
	if (!bLocal_73)
	{
		if (Global_1051194)
		{
			bLocal_73 = true;
			return true;
		}
	
		if (func_47() && func_48())
		{
			bLocal_73 = true;
			return true;
		}
	
		return false;
	}

	if (Global_1051194)
		return true;

	if (func_48())
		return true;

	bLocal_73 = false;
	return false;
}

void func_2() // Position - 0x3DA Hash - 0x2D3C4881 ^0x5F6A96E
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

void func_3() // Position - 0x42B Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_4() // Position - 0x433 Hash - 0xC69268B8 ^0xC69268B8
{
	if (func_45() != -1)
		return !func_49(true, true);

	return true;
}

void func_5(int iParam0, var uParam1) // Position - 0x44E Hash - 0x1DD95532 ^0x798CA2F1
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

void func_6(int iParam0) // Position - 0x57E Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_7() // Position - 0x586 Hash - 0xFC5DFC3D ^0xFC5DFC3D
{
	if (!Global_1102813.f_3967)
		Global_1102813.f_3967 = 1;

	return;
}

void func_8() // Position - 0x5A4 Hash - 0x6E39B93A ^0x6E39B93A
{
	if (!Global_1072759.f_23824)
		Global_1072759.f_23824 = 1;

	return;
}

int func_9(int iParam0) // Position - 0x5BF Hash - 0x4D13899D ^0x4D13899D
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

BOOL func_10(int iParam0) // Position - 0x6BB Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

void func_11(int iParam0, BOOL bParam1) // Position - 0x6D1 Hash - 0xACB2A3A5 ^0xACB2A3A5
{
	Global_1896646[iParam0 /*2*/] = Global_1896646[iParam0 /*2*/] || bParam1;
	return;
}

Hash func_12(int iParam0) // Position - 0x6EC Hash - 0x9C8621E4 ^0xA7A3B249
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

BOOL func_13() // Position - 0x7D4 Hash - 0xB8D666CF ^0x9E209211
{
	volLocal_29 = Global_1887363[83 /*36*/].f_5;
	VOLUME::_0xB469CFD9E065EB99(volLocal_29, 20);
	func_53();
	volLocal_38 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volPostOfficeOwner Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_38, 2935.5583f, 1282.4293f, 45.478954f, 0f, 0f, -109.999985f, 12.3f, 6.147137f, 3.628f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_38, 2938.6875f, 1280.8566f, 45.15513f, 0f, 0f, 70.00001f, 4.134692f, 0.798306f, 3f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_38, 2939.422f, 1288.475f, 45.479f, 0f, 0f, -110f, 1.738f, 1.755f, 3.628f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_38, 2931.347f, 1283.163f, 45.744f, 0f, 0f, 160f, 2.301f, 3.055f, 3.645f);
	volLocal_53 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2941.031f, 1280.036f, 45.139f, 0f, 0f, -19.946f, 3.323f, 4.695f, 2.997f, "Annesburg - m_volPostOfficeProblemArea");
	volLocal_39 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volPostOfficePrompt Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_39, 2939.491f, 1288.495f, 45.104f, 0f, 0f, 70f, 1f, 1.25f, 3f);
	volLocal_40 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volPostOfficeOfflimits Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_40, 2935.5583f, 1282.4293f, 45.478954f, 0f, 0f, -109.999985f, 12.3f, 6.147137f, 3.628f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_40, 2938.6875f, 1280.8566f, 45.15513f, 0f, 0f, 70.00001f, 4.134692f, 0.798306f, 3f);
	volLocal_41 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volPostOfficePARENT Agg");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_41, volLocal_38);
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_41, volLocal_40);
	VOLUME::_0xB469CFD9E065EB99(volLocal_41, 10076);
	volLocal_30 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2930f, 1360f, 75f, 0f, 0f, 0f, 170f, 170f, 75f, "Annesburg - m_volTownRestriction");
	func_54(volLocal_30);
	volLocal_37 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volTrainStation Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 2933.266f, 1280.733f, 45.139f, 0f, 0f, -19.946f, 9.797f, 26.429f, 2.997f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_37, 2933.951f, 1282.62f, 45.139f, 0f, 0f, -19.946f, 11.758f, 4.209f, 2.997f);
	func_55();

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_56();

	return true;
}

void _DEBUG_PRINT(int iParam0) // Position - 0xA1C Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

BOOL func_15(int iParam0) // Position - 0xA28 Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	iParam0 = iParam0;
	return true;
}

void func_16(int iParam0) // Position - 0xA35 Hash - 0x39222E22 ^0xB113096B
{
	iParam0 = iParam0;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("JAMESON_4_A");
	STREAMING::REQUEST_PTFX_ASSET();
	func_57();
	return;
}

BOOL func_17(int iParam0) // Position - 0xA52 Hash - 0x7D3E2405 ^0xA032FF0E
{
	BOOL flag;

	flag = func_45() == -1;

	if (flag)
	{
		HUD::TEXT_BLOCK_REQUEST("ASBGAUD");
	
		if (!HUD::TEXT_BLOCK_IS_LOADED("ASBGAUD"))
			return false;
	
		if (!SCRIPTS::HAS_SCRIPT_LOADED("train_annesburg"))
		{
			SCRIPTS::REQUEST_SCRIPT("train_annesburg");
			return false;
		}
	}

	return true;
}

void _DEBUG_PRINT_0(int iParam0) // Position - 0xA99 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

BOOL func_19(int iParam0, BOOL bParam1) // Position - 0xAA5 Hash - 0xFB77C6C8 ^0xFB77C6C8
{
	return Global_1896646[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_20(int iParam0) // Position - 0xABA Hash - 0x6DE0FDC2 ^0x6DE0FDC2
{
	return func_58(iParam0, -1, -1, false);
}

void func_21(int iParam0, BOOL bParam1) // Position - 0xACB Hash - 0x85549BC4 ^0xED99428
{
	if (Global_1572887.f_14 == -1)
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] || bParam1;
	else
		Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] || bParam1;

	return;
}

void _DEBUG_PRINT_0_0(int iParam0) // Position - 0xB0A Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

void func_23() // Position - 0xB16 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_24(int iParam0, BOOL bParam1) // Position - 0xB1E Hash - 0xB323866B ^0xE9E411E6
{
	if (func_59(iParam0))
		return true;

	if (!bParam1)
		if (func_60(5000))
			return true;

	switch (func_62(func_61(0)))
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

void func_25() // Position - 0xBCE Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_26() // Position - 0xBD6 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_27() // Position - 0xBDE Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_28() // Position - 0xBE6 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_29(int iParam0) // Position - 0xBEE Hash - 0x78E4D13E ^0x92621F65
{
	func_63(25, volLocal_31, iParam0, 0, 0, 2, false, false, -1082130432, 0);
	func_64(25, 1);
	func_64(25, 16384);
	func_64(25, 8192);
	func_64(25, 536870912);
	func_63(6, volLocal_32, iParam0, volLocal_33, volLocal_34, 20, false, false, -1082130432, 0);
	func_65(6, false);
	func_63(2, volLocal_38, iParam0, volLocal_39, volLocal_40, 1277952, false, false, -1082130432, 0);
	func_66(2, 167427363, 0, false, false);
	func_66(2, 1781387061, 0, false, false);
	func_66(2, 1256624295, 0, false, false);
	func_66(2, -1472554838, 0, false, false);
	func_66(2, 1926602045, 0, false, false);
	func_66(2, 525319959, 0, false, false);
	func_66(2, 840950967, 0, false, false);
	func_66(2, -1174266594, 0, false, false);
	func_66(2, 674789769, 0, false, false);
	func_66(2, 760362377, 0, false, false);
	func_66(2, 454004996, 0, false, false);
	func_65(2, false);
	return;
}

void func_30(int iParam0) // Position - 0xCFC Hash - 0x2F3C72E0 ^0x6DE6A443
{
	iParam0 = iParam0;
	func_67(379, volLocal_35, true);
	func_67(378, volLocal_41, true);
	return;
}

void func_31() // Position - 0xD1E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_32() // Position - 0xD26 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_33(int iParam0) // Position - 0xD2E Hash - 0xF7C4AEFF ^0xF7C4AEFF
{
	func_68(0.8f, 0.2f, 0f, 0f);
	return;
}

void func_34() // Position - 0xD46 Hash - 0x2E7B6F22 ^0x3889AD2B
{
	if (!Global_1893611.f_186)
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1893611.f_182, Global_1893611.f_183, Global_1893611.f_184, Global_1893611.f_185);

	return;
}

void func_35(var uParam0) // Position - 0xD77 Hash - 0x28951280 ^0x95B241A
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

void func_36(int iParam0, var uParam1) // Position - 0xDBD Hash - 0x49C0DC0C ^0x49C0DC0C
{
	iParam0 = iParam0;
	func_69(uParam1, volLocal_29, 1);
	func_69(uParam1, volLocal_35, 2);
	func_69(uParam1, volLocal_41, 10);
	return;
}

void func_37(int iParam0) // Position - 0xDE5 Hash - 0x2B5556DC ^0xB669F6D0
{
	if (!func_70(iParam0))
		return;

	func_71();
	func_72(0, joaat("asb_civilians"));
	func_72(2, joaat("asb_law_deputies"));
	return;
}

BOOL func_38(int iParam0) // Position - 0xE12 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1893611 && iParam0 != false;
}

void func_39(int iParam0) // Position - 0xE23 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1893611 = Global_1893611 - Global_1893611 && iParam0;
	return;
}

BOOL func_40(int iParam0) // Position - 0xE3B Hash - 0xBFDDB457 ^0x98F150E6
{
	if (!bLocal_66)
	{
		if (func_73())
		{
			func_74();
			bLocal_66 = true;
		}
	}

	if (func_75(&bLocal_54))
	{
		if (bLocal_54)
		{
			if (func_76())
				func_77(-1413258107, false, 0, false, false, 0, false, false);
			else
				func_77(-1413258107, true, 0, false, false, 0, false, false);
		
			func_77(1321590180, true, 0, false, false, 0, false, false);
		}
	}

	func_78(volLocal_53);
	func_79(2, volLocal_37, &uLocal_36);
	return false;
}

void func_41(var uParam0, int iParam1) // Position - 0xEAF Hash - 0xD10A9199 ^0x6508B54A
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;

	if (BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_80(Global_1940199, 32768) || func_80(Global_1940199, 16777216))
		return;

	if (func_81(uParam0, 1))
		return;

	uParam0->f_63 = uParam0->f_63 + 1;

	if (uParam0->f_63 < 10)
		return;

	uParam0->f_63 = 0;
	flag = false;
	flag2 = CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT();
	flag3 = func_82();

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
							if (!func_83(&uParam0->[i /*3*/], 1) && func_84(iParam1) && !func_85(iParam1, 16))
							{
								func_87(iParam1, func_86(), -1, false, -1, false);
								func_88(&uParam0->[i /*3*/], 1);
							}
						
							func_89(iParam1, false);
						}
					
						flag = true;
					}
				}
				break;
		
			default:
				break;
		}
	}

	func_90(flag);
	return;
}

int func_42(int iParam0) // Position - 0xFEE Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	iParam0 = iParam0;
	return 1;
}

BOOL func_43() // Position - 0xFFB Hash - 0x1E5EE2B6 ^0xA7F309C
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

	if (func_91(unk))
		return true;

	return false;
}

BOOL func_44(int iParam0) // Position - 0x1031 Hash - 0x6217D08D ^0x2FD90261
{
	if (iParam0 == 0)
	{
		func_92();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_71, 2048);
	
		if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("mpac_travel"), joaat("mpac_travel_012")))
		{
			switch (iLocal_71)
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
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_93(iLocal_71, false), 1);
					break;
			}
		}
	
		if (func_10(func_86()))
			func_11(func_86(), 8);
	
		func_94(iLocal_71, 4);
		func_94(iLocal_71, 8);
		func_90(false);
	
		if (func_45() == -1)
			func_95(false);
	
		func_96(iLocal_71);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_97(iLocal_71);
		func_98(iLocal_71);
	
		if (!func_99(iLocal_71, false))
			return false;
	}
	else if (!func_100(iLocal_71))
	{
		return false;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_45() // Position - 0x1145 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

void func_46() // Position - 0x1153 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_47() // Position - 0x115F Hash - 0x9B63752F ^0x341C80A6
{
	if (Global_1572887.f_260.f_3 > 0)
		return true;

	if (Global_1572887.f_260.f_4 != 0)
		return true;

	return false;
}

BOOL func_48() // Position - 0x118A Hash - 0x5CB4FB5 ^0x16ECF26F
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_mission_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_deathmatch_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_race_controller"), -1, false, 0))
		return 1;

	return 0;
}

BOOL func_49(BOOL bParam0, BOOL bParam1) // Position - 0x11CC Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_50(int iParam0) // Position - 0x12AC Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_70(iParam0))
		return false;

	return func_101(iParam0, 8);
}

BOOL func_51(int iParam0) // Position - 0x12CA Hash - 0xC67CC87B ^0x33ED18E1
{
	return Global_1893611.f_7 && iParam0 != false;
}

void func_52(int iParam0) // Position - 0x12DD Hash - 0xDD4F2B2E ^0xED52CD7
{
	Global_1893611.f_7 = Global_1893611.f_7 - Global_1893611.f_7 && iParam0;
	return;
}

void func_53() // Position - 0x12FB Hash - 0x223B633 ^0x1F3B1BB8
{
	volLocal_32 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGunsmithShop Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, 2946.756f, 1319.464f, 45.773f, 0f, 0f, 160.007f, 7.3f, 8.558f, 3.886f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, 2951.497f, 1315.359f, 45.397f, 0f, 0f, 70.668f, 4.201f, 6.8f, 3.221f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, 2944.162f, 1323.462f, 45.344f, 0f, 0f, 159.953f, 1.313f, 2.528f, 3.276f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_32, 2942.231f, 1318.028f, 45.344f, 0f, 0f, 159.953f, 1.313f, 2.528f, 3.276f);
	volLocal_34 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGunsmithOff Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_34, 2951.393f, 1315.45f, 45.443f, 0f, 0f, 159.953f, 4.981f, 4.126f, 3.559f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_34, 2948.7234f, 1318.7555f, 45.71739f, 0f, 0f, 159.95262f, 1.816379f, 2.277752f, 3.783344f);
	volLocal_35 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGunsmithPARENT Agg");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_35, volLocal_32);
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_35, volLocal_34);
	volLocal_33 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2946.4824f, 1320.0897f, 45.71739f, 0f, 0f, 159.9526f, 1.28246f, 1.493367f, 3.783344f, "Annesburg - m_volGunsmithPrompt");
	VOLUME::_0xB469CFD9E065EB99(volLocal_32, 10074);
	return;
}

void func_54(Volume volParam0) // Position - 0x146B Hash - 0xAE5E218A ^0x11F4FAD4
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);
	return;
}

void func_55() // Position - 0x14B2 Hash - 0x5E43195F ^0x27622D53
{
	volLocal_31 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_102(83), 0f, 0f, 160.54337f, 7.539f, 7.226621f, 3.527f, "Annesberg - m_volSheriff");
	VOLUME::_0x3EFABB21E14A6BD1(volLocal_31, 5, 1);
	return;
}

void func_56() // Position - 0x14E8 Hash - 0x223B633 ^0xE56A1D64
{
	volLocal_50 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardRestrictedMines");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_50, 2778.796f, 1394.792f, 69.89557f, 0f, 0f, 162.6054f, 47.3562f, 17.704346f, 4.921822f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_50, 2731.4565f, 1387.03f, 69.47391f, 0f, 0f, 174.54268f, 51.892235f, 75.501945f, 5.399319f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_50, 2766.4487f, 1372.9336f, 69.979774f, 0f, 0f, 179.78926f, 42.35742f, 40.005924f, 7.371945f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_50, 2745.1494f, 1325.5432f, 70.53976f, 0f, 0f, -124.36706f, 68.930176f, 48.94287f, 6.861679f);
	volLocal_51 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardWarningMines");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_51, volLocal_50);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_51, 2798.5396f, 1378.2037f, 71.388336f, 0f, 0f, 114.32515f, 12.141235f, 9.256836f, 2.566116f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_51, 2786.6362f, 1340.3005f, 72.13432f, 0f, 0f, -169.25972f, 36f, 20.0387f, 5.186172f);
	volLocal_49 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardRegistrationMines Agg");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_49, volLocal_51);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_49, 2746.3638f, 1358.9447f, 70.39893f, 0f, 0f, 0f, 84.91821f, 80.12947f, 16.407549f);
	sLocal_48 = "ANNESBURG_MINES";
	LAW::_CREATE_GUARD_ZONE(sLocal_48);
	LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_48, volLocal_49);
	LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_48, volLocal_50);
	LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_48, volLocal_51);
	LAW::_SET_GUARD_ZONE_POSITION(sLocal_48, 2751.8728f, 1317.4645f, 70.3442f);
	LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_48, volLocal_49);
	volLocal_45 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardThreatFactory");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_45, 2941.7188f, 1379.8438f, 54.238693f, 0f, 0f, -20.521746f, 20f, 9.64209f, 8f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_45, 2956.9429f, 1374.1444f, 56.709114f, 0f, 0f, -20.521746f, 8f, 9.64209f, 3f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_45, 2921.6062f, 1378.9581f, 57.36378f, 0f, 0f, -19.999767f, 9.862305f, 3.548828f, 4.311089f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_45, 2929.8225f, 1391.1194f, 57.1455f, 0f, 0f, 159.46472f, 10.5f, 4f, 5f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_45, 2890.918f, 1392.6857f, 65.820465f, 0f, 0f, 159.46472f, 5f, 4f, 5f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_45, 2891.1057f, 1397.907f, 65.7927f, 0f, 0f, 159.46472f, 8f, 8f, 4f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_45, 2882.0342f, 1399.8184f, 71.600685f, 0f, 0f, -18.426157f, 11.897914f, 14.373442f, 8.176727f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_45, 2873.3818f, 1397.7549f, 69.090454f, 0f, 0f, -109.1993f, 3.7f, 2.85f, 4f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_45, 2870.7808f, 1405.204f, 69.090454f, 0f, 0f, -109.199295f, 8f, 12.75f, 5.5f);
	volLocal_44 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardRestrictedFactory");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_44, volLocal_45);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2947.9673f, 1377.5052f, 54.238693f, 0f, 0f, -20.521744f, 33.401123f, 9.64209f, 8.798882f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2921.3745f, 1386.5935f, 59.355076f, 0f, 0f, -19.972298f, 22.219666f, 10.348177f, 8.176826f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2902.9998f, 1393.4874f, 62.415215f, 0f, 22.367247f, -18.656801f, 20.500807f, 4.178955f, 4.300679f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2886.1506f, 1398.552f, 67.75819f, 0f, 0f, -17.096033f, 20.417616f, 12.633057f, 8.176727f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2931.6326f, 1376.0803f, 53.74407f, 0f, 0f, -19.99976f, 10f, 4.548828f, 8f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2927.8228f, 1391.5298f, 56.10883f, 0f, 0f, 159.46472f, 14.87891f, 4.287598f, 5.781578f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2879.0413f, 1385.7992f, 76.87366f, 0f, 0f, 74.318054f, 7.497559f, 6.367218f, 15.015292f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2877.7056f, 1411.1047f, 68.60784f, 0f, 0f, -109.19929f, 8.661057f, 9.821352f, 5.5f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2868.376f, 1406.5957f, 68.84293f, 0f, 0f, 70.84104f, 16.768965f, 14.318611f, 5.512192f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2961.8193f, 1372.3181f, 54.22138f, 0f, 0f, -20.521746f, 4f, 6f, 3f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2862.852f, 1453.4119f, 68.60784f, 0f, 0f, 60.000004f, 17f, 14.5f, 5.5f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_44, 2856.0532f, 1440.6455f, 68.60784f, 0f, 0f, 60.000004f, 11f, 12f, 5.5f);
	volLocal_46 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardWarningFactory");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_46, volLocal_44);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_46, 2885.0872f, 1390.3108f, 64.77302f, 0f, 0f, 74.318054f, 11f, 5.055176f, 3.791058f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_46, 2873.5193f, 1405.1565f, 68.60784f, 0f, 0f, -109.19927f, 24.00397f, 30.252378f, 5.5f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_46, 2960.2512f, 1380.2175f, 52.109097f, 0f, 0f, 70.33841f, 4.079863f, 5.097966f, 4.737656f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_46, 2959.7722f, 1382.5289f, 51.438454f, 180f, 58.715664f, -109.66159f, 4.079863f, 2.205975f, 4.737656f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_46, 2921.6982f, 1395.3257f, 55.718147f, 0f, 0f, 74.31805f, 7.497559f, 7.223577f, 6f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_46, 2867.994f, 1460.895f, 68.84293f, 0f, 0f, 57.87753f, 36.404762f, 16.11485f, 5.512192f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_46, 2856.0999f, 1439.6995f, 68.84293f, 0f, 0f, 60f, 12.378179f, 13.835114f, 5.512192f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_46, 2875.0032f, 1459.517f, 67.870735f, 0f, 0f, -27.09153f, 8.940713f, 19.951077f, 3.542988f);
	volLocal_43 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardRegistrationFactory Agg");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_43, volLocal_46);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_43, 2929.186f, 1382.2639f, 6.988285f, 0f, 0f, 24.122126f, 101.64399f, 161.26315f, 79.15946f);
	volLocal_47 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2860.5789f, 1374.2234f, 6.988285f, 0f, 0f, -18.32627f, 181.81837f, 201.76123f, 79.15946f, "Annesburg - m_volGuardDefensiveFactory");
	sLocal_42 = "ANNESBURG_FACTORY";
	LAW::_CREATE_GUARD_ZONE(sLocal_42);
	LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_42, volLocal_43);
	LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_42, volLocal_44);
	LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_42, volLocal_45);
	LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_42, volLocal_46);
	LAW::_SET_GUARD_ZONE_POSITION(sLocal_42, 2922.1719f, 1380.2568f, 56.7411f);
	LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_42, volLocal_47);
	return;
}

void func_57() // Position - 0x1C26 Hash - 0x2500F59F ^0x9E33B5BF
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_67);
	STREAMING::REQUEST_MODEL(joaat("p_anncoalbin01x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_annsteameng01x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_annconveyor01x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_annconveyor02x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_annconveyor03x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_annconveyor04x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_annconvmid1x_belt"), false);
	STREAMING::REQUEST_MODEL(joaat("s_ann_coalchutes01x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_annpulleys03x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_annpulleys04x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_annsifter01x"), false);
	return;
}

BOOL func_58(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1CA2 Hash - 0x156C7489 ^0x156C7489
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return 1;

	if (!func_70(iParam0))
		return 1;

	if (func_101(iParam0, 16))
		return 1;

	func_103(iParam0) && !func_104(iParam0);

	if (func_105(iParam0, &num, &num2, false, false))
	{
		if (func_106(iParam1))
			num = iParam1;
	
		if (func_106(iParam2))
			num2 = iParam2;
	
		if (Global_1896644 < num || Global_1896644 > num2)
			Global_1896644 = num;
	
		while (true)
		{
			if (!func_103(iParam0) || func_104(iParam0) || func_107(Global_1896644))
				func_108(Global_1896644, false);
		
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

BOOL func_59(int iParam0) // Position - 0x1D9A Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1940199 && iParam0 != false;
}

BOOL func_60(int iParam0) // Position - 0x1DAB Hash - 0x9C8B9DFE ^0x5874CE32
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1900595;
}

struct<2> func_61(int iParam0) // Position - 0x1DBF Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_62(var uParam0, var uParam1) // Position - 0x1DD3 Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

void func_63(int iParam0, Volume volParam1, int iParam2, Volume volParam3, Volume volParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x1DDD Hash - 0x11E8E9ED ^0xEE89D83
{
	if (iParam0 == 9 && !(!func_109() && func_110()))
		if (func_111(255))
			if (VOLUME::IS_POINT_IN_VOLUME(volParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
				func_112(true, true);

	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_113(iParam0, true);
	Global_1051832.f_92[iParam0 /*75*/] = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_18 = func_114(iParam2, iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_24 = volParam1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { VOLUME::GET_VOLUME_COORDS(volParam1) };
	Global_1051832.f_92[iParam0 /*75*/].f_25 = volParam3;
	Global_1051832.f_92[iParam0 /*75*/].f_27 = volParam4;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = iParam2;
	Global_1051832.f_92[iParam0 /*75*/].f_63 = func_115(Global_1051832.f_92[iParam0 /*75*/].f_18);
	Global_1051832.f_92[iParam0 /*75*/].f_72 = iParam9;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;

	if (iParam8 <= 0f)
		iParam8 = func_116(iParam0);

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
	func_117(iParam0, 4);
	func_118(iParam0);
	return;
}

void func_64(int iParam0, int iParam1) // Position - 0x1F8C Hash - 0x823E3440 ^0x4606FBC5
{
	func_119(&(Global_1051832.f_92[iParam0 /*75*/].f_49), iParam1);
	return;
}

int func_65(int iParam0, BOOL bParam1) // Position - 0x1FA6 Hash - 0xD0FD971 ^0x657364CB
{
	int num;
	Hash hash;
	float num2;
	var unk;

	if (func_120(iParam0, 16384) || func_120(iParam0, 32768) || _IS_NULL_VECTOR(Global_1051832.f_92[iParam0 /*75*/].f_3))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1915656.f_3[iParam0 /*447*/].f_16))
			TASK::_DELETE_SCENARIO_POINT(Global_1915656.f_3[iParam0 /*447*/].f_16);
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
		Global_1051832.f_92[iParam0 /*75*/].f_8 = 0;
		return 0;
	}

	num = func_114(func_122(), iParam0);

	if (!bParam1 && func_123(num, &hash, &num2, &unk) || bParam1 && func_124(num, &hash, &num2, &unk))
	{
		func_125(iParam0, hash, unk, num2, false);
		Global_1051832.f_92[iParam0 /*75*/].f_3 = { unk };
		Global_1051832.f_92[iParam0 /*75*/].f_8 = hash;
	}

	return Global_1051832.f_92[iParam0 /*75*/].f_6;
}

void func_66(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x20CD Hash - 0x95E39C5E ^0x11A3DB9C
{
	int num;

	num = func_126(iParam0);

	if (num < 0 || num >= 15)
		return;

	Global_1051832.f_92[iParam0 /*75*/].f_31[num] = func_127(hParam1, false, false);

	if (func_128(Global_1051832.f_92[iParam0 /*75*/].f_31[num]))
		if (!func_129(Global_1051832.f_92[iParam0 /*75*/].f_31[num]))
			func_77(Global_1051832.f_92[iParam0 /*75*/].f_31[num], false, iParam2, bParam3, true, 0, bParam4, false);

	Global_1051832.f_92[iParam0 /*75*/].f_47 = Global_1051832.f_92[iParam0 /*75*/].f_47 + 1;
	return;
}

int func_67(int iParam0, Volume volParam1, BOOL bParam2) // Position - 0x2171 Hash - 0xEDF440C1 ^0x32727141
{
	PersChar persChar;

	if (func_45() != -1)
		return 0;

	if (!func_130(iParam0, false))
		return 0;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return 0;

	persChar = func_131(iParam0);

	if (persChar == 0)
		return 0;

	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(volParam1, persChar, bParam2);
	return 1;
}

void func_68(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x21BF Hash - 0x1E885EDE ^0x3AA465F4
{
	Global_1893611.f_182 = fParam0;
	Global_1893611.f_183 = fParam1;
	Global_1893611.f_184 = fParam2;
	Global_1893611.f_185 = fParam3;
	return;
}

void func_69(var uParam0, Volume volParam1, int iParam2) // Position - 0x21E7 Hash - 0x5828D351 ^0x6F1B8F85
{
	if (uParam0->f_61 >= 20)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	if (!func_132(iParam2))
		return;

	uParam0->[uParam0->f_61 /*3*/] = volParam1;
	uParam0->[uParam0->f_61 /*3*/].f_1 = iParam2;
	uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	uParam0->f_61 = uParam0->f_61 + 1;
	return;
}

BOOL func_70(int iParam0) // Position - 0x2240 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

void func_71() // Position - 0x2256 Hash - 0xC70365F7 ^0xC70365F7
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_133(i))
			Global_1900426[i] = -1;
	}

	return;
}

void func_72(int iParam0, int iParam1) // Position - 0x2283 Hash - 0x3C8D4A90 ^0x3C8D4A90
{
	if (!func_133(iParam0))
		return;

	if (!func_134(iParam1))
		return;

	Global_1900426[iParam0] = iParam1;
	return;
}

BOOL func_73() // Position - 0x22AF Hash - 0x44CD66EB ^0x24B3DC1E
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_67))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_anncoalbin01x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_annsteameng01x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_annconveyor01x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_annconveyor02x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_annconveyor03x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_annconveyor04x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_annconvmid1x_belt")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ann_coalchutes01x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_annpulleys03x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_annpulleys04x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_annsifter01x")))
		return false;

	return true;
}

void func_74() // Position - 0x2381 Hash - 0x9C32B50C ^0xEB48A420
{
	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_55))
	{
		obLocal_55 = OBJECT::CREATE_OBJECT(joaat("p_anncoalbin01x"), 2882.77f, 1400.54f, 64.53f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_55, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_55, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_56))
	{
		obLocal_56 = OBJECT::CREATE_OBJECT(joaat("p_annsteameng01x"), 2881.89f, 1399.2f, 65.8f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_56, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_56, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_57))
	{
		obLocal_57 = OBJECT::CREATE_OBJECT(joaat("p_annconveyor01x"), 2888.39f, 1398.65f, 63.92f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_57, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_57, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_58))
	{
		obLocal_58 = OBJECT::CREATE_OBJECT(joaat("p_annconveyor02x"), 2887.73f, 1399.23f, 63.88f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_58, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_58, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_59))
	{
		obLocal_59 = OBJECT::CREATE_OBJECT(joaat("p_annconveyor03x"), 2921.67f, 1386.704f, 55.256f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_59, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_59, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_60))
	{
		obLocal_60 = OBJECT::CREATE_OBJECT(joaat("p_annconveyor04x"), 2932.304f, 1382.867f, 55.01f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_60, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_60, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_61))
	{
		obLocal_61 = OBJECT::CREATE_OBJECT(joaat("p_annconvmid1x_belt"), 2902.988f, 1393.29f, 57.85f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_61, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_61, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_62))
	{
		obLocal_62 = OBJECT::CREATE_OBJECT(joaat("s_ann_coalchutes01x"), 2941.8157f, 1378.8729f, 47.656f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_62, 0f, 0f, -20.1736f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_62, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_63))
	{
		obLocal_63 = OBJECT::CREATE_OBJECT(joaat("p_annpulleys03x"), 2921.67f, 1386.654f, 55.226f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_63, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_63, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_64))
	{
		obLocal_64 = OBJECT::CREATE_OBJECT(joaat("p_annpulleys04x"), 2932.304f, 1382.867f, 55.17f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_64, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_64, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_65))
	{
		obLocal_65 = OBJECT::CREATE_OBJECT(joaat("p_annsifter01x"), 2921.4893f, 1386.7798f, 56.556f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_65, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_65, true);
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_55))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_55, "coalbin01_full", sLocal_67, 1f, true, false, false, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_56))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_56, "steameng01_full", sLocal_67, 1f, true, false, false, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_57))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_57, "conveyor01x_full", sLocal_67, 1f, true, false, false, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_58))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_58, "conveyor02x_full", sLocal_67, 1f, true, false, false, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_59))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_59, "annconvey03_full", sLocal_67, 1f, true, false, false, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_60, "annconvey04_full", sLocal_67, 1f, true, false, false, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_61))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_61, "annconvmid1x_full", sLocal_67, 1f, true, false, false, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_62, "annChute01_full", sLocal_67, 1f, true, false, false, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_63))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_63, "anngears03_full", sLocal_67, 1f, true, false, false, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_64))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_64, "anngears04_full", sLocal_67, 1f, true, false, false, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_65))
		ENTITY::PLAY_ENTITY_ANIM(obLocal_65, "annsifter01_full", sLocal_67, 1f, true, false, false, 0, 0);

	return;
}

BOOL func_75(var uParam0) // Position - 0x2772 Hash - 0xB4769808 ^0xB4769808
{
	if (func_135())
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

BOOL func_76() // Position - 0x27A2 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

void func_77(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x27BE Hash - 0xD777F4CF ^0xBFF3124C
{
	func_127(hParam0, false, false);

	if (func_128(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_136(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_137(hParam0, true);
			else
				func_138(hParam0, true);
		else
			func_139(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_140())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

void func_78(Volume volParam0) // Position - 0x2849 Hash - 0x4A3B21D4 ^0x16569496
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	if (func_141(volParam0, Global_34))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			PED::SET_PED_RESET_FLAG(Global_33, 2, true);
			PED::SET_PED_RESET_FLAG(Global_33, 21, true);
			PED::SET_PED_RESET_FLAG(Global_33, 168, true);
		}
	}

	return;
}

void func_79(int iParam0, Volume volParam1, var uParam2) // Position - 0x2893 Hash - 0xA38B575 ^0xA38B575
{
	if (!*uParam2)
	{
		if (func_142(Global_33, volParam1, true, 0))
		{
			func_144(func_143(iParam0), 1);
			*uParam2 = 1;
		}
	}
	else if (!func_142(Global_33, volParam1, true, 0))
	{
		*uParam2 = 0;
	}

	return;
}

BOOL func_80(int iParam0, int iParam1) // Position - 0x28D5 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_81(var uParam0, int iParam1) // Position - 0x28E4 Hash - 0x718DD1EF ^0x7E064505
{
	return uParam0->f_62 && iParam1 != false;
}

BOOL func_82() // Position - 0x28F5 Hash - 0x463DA432 ^0x857E19AF
{
	return func_80(Global_1940199, 8192);
}

BOOL func_83(var uParam0, int iParam1) // Position - 0x2908 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_84(int iParam0) // Position - 0x2919 Hash - 0x97598EC0 ^0xB0C0A04B
{
	if (!func_70(iParam0))
		return false;

	return Global_1887363[iParam0 /*36*/].f_21 == 1 || Global_1887363[iParam0 /*36*/].f_21 == 2 && !func_145(iParam0);
}

BOOL func_85(int iParam0, int iParam1) // Position - 0x2959 Hash - 0xA98B69C6 ^0x8AB18C7C
{
	if (iParam0 < 0 || iParam0 >= 150)
		return false;

	return Global_1887363[iParam0 /*36*/].f_22 && iParam1 != false;
}

int func_86() // Position - 0x2986 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1896646.f_41;
}

void func_87(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x2994 Hash - 0xECDF54D9 ^0xE10FABD9
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

	if (!func_146())
		return;

	str = func_147(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (bParam3)
			return;
	
		str = "DISTRICT_GRIZZLIES";
	}

	if (!func_148(iParam4))
		if (func_70(iParam0))
			iParam4 = func_149(func_9(iParam0));
		else
			iParam4 = func_149(iParam1);

	if (func_148(iParam4))
		num = func_150(iParam4);

	if (flag && bParam3)
	{
		str2 = func_152(func_151(iParam2));
	}
	else if (func_153(iParam1, 2) || func_154(iParam4, 2) && !Global_1893611.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1893611.f_9 = 1;
	}
	else if (func_70(iParam0) && func_101(iParam0, 16777216) && !Global_1893611.f_9)
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
		num2 = func_156(func_155());
		num3 = func_157(func_155());
	
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
				temperatureAtCoords = func_158(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(674, str3, num2, func_159(&unk, joaat("COLOR_PURE_WHITE")), str4, func_159(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str3 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_158(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(162, str3, num2, func_159(&unk, joaat("COLOR_PURE_WHITE")), func_159(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1893611.f_9 = 0;
	}

	Global_1939102.f_145 = func_160(str, str2, 4000, 0, 0, 0, false, true);
	return;
}

void func_88(var uParam0, int iParam1) // Position - 0x2C05 Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_89(int iParam0, BOOL bParam1) // Position - 0x2C18 Hash - 0x2CB19C60 ^0x579311F8
{
	if (Global_1572887.f_12 && func_45() == 0)
		return;

	if (!func_161(iParam0))
		return;

	if (func_101(iParam0, 32))
		return;

	func_21(iParam0, 32);
	func_162(&Global_1940199, 16384);
	func_144(func_163(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_144(func_163(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_144(func_163(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_144(func_163(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_144(func_163(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_144(func_163(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_144(func_163(joaat("discovered"), joaat("new_austin_areas")), 1);
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

void func_90(BOOL bParam0) // Position - 0x3281 Hash - 0x8A5944E9 ^0x8A5944E9
{
	if (bParam0)
		Global_1893611 = Global_1893611 | 1;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & 1;

	return;
}

BOOL func_91(int iParam0) // Position - 0x32AA Hash - 0x5000025C ^0x5000025C
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

void func_92() // Position - 0x32EF Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

Hash func_93(int iParam0, BOOL bParam1) // Position - 0x32F7 Hash - 0xE1D12727 ^0xC0A2F1C4
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

void func_94(int iParam0, BOOL bParam1) // Position - 0x3ABC Hash - 0x5DE9DDE5 ^0xCE0029B2
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] - Global_8130[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] - Global_1072759.f_19611[iParam0 /*11*/] && bParam1;
	return;
}

void func_95(BOOL bParam0) // Position - 0x3B0F Hash - 0x3703A155 ^0x3703A155
{
	if (bParam0)
		Global_1893611 = Global_1893611 | 2;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & 2;

	return;
}

void func_96(int iParam0) // Position - 0x3B38 Hash - 0x367DD66B ^0x459B314
{
	func_68(0.775f, 0.2f, 0.025f, 0f);
	func_164(&uLocal_19, false);
	func_165();
	LAW::_REMOVE_GUARD_ZONE(sLocal_42);
	func_166(volLocal_43);
	func_166(volLocal_45);
	func_166(volLocal_44);
	func_166(volLocal_46);
	func_166(volLocal_47);
	LAW::_REMOVE_GUARD_ZONE(sLocal_48);
	func_166(volLocal_49);
	func_166(volLocal_50);
	func_166(volLocal_51);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_52))
		VOLUME::DELETE_VOLUME(volLocal_52);

	if (HUD::_DOES_TEXT_BLOCK_EXIST("ASBGAUD"))
		if (HUD::TEXT_BLOCK_IS_LOADED("ASBGAUD"))
			HUD::_TEXT_BLOCK_DELETE("ASBGAUD");

	iParam0 = iParam0;
	return;
}

void func_97(int iParam0) // Position - 0x3BCC Hash - 0x1BC1B95A ^0xE45E58CB
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1939959.f_5[i /*11*/].f_5 == iParam0)
			func_167(i);
	}

	return;
}

void func_98(int iParam0) // Position - 0x3BFD Hash - 0x602FEA97 ^0x32262E5A
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1915656.f_3[i /*447*/].f_8 == iParam0)
			func_168(i);
	}

	return;
}

BOOL func_99(int iParam0, BOOL bParam1) // Position - 0x3C30 Hash - 0xF908F79F ^0xFA4C6B92
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return true;

	if (!func_70(iParam0))
		return true;

	if (func_105(iParam0, &num, &num2, false, false))
	{
		if (Global_1896644.f_1 < num || Global_1896644.f_1 > num2)
			Global_1896644.f_1 = num;
	
		while (true)
		{
			if (!func_169(Global_1896644.f_1, 16))
				func_170(Global_1896644.f_1, false);
		
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

BOOL func_100(int iParam0) // Position - 0x3CE6 Hash - 0x3CF47CAC ^0x9AC30644
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (func_171(i) || func_172(i))
		{
		}
		else
		{
			switch (i)
			{
				case 30:
					func_173();
					break;
			
				case 32:
					func_174();
					break;
			
				case 34:
					break;
			
				default:
					if (Global_1051832.f_92[i /*75*/].f_2 == iParam0)
						func_113(i, false);
					break;
			}
		}
	}

	return true;
}

BOOL func_101(int iParam0, BOOL bParam1) // Position - 0x3D60 Hash - 0x34341F7C ^0xD1267D8C
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

Vector3 func_102(int iParam0) // Position - 0x3D91 Hash - 0x563C355B ^0x563C355B
{
	switch (iParam0)
	{
		case 5:
			return 2512.3f, -1306f, 48f;
	
		case 26:
			return -1809.3f, -349.3f, 164.6f;
	
		case 40:
			return -763f, -1269.2f, 44.5f;
	
		case 81:
			return -275.6f, 805.3f, 119.4f;
	
		case 83:
			return 2907.465f, 1311.9099f, 45.438934f;
	
		case 111:
			return 1359.2f, -1302.9f, 77.8f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_103(int iParam0) // Position - 0x3E34 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_70(iParam0))
		return false;

	return func_101(iParam0, 33554432);
}

BOOL func_104(int iParam0) // Position - 0x3E55 Hash - 0xA5F6A570 ^0xA5F6A570
{
	if (!func_70(iParam0))
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

BOOL func_105(int iParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3EA8 Hash - 0xCBEA69A ^0xCBEA69A
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

BOOL func_106(int iParam0) // Position - 0x4569 Hash - 0x958B152F ^0x888D9460
{
	return iParam0 > -1 && iParam0 < 948;
}

BOOL func_107(int iParam0) // Position - 0x4580 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

int func_108(int iParam0, BOOL bParam1) // Position - 0x45C3 Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_106(iParam0))
		return 0;

	if (!func_169(iParam0, 2))
		return 0;

	if (func_169(iParam0, 32) && !bParam1)
	{
		func_176(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_175(iParam0)));
	
		if (func_45() == -1)
		{
			if (func_169(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_131(iParam0));
				func_177(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_131(iParam0));
		}
	
		return 0;
	}

	if (!func_178(iParam0) && func_45() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_131(iParam0)))
	{
		func_177(iParam0, 128);
		return 1;
	}

	func_176(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_175(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_131(iParam0));

	if (func_169(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_131(iParam0));
		func_177(iParam0, 2048);
	}

	return 1;
}

BOOL func_109() // Position - 0x46AE Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_110() // Position - 0x46C2 Hash - 0x16C45944 ^0x16C45944
{
	return func_179(func_61(0));
}

BOOL func_111(int iParam0) // Position - 0x46D3 Hash - 0x4B08C8C4 ^0x4B08C8C4
{
	return !func_180(iParam0);
}

void func_112(BOOL bParam0, BOOL bParam1) // Position - 0x46E2 Hash - 0x2F17103B ^0x1C4D2C36
{
	if (func_181(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_182(0);
	}
	else
	{
		if (bParam1)
			func_183(0, false, 0, true);
	
		func_184(0);
		func_185(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_186(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_187(Global_1102813.f_3839, 36);
	func_188(Global_1102813.f_3878, 36);
	return;
}

void func_113(int iParam0, BOOL bParam1) // Position - 0x482D Hash - 0x3F1AD274 ^0x4EDF9754
{
	BOOL flag;
	Entity propForScenarioPoint;
	int i;
	int num;

	flag = func_189(iParam0) && !bParam1;

	if (!flag && !func_120(iParam0, 65536))
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
	else if (func_190(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
	
		if (func_120(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
	
		if (func_120(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
		if (func_120(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);

	if (func_190(iParam0, 16384) && !flag)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		
			if (ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&propForScenarioPoint);
		
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_191(iParam0, 16384);
	}

	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	num = func_126(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_192(Global_1051832.f_92[iParam0 /*75*/].f_31[i]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[i] = 0;
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}

	func_193(iParam0);

	if (func_120(iParam0, 262144))
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	else
		func_194(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_195(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	Global_1051832.f_92[iParam0 /*75*/].f_50 = Global_1051832.f_92[iParam0 /*75*/].f_50 & 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 & 2113536;
	func_196(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
	return;
}

int func_114(int iParam0, int iParam1) // Position - 0x4BDC Hash - 0x274C8E8A ^0x274C8E8A
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

int func_115(int iParam0) // Position - 0x5542 Hash - 0xF53EDEBA ^0xF53EDEBA
{
	if (!func_197(iParam0))
		return 0;

	if (Global_1051832.f_4492[iParam0] == 0)
		Global_1051832.f_4492[iParam0] = func_198(iParam0);

	return Global_1051832.f_4492[iParam0];
}

int func_116(int iParam0) // Position - 0x5583 Hash - 0xFE1A3B7C ^0xFE1A3B7C
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

void func_117(int iParam0, int iParam1) // Position - 0x5620 Hash - 0xDCFC48D0 ^0xCB4861A2
{
	!func_190(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1;
	return;
}

void func_118(int iParam0) // Position - 0x564F Hash - 0x93134738 ^0x938C636D
{
	Global_1051832[Global_1051832.f_41] = iParam0;
	Global_1051832.f_41 = Global_1051832.f_41 + 1;

	if (Global_1051832.f_41 >= 40)
		Global_1051832.f_41 = 40 - 1;

	return;
}

void func_119(int iParam0, int iParam1) // Position - 0x5688 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_120(int iParam0, int iParam1) // Position - 0x5699 Hash - 0xECB143B0 ^0x238A26BC
{
	return Global_1051832.f_92[iParam0 /*75*/].f_49 && iParam1 != false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x56B2 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_122() // Position - 0x56DC Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

BOOL func_123(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x56EA Hash - 0xC625CFBA ^0x5482489B
{
	return func_199(iParam0, "sHash", phParam1, "fHeading", pfParam2, "vPos", pvParam3);
}

BOOL func_124(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x570A Hash - 0xC625CFBA ^0x10C0279B
{
	return func_199(iParam0, "sClosedHash", phParam1, "fClosedHeading", pfParam2, "vClosedPos", pvParam3);
}

void func_125(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0x572A Hash - 0xCAA352A8 ^0x24D53CD4
{
	if (bParam6)
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam2, &(vParam2.f_2), false);

	Global_1051832.f_92[iParam0 /*75*/].f_6 = func_200(hParam1, vParam2, fParam5, 0, 0, false);
	Global_1915656.f_3[iParam0 /*447*/].f_16 = Global_1051832.f_92[iParam0 /*75*/].f_6;
	TASK::_SET_SCENARIO_POINT_FLAG(Global_1051832.f_92[iParam0 /*75*/].f_6, 23, true);
	TASK::_0xA7479FB665361EDB(Global_1051832.f_92[iParam0 /*75*/].f_6, 0);
	func_117(iParam0, 16384);
	return;
}

int func_126(int iParam0) // Position - 0x57A6 Hash - 0x1B04F1B9 ^0x527C4649
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

Hash func_127(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x57BA Hash - 0xEC5804B5 ^0xE95C34A9
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

BOOL func_128(Hash hParam0) // Position - 0x585E Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_201(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

BOOL func_129(Hash hParam0) // Position - 0x5879 Hash - 0x51587F69 ^0xAFC63473
{
	func_127(hParam0, false, false);

	if (func_128(hParam0))
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) == 0;

	return false;
}

BOOL func_130(int iParam0, BOOL bParam1) // Position - 0x58A2 Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_45() != -1)
		return false;

	if (!func_106(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_131(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_202(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_131(iParam0));
}

PersChar func_131(int iParam0) // Position - 0x58FA Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_106(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/].f_1;
}

BOOL func_132(int iParam0) // Position - 0x591A Hash - 0x1F2EC350 ^0x1F2EC350
{
	return iParam0 > -1 && iParam0 < 12;
}

BOOL func_133(int iParam0) // Position - 0x5930 Hash - 0x532FA545 ^0x532FA545
{
	return iParam0 > -1 && iParam0 < 16;
}

BOOL func_134(int iParam0) // Position - 0x5946 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

BOOL func_135() // Position - 0x5952 Hash - 0x2C6DE8F6 ^0xBF042FB1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

void func_136(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x596E Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_128(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_137(Hash hParam0, BOOL bParam1) // Position - 0x59A6 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_128(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_138(Hash hParam0, BOOL bParam1) // Position - 0x59D4 Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_128(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_139(Hash hParam0, BOOL bParam1) // Position - 0x5A02 Hash - 0x4844A91D ^0x50E23246
{
	if (func_128(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_140() // Position - 0x5A30 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_141(Volume volParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x5A39 Hash - 0x23F7A048 ^0x52C55AC8
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return false;

	return VOLUME::IS_POINT_IN_VOLUME(volParam0, vParam1);
}

BOOL func_142(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x5A59 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

struct<2> func_143(int iParam0) // Position - 0x5A8F Hash - 0xFB53CD87 ^0xA9AA4BC8
{
	int num;

	num = func_203(iParam0);
	return func_163(joaat("visited"), num);
}

void func_144(var uParam0, var uParam1, int iParam2) // Position - 0x5AAA Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_145(int iParam0) // Position - 0x5AC7 Hash - 0x6A6EE485 ^0x6A6EE485
{
	if (iParam0 == 22 || iParam0 == 39 && !func_204())
		return true;

	if (iParam0 == 66)
		return true;

	return false;
}

BOOL func_146() // Position - 0x5AFC Hash - 0xB5F1D039 ^0x59A8BE9D
{
	if (Global_13)
		return false;

	if (!func_205())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939102.f_75.f_55))
		return false;

	if (func_206(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_147(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x5B3F Hash - 0xAA95C4FB ^0xB3C7DDA0
{
	const char* str;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
		str = func_207(Global_1893611.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) && bParam4)
		str = func_209(func_208(Global_34));

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (!func_210(iParam0) || func_211(44))
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

BOOL func_148(int iParam0) // Position - 0x65A7 Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_149(int iParam0) // Position - 0x65BC Hash - 0xA08D7C4E ^0xA08D7C4E
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

int func_150(int iParam0) // Position - 0x6677 Hash - 0xDE3AB7BF ^0xBF88E2D7
{
	int i;
	var gamerHandle;
	int bountyData;

	if (!func_148(iParam0))
		return -1;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/];

	i = 0;
	gamerHandle = { func_212(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1072759.f_21262[i /*12*/] = bountyData;
	}

	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_151(int iParam0) // Position - 0x66E5 Hash - 0x653F925B ^0x653F925B
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

char* func_152(int iParam0) // Position - 0x6840 Hash - 0x21CE226B ^0xAFAACAA4
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

BOOL func_153(int iParam0, int iParam1) // Position - 0x687B Hash - 0x420CBA68 ^0x9F9619A9
{
	if (!func_10(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && iParam1 != false;

	return Global_1072759.f_21335[iParam0] && iParam1 != false;
}

BOOL func_154(int iParam0, int iParam1) // Position - 0x68BD Hash - 0x9AD134EA ^0x3BFBD1FE
{
	if (!func_148(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

int func_155() // Position - 0x6902 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

int func_156(int iParam0) // Position - 0x690E Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_157(int iParam0) // Position - 0x6921 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_158(float fParam0) // Position - 0x6933 Hash - 0xC643B4E3 ^0xC643B4E3
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_159(var uParam0, int iParam1) // Position - 0x6949 Hash - 0xB0CFF0C3 ^0x6960653C
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_213(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_160(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x697F Hash - 0x10503CC4 ^0x6232183B
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

BOOL func_161(int iParam0) // Position - 0x69C2 Hash - 0xD7EC85BD ^0xD7EC85BD
{
	if (func_210(iParam0))
		if (!func_211(44))
			return false;

	return true;
}

void func_162(int iParam0, int iParam1) // Position - 0x69E2 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_163(int iParam0, int iParam1) // Position - 0x69F3 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_164(var uParam0, BOOL bParam1) // Position - 0x6A09 Hash - 0x94FA4FD3 ^0x2137F904
{
	if (func_214(uParam0->f_1))
		func_215(uParam0->f_1);

	if (MAP::DOES_BLIP_EXIST(uParam0->f_9) && bParam1)
		MAP::REMOVE_BLIP(&(uParam0->f_9));

	if (func_216(uParam0->f_8))
		func_217(&(uParam0->f_8), true, true);

	return;
}

void func_165() // Position - 0x6A57 Hash - 0xF3EB254F ^0xEE53900B
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_55))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_55);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_56))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_56);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_57))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_57);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_58))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_58);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_59))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_59);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_60);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_61))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_61);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_62);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_63))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_63);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_64))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_64);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_65))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_65);

	return;
}

void func_166(Volume volParam0) // Position - 0x6B04 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_167(int iParam0) // Position - 0x6B1B Hash - 0x3E288458 ^0xC75F9664
{
	func_218(Global_1939959.f_5[iParam0 /*11*/].f_6, true);
	func_219(Global_1939959.f_5[iParam0 /*11*/].f_6, false);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1939959.f_5[iParam0 /*11*/].f_8))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1939959.f_5[iParam0 /*11*/].f_8);

	func_220(iParam0, 8192);
	func_220(iParam0, 32768);
	func_220(iParam0, 524288);
	func_220(iParam0, 1048576);
	Global_1939959.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1939959.f_5[Global_1939959 /*11*/].f_9 = 0;
	Global_1939959.f_5[iParam0 /*11*/] = 0;
	Global_1939959.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1939959.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1939959.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1939959.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1939959.f_5[iParam0 /*11*/].f_7 = 0;
	return;
}

void func_168(int iParam0) // Position - 0x6BFB Hash - 0x3CD01C93 ^0xBF009143
{
	int i;
	int num;

	if (func_106(Global_1915656.f_3[iParam0 /*447*/].f_21) && func_221(Global_1915656.f_3[iParam0 /*447*/].f_21))
		func_222(Global_1915656.f_3[iParam0 /*447*/].f_21, false, true, false, false);

	Global_1915656.f_3[iParam0 /*447*/].f_10 = { 0f, 0f, 0f };
	Global_1915656.f_3[iParam0 /*447*/].f_21 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	Global_1915656.f_3[iParam0 /*447*/].f_1 = 0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1915656.f_3[iParam0 /*447*/].f_35))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1915656.f_3[iParam0 /*447*/].f_35, false);

	func_223(Global_1915656.f_3[iParam0 /*447*/].f_9, false);
	func_224(iParam0, 536870912);
	num = func_225(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_192(Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/]);
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
	func_226(iParam0);
	Global_1915656.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_8 = -1;
	return;
}

BOOL func_169(int iParam0, BOOL bParam1) // Position - 0x6DD3 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_45() != -1)
		return false;

	if (!func_106(iParam0))
		return false;

	return Global_9899[iParam0 /*2*/] && bParam1 != false;
}

int func_170(int iParam0, BOOL bParam1) // Position - 0x6E01 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_106(iParam0))
		return 0;

	if (!func_169(iParam0, 2))
		return 0;

	if (func_175(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_131(iParam0)))
		return 1;

	if (func_169(iParam0, true) && !bParam1)
	{
		func_227(iParam0, 128);
		return 1;
	}

	func_177(iParam0, 129);
	func_228(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_131(iParam0));
	func_176(iParam0, 0);
	return 1;
}

int func_171(int iParam0) // Position - 0x6E84 Hash - 0x5000025C ^0x5000025C
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

int func_172(int iParam0) // Position - 0x6EAB Hash - 0x5000025C ^0x5000025C
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

void func_173() // Position - 0x6ECC Hash - 0xDE81FF54 ^0x39F3D85F
{
	int i;
	var unk;

	func_194(30);
	func_229(30);
	func_230(30);
	func_196(30);

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

void func_174() // Position - 0x7093 Hash - 0x93D7F24D ^0x457E2679
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

	func_196(32);
	return;
}

Hash func_175(int iParam0) // Position - 0x710E Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_106(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/];
}

void func_176(int iParam0, PersChar pchParam1) // Position - 0x712C Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_106(iParam0))
		return;

	Global_1893799[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

void func_177(int iParam0, BOOL bParam1) // Position - 0x714D Hash - 0x452DF11A ^0x452DF11A
{
	if (func_45() != -1)
		return;

	if (!func_106(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] - Global_9899[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_178(int iParam0) // Position - 0x7186 Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_106(iParam0))
		return false;

	if (!func_169(iParam0, 2))
		return false;

	return true;
}

BOOL func_179(var uParam0, var uParam1) // Position - 0x71AC Hash - 0x1268D0E3 ^0x1268D0E3
{
	return func_231(uParam0, 5, 8);
}

BOOL func_180(int iParam0) // Position - 0x71BF Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_232(1, iParam0);
}

int func_181(int iParam0) // Position - 0x71CE Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

int func_182(int iParam0) // Position - 0x7219 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_233(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_183(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x7236 Hash - 0x79169E9C ^0xA3FE4569
{
	func_234(iParam0);

	if (!func_235(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_236(128) && !func_237(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_238() == 4)
		func_182(18);

	func_239(1024);
	return;
}

int func_184(int iParam0) // Position - 0x7298 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_240(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_185(var uParam0) // Position - 0x72B5 Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_186(var uParam0) // Position - 0x72C7 Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x72D9 Hash - 0x63EE9672 ^0xDAC9325D
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

void func_188(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x732F Hash - 0x6DF4F0B2 ^0x7B946ED1
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

BOOL func_189(int iParam0) // Position - 0x735C Hash - 0x287157F6 ^0x287157F6
{
	if (iParam0 == 28 || iParam0 == 29 || iParam0 == 38 || iParam0 == 27 || iParam0 == 15 || iParam0 == 39)
		return true;

	if (func_120(iParam0, 65536))
		return true;

	return false;
}

BOOL func_190(int iParam0, int iParam1) // Position - 0x73B9 Hash - 0xECB143B0 ^0x5DBA9B53
{
	return Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1 != false;
}

void func_191(int iParam0, int iParam1) // Position - 0x73D2 Hash - 0x9E30ADED ^0xA0DD8460
{
	func_190(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;
	return;
}

void func_192(Hash hParam0) // Position - 0x740D Hash - 0xDB9A74EC ^0x13B3F16D
{
	if (func_128(hParam0) && func_241())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

void func_193(int iParam0) // Position - 0x742D Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_194(int iParam0) // Position - 0x7435 Hash - 0xEAA35366 ^0xF96CFACE
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
	return;
}

BOOL func_195(int iParam0, int iParam1) // Position - 0x744A Hash - 0x685DE635 ^0x335BF63C
{
	if (iParam0 == -1)
		return false;

	return func_242(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

void func_196(int iParam0) // Position - 0x7471 Hash - 0xF0369B46 ^0xC17C02F0
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

BOOL func_197(int iParam0) // Position - 0x74F0 Hash - 0x8858DE32 ^0x8858DE32
{
	return iParam0 > -1 && iParam0 < 180;
}

int func_198(int iParam0) // Position - 0x7506 Hash - 0xB89C4DF3 ^0x1393EE39
{
	var unk;

	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149432.f_7) && !func_244(12, func_243(iParam0), &unk))
		return 0;

	return unk.f_2;
}

BOOL func_199(int iParam0, char* sParam1, Hash* phParam2, char* sParam3, float* pfParam4, char* sParam5, Vector3* pvParam6) // Position - 0x7537 Hash - 0x5851BC53 ^0x8A1263E0
{
	var unk;

	unk = func_245();
	unk.f_2 = -738708473;
	unk.f_3 = func_243(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		return 0;

	unk.f_2 = -1407851228;
	unk.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(phParam2, &unk);
	unk.f_2 = 1059891245;
	unk.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &unk);
	unk.f_2 = -99852754;
	unk.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &unk);
	return 1;
}

int func_200(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x75BF Hash - 0x9EF7DC49 ^0x7633F111
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, iParam5, iParam6, bParam7);
}

BOOL func_201(Hash hParam0) // Position - 0x75D9 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

Ped func_202(int iParam0) // Position - 0x75E5 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_131(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

int func_203(int iParam0) // Position - 0x7613 Hash - 0x4FE01E4C ^0x4FE01E4C
{
	int num;

	num = func_243(iParam0);
	num == 0;
	return num;
}

BOOL func_204() // Position - 0x762B Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_205() // Position - 0x7634 Hash - 0xC0177349 ^0xA55DEE6F
{
	var unk;
	var unk3;

	if (func_45() != 0)
		return true;

	if (func_246())
		return false;

	if (HUD::_0x7EC0D68233E391AC(6) == 1)
		return true;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_247() };

	if (func_248(unk))
		return false;

	unk3 = { func_249() };

	if (func_248(unk3))
		return false;

	return true;
}

BOOL func_206(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x769C Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_246())
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

	if (iParam0 == 0 && func_248(func_61(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_62(func_61(0)))
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

const char* func_207(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x7812 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_208(var uParam0, var uParam1, var uParam2) // Position - 0x7826 Hash - 0xD993B6FD ^0xD993B6FD
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_250(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_209(int iParam0) // Position - 0x7854 Hash - 0xE6862179 ^0x613A8422
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

BOOL func_210(int iParam0) // Position - 0x7B38 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_211(int iParam0) // Position - 0x7B62 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_251(iParam0))
		return false;

	return func_252(iParam0);
}

struct<2> func_212(Player plParam0) // Position - 0x7B7E Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

const char* func_213(const char* sParam0, int iParam1) // Position - 0x7B92 Hash - 0x9E99F03 ^0xD0C602CA
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_214(Volume volParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x7BAC Hash - 0x16CD1F21 ^0x2C43B1FB
{
	return VOLUME::DOES_VOLUME_EXIST(volParam0);
}

void func_215(Volume volParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x7BBA Hash - 0x433C0E5E ^0xA5B8D6DC
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

BOOL func_216(int iParam0) // Position - 0x7BF8 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

void func_217(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7C37 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_216(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_253(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_254(num);
	*uParam0 = 0;
	return;
}

void func_218(int iParam0, BOOL bParam1) // Position - 0x7C8B Hash - 0x2F9EB0B9 ^0x606BFE56
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

void func_219(int iParam0, BOOL bParam1) // Position - 0x7CBF Hash - 0x342D57CF ^0xCC4BE46E
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

void func_220(int iParam0, int iParam1) // Position - 0x7CF4 Hash - 0x823E3440 ^0x340E01B4
{
	func_255(&(Global_1939959.f_5[iParam0 /*11*/].f_7), iParam1);
	return;
}

BOOL func_221(int iParam0) // Position - 0x7D0E Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_106(iParam0))
		return false;

	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_222(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7D33 Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_106(iParam0))
		return;

	if (!func_169(iParam0, 1))
		return;

	if (!func_169(iParam0, 2))
		return;

	if (!bParam4 && !func_221(iParam0) && func_256(iParam0))
		return;

	func_177(iParam0, 1);
	func_228(iParam0);

	if (func_257(func_175(iParam0)))
	{
		persChar = func_131(iParam0);
	
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
	
		func_177(iParam0, 16);
	}

	if (func_169(iParam0, 128) && !bParam3)
		func_170(iParam0, false);

	return;
}

void func_223(int iParam0, BOOL bParam1) // Position - 0x7E1F Hash - 0x6FB1865F ^0x85C63E45
{
	if (!func_197(iParam0))
		return;

	if (bParam1)
	{
		if (!func_258(iParam0, 1024))
		{
			func_259(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_258(iParam0, 1024))
	{
		func_260(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	func_261(iParam0);
	return;
}

void func_224(int iParam0, int iParam1) // Position - 0x7E75 Hash - 0x6F4899EB ^0x5624A2EB
{
	if (!func_262(iParam0))
		return;

	if (func_45() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 - Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;

	return;
}

int func_225(int iParam0) // Position - 0x7EE8 Hash - 0x47F93C28 ^0x59A8BC1F
{
	return Global_1915656.f_3[iParam0 /*447*/].f_409;
}

void func_226(int iParam0) // Position - 0x7EFE Hash - 0x53643336 ^0xF32C683E
{
	Global_1915656.f_3[iParam0 /*447*/].f_6 = 0;
	return;
}

void func_227(int iParam0, BOOL bParam1) // Position - 0x7F14 Hash - 0x61515A20 ^0x61515A20
{
	if (func_45() != -1)
		return;

	if (!func_106(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] || bParam1;
	return;
}

void func_228(int iParam0) // Position - 0x7F45 Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_106(iParam0))
		return;

	ped = func_202(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1893799[iParam0 /*3*/].f_2 = 0;
	return;
}

void func_229(int iParam0) // Position - 0x7F89 Hash - 0xEAA35366 ^0x5C75D9EC
{
	Global_1051832.f_92[iParam0 /*75*/].f_50 = 0;
	return;
}

void func_230(int iParam0) // Position - 0x7F9E Hash - 0xEAA35366 ^0x1439656C
{
	Global_1051832.f_92[iParam0 /*75*/].f_1 = 0;
	return;
}

BOOL func_231(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x7FB3 Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_248(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_263(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_232(int iParam0, int iParam1) // Position - 0x7FEE Hash - 0xBAE30231 ^0x2BF93FF
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_264(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_265())
		return func_264(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_264(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_233(var uParam0, int iParam1, int iParam2) // Position - 0x8064 Hash - 0x8AC008A3 ^0x375BADC3
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::CLEAR_BIT(&uParam0->[num], offset);
	return isBitSet;
}

void func_234(int iParam0) // Position - 0x8096 Hash - 0x42868A8 ^0x3D52297C
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_235(int iParam0) // Position - 0x80A8 Hash - 0xA1D29AFD ^0xABA18533
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_236(BOOL bParam0) // Position - 0x80BD Hash - 0xA1D29AFD ^0x8B9D4F17
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_237(int iParam0) // Position - 0x80D2 Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_238() // Position - 0x8100 Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_239(BOOL bParam0) // Position - 0x8133 Hash - 0xEBD3AD20 ^0x6E10961F
{
	if (func_266(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_240(var uParam0, int iParam1, int iParam2) // Position - 0x815A Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::SET_BIT(&uParam0->[num], offset);
	return !isBitSet;
}

BOOL func_241() // Position - 0x818D Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

BOOL func_242(int iParam0, int iParam1) // Position - 0x8196 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_243(int iParam0) // Position - 0x81A5 Hash - 0xB8EC44B7 ^0x241D648F
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

BOOL func_244(int iParam0, int iParam1, var uParam2) // Position - 0x8B8D Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_267(iParam0, iParam1, &unk))
		func_268(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

var func_245() // Position - 0x8BB4 Hash - 0x4F5358E7 ^0x4EB0CC4F
{
	return Global_1072759.f_28418[48 /*4*/].f_3;
}

BOOL func_246() // Position - 0x8BC9 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_248(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

struct<2> func_247() // Position - 0x8C21 Hash - 0x46B5D72E ^0x46B5D72E
{
	return Global_1051268;
}

BOOL func_248(var uParam0, var uParam1) // Position - 0x8C2F Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_269(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_270(uParam0))
		return false;

	return true;
}

struct<2> func_249() // Position - 0x8C63 Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_61(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_61(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_250(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x8CAE Hash - 0x5431B0F9 ^0x1E2109F7
{
	var unk;
	float num;
	float num2;

	func_271(iParam3, &unk, &num, &num2);

	if (func_272(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

BOOL func_251(int iParam0) // Position - 0x8CDE Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_252(int iParam0) // Position - 0x8CF1 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

int func_253(var uParam0) // Position - 0x8D1B Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

void func_254(int iParam0) // Position - 0x8D25 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_273(iParam0))
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

void func_255(var uParam0, int iParam1) // Position - 0x8DD8 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_256(int iParam0) // Position - 0x8DED Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_106(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

BOOL func_257(Hash hParam0) // Position - 0x8E11 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_258(int iParam0, BOOL bParam1) // Position - 0x8E1D Hash - 0xC3E950D6 ^0xC3E950D6
{
	if (!func_197(iParam0))
		return false;

	return Global_1915656.f_17884[iParam0] && bParam1 != false;
}

void func_259(int iParam0, BOOL bParam1) // Position - 0x8E43 Hash - 0x7639AFD6 ^0x7639AFD6
{
	if (!func_197(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] || bParam1;
	return;
}

void func_260(int iParam0, BOOL bParam1) // Position - 0x8E71 Hash - 0xECD22DFB ^0xECD22DFB
{
	if (!func_197(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] - Global_1915656.f_17884[iParam0] && bParam1;
	return;
}

void func_261(int iParam0) // Position - 0x8EAB Hash - 0xB29062D ^0xB29062D
{
	func_275(func_274(iParam0));
	return;
}

BOOL func_262(int iParam0) // Position - 0x8EBD Hash - 0xDFD519AF ^0xDFD519AF
{
	return iParam0 > -1 && iParam0 < 40;
}

int func_263(int iParam0, var uParam1) // Position - 0x8ED3 Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_276(iParam0);

	return -1;
}

BOOL func_264(var uParam0, int iParam1, int iParam2) // Position - 0x8EED Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_265() // Position - 0x8F24 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

BOOL func_266(BOOL bParam0) // Position - 0x8F33 Hash - 0x695C3191 ^0x86E70E17
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

BOOL func_267(int iParam0, int iParam1, Any* panParam2) // Position - 0x8F49 Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_277(iParam0);
	panParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_268(Any* panParam0, int iParam1, var uParam2) // Position - 0x8F7D Hash - 0x59F43AD2 ^0xB9A366FE
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

BOOL func_269(int iParam0) // Position - 0x8FF7 Hash - 0x5000025C ^0x5000025C
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

int func_270(int iParam0) // Position - 0x9036 Hash - 0xE34A477A ^0xE34A477A
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

void func_271(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x90CC Hash - 0x7A16E50C ^0x7A16E50C
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

BOOL func_272(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0x9B69 Hash - 0x3D2F8087 ^0xB0BC8DD5
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

BOOL func_273(int iParam0) // Position - 0x9BCF Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_278(iParam0, 2);
}

int func_274(int iParam0) // Position - 0x9BDE Hash - 0xA78B2E8C ^0xA78B2E8C
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

void func_275(int iParam0) // Position - 0xA0FB Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1915656.f_18247 = iParam0;
	return;
}

int func_276(var uParam0, var uParam1) // Position - 0xA10C Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_279(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_277(int iParam0) // Position - 0xA138 Hash - 0x5FB59AC3 ^0xE293EFF
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

BOOL func_278(int iParam0, int iParam1) // Position - 0xA2AD Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

BOOL func_279(int iParam0, var uParam1, Any* panParam2) // Position - 0xA2CE Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_248(iParam0))
		return false;

	func_280(panParam2);

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

void func_280(Any* panParam0) // Position - 0xA3D9 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

