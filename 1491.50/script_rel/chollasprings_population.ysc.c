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
	Volume volLocal_14 = 0;
	Volume volLocal_15 = 0;
	Volume volLocal_16 = 0;
	Volume volLocal_17 = 0;
	Volume volLocal_18 = 0;
	Volume volLocal_19 = 0;
	BOOL bLocal_20 = 0;
	var uLocal_21 = 3;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	const char* sLocal_25 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x8E0298E ^0x8594F965
{
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3();
	flag = true;

	while (flag)
	{
		func_4();
		func_5();
		BUILTIN::WAIT(0);
	}

	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x3A Hash - 0xD0925A9B ^0xC30A3E3B
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		func_6();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0x5B Hash - 0x6ACBFE00 ^0x2F5C5A91
{
	volLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3685.4233f, -2597.155f, -10f, 0f, 0f, -24.789701f, 116.63651f, 76.68949f, 15f, "m_volArmadillo_Restriction");
	func_7(volLocal_14, true);
	volLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4800.448f, -2704.913f, 28.17212f, 0f, 0f, -47.250004f, 134.75f, 95.75f, 50f, "m_VolRidgewoodFarm_Restriction");
	func_8(volLocal_15, true);
	volLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3959.882f, -2132.151f, -5.324f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volTwinRocks_Restriction");
	func_8(volLocal_16, true);
	return;
}

void func_3() // Position - 0xFD Hash - 0x994E34F2 ^0xCE35D614
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_9())
		{
			volLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardThreat");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, -3960.03f, -2122.22f, -4.99f, 0f, 0f, 51f, 4.85f, 7.96f, 13.94f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, -3955.38f, -2127.12f, -4.19f, 0f, 0f, 51f, 7.61f, 7.5f, 12.32f);
			volLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRestricted");
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_18, volLocal_19);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, -3962.87f, -2135.84f, -5.32f, 0f, 0f, 0f, 27f, 27f, 20f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, -3934.91f, -2138.85f, -5.32f, 0f, 0f, 0f, 10f, 10f, 20f);
			volLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRegistration");
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_17, volLocal_18);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, -3959.88f, -2132.15f, -5.32f, 0f, 0f, 0f, 50f, 50f, 20f);
			sLocal_25 = "TWIN_ROCKS";
			LAW::_CREATE_GUARD_ZONE(sLocal_25);
			LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_25, volLocal_17);
			LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_25, volLocal_18);
			LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_25, volLocal_18);
			LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_25, volLocal_19);
		}
	}

	return;
}

void func_4() // Position - 0x236 Hash - 0x765940CD ^0x523EAE1C
{
	PersChar persChar;
	PersChar persChar2;
	PersChar persChar3;
	PersChar persChar4;

	if (MISC::GET_FRAME_COUNT() % 20 != 0)
		return;

	persChar = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_OWNER"));
	persChar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_WIFE"));
	persChar3 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_RANCHHAND_1"));
	persChar4 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_RANCHHAND_2"));

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar4))
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar4) && func_10(-154581735))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_36))
				func_11(-154581735);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar3))
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar3) && func_10(-154581735))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_36))
				func_11(-154581735);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar2))
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar2) && func_10(-154581735))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_36))
				func_11(-154581735);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar) && func_10(-154581735))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_36))
				func_11(-154581735);
		else if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar) && !func_10(-154581735))
			if (!STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(-262371610, Global_36))
				func_12(-154581735);

	return;
}

void func_5() // Position - 0x39E Hash - 0xAB432E6D ^0xDAAF3AA8
{
	var unk;
	var unk5;
	var unk9;
	var unk17;
	Hash hash;
	int i;

	if (!bLocal_20)
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
			return;
	
		unk = 3;
		unk5 = 3;
		unk9 = 7;
		unk17 = 3;
	
		for (i = 0; i < 3; i = i + 1)
		{
			switch (i)
			{
				case 0:
					unk[0] = -1745210725;
					unk[1] = -1096712211;
					unk[2] = -1941005496;
					unk5[0] = 1898267848;
					unk5[1] = 974280355;
					unk5[2] = 1756181464;
					unk9[0] = -72482077;
					unk9[1] = 1941336822;
					unk9[2] = 1710282603;
					unk9[3] = -1122265410;
					unk9[4] = 1309948033;
					unk9[5] = 712371053;
					unk9[6] = -935952905;
					unk17[0] = -752772715;
					unk17[1] = 503623514;
					unk17[2] = -752772715;
					hash = 574303518;
					break;
			
				case 1:
					unk[0] = -1029093195;
					unk[1] = -1325390493;
					unk[2] = -1622834706;
					unk5[0] = 257582350;
					unk5[1] = -39730787;
					unk5[2] = -1438901569;
					unk9[0] = -772691681;
					unk9[1] = 1011350990;
					unk9[2] = 705321299;
					unk9[3] = -2110850686;
					unk9[4] = 32078073;
					unk9[5] = 1007204499;
					unk9[6] = -1142062162;
					unk17[0] = 34346755;
					unk17[1] = 482102371;
					unk17[2] = -502343927;
					hash = 112916013;
					break;
			
				case 2:
					unk[0] = -1443390498;
					unk[1] = 689576469;
					unk[2] = -1750010031;
					unk5[0] = -1725439174;
					unk5[1] = 1857654366;
					unk5[2] = 2095655613;
					unk9[0] = 1049317994;
					unk9[1] = -279038963;
					unk9[2] = 161441935;
					unk9[3] = -820561187;
					unk9[4] = -1268841107;
					unk9[5] = 2087785010;
					unk9[6] = -280121448;
					unk17[0] = 1065585604;
					unk17[1] = -175048740;
					unk17[2] = -482127039;
					hash = -1603458673;
					break;
			}
		
			func_13(i, &unk, &unk5, &unk9, &unk17, hash);
		}
	
		if (func_10(1583012985) && func_10(479419429))
		{
			func_14(1583012985, false, false);
			func_14(479419429, false, false);
			func_14(2077022393, true, false);
		}
	
		bLocal_20 = true;
	}

	return;
}

void func_6() // Position - 0x642 Hash - 0x484CC27F ^0x1B062EB6
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_25);
	func_15();
	return;
}

void func_7(Volume volParam0, BOOL bParam1) // Position - 0x654 Hash - 0xBEDD85C3 ^0x76253760
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2229503, 0, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, volParam0);

	return;
}

void func_8(Volume volParam0, BOOL bParam1) // Position - 0x69A Hash - 0xFE673D83 ^0xF340C8A2
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);

	return;
}

BOOL func_9() // Position - 0x6E6 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_10(int iParam0) // Position - 0x6F7 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_16(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

void func_11(int iParam0) // Position - 0x746 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_16(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	}

	Global_1934765 = 0;
	return;
}

void func_12(int iParam0) // Position - 0x7CC Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_16(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::SET_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	
		MISC::SET_BIT(&Global_1058888.f_40497[num2], offset);
	}

	Global_1934765 = 0;
	return;
}

void func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x865 Hash - 0x492CDFB ^0x4E0BDC98
{
	int randomIntInRange;

	func_17(hParam5);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);

	switch (randomIntInRange)
	{
		case 0:
			func_17(uParam1->[0]);
			func_17(uParam1->[1]);
			func_17(uParam1->[2]);
			func_18(&uLocal_21[iParam0], 1);
			func_18(&uLocal_21[iParam0], 2);
			func_18(&uLocal_21[iParam0], 4);
			break;
	
		case 1:
			func_17(uParam1->[0]);
			func_18(&uLocal_21[iParam0], 1);
			break;
	
		case 2:
			func_17(uParam1->[1]);
			func_18(&uLocal_21[iParam0], 2);
			break;
	
		case 3:
			func_17(uParam1->[2]);
			func_18(&uLocal_21[iParam0], 4);
			break;
	
		case 4:
			func_17(uParam1->[0]);
			func_17(uParam1->[1]);
			func_18(&uLocal_21[iParam0], 1);
			func_18(&uLocal_21[iParam0], 2);
			break;
	
		case 5:
			func_17(uParam1->[0]);
			func_17(uParam1->[2]);
			func_18(&uLocal_21[iParam0], 1);
			func_18(&uLocal_21[iParam0], 4);
			break;
	
		case 6:
			func_17(uParam1->[1]);
			func_17(uParam1->[2]);
			func_18(&uLocal_21[iParam0], 2);
			func_18(&uLocal_21[iParam0], 4);
			break;
	}

	if (func_19(uLocal_21[iParam0], 1))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17(uParam2->[0]);
			func_18(&uLocal_21[iParam0], 8);
		}
	}

	if (func_19(uLocal_21[iParam0], 2))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17(uParam2->[1]);
			func_18(&uLocal_21[iParam0], 16);
		}
	}

	if (func_19(uLocal_21[iParam0], 4))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17(uParam2->[2]);
			func_18(&uLocal_21[iParam0], 32);
		}
	}

	if (func_19(uLocal_21[iParam0], 8) && func_19(uLocal_21[iParam0], 16) && func_19(uLocal_21[iParam0], 32))
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
	
		switch (randomIntInRange)
		{
			case 0:
				func_17(uParam3->[6]);
				func_18(&uLocal_21[iParam0], 4096);
				break;
		
			case 2:
				func_17(uParam3->[3]);
				func_18(&uLocal_21[iParam0], 512);
				break;
		
			case 3:
				func_17(uParam3->[4]);
				func_18(&uLocal_21[iParam0], 1024);
				break;
		
			case 4:
				func_17(uParam3->[5]);
				func_18(&uLocal_21[iParam0], 2048);
				break;
		
			case 5:
				func_17(uParam3->[0]);
				func_18(&uLocal_21[iParam0], 64);
				break;
		
			case 6:
				func_17(uParam3->[1]);
				func_18(&uLocal_21[iParam0], 128);
				break;
		
			case 7:
				func_17(uParam3->[2]);
				func_18(&uLocal_21[iParam0], 256);
				break;
		}
	}
	else if (func_19(uLocal_21[iParam0], 8) && func_19(uLocal_21[iParam0], 16))
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	
		switch (randomIntInRange)
		{
			case 0:
				func_17(uParam3->[3]);
				func_18(&uLocal_21[iParam0], 512);
				break;
		
			case 1:
				func_17(uParam3->[0]);
				func_18(&uLocal_21[iParam0], 64);
				break;
		
			case 2:
				func_17(uParam3->[1]);
				func_18(&uLocal_21[iParam0], 128);
				break;
		}
	}
	else if (func_19(uLocal_21[iParam0], 16) && func_19(uLocal_21[iParam0], 32))
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	
		switch (randomIntInRange)
		{
			case 0:
				func_17(uParam3->[5]);
				func_18(&uLocal_21[iParam0], 2048);
				break;
		
			case 1:
				func_17(uParam3->[1]);
				func_18(&uLocal_21[iParam0], 128);
				break;
		
			case 2:
				func_17(uParam3->[2]);
				func_18(&uLocal_21[iParam0], 256);
				break;
		}
	}
	else if (func_19(uLocal_21[iParam0], 8) && func_19(uLocal_21[iParam0], 32))
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	
		switch (randomIntInRange)
		{
			case 0:
				func_17(uParam3->[4]);
				func_18(&uLocal_21[iParam0], 1024);
				break;
		
			case 1:
				func_17(uParam3->[0]);
				func_18(&uLocal_21[iParam0], 64);
				break;
		
			case 2:
				func_17(uParam3->[2]);
				func_18(&uLocal_21[iParam0], 256);
				break;
		}
	}
	else if (func_19(uLocal_21[iParam0], 8))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17(uParam3->[0]);
			func_18(&uLocal_21[iParam0], 64);
		}
	}
	else if (func_19(uLocal_21[iParam0], 16))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17(uParam3->[1]);
			func_18(&uLocal_21[iParam0], 128);
		}
	}
	else if (func_19(uLocal_21[iParam0], 32))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17(uParam3->[2]);
			func_18(&uLocal_21[iParam0], 256);
		}
	}

	if (!func_19(uLocal_21[iParam0], 8128))
	{
		if (func_19(uLocal_21[iParam0], 8))
			func_17(uParam4->[0]);
	
		if (func_19(uLocal_21[iParam0], 16))
			func_17(uParam4->[1]);
	
		if (func_19(uLocal_21[iParam0], 32))
			func_17(uParam4->[2]);
	}

	return;
}

void func_14(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xDEB Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_20();
			func_12(iParam0);
			break;
	
		case -1925798111:
			func_12(-1925798111);
			func_11(-919512195);
			func_11(420709909);
			func_11(1703426636);
			break;
	
		case -1838352012:
			func_11(-1674179981);
			func_11(-1835851517);
			func_12(-1838352012);
			break;
	
		case -1835851517:
			func_11(-1674179981);
			func_11(-1838352012);
			func_12(-1835851517);
			break;
	
		case -1738165526:
			func_12(-1738165526);
			func_11(0);
			func_11(473295046);
			break;
	
		case -1717960576:
			func_11(210001842);
			func_12(-1717960576);
			break;
	
		case -1674179981:
			func_11(-1835851517);
			func_11(-1838352012);
			func_12(-1674179981);
			break;
	
		case -1612662716:
			func_11(1822001510);
			func_12(-1612662716);
			break;
	
		case -1414537028:
			func_11(38162571);
			func_11(1350391819);
			func_11(54073871);
			func_12(-1414537028);
			break;
	
		case -1311865656:
			func_12(-1311865656);
			func_11(1509509592);
			func_11(-959357075);
			func_11(405586984);
			break;
	
		case -1271608261:
			func_11(-150493654);
			func_11(1846061697);
			func_11(-1145519186);
			func_12(-1271608261);
			break;
	
		case -1223121209:
			func_12(-1223121209);
			func_11(630808005);
			break;
	
		case -1145519186:
			func_11(-150493654);
			func_11(-1271608261);
			func_11(1846061697);
			func_12(-1145519186);
			break;
	
		case -1124061431:
			func_11(198200492);
			func_12(-1124061431);
			func_11(52706132);
			func_11(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_12(-1080627546);
			else
				func_11(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_11(-538889627);
			func_11(-538880323);
			func_11(-1056767524);
			func_12(iParam0);
			break;
	
		case -959357075:
			func_12(-959357075);
			func_11(1509509592);
			func_11(405586984);
			func_11(-1311865656);
			break;
	
		case -919512195:
			func_12(-919512195);
			func_11(-1925798111);
			func_11(420709909);
			func_11(1703426636);
			break;
	
		case -664252410:
			func_11(2019386373);
			func_11(2109952320);
			func_12(-664252410);
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
			func_21();
			func_12(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_12(-524145696);
			else
				func_11(-524145696);
		
			func_11(1626481264);
			func_11(282809459);
			break;
	
		case -502324015:
			func_11(1497516462);
			func_11(2016141805);
			func_11(1010885152);
			func_12(-502324015);
			break;
	
		case -434590080:
			func_11(1376646519);
			func_11(931649776);
			func_11(1743048395);
			func_11(449774763);
			func_12(-434590080);
			break;
	
		case -404698347:
			func_11(1306158345);
			func_11(1952610440);
			func_11(-223469678);
			func_11(1517904467);
			func_12(-404698347);
			break;
	
		case -259123672:
			func_11(198200492);
			func_11(-1124061431);
			func_11(52706132);
			func_12(-259123672);
			break;
	
		case -223469678:
			func_11(1306158345);
			func_11(1952610440);
			func_11(-404698347);
			func_11(1517904467);
			func_12(-223469678);
			break;
	
		case -150493654:
			func_11(-1271608261);
			func_11(1846061697);
			func_11(-1145519186);
			func_12(-150493654);
			break;
	
		case 0:
			func_12(0);
			func_11(473295046);
			func_11(-1738165526);
			break;
	
		case 38162571:
			func_11(-1414537028);
			func_11(1350391819);
			func_11(54073871);
			func_12(38162571);
			break;
	
		case 52706132:
			func_11(198200492);
			func_11(-1124061431);
			func_12(52706132);
			func_11(-259123672);
			break;
	
		case 54073871:
			func_11(-1414537028);
			func_11(38162571);
			func_11(1350391819);
			func_12(54073871);
			break;
	
		case 198200492:
			func_12(198200492);
			func_11(-1124061431);
			func_11(52706132);
			func_11(-259123672);
			break;
	
		case 210001842:
			func_11(-1717960576);
			func_12(210001842);
			break;
	
		case 280705402:
			func_11(1766284049);
			func_11(1926308480);
			func_12(280705402);
			break;
	
		case 282809459:
			func_12(282809459);
			func_11(1626481264);
			func_11(-524145696);
			break;
	
		case 405586984:
			func_12(405586984);
			func_11(1509509592);
			func_11(-959357075);
			func_11(-1311865656);
			break;
	
		case 420709909:
			func_12(420709909);
			func_11(-919512195);
			func_11(-1925798111);
			func_11(1703426636);
			break;
	
		case 439465264:
			if (func_10(1609506757))
				if (bParam1)
					func_12(439465264);
				else
					func_11(439465264);
			break;
	
		case 449774763:
			func_11(1376646519);
			func_11(931649776);
			func_11(-434590080);
			func_11(1743048395);
			func_12(449774763);
			break;
	
		case 473295046:
			func_12(473295046);
			func_11(0);
			func_11(-1738165526);
			break;
	
		case 630808005:
			func_12(630808005);
			func_11(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_12(885203519);
			else
				func_11(885203519);
			break;
	
		case 931649776:
			func_11(1376646519);
			func_11(-434590080);
			func_11(1743048395);
			func_11(449774763);
			func_12(931649776);
			break;
	
		case 932909855:
			func_12(932909855);
			func_11(2051822093);
			break;
	
		case 1010885152:
			func_11(1497516462);
			func_11(2016141805);
			func_12(1010885152);
			func_11(-502324015);
			break;
	
		case 1306158345:
			func_11(1952610440);
			func_11(-223469678);
			func_11(-404698347);
			func_11(1517904467);
			func_12(1306158345);
			break;
	
		case 1350391819:
			func_11(-1414537028);
			func_11(38162571);
			func_11(54073871);
			func_12(1350391819);
			break;
	
		case 1376646519:
			func_11(931649776);
			func_11(-434590080);
			func_11(1743048395);
			func_11(449774763);
			func_12(1376646519);
			break;
	
		case 1453909576:
			func_12(1453909576);
			func_11(1643531967);
			break;
	
		case 1497516462:
			func_12(1497516462);
			func_11(2016141805);
			func_11(1010885152);
			func_11(-502324015);
			break;
	
		case 1509509592:
			func_12(1509509592);
			func_11(405586984);
			func_11(-959357075);
			func_11(-1311865656);
			break;
	
		case 1517904467:
			func_11(1306158345);
			func_11(1952610440);
			func_11(-223469678);
			func_11(-404698347);
			func_12(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_11(439465264);
				func_12(1609506757);
			}
			else
			{
				func_11(1609506757);
				func_11(439465264);
			}
			break;
	
		case 1626481264:
			func_12(1626481264);
			func_11(-524145696);
			func_11(282809459);
			break;
	
		case 1643531967:
			func_12(1643531967);
			func_11(1453909576);
			break;
	
		case 1703426636:
			func_12(1703426636);
			func_11(-919512195);
			func_11(-1925798111);
			func_11(420709909);
			break;
	
		case 1743048395:
			func_11(1376646519);
			func_11(931649776);
			func_11(-434590080);
			func_11(449774763);
			func_12(1743048395);
			break;
	
		case 1766284049:
			func_11(280705402);
			func_11(1926308480);
			func_12(1766284049);
			break;
	
		case 1822001510:
			func_11(-1612662716);
			func_12(1822001510);
			break;
	
		case 1846061697:
			func_11(-150493654);
			func_11(-1271608261);
			func_11(-1145519186);
			func_12(1846061697);
			break;
	
		case 1926308480:
			func_11(1766284049);
			func_11(280705402);
			func_12(1926308480);
			break;
	
		case 1952610440:
			func_11(1306158345);
			func_11(-223469678);
			func_11(-404698347);
			func_11(1517904467);
			func_12(1952610440);
			break;
	
		case 2016141805:
			func_11(1497516462);
			func_12(2016141805);
			func_11(1010885152);
			func_11(-502324015);
			break;
	
		case 2019386373:
			func_11(-664252410);
			func_11(2109952320);
			func_12(2019386373);
			break;
	
		case 2051822093:
			func_12(2051822093);
			func_11(932909855);
			break;
	
		case 2109952320:
			func_11(2019386373);
			func_11(-664252410);
			func_12(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_10(iParam0))
					func_12(iParam0);
			else if (func_10(iParam0))
				func_11(iParam0);
			break;
	}

	return;
}

void func_15() // Position - 0x190E Hash - 0xB233E26A ^0xBD691B65
{
	func_22(-1745210725);
	func_22(-1096712211);
	func_22(-1941005496);
	func_22(1898267848);
	func_22(974280355);
	func_22(1756181464);
	func_22(-72482077);
	func_22(1941336822);
	func_22(1710282603);
	func_22(-1122265410);
	func_22(1309948033);
	func_22(-935952905);
	func_22(712371053);
	func_22(-752772715);
	func_22(503623514);
	func_22(-407026996);
	func_22(574303518);
	func_22(-1029093195);
	func_22(-1325390493);
	func_22(-1622834706);
	func_22(257582350);
	func_22(-39730787);
	func_22(-1438901569);
	func_22(-772691681);
	func_22(1011350990);
	func_22(705321299);
	func_22(-2110850686);
	func_22(32078073);
	func_22(-1142062162);
	func_22(1007204499);
	func_22(34346755);
	func_22(482102371);
	func_22(-502343927);
	func_22(112916013);
	func_22(-1443390498);
	func_22(689576469);
	func_22(-1750010031);
	func_22(-1725439174);
	func_22(1857654366);
	func_22(2095655613);
	func_22(1049317994);
	func_22(-279038963);
	func_22(161441935);
	func_22(-820561187);
	func_22(-1268841107);
	func_22(-280121448);
	func_22(2087785010);
	func_22(1065585604);
	func_22(-175048740);
	func_22(-482127039);
	func_22(-1603458673);
	uLocal_21[0] = 0;
	uLocal_21[1] = 0;
	uLocal_21[2] = 0;
	bLocal_20 = false;
	return;
}

int func_16(int iParam0, int iParam1) // Position - 0x1AF6 Hash - 0x8FA0E29 ^0xC3F68E87
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
	
		case -2106214197:
			return 104;
	
		case -2101264851:
			return 195;
	
		case -2073072369:
			return 59;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
	
		case -2058120606:
			return 197;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 92;
	
		case -2022369555:
			return 265;
	
		case -2021582629:
			return 112;
	
		case -2020023971:
			return 278;
	
		case -1957523409:
			return 208;
	
		case -1952856164:
			return 165;
	
		case -1949204933:
			return 276;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
	
		case -1852605133:
			return 10;
	
		case -1847672446:
			return 376;
	
		case -1840704908:
			return 289;
	
		case -1838712533:
			return 26;
	
		case -1838352012:
			return 57;
	
		case -1835851517:
			return 56;
	
		case -1831552326:
			return 123;
	
		case -1825294305:
			return 266;
	
		case -1824738758:
			return 277;
	
		case -1818850842:
			return 253;
	
		case -1799960545:
			return 257;
	
		case -1764522338:
			return 372;
	
		case -1763509974:
			return 141;
	
		case -1741667789:
			return 64;
	
		case -1738165526:
			return 3;
	
		case -1718674470:
			return 23;
	
		case -1717960576:
			return 61;
	
		case -1711895055:
			return 13;
	
		case -1706438978:
			return 233;
	
		case -1700452710:
			return 53;
	
		case -1674179981:
			return 55;
	
		case -1666278201:
			return 33;
	
		case -1612662716:
			return 201;
	
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
	
		case -1582926490:
			return 146;
	
		case -1579419919:
			return 147;
	
		case -1558439474:
			return 301;
	
		case -1556423728:
			return 218;
	
		case -1532284567:
			return 116;
	
		case -1530132748:
			return 311;
	
		case -1524512402:
			return 209;
	
		case -1523910291:
			return 155;
	
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
	
		case -1447311849:
			return 215;
	
		case -1436021162:
			return 172;
	
		case -1433686245:
			return 12;
	
		case -1425209566:
			return 32;
	
		case -1419919497:
			return 22;
	
		case -1414537028:
			return 73;
	
		case -1405998267:
			return 105;
	
		case -1344601768:
			return 314;
	
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
	
		case -1329135070:
			return 140;
	
		case -1318987693:
			return 222;
	
		case -1311865656:
			return 37;
	
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
	
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
	
		case -1282804314:
			return 270;
	
		case -1278074582:
			return 171;
	
		case -1271608261:
			return 98;
	
		case -1257057567:
			return 21;
	
		case -1241340344:
			return 300;
	
		case -1236261996:
			return 235;
	
		case -1232809834:
			return 113;
	
		case -1230112817:
			return 170;
	
		case -1223121209:
			return 126;
	
		case -1215445344:
			return 131;
	
		case -1209597203:
			return 333;
	
		case -1206122982:
			return 156;
	
		case -1187950766:
			return 45;
	
		case -1179948750:
			return 136;
	
		case -1170496998:
			return 46;
	
		case -1164215952:
			return 234;
	
		case -1151084372:
			return 124;
	
		case -1145519186:
			return 100;
	
		case -1124061431:
			return 242;
	
		case -1123615607:
			return 29;
	
		case -1080627546:
			return 378;
	
		case -1077783786:
			return 194;
	
		case -1063147448:
			return 151;
	
		case -1062490780:
			return 79;
	
		case -1060078174:
			return 239;
	
		case -1056767524:
			return 176;
	
		case -1053549743:
			return 58;
	
		case -1029225159:
			return 106;
	
		case -1014145132:
			return 288;
	
		case -978957786:
			return 251;
	
		case -959357075:
			return 36;
	
		case -950054349:
			return 152;
	
		case -939420910:
			return 44;
	
		case -939114198:
			return 221;
	
		case -919512195:
			return 40;
	
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
	
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
	
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
	
		case -879507474:
			return 236;
	
		case -868076593:
			return 84;
	
		case -857964358:
			return 83;
	
		case -853383233:
			return 65;
	
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
	
		case -828139293:
			return 260;
	
		case -811637947:
			return 245;
	
		case -796902762:
			return 88;
	
		case -792853067:
			return 254;
	
		case -789397228:
			return 262;
	
		case -785605431:
			return 250;
	
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
	
		case -764163380:
			return 228;
	
		case -748969569:
			return 78;
	
		case -741351766:
			return 60;
	
		case -736853952:
			return 366;
	
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
	
		case -699277634:
			return 4;
	
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
	
		case -683458244:
			return 80;
	
		case -666014935:
			return 157;
	
		case -664512648:
			return 67;
	
		case -664252410:
			return 191;
	
		case -644722288:
			return 261;
	
		case -640663440:
			return 214;
	
		case -639037538:
			return 185;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_17(Hash hParam0) // Position - 0x2C0F Hash - 0x78302BA0 ^0x558F2DE9
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		STREAMING::REQUEST_IPL_HASH(hParam0);

	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x2C27 Hash - 0xF55E891F ^0xF55E891F
{
	func_23(uParam0, iParam1);
	return;
}

BOOL func_19(int iParam0, int iParam1) // Position - 0x2C37 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_20() // Position - 0x2C46 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_11(-939420910);
	func_11(-1187950766);
	func_11(356365161);
	func_11(753127042);
	func_11(-2038424081);
	func_11(1884271742);
	func_11(459290420);
	return;
}

void func_21() // Position - 0x2C8D Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_11(704802028);
	func_11(588987611);
	func_11(2008888900);
	func_11(1649996811);
	func_11(227918160);
	func_11(168171957);
	func_11(1193080109);
	func_11(-491981251);
	func_11(-639037538);
	func_11(-618620429);
	return;
}

void func_22(Hash hParam0) // Position - 0x2CEF Hash - 0x7DD010A2 ^0xA0826F55
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		STREAMING::REMOVE_IPL_HASH(hParam0);

	return;
}

void func_23(var uParam0, int iParam1) // Position - 0x2D06 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

