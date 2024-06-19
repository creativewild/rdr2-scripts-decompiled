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
	Hash hLocal_27 = 0;
	var uLocal_28 = 3;
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
	var uLocal_59 = -1;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 1;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	Volume volLocal_65 = 0;
	Volume volLocal_66 = 0;
	Volume volLocal_67 = 0;
	Volume volLocal_68 = 0;
	Volume volLocal_69 = 0;
	Volume volLocal_70 = 0;
	Volume volLocal_71 = 0;
	Volume volLocal_72 = 0;
	Volume volLocal_73 = 0;
	Volume volLocal_74 = 0;
	Volume volLocal_75 = 0;
	Volume volLocal_76 = 0;
	Volume volLocal_77 = 0;
	Volume volLocal_78 = 0;
	Volume volLocal_79 = 0;
	Volume volLocal_80 = 0;
	Volume volLocal_81 = 0;
	Volume volLocal_82 = 0;
	Volume volLocal_83 = 0;
	Volume volLocal_84 = 0;
	Volume volLocal_85 = 0;
	Volume volLocal_86 = 0;
	Volume volLocal_87 = 0;
	Volume volLocal_88 = 0;
	Any anLocal_89 = 0;
	Volume volLocal_90 = 0;
	Volume volLocal_91 = 0;
	Volume volLocal_92 = 0;
	Volume volLocal_93 = 0;
	Volume volLocal_94 = 0;
	Volume volLocal_95 = 0;
	Volume volLocal_96 = 0;
	Volume volLocal_97 = 0;
	Volume volLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	BOOL bLocal_102 = 0;
	int iLocal_103 = 4;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	BOOL bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	BOOL bLocal_114 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x3B3237A7 ^0x932D183B
{
	int num;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	uLocal_99 = { -819.9311f, -1167.9745f, 42.1802f };
	iLocal_109 = 20000;
	iLocal_112 = iScriptParam_0;
	iLocal_110 = iScriptParam_0.f_2;
	bLocal_114 = false;

	if (Global_1901671.f_2.f_26 > 0)
		func_1();

	func_2();
	func_3();
	iLocal_111 = MISC::GET_GAME_TIMER();
	num = 0;

	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_111)
		{
			iLocal_111 = 0;
			func_5(iLocal_112, &iLocal_110);
		
			switch (iLocal_110)
			{
				case 0:
					if (Global_1901671.f_2.f_26 > 0)
					{
						iLocal_113 = MISC::GET_GAME_TIMER() + Global_1901671.f_2.f_26;
						iLocal_110 = 1;
					}
					else
					{
						iLocal_110 = 2;
					}
					break;
			
				case 1:
					if (!func_1() || iLocal_113 < MISC::GET_GAME_TIMER())
					{
						bLocal_114 = false;
						iLocal_110 = 2;
					}
					break;
			
				case 2:
					func_6(iLocal_112);
					func_7();
					func_8();
				
					if (func_10(func_9(iLocal_112)))
						func_11(func_9(iLocal_112), 4);
				
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_112));
					Global_1896644 = -1;
					iLocal_113 = iLocal_109 + MISC::GET_GAME_TIMER();
					iLocal_110 = 3;
					break;
			
				case 3:
					if (func_13() || iLocal_113 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT(iLocal_112);
						iLocal_113 = MISC::GET_GAME_TIMER() + iLocal_109;
						iLocal_110 = 4;
					}
					break;
			
				case 4:
					if (func_15(iLocal_112) || iLocal_113 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_112);
						iLocal_113 = MISC::GET_GAME_TIMER() + iLocal_109;
						iLocal_110 = 5;
					}
					break;
			
				case 5:
					if (func_17(iLocal_112) || iLocal_113 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0(iLocal_112);
						iLocal_113 = iLocal_109 + MISC::GET_GAME_TIMER();
						iLocal_110 = 7;
					}
					break;
			
				case 7:
					if (func_10(func_9(iLocal_112)))
						if (func_19(func_9(iLocal_112), 4) && !(iLocal_113 < MISC::GET_GAME_TIMER()))
							break;
				
					if (func_20(iLocal_112) || iLocal_113 < MISC::GET_GAME_TIMER())
					{
						func_21(iLocal_112, 4);
						iLocal_113 = MISC::GET_GAME_TIMER() + iLocal_109;
						iLocal_110 = 8;
					}
					break;
			
				case 8:
					_DEBUG_PRINT_0_0(iLocal_112);
					func_23();
				
					if (!func_24(4105, false))
						func_25();
				
					func_26();
					func_27();
					func_28();
					func_29(iLocal_112);
					func_30(iLocal_112);
					func_31();
					func_32();
					iLocal_110 = 9;
					break;
			
				case 9:
					func_33(iLocal_112);
					func_34();
					iLocal_110 = 10;
					break;
			
				case 10:
					func_35(&Global_1896698);
					func_36(iLocal_112, &Global_1896698);
					iLocal_110 = 11;
					break;
			
				case 11:
					func_37(iLocal_112);
					func_21(iLocal_112, 8);
				
					if (func_38(32))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_IN(500);
					
						func_39(32);
					}
				
					iLocal_110 = 12;
					break;
			
				case 12:
					if (func_40(iLocal_112))
						iLocal_111 = MISC::GET_GAME_TIMER() + 1000;
				
					func_41(&Global_1896698, iLocal_112);
					func_42(iLocal_112);
					func_21(iLocal_112, 8);
				
					if (func_43())
						PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				
					PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_112 /*36*/].f_11);
				
					if (Global_1887363[iLocal_112 /*36*/].f_12 > 0f)
						PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_112 /*36*/].f_12);
					break;
			
				case 13:
					func_8();
					func_44(num);
					num = num + 1;
					break;
			}
		}
	
		if (Global_1887363[iLocal_112 /*36*/].f_13 == 0)
		{
		}
		else
		{
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1887363[iLocal_112 /*36*/].f_13);
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

BOOL func_1() // Position - 0x398 Hash - 0x51BBAF33 ^0x51BBAF33
{
	if (!bLocal_114)
	{
		if (Global_1051194)
		{
			bLocal_114 = true;
			return true;
		}
	
		if (func_47() && func_48())
		{
			bLocal_114 = true;
			return true;
		}
	
		return false;
	}

	if (Global_1051194)
		return true;

	if (func_48())
		return true;

	bLocal_114 = false;
	return false;
}

void func_2() // Position - 0x3E9 Hash - 0x2D3C4881 ^0x5F6A96E
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

void func_3() // Position - 0x43A Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_4() // Position - 0x442 Hash - 0xC69268B8 ^0xC69268B8
{
	if (func_45() != -1)
		return !func_49(true, true);

	return true;
}

void func_5(int iParam0, var uParam1) // Position - 0x45D Hash - 0x1DD95532 ^0x798CA2F1
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

void func_6(int iParam0) // Position - 0x58D Hash - 0xCC75B87D ^0xCC75B87D
{
	func_53();
	return;
}

void func_7() // Position - 0x599 Hash - 0xFC5DFC3D ^0xFC5DFC3D
{
	if (!Global_1102813.f_3967)
		Global_1102813.f_3967 = 1;

	return;
}

void func_8() // Position - 0x5B7 Hash - 0x6E39B93A ^0x6E39B93A
{
	if (!Global_1072759.f_23824)
		Global_1072759.f_23824 = 1;

	return;
}

int func_9(int iParam0) // Position - 0x5D2 Hash - 0x4D13899D ^0x4D13899D
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

BOOL func_10(int iParam0) // Position - 0x6CE Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

void func_11(int iParam0, BOOL bParam1) // Position - 0x6E4 Hash - 0xACB2A3A5 ^0xACB2A3A5
{
	Global_1896646[iParam0 /*2*/] = Global_1896646[iParam0 /*2*/] || bParam1;
	return;
}

Hash func_12(int iParam0) // Position - 0x6FF Hash - 0x9C8621E4 ^0xA7A3B249
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

BOOL func_13() // Position - 0x7E7 Hash - 0x9792C8C8 ^0x7A5776C2
{
	volLocal_65 = Global_1887363[40 /*36*/].f_5;
	VOLUME::_0xB469CFD9E065EB99(volLocal_65, 10);
	volLocal_66 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-782.971f, -1324.319f, 46.397f, 0f, 0f, -90f, 7.484f, 14.629f, 7.008f, "Blackwater - m_volGeneral");
	volLocal_69 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-782.842f, -1324.1f, 44.674f, 0f, 0f, -90f, 7.3f, 14.9f, 4f, "Blackwater - m_volGeneralStoreOwner");
	volLocal_67 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-784.77f, -1323.951f, 44.03f, 0f, 0f, -90f, 1.2f, 2f, 2.5f, "Blackwater - m_volGeneralPrompt");
	volLocal_68 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-784.473f, -1321.867f, 44.03f, 0f, 0f, -90f, 1.5f, 3.869f, 2.5f, "Blackwater - m_volGeneralCounterOff");
	VOLUME::_0xB469CFD9E065EB99(volLocal_66, 10040);
	volLocal_87 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763f, -1269.2f, 44.2f, 0f, 0f, 0f, 12.1f, 8.532616f, 5f, "BLKWATER SHERIFF STATION");
	VOLUME::_0x3EFABB21E14A6BD1(volLocal_87, 5, 1);
	volLocal_90 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-868.33563f, -1366.2074f, 44.753105f, 0f, 0f, 0f, 23.187473f, 12.135996f, 4.277f, "Blackwater - m_volHorseShop");
	VOLUME::_0xB469CFD9E065EB99(volLocal_90, 10042);
	volLocal_88 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-775.5706f, -1278.2919f, 43.720215f, 0f, 0f, 0f, 2.331285f, 11.199818f, 4.241409f, "m_volLawSpawn_Blocking");
	anLocal_89 = MISC::_ADD_DISPATCH_SPAWN_BLOCKING_AREA(volLocal_88);
	volLocal_70 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-815.711f, -1276.18f, 43.997f, 0f, 0f, 89.8f, 7.8f, 12.9f, 2.9f, "Blackwater - m_volBank");
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_70, 0, 0, 0, -1, -1, 0);
	volLocal_71 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-815.711f, -1276.18f, 43.997f, 0f, 0f, 89.8f, 7.7f, 12.8f, 2.9f, "Blackwater - m_volBankManagerOwner");
	volLocal_74 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.219f, -1292.7f, 44.6f, 0f, 0f, 0f, 11.4f, 6.5f, 3.5f, "Blackwater - m_volTailor");
	volLocal_75 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volTailorOwner");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_75, -765.319f, -1292.7f, 44.6f, 0f, 0f, 0f, 15.6f, 6.5f, 3.5f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_75, -774.117f, -1291.071f, 44.6f, 0f, 0f, 0f, 2f, 3.25f, 3.5f);
	volLocal_76 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-761.543f, -1291.245f, 43.772f, 0f, 0f, 0f, 3.8f, 2.5f, 2f, "BLW-m_volTailorPrompt");
	volLocal_77 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volTailorOfflimits");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_77, -760.79f, -1294.066f, 43.772f, 0f, 0f, 0f, 6f, 2f, 2f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_77, -767.183f, -1291.536f, 43.772f, 0f, 0f, 89.264f, 2.695f, 3.324f, 2f);
	volLocal_78 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volTailorPARENT");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_78, volLocal_75);
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_78, volLocal_77);
	VOLUME::_0xB469CFD9E065EB99(volLocal_74, 10044);
	volLocal_82 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volPostOfficeOwner Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_82, -875.073f, -1332.742f, 44.472507f, 0f, 0f, -179.746f, 8.481f, 13.525f, 2.993397f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_82, -875.036f, -1324.642f, 44.43187f, 0f, 0f, 0f, 2.667f, 3.006f, 3f);
	volLocal_83 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volPostOfficePrompt Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_83, -875.07f, -1328.584f, 44.38541f, 0f, 0f, -179.5535f, 2.007f, 1.4f, 2.993397f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_83, -875.036f, -1324.773f, 44.43187f, 0f, 0f, 0f, 2.299f, 2.175f, 3f);
	volLocal_84 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-875.6834f, -1326.8612f, 44.472507f, 0f, 0f, -179.14037f, 3.857776f, 1.921187f, 2.993397f, "Blackwater - m_volPostOfficeOfflimits");
	volLocal_85 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volPostOfficePARENT Agg");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_85, volLocal_82);
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_85, volLocal_84);
	VOLUME::_0xB469CFD9E065EB99(volLocal_85, 10043);
	volLocal_79 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-785.28033f, -1304.6946f, 44.6f, 0f, 0f, 180f, 9.89304f, 6.3f, 3.7f, "Blackwater - m_volDoctorOwner");
	volLocal_80 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-786.67206f, -1302.4535f, 44.565098f, 0f, 0f, -179.98265f, 7.058838f, 1.318995f, 3.7f, "Blackwater - m_volDoctorOfflimits");
	volLocal_81 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volDoctorPARENT Agg");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_81, volLocal_79);
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_81, volLocal_80);
	VOLUME::_0xB469CFD9E065EB99(volLocal_81, 10039);
	volLocal_86 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volSaloonInterior");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_86, -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_86, -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_86, -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
	volLocal_72 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-813.815f, -1366.005f, 43.677f, 0f, 0f, 90f, 6.5f, 7f, 2f, "Blackwater-m_volBarberShop");
	volLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-813.686f, -1366.005f, 43.677f, 0f, 0f, 90f, 5.5f, 6f, 2f, "Blackwater-m_volBarberPrompt");
	volLocal_92 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-753.42194f, -1284.2399f, 43.200493f, 0f, 0f, 90f, 6f, 8f, 2f, "Blackwater - m_volButcher");
	volLocal_93 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-750.9575f, -1284.8445f, 43.200493f, 0f, 0f, 90f, 1.8f, 1.3f, 2f, "Blackwater - m_volButcherPrompt");
	VOLUME::_0xB469CFD9E065EB99(volLocal_92, 10121);
	volLocal_91 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-778.69446f, -1362.4666f, 45.687f, 0f, 0f, 0.496382f, 16f, 8.9f, 8f, "Blackwater - m_volTheatre");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_91, 10208, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_91, 10208, 0, 0, -1, -1, 0);
	volLocal_94 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volPhotoStudio-Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_94, -813.0476f, -1374.2649f, 44.608032f, 0f, 0f, 0f, 7.733583f, 6.296834f, 3.236622f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_94, -813.74f, -1374.56f, 35.02f, 0f, 0f, 0f, 5f, 5f, 3f);
	volLocal_95 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-813.8254f, -1374.2649f, 44.608032f, 0f, 0f, 0f, 6.401097f, 6.296834f, 3.236622f, "Blackwater - m_volPhotoStudioPrompt");
	volLocal_96 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volLiveryOwner");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_96, -971.58545f, -1321.0961f, 54.184036f, 0.083127f, 4.778676f, 0.997744f, 31.36792f, 47.07047f, 7.816715f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_96, -949.3033f, -1339.0831f, 52.97771f, 0f, 0f, 2.975328f, 14.371377f, 10.089884f, 7.273995f);
	volLocal_97 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-751.898f, -1285.072f, 43.418f, 0f, 0f, 0f, 2.822f, 4.416f, 2.448f, "Blackwater-m_volButcherNavMeshBlocking");
	PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(volLocal_97, 7);
	volLocal_98 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-934.7934f, -1374.3376f, 48.446407f, 0f, 0f, 0f, 1f, 1f, 1f, "Blackwater-m_volCampfire");
	func_54(volLocal_98, 4);
	return true;
}

void _DEBUG_PRINT(int iParam0) // Position - 0xEFB Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

BOOL func_15(int iParam0) // Position - 0xF07 Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	iParam0 = iParam0;
	return true;
}

void func_16(int iParam0) // Position - 0xF14 Hash - 0x79009BF8 ^0x87DEB1D
{
	iParam0 = iParam0;
	func_55(527226204, false, false);
	func_55(885203519, true, false);
	func_56(joaat("p_churchbell01x"), "props_misc@church_bells", "enter", "loop", "exit", -970.1069f, -1182.4276f, 66.75692f, "VAL_SINGLE_TOLL");
	func_57(9, 0, 0);
	func_57(12, 0, 0);
	func_57(19, 0, 0);
	func_58(uLocal_99, 5f, 0, 0, 5, 0);
	return;
}

BOOL func_17(int iParam0) // Position - 0xF87 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void _DEBUG_PRINT_0(int iParam0) // Position - 0xF90 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

BOOL func_19(int iParam0, BOOL bParam1) // Position - 0xF9C Hash - 0xFB77C6C8 ^0xFB77C6C8
{
	return Global_1896646[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_20(int iParam0) // Position - 0xFB1 Hash - 0x6DE0FDC2 ^0x6DE0FDC2
{
	return func_59(iParam0, -1, -1, false);
}

void func_21(int iParam0, BOOL bParam1) // Position - 0xFC2 Hash - 0x85549BC4 ^0xED99428
{
	if (Global_1572887.f_14 == -1)
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] || bParam1;
	else
		Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] || bParam1;

	return;
}

void _DEBUG_PRINT_0_0(int iParam0) // Position - 0x1001 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	iParam0 = iParam0;
	return;
}

void func_23() // Position - 0x100D Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_24(int iParam0, BOOL bParam1) // Position - 0x1015 Hash - 0xB323866B ^0xE9E411E6
{
	if (func_60(iParam0))
		return true;

	if (!bParam1)
		if (func_61(5000))
			return true;

	switch (func_63(func_62(0)))
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

void func_25() // Position - 0x10C5 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_26() // Position - 0x10CD Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_27() // Position - 0x10D5 Hash - 0x5A2E34DB ^0x5A2E34DB
{
	func_64(0, -815.3443f, -1315.5991f, 42.6788f, volLocal_86, 40);
	return;
}

void func_28() // Position - 0x10F5 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_29(int iParam0) // Position - 0x10FD Hash - 0xD78B3015 ^0x7CB4A49B
{
	func_65(3, volLocal_66, iParam0, volLocal_67, volLocal_68, 4, false, false, -1082130432, 0);
	func_66(3, -1498321761, 0, false, false);
	func_66(3, -1252390440, 0, false, false);
	func_66(3, 2046989122, 0, false, false);
	func_67(3, 8192);
	func_68(3, false);
	func_65(25, volLocal_87, iParam0, 0, 0, 2, false, false, -1082130432, 0);
	func_67(25, 1);
	func_67(25, 16384);
	func_67(25, 8192);
	func_67(25, 536870912);
	func_65(7, volLocal_74, iParam0, volLocal_76, 0, 4, false, false, -1082130432, 0);
	func_66(7, -1768302830, 0, false, false);
	func_68(7, false);
	func_65(10, volLocal_92, iParam0, volLocal_93, 0, 460, true, false, -1082130432, 0);
	func_67(10, 536870912);
	func_68(10, false);
	func_65(9, volLocal_90, iParam0, 0, 0, 2, true, false, -1082130432, 0);
	func_67(9, 536870912);
	func_67(9, 16384);
	func_67(9, 32768);
	func_67(9, 1);
	func_67(9, 8388608);
	func_67(9, 8192);
	func_67(9, 4);
	func_67(9, 16777216);
	func_67(9, 67108864);

	if (!func_69() && func_70())
	{
		func_66(9, -977581490, 0, false, false);
		func_66(9, -1284495944, 0, false, false);
		func_66(9, joaat("BLA_CARRIAGE_DOOR03"), 0, false, false);
		func_66(9, joaat("BLA_CARRIAGE_DOOR04"), 0, false, false);
	}
	else
	{
		func_66(9, -977581490, -1f, true, true);
		func_66(9, -1284495944, 1f, true, true);
		func_66(9, joaat("BLA_CARRIAGE_DOOR03"), 1f, true, true);
		func_66(9, joaat("BLA_CARRIAGE_DOOR04"), -1f, true, true);
	}

	func_71();
	func_72(10);
	func_65(8, volLocal_72, iParam0, volLocal_73, 0, 4098, false, false, -1082130432, 0);
	func_66(8, -1782375478, 0, false, false);
	func_66(8, 1632219860, 0, false, false);
	func_66(8, 2004868928, 0, false, false);
	func_68(8, false);
	func_65(2, volLocal_82, iParam0, volLocal_83, volLocal_84, 1277952, false, false, -1082130432, 0);
	func_66(2, joaat("door_bla_train_front_01"), 0, false, false);
	func_66(2, joaat("door_bla_train_front_02"), 0, false, false);
	func_66(2, joaat("door_bla_train_back"), 0, false, false);
	func_66(2, joaat("door_bla_train_clerk"), 0, false, false);
	func_68(2, false);
	func_65(18, volLocal_94, iParam0, volLocal_95, 0, 524290, false, false, -1082130432, 0);
	func_66(18, 123675751, 0, false, false);
	func_66(18, 1079875175, 0, false, false);
	func_68(18, false);
	func_73(iParam0);
	return;
}

void func_30(int iParam0) // Position - 0x13B7 Hash - 0x1FDD215A ^0x7D1B36F0
{
	iParam0 = iParam0;
	func_74(513, volLocal_71, true);
	func_74(523, volLocal_72, true);
	func_74(507, volLocal_69, true);
	func_74(515, volLocal_75, true);
	func_74(516, volLocal_82, true);
	func_74(510, volLocal_90, true);
	func_74(520, volLocal_96, true);
	func_74(521, volLocal_96, false);
	func_74(522, volLocal_96, false);
	return;
}

void func_31() // Position - 0x1426 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_32() // Position - 0x142E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_33(int iParam0) // Position - 0x1436 Hash - 0xE04F599C ^0xE04F599C
{
	func_75(0.85f, 0.15f, 0f, 0f);

	if (!func_76(44))
		if (!func_77(135))
			func_78(135, false);

	return;
}

void func_34() // Position - 0x1469 Hash - 0x2E7B6F22 ^0x3889AD2B
{
	if (!Global_1893611.f_186)
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1893611.f_182, Global_1893611.f_183, Global_1893611.f_184, Global_1893611.f_185);

	return;
}

void func_35(var uParam0) // Position - 0x149A Hash - 0x28951280 ^0x95B241A
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

void func_36(int iParam0, var uParam1) // Position - 0x14E0 Hash - 0x15D4670E ^0x15D4670E
{
	iParam0 = iParam0;
	func_79(uParam1, volLocal_65, 1);
	func_79(uParam1, volLocal_79, 2);
	func_79(uParam1, volLocal_66, 2);
	func_79(uParam1, volLocal_74, 2);
	func_79(uParam1, volLocal_82, 2);
	func_79(uParam1, volLocal_90, 2);
	return;
}

void func_37(int iParam0) // Position - 0x1522 Hash - 0x2B5556DC ^0x1A9D2173
{
	if (!func_80(iParam0))
		return;

	func_81();
	func_82(0, joaat("bla_downtown"));
	func_82(2, joaat("bla_law_deputies"));
	return;
}

BOOL func_38(int iParam0) // Position - 0x154F Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1893611 && iParam0 != false;
}

void func_39(int iParam0) // Position - 0x1560 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1893611 = Global_1893611 - Global_1893611 && iParam0;
	return;
}

BOOL func_40(int iParam0) // Position - 0x1578 Hash - 0x5A37069E ^0xE0BE3160
{
	func_83();
	func_84();

	if (!func_85(-1854368742) && !STREAMING::IS_LOAD_SCENE_ACTIVE())
		if (func_86(7))
			func_87(-1854368742);
		else
			func_88(-1854368742);

	if (func_89(&bLocal_102))
	{
		if (bLocal_102)
		{
			func_90(1467518375, true, 0, false, false, 0, false, false);
			func_90(-1880216355, true, 0, false, false, 0, false, false);
			func_90(1735175816, true, 0, false, false, 0, false, false);
			func_90(1373799284, true, 0, false, false, 0, false, false);
		}
	}

	return false;
}

void func_41(var uParam0, int iParam1) // Position - 0x160B Hash - 0xD10A9199 ^0x6508B54A
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;

	if (BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_91(Global_1940199, 32768) || func_91(Global_1940199, 16777216))
		return;

	if (func_92(uParam0, 1))
		return;

	uParam0->f_63 = uParam0->f_63 + 1;

	if (uParam0->f_63 < 10)
		return;

	uParam0->f_63 = 0;
	flag = false;
	flag2 = CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT();
	flag3 = func_93();

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
							if (!func_94(&uParam0->[i /*3*/], 1) && func_95(iParam1) && !func_96(iParam1, 16))
							{
								func_98(iParam1, func_97(), -1, false, -1, false);
								func_99(&uParam0->[i /*3*/], 1);
							}
						
							func_100(iParam1, false);
						}
					
						flag = true;
					}
				}
				break;
		
			default:
				break;
		}
	}

	func_101(flag);
	return;
}

int func_42(int iParam0) // Position - 0x174A Hash - 0xBF2BBCFF ^0xBF2BBCFF
{
	iParam0 = iParam0;
	return 1;
}

BOOL func_43() // Position - 0x1757 Hash - 0x1E5EE2B6 ^0xA7F309C
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

	if (func_102(unk))
		return true;

	return false;
}

BOOL func_44(int iParam0) // Position - 0x178D Hash - 0x6217D08D ^0x2FD90261
{
	if (iParam0 == 0)
	{
		func_103();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_112, 2048);
	
		if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("mpac_travel"), joaat("mpac_travel_012")))
		{
			switch (iLocal_112)
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
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_104(iLocal_112, false), 1);
					break;
			}
		}
	
		if (func_10(func_97()))
			func_11(func_97(), 8);
	
		func_105(iLocal_112, 4);
		func_105(iLocal_112, 8);
		func_101(false);
	
		if (func_45() == -1)
			func_106(false);
	
		func_107(iLocal_112);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_108(iLocal_112);
		func_109(iLocal_112);
	
		if (!func_110(iLocal_112, false))
			return false;
	}
	else if (!func_111(iLocal_112))
	{
		return false;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_45() // Position - 0x18A1 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

void func_46() // Position - 0x18AF Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_47() // Position - 0x18BB Hash - 0x9B63752F ^0x341C80A6
{
	if (Global_1572887.f_260.f_3 > 0)
		return true;

	if (Global_1572887.f_260.f_4 != 0)
		return true;

	return false;
}

BOOL func_48() // Position - 0x18E6 Hash - 0x5CB4FB5 ^0x16ECF26F
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_mission_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_deathmatch_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_race_controller"), -1, false, 0))
		return 1;

	return 0;
}

BOOL func_49(BOOL bParam0, BOOL bParam1) // Position - 0x1928 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_50(int iParam0) // Position - 0x1A08 Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_80(iParam0))
		return false;

	return func_112(iParam0, 8);
}

BOOL func_51(int iParam0) // Position - 0x1A26 Hash - 0xC67CC87B ^0x33ED18E1
{
	return Global_1893611.f_7 && iParam0 != false;
}

void func_52(int iParam0) // Position - 0x1A39 Hash - 0xDD4F2B2E ^0xED52CD7
{
	Global_1893611.f_7 = Global_1893611.f_7 - Global_1893611.f_7 && iParam0;
	return;
}

void func_53() // Position - 0x1A57 Hash - 0xF3464D2E ^0x4A55C9E7
{
	iLocal_103[0] = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_tentplain01x"), -868.0292f, -1273.7588f, 44.72966f, 11);
	iLocal_103[1] = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_tentplain01x"), -867.504f, -1279.3059f, 44.69716f, 11);
	iLocal_103[2] = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_tentplain01x"), -874.4065f, -1278.2664f, 44.10369f, 11);
	iLocal_103[3] = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_chair_crate15x"), -870.3456f, -1276.597f, 42.2979f, 11);
	return;
}

int func_54(Volume volParam0, int iParam1) // Position - 0x1ADB Hash - 0xFD70864E ^0xC496C257
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1940063[i /*2*/]) && Global_1940063[i /*2*/] == volParam0)
		{
			Global_1940063[i /*2*/].f_1 = iParam1;
			return i;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1940063[i /*2*/]))
		{
			Global_1940063[i /*2*/] = volParam0;
			Global_1940063[i /*2*/].f_1 = iParam1;
			return i;
		}
	}

	return -1;
}

void func_55(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B65 Hash - 0x5A64C5C8 ^0x6D52F178
{
	!bParam2;

	switch (iParam0)
	{
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_115();
			func_113(iParam0);
			break;
	
		case -1925798111:
			func_113(-1925798111);
			func_114(-919512195);
			func_114(420709909);
			func_114(1703426636);
			break;
	
		case -1838352012:
			func_114(-1674179981);
			func_114(-1835851517);
			func_113(-1838352012);
			break;
	
		case -1835851517:
			func_114(-1674179981);
			func_114(-1838352012);
			func_113(-1835851517);
			break;
	
		case -1738165526:
			func_113(-1738165526);
			func_114(0);
			func_114(473295046);
			break;
	
		case -1717960576:
			func_114(210001842);
			func_113(-1717960576);
			break;
	
		case -1674179981:
			func_114(-1835851517);
			func_114(-1838352012);
			func_113(-1674179981);
			break;
	
		case -1612662716:
			func_114(1822001510);
			func_113(-1612662716);
			break;
	
		case -1414537028:
			func_114(38162571);
			func_114(1350391819);
			func_114(54073871);
			func_113(-1414537028);
			break;
	
		case -1311865656:
			func_113(-1311865656);
			func_114(1509509592);
			func_114(-959357075);
			func_114(405586984);
			break;
	
		case -1271608261:
			func_114(-150493654);
			func_114(1846061697);
			func_114(-1145519186);
			func_113(-1271608261);
			break;
	
		case -1223121209:
			func_113(-1223121209);
			func_114(630808005);
			break;
	
		case -1145519186:
			func_114(-150493654);
			func_114(-1271608261);
			func_114(1846061697);
			func_113(-1145519186);
			break;
	
		case -1124061431:
			func_114(198200492);
			func_113(-1124061431);
			func_114(52706132);
			func_114(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_113(-1080627546);
			else
				func_114(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_114(-538889627);
			func_114(-538880323);
			func_114(-1056767524);
			func_113(iParam0);
			break;
	
		case -959357075:
			func_113(-959357075);
			func_114(1509509592);
			func_114(405586984);
			func_114(-1311865656);
			break;
	
		case -919512195:
			func_113(-919512195);
			func_114(-1925798111);
			func_114(420709909);
			func_114(1703426636);
			break;
	
		case -664252410:
			func_114(2019386373);
			func_114(2109952320);
			func_113(-664252410);
			break;
	
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_116();
			func_113(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_113(-524145696);
			else
				func_114(-524145696);
		
			func_114(1626481264);
			func_114(282809459);
			break;
	
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (bParam1)
			{
				func_113(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
			}
			else
			{
				func_114(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
				func_118(385812466);
				func_118(-1201452352);
			}
			break;
	
		case -502324015:
			func_114(1497516462);
			func_114(2016141805);
			func_114(1010885152);
			func_113(-502324015);
			break;
	
		case -434590080:
			func_114(1376646519);
			func_114(931649776);
			func_114(1743048395);
			func_114(449774763);
			func_113(-434590080);
			break;
	
		case -404698347:
			func_114(1306158345);
			func_114(1952610440);
			func_114(-223469678);
			func_114(1517904467);
			func_113(-404698347);
			break;
	
		case -259123672:
			func_114(198200492);
			func_114(-1124061431);
			func_114(52706132);
			func_113(-259123672);
			break;
	
		case -223469678:
			func_114(1306158345);
			func_114(1952610440);
			func_114(-404698347);
			func_114(1517904467);
			func_113(-223469678);
			break;
	
		case -150493654:
			func_114(-1271608261);
			func_114(1846061697);
			func_114(-1145519186);
			func_113(-150493654);
			break;
	
		case 0:
			func_113(0);
			func_114(473295046);
			func_114(-1738165526);
			break;
	
		case 38162571:
			func_114(-1414537028);
			func_114(1350391819);
			func_114(54073871);
			func_113(38162571);
			break;
	
		case 52706132:
			func_114(198200492);
			func_114(-1124061431);
			func_113(52706132);
			func_114(-259123672);
			break;
	
		case 54073871:
			func_114(-1414537028);
			func_114(38162571);
			func_114(1350391819);
			func_113(54073871);
			break;
	
		case 198200492:
			func_113(198200492);
			func_114(-1124061431);
			func_114(52706132);
			func_114(-259123672);
			break;
	
		case 210001842:
			func_114(-1717960576);
			func_113(210001842);
			break;
	
		case 280705402:
			func_114(1766284049);
			func_114(1926308480);
			func_113(280705402);
			break;
	
		case 282809459:
			func_113(282809459);
			func_114(1626481264);
			func_114(-524145696);
			break;
	
		case 405586984:
			func_113(405586984);
			func_114(1509509592);
			func_114(-959357075);
			func_114(-1311865656);
			break;
	
		case 420709909:
			func_113(420709909);
			func_114(-919512195);
			func_114(-1925798111);
			func_114(1703426636);
			break;
	
		case 439465264:
			if (func_117(1609506757))
				if (bParam1)
					func_113(439465264);
				else
					func_114(439465264);
			break;
	
		case 449774763:
			func_114(1376646519);
			func_114(931649776);
			func_114(-434590080);
			func_114(1743048395);
			func_113(449774763);
			break;
	
		case 473295046:
			func_113(473295046);
			func_114(0);
			func_114(-1738165526);
			break;
	
		case 630808005:
			func_113(630808005);
			func_114(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_113(885203519);
			else
				func_114(885203519);
			break;
	
		case 931649776:
			func_114(1376646519);
			func_114(-434590080);
			func_114(1743048395);
			func_114(449774763);
			func_113(931649776);
			break;
	
		case 932909855:
			func_113(932909855);
			func_114(2051822093);
			break;
	
		case 1010885152:
			func_114(1497516462);
			func_114(2016141805);
			func_113(1010885152);
			func_114(-502324015);
			break;
	
		case 1306158345:
			func_114(1952610440);
			func_114(-223469678);
			func_114(-404698347);
			func_114(1517904467);
			func_113(1306158345);
			break;
	
		case 1350391819:
			func_114(-1414537028);
			func_114(38162571);
			func_114(54073871);
			func_113(1350391819);
			break;
	
		case 1376646519:
			func_114(931649776);
			func_114(-434590080);
			func_114(1743048395);
			func_114(449774763);
			func_113(1376646519);
			break;
	
		case 1453909576:
			func_113(1453909576);
			func_114(1643531967);
			break;
	
		case 1497516462:
			func_113(1497516462);
			func_114(2016141805);
			func_114(1010885152);
			func_114(-502324015);
			break;
	
		case 1509509592:
			func_113(1509509592);
			func_114(405586984);
			func_114(-959357075);
			func_114(-1311865656);
			break;
	
		case 1517904467:
			func_114(1306158345);
			func_114(1952610440);
			func_114(-223469678);
			func_114(-404698347);
			func_113(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_114(439465264);
				func_113(1609506757);
			}
			else
			{
				func_114(1609506757);
				func_114(439465264);
			}
			break;
	
		case 1626481264:
			func_113(1626481264);
			func_114(-524145696);
			func_114(282809459);
			break;
	
		case 1643531967:
			func_113(1643531967);
			func_114(1453909576);
			break;
	
		case 1703426636:
			func_113(1703426636);
			func_114(-919512195);
			func_114(-1925798111);
			func_114(420709909);
			break;
	
		case 1743048395:
			func_114(1376646519);
			func_114(931649776);
			func_114(-434590080);
			func_114(449774763);
			func_113(1743048395);
			break;
	
		case 1766284049:
			func_114(280705402);
			func_114(1926308480);
			func_113(1766284049);
			break;
	
		case 1822001510:
			func_114(-1612662716);
			func_113(1822001510);
			break;
	
		case 1846061697:
			func_114(-150493654);
			func_114(-1271608261);
			func_114(-1145519186);
			func_113(1846061697);
			break;
	
		case 1926308480:
			func_114(1766284049);
			func_114(280705402);
			func_113(1926308480);
			break;
	
		case 1952610440:
			func_114(1306158345);
			func_114(-223469678);
			func_114(-404698347);
			func_114(1517904467);
			func_113(1952610440);
			break;
	
		case 2016141805:
			func_114(1497516462);
			func_113(2016141805);
			func_114(1010885152);
			func_114(-502324015);
			break;
	
		case 2019386373:
			func_114(-664252410);
			func_114(2109952320);
			func_113(2019386373);
			break;
	
		case 2051822093:
			func_113(2051822093);
			func_114(932909855);
			break;
	
		case 2109952320:
			func_114(2019386373);
			func_114(-664252410);
			func_113(2109952320);
			break;
	
		default:
			if (bParam1)
				func_113(iParam0);
			else
				func_114(iParam0);
			break;
	}

	return;
}

void func_56(Hash hParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, float fParam5, float fParam6, float fParam7, char* sParam8) // Position - 0x26AA Hash - 0x4E923139 ^0x4AEE5D47
{
	if (_IS_NULL_VECTOR(fParam5))
		return;

	hLocal_27 = hParam0;
	hLocal_27.f_6 = sParam1;
	hLocal_27.f_7 = sParam2;
	hLocal_27.f_8 = sParam3;
	hLocal_27.f_9 = sParam4;
	hLocal_27.f_11 = { fParam5 };
	hLocal_27.f_10 = sParam8;
	hLocal_27.f_15 = 1;
	return;
}

void func_57(int iParam0, int iParam1, int iParam2) // Position - 0x26F1 Hash - 0xB3DB2114 ^0x71B1003B
{
	var unk;
	int i;

	if (hLocal_27.f_5 >= 3)
		return;

	if (iParam2 < 0 || iParam2 >= 60)
		return;

	if (iParam1 < 0 || iParam1 >= 60)
		return;

	if (iParam0 < 0 || iParam0 > 23)
		return;

	func_120(&unk, iParam0);
	func_121(&unk, iParam1);
	func_122(&unk, iParam2);
	func_123(&unk);

	for (i = 0; i <= hLocal_27.f_5 - 1; i = i + 1)
	{
		func_123(&hLocal_27.f_1[i]);
	
		if (hLocal_27.f_1[i] == unk)
			return;
	}

	hLocal_27.f_1[hLocal_27.f_5] = unk;
	hLocal_27.f_5 = hLocal_27.f_5 + 1;
	func_124(&(hLocal_27.f_1), hLocal_27.f_5);
	return;
}

void func_58(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x27B6 Hash - 0x8511AC15 ^0xF0BD55F5
{
	var offsetFromCoordAndHeadingInWorldCoords;
	var offsetFromCoordAndHeadingInWorldCoords2;
	Vector3 vector;
	Vector3 vector2;

	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vector = { func_125(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords2, 0f) };
	vector2 = { func_126(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords2, 0f) };

	if (iParam4 == 1)
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vector, vector2, iParam5, 1);
	else if (iParam6 == 5)
		PATHFIND::SET_ROADS_IN_AREA(vector, vector2, iParam4, iParam7, iParam5);
	else
		PATHFIND::_0xAFE2AE66F6251C66(vector, vector2, iParam6, iParam7);

	return;
}

BOOL func_59(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x284C Hash - 0x156C7489 ^0x156C7489
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return 1;

	if (!func_80(iParam0))
		return 1;

	if (func_112(iParam0, 16))
		return 1;

	func_127(iParam0) && !func_128(iParam0);

	if (func_129(iParam0, &num, &num2, false, false))
	{
		if (func_130(iParam1))
			num = iParam1;
	
		if (func_130(iParam2))
			num2 = iParam2;
	
		if (Global_1896644 < num || Global_1896644 > num2)
			Global_1896644 = num;
	
		while (true)
		{
			if (!func_127(iParam0) || func_128(iParam0) || func_131(Global_1896644))
				func_132(Global_1896644, false);
		
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

BOOL func_60(int iParam0) // Position - 0x2944 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1940199 && iParam0 != false;
}

BOOL func_61(int iParam0) // Position - 0x2955 Hash - 0x9C8B9DFE ^0x5874CE32
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1900595;
}

struct<2> func_62(int iParam0) // Position - 0x2969 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_63(var uParam0, var uParam1) // Position - 0x297D Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

void func_64(int iParam0, float fParam1, float fParam2, float fParam3, Volume volParam4, int iParam5) // Position - 0x2987 Hash - 0x9EF36A74 ^0xC77BDF43
{
	if (_IS_NULL_VECTOR(fParam1))
		return;

	func_133(iParam0);
	Global_1939959.f_5[iParam0 /*11*/].f_1 = { fParam1 };
	Global_1939959.f_5[iParam0 /*11*/].f_4 = volParam4;
	Global_1939959.f_5[iParam0 /*11*/].f_5 = iParam5;
	Global_1939959.f_5[iParam0 /*11*/].f_6 = func_134(iParam5, iParam0);
	return;
}

void func_65(int iParam0, Volume volParam1, int iParam2, Volume volParam3, Volume volParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x29E5 Hash - 0x11E8E9ED ^0xEE89D83
{
	if (iParam0 == 9 && !(!func_69() && func_135()))
		if (func_136(255))
			if (VOLUME::IS_POINT_IN_VOLUME(volParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
				func_137(true, true);

	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_138(iParam0, true);
	Global_1051832.f_92[iParam0 /*75*/] = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_18 = func_139(iParam2, iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_24 = volParam1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { VOLUME::GET_VOLUME_COORDS(volParam1) };
	Global_1051832.f_92[iParam0 /*75*/].f_25 = volParam3;
	Global_1051832.f_92[iParam0 /*75*/].f_27 = volParam4;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = iParam2;
	Global_1051832.f_92[iParam0 /*75*/].f_63 = func_140(Global_1051832.f_92[iParam0 /*75*/].f_18);
	Global_1051832.f_92[iParam0 /*75*/].f_72 = iParam9;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;

	if (iParam8 <= 0f)
		iParam8 = func_141(iParam0);

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
	func_142(iParam0, 4);
	func_143(iParam0);
	return;
}

void func_66(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2B94 Hash - 0x95E39C5E ^0x11A3DB9C
{
	int num;

	num = func_144(iParam0);

	if (num < 0 || num >= 15)
		return;

	Global_1051832.f_92[iParam0 /*75*/].f_31[num] = func_145(hParam1, false, false);

	if (func_146(Global_1051832.f_92[iParam0 /*75*/].f_31[num]))
		if (!func_147(Global_1051832.f_92[iParam0 /*75*/].f_31[num]))
			func_90(Global_1051832.f_92[iParam0 /*75*/].f_31[num], false, iParam2, bParam3, true, 0, bParam4, false);

	Global_1051832.f_92[iParam0 /*75*/].f_47 = Global_1051832.f_92[iParam0 /*75*/].f_47 + 1;
	return;
}

void func_67(int iParam0, int iParam1) // Position - 0x2C38 Hash - 0x823E3440 ^0x4606FBC5
{
	func_148(&(Global_1051832.f_92[iParam0 /*75*/].f_49), iParam1);
	return;
}

int func_68(int iParam0, BOOL bParam1) // Position - 0x2C52 Hash - 0xD0FD971 ^0x657364CB
{
	int num;
	Hash hash;
	float num2;
	var unk;

	if (func_149(iParam0, 16384) || func_149(iParam0, 32768) || _IS_NULL_VECTOR(Global_1051832.f_92[iParam0 /*75*/].f_3))
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

	num = func_139(func_150(), iParam0);

	if (!bParam1 && func_151(num, &hash, &num2, &unk) || bParam1 && func_152(num, &hash, &num2, &unk))
	{
		func_153(iParam0, hash, unk, num2, false);
		Global_1051832.f_92[iParam0 /*75*/].f_3 = { unk };
		Global_1051832.f_92[iParam0 /*75*/].f_8 = hash;
	}

	return Global_1051832.f_92[iParam0 /*75*/].f_6;
}

BOOL func_69() // Position - 0x2D79 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_70() // Position - 0x2D8D Hash - 0x16C45944 ^0x16C45944
{
	return func_154(func_62(0));
}

void func_71() // Position - 0x2D9E Hash - 0xDE81FF54 ^0x39F3D85F
{
	int i;
	var unk;

	func_155(30);
	func_156(30);
	func_157(30);
	func_158(30);

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

void func_72(int iParam0) // Position - 0x2F65 Hash - 0xE7BDE93F ^0xE7BDE93F
{
	int i;
	Hash hash;
	float num;
	var unk;
	int num2;
	BOOL flag;

	for (i = 0; i < 4 && Global_1051832.f_3654[i /*19*/] != -1; i = i + 1)
	{
	}

	if (i == 4)
		return;

	Global_1051832.f_3654[i /*19*/].f_1 = 0;
	Global_1051832.f_3654[i /*19*/] = iParam0;

	if (func_151(Global_1051832.f_3654[i /*19*/], &hash, &num, &unk))
	{
		Global_1051832.f_3654[i /*19*/].f_6 = func_159(hash, unk, num, 0, 0, false);
		Global_1051832.f_3654[i /*19*/].f_2 = { unk };
		TASK::_0xA7479FB665361EDB(Global_1051832.f_3654[i /*19*/].f_6, 0);
		TASK::_0xE69FDA40AAC3EFC0(Global_1051832.f_3654[i /*19*/].f_6, 0);
	}

	num2 = func_160(Global_1051832.f_3654[i /*19*/]);
	flag = num2 != -1;

	if (flag)
	{
		Global_1051832.f_3654[i /*19*/].f_9 = num2;
	
		if (func_151(num2, &hash, &num, &unk))
		{
			Global_1051832.f_3654[i /*19*/].f_13 = func_159(hash, unk, num, 0, 0, false);
			Global_1051832.f_3654[i /*19*/].f_10 = { unk };
			TASK::_0xA7479FB665361EDB(Global_1051832.f_3654[i /*19*/].f_13, 0);
			TASK::_0xE69FDA40AAC3EFC0(Global_1051832.f_3654[i /*19*/].f_13, 0);
		}
	}

	Global_1051832.f_3654[i /*19*/].f_5 = func_140(Global_1051832.f_3654[i /*19*/]);

	if (!func_161(30, 4))
	{
		func_142(30, 4);
		func_143(30);
	}

	return;
}

void func_73(int iParam0) // Position - 0x30E2 Hash - 0xC9E85C7A ^0xC93E2B10
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_1051832.f_4447[i /*8*/] = -1;
		Global_1051832.f_4447[i /*8*/].f_3 = 0;
		Global_1051832.f_4447[i /*8*/].f_4 = 0;
	}

	switch (iParam0)
	{
		case 5:
			func_162(59);
			func_162(58);
			func_142(32, 4);
			func_143(32);
			break;
	
		case 26:
			func_162(72);
			func_162(73);
			func_142(32, 4);
			func_143(32);
			break;
	
		case 40:
			func_162(16);
			func_162(17);
			func_162(18);
			func_142(32, 4);
			func_143(32);
			break;
	
		case 87:
			func_162(132);
			func_142(32, 4);
			func_143(32);
			break;
	
		case 111:
			func_162(38);
			func_142(32, 4);
			func_143(32);
			break;
	}

	return;
}

int func_74(int iParam0, Volume volParam1, BOOL bParam2) // Position - 0x31D9 Hash - 0xEDF440C1 ^0x32727141
{
	PersChar persChar;

	if (func_45() != -1)
		return 0;

	if (!func_163(iParam0, false))
		return 0;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return 0;

	persChar = func_164(iParam0);

	if (persChar == 0)
		return 0;

	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(volParam1, persChar, bParam2);
	return 1;
}

void func_75(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x3227 Hash - 0x1E885EDE ^0x3AA465F4
{
	Global_1893611.f_182 = fParam0;
	Global_1893611.f_183 = fParam1;
	Global_1893611.f_184 = fParam2;
	Global_1893611.f_185 = fParam3;
	return;
}

BOOL func_76(int iParam0) // Position - 0x324F Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_165(iParam0))
		return false;

	return func_166(iParam0);
}

BOOL func_77(int iParam0) // Position - 0x326B Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_17418.f_2585[num2], offset);
}

void func_78(int iParam0, BOOL bParam1) // Position - 0x3295 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_167(iParam0, &num, &num2);

	if (!func_168(iParam0, num, num2, bParam1))
		return;

	func_169(num, num2);
	return;
}

void func_79(var uParam0, Volume volParam1, int iParam2) // Position - 0x32C2 Hash - 0x5828D351 ^0x6F1B8F85
{
	if (uParam0->f_61 >= 20)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	if (!func_170(iParam2))
		return;

	uParam0->[uParam0->f_61 /*3*/] = volParam1;
	uParam0->[uParam0->f_61 /*3*/].f_1 = iParam2;
	uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	uParam0->f_61 = uParam0->f_61 + 1;
	return;
}

BOOL func_80(int iParam0) // Position - 0x331B Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

void func_81() // Position - 0x3331 Hash - 0xC70365F7 ^0xC70365F7
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_171(i))
			Global_1900426[i] = -1;
	}

	return;
}

void func_82(int iParam0, int iParam1) // Position - 0x335E Hash - 0x3C8D4A90 ^0x3C8D4A90
{
	if (!func_171(iParam0))
		return;

	if (!func_172(iParam1))
		return;

	Global_1900426[iParam0] = iParam1;
	return;
}

void func_83() // Position - 0x338A Hash - 0x713D9ACE ^0x6D1B8FE1
{
	float entityAnimCurrentTime;

	if (!hLocal_27.f_15)
		return;

	if (hLocal_27.f_27 > MISC::GET_GAME_TIMER())
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(hLocal_27.f_17) && hLocal_27.f_14 > 1 && hLocal_27 != 0)
	{
		if (func_173() && func_174(Global_34, hLocal_27.f_11) < 100f)
			if (hLocal_27.f_18 == 0)
				hLocal_27.f_18 = ENTITY::PIN_CLOSEST_MAP_ENTITY(hLocal_27, hLocal_27.f_11, 11);
			else if (ENTITY::IS_MAP_ENTITY_PINNED(hLocal_27.f_18))
				hLocal_27.f_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(hLocal_27.f_18));
	
		hLocal_27.f_27 = MISC::GET_GAME_TIMER() + 1800;
	}

	switch (hLocal_27.f_14)
	{
		case 0:
			func_175();
			hLocal_27.f_14 = 1;
			break;
	
		case 1:
			if (func_176())
				hLocal_27.f_14 = 2;
			break;
	
		case 2:
			if (func_177())
			{
				hLocal_27.f_14 = 3;
				hLocal_27.f_24 = 0;
				hLocal_27.f_21 = 0;
				hLocal_27.f_22 = func_179(func_178());
			
				if (hLocal_27.f_22 > 12)
					hLocal_27.f_22 = hLocal_27.f_22 % 12;
			}
			break;
	
		case 3:
			hLocal_27.f_25 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(hLocal_27.f_17))
			{
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(hLocal_27.f_17))
				{
					hLocal_27.f_25 = 0;
					ENTITY::PLAY_ENTITY_ANIM(hLocal_27.f_17, hLocal_27.f_7, hLocal_27.f_6, 1000f, false, true, false, 0, 0);
					hLocal_27.f_14 = 4;
				}
			}
		
			if (hLocal_27.f_21 >= hLocal_27.f_22)
				hLocal_27.f_14 = 2;
			break;
	
		case 4:
			if (func_180(hLocal_27.f_17, hLocal_27.f_6, hLocal_27.f_7, 0))
			{
				ENTITY::PLAY_ENTITY_ANIM(hLocal_27.f_17, hLocal_27.f_8, hLocal_27.f_6, 1000f, true, true, false, 0, 0);
				hLocal_27.f_23 = MISC::GET_GAME_TIMER() + 1800;
				hLocal_27.f_26 = 0;
				hLocal_27.f_14 = 5;
			}
			break;
	
		case 5:
			entityAnimCurrentTime = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(hLocal_27.f_17, hLocal_27.f_6, hLocal_27.f_8);
		
			if (entityAnimCurrentTime > 0.5f)
			{
				if (hLocal_27.f_26)
				{
					hLocal_27.f_21 = hLocal_27.f_21 + 1;
					hLocal_27.f_26 = 0;
				}
			}
			else if (!hLocal_27.f_26 && entityAnimCurrentTime > 0.05f)
			{
				hLocal_27.f_21 = hLocal_27.f_21 + 1;
				hLocal_27.f_26 = 1;
			}
		
			if (hLocal_27.f_21 >= hLocal_27.f_22 && func_180(hLocal_27.f_17, hLocal_27.f_6, hLocal_27.f_8, 0.02f) || hLocal_27.f_26)
			{
				ENTITY::PLAY_ENTITY_ANIM(hLocal_27.f_17, hLocal_27.f_9, hLocal_27.f_6, 8f, false, false, false, 0, 0);
				hLocal_27.f_14 = 2;
			}
			break;
	}

	if (hLocal_27.f_25 && hLocal_27.f_14 > 2)
	{
		if (AUDIO::_HAS_SOUND_AUDIO_NAME_FINISHED(hLocal_27.f_10, "CHURCH_BELL_SOUNDS") && hLocal_27.f_24 < MISC::GET_GAME_TIMER())
		{
			hLocal_27.f_24 = MISC::GET_GAME_TIMER() + 1800;
			AUDIO::_PLAY_SOUND_FROM_POSITION(hLocal_27.f_10, hLocal_27.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			hLocal_27.f_21 = hLocal_27.f_21 + 1;
		}
	}

	return;
}

void func_84() // Position - 0x3655 Hash - 0xD96104 ^0xFCDA41A4
{
	int i;

	if (func_181())
	{
		for (i = 0; i < iLocal_103; i = i + 1)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_103[i]), true);
			ENTITY::FREEZE_ENTITY_POSITION(ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_103[i]), true);
		}
	
		bLocal_108 = true;
	}

	return;
}

BOOL func_85(Hash hParam0) // Position - 0x3698 Hash - 0xBB272513 ^0x1053F3D3
{
	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	return STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(hParam0, Global_34);
}

BOOL func_86(int iParam0) // Position - 0x36B6 Hash - 0x259E3CFD ^0x259E3CFD
{
	int num;

	if (iParam0 == -1)
		return true;

	if (iParam0 == 0)
		return false;

	num = func_179(func_178());

	if (func_182(iParam0, 1))
		if (num >= 6 && num < 12)
			return true;

	if (func_182(iParam0, 2))
		if (num >= 12 && num < 18)
			return true;

	if (func_182(iParam0, 4096))
		if (num >= 11 && num < 14)
			return true;

	if (func_182(iParam0, 4))
		if (num >= 18 && num < 24)
			return true;

	if (func_182(iParam0, 8))
		if (num >= 0 && num < 6)
			return true;

	if (func_182(iParam0, 16))
		if (num >= 20 || num < 7)
			return true;

	if (func_182(iParam0, 1024))
		if (num >= 5 && num < 12)
			return true;

	if (func_182(iParam0, 32))
		if (num >= 5 && num < 22)
			return true;

	if (func_182(iParam0, 64))
		if (num >= 6 && num < 20)
			return true;

	if (func_182(iParam0, 128))
		if (num >= 21 || num < 5)
			return true;

	if (func_182(iParam0, 256))
		if (num >= 22 && num < 24)
			return true;

	if (func_182(iParam0, 512))
		if (num >= 0 && num < 5)
			return true;

	if (func_182(iParam0, 8192))
		if (num >= 6 && num < 20)
			return true;

	if (func_182(iParam0, 2048))
		if (num >= 1 && num < 3)
			return true;

	if (func_182(iParam0, 16384))
		if (num >= 6 && num < 24)
			return true;

	if (func_182(iParam0, 32768))
		if (num >= 21 || num < 6)
			return true;

	if (func_182(iParam0, 65536))
		if (num >= 18 && num < 19)
			return true;

	return false;
}

void func_87(Hash hParam0) // Position - 0x390A Hash - 0xC4CA1F1E ^0xEF996C60
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_183(hParam0);

	return;
}

void func_88(Hash hParam0) // Position - 0x3923 Hash - 0x6C79B149 ^0x6F4E7B45
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_184(hParam0);

	return;
}

BOOL func_89(var uParam0) // Position - 0x393B Hash - 0xB4769808 ^0xB4769808
{
	if (func_185())
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

void func_90(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x396B Hash - 0xD777F4CF ^0xBFF3124C
{
	func_145(hParam0, false, false);

	if (func_146(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_186(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_187(hParam0, true);
			else
				func_188(hParam0, true);
		else
			func_189(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_190())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

BOOL func_91(int iParam0, int iParam1) // Position - 0x39F6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_92(var uParam0, int iParam1) // Position - 0x3A05 Hash - 0x718DD1EF ^0x7E064505
{
	return uParam0->f_62 && iParam1 != false;
}

BOOL func_93() // Position - 0x3A16 Hash - 0x463DA432 ^0x857E19AF
{
	return func_91(Global_1940199, 8192);
}

BOOL func_94(var uParam0, int iParam1) // Position - 0x3A29 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_95(int iParam0) // Position - 0x3A3A Hash - 0x97598EC0 ^0xB0C0A04B
{
	if (!func_80(iParam0))
		return false;

	return Global_1887363[iParam0 /*36*/].f_21 == 1 || Global_1887363[iParam0 /*36*/].f_21 == 2 && !func_191(iParam0);
}

BOOL func_96(int iParam0, int iParam1) // Position - 0x3A7A Hash - 0xA98B69C6 ^0x8AB18C7C
{
	if (iParam0 < 0 || iParam0 >= 150)
		return false;

	return Global_1887363[iParam0 /*36*/].f_22 && iParam1 != false;
}

int func_97() // Position - 0x3AA7 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1896646.f_41;
}

void func_98(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x3AB5 Hash - 0xECDF54D9 ^0x3586B859
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

	if (!func_192())
		return;

	str = func_193(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (bParam3)
			return;
	
		str = "DISTRICT_GRIZZLIES";
	}

	if (!func_194(iParam4))
		if (func_80(iParam0))
			iParam4 = func_195(func_9(iParam0));
		else
			iParam4 = func_195(iParam1);

	if (func_194(iParam4))
		num = func_196(iParam4);

	if (flag && bParam3)
	{
		str2 = func_198(func_197(iParam2));
	}
	else if (func_199(iParam1, 2) || func_200(iParam4, 2) && !Global_1893611.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1893611.f_9 = 1;
	}
	else if (func_80(iParam0) && func_112(iParam0, 16777216) && !Global_1893611.f_9)
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
		num2 = func_179(func_178());
		num3 = func_201(func_178());
	
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
				temperatureAtCoords = func_202(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(674, str3, num2, func_203(&unk, joaat("COLOR_PURE_WHITE")), str4, func_203(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str3 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_202(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(162, str3, num2, func_203(&unk, joaat("COLOR_PURE_WHITE")), func_203(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1893611.f_9 = 0;
	}

	Global_1939102.f_145 = func_204(str, str2, 4000, 0, 0, 0, false, true);
	return;
}

void func_99(var uParam0, int iParam1) // Position - 0x3D26 Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_100(int iParam0, BOOL bParam1) // Position - 0x3D39 Hash - 0x2CB19C60 ^0x579311F8
{
	if (Global_1572887.f_12 && func_45() == 0)
		return;

	if (!func_205(iParam0))
		return;

	if (func_112(iParam0, 32))
		return;

	func_21(iParam0, 32);
	func_206(&Global_1940199, 16384);
	func_208(func_207(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_208(func_207(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_208(func_207(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_208(func_207(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_208(func_207(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_208(func_207(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_208(func_207(joaat("discovered"), joaat("new_austin_areas")), 1);
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

void func_101(BOOL bParam0) // Position - 0x4514 Hash - 0x8A5944E9 ^0x8A5944E9
{
	if (bParam0)
		Global_1893611 = Global_1893611 | 1;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & 1;

	return;
}

BOOL func_102(int iParam0) // Position - 0x453D Hash - 0x5000025C ^0x5000025C
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

void func_103() // Position - 0x4582 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

Hash func_104(int iParam0, BOOL bParam1) // Position - 0x458A Hash - 0xE1D12727 ^0xC0A2F1C4
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

void func_105(int iParam0, BOOL bParam1) // Position - 0x4D4F Hash - 0x5DE9DDE5 ^0xCE0029B2
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] - Global_8130[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] - Global_1072759.f_19611[iParam0 /*11*/] && bParam1;
	return;
}

void func_106(BOOL bParam0) // Position - 0x4DA2 Hash - 0x3703A155 ^0x3703A155
{
	if (bParam0)
		Global_1893611 = Global_1893611 | 2;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & 2;

	return;
}

void func_107(int iParam0) // Position - 0x4DCB Hash - 0x401FF1CD ^0xAC4C6419
{
	func_210(func_209(iParam0, true, true));
	func_75(0.775f, 0.2f, 0.025f, 0f);
	func_211(&uLocal_55, false);
	func_212();
	func_213();

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_97))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(volLocal_97);
		VOLUME::DELETE_VOLUME(volLocal_97);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_88))
		MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(anLocal_89);

	iParam0 = iParam0;
	func_58(uLocal_99, 5f, 1, 0, 5, 0);
	return;
}

void func_108(int iParam0) // Position - 0x4E37 Hash - 0x1BC1B95A ^0xE45E58CB
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1939959.f_5[i /*11*/].f_5 == iParam0)
			func_133(i);
	}

	return;
}

void func_109(int iParam0) // Position - 0x4E68 Hash - 0x602FEA97 ^0x32262E5A
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1915656.f_3[i /*447*/].f_8 == iParam0)
			func_214(i);
	}

	return;
}

BOOL func_110(int iParam0, BOOL bParam1) // Position - 0x4E9B Hash - 0xF908F79F ^0xFA4C6B92
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return true;

	if (!func_80(iParam0))
		return true;

	if (func_129(iParam0, &num, &num2, false, false))
	{
		if (Global_1896644.f_1 < num || Global_1896644.f_1 > num2)
			Global_1896644.f_1 = num;
	
		while (true)
		{
			if (!func_215(Global_1896644.f_1, 16))
				func_216(Global_1896644.f_1, false);
		
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

BOOL func_111(int iParam0) // Position - 0x4F51 Hash - 0x3CF47CAC ^0x9AC30644
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (func_217(i) || func_218(i))
		{
		}
		else
		{
			switch (i)
			{
				case 30:
					func_71();
					break;
			
				case 32:
					func_219();
					break;
			
				case 34:
					break;
			
				default:
					if (Global_1051832.f_92[i /*75*/].f_2 == iParam0)
						func_138(i, false);
					break;
			}
		}
	}

	return true;
}

BOOL func_112(int iParam0, BOOL bParam1) // Position - 0x4FCB Hash - 0x34341F7C ^0xD1267D8C
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

void func_113(int iParam0) // Position - 0x4FFC Hash - 0x42AEEE5A ^0xDFF1629D
{
	int num;
	int num2;
	int offset;

	num = func_220(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_114(int iParam0) // Position - 0x502F Hash - 0x42AEEE5A ^0xD77F9173
{
	int num;
	int num2;
	int offset;

	num = func_220(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;
	MISC::CLEAR_BIT(&Global_38.f_118[num2], offset);
	Global_1939596 = 0;
	return;
}

void func_115() // Position - 0x5062 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_114(-939420910);
	func_114(-1187950766);
	func_114(356365161);
	func_114(753127042);
	func_114(-2038424081);
	func_114(1884271742);
	func_114(459290420);
	return;
}

void func_116() // Position - 0x50A9 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_114(704802028);
	func_114(588987611);
	func_114(2008888900);
	func_114(1649996811);
	func_114(227918160);
	func_114(168171957);
	func_114(1193080109);
	func_114(-491981251);
	func_114(-639037538);
	func_114(-618620429);
	return;
}

BOOL func_117(int iParam0) // Position - 0x510B Hash - 0x319C5EC2 ^0xB18B248
{
	int num;
	int num2;
	int offset;

	num = func_220(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_221(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_222(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

void func_118(Hash hParam0) // Position - 0x518A Hash - 0xDB9A74EC ^0x13B3F16D
{
	if (func_146(hParam0) && func_223())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x51AA Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_120(var uParam0, int iParam1) // Position - 0x51D4 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_121(var uParam0, int iParam1) // Position - 0x520F Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_122(var uParam0, int iParam1) // Position - 0x5248 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

void func_123(var uParam0) // Position - 0x5280 Hash - 0x15E0BDB6 ^0x54C508A3
{
	int num;

	if (*uParam0 == -15)
		return;

	num = func_178();
	func_225(uParam0, func_224(num));
	func_227(uParam0, func_226(num));
	func_229(uParam0, func_228(num));
	return;
}

void func_124(var uParam0, int iParam1) // Position - 0x52BE Hash - 0xEC9B852E ^0xEC9B852E
{
	BOOL flag;
	int i;
	int j;
	var unk;

	if (iParam1 < 2)
		return;

	flag = true;
	i = 0;
	j = 0;

	while (flag)
	{
		for (i = iParam1 - 1; i >= 0; i = i + -1)
		{
			flag = false;
		
			for (j = 0; j <= i - 1; j = j + 1)
			{
				if (uParam0->[j] > uParam0->[j + 1])
				{
					unk = uParam0->[j];
					uParam0->[j] = uParam0->[j + 1];
					uParam0->[j + 1] = unk;
					flag = true;
				}
			}
		}
	}

	return;
}

Vector3 func_125(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6) // Position - 0x5341 Hash - 0x4E0C144A ^0xA773B6E0
{
	float num;

	if (fParam0 < fParam3)
		num = fParam0 - fParam6;
	else
		num = fParam3 - fParam6;

	if (fParam0.f_1 < fParam3.f_1)
		num.f_1 = fParam0.f_1 - fParam6;
	else
		num.f_1 = fParam3.f_1 - fParam6;

	if (fParam0.f_2 < fParam3.f_2)
		num.f_2 = fParam0.f_2 - fParam6;
	else
		num.f_2 = fParam3.f_2 - fParam6;

	return num;
}

Vector3 func_126(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6) // Position - 0x53B0 Hash - 0xE12250AF ^0x6EB97E6A
{
	float num;

	if (fParam0 > fParam3)
		num = fParam0 + fParam6;
	else
		num = fParam3 + fParam6;

	if (fParam0.f_1 > fParam3.f_1)
		num.f_1 = fParam0.f_1 + fParam6;
	else
		num.f_1 = fParam3.f_1 + fParam6;

	if (fParam0.f_2 > fParam3.f_2)
		num.f_2 = fParam0.f_2 + fParam6;
	else
		num.f_2 = fParam3.f_2 + fParam6;

	return num;
}

BOOL func_127(int iParam0) // Position - 0x541F Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_80(iParam0))
		return false;

	return func_112(iParam0, 33554432);
}

BOOL func_128(int iParam0) // Position - 0x5440 Hash - 0xA5F6A570 ^0xA5F6A570
{
	if (!func_80(iParam0))
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

BOOL func_129(int iParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5493 Hash - 0xCBEA69A ^0xCBEA69A
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

BOOL func_130(int iParam0) // Position - 0x5B53 Hash - 0x958B152F ^0x888D9460
{
	return iParam0 > -1 && iParam0 < 948;
}

BOOL func_131(int iParam0) // Position - 0x5B6A Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

int func_132(int iParam0, BOOL bParam1) // Position - 0x5BAD Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_130(iParam0))
		return 0;

	if (!func_215(iParam0, 2))
		return 0;

	if (func_215(iParam0, 32) && !bParam1)
	{
		func_231(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_230(iParam0)));
	
		if (func_45() == -1)
		{
			if (func_215(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_164(iParam0));
				func_232(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_164(iParam0));
		}
	
		return 0;
	}

	if (!func_233(iParam0) && func_45() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_164(iParam0)))
	{
		func_232(iParam0, 128);
		return 1;
	}

	func_231(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_230(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_164(iParam0));

	if (func_215(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_164(iParam0));
		func_232(iParam0, 2048);
	}

	return 1;
}

void func_133(int iParam0) // Position - 0x5C98 Hash - 0x3E288458 ^0xC75F9664
{
	func_234(Global_1939959.f_5[iParam0 /*11*/].f_6, true);
	func_235(Global_1939959.f_5[iParam0 /*11*/].f_6, false);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1939959.f_5[iParam0 /*11*/].f_8))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1939959.f_5[iParam0 /*11*/].f_8);

	func_236(iParam0, 8192);
	func_236(iParam0, 32768);
	func_236(iParam0, 524288);
	func_236(iParam0, 1048576);
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

int func_134(int iParam0, int iParam1) // Position - 0x5D78 Hash - 0x19643788 ^0x19643788
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
			
				case 1:
					return 6;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

BOOL func_135() // Position - 0x5E5B Hash - 0x16C45944 ^0x16C45944
{
	return func_237(func_62(0));
}

BOOL func_136(int iParam0) // Position - 0x5E6C Hash - 0x4B08C8C4 ^0x4B08C8C4
{
	return !func_238(iParam0);
}

void func_137(BOOL bParam0, BOOL bParam1) // Position - 0x5E7B Hash - 0x2F17103B ^0x1C4D2C36
{
	if (func_239(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_240(0);
	}
	else
	{
		if (bParam1)
			func_241(0, false, 0, true);
	
		func_242(0);
		func_243(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_244(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_245(Global_1102813.f_3839, 36);
	func_246(Global_1102813.f_3878, 36);
	return;
}

void func_138(int iParam0, BOOL bParam1) // Position - 0x5FC6 Hash - 0x3F1AD274 ^0x4EDF9754
{
	BOOL flag;
	Entity propForScenarioPoint;
	int i;
	int num;

	flag = func_247(iParam0) && !bParam1;

	if (!flag && !func_149(iParam0, 65536))
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
	else if (func_161(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
	
		if (func_149(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
	
		if (func_149(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
		if (func_149(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);

	if (func_161(iParam0, 16384) && !flag)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		
			if (ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&propForScenarioPoint);
		
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_248(iParam0, 16384);
	}

	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	num = func_144(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_118(Global_1051832.f_92[iParam0 /*75*/].f_31[i]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[i] = 0;
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}

	func_249(iParam0);

	if (func_149(iParam0, 262144))
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	else
		func_155(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_250(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	Global_1051832.f_92[iParam0 /*75*/].f_50 = Global_1051832.f_92[iParam0 /*75*/].f_50 & 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 & 2113536;
	func_158(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
	return;
}

int func_139(int iParam0, int iParam1) // Position - 0x6375 Hash - 0x274C8E8A ^0x274C8E8A
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

int func_140(int iParam0) // Position - 0x6CDB Hash - 0xF53EDEBA ^0xF53EDEBA
{
	if (!func_251(iParam0))
		return 0;

	if (Global_1051832.f_4492[iParam0] == 0)
		Global_1051832.f_4492[iParam0] = func_252(iParam0);

	return Global_1051832.f_4492[iParam0];
}

int func_141(int iParam0) // Position - 0x6D1C Hash - 0xFE1A3B7C ^0xFE1A3B7C
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

void func_142(int iParam0, int iParam1) // Position - 0x6DB9 Hash - 0xDCFC48D0 ^0xCB4861A2
{
	!func_161(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1;
	return;
}

void func_143(int iParam0) // Position - 0x6DE8 Hash - 0x93134738 ^0x938C636D
{
	Global_1051832[Global_1051832.f_41] = iParam0;
	Global_1051832.f_41 = Global_1051832.f_41 + 1;

	if (Global_1051832.f_41 >= 40)
		Global_1051832.f_41 = 40 - 1;

	return;
}

int func_144(int iParam0) // Position - 0x6E21 Hash - 0x1B04F1B9 ^0x527C4649
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

Hash func_145(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6E35 Hash - 0xEC5804B5 ^0xE95C34A9
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

BOOL func_146(Hash hParam0) // Position - 0x6ED9 Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_253(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

BOOL func_147(Hash hParam0) // Position - 0x6EF4 Hash - 0x51587F69 ^0xAFC63473
{
	func_145(hParam0, false, false);

	if (func_146(hParam0))
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) == 0;

	return false;
}

void func_148(int iParam0, int iParam1) // Position - 0x6F1D Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_149(int iParam0, int iParam1) // Position - 0x6F2E Hash - 0xECB143B0 ^0x238A26BC
{
	return Global_1051832.f_92[iParam0 /*75*/].f_49 && iParam1 != false;
}

int func_150() // Position - 0x6F47 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

BOOL func_151(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x6F55 Hash - 0xC625CFBA ^0x238FC140
{
	return func_254(iParam0, "sHash", phParam1, "fHeading", pfParam2, "vPos", pvParam3);
}

BOOL func_152(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x6F75 Hash - 0xC625CFBA ^0x58AC5335
{
	return func_254(iParam0, "sClosedHash", phParam1, "fClosedHeading", pfParam2, "vClosedPos", pvParam3);
}

void func_153(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0x6F95 Hash - 0xCAA352A8 ^0x24D53CD4
{
	if (bParam6)
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam2, &(vParam2.f_2), false);

	Global_1051832.f_92[iParam0 /*75*/].f_6 = func_159(hParam1, vParam2, fParam5, 0, 0, false);
	Global_1915656.f_3[iParam0 /*447*/].f_16 = Global_1051832.f_92[iParam0 /*75*/].f_6;
	TASK::_SET_SCENARIO_POINT_FLAG(Global_1051832.f_92[iParam0 /*75*/].f_6, 23, true);
	TASK::_0xA7479FB665361EDB(Global_1051832.f_92[iParam0 /*75*/].f_6, 0);
	func_142(iParam0, 16384);
	return;
}

BOOL func_154(var uParam0, var uParam1) // Position - 0x7011 Hash - 0x3EFAE063 ^0x3EFAE063
{
	return func_255(uParam0, 9, 12);
}

void func_155(int iParam0) // Position - 0x7024 Hash - 0xEAA35366 ^0xF96CFACE
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
	return;
}

void func_156(int iParam0) // Position - 0x7039 Hash - 0xEAA35366 ^0x5C75D9EC
{
	Global_1051832.f_92[iParam0 /*75*/].f_50 = 0;
	return;
}

void func_157(int iParam0) // Position - 0x704E Hash - 0xEAA35366 ^0x1439656C
{
	Global_1051832.f_92[iParam0 /*75*/].f_1 = 0;
	return;
}

void func_158(int iParam0) // Position - 0x7063 Hash - 0xF0369B46 ^0xC17C02F0
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

int func_159(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x70E2 Hash - 0x9EF7DC49 ^0x7633F111
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, iParam5, iParam6, bParam7);
}

int func_160(int iParam0) // Position - 0x70FC Hash - 0x8CBBEB73 ^0x8CBBEB73
{
	switch (iParam0)
	{
		case 10:
			return 11;
	
		case 36:
			return 37;
	
		case 54:
			return 55;
	
		case 56:
			return 57;
	
		case 79:
			return 80;
	
		case 94:
			return 95;
	
		case 105:
			return 106;
	
		default:
		
	}

	return -1;
}

BOOL func_161(int iParam0, int iParam1) // Position - 0x715A Hash - 0xECB143B0 ^0x5DBA9B53
{
	return Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1 != false;
}

int func_162(int iParam0) // Position - 0x7173 Hash - 0x71D166E0 ^0x71D166E0
{
	Hash hash;
	float num;
	var unk;
	int i;
	int num2;
	int num3;
	int num4;

	unk = { 0f, 0f, 0f };

	if (!func_151(iParam0, &hash, &num, &unk) || _IS_NULL_VECTOR(unk))
		return 0;

	num2 = 4;

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_1051832.f_4447[i /*8*/] == -1)
		{
			num2 = i;
			break;
		}
	}

	if (num2 == 4)
		return 0;

	Global_1051832.f_4447[num2 /*8*/] = iParam0;
	Global_1051832.f_4447[num2 /*8*/].f_6 = func_159(hash, unk, num, 0, 0, false);
	Global_1051832.f_4447[num2 /*8*/].f_5 = hash;
	TASK::_SET_SCENARIO_POINT_FLAG(Global_1051832.f_4447[num2 /*8*/].f_6, 23, true);
	TASK::_0xA7479FB665361EDB(Global_1051832.f_4447[num2 /*8*/].f_6, 0);
	func_142(32, 16384);
	num3 = 0;
	num4 = 0;

	if (func_256(iParam0, &num3, &num4))
	{
		Global_1051832.f_4447[num2 /*8*/].f_3 = num3;
		Global_1051832.f_4447[num2 /*8*/].f_4 = num4;
	}

	return 1;
}

BOOL func_163(int iParam0, BOOL bParam1) // Position - 0x7272 Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_45() != -1)
		return false;

	if (!func_130(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_164(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_257(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_164(iParam0));
}

PersChar func_164(int iParam0) // Position - 0x72CA Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_130(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/].f_1;
}

BOOL func_165(int iParam0) // Position - 0x72EA Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_166(int iParam0) // Position - 0x72FD Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_167(int iParam0, var uParam1, var uParam2) // Position - 0x7327 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_168(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x7343 Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_258(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_259(iParam0))
		return false;

	if (func_260(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_261(iParam0, 1) || func_262(32768))
		if (!func_261(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_263())
		return false;

	return true;
}

void func_169(int iParam0, int iParam1) // Position - 0x73E5 Hash - 0x978E21B ^0xA1438975
{
	var address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_170(int iParam0) // Position - 0x7409 Hash - 0x1F2EC350 ^0x1F2EC350
{
	return iParam0 > -1 && iParam0 < 12;
}

BOOL func_171(int iParam0) // Position - 0x741F Hash - 0x532FA545 ^0x532FA545
{
	return iParam0 > -1 && iParam0 < 16;
}

BOOL func_172(int iParam0) // Position - 0x7435 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

BOOL func_173() // Position - 0x7441 Hash - 0xBC31C102 ^0xCA87444F
{
	if (func_45() == -1)
		return true;

	return NETWORK::CAN_REGISTER_MISSION_OBJECTS(1);
}

float func_174(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x745A Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_175() // Position - 0x7478 Hash - 0xFB9488B ^0x41D0335B
{
	if (hLocal_27 != 0)
	{
		STREAMING::REQUEST_ANIM_DICT(hLocal_27.f_6);
		STREAMING::REQUEST_MODEL(hLocal_27, false);
		hLocal_27.f_16 = 1;
	}

	return;
}

BOOL func_176() // Position - 0x749A Hash - 0xA7BA5F93 ^0x55DAA01B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(hLocal_27.f_6))
		return STREAMING::HAS_ANIM_DICT_LOADED(hLocal_27.f_6);

	return true;
}

BOOL func_177() // Position - 0x74BA Hash - 0xDDF0BD94 ^0x1857D187
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (hLocal_27.f_5 <= 0)
		return false;

	num = func_178();
	num2 = func_179(num);
	num3 = func_201(num);

	for (i = 0; i <= hLocal_27.f_5 - 1; i = i + 1)
	{
		num4 = func_179(hLocal_27.f_1[i]);
		num5 = func_201(hLocal_27.f_1[i]);
	
		if (num4 == num2 && MISC::ABSI(num3 - num5) <= 5)
			return true;
	}

	return false;
}

int func_178() // Position - 0x7534 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

int func_179(int iParam0) // Position - 0x7540 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_180(Entity eParam0, const char* sParam1, const char* sParam2, int iParam3) // Position - 0x7553 Hash - 0xCC00FD60 ^0xA5B0B1A1
{
	float entityAnimCurrentTime;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(eParam0, sParam1, sParam2, 1))
		return false;

	entityAnimCurrentTime = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(eParam0, sParam1, sParam2);
	return MISC::ABSF(1f - entityAnimCurrentTime - iParam3) < 0.01f;
}

BOOL func_181() // Position - 0x7599 Hash - 0xCC521221 ^0xC8956228
{
	int i;

	if (bLocal_108)
		return false;

	for (i = 0; i < iLocal_103; i = i + 1)
	{
		if (!ENTITY::IS_MAP_ENTITY_PINNED(iLocal_103[i]))
			return false;
	}

	return true;
}

BOOL func_182(int iParam0, int iParam1) // Position - 0x75D0 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_183(Hash hParam0) // Position - 0x75DF Hash - 0x4D60F41E ^0xCD4529DF
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_264())
		return 0;

	STREAMING::REQUEST_IPL_HASH(hParam0);
	return 0;
}

int func_184(Hash hParam0) // Position - 0x7606 Hash - 0xC7B42F6B ^0x68D64A95
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_264())
		return 0;

	STREAMING::REMOVE_IPL_HASH(hParam0);
	return 0;
}

BOOL func_185() // Position - 0x762E Hash - 0x2C6DE8F6 ^0xBF042FB1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

void func_186(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x764A Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_146(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_187(Hash hParam0, BOOL bParam1) // Position - 0x7682 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_146(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_188(Hash hParam0, BOOL bParam1) // Position - 0x76B0 Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_146(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_189(Hash hParam0, BOOL bParam1) // Position - 0x76DE Hash - 0x4844A91D ^0x50E23246
{
	if (func_146(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_190() // Position - 0x770C Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_191(int iParam0) // Position - 0x7715 Hash - 0x6A6EE485 ^0x6A6EE485
{
	if (iParam0 == 22 || iParam0 == 39 && !func_265())
		return true;

	if (iParam0 == 66)
		return true;

	return false;
}

BOOL func_192() // Position - 0x774A Hash - 0xB5F1D039 ^0x59A8BE9D
{
	if (Global_13)
		return false;

	if (!func_266())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939102.f_75.f_55))
		return false;

	if (func_267(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_193(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x778D Hash - 0xAA95C4FB ^0xB3C7DDA0
{
	const char* str;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
		str = func_268(Global_1893611.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) && bParam4)
		str = func_270(func_269(Global_34));

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (!func_271(iParam0) || func_76(44))
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

BOOL func_194(int iParam0) // Position - 0x81F6 Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_195(int iParam0) // Position - 0x820B Hash - 0xA08D7C4E ^0xA08D7C4E
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

int func_196(int iParam0) // Position - 0x82C6 Hash - 0xDE3AB7BF ^0xBF88E2D7
{
	int i;
	var gamerHandle;
	int bountyData;

	if (!func_194(iParam0))
		return -1;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/];

	i = 0;
	gamerHandle = { func_272(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1072759.f_21262[i /*12*/] = bountyData;
	}

	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_197(int iParam0) // Position - 0x8334 Hash - 0x653F925B ^0x653F925B
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

char* func_198(int iParam0) // Position - 0x848F Hash - 0x21CE226B ^0x59A41A60
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

BOOL func_199(int iParam0, int iParam1) // Position - 0x84CA Hash - 0x420CBA68 ^0x9F9619A9
{
	if (!func_10(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && iParam1 != false;

	return Global_1072759.f_21335[iParam0] && iParam1 != false;
}

BOOL func_200(int iParam0, int iParam1) // Position - 0x850C Hash - 0x9AD134EA ^0x3BFBD1FE
{
	if (!func_194(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

int func_201(int iParam0) // Position - 0x8551 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_202(float fParam0) // Position - 0x8563 Hash - 0xC643B4E3 ^0xC643B4E3
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_203(var uParam0, int iParam1) // Position - 0x8579 Hash - 0xB0CFF0C3 ^0x1C6318C0
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_273(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_204(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x85AF Hash - 0x10503CC4 ^0x6232183B
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

BOOL func_205(int iParam0) // Position - 0x85F2 Hash - 0xD7EC85BD ^0xD7EC85BD
{
	if (func_271(iParam0))
		if (!func_76(44))
			return false;

	return true;
}

void func_206(int iParam0, int iParam1) // Position - 0x8612 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_207(int iParam0, int iParam1) // Position - 0x8623 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_208(var uParam0, var uParam1, int iParam2) // Position - 0x8639 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_209(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8656 Hash - 0xBE6BED24 ^0x63262B4D
{
	int num;

	switch (iParam0)
	{
		case 3:
			return joaat("LAW_REGION_LAGRAS");
	
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
	
		case 5:
			if (func_45() != -1 && func_274() == joaat("LAW_REGION_SAINT_DENIS_RURAL"))
				return joaat("LAW_REGION_SAINT_DENIS_RURAL");
			else
				return joaat("LAW_REGION_SAINT_DENIS");
			break;
	
		case 22:
			return joaat("LAW_REGION_PRONGHORN_RANCH");
	
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
	
		case 33:
			return joaat("LAW_REGION_SISIKA");
	
		case 37:
			return joaat("LAW_REGION_FORT_WALLACE");
	
		case 39:
			return joaat("LAW_REGION_BEECHERS_HOPE");
	
		case 40:
			if (!bParam1 || func_45() != -1)
				return joaat("LAW_REGION_BLACKWATER");
		
			if (func_76(44))
				return joaat("LAW_REGION_BLACKWATER");
			else
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			break;
	
		case 60:
			if (func_45() != -1)
				return joaat("LAW_REGION_GRIZZLIES");
			else
				return joaat("LAW_REGION_WAPITI");
			break;
	
		case 62:
			return joaat("LAW_REGION_AGUASDULCES");
	
		case 66:
			return joaat("LAW_REGION_MANICATO");
	
		case 70:
			return joaat("LAW_REGION_CORNWALL");
	
		case 74:
			return joaat("LAW_REGION_EMERALD_RANCH");
	
		case 81:
			if (func_127(iParam0))
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			else
				return joaat("LAW_REGION_VALENTINE");
			break;
	
		case 83:
			return joaat("LAW_REGION_ANNESBURG");
	
		case 87:
			if (func_45() != -1)
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			else
				return joaat("LAW_REGION_BUTCHER_CREEK");
			break;
	
		case 98:
			if (func_45() != -1)
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			else
				return joaat("LAW_REGION_VAN_HORN");
			break;
	
		case 99:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
	
		case 101:
			return joaat("LAW_REGION_CALIGA_HALL");
	
		case 111:
			if (func_127(iParam0))
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			else
				return joaat("LAW_REGION_RHODES");
			break;
	
		case 116:
			return joaat("LAW_REGION_MANZANITA_POST");
	
		case 121:
			return joaat("LAW_REGION_TUMBLEWEED");
	
		case 127:
			return joaat("LAW_REGION_ARMADILLO");
	
		case 131:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
	
		case 135:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
	
		case 136:
			if (func_45() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (!bParam1)
				return joaat("LAW_REGION_THIEVES_LANDING");
		
			if (func_76(44))
				return joaat("LAW_REGION_THIEVES_LANDING");
			else
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			break;
	}

	if (bParam2)
	{
		num = func_275(iParam0);
	
		if (num != -1)
			return func_276(num, bParam1);
	}

	return 0;
}

void func_210(Hash hParam0) // Position - 0x8923 Hash - 0x3EC08B2C ^0x99995BB2
{
	int num;

	if (Global_1939102.f_26 == hParam0 || hParam0 == 0 || hParam0 == joaat("LAW_REGION_VALENTINE_LOCKDOWN") && Global_1939102.f_26 == joaat("LAW_REGION_VALENTINE") || hParam0 == joaat("LAW_REGION_RHODES_LOCKDOWN") && Global_1939102.f_26 == joaat("LAW_REGION_RHODES") || Global_1939102.f_26 == 0)
	{
		num = func_97();
		func_277(func_276(num, true), -1);
	}

	return;
}

void func_211(var uParam0, BOOL bParam1) // Position - 0x899F Hash - 0x94FA4FD3 ^0x2137F904
{
	if (func_278(uParam0->f_1))
		func_279(uParam0->f_1);

	if (MAP::DOES_BLIP_EXIST(uParam0->f_9) && bParam1)
		MAP::REMOVE_BLIP(&(uParam0->f_9));

	if (func_280(uParam0->f_8))
		func_281(&(uParam0->f_8), true, true);

	return;
}

void func_212() // Position - 0x89ED Hash - 0x41548FAE ^0x904D4239
{
	if (ENTITY::DOES_ENTITY_EXIST(hLocal_27.f_17))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(hLocal_27.f_17, hLocal_27.f_6, hLocal_27.f_7, 1))
			ENTITY::STOP_ENTITY_ANIM(hLocal_27.f_17, hLocal_27.f_6, hLocal_27.f_7, -1000f);
	
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(hLocal_27.f_17, hLocal_27.f_6, hLocal_27.f_8, 1))
			ENTITY::STOP_ENTITY_ANIM(hLocal_27.f_17, hLocal_27.f_6, hLocal_27.f_8, -1000f);
	
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(hLocal_27.f_17, hLocal_27.f_6, hLocal_27.f_9, 1))
			ENTITY::STOP_ENTITY_ANIM(hLocal_27.f_17, hLocal_27.f_6, hLocal_27.f_9, -1000f);
	}

	if (hLocal_27.f_16)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(hLocal_27.f_6))
			STREAMING::REMOVE_ANIM_DICT(hLocal_27.f_6);
	
		hLocal_27.f_16 = 0;
	}

	if (hLocal_27.f_18 != 0)
		ENTITY::_UNPIN_MAP_ENTITY(hLocal_27.f_18);

	return;
}

void func_213() // Position - 0x8AAD Hash - 0x6F028C2F ^0xCF4ACA29
{
	int i;

	for (i = 0; i < iLocal_103; i = i + 1)
	{
		if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_103[i]))
			ENTITY::_UNPIN_MAP_ENTITY(iLocal_103[i]);
	}

	return;
}

void func_214(int iParam0) // Position - 0x8ADF Hash - 0x3CD01C93 ^0xBF009143
{
	int i;
	int num;

	if (func_130(Global_1915656.f_3[iParam0 /*447*/].f_21) && func_282(Global_1915656.f_3[iParam0 /*447*/].f_21))
		func_283(Global_1915656.f_3[iParam0 /*447*/].f_21, false, true, false, false);

	Global_1915656.f_3[iParam0 /*447*/].f_10 = { 0f, 0f, 0f };
	Global_1915656.f_3[iParam0 /*447*/].f_21 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	Global_1915656.f_3[iParam0 /*447*/].f_1 = 0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1915656.f_3[iParam0 /*447*/].f_35))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1915656.f_3[iParam0 /*447*/].f_35, false);

	func_284(Global_1915656.f_3[iParam0 /*447*/].f_9, false);
	func_285(iParam0, 536870912);
	num = func_286(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_118(Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/]);
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
	func_287(iParam0);
	Global_1915656.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_8 = -1;
	return;
}

BOOL func_215(int iParam0, BOOL bParam1) // Position - 0x8CB7 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_45() != -1)
		return false;

	if (!func_130(iParam0))
		return false;

	return Global_9899[iParam0 /*2*/] && bParam1 != false;
}

int func_216(int iParam0, BOOL bParam1) // Position - 0x8CE5 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_130(iParam0))
		return 0;

	if (!func_215(iParam0, 2))
		return 0;

	if (func_230(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_164(iParam0)))
		return 1;

	if (func_215(iParam0, true) && !bParam1)
	{
		func_288(iParam0, 128);
		return 1;
	}

	func_232(iParam0, 129);
	func_289(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_164(iParam0));
	func_231(iParam0, 0);
	return 1;
}

int func_217(int iParam0) // Position - 0x8D68 Hash - 0x5000025C ^0x5000025C
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

int func_218(int iParam0) // Position - 0x8D8F Hash - 0x5000025C ^0x5000025C
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

void func_219() // Position - 0x8DB0 Hash - 0x93D7F24D ^0x457E2679
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

	func_158(32);
	return;
}

int func_220(int iParam0, int iParam1) // Position - 0x8E2B Hash - 0xC0F3E3A4 ^0x6F5CEED
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
	
		case -2141419899:
			return 404;
	
		case -2106445152:
			return 277;
	
		case -2106214197:
			return 102;
	
		case -2101264851:
			return 192;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
	
		case -2073072369:
			return 57;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
	
		case -2058120606:
			return 194;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 90;
	
		case -2022369555:
			return 251;
	
		case -2021582629:
			return 110;
	
		case -2020023971:
			return 263;
	
		case -1957523409:
			return 205;
	
		case -1952856164:
			return 163;
	
		case -1949204933:
			return 261;
	
		case joaat("ws_mp_camp_defend_radleys_pasture"):
			return 387;
	
		case -1939389836:
			return 416;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
	
		case -1852605133:
			return 10;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
	
		case -1847672446:
			return 312;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
	
		case -1840704908:
			return 274;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_221(int iParam0) // Position - 0xA6D0 Hash - 0xA3250C27 ^0x2A3A4993
{
	int num;

	num = func_290(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_222(int iParam0) // Position - 0xA6ED Hash - 0xAD766E45 ^0x511834A9
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

BOOL func_223() // Position - 0xA704 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_224(int iParam0) // Position - 0xA70D Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

void func_225(var uParam0, int iParam1) // Position - 0xA720 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_226(*uParam0);
	num2 = func_228(*uParam0);

	if (iParam1 < 1 || iParam1 > func_291(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

int func_226(int iParam0) // Position - 0xA773 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

void func_227(var uParam0, int iParam1) // Position - 0xA786 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

int func_228(int iParam0) // Position - 0xA7C2 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

void func_229(var uParam0, int iParam1) // Position - 0xA7E7 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

Hash func_230(int iParam0) // Position - 0xA86D Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_130(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/];
}

void func_231(int iParam0, PersChar pchParam1) // Position - 0xA88B Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_130(iParam0))
		return;

	Global_1893799[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

void func_232(int iParam0, BOOL bParam1) // Position - 0xA8AC Hash - 0x452DF11A ^0x452DF11A
{
	if (func_45() != -1)
		return;

	if (!func_130(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] - Global_9899[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_233(int iParam0) // Position - 0xA8E5 Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_130(iParam0))
		return false;

	if (!func_215(iParam0, 2))
		return false;

	return true;
}

void func_234(int iParam0, BOOL bParam1) // Position - 0xA90B Hash - 0x2F9EB0B9 ^0x27C1EE8B
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

void func_235(int iParam0, BOOL bParam1) // Position - 0xA93F Hash - 0x342D57CF ^0x4BA5FE78
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

void func_236(int iParam0, int iParam1) // Position - 0xA974 Hash - 0x823E3440 ^0x340E01B4
{
	func_293(&(Global_1939959.f_5[iParam0 /*11*/].f_7), iParam1);
	return;
}

BOOL func_237(var uParam0, var uParam1) // Position - 0xA98E Hash - 0x1268D0E3 ^0x1268D0E3
{
	return func_255(uParam0, 5, 8);
}

BOOL func_238(int iParam0) // Position - 0xA9A1 Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_294(1, iParam0);
}

int func_239(int iParam0) // Position - 0xA9B0 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

int func_240(int iParam0) // Position - 0xA9FB Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_295(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_241(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xAA18 Hash - 0x79169E9C ^0xA3FE4569
{
	func_296(iParam0);

	if (!func_297(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_298(128) && !func_299(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_300() == 4)
		func_240(18);

	func_301(1024);
	return;
}

int func_242(int iParam0) // Position - 0xAA7A Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_302(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_243(var uParam0) // Position - 0xAA97 Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_244(var uParam0) // Position - 0xAAA9 Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_245(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0xAABB Hash - 0x63EE9672 ^0xDAC9325D
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

void func_246(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0xAB11 Hash - 0x6DF4F0B2 ^0x7B946ED1
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

BOOL func_247(int iParam0) // Position - 0xAB3E Hash - 0x287157F6 ^0x287157F6
{
	if (iParam0 == 28 || iParam0 == 29 || iParam0 == 38 || iParam0 == 27 || iParam0 == 15 || iParam0 == 39)
		return true;

	if (func_149(iParam0, 65536))
		return true;

	return false;
}

void func_248(int iParam0, int iParam1) // Position - 0xAB9B Hash - 0x9E30ADED ^0xA0DD8460
{
	func_161(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;
	return;
}

void func_249(int iParam0) // Position - 0xABD6 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_250(int iParam0, int iParam1) // Position - 0xABDE Hash - 0x685DE635 ^0x335BF63C
{
	if (iParam0 == -1)
		return false;

	return func_182(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

BOOL func_251(int iParam0) // Position - 0xAC05 Hash - 0x8858DE32 ^0x8858DE32
{
	return iParam0 > -1 && iParam0 < 180;
}

int func_252(int iParam0) // Position - 0xAC1B Hash - 0xB89C4DF3 ^0x1393EE39
{
	var unk;

	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149432.f_7) && !func_304(12, func_303(iParam0), &unk))
		return 0;

	return unk.f_2;
}

BOOL func_253(Hash hParam0) // Position - 0xAC4C Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_254(int iParam0, char* sParam1, Hash* phParam2, char* sParam3, float* pfParam4, char* sParam5, Vector3* pvParam6) // Position - 0xAC58 Hash - 0x5851BC53 ^0x8A1263E0
{
	int num;

	num = func_305();
	num.f_2 = -738708473;
	num.f_3 = func_303(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return 0;

	num.f_2 = -1407851228;
	num.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(phParam2, &num);
	num.f_2 = 1059891245;
	num.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &num);
	num.f_2 = -99852754;
	num.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &num);
	return 1;
}

BOOL func_255(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0xACE0 Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_306(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_307(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_256(int iParam0, int* piParam1, int* piParam2) // Position - 0xAD1B Hash - 0xA33A7FBC ^0xCFB4EAFE
{
	int num;

	num = func_305();
	num.f_2 = -738708473;
	num.f_3 = func_303(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return false;

	num.f_2 = 110382701;
	num.f_3 = MISC::GET_HASH_KEY("startTime");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam1, &num);
	num.f_2 = 110382701;
	num.f_3 = MISC::GET_HASH_KEY("endTime");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam2, &num);
	return true;
}

Ped func_257(int iParam0) // Position - 0xAD8B Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_164(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

BOOL func_258(int iParam0, int iParam1) // Position - 0xADB9 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_259(int iParam0) // Position - 0xADD1 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_261(iParam0, 4))
		return false;

	return true;
}

BOOL func_260(int iParam0) // Position - 0xADE8 Hash - 0x7F4C96B ^0x650690F6
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

BOOL func_261(int iParam0, int iParam1) // Position - 0xAEB4 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_262(int iParam0) // Position - 0xAECD Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_263() // Position - 0xAEE0 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_69())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_264() // Position - 0xAEFB Hash - 0x4C1900E6 ^0x4C1900E6
{
	return func_300() == 4;
}

BOOL func_265() // Position - 0xAF09 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_266() // Position - 0xAF12 Hash - 0xC0177349 ^0xA55DEE6F
{
	var unk;
	var unk3;

	if (func_45() != 0)
		return true;

	if (func_308())
		return false;

	if (HUD::_0x7EC0D68233E391AC(6) == 1)
		return true;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_309() };

	if (func_306(unk))
		return false;

	unk3 = { func_310() };

	if (func_306(unk3))
		return false;

	return true;
}

BOOL func_267(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAF7A Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_308())
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

	if (iParam0 == 0 && func_306(func_62(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_63(func_62(0)))
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

const char* func_268(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xB0F0 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_269(var uParam0, var uParam1, var uParam2) // Position - 0xB104 Hash - 0xD993B6FD ^0xD993B6FD
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_311(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_270(int iParam0) // Position - 0xB132 Hash - 0xE6862179 ^0xFFEF5B19
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

BOOL func_271(int iParam0) // Position - 0xB416 Hash - 0xE48228D0 ^0xE48228D0
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

struct<2> func_272(Player plParam0) // Position - 0xB440 Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

const char* func_273(const char* sParam0, int iParam1) // Position - 0xB454 Hash - 0x9E99F03 ^0x7F44DF39
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

Hash func_274() // Position - 0xB46E Hash - 0x4228A1C2 ^0xC94C7CFB
{
	return Global_1939102.f_26;
}

int func_275(int iParam0) // Position - 0xB47C Hash - 0x4D13899D ^0x4D13899D
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
	else if (iParam0 <= 121)
		return 13;
	else if (iParam0 <= 126)
		return 14;
	else if (iParam0 <= 134)
		return 15;
	else if (iParam0 <= 138)
		return 16;

	return -1;
}

int func_276(int iParam0, BOOL bParam1) // Position - 0xB578 Hash - 0x57DE22AD ^0x88ABC039
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
	
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
	
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
	
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
	
		case 4:
			if (!bParam1 || func_45() != -1)
				return joaat("LAW_REGION_GREAT_PLAINS");
		
			if (func_76(44))
				return joaat("LAW_REGION_GREAT_PLAINS");
			else
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			break;
	
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 8:
			return joaat("LAW_REGION_GUAMA");
	
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
	
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
	
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
	
		case 12:
			if (!bParam1 || func_45() != -1)
				return joaat("LAW_REGION_TALL_TREES");
		
			if (func_76(44))
				return joaat("LAW_REGION_TALL_TREES");
			else
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_45() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (func_76(44))
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			else
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			break;
	}

	return 0;
}

void func_277(int iParam0, int iParam1) // Position - 0xB6F2 Hash - 0x2031A6F3 ^0x2031A6F3
{
	if (iParam0 == 0)
		iParam0 = func_276(func_312(Global_34), true);

	func_313(iParam0, iParam1);
	return;
}

BOOL func_278(Volume volParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xB71B Hash - 0x16CD1F21 ^0x2C43B1FB
{
	return VOLUME::DOES_VOLUME_EXIST(volParam0);
}

void func_279(Volume volParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xB729 Hash - 0x433C0E5E ^0xA5B8D6DC
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

BOOL func_280(int iParam0) // Position - 0xB767 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

void func_281(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB7A6 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_280(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_314(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_315(num);
	*uParam0 = 0;
	return;
}

BOOL func_282(int iParam0) // Position - 0xB7FA Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_130(iParam0))
		return false;

	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_283(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB81F Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_130(iParam0))
		return;

	if (!func_215(iParam0, 1))
		return;

	if (!func_215(iParam0, 2))
		return;

	if (!bParam4 && !func_282(iParam0) && func_316(iParam0))
		return;

	func_232(iParam0, 1);
	func_289(iParam0);

	if (func_317(func_230(iParam0)))
	{
		persChar = func_164(iParam0);
	
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
	
		func_232(iParam0, 16);
	}

	if (func_215(iParam0, 128) && !bParam3)
		func_216(iParam0, false);

	return;
}

void func_284(int iParam0, BOOL bParam1) // Position - 0xB90B Hash - 0x6FB1865F ^0x85C63E45
{
	if (!func_251(iParam0))
		return;

	if (bParam1)
	{
		if (!func_318(iParam0, 1024))
		{
			func_319(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_318(iParam0, 1024))
	{
		func_320(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	func_321(iParam0);
	return;
}

void func_285(int iParam0, int iParam1) // Position - 0xB961 Hash - 0x6F4899EB ^0x5624A2EB
{
	if (!func_322(iParam0))
		return;

	if (func_45() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 - Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;

	return;
}

int func_286(int iParam0) // Position - 0xB9D4 Hash - 0x47F93C28 ^0x59A8BC1F
{
	return Global_1915656.f_3[iParam0 /*447*/].f_409;
}

void func_287(int iParam0) // Position - 0xB9EA Hash - 0x53643336 ^0xF32C683E
{
	Global_1915656.f_3[iParam0 /*447*/].f_6 = 0;
	return;
}

void func_288(int iParam0, BOOL bParam1) // Position - 0xBA00 Hash - 0x61515A20 ^0x61515A20
{
	if (func_45() != -1)
		return;

	if (!func_130(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] || bParam1;
	return;
}

void func_289(int iParam0) // Position - 0xBA31 Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_130(iParam0))
		return;

	ped = func_257(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1893799[iParam0 /*3*/].f_2 = 0;
	return;
}

int func_290(int iParam0) // Position - 0xBA75 Hash - 0x3620388 ^0x3620388
{
	return func_323(iParam0) + 30;
}

int func_291(int iParam0, int iParam1) // Position - 0xBA85 Hash - 0x893AC59E ^0x893AC59E
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		default:
		
	}

	return 30;
}

var func_292(BOOL bParam0, var uParam1, var uParam2) // Position - 0xBB1F Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_293(var uParam0, int iParam1) // Position - 0xBB36 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_294(int iParam0, int iParam1) // Position - 0xBB4B Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_324(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_325())
		return func_324(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_324(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_295(var uParam0, int iParam1, int iParam2) // Position - 0xBBBF Hash - 0x8AC008A3 ^0x375BADC3
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

void func_296(int iParam0) // Position - 0xBBF1 Hash - 0x42868A8 ^0x3D52297C
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_297(int iParam0) // Position - 0xBC03 Hash - 0xA1D29AFD ^0xABA18533
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_298(BOOL bParam0) // Position - 0xBC18 Hash - 0xA1D29AFD ^0x8B9D4F17
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_299(int iParam0) // Position - 0xBC2D Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_300() // Position - 0xBC5B Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_301(BOOL bParam0) // Position - 0xBC8E Hash - 0xEBD3AD20 ^0x6E10961F
{
	if (func_326(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_302(var uParam0, int iParam1, int iParam2) // Position - 0xBCB5 Hash - 0xA8F08582 ^0x9810C45C
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

int func_303(int iParam0) // Position - 0xBCE8 Hash - 0x899A1C9C ^0x899A1C9C
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

BOOL func_304(int iParam0, int iParam1, var uParam2) // Position - 0xC9E1 Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_327(iParam0, iParam1, &unk))
		func_328(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

int func_305() // Position - 0xCA08 Hash - 0x4F5358E7 ^0x4EB0CC4F
{
	return Global_1072759.f_28418[48 /*4*/].f_3;
}

BOOL func_306(var uParam0, var uParam1) // Position - 0xCA1D Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_329(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_330(uParam0))
		return false;

	return true;
}

int func_307(int iParam0, var uParam1) // Position - 0xCA51 Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_331(iParam0);

	return -1;
}

BOOL func_308() // Position - 0xCA6B Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_306(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

struct<2> func_309() // Position - 0xCAC3 Hash - 0x46B5D72E ^0x46B5D72E
{
	return Global_1051268;
}

struct<2> func_310() // Position - 0xCAD1 Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_62(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_62(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_311(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xCB1C Hash - 0x5431B0F9 ^0x1E2109F7
{
	var unk;
	float num;
	float num2;

	func_332(iParam3, &unk, &num, &num2);

	if (func_333(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

int func_312(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xCB4C Hash - 0x56F0811C ^0x278FB5A
{
	return func_334(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

BOOL func_313(int iParam0, int iParam1) // Position - 0xCB62 Hash - 0x44DF78E2 ^0x13149F5D
{
	int num;

	if (Global_1939102.f_26 != iParam0)
	{
		Global_1939102.f_26 = iParam0;
		num = iParam1;
	
		if (!func_194(iParam1))
			num = func_335(iParam0);
	
		if (!func_194(num))
			num = func_195(func_312(Global_34));
	
		if (!func_194(num))
			return false;
	
		LAW::_SET_LAW_REGION(PLAYER::PLAYER_ID(), Global_1939102.f_26, func_336(num));
		return true;
	}

	return false;
}

int func_314(var uParam0) // Position - 0xCBD3 Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

void func_315(int iParam0) // Position - 0xCBDD Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_337(iParam0))
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

BOOL func_316(int iParam0) // Position - 0xCC90 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_130(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

BOOL func_317(Hash hParam0) // Position - 0xCCB4 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_318(int iParam0, BOOL bParam1) // Position - 0xCCC0 Hash - 0xC3E950D6 ^0xC3E950D6
{
	if (!func_251(iParam0))
		return false;

	return Global_1915656.f_17884[iParam0] && bParam1 != false;
}

void func_319(int iParam0, BOOL bParam1) // Position - 0xCCE6 Hash - 0x7639AFD6 ^0x7639AFD6
{
	if (!func_251(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] || bParam1;
	return;
}

void func_320(int iParam0, BOOL bParam1) // Position - 0xCD14 Hash - 0xECD22DFB ^0xECD22DFB
{
	if (!func_251(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] - Global_1915656.f_17884[iParam0] && bParam1;
	return;
}

void func_321(int iParam0) // Position - 0xCD4E Hash - 0xB29062D ^0xB29062D
{
	func_339(func_338(iParam0));
	return;
}

BOOL func_322(int iParam0) // Position - 0xCD60 Hash - 0xDFD519AF ^0xDFD519AF
{
	return iParam0 > -1 && iParam0 < 40;
}

int func_323(int iParam0) // Position - 0xCD76 Hash - 0x4BF88485 ^0x4BF88485
{
	return iParam0 * 31;
}

BOOL func_324(var uParam0, int iParam1, int iParam2) // Position - 0xCD82 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_325() // Position - 0xCDB9 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

BOOL func_326(BOOL bParam0) // Position - 0xCDC8 Hash - 0x695C3191 ^0x86E70E17
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

BOOL func_327(int iParam0, int iParam1, Any* panParam2) // Position - 0xCDDE Hash - 0x8467BB0B ^0xA289B29B
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_340(iParam0);
	panParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_328(Any* panParam0, int iParam1, var uParam2) // Position - 0xCE12 Hash - 0x59F43AD2 ^0xB9A366FE
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

BOOL func_329(int iParam0) // Position - 0xCE8C Hash - 0x5000025C ^0x5000025C
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

int func_330(int iParam0) // Position - 0xCECB Hash - 0xE34A477A ^0xE34A477A
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

int func_331(var uParam0, var uParam1) // Position - 0xCF61 Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_341(uParam0, &unk))
		return unk.f_1;

	return -1;
}

void func_332(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xCF8D Hash - 0x7A16E50C ^0x7A16E50C
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

BOOL func_333(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0xDA2A Hash - 0x3D2F8087 ^0xB0BC8DD5
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

int func_334(Hash hParam0) // Position - 0xDA90 Hash - 0x50573299 ^0x50573299
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

int func_335(int iParam0) // Position - 0xDB4A Hash - 0x4BF152B5 ^0x4BF152B5
{
	switch (iParam0)
	{
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
	
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
	
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
	
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
	
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
	
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
	}

	return -1;
}

Hash func_336(int iParam0) // Position - 0xDCAC Hash - 0xD9CACD5C ^0xC1FF0F4A
{
	switch (iParam0)
	{
		case 0:
			return joaat("state_ambarino");
	
		case 1:
			return joaat("state_new_hanover");
	
		case 2:
			return joaat("state_lemoyne");
	
		case 3:
			return joaat("state_west_elizabeth");
	
		case 4:
			return joaat("state_new_austin");
	
		case 5:
			return joaat("state_guarma");
	
		default:
		
	}

	return 0;
}

BOOL func_337(int iParam0) // Position - 0xDD11 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_342(iParam0, 2);
}

int func_338(int iParam0) // Position - 0xDD20 Hash - 0xA78B2E8C ^0xA78B2E8C
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

void func_339(int iParam0) // Position - 0xE23D Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1915656.f_18247 = iParam0;
	return;
}

int func_340(int iParam0) // Position - 0xE24E Hash - 0x5FB59AC3 ^0xE293EFF
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

BOOL func_341(int iParam0, var uParam1, Any* panParam2) // Position - 0xE3C3 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_306(iParam0))
		return false;

	func_343(panParam2);

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

BOOL func_342(int iParam0, int iParam1) // Position - 0xE4CE Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_343(Any* panParam0) // Position - 0xE4EF Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

