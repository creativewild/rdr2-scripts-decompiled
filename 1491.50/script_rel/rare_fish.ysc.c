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
	Any anLocal_19 = 0;
	int iLocal_20 = 0;
	Hash hLocal_21 = 0;
	int iLocal_22 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x46D0366C ^0x2509308E
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	anLocal_19 = anScriptParam_0;
	iLocal_20 = anScriptParam_0.f_1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || func_1() != -1)
		func_2(&uLocal_14);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
		func_2(&uLocal_14);

	hLocal_21 = func_3();
	uLocal_16 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_20, true) };

	if (hLocal_21 == joaat("legendary_fishing_spot_13"))
		if (!func_4(21))
			if (!func_5(joaat("HAI_FISHING_02")))
				func_2(&uLocal_14);

	if (hLocal_21 == joaat("legendary_fishing_spot_14") && !func_6(148))
		func_2(&uLocal_14);

	if (func_7(hLocal_21))
		func_2(&uLocal_14);

	if (func_8() && func_9() == 0)
		func_2(&uLocal_14);

	while (func_10())
	{
		if (func_11())
			func_2(&uLocal_14);
	
		if (func_12() == 654481153)
			if (func_13(&uLocal_14))
				func_2(&uLocal_14);
		else if (func_14(0, false, true))
			func_2(&uLocal_14);
		else if (func_13(&uLocal_14))
			func_2(&uLocal_14);
	
		BUILTIN::WAIT(0);
	}

	func_2(&uLocal_14);
	return;
}

BOOL func_1() // Position - 0x124 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_2(var uParam0) // Position - 0x132 Hash - 0x5E7BCEF8 ^0x39C5CD79
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		MAP::REMOVE_BLIP(&(uParam0->f_1));

	SCRIPTS::_0xE7282390542F570D(anLocal_19);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

Hash func_3() // Position - 0x158 Hash - 0x6ED8C483 ^0xD85351A0
{
	int num;

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_20))
		num = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iLocal_20));

	return COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, -940661134, 0);
}

BOOL func_4(int iParam0) // Position - 0x181 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_15(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_5(Hash hParam0) // Position - 0x1E0 Hash - 0x8C3B6E7 ^0x8C3B6E7
{
	int num;

	num = func_17(func_16(), hParam0);
	return func_18(num) > 0;
}

BOOL func_6(int iParam0) // Position - 0x1FC Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_1() != -1)
		return false;

	if (!func_19(iParam0))
		return false;

	return func_20(Global_1347702[iParam0 /*49*/].f_15);
}

BOOL func_7(Hash hParam0) // Position - 0x22C Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_8() // Position - 0x23C Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

int func_9() // Position - 0x25B Hash - 0xF04428FF ^0xD9AF5F7C
{
	if (!func_15(Global_1835011[4 /*74*/].f_1, true))
		return 0;
	else if (!func_15(Global_1347702[66 /*49*/].f_15, true))
		return 1;
	else if (!func_15(Global_1347702[67 /*49*/].f_15, true))
		return 2;
	else if (!func_15(Global_1835011[38 /*74*/].f_1, true))
		return 3;
	else if (!func_15(Global_1347702[68 /*49*/].f_15, true))
		return 4;
	else if (!func_15(Global_1835011[59 /*74*/].f_1, true))
		return 5;
	else if (!func_15(Global_1835011[67 /*74*/].f_1, true))
		return 7;
	else
		return 8;

	return -1;
}

BOOL func_10() // Position - 0x31E Hash - 0xBC5DFEF2 ^0x4AA877CF
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_2(&uLocal_14);
		return false;
	}

	return true;
}

BOOL func_11() // Position - 0x338 Hash - 0x8EFCB348 ^0x907D7217
{
	if (PED::IS_PED_INJURED(Global_35))
		return true;

	return false;
}

int func_12() // Position - 0x34F Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1391438.f_414;
}

BOOL func_13(var uParam0) // Position - 0x35E Hash - 0x3D0F188F ^0x3D0F188F
{
	switch (func_21(uParam0))
	{
		case 0:
			if (func_22(hLocal_21))
				func_2(uParam0);
			else
				func_23(uParam0, 1);
			break;
	
		case 1:
			if (func_24(16))
				iLocal_22 = 100;
			else
				iLocal_22 = 50;
		
			if (func_25(Global_35, uLocal_16, false) < (float)iLocal_22)
			{
				if (hLocal_21 == joaat("legendary_fishing_spot_14") || hLocal_21 == joaat("legendary_fishing_spot_13"))
				{
					if (!func_4(21) && !func_5(joaat("HAI_FISHING_02")))
					{
					}
					else
					{
						func_26();
					}
				}
				else
				{
					func_26();
				}
			
				func_23(uParam0, 2);
			}
			break;
	
		case 2:
			func_27(hLocal_21);
		
			if (func_28(hLocal_21))
			{
				if (!func_30(func_29(hLocal_21)))
					MAP::_MAP_DISCOVER_REGION(func_31(hLocal_21));
			
				return true;
			}
			break;
	}

	return false;
}

BOOL func_14(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x440 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_32())
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
		num = func_33(Global_1898164.f_1[0 /*5*/]);
	
		if (func_19(num) && func_34(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_35(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_15(int iParam0, BOOL bParam1) // Position - 0x644 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_36(iParam0))
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

eStackSize func_16() // Position - 0x675 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

int func_17(eStackSize essParam0, Hash hParam1) // Position - 0x683 Hash - 0xE769BAE7 ^0x9D2D6FC6
{
	if (hParam1 == joaat("HAI_BANK_ROBBERY_01"))
		return func_38(0, func_37(hParam1, 1), 11, joaat("cabr01"));

	return func_38(0, func_37(hParam1, 1), 11, hParam1);
}

int func_18(int iParam0) // Position - 0x6BB Hash - 0xE67E3975 ^0x6B59BE69
{
	if (!func_35(iParam0))
		return -1;

	return BUILTIN::SHIFT_RIGHT(func_39(iParam0) & 2147418112, 16);
}

BOOL func_19(int iParam0) // Position - 0x6E3 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_20(int iParam0) // Position - 0x6F9 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_36(iParam0);
	return num == 3 || num == 4;
}

int func_21(var uParam0) // Position - 0x717 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

BOOL func_22(Hash hParam0) // Position - 0x722 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

void func_23(var uParam0, int iParam1) // Position - 0x732 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_24(int iParam0) // Position - 0x73F Hash - 0x9921E361 ^0xB910E238
{
	return Global_40.f_12019.f_4 && iParam0 != false;
}

float func_25(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x754 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_26() // Position - 0x77C Hash - 0x32FAE826 ^0xA965602B
{
	if (func_8())
		if (func_40(0) && !func_40(41))
			func_41(380, true);
		else
			func_41(379, true);

	return;
}

void func_27(Hash hParam0) // Position - 0x7B2 Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_7(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

BOOL func_28(Hash hParam0) // Position - 0x7CB Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("legendary_fishing_spot_11"):
		case joaat("legendary_fishing_spot_12"):
		case joaat("legendary_fishing_spot_10"):
		case joaat("legendary_fishing_spot_06"):
		case joaat("legendary_fishing_spot_05"):
		case joaat("legendary_fishing_spot_04"):
		case joaat("legendary_fishing_spot_03"):
			return true;
	}

	return false;
}

Hash func_29(Hash hParam0) // Position - 0x80D Hash - 0xF10AB031 ^0xA29D6E24
{
	switch (hParam0)
	{
		case joaat("legendary_fishing_spot_11"):
			return joaat("legendary_fish_11");
	
		case joaat("legendary_fishing_spot_12"):
			return joaat("legendary_fish_12");
	
		case joaat("legendary_fishing_spot_10"):
			return joaat("legendary_fish_10");
	
		case joaat("legendary_fishing_spot_06"):
			return joaat("legendary_fish_06");
	
		case joaat("legendary_fishing_spot_05"):
			return joaat("legendary_fish_05");
	
		case joaat("legendary_fishing_spot_04"):
			return joaat("legendary_fish_04");
	
		case joaat("legendary_fishing_spot_03"):
			return joaat("legendary_fish_03");
	
		default:
		
	}

	return 0;
}

BOOL func_30(Hash hParam0) // Position - 0x880 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

Hash func_31(Hash hParam0) // Position - 0x890 Hash - 0xB8EC44B7 ^0x62913F2D
{
	switch (hParam0)
	{
		case joaat("legendary_fishing_spot_09"):
			return 505929754;
	
		case joaat("legendary_fishing_spot_08"):
			return 1937997726;
	
		case joaat("legendary_fishing_spot_11"):
			return 235447783;
	
		case joaat("legendary_fishing_spot_07"):
			return -1560294747;
	
		case joaat("legendary_fishing_spot_12"):
			return 1793239293;
	
		case joaat("legendary_fishing_spot_02"):
			return -1553566002;
	
		case joaat("legendary_fishing_spot_01"):
			return 1791726215;
	
		case joaat("legendary_fishing_spot_10"):
			return -312076753;
	
		case joaat("legendary_fishing_spot_13"):
			return -1142443514;
	
		case joaat("legendary_fishing_spot_06"):
			return -414895106;
	
		case joaat("legendary_fishing_spot_05"):
			return -1424874851;
	
		case joaat("legendary_fishing_spot_04"):
			return 1214218277;
	
		case joaat("legendary_fishing_spot_03"):
			return -528070704;
	
		default:
		
	}

	return 0;
}

BOOL func_32() // Position - 0x957 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_33(int iParam0) // Position - 0x9AA Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_35(iParam0))
		return -1;

	return func_43(func_42(iParam0));
}

BOOL func_34(int iParam0, int iParam1) // Position - 0x9CA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_35(int iParam0) // Position - 0x9D9 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_36(int iParam0) // Position - 0xA0C Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_35(iParam0))
		return -1;

	return func_44(iParam0);
}

int func_37(Hash hParam0, int iParam1) // Position - 0xA28 Hash - 0x6EE84C5C ^0x6EE84C5C
{
	switch (hParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return 1;
	
		case joaat("HAI_BANK_ROBBERY_01"):
			return 10;
	
		case -1348173149:
			return 17;
	
		case joaat("HAI_HOME_ROBBERY_01"):
			return 14;
	
		case joaat("HAI_COACH_ROBBERY_01"):
			return 7;
	
		case -709866131:
			return 16;
	
		case joaat("HAI_COACH_ROBBERY_03"):
			return 11;
	
		case -589165916:
			return 0;
	
		case joaat("HAI_COACH_ROBBERY_02"):
			return 8;
	
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return 4;
	
		case joaat("HAI_COACH_ROBBERY_04"):
			return 12;
	
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return 9;
	
		case joaat("HAI_FISHING_01"):
			return 2;
	
		case joaat("HAI_RUSTLING_02"):
			return 13;
	
		case joaat("HAI_FISHING_02"):
			return 3;
	
		case joaat("HAI_HUNTING_06"):
			return 5;
	
		case joaat("HAI_DOMINOES_01"):
			return 6;
	
		case 2061320468:
			return 15;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_38(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0xB07 Hash - 0x71EF3E96 ^0x557A7961
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
				num2 = 570;
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

	if (num2 >= func_45())
		num2 = func_45();

	flag = func_46(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_42(num5) == flag)
				return num5;
		
			if (func_42(num5) == false)
				return func_47(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_42(num5) == flag)
				return num5;
		
			if (func_42(num5) == false)
				return func_47(num3, num4, iParam2, i, hParam3);
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
				return func_47(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

int func_39(int iParam0) // Position - 0xDC2 Hash - 0x6A809E0B ^0xD5C1247E
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_2;

	return -1;
}

BOOL func_40(int iParam0) // Position - 0xDE1 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_1() != -1)
		return false;

	if (!func_19(iParam0))
		return false;

	return func_15(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_41(int iParam0, BOOL bParam1) // Position - 0xE12 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_48(iParam0, &num, &num2);

	if (!func_49(iParam0, num, num2, bParam1))
		return;

	func_50(num, num2);
	return;
}

BOOL func_42(int iParam0) // Position - 0xE3F Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_43(BOOL bParam0) // Position - 0xE7D Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_44(int iParam0) // Position - 0xE90 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_51(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_45() // Position - 0xED1 Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_46(int iParam0, int iParam1, int iParam2) // Position - 0xEEC Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_47(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xF12 Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_52(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_45())
		return -1;

	flag = func_46(iParam0, iParam1, iParam2);
	num = iParam3;
	func_53(num, 0);
	func_54(num, 0);
	func_55(num, 0);
	func_56(num, 0);
	func_57(num, flag);

	if (hParam4 != 0)
		func_58(num, hParam4);

	return num;
}

void func_48(int iParam0, var uParam1, var uParam2) // Position - 0xFB1 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_49(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xFCD Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_59(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_60(iParam0))
		return false;

	if (func_61(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_62(iParam0, 1) || func_63(32768))
		if (!func_62(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_64())
		return false;

	return true;
}

void func_50(int iParam0, int iParam1) // Position - 0x106F Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

int func_51(int iParam0) // Position - 0x1093 Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_52(int iParam0) // Position - 0x1114 Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_53(int iParam0, int iParam1) // Position - 0x112A Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_65(iParam0);
	else
		func_66(iParam0, iParam1);

	func_67();
	return;
}

void func_54(int iParam0, int iParam1) // Position - 0x1172 Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_55(int iParam0, int iParam1) // Position - 0x1192 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_56(int iParam0, int iParam1) // Position - 0x11B2 Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_57(int iParam0, BOOL bParam1) // Position - 0x11D2 Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_58(int iParam0, Hash hParam1) // Position - 0x11FD Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

BOOL func_59(int iParam0, int iParam1) // Position - 0x122C Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_1() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_60(int iParam0) // Position - 0x125F Hash - 0x3E25647A ^0x3E25647A
{
	if (func_1() != -1)
		if (func_62(iParam0, 4))
			return false;
	else if (func_62(iParam0, 2))
		return false;

	return true;
}

BOOL func_61(int iParam0) // Position - 0x128F Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_62(iParam0, 65536) && !func_62(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_62(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_62(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_62(int iParam0, int iParam1) // Position - 0x133B Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_63(int iParam0) // Position - 0x1354 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_64() // Position - 0x1367 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

int func_65(int iParam0) // Position - 0x1376 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_51(iParam0);

	if (num < 0)
		return 0;

	return func_68(num);
}

int func_66(int iParam0, int iParam1) // Position - 0x1396 Hash - 0xF3EA5EAF ^0xA48F5774
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

void func_67() // Position - 0x1506 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

int func_68(int iParam0) // Position - 0x1529 Hash - 0x78E19743 ^0x6ACC64F5
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

int func_69(int iParam0) // Position - 0x15DD Hash - 0x6DD34799 ^0x352A62D8
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

