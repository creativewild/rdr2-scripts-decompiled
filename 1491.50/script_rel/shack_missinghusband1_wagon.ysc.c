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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 6;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 6;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 6;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 6;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 4;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 3;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	Volume volLocal_77 = 0;
	int iLocal_78 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xB8971FE1 ^0xABB53348
{
	int num;
	int num2;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_14.f_56 = uScriptParam_0;
	uLocal_14.f_56.f_1 = uScriptParam_0.f_1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&uLocal_14);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uScriptParam_0.f_1))
		func_1(&uLocal_14);

	if (func_2(uLocal_73, 1, 0, 0))
		func_1(&uLocal_14);

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_77))
		volLocal_77 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1618.4851f, -200.3116f, 156.5484f, 0f, 0f, 0f, 83f, 83f, 40f, "MissingHusbandCrashRestriction");

	while (!func_3(256))
	{
		BUILTIN::WAIT(0);
	}

	uLocal_73 = { TASK::_GET_SCENARIO_POINT_COORDS(uScriptParam_0.f_1, true) };
	fLocal_76 = TASK::_GET_SCENARIO_POINT_HEADING(uScriptParam_0.f_1, true);

	while (func_4())
	{
		switch (iLocal_78)
		{
			case 0:
				if (!func_5(num))
					num = func_8(func_6(8192), 0, 3, func_7(8192));
			
				if (func_9(&num, &num2))
					if (!func_10(num2, 4) || !func_10(num2, 8))
						iLocal_78 = 1;
				break;
		
			case 1:
				if (func_12(&uLocal_14, 8192, &uLocal_14, 18, 0, func_11(), false, 0))
				{
					func_13(volLocal_77, "SP_MissingHusbandWagon1_Block", true, 0, 0, false, -1082130432);
					iLocal_78 = 2;
				}
				break;
		
			case 2:
				break;
		
			default:
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_14);

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(10))
	{
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0x17B Hash - 0xE30A095F ^0x12A0D58D
{
	if (func_14() != -1)
		return;

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_77))
	{
		func_15(volLocal_77);
		VOLUME::DELETE_VOLUME(volLocal_77);
	}

	if (SCRIPTS::DOES_THREAD_EXIST(*uParam0))
		SCRIPTS::_REQUEST_THREAD_EXIT(*uParam0);

	SCRIPTS::_0xE7282390542F570D(uParam0->f_56);
	return;
}

BOOL func_2(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1BD Hash - 0x3F4C1B1 ^0x898E9E6F
{
	var unk;
	var unk6;

	if (_IS_NULL_VECTOR(uParam0))
		return false;

	unk = 4;
	unk[0] = iParam4;
	unk6 = 4;
	unk6[0] = 16384;
	unk6[1] = iParam5;

	if (VOLUME::_0x870E9981ED27C815(uParam0, &unk, &unk6, iParam3))
		return true;

	return false;
}

BOOL func_3(BOOL bParam0) // Position - 0x20A Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_21 && bParam0 != false;
}

BOOL func_4() // Position - 0x21A Hash - 0xE8C12374 ^0xB83BE60B
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return false;

	if (func_14() != -1)
		return false;

	return true;
}

BOOL func_5(int iParam0) // Position - 0x23A Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_6(int iParam0) // Position - 0x26D Hash - 0x50D6DDCE ^0x50D6DDCE
{
	switch (iParam0)
	{
		case 2:
			return 25;
	
		case 4:
			return 105;
	
		case 8:
			return 78;
	
		case 16:
			return 51;
	
		case 32:
			return 41;
	
		case 64:
			return 108;
	
		case 128:
			return 44;
	
		case 256:
			return 53;
	
		case 512:
			return 84;
	
		case 1024:
			return 22;
	
		case 2048:
			return 73;
	
		case 4096:
			return 103;
	
		case 8192:
			return 18;
	
		case 16384:
			return 46;
	
		case 32768:
			return 0;
	
		case 65536:
			return 106;
	
		case 131072:
			return 47;
	
		case 262144:
			return 101;
	
		default:
		
	}

	return -1;
}

Hash func_7(int iParam0) // Position - 0x346 Hash - 0xB8EC44B7 ^0x3329A2B3
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
	
		case 4:
			return -520696743;
	
		case 8:
			return -295901403;
	
		case 16:
			return -1445837674;
	
		case 32:
			return -75278298;
	
		case 64:
			return -675249331;
	
		case 128:
			return -1822243680;
	
		case 256:
			return -1307199059;
	
		case 512:
			return -17701163;
	
		case 1024:
			return -172170798;
	
		case 2048:
			return 1836682179;
	
		case 4096:
			return -67934460;
	
		case 8192:
			return 410776537;
	
		case 16384:
			return -240986174;
	
		case 32768:
			return 1505721140;
	
		case 65536:
			return 2023114891;
	
		case 131072:
			return -30217677;
	
		case 262144:
			return 653209800;
	
		default:
		
	}

	return 0;
}

int func_8(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x453 Hash - 0x71EF3E96 ^0x557A7961
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	int num5;

	num3 = iParam0;
	num4 = iParam1;

	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 100;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
		
			case 2:
				num = 101;
				num2 = 170;
				break;
		
			case 3:
				num = 171;
				num2 = 190;
				break;
		
			case 4:
				num = 191;
				num2 = 230;
				break;
		
			case 5:
				num = 231;
				num2 = 260;
				break;
		
			case 6:
				num = 261;
				num2 = 290;
				break;
		
			case 7:
				num = 291;
				num2 = 370;
				break;
		
			case 8:
				num = 371;
				num2 = &func_5;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
		
			case 9:
				num = 571;
				num2 = 650;
				break;
		
			case 10:
				return -1;
		
			case 11:
				num = 651;
				num2 = 750;
				break;
		
			case 12:
				return -1;
		
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 200;
				break;
		
			case 2:
				num = 201;
				num2 = 15700;
				break;
		
			case 4:
				num = 15701;
				num2 = 16200;
				break;
		
			case 6:
				return -1;
		
			case 7:
				return -1;
		
			case 8:
				return -1;
		
			case 10:
				num = 19201;
				num2 = 20000;
				break;
		
			case 12:
				num = 16201;
				num2 = 19200;
				break;
		
			default:
				return -1;
		}
	}

	if (num2 >= func_17())
		num2 = func_17();

	flag = func_18(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_19(num5) == flag)
				return num5;
		
			if (func_19(num5) == false)
				return func_20(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_19(num5) == flag)
				return num5;
		
			if (func_19(num5) == false)
				return func_20(num3, num4, iParam2, i, hParam3);
		}
	}
	else
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == flag)
				return i;
		}
	
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == false)
				return func_20(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

BOOL func_9(var uParam0, var uParam1) // Position - 0x70E Hash - 0xE84D99CA ^0xE84D99CA
{
	if (func_5(*uParam0))
	{
		*uParam1 = func_21(*uParam0);
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_10(int iParam0, int iParam1) // Position - 0x736 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

char* func_11() // Position - 0x745 Hash - 0x9DE5C211 ^0x9DE5C211
{
	return "shack_missinghusband1";
}

BOOL func_12(Any* panParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, BOOL bParam6, int iParam7) // Position - 0x750 Hash - 0xF390918E ^0x81B5FFBA
{
	int num;

	if (func_14() != -1)
		return false;

	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam2, false))
		return false;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(panParam0->f_56.f_1))
		return false;

	if (bParam6 && func_22(128, false, true))
		return false;

	if (iParam7 && func_23(PLAYER::GET_PLAYER_INDEX(), true, true, true))
		return false;

	panParam0->f_48 = 1;
	panParam0->f_1 = iParam1;
	panParam0->f_5 = func_8(func_6(iParam1), 0, 3, func_7(iParam1));
	func_24(&(panParam0->f_5), &(panParam0->f_3));

	if (!func_10(panParam0->f_3, 4))
		num = 4;
	else if (!func_10(panParam0->f_3, 8))
		num = 8;
	else if (!func_10(panParam0->f_3, 16))
		num = 16;
	else if (!func_10(panParam0->f_3, 32))
		num = 32;
	else if (!func_10(panParam0->f_3, 64))
		num = 64;

	if (iParam1 == 32768)
		if (!func_25(panParam0))
			return false;

	if (!func_10(panParam0->f_3, 1))
		func_26(panParam0, iParam1, &(panParam0->f_5), iParam3, iParam4) && !func_10(panParam0->f_3, 2);

	if (!func_10(panParam0->f_3, num))
	{
		if (func_10(panParam0->f_3, 2))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(*uParam2, false))
			{
				SCRIPTS::REQUEST_SCRIPT(sParam5);
			
				if (SCRIPTS::HAS_SCRIPT_LOADED(sParam5))
				{
					panParam0->f_52 = { func_27(iParam1) };
					panParam0->f_5 = func_8(func_6(iParam1), 0, 3, func_7(iParam1));
					*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sParam5, panParam0, 59, 1024);
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam5);
					return true;
				}
			}
		}
	}

	return false;
}

Volume func_13(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x907 Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_28(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

BOOL func_14() // Position - 0x94B Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_15(Volume volParam0) // Position - 0x959 Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_29(volumeCoords, 0);
	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x981 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_17() // Position - 0x9AB Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_18(int iParam0, int iParam1, int iParam2) // Position - 0x9C6 Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

BOOL func_19(int iParam0) // Position - 0x9EC Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_20(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xA2A Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_30(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_17())
		return -1;

	flag = func_18(iParam0, iParam1, iParam2);
	num = iParam3;
	func_31(num, 0);
	func_32(num, 0);
	func_33(num, 0);
	func_34(num, 0);
	func_35(num, flag);

	if (hParam4 != 0)
		func_36(num, hParam4);

	return num;
}

int func_21(int iParam0) // Position - 0xAC9 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_5(iParam0))
		return -1;

	return func_37(iParam0);
}

BOOL func_22(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAE5 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_38())
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
		num = func_39(Global_1898164.f_1[0 /*5*/]);
	
		if (func_40(num) && func_41(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_5(Global_1898164.f_1[0 /*5*/]))
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

int func_23(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xCE9 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_42(bParam1, bParam2, bParam3);

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

BOOL func_24(var uParam0, var uParam1) // Position - 0xE1E Hash - 0xE8BECA8A ^0xE8BECA8A
{
	if (func_5(*uParam0))
	{
		*uParam1 = func_43(*uParam0);
	
		if (!func_10(*uParam1, 2))
			func_44(uParam1, 2);
	
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_25(Any* panParam0) // Position - 0xE59 Hash - 0xD5755093 ^0x16BB351A
{
	float num;
	var unk;
	float num2;

	if (!func_10(panParam0->f_3, 32768) && func_45(panParam0->f_1, &unk) && func_46(panParam0->f_1, 0, &num))
	{
		num2 = func_47();
	
		if (func_47() - unk >= num)
			func_44(&(panParam0->f_3), 32768);
	}

	if (func_10(panParam0->f_3, 32768))
		return true;

	return false;
}

BOOL func_26(Any* panParam0, int iParam1, var uParam2, int iParam3, int iParam4) // Position - 0xEC3 Hash - 0xC9F4E105 ^0x5BAD37D2
{
	if (func_10(panParam0->f_3, 1))
		return true;

	if (panParam0->f_47 != 1)
		panParam0->f_47 = 0;

	switch (panParam0->f_47)
	{
		case 0:
			*uParam2 = func_8(iParam3, iParam4, 3, 0);
		
			if (!func_5(*uParam2))
			{
				return false;
			}
			else
			{
				if (!func_24(&(panParam0->f_5), &(panParam0->f_3)))
					return false;
				else
					func_44(&(panParam0->f_3), 1);
			
				panParam0->f_47 = 1;
			}
			break;
	
		case 1:
			if (func_10(panParam0->f_3, 1))
				return true;
			else
				panParam0->f_47 = 0;
			break;
	}

	return false;
}

Vector3 func_27(int iParam0) // Position - 0xF61 Hash - 0x563C355B ^0x563C355B
{
	switch (iParam0)
	{
		case 2:
			return -1553.0688f, 254.00018f, 113.79889f;
	
		case 4:
			return 1457.149f, -1578.7789f, 72.1939f;
	
		case 8:
			return 1783.4983f, 462.5527f, 112.0378f;
	
		case 16:
			return 1982.5393f, 1192.3918f, 170.408f;
	
		case 32:
			return -155.8262f, 1491.0543f, 111.7707f;
	
		case 64:
			return -2054.879f, -1912.2272f, 111.2719f;
	
		case 128:
			return -1021.7427f, 1692.3861f, 243.3139f;
	
		case 256:
			return 32.3207f, 2092.4028f, 276.5115f;
	
		case 512:
			return 1888.8545f, 301.6055f, 76.1451f;
	
		case 1024:
			return -2370.0781f, 472.8013f, 131.228f;
	
		case 2048:
			return 1666.7937f, 2180.789f, 316.349f;
	
		case 4096:
			return 1134.4437f, -979.7666f, 68.4026f;
	
		case 8192:
			return -1728.5825f, -83.1805f, 180.4762f;
	
		case 16384:
			return -1961.9958f, 2159.5103f, 327.3775f;
	
		case 32768:
			return 2089.3643f, -1816.9564f, 42.7298f;
	
		case 65536:
			return 1389.7507f, -2083.8103f, 56.0727f;
	
		case 131072:
			return -690.1562f, 1043.8699f, 134.0042f;
	
		case 262144:
			return 1184.4f, -101.4f, 97.3f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Volume func_28(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x1124 Hash - 0xC1E3A062 ^0xD42263D3
{
	Volume volume;
	int num;
	var entityCoords;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	if (fParam3 <= 0.1f)
		return 0;

	if (_IS_NULL_VECTOR(vParam0))
		return 0;

	num = 0;

	if (!bParam5)
		num = num | 2;

	num = num | 1;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam6))
	{
		if (func_48(vParam0))
			return 0;
	
		volume = VOLUME::_CREATE_VOLUME_LOCK(vParam0, fParam3, num, 0);
	}
	else
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam6, false, false) };
		volume = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(eParam6, fParam3, num, 0);
	}

	if (iParam7 != 0)
		VOLUME::_0xB440F4E35393FC39(volume, iParam7);

	if (iParam9 >= 0f)
		VOLUME::_0xD460135C98940274(volume, iParam9);

	func_49(volume, bParam8);
	return volume;
}

void func_29(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x11DE Hash - 0x303BFB8D ^0xBCF80455
{
	int i;
	Volume volLockRequestId;
	Vector3 vector;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			vector = { VOLUME::_0xC4019CF9AE8E931A(volLockRequestId) };
		
			if (func_50(vector, uParam0, 2f, true))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 2f, 0, iParam3, 16384))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
					Global_1911670[i] = 0;
				}
			}
		}
	}

	return;
}

BOOL func_30(int iParam0) // Position - 0x1262 Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_31(int iParam0, int iParam1) // Position - 0x1278 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_51(iParam0);
	else
		func_52(iParam0, iParam1);

	func_53();
	return;
}

void func_32(int iParam0, int iParam1) // Position - 0x12C0 Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_33(int iParam0, int iParam1) // Position - 0x12E0 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_34(int iParam0, int iParam1) // Position - 0x1300 Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_35(int iParam0, BOOL bParam1) // Position - 0x1320 Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_36(int iParam0, Hash hParam1) // Position - 0x134B Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

int func_37(int iParam0) // Position - 0x137A Hash - 0xB1EC3C9 ^0x6FAB5D7B
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_4;

	return 0;
}

BOOL func_38() // Position - 0x1399 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_39(int iParam0) // Position - 0x13EC Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_5(iParam0))
		return -1;

	return func_54(func_19(iParam0));
}

BOOL func_40(int iParam0) // Position - 0x140C Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_41(int iParam0, int iParam1) // Position - 0x1422 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_42(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1431 Hash - 0xC9655EC3 ^0x88C9AFE1
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

int func_43(int iParam0) // Position - 0x14CF Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_5(iParam0))
		return -1;

	return func_55(iParam0);
}

void func_44(var uParam0, int iParam1) // Position - 0x14EB Hash - 0xF55E891F ^0xF55E891F
{
	func_56(uParam0, iParam1);
	return;
}

BOOL func_45(int iParam0, var uParam1) // Position - 0x14FB Hash - 0x3E138978 ^0x3E138978
{
	int num;

	num = func_57(iParam0);

	if (num != 0)
	{
		*uParam1 = func_58(iParam0);
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_46(int iParam0, int iParam1, var uParam2) // Position - 0x1526 Hash - 0x79F5469D ^0x79F5469D
{
	int num;

	if (!func_5(num))
		num = func_8(func_6(iParam0), iParam1, 3, func_7(iParam0));

	if (func_59(iParam0, uParam2))
	{
		*uParam2 = func_60(iParam0);
		return true;
	}

	return false;
}

float func_47() // Position - 0x1566 Hash - 0x5FC8DB2 ^0x961D5AF9
{
	float num;
	int value;
	int num2;
	int value2;
	int value3;
	int num3;
	eStackSize stackSize;

	stackSize = func_61();
	value3 = func_62(stackSize);
	num3 = func_63(stackSize);
	value2 = func_64(num3, value3);
	num2 = func_65(stackSize);
	value = func_66(stackSize);
	num = BUILTIN::TO_FLOAT(value) + (BUILTIN::TO_FLOAT(num2 - 1) * 24f) + (BUILTIN::TO_FLOAT(value2) * 24f) + (BUILTIN::TO_FLOAT(value3) * 365.2422f * 24f);
	return num;
}

BOOL func_48(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x15D7 Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_49(Volume volParam0, BOOL bParam1) // Position - 0x15F1 Hash - 0xEA796703 ^0x695D7925
{
	Volume volLockRequestId;
	int i;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volParam0);

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId) || volLockRequestId == volParam0)
		{
			Global_1911670[i] = volParam0;
			return 1;
		}
	}

	return 0;
}

BOOL func_50(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x1659 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

int func_51(int iParam0) // Position - 0x16AE Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_67(iParam0);

	if (num < 0)
		return 0;

	return func_68(num);
}

int func_52(int iParam0, int iParam1) // Position - 0x16CE Hash - 0xF3EA5EAF ^0xA48F5774
{
	int num;
	int num2;

	if (*Global_1058888.f_40431 >= 32)
		return -1;

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;

	if (*Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
		return 0;
	}

	num2 = 0;

	while (num2 < *Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			num2 = num2 + 1;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			func_69(num2);
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
	}

	if (*Global_1058888.f_40431 < 31)
	{
		num2 = *Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
	
		if (*Global_1058888.f_40431 > 32)
			Global_1058888.f_40431 = 32;
	
		return num2;
	}

	return -1;
}

void func_53() // Position - 0x183E Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

int func_54(BOOL bParam0) // Position - 0x1861 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_55(int iParam0) // Position - 0x1874 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

void func_56(var uParam0, int iParam1) // Position - 0x1893 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_57(int iParam0) // Position - 0x18A4 Hash - 0x759A7885 ^0x759A7885
{
	switch (iParam0)
	{
		case 2:
			return 1;
	
		case 4:
			return 2;
	
		case 8:
			return 3;
	
		case 16:
			return 4;
	
		case 32:
			return 5;
	
		case 64:
			return 6;
	
		case 128:
			return 7;
	
		case 256:
			return 8;
	
		case 512:
			return 9;
	
		case 1024:
			return 10;
	
		case 2048:
			return 11;
	
		case 4096:
			return 12;
	
		case 8192:
			return 13;
	
		case 16384:
			return 14;
	
		case 32768:
			return 15;
	
		case 65536:
			return 16;
	
		case 131072:
			return 17;
	
		case 262144:
			return 18;
	
		default:
		
	}

	return 0;
}

float func_58(int iParam0) // Position - 0x1974 Hash - 0x149415FC ^0x149415FC
{
	int num;

	num = func_57(iParam0);

	if (num == 0)
		return 0f;

	return Global_40.f_11959[num];
}

BOOL func_59(int iParam0, var uParam1) // Position - 0x1998 Hash - 0x7630EEB4 ^0x7630EEB4
{
	int num;

	num = func_57(iParam0);

	if (num != 0)
	{
		*uParam1 = func_60(iParam0);
		return true;
	}

	return false;
}

float func_60(int iParam0) // Position - 0x19BF Hash - 0x1C2976F3 ^0x60B265CF
{
	int num;

	num = func_57(iParam0);

	if (num == 0)
		return 0f;

	return Global_40.f_11959.f_20[num];
}

eStackSize func_61() // Position - 0x19E5 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_62(eStackSize essParam0) // Position - 0x19F1 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

int func_63(eStackSize essParam0) // Position - 0x1A16 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_64(int iParam0, int iParam1) // Position - 0x1A29 Hash - 0x24B83B6D ^0x24B83B6D
{
	int i;
	int num;
	int num2;

	num = iParam0 - 1;

	if (num > 0)
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = num2 + func_71(num, iParam1);
		}
	}

	return num2;
}

int func_65(eStackSize essParam0) // Position - 0x1A5F Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_66(eStackSize essParam0) // Position - 0x1A72 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_67(int iParam0) // Position - 0x1A85 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_68(int iParam0) // Position - 0x1B06 Hash - 0x78E19743 ^0x6ACC64F5
{
	int i;
	var unk;

	for (i = iParam0; i < *Global_1058888.f_40431; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1058888.f_40431.f_1[i /*2*/] = { Global_1058888.f_40431.f_1[i + 1 /*2*/] };
	}

	unk = -1;

	if (*Global_1058888.f_40431 < 32)
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { unk };

	Global_1058888.f_40431 = *Global_1058888.f_40431 - 1;

	if (*Global_1058888.f_40431 < 0)
		Global_1058888.f_40431 = 0;

	return 1;
}

int func_69(int iParam0) // Position - 0x1BBA Hash - 0x6DD34799 ^0x352A62D8
{
	int num;
	var unk;

	num = *Global_1058888.f_40431 - 1;
	unk = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1058888.f_40431.f_1[num + 1 /*2*/] = { Global_1058888.f_40431.f_1[num /*2*/] };
	
		num = num - 1;
	}

	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { unk };
	Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;

	if (*Global_1058888.f_40431 > 32)
		Global_1058888.f_40431 = 32;

	return 1;
}

var func_70(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1C5B Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_71(int iParam0, int iParam1) // Position - 0x1C72 Hash - 0x893AC59E ^0x893AC59E
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

