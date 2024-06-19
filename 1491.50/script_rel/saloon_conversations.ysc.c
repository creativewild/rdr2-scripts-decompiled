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
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	char* sLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = -1082130432;
	var uLocal_28 = -1082130432;
	var uLocal_29 = 0;
	var uLocal_30 = -1082130432;
	var uLocal_31 = -1082130432;
	var uLocal_32 = 0;
	var uLocal_33 = -1082130432;
	var uLocal_34 = -1082130432;
	var uLocal_35 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x636F46F3 ^0xB536A24E
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_23 = "beat_gang_camp_reminder";
	iLocal_24 = 23;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	iLocal_25 = iScriptParam_0;
	iLocal_25.f_1 = iScriptParam_0.f_1;

	if (func_2(iLocal_25.f_1) && func_3(iLocal_25))
	{
		while (!func_4(true) && !func_5(32768))
		{
			if (func_6(iScriptParam_0.f_2))
				break;
		
			func_7();
			BUILTIN::WAIT(0);
		}
	}

	func_1();
	return;
}

void func_1() // Position - 0x7D Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(int iParam0) // Position - 0x89 Hash - 0xBC12E9CA ^0xBC12E9CA
{
	if (iParam0 < 0 || iParam0 >= 3)
		return false;

	return true;
}

BOOL func_3(int iParam0) // Position - 0xA7 Hash - 0x3027E97B ^0x3027E97B
{
	if (iParam0 < 0 || iParam0 >= 9)
		return 0;

	return 1;
}

BOOL func_4(BOOL bParam0) // Position - 0xC6 Hash - 0xD5646B1 ^0x7FAD7A3A
{
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

	return false;
}

BOOL func_5(int iParam0) // Position - 0x122 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_6(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x135 Hash - 0x4E80E548 ^0x69C7DB91
{
	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		if (!Global_1935369.f_5[iLocal_25.f_1 /*11*/])
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam0, true) > 20f)
				return true;
	
		if (func_8(Global_1935630, 2097152))
			return true;
	}

	return false;
}

void func_7() // Position - 0x187 Hash - 0xE34B0FC1 ^0xD357853E
{
	if (Global_1879534.f_1 || Global_1879534)
		return;

	switch (iLocal_25)
	{
		case 1:
			func_9(&uLocal_33, 110, 1, 2796.2778f, -1168.0352f, 46.924f, true, iLocal_25.f_1);
			break;
	
		case 3:
			func_9(&uLocal_30, 101, 3, 1342.767f, -1374.869f, 79.5128f, true, iLocal_25.f_1);
			break;
	
		case 5:
			func_9(&uLocal_27, 84, 5, -316.4756f, 795.1207f, 116.6641f, false, iLocal_25.f_1);
			break;
	}

	return;
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x21F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_9(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6, int iParam7) // Position - 0x22E Hash - 0x89DC9A05 ^0xE9C9B6EF
{
	BOOL flag;

	switch (uParam0->f_2)
	{
		case 0:
			*uParam0 = -1f;
			uParam0->f_1 = -1f;
			func_10(uParam0, iParam1, 1);
			break;
	
		case 1:
			if (!Global_1935369.f_5[iParam7 /*11*/] && iParam1 != 101)
				break;
		
			if (iLocal_25 != iParam2)
			{
				func_10(uParam0, iParam1, 5);
			}
			else if (func_11(iParam1))
			{
				func_10(uParam0, iParam1, 3);
			}
			else
			{
				switch (iParam1)
				{
					case 84:
						flag = func_12();
						break;
				
					case 101:
						flag = func_13();
						break;
				
					case 110:
						flag = func_14();
						break;
				}
			
				if (flag)
				{
					func_15(iParam1, bParam6, fParam3, -1, false, false);
					*uParam0 = func_16();
					func_10(uParam0, iParam1, 2);
				}
			}
			break;
	
		case 2:
			if (func_16() - *uParam0 > 8f)
			{
				if (func_11(iParam1))
				{
					func_10(uParam0, iParam1, 3);
				}
				else if (func_17(iParam1) > 0)
				{
					func_10(uParam0, iParam1, 5);
				}
				else
				{
					uParam0->f_1 = func_16();
					func_10(uParam0, iParam1, 4);
				}
			}
			break;
	
		case 3:
			if (!func_11(iParam1))
			{
				uParam0->f_1 = func_16();
				func_10(uParam0, iParam1, 4);
			}
			else if (func_17(iParam1) > 0)
			{
				func_10(uParam0, iParam1, 5);
			}
			break;
	
		case 4:
			if (func_16() - uParam0->f_1 > 10f)
				func_10(uParam0, iParam1, 0);
			break;
	
		case 5:
			break;
	}

	return;
}

void func_10(var uParam0, int iParam1, int iParam2) // Position - 0x3BD Hash - 0x517D489E ^0x797F15FF
{
	uParam0->f_2 = iParam2;
	return;
}

BOOL func_11(int iParam0) // Position - 0x3CB Hash - 0x7647021A ^0x923E095B
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

BOOL func_12() // Position - 0x3DD Hash - 0xDF8745EE ^0x69D91B8B
{
	if (!func_18(84, 5, 0, -1082130432))
		return 0;

	if (func_19(84) >= 2)
		return 0;

	if (!func_20(84))
		return 0;

	return 1;
}

BOOL func_13() // Position - 0x417 Hash - 0xD817AB53 ^0x15EDD71
{
	if (!func_18(101, 3, 0, -1082130432))
		return 0;

	if (func_17(101) >= 1)
		return 0;

	if (func_21(18))
		return 0;

	if (func_22(1342.767f, -1374.869f, 79.5128f))
		return 0;

	return 1;
}

BOOL func_14() // Position - 0x46A Hash - 0x183B7D92 ^0x183B7D92
{
	if (func_23() != 5)
		return 0;

	if (!func_18(110, 1, 1, 20f))
		return 0;

	if (func_17(110) >= 1)
		return 0;

	if (func_11(107))
		return 0;

	if (!func_20(110))
		return 0;

	if (func_22(2796.2778f, -1168.0352f, 46.924f))
		return 0;

	return 1;
}

void func_15(int iParam0, BOOL bParam1, var uParam2, var uParam3, var uParam4, Player plParam5, BOOL bParam6, BOOL bParam7) // Position - 0x4D7 Hash - 0x99195764 ^0xEAF942EF
{
	if (!func_24(iParam0) && !bParam7)
		return;

	if (Global_1310750.f_16071 != -1 && !bParam6)
		return;

	func_25();

	if (plParam5 == -1)
		plParam5 = PLAYER::PLAYER_ID();

	Global_1310750.f_16103 = { uParam2 };
	Global_1327479 = iParam0;
	Global_1327479.f_1 = plParam5;
	Global_1327479.f_10 = func_26(iParam0, uParam2);
	func_27(0);
	func_28(0, 0, true);

	if (bParam1)
	{
		Global_1310750.f_16077 = 0;
		Global_1310750.f_16071 = -1;
		Global_1310750.f_16075 = 1;
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
		func_29(8);
		func_30(Global_36, 1137180672);
	}

	if (bParam7)
		Global_1310750.f_16076 = 1;

	return;
}

float func_16() // Position - 0x59C Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_17(int iParam0) // Position - 0x5CE Hash - 0x4D127F8 ^0x8622472F
{
	if (!func_24(iParam0))
		return 0;

	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

BOOL func_18(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5EF Hash - 0x22C7C542 ^0x65EFCE2F
{
	float distanceBetweenCoords;

	if (iParam3 > 0f)
	{
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935369.f_5[iParam2 /*11*/].f_1, true);
	
		if (distanceBetweenCoords > iParam3)
			return false;
	}
	else if (!func_31(iParam1))
	{
		return false;
	}

	if (func_11(iParam0))
		return false;

	if (iParam0 == 84)
		if (func_32(64, false, true))
			return false;
	else if (func_33())
		return false;

	if (func_34())
		return false;

	if (func_35(1))
		return false;

	if (!func_36(iParam0))
		return false;

	if (func_37(iParam0))
		return false;

	if (!Global_17504.f_42[iParam0 /*8*/].f_7)
		return false;

	return true;
}

int func_19(int iParam0) // Position - 0x6AC Hash - 0x25781A89 ^0x4D75BCF7
{
	if (!func_24(iParam0))
		return 0;

	return Global_17504.f_42[iParam0 /*8*/];
}

BOOL func_20(int iParam0) // Position - 0x6CB Hash - 0x535FF491 ^0x535FF491
{
	int num;
	var unk;
	eStackSize stackSize;
	eStackSize stackSize2;
	eStackSize stackSize3;
	eStackSize stackSize4;
	eStackSize stackSize5;
	eStackSize stackSize6;
	var unk2;
	int gameTimer;
	int gameTimer2;
	int num2;

	num = func_38();

	switch (iParam0)
	{
		case 0:
			if (func_39(0, num) > 0)
				if (num == 4 || num == 7 || num == 9 || num == 10)
					return false;
		
			return true;
	
		case 2:
			if (func_21(11) && func_38() == 1)
				return false;
		
			if (func_40() && func_38() == 4)
				return false;
		
			if (!PED::IS_PED_ON_MOUNT(Global_35))
				return false;
			else
				return true;
			break;
	
		case 3:
			if (func_41(2) || func_42(2))
				return false;
		
			return true;
	
		case 6:
			if (num == -1)
				return false;
		
			if (num == 8)
				if (func_46(39))
					return false;
			else if (!func_47(joaat("weapon_shotgun_doublebarrel")))
				return false;
		
			return true;
	
		case 7:
			if (func_40())
				if (!func_45(7))
					return false;
			else if (func_48())
				if (!func_45(69))
					return false;
		
			return true;
	
		case 10:
			if (!func_48() && func_51(10, 0) == 2 || func_51(10, 0) == 1)
				return false;
		
			if (func_48() && func_51(10, 1) == 2 || func_51(10, 0) == 1 || func_51(10, 1) == 1)
				return false;
		
			return true;
	
		case 11:
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
				return false;
		
			if (func_41(2) || func_42(2))
				return false;
		
			return true;
	
		case 12:
			if (func_19(12) < 3)
			{
				switch (func_38())
				{
					case 1:
					case 3:
					case 9:
						if (!func_41(0) && func_52(12, 0) != 1 && !func_43(65) && func_40())
							return true;
						else
							return false;
						break;
				
					case 4:
					case 12:
						if (!func_41(3) && !func_45(75) && func_52(12, 1) != 2 && func_48())
							return true;
						else
							return false;
						break;
				
					case 13:
					case 14:
					case 15:
					case 16:
						if (!func_41(5) && func_52(12, 2) != 3 && func_48())
							return true;
						else
							return false;
						break;
				}
			}
			break;
	
		case 15:
			if (func_52(15, 0) >= 1)
				return false;
		
			if (func_53(15, 1) >= 3)
				return false;
		
			if (func_52(15, 2) >= 1)
				return false;
		
			return true;
	
		case 16:
			if (func_19(16) > 0)
				return false;
		
			if (!func_62(joaat("consumable_whiskey"), 1, false))
				return false;
		
			return true;
	
		case 17:
			if (func_21(56))
				return false;
		
			if (func_38() == 11 || func_38() == 0)
				if (func_66(3) || func_67(3))
					return false;
			else if (func_66(69) || func_67(69))
				return false;
		
			if (PED::IS_PED_ON_MOUNT(Global_35))
				if (PED::IS_PED_CARRYING_SOMETHING(Global_1935630.f_40))
					return false;
			else
				return false;
		
			return true;
	
		case 18:
			if (func_41(2))
				return false;
		
			return true;
	
		case 20:
			if (func_46(13))
				return false;
		
			return true;
	
		case 23:
			if (func_69() == 0)
				return true;
		
			return false;
	
		case 27:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			else
			{
				if (func_53(27, 0) == 3)
					return false;
			
				if (func_53(27, 1) == 3)
					return false;
			
				if (func_53(27, 2) == 3)
					return false;
			
				if (func_52(27, 0) >= 3)
					return false;
			
				if (func_52(27, 1) >= 3)
					return false;
			
				if (func_52(27, 2) >= 3)
					return false;
			
				if (ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 4) < 2 && ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 5) < 2)
					return false;
			
				if (func_73(7) < 3)
					return false;
			
				if (func_38() == 3 || func_38() == 6)
					if (func_45(56) && !func_45(60))
						return false;
			
				if (func_38() == 11)
					if (func_45(26) && !func_45(28))
						return false;
			
				return true;
			}
			break;
	
		case 28:
			if (func_45(22) && !func_45(27))
				if (func_81(-1063.7087f, -520.2658f, 82.0255f, true) < 110f || func_81(-815.6782f, -520.9415f, 45.4979f, true) < 110f)
					return false;
		
			if (func_38() == 0 || func_38() == 11)
				if (Global_1888801[0 /*35*/].f_1 > 0)
					if (Global_1888801[0 /*35*/].f_1 + 900000 > MISC::GET_GAME_TIMER())
						return false;
		
			if (func_38() == 1)
			{
				if (Global_1888801[17 /*35*/].f_1 > 0)
					if (Global_1888801[17 /*35*/].f_1 + 900000 > MISC::GET_GAME_TIMER())
						return false;
			
				if (!func_48())
					return false;
			}
		
			return true;
	
		case 30:
			switch (func_38())
			{
				case 0:
				case 2:
					if (func_67(5) || func_66(5))
						return false;
				
					if (func_45(44))
						if (!func_45(45) && !func_43(24))
							if (func_39(30, 2) == 0 && func_39(30, 0) == 0)
								return false;
				
					if (func_74(0, 39))
						return false;
				
					if (func_75(0))
						return false;
				
					if (func_76(39))
						return false;
				
					if (func_77(0, 39, &unk2))
						return false;
				
					return true;
			}
		
			return true;
	
		case 31:
			if (func_49() || func_50())
				return false;
			else
				return true;
			break;
	
		case 32:
			if (func_19(34) > 0 && func_19(33) > 0)
				if (func_19(32) == 0)
					return true;
				else
					return false;
			else
				return false;
			break;
	
		case 33:
			if (func_51(33, 0) == 16)
			{
				return false;
			}
			else if (func_38() == 1 && func_78(Global_35, -1374.0529f, -741.9763f, 90.7132f, true) < 200f)
			{
				if (func_61(49, false))
					return false;
			
				if (func_61(101, false))
					return false;
			}
			else
			{
				return true;
			}
		
			return true;
	
		case 34:
			if (func_19(33) > 0)
				if (func_19(34) == 0)
					return true;
				else
					return false;
			else
				return false;
			break;
	
		case 37:
			switch (func_79(func_38()))
			{
				case 1:
					if (func_48())
						if (func_52(37, 5) == 1)
							return false;
				
					if (func_51(37, 0) == 2)
						return false;
					break;
			
				case 3:
					if (func_48())
						if (func_52(37, 6) == 1)
							return false;
				
					if (func_51(37, 1) == 2)
						return false;
					break;
			}
		
			return true;
	
		case 39:
			if (func_66(26) || func_67(26))
				return false;
		
			return true;
	
		case 40:
			if (func_82())
				if (func_83(func_38(), true, 0) != 0)
					return true;
			break;
	
		case 42:
			if (func_51(42, 0) == 2 || func_51(42, 1) == 2)
				return false;
		
			if (func_19(42) >= 2)
				return false;
		
			return true;
	
		case 44:
			if (func_11(57))
				return false;
		
			switch (func_38())
			{
				case 1:
				case 3:
				case 9:
					if (func_41(0) || func_48())
						return false;
					break;
			
				case 11:
					if (func_41(2) || func_42(2))
						return false;
					else if (func_81(1624.51f, -1818.45f, 49.6045f, true) < 225f)
						if (SCRIPTS::HAS_SCRIPT_LOADED("gang_enc_lemoyne_church") || !func_84(65536, 2))
							return false;
					break;
			}
		
			return true;
	
		case 45:
			if (func_38() == 9)
			{
				if (func_51(45, 0) == 2)
					return false;
			}
			else if (func_38() == 11)
			{
				if (func_48())
					if (func_52(45, 4) == 1)
						return false;
			
				if (func_51(45, 2) == 2)
					return false;
			}
		
			return true;
	
		case 46:
			if (func_19(46) >= 4 || func_52(46, 0) == 1)
				return false;
			else if (func_87() == 1 || func_87() == 3 && func_88())
				return true;
			break;
	
		case 48:
			return true;
	
		case 49:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
				return false;
		
			if (!func_89(2, false, false))
				return false;
		
			if (!func_89(3, false, false))
				return false;
		
			gameTimer = MISC::GET_GAME_TIMER();
		
			if (gameTimer - Global_1357549.f_1484 >= 300000)
				return true;
			else
				return false;
			break;
	
		case 50:
			if (func_90())
				return false;
		
			if (func_92(func_91(func_38())) > 0)
				return false;
		
			switch (Global_1393447.f_49)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 35:
				case 38:
				case 42:
					return false;
			}
		
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("beat_train_holdup")) > 0)
				return false;
		
			return true;
	
		case 51:
			if (func_41(2) || func_42(2))
				return false;
		
			return true;
	
		case 57:
			if (func_11(44))
				return false;
		
			if (num == -1)
				return false;
		
			if (func_95(num))
				return false;
		
			if (!func_96(24))
				return false;
		
			return true;
	
		case 58:
			if (func_61(119, false) || func_68(119) && func_81(-1006.0293f, 458.25296f, 55.49393f, true) < 200f)
				return false;
			else if (!func_48() && func_19(58) >= 1)
				return false;
			else
				return true;
			break;
	
		case 59:
			if (!func_98(Global_35, Global_1900383[func_97(7) /*45*/], false))
				return false;
			else
				return true;
			break;
	
		case 60:
			if (iParam0 == 60)
			{
				switch (func_79(func_38()))
				{
					case 0:
						if (func_52(60, 1) < 3)
							return true;
						break;
				
					case 1:
						if (func_52(60, 0) < 2)
							return true;
						break;
				
					case 4:
						if (func_52(60, 2) < 2)
							return true;
						break;
				}
			}
			break;
	
		case 61:
			if (func_19(46) >= 2 || func_52(46, 0) == 1)
				return false;
			else
				return true;
			break;
	
		case 62:
			switch (func_99())
			{
				case 0:
				case 2:
					if (func_52(62, 1) == 1)
						return false;
					break;
			
				case 1:
					if (func_52(62, 0) == 1)
						return false;
					break;
			}
		
			return true;
	
		case 63:
			switch (func_38())
			{
				case 1:
					if (func_48())
						if (func_41(4))
							return false;
					else
						return false;
					break;
			}
		
			return true;
	
		case 64:
			if (Global_1430231.f_4)
				return false;
		
			if (func_45(56) && !func_48())
				return false;
		
			if (func_38() == 11 || func_38() == 0 || func_38() == 2)
				if (func_41(2) || func_42(2))
					return false;
			else if (func_38() == 9)
				if (func_41(0) || func_42(0))
					return false;
		
			num2 = func_111(Global_36, false);
		
			if (func_112(num2))
				if (func_113(num2, Global_36) <= 400f)
					return false;
		
			return true;
	
		case 65:
			if (func_38() == 11)
				if (func_45(26))
					return true;
				else
					return false;
			break;
	
		case 66:
			if (!func_43(146))
				return false;
		
			if (func_62(joaat("DOCUMENT_TREASURE_MAP_04"), 1, false))
				return false;
		
			return true;
	
		case 67:
			if (func_19(67) >= 2)
				return false;
			else
				return true;
			break;
	
		case 71:
			if (func_38() != 8)
				if (func_114(71, 2) || func_114(71, 1))
					return false;
		
			return true;
	
		case 73:
			if (func_51(73, 0) == 2)
				return false;
		
			return true;
	
		case 76:
			if (func_43(19))
				return false;
			else if (!func_44(115, -1, false))
				return false;
		
			if (func_43(68) && !func_45(59))
				return false;
		
			return true;
	
		case 77:
			if (func_11(94))
				return false;
		
			return true;
	
		case 79:
			if (func_19(4) == 0 && func_19(45) == 0)
				return false;
		
			switch (func_23())
			{
				case 26:
					if (func_52(4, 1) == 1)
						if (!func_48() && func_52(4, 4) == 1 || func_48() && func_52(4, 4) == 2)
							if (func_53(4, 1) == 3)
								return false;
							else if (func_54(4, 1, 1, 6))
								if (func_55())
									return true;
								else
									return false;
							else
								return false;
					break;
			
				case 76:
					if (func_52(45, 0) == 5 || func_52(45, 0) == 6 && func_52(45, 5) == 1)
						if (!func_48() && func_52(45, 3) == 1 || func_48() && func_52(45, 3) == 2)
							if (func_53(45, 0) == 3)
								return false;
							else if (func_54(45, 0, 1, 6))
								if (func_55())
									return true;
								else
									return false;
							else
								return false;
					break;
			
				case 78:
					if (func_52(4, 0) == 1)
						if (!func_48() && func_52(4, 3) == 1 || func_48() && func_52(4, 3) == 2)
							if (func_53(4, 0) == 3)
								return false;
							else if (func_54(4, 0, 1, 6))
								if (func_55())
									return true;
								else
									return false;
							else
								return false;
					break;
			
				case 105:
					if (func_52(45, 2) == 5 || func_52(45, 2) == 6 && func_52(45, 6) == 1)
						if (!func_48() && func_52(45, 4) == 1 || func_48() && func_52(45, 4) == 2)
							if (func_53(45, 2) == 3)
								return false;
							else if (func_54(45, 2, 1, 6))
								if (func_55())
									return true;
								else
									return false;
							else
								return false;
					break;
			}
		
			return false;
	
		case 82:
			if (func_56(0))
			{
				if (func_23() == 5 && func_52(82, 0) == 1)
					return false;
			
				if (func_23() == 38 && func_52(82, 1) == 1)
					return false;
			}
		
			return true;
	
		case 83:
			if (func_17(75) <= 0)
				return false;
		
			if (func_57())
				return false;
		
			return true;
	
		case 84:
			if (func_58(76, true, 0))
				return false;
		
			if (func_60(func_59(76), joaat("TSTAG_LOCKDOWN_SALOON"), true))
				return false;
		
			if (func_61(117, false) || func_61(118, false))
				return false;
		
			if (func_19(84) >= 2)
				return false;
		
			if (func_51(84, 0) == 2 || func_51(84, 1) == 2)
				return false;
		
			if (func_51(84, 0) == 3 || func_51(84, 1) == 3)
				return false;
		
			if (func_52(84, 2) == 1 && func_48())
				return false;
		
			if (func_40())
				if (!func_45(7))
					return false;
		
			if (func_46(69))
				return false;
			else if (func_46(9))
				return false;
			else if (func_46(5))
				return false;
		
			return true;
	
		case 86:
			if (func_23() != 78 && func_45(26))
				return false;
		
			return true;
	
		case 87:
			if (func_48())
			{
			}
			else if (func_19(87) >= 2)
			{
				return false;
			}
		
			return true;
	
		case 88:
			stackSize4 = func_23();
		
			if (func_58(stackSize4, true, 0))
				return false;
		
			if (stackSize4 == 76)
			{
				if (func_46(69))
					return false;
				else if (func_46(9))
					return false;
				else if (func_46(5))
					return false;
				else if (func_61(117, false))
					return false;
				else if (func_61(118, false))
					return false;
			
				if (func_31(5))
					return false;
			}
		
			stackSize5 = func_64(func_63(904), true);
		
			if (stackSize4 == 92)
			{
				if (stackSize5 == 92)
					return false;
			
				if (func_31(8))
					return false;
			}
		
			if (func_65() == 0)
				return false;
		
			return true;
	
		case 89:
			stackSize3 = func_23();
		
			if (func_58(stackSize3, true, 0))
				return false;
		
			if (func_65() == 0)
				return false;
		
			if (func_17(101) >= 1)
				return true;
		
			return false;
	
		case 90:
			stackSize = func_23();
			stackSize2 = func_64(func_63(904), true);
		
			if (stackSize == 92 && stackSize2 == 92)
				return false;
		
			if (func_65() == 0)
				return false;
		
			return true;
	
		case 91:
			if (func_17(75) <= 0)
				return false;
		
			return true;
	
		case 92:
			switch (func_38())
			{
				case 1:
				case 3:
				case 9:
					if (func_41(0))
						return false;
				
					return true;
			
				case 11:
					if (func_41(2) || func_42(2))
						return false;
				
					if (func_68(30))
						return false;
				
					return true;
			}
		
			return true;
	
		case 94:
			stackSize6 = func_23();
		
			switch (stackSize6)
			{
				case 5:
				case 105:
					if (func_11(96))
						return false;
				
					if (func_11(77))
						return false;
					break;
			
				case 26:
				case 76:
					if (func_41(0))
						return false;
				
					if (!func_70(76, 2048))
						return false;
				
					if (func_11(99))
						return false;
					break;
			}
		
			return true;
	
		case 95:
			if (func_41(2))
				return false;
		
			return true;
	
		case 96:
			if (func_11(94))
				return false;
		
			return true;
	
		case 97:
			if (func_38() == 1 && func_46(11))
				return false;
		
			if (func_38() == 9 && !func_80(0))
				return false;
		
			return true;
	
		case 98:
			if (func_23() == 76 && func_52(98, 1) == 1)
				return false;
		
			if (func_23() == 92)
				if (func_61(82, false) || func_61(83, false))
					return false;
		
			return true;
	
		case 99:
			if (func_17(99) >= 2)
				return false;
		
			if (func_11(94))
				return false;
		
			return true;
	
		case 100:
			switch (func_38())
			{
				case 0:
				case 11:
					return false;
			
				case 1:
					if (func_51(100, 1) != 1 && func_48())
						return true;
					break;
			}
		
			return false;
	
		case 101:
			if (func_41(2))
				return false;
		
			if (func_85(92, 65536) || func_37(92))
				return true;
		
			return false;
	
		case 102:
			switch (func_23())
			{
				case 26:
					if (func_51(102, 0) == 1)
						return false;
					break;
			
				case 76:
					if (func_51(102, 1) == 1 && func_51(102, 2) == 1)
						return false;
					break;
			}
		
			return true;
	
		case 103:
			if (func_19(103) >= 2)
				return false;
		
			if (func_23() == 5)
			{
				if (!func_86(6, -1))
					return false;
			
				if (func_78(Global_35, 2720.815f, -1283.54f, 48.638f, true) < func_78(Global_35, 2551.768f, -1173.668f, 52.683f, true))
					if (func_61(77, false))
						return false;
			}
			else if (func_23() == 92)
			{
				if (func_61(143, false))
					return false;
			}
		
			return true;
	
		case 105:
			if (func_23() == 38)
				if (func_92(3) > 0)
					return false;
			else if (func_23() == 5)
				if (func_92(2) > 0)
					return false;
		
			if (PED::IS_PED_ON_MOUNT(Global_35))
				return false;
			break;
	
		case 106:
			if (func_23() == 76)
			{
				if (func_61(26, false) || func_61(27, false))
					if (func_61(117, false) || func_61(118, false))
						return false;
			
				if (func_92(1) > 0)
					return false;
			
				if (func_46(7))
					return false;
			
				if (func_51(106, 1) != 7)
					return true;
			
				if (func_51(87, 0) == 3 && func_51(106, 3) != 7)
					return true;
			
				if (func_51(84, 0) == 3 || func_51(84, 1) == 3)
					if (func_51(106, 4) != 7)
						if (!func_48())
							return true;
			}
			else if (func_23() == 105)
			{
				if (func_92(2) > 0)
					return false;
			
				if (func_51(87, 0) == 3 && func_51(106, 3) != 7)
				{
					return true;
				}
				else if (func_51(87, 0) != 3)
				{
				}
				else
				{
					func_51(106, 3) == 7;
				}
			
				if (func_43(13) && func_51(106, 5) == 3 && func_51(106, 5) != 7)
					if (func_93(106, 5))
						return true;
			}
			else if (func_23() == 5)
			{
				if (func_92(2) > 0)
					return false;
			
				if (func_43(12))
					if (func_51(106, 6) == 3)
						if (func_51(106, 6) != 7)
							if (func_93(106, 6))
								return true;
			
				if (func_51(30, 3) == 3 && func_51(106, 7) != 7)
					if (func_93(106, 7))
						return true;
			}
			else if (func_23() == 38)
			{
				if (func_92(3) > 0)
					return false;
			
				if (func_43(18) && func_51(106, 0) == 3 && func_51(106, 0) != 7)
					return true;
			
				if (func_43(17) && func_51(106, 8) == 3 && func_51(106, 8) != 7)
					return true;
			}
		
			return false;
	
		case 107:
			if (func_61(77, false) || func_61(106, false) || func_21(45) || func_21(47))
				return false;
		
			return true;
	
		case 108:
			if (func_23() == 76)
			{
				if (func_94(108, 2097152) > 0 && func_41(0) || func_42(0))
					return false;
			
				if (func_58(76, true, 0))
					return false;
			
				if (func_60(func_59(76), joaat("TSTAG_LOCKDOWN_SALOON"), true))
					return false;
			}
		
			return true;
	
		case 109:
			switch (func_38())
			{
				case 1:
					if (func_52(109, 0) == 1)
						return false;
					break;
			
				case 10:
					if (func_52(109, 0) == 1 && func_52(109, 1) == 1)
						return false;
					break;
			
				case 11:
					if (func_52(109, 1) == 1)
						return false;
					break;
			}
		
			return true;
	
		case 110:
			if (func_61(77, false))
				return false;
		
			if (func_21(47))
				return false;
		
			if (func_66(5))
				return false;
		
			if (func_58(5, true, 0))
				return false;
		
			if (!func_48())
				if (func_45(31))
					return true;
			else if (func_45(73))
				return true;
		
			return false;
	
		case 111:
			switch (func_38())
			{
				case 4:
					if (!func_43(9))
						return false;
				
					if (func_46(72))
						return false;
				
					if (func_46(70))
						return false;
				
					if (func_46(75))
						return false;
				
					if (!func_89(4, false, false))
						return false;
				
					gameTimer2 = MISC::GET_GAME_TIMER();
				
					if (gameTimer2 - Global_1357549.f_1484 >= 300000)
						return true;
					else
						return false;
				
					return true;
			
				case 9:
					if (func_58(76, true, 0))
						return false;
					else if (func_100(14))
						return false;
					else if (func_45(71) && func_61(10, false))
						return false;
				
					return true;
			
				default:
					return true;
			}
			break;
	
		case 112:
			if (func_101(14, 4096))
				return false;
			else
				return true;
			break;
	
		case 113:
			if (!func_103(func_102()))
			{
				switch (func_23())
				{
					case 38:
						if (func_43(17) && func_52(113, 4) != 3)
						{
							if (!Global_1326862.f_612)
							{
								func_105(113, 4, func_104());
								Global_1326862.f_612 = 1;
							}
						
							if (Global_1326862.f_612)
							{
								if (func_54(113, 4, 7, 0))
								{
									func_106(113, 4, 3);
									return false;
								}
								else if (!func_37(113))
								{
									if (func_51(106, 8) == 3)
									{
										if (func_51(106, 8) == 7)
										{
											Global_1326862.f_612 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862.f_612 = 0;
										return true;
									}
								}
							}
						}
						else if (func_43(18) && func_52(113, 4) != 4)
						{
							if (!Global_1326862.f_613)
							{
								func_105(113, 4, func_104());
								Global_1326862.f_613 = 1;
							}
						
							if (Global_1326862.f_613)
							{
								if (func_54(113, 4, 7, 0))
								{
									func_106(113, 4, 4);
									return false;
								}
								else if (!func_37(113))
								{
									if (func_51(106, 0) == 3)
									{
										if (func_51(106, 0) == 7)
										{
											Global_1326862.f_613 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862.f_613 = 0;
										return true;
									}
								}
							}
						}
						else
						{
							return false;
						}
						break;
				
					case 105:
						if (func_52(113, 3) != 2 && !Global_1326862.f_611)
						{
							Global_1326862.f_611 = 1;
							return true;
						}
						else
						{
							Global_1326862.f_611 = 0;
							return false;
						}
						break;
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 114:
			if (func_107())
				return true;
		
			return false;
	
		case 115:
			if (func_51(115, 0) == 3)
				return false;
		
			if (func_48())
				if (func_52(115, 4) == 1)
					return false;
		
			if (func_94(115, 2097152) >= 2)
				return false;
		
			if (func_51(115, 0) == 2)
				return false;
		
			return true;
	
		case 116:
			if (func_108(&unk))
				return false;
		
			if (func_23() == 76)
			{
				if (func_109(76) >= 10)
				{
					if (!Global_1326862.f_614)
					{
						func_110(116, true, 0, 0, 0, 1, false, true);
						func_105(116, 1, func_104());
						Global_1326862.f_614 = 1;
					}
					else if (func_54(116, 1, 8, 0))
					{
						return false;
					}
					else if (!func_37(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
		
			if (func_23() == 105)
			{
				if (func_109(105) >= 10)
				{
					if (!Global_1326862.f_615)
					{
						func_110(116, true, 0, 0, 0, 1, false, true);
						func_105(116, 2, func_104());
						Global_1326862.f_615 = 1;
					}
					else if (func_54(116, 2, 8, 0))
					{
						return false;
					}
					else if (!func_37(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
		
			if (func_23() == 78)
			{
				if (func_109(78) >= 10)
				{
					if (!Global_1326862.f_616)
					{
						func_110(116, true, 0, 0, 0, 1, false, true);
						func_105(116, 3, func_104());
						Global_1326862.f_616 = 1;
					}
					else if (func_54(116, 3, 8, 0))
					{
						return false;
					}
					else if (!func_37(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			break;
	
		case 117:
			if (func_17(75) <= 0)
				return false;
		
			return true;
	
		case 118:
			if (func_23() == 38)
				if (!func_43(8))
					return false;
		
			return true;
	
		case 119:
			if (!func_43(152))
				return false;
		
			if (func_71())
				return false;
		
			if (func_72(num))
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_21(eStackSize essParam0) // Position - 0x26D6 Hash - 0x1D38F5CA ^0xC923C5D1
{
	eStackSize i;

	if (!func_115(essParam0))
		return false;

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2 == essParam0)
							return true;
						break;
				}
			}
		}
	}

	return false;
}

BOOL func_22(float fParam0, float fParam1, float fParam2) // Position - 0x277A Hash - 0x1CB9D2F ^0xEA327BD4
{
	float radius;

	if (_IS_NULL_VECTOR(fParam0))
		return false;

	radius = func_49() ? 6f : 22f;
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(fParam0, radius, 1, 0, 16384);
}

eStackSize func_23() // Position - 0x27B0 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_24(int iParam0) // Position - 0x27BE Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_25() // Position - 0x27D4 Hash - 0x18ACD9D3 ^0xB2ADEAB8
{
	if (!func_24(Global_1327479))
		return;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));

	func_27(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
	return;
}

int func_26(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2847 Hash - 0x79583E95 ^0x35D8D668
{
	int i;
	var unk;

	for (i = 0; i < func_118(iParam0); i = i + 1)
	{
		unk = { func_119(iParam0, i) };
	
		if (func_120(unk, uParam1, 1056964608, true))
			return i;
	}

	return -1;
}

void func_27(int iParam0) // Position - 0x288D Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1327479.f_3 = iParam0;
	return;
}

void func_28(int iParam0, int iParam1, BOOL bParam2) // Position - 0x289D Hash - 0xD61623D0 ^0x48AE56A
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_121(iParam0, iParam1, bParam2);
	return;
}

void func_29(int iParam0) // Position - 0x28B9 Hash - 0x147F770D ^0x2A454E4B
{
	int i;
	Volume volLockRequestId;
	Vector3 vector;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			vector = { VOLUME::_0xC4019CF9AE8E931A(volLockRequestId) };
		
			if (VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 1f, 0, iParam0, 16384))
			{
				VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
				Global_1911670[i] = 0;
			}
		}
	}

	return;
}

void func_30(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x2914 Hash - 0x62CC3837 ^0x4AAF6E13
{
	int i;
	Volume volLockRequestId;

	for (i = 0; i < Global_1310750.f_16078; i = i + 1)
	{
		volLockRequestId = Global_1310750.f_16078[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			if (BUILTIN::VDIST(VOLUME::_0xC4019CF9AE8E931A(volLockRequestId), vParam0) < iParam3)
			{
				VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
				Global_1310750.f_16078[i] = 0;
				Global_17504.f_2084[i /*5*/] = { 0f, 0f, 0f };
				Global_17504.f_2084[i /*5*/].f_3 = -1;
				Global_17504.f_2084[i /*5*/].f_4 = 0;
			}
		}
	}

	return;
}

BOOL func_31(int iParam0) // Position - 0x2999 Hash - 0x59882741 ^0x59882741
{
	eStackSize stackSize;
	int num;

	if (!func_3(iParam0))
		return false;

	stackSize = func_122(iParam0);
	num = func_123(iParam0);

	if (!func_124(stackSize))
		return false;

	if (!func_2(num))
		return false;

	if (func_23() == stackSize)
		if (func_125(num))
			return true;

	return false;
}

BOOL func_32(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x29F2 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_126())
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
		num = func_127(Global_1898164.f_1[0 /*5*/]);
	
		if (func_128(num) && func_129(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_130(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_33() // Position - 0x2BF6 Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

BOOL func_34() // Position - 0x2C04 Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1310750.f_16077 != 0;
}

BOOL func_35(int iParam0) // Position - 0x2C15 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_36(int iParam0) // Position - 0x2C29 Hash - 0xD374751F ^0x49884D01
{
	if (func_131(iParam0, 2048))
		return true;

	if (func_131(iParam0, 4096))
		return Global_1327479.f_5 < MISC::GET_GAME_TIMER();

	return Global_1327479.f_4 < MISC::GET_GAME_TIMER();
}

BOOL func_37(int iParam0) // Position - 0x2C66 Hash - 0xBC0CCBA5 ^0x80D3F3F5
{
	if (!func_24(iParam0))
		return true;

	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_38() // Position - 0x2C89 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

int func_39(int iParam0, int iParam1) // Position - 0x2C97 Hash - 0x624B1719 ^0xA8D68D8B
{
	int num;

	if (iParam1 != -1)
	{
		num = func_132(iParam0, iParam1);
	
		if (num == -1)
			return 0;
	
		return Global_17504.f_2205[num /*2*/].f_1;
	}

	return 0;
}

BOOL func_40() // Position - 0x2CC9 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_133() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

BOOL func_41(int iParam0) // Position - 0x2CEF Hash - 0xBF1DF5C6 ^0xEDF16C34
{
	if (!func_134(iParam0, false))
		return false;

	return Global_40.f_9571[iParam0 /*10*/].f_1 == 5;
}

BOOL func_42(int iParam0) // Position - 0x2D14 Hash - 0x7A58C236 ^0xFE07ADA8
{
	if (!func_134(iParam0, false))
		return false;

	return Global_40.f_9571[iParam0 /*10*/].f_1 == 4;
}

BOOL func_43(int iParam0) // Position - 0x2D39 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_133() != -1)
		return false;

	if (!func_128(iParam0))
		return false;

	return func_135(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_44(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2D6A Hash - 0x6705A7F1 ^0x6705A7F1
{
	BOOL flag;

	flag = false;

	if (iParam1 == -1)
		flag = true;

	if (flag || iParam1 == 0)
	{
		if (func_133() != -1)
			return false;
	
		if (func_32(0, true, true))
			return false;
	
		if (!func_136(0))
			return false;
	
		if (!func_137())
			return false;
	
		if (func_70(iParam0, 2097152))
			return false;
	}

	if (flag || iParam1 == 1)
	{
		if (iParam0 == 38)
		{
			if (!func_48())
				return false;
		}
		else if (iParam0 == 76)
		{
			if (func_45(14) && !func_45(17))
				return false;
		
			if (Global_1392235.f_2)
				return false;
		}
		else if (iParam0 == 26)
		{
			if (!func_45(11))
				return false;
		}
		else if (iParam0 == 105)
		{
			if (!func_45(27))
				return false;
			else if (func_61(31, false))
				return false;
		}
		else if (iParam0 == 5)
		{
			if (func_61(130, false))
				return false;
		}
		else if (iParam0 == 115 && bParam2)
		{
			if (!func_138())
				return false;
		}
	
		if (func_48() && !func_45(69))
			return false;
	
		if (func_139(PLAYER::PLAYER_ID(), true, false, true))
			return false;
	
		if (func_70(iParam0, 33554432))
			return false;
	
		if (func_67(iParam0))
			return false;
	}

	if (flag || iParam1 == 2)
	{
		if (func_61(11, false) || func_61(12, false) || func_61(13, false) || func_61(153, false) || func_61(14, false) || func_61(154, false) || func_61(15, false) || func_61(16, false) || func_61(17, false) || func_61(18, false) || func_61(155, false) || func_61(19, false) || func_61(20, false))
			return false;
	
		if (func_140(iParam0) == -1)
			return false;
	
		if (!func_141(iParam0))
			return false;
	
		if (Global_1392235.f_4)
			return false;
	}

	return true;
}

BOOL func_45(int iParam0) // Position - 0x2FC4 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_135(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_46(int iParam0) // Position - 0x3023 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_142(Global_1835011[iParam0 /*74*/].f_1);
}

BOOL func_47(Hash hParam0) // Position - 0x304F Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_48() // Position - 0x3077 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_133() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_49() // Position - 0x309C Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_23() != -1;
}

BOOL func_50() // Position - 0x30B7 Hash - 0x8FB36F20 ^0x8FB36F20
{
	return Global_1894899 & 4 != 0;
}

int func_51(int iParam0, int iParam1) // Position - 0x30C7 Hash - 0x9143B8CE ^0x9143B8CE
{
	int num;

	if (iParam0 != -1)
		num = func_52(iParam0, iParam1);

	if (num != 0)
		return num;

	return 0;
}

int func_52(int iParam0, int iParam1) // Position - 0x30EE Hash - 0x6553AF7 ^0xD4E9B96B
{
	int num;

	num = func_143(iParam0, iParam1);

	if (num != -1)
		return Global_17504.f_1003[num /*6*/].f_1;

	return 0;
}

int func_53(int iParam0, int iParam1) // Position - 0x3116 Hash - 0x6553AF7 ^0x6C592954
{
	int num;

	num = func_143(iParam0, iParam1);

	if (num != -1)
		return Global_17504.f_1003[num /*6*/].f_2;

	return 0;
}

BOOL func_54(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x313E Hash - 0xAA961B6F ^0xAA961B6F
{
	eStackSize stackSize;
	eStackSize stackSize2;
	var unk;
	var unk2;
	int num;
	int num2;
	var unk3;
	var unk4;

	stackSize = func_104();
	stackSize2 = func_144(iParam0, iParam1);
	func_145(stackSize, stackSize2, &unk, &unk2, &num, &num2, &unk3, &unk4);

	if (num2 >= iParam2 && iParam2 > 0)
		return true;

	if (num > iParam3 && iParam3 > 0)
		return true;

	return false;
}

BOOL func_55() // Position - 0x3195 Hash - 0xC3DE1A8E ^0xC3DE1A8E
{
	int num;
	int num2;
	var unk;

	switch (func_23())
	{
		case 26:
			num = 61;
			num2 = 3;
			break;
	
		case 76:
			num = 75;
			num2 = 6;
			break;
	
		case 78:
			num = 0;
			num2 = 6;
			break;
	
		case 105:
			num = 28;
			num2 = 3;
			break;
	}

	if (!func_86(num2, -1))
		return false;

	if (func_76(num))
		return false;

	if (!func_146(num))
		return false;

	if (func_74(num2, num))
		return false;

	if (func_75(num2))
		return false;

	if (func_76(num))
		return false;

	if (func_77(num2, num, &unk))
		return false;

	return true;
}

BOOL func_56(int iParam0) // Position - 0x324B Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_48())
		return false;

	return func_135(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_57() // Position - 0x326D Hash - 0xCD781EBD ^0xCD781EBD
{
	if (func_52(83, 0) == 1)
		return true;

	return false;
}

BOOL func_58(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x3285 Hash - 0x66816788 ^0x218C6FA1
{
	int num;

	num = func_59(essParam0);

	if (num == -1)
		return false;

	if (func_60(num, joaat("TSTAG_LOCKDOWN"), true))
		return true;

	if (bParam1)
	{
		switch (iParam2)
		{
			case 0:
			case 2:
				if (func_60(num, joaat("TSTAG_LOCKDOWN_SALOON"), true) || func_60(num, joaat("TSTAG_LOCKDOWN_PARTIAL"), true))
					return true;
				break;
		
			case 1:
				if (func_60(num, joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"), true) || func_60(num, joaat("TSTAG_LOCKDOWN_PARTIAL"), true))
					return true;
				break;
		}
	}

	return false;
}

int func_59(int iParam0) // Position - 0x3322 Hash - 0xAFBAC931 ^0xAFBAC931
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

BOOL func_60(int iParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x33DB Hash - 0xF4E0BF90 ^0xF4E0BF90
{
	int i;

	if (!func_147(iParam0))
		return false;

	if (!func_148(essParam1))
		return false;

	if (bParam2)
		return func_149(iParam0, essParam1);

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_40.f_11206[iParam0 /*26*/][i /*5*/] == essParam1)
			return true;
	}

	return false;
}

BOOL func_61(eStackSize essParam0, BOOL bParam1) // Position - 0x3439 Hash - 0xAA3DFEB ^0xAA3DFEB
{
	int i;

	if (func_133() != -1)
		return false;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (Global_40.f_450[i] == essParam0)
			if (!bParam1 || Global_1347702[i /*49*/].f_13 & 16384 == 0)
				return true;
	}

	return false;
}

BOOL func_62(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x3496 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_150(hParam0, 0))
		return false;

	num = func_151(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_152(hParam0, 1))
			return false;

	return func_153(hParam0, false, bParam2) >= iParam1;
}

Vector3 func_63(int iParam0) // Position - 0x3500 Hash - 0x669CD0E2 ^0xFC699068
{
	if (!func_154(iParam0))
		return 0f, 0f, 0f;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_155(iParam0)))
		return 0f, 0f, 0f;

	return PERSCHAR::_0x5EE6FCCC9C832CA2(func_155(iParam0));
}

eStackSize func_64(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x3536 Hash - 0x25DFFF2C ^0x74CE6365
{
	eStackSize stackSize;

	stackSize = func_23();

	if (func_124(stackSize))
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[stackSize /*35*/].f_3, vParam0))
			return stackSize;

	return func_156(vParam0, bParam3);
}

int func_65() // Position - 0x3571 Hash - 0x62BB8F92 ^0x7EF78EC3
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, false);

	if (!func_157(&weaponHash))
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 3, false);

	if (!func_157(&weaponHash))
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, false);

	if (!func_157(&weaponHash))
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 1, false);

	if (!func_157(&weaponHash))
		weaponHash = 0;

	if (!func_157(&weaponHash))
		weaponHash = func_158(268435584, 0);

	if (!func_157(&weaponHash))
		return 0;

	return 1;
}

BOOL func_66(int iParam0) // Position - 0x35FD Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_124(iParam0))
		return false;

	return func_70(iParam0, 33554432);
}

BOOL func_67(int iParam0) // Position - 0x361E Hash - 0x6430C01F ^0x955EC0F3
{
	if (!func_124(iParam0))
		return false;

	return func_70(iParam0, 67108864);
}

BOOL func_68(int iParam0) // Position - 0x363F Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_133() != -1)
		return false;

	if (!func_128(iParam0))
		return false;

	return func_159(Global_1347702[iParam0 /*49*/].f_15);
}

int func_69() // Position - 0x366F Hash - 0x68D02B71 ^0x2277AFD6
{
	int num;
	float num2;

	if (func_33() || PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_139(PLAYER::PLAYER_ID(), true, false, true))
		return 1;

	num = 5400;

	if (func_21(26))
		num = 600;
	else if (func_61(68, true))
		num = 2400;
	else if (func_21(57))
		num = 1800;

	if (Global_1359489.f_61 >= 3)
	{
		return 2;
	}
	else if (func_160(&(Global_1359489.f_55)) < (float)num)
	{
		return 3;
	}
	else if (MISC::GET_GAME_TIMER() < Global_1359489.f_60)
	{
		return 4;
	}
	else if (!func_161())
	{
		return 5;
	}
	else if (!func_45(5))
	{
		return 6;
	}
	else
	{
		num2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), func_163(func_162()));
	
		if (num2 <= 750f)
			return 7;
	
		return 0;
	}

	return -1;
}

BOOL func_70(int iParam0, BOOL bParam1) // Position - 0x375D Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_71() // Position - 0x3790 Hash - 0xF21B3DF ^0xF21B3DF
{
	return func_164(7);
}

BOOL func_72(int iParam0) // Position - 0x379D Hash - 0x9FCC5949 ^0x9FCC5949
{
	int num;

	switch (iParam0)
	{
		case 1:
		case 6:
		case 12:
			num = 19;
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			num = 40;
			break;
	
		default:
			num = func_165(iParam0, false, 0, 119, false);
			break;
	}

	return num != 0;
}

int func_73(int iParam0) // Position - 0x37F9 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_97(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x382D Hash - 0x3E6254C3 ^0x4018C163
{
	if (!func_166(iParam0))
		return false;

	if (func_167(iParam1))
		return false;

	return func_168(Global_1914319.f_3[iParam0 /*446*/].f_10, 1024);
}

BOOL func_75(int iParam0) // Position - 0x3864 Hash - 0x772E656 ^0x772E656
{
	if (!func_166(iParam0))
		return false;

	if (func_169(iParam0, 64))
		return true;

	return false;
}

BOOL func_76(int iParam0) // Position - 0x388A Hash - 0x39C8C559 ^0x6DBECEFC
{
	if (func_168(iParam0, 32768) || func_168(iParam0, 16384))
		return true;

	return false;
}

BOOL func_77(int iParam0, int iParam1, var uParam2) // Position - 0x38B3 Hash - 0xF84149DD ^0xC1BDCE06
{
	Ped ped;
	PersChar char;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (func_139(PLAYER::PLAYER_ID(), true, false, true))
		{
			*uParam2 = 1;
			return true;
		}
	}

	if (func_168(iParam1, 1048576))
	{
		*uParam2 = 4;
		return true;
	}

	if (func_8(Global_1935630, 2097152))
	{
		*uParam2 = 4;
		return true;
	}

	if (func_74(iParam0, iParam1))
	{
		*uParam2 = 3;
		return true;
	}

	if (func_170(iParam1) == 105 && func_46(21))
	{
		*uParam2 = 4;
		return true;
	}

	if (func_171(iParam0, &ped))
	{
		if (!func_172(iParam1))
		{
			if (Global_1393529.f_3 == ped && func_173(Global_1393529.f_3, 0, &(Global_1393529.f_256), &(Global_1393529.f_284), 0, 0))
			{
				*uParam2 = 5;
				return true;
			}
		
			if (!func_174(iParam0))
			{
				*uParam2 = 6;
				return true;
			}
		
			if (PED::IS_PED_FLEEING(ped))
			{
				*uParam2 = 6;
				return true;
			}
		
			if (TASK::GET_IS_TASK_ACTIVE(ped, 0))
			{
				*uParam2 = 7;
				return true;
			}
		}
	}
	else if (func_166(iParam0))
	{
		if (func_154(Global_1914319.f_3[iParam0 /*446*/].f_21))
		{
			char = func_155(Global_1914319.f_3[iParam0 /*446*/].f_21);
		
			if (char != 0 && !PERSCHAR::_0x4AFC7288C77238B3(char))
			{
				*uParam2 = 6;
				return true;
			}
		}
	}

	return false;
}

float func_78(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x3A13 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), fParam1, bParam4);
}

int func_79(int iParam0) // Position - 0x3A3B Hash - 0xC547ECB ^0xC547ECB
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
	
		case 3:
		case 10:
			return 2;
	
		case 4:
		case 9:
			return 1;
	
		case 8:
			return 4;
	
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
	
		default:
		
	}

	return -1;
}

BOOL func_80(int iParam0) // Position - 0x3ACA Hash - 0xD4333B2B ^0x519A5C88
{
	if (!func_175(iParam0))
		return true;

	return func_135(Global_1392626[iParam0 /*32*/].f_3, true);
}

float func_81(float fParam0, float fParam1, float fParam2, BOOL bParam3) // Position - 0x3AEF Hash - 0xBEF31EF9 ^0xBEF31EF9
{
	return func_78(Global_35, fParam0, bParam3);
}

BOOL func_82() // Position - 0x3B04 Hash - 0x569A3637 ^0x569A3637
{
	switch (func_38())
	{
		case 0:
		case 2:
		case 3:
		case 10:
		case 11:
			if (func_51(40, 1) == 9 || func_51(40, 9) == 16)
				return false;
			break;
	
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 12:
			if (func_51(40, 0) == 9 || func_51(40, 8) == 16)
				return false;
			break;
	}

	return true;
}

int func_83(int iParam0, BOOL bParam1, int iParam2) // Position - 0x3BA7 Hash - 0xE734F6F5 ^0xE734F6F5
{
	var unk;

	unk = 3;
	unk[0] = 0;
	unk[1] = 0;
	unk[2] = 0;

	switch (iParam0)
	{
		case 0:
			unk[0] = 23;
			unk[1] = 26;
			unk[2] = 5;
			break;
	
		case 1:
			unk[0] = 20;
			unk[1] = 3;
			break;
	
		case 2:
			unk[0] = 23;
			unk[1] = 26;
			unk[2] = 5;
			break;
	
		case 3:
			unk[0] = 20;
			unk[1] = 3;
			unk[2] = 5;
			break;
	
		case 4:
			unk[0] = 20;
			unk[1] = 3;
			break;
	
		case 5:
			unk[0] = 20;
			unk[1] = 3;
			break;
	
		case 9:
			unk[0] = 20;
			unk[1] = 3;
			break;
	
		case 10:
			unk[0] = 23;
			unk[1] = 26;
			unk[2] = 5;
			break;
	
		case 11:
			unk[0] = 20;
			unk[1] = 5;
			break;
	
		case 12:
			unk[0] = 20;
			unk[1] = 3;
			break;
	}

	if (bParam1)
		if (!func_176(unk[0]) && unk[0] != iParam2)
			return unk[0];
		else if (!func_176(unk[1]) && unk[1] != iParam2)
			return unk[1];
		else if (!func_176(unk[2]) && unk[2] != iParam2)
			return unk[2];
	else if (unk[0] != iParam2)
		return unk[0];
	else
		return unk[1];

	return 0;
}

BOOL func_84(BOOL bParam0, int iParam1) // Position - 0x3D57 Hash - 0xBAC14BAA ^0xBAC14BAA
{
	return Global_40.f_9571[iParam1 /*10*/] && bParam0 != false;
}

BOOL func_85(int iParam0, int iParam1) // Position - 0x3D6E Hash - 0x8BCBEEAE ^0x8BCBEEAE
{
	return func_177(iParam0, iParam1) > 0;
}

BOOL func_86(int iParam0, int iParam1) // Position - 0x3D80 Hash - 0x7D6A72B8 ^0x1C942B92
{
	BOOL flag;
	int frameCount;

	flag = true;

	if (func_133() == -1)
	{
		if (iParam1 == -1)
			iParam1 = func_178(func_23(), iParam0);
	
		frameCount = MISC::GET_FRAME_COUNT();
	
		if (Global_1914319.f_3[iParam0 /*446*/].f_444 >= frameCount)
			return Global_1914319.f_3[iParam0 /*446*/].f_445;
	
		flag = func_179(iParam1) || func_181(func_180(iParam0));
		Global_1914319.f_3[iParam0 /*446*/].f_444 = frameCount;
		Global_1914319.f_3[iParam0 /*446*/].f_445 = flag;
	}

	return flag;
}

int func_87() // Position - 0x3E09 Hash - 0x3405E1A9 ^0x3D931C02
{
	if (!func_182())
		return -1;

	return Global_1392135.f_3;
}

BOOL func_88() // Position - 0x3E23 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

BOOL func_89(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3E33 Hash - 0x9D8E22CB ^0x9D8E22CB
{
	if (!func_183(iParam0))
		return false;

	if (bParam1)
		return func_184(iParam0, 26, true);

	if (bParam2)
		if (!func_186(func_185(iParam0), 0))
			return false;

	if (!func_187(iParam0, true, false))
		return false;

	if (func_184(iParam0, 44, true))
		return false;

	return true;
}

BOOL func_90() // Position - 0x3E93 Hash - 0xC3712DB3 ^0xF130EE35
{
	if (Global_1894899.f_187)
		return true;

	if (func_45(16) && !func_45(21))
		return true;

	return false;
}

int func_91(int iParam0) // Position - 0x3EC2 Hash - 0xA08D7C4E ^0xA08D7C4E
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

Hash func_92(int iParam0) // Position - 0x3F7D Hash - 0x7493E565 ^0x5CB7541E
{
	if (!func_188(iParam0))
		return -1;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/];

	return Global_1058888.f_42196[iParam0 /*12*/];
}

BOOL func_93(int iParam0, int iParam1) // Position - 0x3FB7 Hash - 0x7CB67E5A ^0x34FB0507
{
	if (iParam1 == 2)
		return false;
	else if (func_48())
		if (func_189(iParam0, iParam1) == joaat("cs_johnmarston") || iParam1 == 0 || iParam1 == 8)
			return true;
	else if (func_189(iParam0, iParam1) != joaat("cs_johnmarston"))
		return true;

	return false;
}

int func_94(int iParam0, int iParam1) // Position - 0x4016 Hash - 0x2BF65B23 ^0x2BF65B23
{
	int num;
	int num2;
	int num3;

	if (iParam1 != 0)
	{
		num = func_190(iParam1);
		num2 = 17 + num;
		num3 = func_132(iParam0, num2);
	
		if (num3 == -1)
			return 0;
	
		return Global_17504.f_2205[num3 /*2*/].f_1;
	}

	return 0;
}

BOOL func_95(int iParam0) // Position - 0x4057 Hash - 0x998FEAB4 ^0x998FEAB4
{
	switch (func_79(iParam0))
	{
		case 3:
			if (func_191(func_53(57, 0), 32))
				return true;
			break;
	
		default:
			if (func_191(func_52(57, 0), 32))
				return true;
			break;
	}

	return false;
}

BOOL func_96(int iParam0) // Position - 0x40A0 Hash - 0x6DE1AD6E ^0x6DE1AD6E
{
	int num;
	int i;
	Hash weaponHash;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	if (func_45(59))
		if (!func_45(67))
			return false;

	num = 0;
	flag = false;
	flag2 = false;
	flag3 = false;
	flag4 = false;

	for (i = 0; i < 29; i = i + 1)
	{
		weaponHash = 0;
	
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, false))
		{
			if (func_192(weaponHash))
			{
				if (func_153(weaponHash, true, false) >= iParam0)
				{
					if (!flag)
					{
						if (WEAPON::IS_WEAPON_PISTOL(weaponHash))
						{
							flag = true;
							num = num + 1;
						}
					}
				
					if (!flag2)
					{
						if (WEAPON::IS_WEAPON_REVOLVER(weaponHash))
						{
							flag2 = true;
							num = num + 1;
						}
					}
				
					if (!flag3)
					{
						if (WEAPON::IS_WEAPON_REPEATER(weaponHash))
						{
							flag3 = true;
							num = num + 1;
						}
					}
				
					if (!flag4)
					{
						if (WEAPON::IS_WEAPON_RIFLE(weaponHash) && !WEAPON::_IS_WEAPON_SNIPER(weaponHash))
						{
							flag4 = true;
							num = num + 1;
						}
					}
				}
			}
		}
	}

	if (num > 0)
		return true;

	return false;
}

int func_97(int iParam0) // Position - 0x4184 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_98(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x419D Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

int func_99() // Position - 0x4207 Hash - 0xD08EBE2C ^0xD08EBE2C
{
	return func_79(func_38());
}

BOOL func_100(int iParam0) // Position - 0x4217 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_159(Global_1835011[iParam0 /*74*/].f_1);
}

BOOL func_101(int iParam0, BOOL bParam1) // Position - 0x4243 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_193(iParam0))
		return false;

	return Global_40.f_7157[iParam0 /*3*/] && bParam1 != false;
}

var func_102() // Position - 0x4268 Hash - 0x1372AFBD ^0xAE723118
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

	return unk;
}

BOOL func_103(int iParam0) // Position - 0x4292 Hash - 0x5000025C ^0x5000025C
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

eStackSize func_104() // Position - 0x42D7 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_105(int iParam0, int iParam1, eStackSize essParam2) // Position - 0x42E3 Hash - 0xB458AB6F ^0xEDF56BCB
{
	int num;

	num = func_194(iParam0, iParam1);
	Global_17504.f_1003[num /*6*/].f_5 = essParam2;
	return;
}

void func_106(int iParam0, int iParam1, int iParam2) // Position - 0x4303 Hash - 0xB458AB6F ^0xD4DBC17E
{
	int num;

	num = func_194(iParam0, iParam1);
	Global_17504.f_1003[num /*6*/].f_1 = iParam2;
	return;
}

BOOL func_107() // Position - 0x4323 Hash - 0x5A0F315B ^0x5A0F315B
{
	var unk;

	if (func_108(&unk))
		return false;

	if (!func_48())
	{
		if (func_52(114, 1) != 1)
		{
			if (func_23() == 76)
			{
				if (func_45(5))
				{
					if (func_52(114, 2) != 1)
					{
						func_106(114, 2, 1);
						func_105(114, 0, func_104());
						return false;
					}
					else if (func_54(114, 0, 1, 0) && !func_54(114, 0, 8, 0))
					{
						return true;
					}
				}
			}
		}
	
		if (func_52(114, 2) != 1)
		{
			if (func_23() == 105)
			{
				if (func_45(21))
				{
					if (func_52(114, 2) != 2)
					{
						func_106(114, 2, 2);
						func_105(114, 1, func_104());
						return false;
					}
				
					if (func_54(114, 1, 1, 0) && !func_54(114, 1, 8, 0))
						return true;
				}
			}
		}
	
		if (func_52(114, 3) != 1)
		{
			if (func_23() == 5)
			{
				if (func_45(34))
				{
					if (func_52(114, 2) != 3)
					{
						func_106(114, 2, 3);
						func_105(114, 2, func_104());
						return false;
					}
				
					if (func_54(114, 2, 1, 0) && !func_54(114, 2, 8, 0))
						return true;
				}
			}
		}
	
		if (func_52(114, 4) != 1)
		{
			if (func_23() == 92)
			{
				if (func_45(55))
				{
					if (func_52(114, 2) != 4)
					{
						func_106(114, 2, 4);
						func_105(114, 3, func_104());
						return false;
					}
				
					if (func_54(114, 3, 1, 0) && !func_54(114, 3, 8, 0))
						return true;
				}
			}
		}
	}

	return false;
}

BOOL func_108(var uParam0) // Position - 0x44BE Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_195(81053684))
		if (func_196(uParam0))
			return true;
	else if (func_197(-525676072, uParam0))
		if (func_196(uParam0))
			return true;

	return false;
}

int func_109(eStackSize essParam0) // Position - 0x4503 Hash - 0x359E833E ^0x8373C1E7
{
	if (!func_124(essParam0))
		return 0;

	return Global_23118[essParam0 /*11*/].f_10;
}

void func_110(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x4522 Hash - 0x4654DD91 ^0x21FEF3E7
{
	int num;

	num = iParam2 + (60 * iParam3) + (3600 * iParam4) + (86400 * iParam5);

	if (func_198(iParam0) == 1 && bParam7)
		return;

	if (bParam6)
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > num)
			return;

	if (bParam1 || bParam6 || func_133() != -1)
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;

	Global_17504.f_42[iParam0 /*8*/].f_4 = Global_17504.f_42[iParam0 /*8*/].f_4 + num;
	return;
}

int func_111(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x45AE Hash - 0x6C0BC7C7 ^0x6C0BC7C7
{
	int i;
	int num;
	float num2;
	float num3;

	num = -1;
	num2 = 100000000f;

	for (i = 0; i < 12; i = i + 1)
	{
		if (!bParam3 || func_199(i))
		{
			num3 = func_113(i, uParam0);
		
			if (num3 < num2)
			{
				num = i;
				num2 = num3;
			}
		}
	}

	return num;
}

BOOL func_112(int iParam0) // Position - 0x4603 Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

float func_113(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x4622 Hash - 0xA3FC3EE3 ^0xE0E564B4
{
	if (func_200(iParam0))
		return BUILTIN::VDIST(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), vParam1);

	return 100000000f;
}

BOOL func_114(int iParam0, int iParam1) // Position - 0x4652 Hash - 0xC75F64E4 ^0x21DED057
{
	switch (iParam1)
	{
		case 0:
			return func_201(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[1];
	
		case 1:
			return func_201(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[4];
	
		case 2:
			return func_201(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[3];
	
		case 3:
			return func_201(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[0];
	
		case 4:
			return func_201(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[8];
	
		case 5:
			return func_201(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[13];
	}

	return false;
}

BOOL func_115(int iParam0) // Position - 0x4731 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x4747 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

var func_117(BOOL bParam0, var uParam1, var uParam2) // Position - 0x4771 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_118(int iParam0) // Position - 0x4788 Hash - 0xB05A3A35 ^0xB05A3A35
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 12;
	
		case 2:
			return 23;
	
		case 3:
			return 6;
	
		case 4:
			return 17;
	
		case 5:
			return 1;
	
		case 6:
			return 3;
	
		case 7:
			return 23;
	
		case 8:
			return 1;
	
		case 9:
			return 8;
	
		case 10:
			return 2;
	
		case 11:
			return 4;
	
		case 12:
			return 18;
	
		case 13:
			return 12;
	
		case 14:
			return 7;
	
		case 15:
			return 21;
	
		case 16:
			return 19;
	
		case 17:
			return 12;
	
		case 18:
			return 7;
	
		case 19:
			return 1;
	
		case 20:
			return 17;
	
		case 21:
			return 3;
	
		case 22:
			return 1;
	
		case 23:
			return 17;
	
		case 24:
			return 14;
	
		case 27:
			return 11;
	
		case 28:
			return 5;
	
		case 29:
			return 8;
	
		case 30:
			return 38;
	
		case 31:
			return 20;
	
		case 32:
			return 10;
	
		case 33:
			return 13;
	
		case 34:
			return 11;
	
		case 35:
			return 2;
	
		case 36:
			return 12;
	
		case 37:
			return 20;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 12;
	
		case 41:
			return 3;
	
		case 42:
			return 1;
	
		case 43:
			return 27;
	
		case 44:
			return 9;
	
		case 45:
			return 15;
	
		case 46:
			return 2;
	
		case 47:
			return 2;
	
		case 48:
			return 9;
	
		case 49:
			return 7;
	
		case 50:
			return 36;
	
		case 51:
			return 5;
	
		case 53:
			return 3;
	
		case 54:
			return 6;
	
		case 55:
			return 2;
	
		case 56:
			return 12;
	
		case 57:
			return 14;
	
		case 58:
			return 8;
	
		case 59:
			return 3;
	
		case 60:
			return 11;
	
		case 61:
			return 2;
	
		case 62:
			return 17;
	
		case 63:
			return 6;
	
		case 64:
			return 7;
	
		case 65:
			return 10;
	
		case 66:
			return 12;
	
		case 67:
			return 5;
	
		case 68:
			return 5;
	
		case 69:
			return 5;
	
		case 70:
			return 6;
	
		case 71:
			return 8;
	
		case 72:
			return 9;
	
		case 73:
			return 4;
	
		case 74:
			return 1;
	
		case 75:
			return 1;
	
		case 76:
			return 1;
	
		case 77:
			return 3;
	
		case 78:
			return 2;
	
		case 79:
			return 6;
	
		case 80:
			return 3;
	
		case 81:
			return 15;
	
		case 82:
			return 9;
	
		case 83:
			return 2;
	
		case 84:
			return 2;
	
		case 85:
			return 11;
	
		case 86:
			return 2;
	
		case 87:
			return 9;
	
		case 88:
			return 2;
	
		case 89:
			return 1;
	
		case 90:
			return 2;
	
		case 91:
			return 2;
	
		case 92:
			return 3;
	
		case 93:
			return 1;
	
		case 94:
			return 9;
	
		case 95:
			return 1;
	
		case 96:
			return 7;
	
		case 97:
			return 6;
	
		case 98:
			return 4;
	
		case 99:
			return 2;
	
		case 100:
			return 1;
	
		case 101:
			return 2;
	
		case 102:
			return 3;
	
		case 103:
			return 3;
	
		case 104:
			return 3;
	
		case 105:
			return 2;
	
		case 106:
			return 4;
	
		case 107:
			return 1;
	
		case 108:
			return 3;
	
		case 109:
			return 3;
	
		case 110:
			return 1;
	
		case 111:
			return 4;
	
		case 112:
			return 3;
	
		case 113:
			return 3;
	
		case 114:
			return 16;
	
		case 115:
			return 3;
	
		case 116:
			return 7;
	
		case 117:
			return 2;
	
		case 118:
			return 10;
	
		case 119:
			return 17;
	
		default:
		
	}

	return 0;
}

Vector3 func_119(int iParam0, int iParam1) // Position - 0x4C59 Hash - 0x9696C39F ^0x9696C39F
{
	int num;

	if (iParam1 < 0)
		return 0f, 0f, 0f;

	if (!func_24(iParam0))
		return 0f, 0f, 0f;

	if (func_118(iParam0) == 0)
		return 0f, 0f, 0f;

	num = func_202(iParam0) + iParam1;

	if (num >= 892)
		return 0f, 0f, 0f;

	return Global_1310750.f_13358[num /*3*/];
}

BOOL func_120(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x4CB3 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

void func_121(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4D08 Hash - 0x4464293B ^0x680D2F86
{
	if (Global_1327479.f_9)
		return;

	Global_1327479.f_4 = Global_1327479.f_4 + (iParam0 * 1000);

	if (bParam2)
		Global_1310750.f_16106 = { Global_36 };

	if (iParam1 == 0)
		if (iParam0 > 0)
			Global_1327479.f_5 = MISC::GET_GAME_TIMER() + ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 2);
		else
			Global_1327479.f_5 = Global_1327479.f_5 + (iParam0 * 500);
	else
		Global_1327479.f_5 = MISC::GET_GAME_TIMER() + (iParam1 * 1000);

	return;
}

int func_122(int iParam0) // Position - 0x4D8D Hash - 0x660CF86 ^0x660CF86
{
	switch (iParam0)
	{
		case 0:
			return 38;
	
		case 1:
			return 5;
	
		case 2:
			return 5;
	
		case 3:
			return 105;
	
		case 4:
			return 115;
	
		case 5:
			return 76;
	
		case 6:
			return 76;
	
		case 7:
			return 120;
	
		case 8:
			return 92;
	
		default:
		
	}

	return -1;
}

int func_123(int iParam0) // Position - 0x4DFF Hash - 0x69122738 ^0x69122738
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 2;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 0;
	
		default:
		
	}

	return -1;
}

BOOL func_124(eStackSize essParam0) // Position - 0x4E6A Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_125(int iParam0) // Position - 0x4E80 Hash - 0x79178C2A ^0x504B0630
{
	if (!func_2(iParam0))
		return false;

	return Global_1935369.f_5[iParam0 /*11*/];
}

BOOL func_126() // Position - 0x4EA0 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_127(int iParam0) // Position - 0x4EF3 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_130(iParam0))
		return -1;

	return func_204(func_203(iParam0));
}

BOOL func_128(int iParam0) // Position - 0x4F13 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_129(int iParam0, int iParam1) // Position - 0x4F29 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_130(int iParam0) // Position - 0x4F38 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_131(int iParam0, int iParam1) // Position - 0x4F6B Hash - 0x5F43695 ^0x71726655
{
	if (!func_24(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_1 && iParam1 != false;
}

int func_132(int iParam0, int iParam1) // Position - 0x4F90 Hash - 0xCBC1F512 ^0x9659E844
{
	int num;
	int num2;
	int i;

	num = Global_1326862.f_512[iParam1];
	num2 = Global_1326862.f_558[iParam1];

	for (i = num; i <= num2; i = i + 1)
	{
		if (iParam0 == Global_1326862.f_11[i])
			return i;
	}

	return -1;
}

BOOL func_133() // Position - 0x4FDB Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_134(int iParam0, BOOL bParam1) // Position - 0x4FE9 Hash - 0xA712060D ^0xA712060D
{
	if (iParam0 < 0)
		return false;

	if (iParam0 >= 6 && !bParam1 || iParam0 > 10 && bParam1)
		return false;

	return true;
}

BOOL func_135(int iParam0, BOOL bParam1) // Position - 0x5021 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_205(iParam0))
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

BOOL func_136(int iParam0) // Position - 0x5052 Hash - 0x3C41C28F ^0x53D6F4A2
{
	if (!func_206(iParam0))
		return false;

	if (func_133() == false)
		return true;

	return !func_207() || MISC::IS_BIT_SET(Global_40.f_7856, iParam0);
}

BOOL func_137() // Position - 0x508B Hash - 0x11393D89 ^0x11393D89
{
	if (func_208(1))
		return false;

	return Global_1934181;
}

BOOL func_138() // Position - 0x50A3 Hash - 0x6DB16559 ^0x1BB0E5C6
{
	if (func_209())
		if (Global_1392235.f_1 == 1)
			return true;
	else if (func_19(76) >= 1)
		return true;

	return false;
}

BOOL func_139(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x50D2 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_210(bParam1, bParam2, bParam3);

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

int func_140(int iParam0) // Position - 0x5207 Hash - 0x110A4CEC ^0x110A4CEC
{
	int i;
	int num;
	int num2;

	num = func_211(iParam0);

	for (i = 0; i < num; i = i + 1)
	{
		num2 = func_212(iParam0, i);
	
		if (!func_43(num2))
			if (func_213(num2))
				return num2;
	}

	return -1;
}

BOOL func_141(int iParam0) // Position - 0x524D Hash - 0x43DDF0B1 ^0x50B51BF0
{
	int num;
	eStackSize stackSize;
	eStackSize stackSize2;

	num = func_214(0, iParam0, 2, 0);
	stackSize2 = func_215(num);

	if (stackSize2 == -15)
	{
		stackSize2 = func_104();
		func_216(&stackSize2, 0, 10, 0, 0, 0, 0);
	}
	else
	{
		func_217(&stackSize2, 0, 0, 20, 0, 0, 0, false);
	}

	if (func_218(iParam0, &stackSize))
		if (func_219(stackSize, stackSize2, true))
			stackSize2 = stackSize;

	if (func_220(&stackSize))
		if (func_219(stackSize, stackSize2, true))
			stackSize2 = stackSize;

	if (func_221(stackSize2, true))
		return true;

	return false;
}

BOOL func_142(int iParam0) // Position - 0x52DD Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_222(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

int func_143(int iParam0, int iParam1) // Position - 0x5348 Hash - 0xEE99B1EA ^0xEE99B1EA
{
	int i;
	int num;

	num = func_223(iParam0, iParam1);

	for (i = 0; i < Global_17504.f_1003; i = i + 1)
	{
		if (Global_17504.f_1003[i /*6*/] == num)
			return i;
	}

	return -1;
}

eStackSize func_144(int iParam0, int iParam1) // Position - 0x5386 Hash - 0x919CE407 ^0x2207D55B
{
	int num;

	num = func_143(iParam0, iParam1);

	if (num != -1)
		return Global_17504.f_1003[num /*6*/].f_5;

	return -15;
}

void func_145(eStackSize essParam0, eStackSize essParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x53B0 Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_219(essParam0, essParam1, true))
	{
		num = func_224(essParam1);
		num2 = func_225(essParam0);
		num3 = func_225(essParam0) - func_225(essParam1);
		num4 = func_224(essParam0) - func_224(essParam1);
		num5 = func_226(essParam0) - func_226(essParam1);
		num6 = func_227(essParam0) - func_227(essParam1);
		num7 = func_228(essParam0) - func_228(essParam1);
		num8 = func_229(essParam0) - func_229(essParam1);
	}
	else
	{
		num = func_224(essParam0);
		num2 = func_225(essParam1);
		num3 = func_225(essParam1) - func_225(essParam0);
		num4 = func_224(essParam1) - func_224(essParam0);
		num5 = func_226(essParam1) - func_226(essParam0);
		num6 = func_227(essParam1) - func_227(essParam0);
		num7 = func_228(essParam1) - func_228(essParam0);
		num8 = func_229(essParam1) - func_229(essParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_230(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_231(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

BOOL func_146(int iParam0) // Position - 0x55B2 Hash - 0xE4B93749 ^0xE4B93749
{
	return !func_168(iParam0, true);
}

BOOL func_147(int iParam0) // Position - 0x55C2 Hash - 0xDC21AF4A ^0xDC21AF4A
{
	if (iParam0 != -1)
		return true;

	return false;
}

BOOL func_148(int iParam0) // Position - 0x55D5 Hash - 0x80FCCA26 ^0x80FCCA26
{
	if (iParam0 != 0)
		return true;

	return false;
}

BOOL func_149(int iParam0, int iParam1) // Position - 0x55E8 Hash - 0x30A838F3 ^0x7EAD5209
{
	int num;
	int offset;

	if (!func_147(iParam0))
		return false;

	func_232(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1935183.f_73[iParam0 /*7*/][num], offset);
}

BOOL func_150(Hash hParam0, int iParam1) // Position - 0x561D Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_151(Hash hParam0) // Position - 0x5637 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_150(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_152(Hash hParam0, int iParam1) // Position - 0x5662 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_150(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_233(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_234("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_235(&unk, i, num, num2))
			{
			}
			else if (!func_192(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_236(num);
				return true;
			}
		}
	
		func_236(num);
	}

	return false;
}

int func_153(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5709 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_150(hParam0, 0))
		return 0;

	num = func_151(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_233(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_237(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_238(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_154(int iParam0) // Position - 0x578B Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

PersChar func_155(int iParam0) // Position - 0x57A2 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_154(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

eStackSize func_156(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x57C2 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_239(vParam0);
	num2 = -1;

	if (Global_1894882[num] > 0)
	{
		num3 = Global_1894882[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1894065[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[num4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[num4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[num4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								num2 = num4;
								flag = true;
							}
							break;
					
						default:
							num2 = num4;
							flag = true;
							break;
					}
				}
			}
		
			num3 = num3 - 1;
		}
	}

	if (num2 != -1)
	{
	}

	return num2;
}

BOOL func_157(var uParam0) // Position - 0x5879 Hash - 0x4FCBB902 ^0x1E36694F
{
	if (!WEAPON::IS_WEAPON_VALID(*uParam0))
		return false;

	if (*uParam0 == joaat("WEAPON_UNARMED"))
		return false;

	if (WEAPON::IS_WEAPON_SHOTGUN(*uParam0))
		return false;

	if (WEAPON::IS_WEAPON_PISTOL(*uParam0) || WEAPON::IS_WEAPON_REVOLVER(*uParam0))
		return true;

	return false;
}

Hash func_158(int iParam0, int iParam1) // Position - 0x58C9 Hash - 0xAED4FBA4 ^0xAED4FBA4
{
	var unk;

	return func_240(&unk, iParam0, iParam1);
}

BOOL func_159(int iParam0) // Position - 0x58DB Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_205(iParam0);
	return num == 3 || num == 4;
}

float func_160(var uParam0) // Position - 0x58F9 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_241(uParam0))
		return uParam0->f_1;

	if (func_242(uParam0))
		return uParam0->f_2;

	return func_16() - uParam0->f_1;
}

BOOL func_161() // Position - 0x592E Hash - 0xC30B2F25 ^0xC30B2F25
{
	eStackSize stackSize;

	stackSize = func_243();

	switch (stackSize)
	{
		case 0:
		case 4:
		case 7:
			return false;
	}

	return true;
}

eStackSize func_162() // Position - 0x595E Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

Vector3 func_163(eStackSize essParam0) // Position - 0x596C Hash - 0x563C355B ^0x563C355B
{
	switch (essParam0)
	{
		case 0:
			return -1343.6992f, 2429.3972f, 307.0626f;
	
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
	
		case 2:
			return 667.9077f, -1252.7803f, 42.9221f;
	
		case 3:
			return 1880.8066f, -1873.2307f, 41.8094f;
	
		case 4:
			return 1422.6255f, -7332.473f, 80.5977f;
	
		case 5:
			return 2254.96f, -758.12f, 41.75f;
	
		case 6:
			return 2351.2817f, 1362.0768f, 104.9752f;
	
		case 7:
			return -2593.2102f, 453.95334f, 145.9973f;
	
		case 8:
			return func_244();
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_164(int iParam0) // Position - 0x5A4C Hash - 0xAF2958EB ^0x705CE55D
{
	int address;

	if (iParam0 != -1)
	{
		address = func_245(0);
		return MISC::IS_BIT_SET(address, iParam0);
	}

	return false;
}

int func_165(int iParam0, BOOL bParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x5A6D Hash - 0x939FE3E6 ^0x939FE3E6
{
	int num;
	int i;

	num = 4;
	num[0] = 0;
	num[1] = 0;
	num[2] = 0;
	num[3] = 0;

	switch (iParam3)
	{
		case -1:
			switch (iParam0)
			{
				case 0:
					num[0] = 23;
					num[1] = 20;
					num[2] = 3;
					break;
			
				case 1:
					num[0] = 7;
					num[1] = 20;
					num[2] = 3;
					break;
			
				case 2:
					num[0] = 23;
					num[1] = 20;
					num[2] = 3;
					break;
			
				case 3:
					num[0] = 7;
					num[1] = 20;
					num[2] = 3;
					break;
			
				case 4:
					num[0] = 18;
					num[1] = 20;
					num[2] = 3;
					break;
			
				case 5:
				case 6:
				case 7:
					num[0] = 38;
					num[1] = 20;
					num[2] = 3;
					break;
			
				case 9:
					num[0] = 43;
					num[1] = 23;
					num[2] = 20;
					num[3] = 3;
					break;
			
				case 10:
					num[0] = 18;
					num[1] = 20;
					num[2] = 3;
					break;
			
				case 11:
					num[0] = 19;
					num[1] = 20;
					num[2] = 3;
					break;
			
				case 12:
					num[0] = 19;
					num[1] = 38;
					num[2] = 20;
					num[3] = 3;
					break;
			}
			break;
	
		case 40:
			switch (iParam0)
			{
				case 0:
					num[0] = 23;
					num[1] = 20;
					num[2] = 3;
					num[3] = 26;
					break;
			
				case 1:
					num[0] = 20;
					num[1] = 3;
					break;
			
				case 2:
					num[0] = 23;
					num[1] = 20;
					num[2] = 3;
					num[3] = 26;
					break;
			
				case 3:
					num[0] = 20;
					num[1] = 3;
					break;
			
				case 4:
					num[0] = 20;
					num[1] = 3;
					break;
			
				case 5:
				case 6:
				case 7:
					num[0] = 20;
					num[1] = 3;
					break;
			
				case 9:
					num[0] = 43;
					num[1] = 23;
					num[2] = 20;
					num[3] = 3;
					break;
			
				case 10:
					num[0] = 20;
					num[1] = 3;
					break;
			
				case 11:
					num[0] = 20;
					num[1] = 3;
					num[2] = 26;
					break;
			
				case 12:
					num[0] = 20;
					num[1] = 3;
					break;
			}
			break;
	
		case 119:
			switch (iParam0)
			{
				case 1:
					num[0] = 43;
					num[1] = 19;
					break;
			
				case 4:
					num[0] = 18;
					break;
			
				case 5:
				case 6:
				case 7:
					num[0] = 38;
					break;
			
				case 9:
					num[0] = 43;
					break;
			
				case 10:
					num[0] = 18;
					break;
			
				case 11:
					num[0] = 19;
					break;
			
				case 12:
					num[0] = 19;
					num[1] = 18;
					break;
			}
			break;
	}

	if (bParam1)
	{
		for (i = 0; i < num; i = i + 1)
		{
			if (num[i] != iParam2 && !func_246(num[i]))
				return num[i];
		}
	}
	else if (bParam4)
	{
		for (i = 0; i < num; i = i + 1)
		{
			if (num[i] != iParam2 && !func_248(func_247(num[i])))
				return num[i];
		}
	}
	else if (num[0] != iParam2)
	{
		return num[0];
	}
	else
	{
		return num[1];
	}

	return 0;
}

BOOL func_166(int iParam0) // Position - 0x5E4C Hash - 0x895544C2 ^0x895544C2
{
	return iParam0 > -1 && iParam0 < 35;
}

BOOL func_167(int iParam0) // Position - 0x5E62 Hash - 0x23EB7FEB ^0xEA1B4703
{
	BOOL flag;

	flag = func_168(iParam0, 256);
	return flag;
}

BOOL func_168(int iParam0, BOOL bParam1) // Position - 0x5E77 Hash - 0xC3E950D6 ^0xC3E950D6
{
	if (!func_249(iParam0))
		return false;

	return Global_1914319.f_15614[iParam0] && bParam1 != false;
}

BOOL func_169(int iParam0, int iParam1) // Position - 0x5E9D Hash - 0x959C7992 ^0x749D7801
{
	if (!func_166(iParam0))
		return false;

	return Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1 != false;
}

int func_170(int iParam0) // Position - 0x5EC5 Hash - 0xA776614E ^0xA776614E
{
	if (!func_249(iParam0))
		return -1;

	if (iParam0 == 34 && func_23() == MICRO)
		return 128;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
	
		case 4:
			return 13;
	
		case 5:
			return 14;
	
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 106:
		case 107:
		case 108:
			return 38;
	
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
	
		case 22:
		case 118:
			return 3;
	
		case 23:
		case 24:
			return 23;
	
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
	
		case 34:
			return 90;
	
		case 35:
			return 101;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
	
		case 56:
			return 71;
	
		case 57:
			return 98;
	
		case 58:
			return 9;
	
		case 59:
			return 79;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
	
		case 67:
			return 113;
	
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
	
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
	
		case 87:
		case 88:
		case 89:
			return 28;
	
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
	
		case 95:
		case 96:
		case 97:
			return 120;
	
		case 98:
			return 123;
	
		case 99:
		case 100:
		case 123:
			return 117;
	
		case 119:
			return 65;
	
		case 122:
			return 82;
	
		case 124:
			return 110;
	
		case 125:
			return 127;
	
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
	
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
	
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
	
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
	
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
	
		default:
		
	}

	return -1;
}

BOOL func_171(int iParam0, var uParam1) // Position - 0x630B Hash - 0x3651FB70 ^0xFA6F4E3D
{
	if (!func_166(iParam0))
		return false;

	if (func_133() != -1)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051260.f_48[iParam0 /*78*/].f_19))
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[iParam0 /*78*/].f_19);
		else
			return false;
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23);
	else
		return false;

	return true;
}

BOOL func_172(int iParam0) // Position - 0x6389 Hash - 0xEE4CA9DC ^0xEE4CA9DC
{
	if (!func_249(iParam0))
		return false;

	return func_250(Global_1914319.f_18594[iParam0], 1);
}

BOOL func_173(Ped pedParam0, Entity eParam1, BOOL bParam2, var uParam3, int iParam4, int iParam5) // Position - 0x63AF Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > bParam2->f_5)
		func_251(bParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			bParam2->f_12 = iParam5;
		else
			bParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(bParam2->f_1 & 128 != 0))
		{
			if (func_252(pedParam0, bParam2))
			{
				*uParam3 = 128;
				func_253(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(bParam2->f_1 & 8 != 0))
			{
				if (func_254(pedParam0, bParam2))
				{
					*uParam3 = 8;
					func_253(pedParam0, bParam2, *uParam3);
					return true;
				}
				else if (func_255(pedParam0, eParam1, bParam2))
				{
					*uParam3 = 8;
					func_253(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		
			if (*bParam2 & 32 != 0)
			{
				if (func_256(pedParam0, bParam2))
				{
					*uParam3 = 64;
					func_253(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_139(PLAYER::PLAYER_ID(), false, true, bParam2->f_1 & 524288 == 0))
		{
			if (!(bParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_253(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_257(bParam2, 1065353216))
			{
				if (!(bParam2->f_1 & 4 != 0))
				{
					if (func_258(Global_35, pedParam0, bParam2))
					{
						*uParam3 = 4;
						func_253(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			
				if (!(bParam2->f_1 & 256 != 0))
				{
					if (func_259(Global_35, pedParam0, bParam2))
					{
						*uParam3 = 256;
						func_253(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(bParam2->f_1 & 16 != 0))
		{
			if (bParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_260(Global_35, pedParam0, bParam2, false))
				{
					*uParam3 = 16;
					func_253(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
			else if (func_260(Global_35, pedParam0, bParam2, true))
			{
				*uParam3 = 16;
				func_253(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*bParam2 & 8 != 0)
			{
				if (func_261(pedParam0, bParam2))
				{
					*uParam3 = 32;
					func_253(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*bParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || bParam2->f_12 < 20f)
			{
				if (func_262(&pedParam0, bParam2))
				{
					*uParam3 = 4096;
					func_253(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(bParam2->f_1 & 2 != 0))
			{
				if (func_263(bParam2, 4000))
				{
					if (func_264(pedParam0, Global_1935630.f_41, *bParam2 & 128 != 0, false, *bParam2 & 256 != 0) && func_265(bParam2, pedParam0) && func_266(bParam2, pedParam0))
					{
						*uParam3 = 2;
						func_253(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(bParam2->f_1 & 2 != 0))
		{
			if (bParam2->f_12 < 4f)
			{
				if (func_264(pedParam0, Global_1935630.f_41, *bParam2 & 128 != 0, true, *bParam2 & 256 != 0) && func_265(bParam2, pedParam0) && func_266(bParam2, pedParam0))
				{
					*uParam3 = 2;
					func_253(pedParam0, bParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*bParam2 & 131072 == 0)
						{
							if (func_267(pedParam0, Global_1935630.f_41))
							{
								func_268();
								*uParam3 = 2;
								func_253(pedParam0, bParam2, *uParam3);
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
					if (*bParam2 & 131072 == 0)
					{
						if (func_267(pedParam0, Global_1935630.f_41))
						{
							func_268();
							*uParam3 = 2;
							func_253(pedParam0, bParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (bParam2->f_12 < 10f)
			{
				if (func_269(bParam2, pedParam0) || bParam2->f_9 > 0 && func_270() - bParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_268();
						*uParam3 = 2;
						func_253(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*bParam2 & 131072 == 0)
				{
					if (func_271())
					{
						if (func_267(pedParam0, Global_1935630.f_42))
						{
							func_268();
							*uParam3 = 2;
							func_253(pedParam0, bParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(bParam2->f_1 & 1024 != 0))
		{
			if (func_272(bParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_253(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (bParam2->f_12 < bParam2->f_26)
		{
			if (!(bParam2->f_1 & 2048 != 0))
			{
				if (func_273(pedParam0, eParam1, bParam2))
				{
					*uParam3 = 2048;
					func_253(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		
			if (*bParam2 & 16 != 0)
			{
				if (bParam2->f_6 == 2)
				{
					if (func_274(pedParam0, bParam2))
					{
						*uParam3 = 8192;
						func_253(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*bParam2 & 64 != 0)
			{
				if (func_275(pedParam0, bParam2))
				{
					*uParam3 = 32768;
					func_253(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (bParam2->f_12 < 12f)
		{
			if (*bParam2 & 1048576 != 0)
			{
				if (func_276(bParam2, 4000))
				{
					if (func_277(&pedParam0, bParam2))
					{
						*uParam3 = 512;
						func_253(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (bParam2->f_12 < bParam2->f_19)
		{
			if (*bParam2 & 1024 != 0)
			{
				if (func_278(pedParam0, bParam2))
				{
					*uParam3 = 65536;
					bParam2->f_4 = 0;
					func_253(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(bParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_279(bParam2, pedParam0))
			{
				*uParam3 = 1;
				func_253(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

BOOL func_174(int iParam0) // Position - 0x69D8 Hash - 0xE5195C8A ^0xA3716AF1
{
	PersChar item;
	Ped pedIndexFromEntityIndex;
	Vector3 entityCoords;

	if (iParam0 == 19)
		return true;

	if (iParam0 == 9)
		return true;

	if (func_133() == false)
		return func_280(Global_1051260.f_48[iParam0 /*78*/].f_18, Global_1051260.f_48[iParam0 /*78*/].f_30, true, 0);

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
		return false;

	if (iParam0 != 11)
	{
		if (!func_154(Global_1914319.f_3[iParam0 /*446*/].f_21))
			return false;
	
		if (!func_281(Global_1914319.f_3[iParam0 /*446*/].f_21, false))
			return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_23 = func_282(Global_1914319.f_3[iParam0 /*446*/].f_21);
		item = func_155(Global_1914319.f_3[iParam0 /*446*/].f_21);
	
		if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(item))
			return false;
	
		if (!PERSCHAR::_0x4AFC7288C77238B3(item))
			return false;
	
		if (!VOLUME::IS_POINT_IN_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_25, func_63(Global_1914319.f_3[iParam0 /*446*/].f_21)))
			return false;
	
		return true;
	}

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23);

	if (func_75(iParam0))
		return false;

	if (!ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex))
		if (LAW::_0x856CE8FDE2416602(pedIndexFromEntityIndex))
			return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_1914319.f_3[iParam0 /*446*/].f_23, true, false) };

	if (!VOLUME::IS_POINT_IN_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_25, entityCoords))
		return false;

	return true;
}

BOOL func_175(int iParam0) // Position - 0x6B6E Hash - 0xDA60CC84 ^0xDA60CC84
{
	return iParam0 > -1 && iParam0 < 9;
}

BOOL func_176(int iParam0) // Position - 0x6B84 Hash - 0xB868E87D ^0xB868E87D
{
	switch (iParam0)
	{
		case 3:
			if (func_53(40, 9) == 10)
				return true;
			break;
	
		case 5:
			if (func_53(40, 5) == 15)
				return true;
			break;
	
		case 20:
			if (func_53(40, 8) == 11)
				return true;
			break;
	
		case 23:
			if (func_53(40, 7) == 13)
				return true;
			break;
	
		case 26:
			if (func_53(40, 6) == 14)
				return true;
			break;
	}

	return false;
}

int func_177(int iParam0, int iParam1) // Position - 0x6C12 Hash - 0x31BDE2A9 ^0x31BDE2A9
{
	int num;
	int num2;
	int num3;

	if (iParam1 != 0)
	{
		num = func_190(iParam1);
		num2 = 17 + num;
		num3 = func_132(iParam0, num2);
	
		if (num3 == -1)
			return 0;
	
		return Global_17504.f_2205[num3 /*2*/];
	}

	return 0;
}

int func_178(eStackSize essParam0, int iParam1) // Position - 0x6C51 Hash - 0x8A1A59F3 ^0x8A1A59F3
{
	if (iParam1 == 11)
		return 101;
	else if (iParam1 == 32)
		return 126;
	else if (iParam1 == 34)
		return 127;

	switch (essParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
			
				case 31:
					return 118;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
			
				case 6:
					return 143;
			
				case 26:
					return 142;
			
				case 27:
					return 144;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 39;
			
				case 1:
					return 46;
			
				case 2:
					return 45;
			
				case 3:
					return 42;
			
				case 4:
					return 41;
			
				case 6:
					return 43;
			
				case 7:
					return 47;
			
				case 8:
					return 37;
			
				case 9:
					return 44;
			
				case 10:
					return 38;
			
				case 12:
					return 48;
			
				case 13:
					return 49;
			
				case 14:
					return 50;
			
				case 15:
					return 36;
			
				case 18:
					return 55;
			
				case 21:
					return 54;
			
				case 22:
					return 51;
			
				case 29:
					return 109;
			
				case 30:
					return 110;
			
				case 31:
					return 111;
			
				case 33:
					return 52;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
			
				case 6:
					return 147;
			
				case 19:
					return 58;
			
				case 26:
					return 146;
			
				case 27:
					return 148;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					return 24;
			
				case 2:
					return 23;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 2:
					return 65;
			
				case 3:
					return 61;
			
				case 9:
					return 63;
			
				case 10:
					return 60;
			
				case 20:
					return 62;
			
				case 22:
					return 64;
			
				case 29:
					return 114;
			
				case 31:
					return 115;
			
				case 33:
					return 66;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					return 88;
			
				case 2:
					return 89;
			
				case 3:
					return 87;
			
				default:
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 1:
					return 15;
			
				case 2:
					return 14;
			
				case 3:
					return 7;
			
				case 7:
					return 17;
			
				case 8:
					return 9;
			
				case 9:
					return 13;
			
				case 10:
					return 10;
			
				case 15:
					return 6;
			
				case 21:
					return 12;
			
				case 22:
					return 16;
			
				case 29:
					return 106;
			
				case 30:
					return 107;
			
				case 31:
					return 108;
			
				case 33:
					return 11;
			
				default:
					break;
			}
			break;
	
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
			
				default:
					break;
			}
			break;
	
		case 69:
			switch (iParam1)
			{
				case 1:
					return 21;
			
				case 2:
					return 20;
			
				case 3:
					return 19;
			
				case 4:
					return 18;
			
				case 31:
					return 105;
			
				default:
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
			
				case 6:
					return 139;
			
				case 19:
					return 56;
			
				case 26:
					return 138;
			
				case 27:
					return 140;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 73;
			
				case 1:
					return 78;
			
				case 2:
					return 77;
			
				case 3:
					return 74;
			
				case 6:
					return 75;
			
				case 8:
					return 69;
			
				case 9:
					return 76;
			
				case 10:
					return 72;
			
				case 15:
					return 68;
			
				case 20:
					return 79;
			
				case 22:
					return 80;
			
				case 29:
					return 102;
			
				case 30:
					return 103;
			
				case 31:
					return 104;
			
				case 33:
					return 70;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 1:
					return 3;
			
				case 2:
					return 2;
			
				case 6:
					return 0;
			
				case 22:
					return 1;
			
				case 29:
					return 120;
			
				case 31:
					return 121;
			
				default:
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
			
				case 6:
					return 130;
			
				case 19:
					return 59;
			
				case 26:
					return 129;
			
				case 27:
					return 131;
			
				default:
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
			
				default:
					break;
			}
			break;
	
		case 90:
		case MICRO:
			switch (iParam1)
			{
				case 18:
					return 34;
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 1:
					return 85;
			
				case 2:
					return 86;
			
				case 4:
					return 82;
			
				case 9:
					return 84;
			
				case 30:
					return 116;
			
				case 31:
					return 117;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
			
				case 6:
					return 134;
			
				case 19:
					return 57;
			
				case 26:
					return 133;
			
				case 27:
					return 135;
			
				default:
					break;
			}
			break;
	
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 1:
					return 31;
			
				case 2:
					return 30;
			
				case 3:
					return 28;
			
				case 4:
					return 27;
			
				case 6:
					return 29;
			
				case 10:
					return 26;
			
				case 15:
					return 25;
			
				case 22:
					return 32;
			
				case 29:
					return 112;
			
				case 31:
					return 113;
			
				case 33:
					return 33;
			
				default:
					break;
			}
			break;
	
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
			
				default:
					break;
			}
			break;
	
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 3:
					return 90;
			
				case 6:
					return 91;
			
				case 9:
					return 94;
			
				case 10:
					return 92;
			
				case 33:
					return 93;
			
				default:
					break;
			}
			break;
	
		case 117:
			switch (iParam1)
			{
				case 1:
					return 100;
			
				case 2:
					return 99;
			
				case 31:
					return 123;
			
				default:
					break;
			}
			break;
	
		case 120:
			switch (iParam1)
			{
				case 2:
					return 96;
			
				case 3:
					return 95;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

int func_179(int iParam0) // Position - 0x7465 Hash - 0x6646587B ^0x6646587B
{
	int num;

	if (!func_249(iParam0))
		return 0;

	num = func_283(iParam0);

	if (num == 2 && func_284(28) || num == 18 && iParam0 != 55 || num == 1 || num == 11 || iParam0 == 69 || num == 33 || num == 20 || num == 19 || num == 9 || func_167(iParam0))
		return 1;

	return 0;
}

BOOL func_180(int iParam0) // Position - 0x7507 Hash - 0xFBD7120C ^0x4ABFA698
{
	if (iParam0 == 15)
		return 65539;

	return 7;
}

int func_181(BOOL bParam0) // Position - 0x7521 Hash - 0x259E3CFD ^0x259E3CFD
{
	int num;

	if (bParam0 == -1)
		return 1;

	if (bParam0 == false)
		return 0;

	num = func_227(func_104());

	if (func_250(bParam0, true))
		if (num >= 6 && num < 12)
			return 1;

	if (func_250(bParam0, 2))
		if (num >= 12 && num < 18)
			return 1;

	if (func_250(bParam0, 4096))
		if (num >= 11 && num < 14)
			return 1;

	if (func_250(bParam0, 4))
		if (num >= 18 && num < 24)
			return 1;

	if (func_250(bParam0, 8))
		if (num >= 0 && num < 6)
			return 1;

	if (func_250(bParam0, 16))
		if (num >= 20 || num < 7)
			return 1;

	if (func_250(bParam0, 1024))
		if (num >= 5 && num < 12)
			return 1;

	if (func_250(bParam0, 32))
		if (num >= 5 && num < 22)
			return 1;

	if (func_250(bParam0, 64))
		if (num >= 6 && num < 20)
			return 1;

	if (func_250(bParam0, 128))
		if (num >= 21 || num < 5)
			return 1;

	if (func_250(bParam0, 256))
		if (num >= 22 && num < 24)
			return 1;

	if (func_250(bParam0, 512))
		if (num >= 0 && num < 5)
			return 1;

	if (func_250(bParam0, 8192))
		if (num >= 6 && num < 20)
			return 1;

	if (func_250(bParam0, 2048))
		if (num >= 1 && num < 3)
			return 1;

	if (func_250(bParam0, 16384))
		if (num >= 6 && num < 24)
			return 1;

	if (func_250(bParam0, 32768))
		if (num >= 21 || num < 6)
			return 1;

	if (func_250(bParam0, 65536))
		if (num >= 18 && num < 19)
			return 1;

	return 0;
}

BOOL func_182() // Position - 0x7775 Hash - 0x9DDBD4E1 ^0xED0D5A96
{
	if (Global_1392135.f_3 != -1)
		return true;

	return Global_1392135.f_3 != -1;
}

BOOL func_183(int iParam0) // Position - 0x7793 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

BOOL func_184(int iParam0, int iParam1, BOOL bParam2) // Position - 0x779F Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_183(iParam0))
			return false;

	func_285(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

Ped func_185(int iParam0) // Position - 0x77DA Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_183(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

BOOL func_186(Ped pedParam0, int iParam1) // Position - 0x7814 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_286(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_286(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_286(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_286(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_286(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_286(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_286(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_286(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_187(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7913 Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_183(essParam0))
		return false;

	if (func_287(essParam0, 32, true))
		return false;

	if (!func_287(essParam0, 2, true))
		return false;

	if (!func_287(essParam0, 4, true))
		return false;

	if (func_184(essParam0, 33, true))
		return false;

	if (func_288(essParam0))
		return false;

	if (func_289(essParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == essParam0)
			return false;

	return true;
}

BOOL func_188(int iParam0) // Position - 0x79A0 Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_189(int iParam0, int iParam1) // Position - 0x79B5 Hash - 0x6553AF7 ^0xBB4A9387
{
	int num;

	num = func_143(iParam0, iParam1);

	if (num != -1)
		return Global_17504.f_1003[num /*6*/].f_3;

	return 0;
}

int func_190(int iParam0) // Position - 0x79DD Hash - 0xF81FC77E ^0xDB0C7945
{
	int num;
	int num2;

	num = 0;
	num2 = iParam0;

	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		num = num + 1;
	}

	return num;
}

BOOL func_191(int iParam0, int iParam1) // Position - 0x7A06 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_192(Hash hParam0) // Position - 0x7A15 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_193(int iParam0) // Position - 0x7A30 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (iParam0 < 0 || iParam0 >= 95)
		return false;

	return true;
}

int func_194(int iParam0, int iParam1) // Position - 0x7A4F Hash - 0x992397AB ^0x992397AB
{
	int i;
	int num;

	num = func_223(iParam0, iParam1);

	for (i = 0; i < Global_17504.f_1003; i = i + 1)
	{
		if (Global_17504.f_1003[i /*6*/] == num || Global_17504.f_1003[i /*6*/] == -1)
		{
			Global_17504.f_1003[i /*6*/] = num;
			return i;
		}
	}

	return -1;
}

Hash func_195(Hash hParam0) // Position - 0x7AAC Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_291(func_290(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_196(var uParam0) // Position - 0x7ADB Hash - 0x313F44CF ^0x6235E18A
{
	if (func_197(81053684, uParam0))
		return true;

	if (func_197(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_197(Hash hParam0, var uParam1) // Position - 0x7B08 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_291(func_290(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_292(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_198(int iParam0) // Position - 0x7B7F Hash - 0x69AF6CF8 ^0x64DBA37A
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

BOOL func_199(int iParam0) // Position - 0x7B92 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}

	return false;
}

BOOL func_200(int iParam0) // Position - 0x7BC8 Hash - 0x96EC57 ^0x2A07EA1A
{
	if (func_112(iParam0))
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1);

	return false;
}

int func_201(int iParam0, int iParam1) // Position - 0x7BEC Hash - 0xEDE2D262 ^0xEDE2D262
{
	int num;

	switch (iParam1)
	{
		case 0:
			num = func_39(iParam0, 1);
			num = num + func_39(iParam0, 7);
			num = num + func_39(iParam0, 6);
			num = num + func_39(iParam0, 12);
			return num;
	
		case 1:
			num = func_39(iParam0, 4);
			num = num + func_39(iParam0, 9);
			return num;
	
		case 2:
			num = func_39(iParam0, 3);
			num = num + func_39(iParam0, 10);
			return num;
	
		case 3:
			num = func_39(iParam0, 0);
			num = num + func_39(iParam0, 2);
			num = num + func_39(iParam0, 11);
			return num;
	
		case 4:
			return func_39(iParam0, 8);
	
		case 5:
			num = func_39(iParam0, 13);
			num = num + func_39(iParam0, 14);
			num = num + func_39(iParam0, 15);
			num = num + func_39(iParam0, 16);
			return num;
	
		default:
		
	}

	return 0;
}

int func_202(int iParam0) // Position - 0x7CF2 Hash - 0x8AE2E06E ^0x8AE2E06E
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 10;
	
		case 2:
			return 22;
	
		case 3:
			return 45;
	
		case 4:
			return 51;
	
		case 5:
			return 68;
	
		case 6:
			return 69;
	
		case 7:
			return 72;
	
		case 8:
			return 95;
	
		case 9:
			return 96;
	
		case 10:
			return 104;
	
		case 11:
			return 106;
	
		case 12:
			return 110;
	
		case 13:
			return 128;
	
		case 14:
			return 140;
	
		case 15:
			return 147;
	
		case 16:
			return 168;
	
		case 17:
			return 187;
	
		case 18:
			return 199;
	
		case 19:
			return 206;
	
		case 20:
			return 207;
	
		case 21:
			return 224;
	
		case 22:
			return 227;
	
		case 23:
			return 228;
	
		case 24:
			return 245;
	
		case 27:
			return 259;
	
		case 28:
			return 270;
	
		case 29:
			return 275;
	
		case 30:
			return 283;
	
		case 31:
			return 321;
	
		case 32:
			return 341;
	
		case 33:
			return 351;
	
		case 34:
			return 364;
	
		case 35:
			return 375;
	
		case 36:
			return 377;
	
		case 37:
			return 389;
	
		case 38:
			return 409;
	
		case 39:
			return 410;
	
		case 40:
			return 411;
	
		case 41:
			return 423;
	
		case 42:
			return 426;
	
		case 43:
			return 427;
	
		case 44:
			return 454;
	
		case 45:
			return 463;
	
		case 46:
			return 478;
	
		case 47:
			return 480;
	
		case 48:
			return 482;
	
		case 49:
			return 491;
	
		case 50:
			return 498;
	
		case 51:
			return 534;
	
		case 53:
			return 539;
	
		case 54:
			return 542;
	
		case 55:
			return 548;
	
		case 56:
			return 550;
	
		case 57:
			return 562;
	
		case 58:
			return 576;
	
		case 59:
			return 584;
	
		case 60:
			return 587;
	
		case 61:
			return 598;
	
		case 62:
			return 600;
	
		case 63:
			return 617;
	
		case 64:
			return 623;
	
		case 65:
			return 630;
	
		case 66:
			return 640;
	
		case 67:
			return 652;
	
		case 68:
			return 657;
	
		case 69:
			return 662;
	
		case 70:
			return 667;
	
		case 71:
			return 673;
	
		case 72:
			return 681;
	
		case 73:
			return 690;
	
		case 74:
			return 694;
	
		case 75:
			return 695;
	
		case 76:
			return 696;
	
		case 77:
			return 697;
	
		case 78:
			return 700;
	
		case 79:
			return 702;
	
		case 80:
			return 708;
	
		case 81:
			return 711;
	
		case 82:
			return 726;
	
		case 83:
			return 735;
	
		case 84:
			return 737;
	
		case 85:
			return 739;
	
		case 86:
			return 750;
	
		case 87:
			return 752;
	
		case 88:
			return 761;
	
		case 89:
			return 763;
	
		case 90:
			return 764;
	
		case 91:
			return 766;
	
		case 92:
			return 768;
	
		case 93:
			return 771;
	
		case 94:
			return 772;
	
		case 95:
			return 781;
	
		case 96:
			return 782;
	
		case 97:
			return 789;
	
		case 98:
			return 795;
	
		case 99:
			return 799;
	
		case 100:
			return 801;
	
		case 101:
			return 802;
	
		case 102:
			return 804;
	
		case 103:
			return 807;
	
		case 104:
			return 810;
	
		case 105:
			return 813;
	
		case 106:
			return 815;
	
		case 107:
			return 819;
	
		case 108:
			return 820;
	
		case 109:
			return 823;
	
		case 110:
			return 826;
	
		case 111:
			return 827;
	
		case 112:
			return 831;
	
		case 113:
			return 834;
	
		case 114:
			return 837;
	
		case 115:
			return 853;
	
		case 116:
			return 856;
	
		case 117:
			return 863;
	
		case 118:
			return 865;
	
		case 119:
			return 875;
	
		default:
		
	}

	return -1;
}

BOOL func_203(int iParam0) // Position - 0x8266 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_204(BOOL bParam0) // Position - 0x82A4 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_205(int iParam0) // Position - 0x82B7 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_130(iParam0))
		return -1;

	return func_222(iParam0);
}

BOOL func_206(int iParam0) // Position - 0x82D3 Hash - 0x2F38AE1B ^0x2F38AE1B
{
	if (iParam0 <= -1 || iParam0 > 54)
		return false;

	return true;
}

BOOL func_207() // Position - 0x82F2 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_208(int iParam0) // Position - 0x8311 Hash - 0x863407EE ^0x2FA2F34D
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1146476.f_1 && iParam0 != false;
}

BOOL func_209() // Position - 0x8332 Hash - 0x3CA1BB47 ^0x47B702DE
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("beat_bandito_execution")) > 0)
		return true;

	return false;
}

BOOL func_210(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x834C Hash - 0xC9655EC3 ^0x88C9AFE1
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

int func_211(int iParam0) // Position - 0x83EA Hash - 0xAD3195ED ^0xAD3195ED
{
	switch (iParam0)
	{
		case 5:
			return 2;
	
		case 26:
			return 2;
	
		case 38:
			return 3;
	
		case 76:
			return 1;
	
		case 105:
			return 3;
	
		case 115:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_212(int iParam0, int iParam1) // Position - 0x8437 Hash - 0xB08BE1 ^0xB08BE1
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 == 0)
				return 12;
			else if (iParam1 == 1)
				return 16;
			break;
	
		case 26:
			if (iParam1 == 0)
				return 11;
			else if (iParam1 == 1)
				return 153;
			break;
	
		case 38:
			if (iParam1 == 0)
				return 18;
			else if (iParam1 == 1)
				return 155;
			else if (iParam1 == 2)
				return 17;
			break;
	
		case 76:
			if (iParam1 == 0)
				return 14;
			break;
	
		case 105:
			if (iParam1 == 0)
				return 13;
			else if (iParam1 == 1)
				return 154;
			else if (iParam1 == 2)
				return 15;
			break;
	
		case 115:
			if (iParam1 == 0)
				return 19;
			else if (iParam1 == 1)
				return 20;
			break;
	}

	return -1;
}

BOOL func_213(int iParam0) // Position - 0x8522 Hash - 0x63B95C0B ^0x8090615A
{
	if (func_48())
		if (func_129(Global_1347702[iParam0 /*49*/].f_12, 2097152))
			return false;
	else if (func_129(Global_1347702[iParam0 /*49*/].f_12, 256))
		return false;

	switch (iParam0)
	{
		case -1:
			return false;
	
		case 15:
			if (!func_45(20))
				return false;
			else if (!func_293())
				return false;
			break;
	
		case 16:
			if (func_294(Global_1347702[16 /*49*/].f_15) == 1)
				return false;
			break;
	
		case 153:
			if (!func_295())
				return false;
			break;
	
		case 154:
			if (!func_295())
				return false;
			break;
	
		case 155:
			if (!func_295())
				return false;
			break;
	}

	return true;
}

int func_214(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x85FF Hash - 0x71EF3E96 ^0x557A7961
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

	if (num2 >= func_296())
		num2 = func_296();

	flag = func_297(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_203(num5) == flag)
				return num5;
		
			if (func_203(num5) == false)
				return func_298(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_203(num5) == flag)
				return num5;
		
			if (func_203(num5) == false)
				return func_298(num3, num4, iParam2, i, hParam3);
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
				return func_298(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

eStackSize func_215(int iParam0) // Position - 0x88BA Hash - 0x4B5954D4 ^0xDC7F3754
{
	if (!func_130(iParam0))
		return -15;

	return func_299(iParam0);
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x88D8 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_225(*uParam0);
	i = func_224(*uParam0);
	j = func_226(*uParam0);
	k = func_227(*uParam0);
	l = func_228(*uParam0);
	m = func_229(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num3)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
	
		if (num2 < 0)
		{
			iParam6 = iParam6 + 1;
			i = i + 12;
		}
	
		num3 = func_230(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_300(uParam0, m, l, k, j, i, num);
	return;
}

void func_217(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x8A4B Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_225(*uParam0);
	i = func_224(*uParam0);
	num2 = func_226(*uParam0);
	j = func_227(*uParam0);
	k = func_228(*uParam0);
	l = func_229(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_230(i, num); num2 > m; m = func_230(i, num))
	{
		iParam5 = iParam5 + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			iParam6 = iParam6 + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	if (!bParam7)
		num = num + iParam6;

	func_300(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_218(int iParam0, var uParam1) // Position - 0x8BD3 Hash - 0xD5F2A484 ^0x1498701E
{
	eStackSize stackSize;
	BOOL num;
	int num2;
	int num3;

	stackSize = -15;
	num = 0;

	if (iParam0 == 105)
	{
		num2 = func_301(iParam0);
	
		if (!func_281(num2, false))
		{
			stackSize = func_302(num2);
		
			if (stackSize != -15)
			{
				func_217(&stackSize, 0, 0, 0, 7, 0, 0, false);
				*uParam1 = stackSize;
				num = 1;
			}
		}
		else
		{
			stackSize = func_302(num2);
		
			if (stackSize != -15)
			{
				func_217(&stackSize, 0, 0, 0, 7, 0, 0, false);
				*uParam1 = stackSize;
				num = 1;
			}
		}
	}

	num3 = func_303(iParam0);

	if (!func_281(num3, false))
	{
		stackSize = func_302(num3);
	
		if (stackSize != -15)
		{
			func_217(&stackSize, 0, 0, 0, 7, 0, 0, false);
			*uParam1 = stackSize;
		}
	}
	else
	{
		stackSize = func_302(num3);
	
		if (stackSize != -15)
		{
			func_217(&stackSize, 0, 0, 0, 7, 0, 0, false);
		
			if (func_219(stackSize, *uParam1, true))
			{
				*uParam1 = stackSize;
				num = 1;
			}
		}
	}

	return num;
}

BOOL func_219(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x8CC2 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_304(essParam1) || !func_304(essParam0))
			return true;

	return essParam0 > essParam1;
}

BOOL func_220(var uParam0) // Position - 0x8CEF Hash - 0xCE1201BA ^0xF127C11D
{
	int num;

	num = Global_40.f_11182.f_1;

	if (num == -15)
		return false;

	func_217(&num, 0, 0, 0, 5, 0, 0, false);
	*uParam0 = num;
	return true;
}

BOOL func_221(eStackSize essParam0, BOOL bParam1) // Position - 0x8D20 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_219(func_104(), essParam0, bParam1);
}

int func_222(int iParam0) // Position - 0x8D34 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_305(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_223(int iParam0, int iParam1) // Position - 0x8D75 Hash - 0x706CAB3F ^0x706CAB3F
{
	if (!func_24(iParam0))
		return -1;

	return iParam0 + (120 * iParam1);
}

int func_224(eStackSize essParam0) // Position - 0x8D93 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_225(eStackSize essParam0) // Position - 0x8DA6 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

int func_226(eStackSize essParam0) // Position - 0x8DCB Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_227(eStackSize essParam0) // Position - 0x8DDE Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_228(eStackSize essParam0) // Position - 0x8DF1 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

int func_229(eStackSize essParam0) // Position - 0x8E03 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 0) & 63;
}

int func_230(int iParam0, int iParam1) // Position - 0x8E15 Hash - 0x893AC59E ^0x893AC59E
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

float func_231(float fParam0, float fParam1, float fParam2) // Position - 0x8EAF Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_232(int iParam0, var uParam1, var uParam2) // Position - 0x8EF1 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_307(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

Hash func_233(Hash hParam0, int iParam1) // Position - 0x8F13 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_150(hParam0, 0))
		return 0;

	num = func_151(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_308(hParam0, 1399091007))
	{
		func_309(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_234(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x8F8D Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_238(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_235(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x8FB4 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_236(int iParam0) // Position - 0x8FEF Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_237(Hash hParam0, BOOL bParam1) // Position - 0x9010 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_310(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_312(&unk, func_311(false));

	if (!func_313(&unk, &num, &num2, false))
		return 0;

	func_236(num);
	return num2;
}

int func_238(BOOL bParam0) // Position - 0x906E Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_133() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_239(var uParam0, var uParam1, var uParam2) // Position - 0x90AF Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_314(uParam0, 0f, 0f, 0, 2);
	return func_314(uParam0, Global_1894052[num /*3*/].f_1, Global_1894052[num /*3*/].f_2, Global_1894052[num /*3*/], 4);
}

Hash func_240(Any anParam0, int iParam1, int iParam2) // Position - 0x90EA Hash - 0x776C9822 ^0x23A1A660
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;
	BOOL flag;
	var unk15;
	var unk19;

	hash = 0;
	unk.f_9 = joaat("SLOTID_NONE");
	flag = func_315(iParam1, 128);
	unk19.f_9 = joaat("SLOTID_NONE");

	if (func_234("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_235(&unk, i, num, num2))
			{
			}
			else if (!func_192(unk.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(unk.f_4))
			{
			}
			else if (iParam2 != 0 && unk.f_4 == iParam2)
			{
			}
			else if (!func_315(iParam1, 512) && func_316(unk.f_4, &unk15, &unk19, joaat("SLOTID_WEAPON_0")) && !unk19.f_21)
			{
			}
			else if (!flag || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, unk.f_4))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4) && !WEAPON::IS_WEAPON_SHOTGUN(unk.f_4) || func_315(iParam1, 32) && !WEAPON::IS_WEAPON_PISTOL(unk.f_4) || !func_315(iParam1, 16777216) && !WEAPON::IS_WEAPON_REVOLVER(unk.f_4) || !func_315(iParam1, 33554432))
				{
					if (hash == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &unk) > WEAPON::_0xA2091482ED42EF85(Global_35, anParam0))
					{
						hash = unk.f_4;
						*anParam0 = { unk };
					}
				}
			}
		}
	
		func_236(num);
	}

	if (func_192(hash))
	{
	}
	else if (!func_315(iParam1, 512))
	{
		iParam1 = iParam1 | 512;
		return func_240(anParam0, iParam1, iParam2);
	}
	else if (func_315(iParam1, 256))
	{
		hash = joaat("WEAPON_UNARMED");
	}

	return hash;
}

BOOL func_241(var uParam0) // Position - 0x92B8 Hash - 0x5001E582 ^0x5001E582
{
	return func_317(*uParam0, 1);
}

BOOL func_242(var uParam0) // Position - 0x92C8 Hash - 0x39705408 ^0x39705408
{
	return func_317(*uParam0, 2);
}

eStackSize func_243() // Position - 0x92D8 Hash - 0xFD016E51 ^0xFD016E51
{
	switch (func_133())
	{
		case -1:
			return Global_40.f_4283;
	}

	return -1;
}

Vector3 func_244() // Position - 0x92FD Hash - 0xEE6F6785 ^0xEE6F6785
{
	if (func_45(70))
		return -1634.2521f, -1358.5771f, 83.9077f;

	if (func_45(73))
		return -1665.4187f, -1346.2577f, 84.11175f;

	return -1641.1001f, -1359.9785f, 83.4932f;
}

int func_245(int iParam0) // Position - 0x934A Hash - 0x79767E7A ^0x79767E7A
{
	return func_52(119, iParam0);
}

BOOL func_246(int iParam0) // Position - 0x935A Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_318(iParam0))
		return false;

	return func_319(iParam0, 4, true);
}

Hash func_247(int iParam0) // Position - 0x9378 Hash - 0xD54AECF6 ^0xF5B76F98
{
	if (!func_318(iParam0))
		return 0;

	switch (iParam0)
	{
		case 2:
			return -1080874779;
	
		case 3:
			return joaat("consumable_potent_medicine");
	
		case 6:
			return joaat("consumable_special_horse_stimulant_crafted");
	
		case 7:
			return joaat("consumable_horse_reviver");
	
		case 13:
			return joaat("consumable_potent_restorative");
	
		case 15:
			return -1080874779;
	
		case 18:
			return joaat("consumable_potent_horse_stimulant");
	
		case 19:
			return joaat("consumable_potent_tonic");
	
		case 20:
			return joaat("consumable_potent_snake_oil");
	
		case 23:
			return joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED");
	
		case 26:
			return joaat("CONSUMABLE_COVER_SCENT");
	
		case 29:
			return joaat("consumable_potent_restorative");
	
		case 34:
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
	
		case 38:
			return joaat("consumable_potent_herbivore_bait");
	
		case 40:
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
	
		case 43:
			return joaat("consumable_potent_medicine");
	}

	return 0;
}

BOOL func_248(Hash hParam0) // Position - 0x94A7 Hash - 0xAD430840 ^0x833C1E45
{
	int acquireCostsCount;
	Hash outData;
	int i;

	acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(hParam0);
	outData.f_4 = 15;
	outData.f_36 = 10;

	for (i = 0; i < acquireCostsCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(hParam0, i, &outData))
			if (outData.f_2 == joaat("cost_type_craft") && !func_320(hParam0, outData, true))
				return true;
	}

	return false;
}

BOOL func_249(int iParam0) // Position - 0x9509 Hash - 0x91023C9F ^0x91023C9F
{
	return iParam0 > -1 && iParam0 < 153;
}

BOOL func_250(BOOL bParam0, BOOL bParam1) // Position - 0x951F Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && bParam1 != false;
}

void func_251(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x952E Hash - 0x37D64B11 ^0xE7060A9E
{
	func_321(iParam2);

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
		bParam0->f_10 = 0;

	bParam0->f_5 = iParam2;

	if (Global_1572887.f_12 == -1)
		bParam0->f_13 = Global_1935630.f_44;
	else
		bParam0->f_13 = func_322(0);

	switch (bParam0->f_6)
	{
		case 0:
			if (*bParam0 & 16 != 0)
				if (!(*bParam0 & 33554432 != 0))
					if (bParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_323(bParam0, 33554432);
					else if (!(*bParam0 & 8192 != 0))
						if (func_324(true))
							func_323(bParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_324(true) || *bParam0 & 8192 != 0)
					func_325(bParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(bParam0->f_1 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(bParam0->f_14))
		{
			if (func_326(bParam0))
				bParam0->f_15 = func_270();
		}
		else if (bParam0->f_15 > 0)
		{
			if (func_270() - bParam0->f_15 > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(bParam0->f_14))
				{
					bParam0->f_14 = 0;
					bParam0->f_15 = 0;
				}
			}
		}
	}

	bParam0->f_6 = bParam0->f_6 + 1;

	if (bParam0->f_6 >= 4)
	{
		bParam0->f_6 = 0;
		bParam0->f_7 = bParam0->f_7 + 1;
	
		if (bParam0->f_7 > 4)
			bParam0->f_7 = 0;
	}

	func_327(bParam0);
	return;
}

BOOL func_252(Ped pedParam0, BOOL bParam1) // Position - 0x96F9 Hash - 0x3A755B4E ^0xDBAC23C2
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
		
			if (!func_328(pedParam0, bParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_329(pedParam0, pedIndexFromEntityIndex) <= func_330(bParam1))
				return true;
			break;
	}

	return false;
}

void func_253(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x97D0 Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		bParam1->f_10 = pedParam0;

	if (func_331(iParam2, 1, 1, 1, 0))
		func_323(bParam1, 2048);

	bParam1->f_16 = iParam2;
	func_332(bParam1, true);
	func_333();
	return;
}

BOOL func_254(Ped pedParam0, BOOL bParam1) // Position - 0x980D Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_334(pedParam0, !(*bParam1 & 268435456 != 0), !(*bParam1 & 536870912 != 0), !(*bParam1 & 1073741824 != 0), 0, false))
		{
			if (bParam1->f_12 < 5f)
				num = 95f;
			else if (bParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_335(bParam1);
		
			if (func_336(bParam1, pedParam0, num, num2))
			{
				if (bParam1->f_2 == 0)
					bParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - bParam1->f_2;
				num4 = func_337(bParam1);
			
				if (bParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_332(bParam1, true);
						return true;
					}
					else if (bParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_332(bParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_255(Ped pedParam0, Entity eParam1, BOOL bParam2) // Position - 0x98F4 Hash - 0x899101A2 ^0xBCA80002
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

	if (func_338(eParam1, !(*bParam2 & 268435456 != 0), !(*bParam2 & 536870912 != 0), !(*bParam2 & 1073741824 != 0), 0))
	{
		if (bParam2->f_12 < 5f)
			num = 95f;
		else if (bParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_335(bParam2);
	
		if (func_336(bParam2, pedParam0, num, num2))
		{
			if (bParam2->f_2 == 0)
				bParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (bParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - bParam2->f_2 > func_337(bParam2))
				{
					func_332(bParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_256(Ped pedParam0, BOOL bParam1) // Position - 0x99CA Hash - 0xC62373A5 ^0xD1ADE674
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

	if (func_328(pedParam0, bParam1, pedIndexFromEntityIndex))
	{
		if (bParam1->f_3 == 0)
		{
			bParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - bParam1->f_3 > func_337(bParam1))
		{
			customDistance = func_335(bParam1);
		
			if (bParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_257(BOOL bParam0, int iParam1) // Position - 0x9AD3 Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (bParam0->f_8 <= 0)
		return true;

	num = func_270();
	num2 = num - bParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_258(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x9B0A Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_339(bParam2);
		
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
			if (func_266(bParam2, pedParam1))
			{
				func_332(bParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_259(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x9C11 Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (bParam2->f_12 < (float)func_340(bParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_266(bParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_332(bParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_260(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9C7C Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_341(bParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, bParam2->f_22))
				{
					func_332(bParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, bParam2->f_27))
				{
					func_332(bParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, bParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), bParam2->f_26, &outCoords, false, false);
				
					if (func_342(pedParam1, entityCoords, outCoords))
					{
						func_332(bParam2, true);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, bParam2->f_22))
				{
					func_332(bParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, bParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), bParam2->f_26, &outCoords2, false, false);
				
					if (func_342(pedParam1, entityCoords, outCoords2))
					{
						func_332(bParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_261(Ped pedParam0, BOOL bParam1) // Position - 0x9DC4 Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *bParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_328(pedParam0, bParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_343(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_344(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						bParam1->f_10 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_345(bParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				bParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_346(bParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				bParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_347(bParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				bParam1->f_10 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_262(var uParam0, BOOL bParam1) // Position - 0x9FA0 Hash - 0xF223CED2 ^0xA472D0A4
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

BOOL func_263(BOOL bParam0, int iParam1) // Position - 0xA018 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (bParam0->f_8 <= 0)
		return true;

	num = func_270();
	num2 = num - bParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_264(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA047 Hash - 0x8119700D ^0x42D5A76B
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
		if (func_348(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_349(entity2, pedParam0))
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

int func_265(BOOL bParam0, Ped pedParam1) // Position - 0xA1CD Hash - 0xEF996F53 ^0xBE53B40B
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", bParam0->f_5);
	else if (bParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_266(BOOL bParam0, Ped pedParam1) // Position - 0xA21A Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_350(bParam0))
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

BOOL func_267(Ped pedParam0, Ped pedParam1) // Position - 0xA2B7 Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_351(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_268() // Position - 0xA304 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_269(BOOL bParam0, Ped pedParam1) // Position - 0xA30C Hash - 0x6BE02E92 ^0x188EF1A2
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
	
		if (func_352(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			bParam0->f_9 = func_270();
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
						if (func_78(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								bParam0->f_9 = func_270();
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

int func_270() // Position - 0xA3CD Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_271() // Position - 0xA3EB Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_270() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_272(BOOL bParam0, Ped pedParam1) // Position - 0xA438 Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_330(bParam0);

	if (bParam0->f_12 > func_353(bParam0) && bParam0->f_12 > num)
		return false;

	num3 = func_354(pedParam1);
	num2 = func_355(bParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (bParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, bParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, bParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, bParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_273(Ped pedParam0, Entity eParam1, BOOL bParam2) // Position - 0xA554 Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (bParam2->f_12 > 4f)
		return false;

	flag = *bParam2 & 256 != 0;
	flag2 = *bParam2 & 524288 != 0;
	flag3 = *bParam2 & 128 != 0;
	return func_356(pedParam0, eParam1, flag, flag3, bParam2->f_12, flag2);
}

BOOL func_274(Ped pedParam0, BOOL bParam1) // Position - 0xA59C Hash - 0x23BB3370 ^0x36BD6CCF
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*bParam1 & 67108864 != 0)
		return true;

	if (Global_1935630.f_24)
		return true;

	if (*bParam1 & 33554432 != 0)
	{
		if (func_357(pedParam0, bParam1, true))
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
					if (!func_358(bParam1, pedParam0))
						if (func_78(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_275(Ped pedParam0, BOOL bParam1) // Position - 0xA7F5 Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_56(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_276(BOOL bParam0, int iParam1) // Position - 0xA82E Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (bParam0->f_8 <= 0)
		return true;

	num = func_270();
	num2 = num - bParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_277(var uParam0, BOOL bParam1) // Position - 0xA85D Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_278(Ped pedParam0, BOOL bParam1) // Position - 0xA871 Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (bParam1->f_4 == 0)
		bParam1->f_4 = func_270();
	else if (func_270() - bParam1->f_4 > func_359(bParam1))
		return func_360(pedParam0, bParam1, false, -1082130432);

	return false;
}

BOOL func_279(BOOL bParam0, Ped pedParam1) // Position - 0xA8BE Hash - 0x4DB62BCD ^0xFD20AB1F
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

BOOL func_280(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0xA911 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_281(int iParam0, BOOL bParam1) // Position - 0xA947 Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_133() != -1)
		return false;

	if (!func_154(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_155(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_361(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_155(iParam0));
}

Ped func_282(int iParam0) // Position - 0xA99F Hash - 0xEEC501EA ^0xEEC501EA
{
	if (!func_154(iParam0))
		return 0;

	if (!func_362(iParam0, 2))
		return 0;

	if (func_364(func_363(iParam0)))
		return func_361(iParam0);

	return PED::_0xE76687023D8C8505(func_365(iParam0), 0);
}

int func_283(int iParam0) // Position - 0xA9E5 Hash - 0x1497AC6A ^0x1497AC6A
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

BOOL func_284(int iParam0) // Position - 0xAE39 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_366(iParam0))
		return false;

	return func_367(iParam0);
}

int func_285(int iParam0, var uParam1, var uParam2) // Position - 0xAE55 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_286(int iParam0, int iParam1) // Position - 0xAE72 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_287(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAE81 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_183(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

BOOL func_288(int iParam0) // Position - 0xAEAB Hash - 0xDA629583 ^0xDA629583
{
	return func_287(iParam0, 16, true);
}

BOOL func_289(int iParam0) // Position - 0xAEBC Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

int func_290(Hash hParam0) // Position - 0xAED9 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_368(outSlotId);
}

int func_291(int iParam0, int iParam1) // Position - 0xAEFC Hash - 0x9D981F95 ^0x9D981F95
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

Hash func_292(Hash hParam0) // Position - 0xB0CD Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_150(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_293() // Position - 0xB0F8 Hash - 0xB80C9335 ^0x9E72F092
{
	int num;
	int num2;

	num2 = func_214(func_369(65536), 0, 3, func_370(65536));

	if (func_130(num2))
	{
		num = func_294(num2);
	
		if (!func_286(num, 4))
			return false;
	}

	return true;
}

int func_294(int iParam0) // Position - 0xB139 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_130(iParam0))
		return -1;

	return func_371(iParam0);
}

BOOL func_295() // Position - 0xB155 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

int func_296() // Position - 0xB166 Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_297(int iParam0, int iParam1, int iParam2) // Position - 0xB181 Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_298(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xB1A7 Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_372(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_296())
		return -1;

	flag = func_297(iParam0, iParam1, iParam2);
	num = iParam3;
	func_373(num, 0);
	func_374(num, 0);
	func_375(num, 0);
	func_376(num, 0);
	func_377(num, flag);

	if (hParam4 != 0)
		func_378(num, hParam4);

	return num;
}

int func_299(int iParam0) // Position - 0xB246 Hash - 0x3C887384 ^0xFB463C80
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_6;

	return -15;
}

void func_300(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB267 Hash - 0xA65AB937 ^0xA65AB937
{
	func_379(uParam0, iParam6);
	func_380(uParam0, iParam5);
	func_381(uParam0, iParam4);
	func_382(uParam0, iParam3);
	func_383(uParam0, iParam2);
	func_384(uParam0, iParam1);
	return;
}

int func_301(int iParam0) // Position - 0xB29F Hash - 0xA020FD76 ^0x67D09125
{
	int num;

	switch (iParam0)
	{
		case 5:
			num = 256;
			break;
	
		case 26:
			num = 472;
			break;
	
		case 38:
			num = 509;
			break;
	
		case 76:
			num = 3;
			break;
	
		case 78:
			num = 382;
			break;
	
		case 105:
			num = 72;
			break;
	
		case 115:
			num = 348;
			break;
	}

	return num;
}

eStackSize func_302(int iParam0) // Position - 0xB310 Hash - 0xA23F13FC ^0x174BDCDF
{
	if (func_133() != -1)
		return func_104();

	if (!func_154(iParam0))
		return func_104();

	return Global_24887[iParam0 /*2*/].f_1;
}

int func_303(int iParam0) // Position - 0xB341 Hash - 0xE7E725ED ^0x7B8E8F56
{
	int num;

	switch (iParam0)
	{
		case 5:
			num = 256;
			break;
	
		case 26:
			num = 472;
			break;
	
		case 38:
			num = 509;
			break;
	
		case 76:
			num = 3;
			break;
	
		case 78:
			num = 382;
			break;
	
		case 105:
			num = 70;
			break;
	
		case 115:
			num = 348;
			break;
	
		default:
			num = 3;
			break;
	}

	return num;
}

BOOL func_304(eStackSize essParam0) // Position - 0xB3B8 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_229(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_228(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_227(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_225(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_224(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_226(essParam0);

	if (num6 < 1 || num6 > func_230(num5, num4))
		return false;

	return true;
}

int func_305(int iParam0) // Position - 0xB494 Hash - 0x6EC15CF9 ^0xE613EBE0
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

var func_306(BOOL bParam0, var uParam1, var uParam2) // Position - 0xB515 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_307(int iParam0, int iParam1) // Position - 0xB52C Hash - 0x92F844D4 ^0x92F844D4
{
	switch (iParam0)
	{
		case -1993529370:
			return 14;
	
		case -1910231185:
			return 27;
	
		case joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"):
			return 30;
	
		case -1751068532:
			return 19;
	
		case joaat("TSTAG_NO_TAGS"):
			return 0;
	
		case -1403291038:
			return 13;
	
		case joaat("TSTAG_VAL_MUD3_ACTIVE_RIDE_TO_VAL"):
			return 28;
	
		case -1132827806:
			return 18;
	
		case -1066004925:
			return 36;
	
		case -586199837:
			return 23;
	
		case -529686691:
			return 20;
	
		case joaat("TSTAG_VAL_MUD3_ACTIVE_GO_TO_STORE"):
			return 29;
	
		case joaat("TSTAG_LOCKDOWN"):
			return 9;
	
		case -415041951:
			return 3;
	
		case joaat("TSTAG_FLOW_PRE_BOUNTY_1"):
			return 15;
	
		case joaat("TSTAG_FIRST_VISIT"):
			return 1;
	
		case -115118166:
			return 8;
	
		case joaat("TSTAG_ENDLESS_SUMMER"):
			return 4;
	
		case 0:
			return 38;
	
		case 508286680:
			return 5;
	
		case joaat("TSTAG_LOCKDOWN_SALOON"):
			return 11;
	
		case 623901469:
			return 16;
	
		case joaat("TSTAG_VAL_MUD4_ACTIVE_WALK_WITH_JOHN"):
			return 31;
	
		case joaat("TSTAG_RHD_FEUD1_ACTIVE"):
			return 25;
	
		case 1274330613:
			return 22;
	
		case joaat("TSTAG_VAL_MUD5_ACTIVE_STEALTH_EXIT"):
			return 34;
	
		case 1398684735:
			return 26;
	
		case 1556254948:
			return 2;
	
		case joaat("TSTAG_RAIN"):
			return 6;
	
		case joaat("TSTAG_LOCKDOWN_PARTIAL"):
			return 10;
	
		case 1598344177:
			return 21;
	
		case joaat("TSTAG_VAL_MUD5_ACTIVE"):
			return 33;
	
		case joaat("TSTAG_VAL_MUD4_ACTIVE_GO_TO_SALOON"):
			return 32;
	
		case joaat("TSTAG_VHT_ODD_FELLOWS_1_ACTIVE"):
			return 35;
	
		case 1763394652:
			return 17;
	
		case joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"):
			return 12;
	
		case joaat("TSTAG_RHD_SADIE1_ACTIVE"):
			return 24;
	
		case 1843135693:
			return 7;
	
		case 1869671285:
			return 37;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_308(Hash hParam0, Hash hParam1) // Position - 0xB6F2 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_309(Hash hParam0, var uParam1, var uParam2) // Position - 0xB723 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_310(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xB92F Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_311(BOOL bParam0) // Position - 0xBA01 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_238(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_386(923904168, func_385(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_386(923904168, func_385(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_386(923904168, func_385(bParam0), -740156546, false);
}

void func_312(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xBA96 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_313(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xBAB1 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_238(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_314(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0xBAD6 Hash - 0xA452440E ^0xD3F785A1
{
	if (fParam0 < fParam3)
		if (fParam0.f_1 < fParam4)
			return iParam5 + iParam6;
		else
			return iParam5;

	if (fParam0.f_1 < fParam4)
		return iParam5 + iParam6 + 1;

	return iParam5 + 1;
}

BOOL func_315(int iParam0, int iParam1) // Position - 0xBB1E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_316(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0xBB2D Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_238(false);
	*panParam1 = { func_386(hParam0, func_311(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_317(int iParam0, int iParam1) // Position - 0xBB72 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_318(int iParam0) // Position - 0xBB81 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_319(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBB8E Hash - 0x77ECC81C ^0x6B9E3122
{
	if (bParam2)
		if (!func_318(iParam0))
			return false;

	if (Global_1572887.f_12 != -1)
		return Global_36638[iParam0] && bParam1 != false;

	return Global_40.f_9274[iParam0] && bParam1 != false;
}

BOOL func_320(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xBBD1 Hash - 0xEAB06984 ^0xE37CC970
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	unk = 10;

	if (bParam2 && func_133() == false && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return false;

	if (!func_387(hParam0, hParam1, &unk, &num) || num < 1)
		return false;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return true;
		}
	}

	return false;
}

void func_321(int iParam0) // Position - 0xBC50 Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_388();

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
			func_389(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_322(int iParam0) // Position - 0xBDBC Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

void func_323(BOOL bParam0, int iParam1) // Position - 0xBDCF Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

BOOL func_324(BOOL bParam0) // Position - 0xBDE0 Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_390(bParam0, &unk, &unk2))
		return true;

	return false;
}

void func_325(BOOL bParam0, int iParam1) // Position - 0xBDFA Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_326(BOOL bParam0) // Position - 0xBE0F Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_133() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_391(bParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_391(bParam0);

	if (ped == 0)
		return false;

	if (func_355(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	bParam0->f_14 = ped;
	return true;
}

void func_327(BOOL bParam0) // Position - 0xBEA7 Hash - 0x256C27DD ^0x256C27DD
{
	if (*bParam0 & 8 != 0 || *bParam0 & 16 != 0)
		func_392(bParam0);

	return;
}

BOOL func_328(Ped pedParam0, BOOL bParam1, Ped pedParam2) // Position - 0xBECE Hash - 0x7FBD27D8 ^0x4C0BB7C4
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
		num2 = func_355(pedParam2);
	else
		num2 = func_354(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_355(pedParam0);
	else
		num = func_354(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_250(*bParam1, 8388608))
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

float func_329(Ped pedParam0, Ped pedParam1) // Position - 0xBFC7 Hash - 0xF9959663 ^0xF9959663
{
	return func_351(pedParam0, pedParam1, true, true);
}

float func_330(BOOL bParam0) // Position - 0xBFD9 Hash - 0xD73B9827 ^0xDE12990D
{
	return bParam0->f_26;
}

BOOL func_331(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xBFE5 Hash - 0xF70141B1 ^0xF70141B1
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

void func_332(BOOL bParam0, BOOL bParam1) // Position - 0xC05E Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_323(bParam0, 134217728);
	else
		func_325(bParam0, 134217728);

	return;
}

void func_333() // Position - 0xC084 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_334(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0xC098 Hash - 0x7ED53456 ^0xD7A590DD
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
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_351(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_393(ped, 0)))
			if (func_394(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_335(BOOL bParam0) // Position - 0xC1F8 Hash - 0xD73B9827 ^0x8CE07B2A
{
	return bParam0->f_17;
}

BOOL func_336(BOOL bParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0xC204 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (bParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_250(*bParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*bParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_337(BOOL bParam0) // Position - 0xC265 Hash - 0xD73B9827 ^0x372EC0B
{
	return bParam0->f_18;
}

BOOL func_338(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xC271 Hash - 0x838BDEFB ^0xB1D5C032
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_393(ped, 0)))
			if (func_395(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_339(BOOL bParam0) // Position - 0xC333 Hash - 0xD73B9827 ^0x9F7F0764
{
	return bParam0->f_23;
}

int func_340(BOOL bParam0) // Position - 0xC33F Hash - 0xD73B9827 ^0x303D0BA3
{
	return bParam0->f_21;
}

int func_341(BOOL bParam0) // Position - 0xC34B Hash - 0xB202FF2A ^0xFD1BAB10
{
	int num;

	switch (bParam0->f_7)
	{
		case 0:
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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

	if (*bParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_342(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0xC488 Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_396(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_343(Ped pedParam0) // Position - 0xC4CB Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_397(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_344(Ped pedParam0) // Position - 0xC531 Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_345(BOOL bParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC55D Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_398(pedParam1))
			return false;

	num = 5f;

	if (*bParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_346(BOOL bParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC5A4 Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_398(pedParam1))
			return false;

	num = 10f;

	if (*bParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_347(BOOL bParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0xC5EF Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_398(pedParam1))
		return false;

	if (*bParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_348(Ped pedParam0, var uParam1) // Position - 0xC668 Hash - 0x64FF5121 ^0xD9ABCD76
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

BOOL func_349(Ped pedParam0, Ped pedParam1) // Position - 0xC6B5 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_399(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_350(BOOL bParam0) // Position - 0xC6FD Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*bParam0 & 2 != 0);
}

float func_351(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC70D Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_352(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0xC755 Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_78(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_353(BOOL bParam0) // Position - 0xC781 Hash - 0xD73B9827 ^0x4905FA06
{
	return bParam0->f_24;
}

int func_354(Ped pedParam0) // Position - 0xC78D Hash - 0x45015065 ^0xFFBD1C84
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_355(Ped pedParam0) // Position - 0xC7E1 Hash - 0xD47F018 ^0x55D9527D
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_356(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0xC84B Hash - 0x89708384 ^0x6760E23F
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
			if (func_348(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_351(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_351(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_357(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC9BB Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_390(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_358(bParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_358(bParam1, ped2))
					if (func_78(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_358(BOOL bParam0, Ped pedParam1) // Position - 0xCAA9 Hash - 0x996E6E ^0x8D9F9946
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

int func_359(BOOL bParam0) // Position - 0xCB1D Hash - 0xD73B9827 ^0xAC2E3C80
{
	return bParam0->f_20;
}

BOOL func_360(Ped pedParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0xCB29 Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (bParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = bParam1->f_12;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_35))
			return 1;

	return 0;
}

Ped func_361(int iParam0) // Position - 0xCBA4 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_155(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

BOOL func_362(int iParam0, BOOL bParam1) // Position - 0xCBD2 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_133() != -1)
		return false;

	if (!func_154(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

Hash func_363(int iParam0) // Position - 0xCC00 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_154(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_364(Hash hParam0) // Position - 0xCC1E Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

Hash func_365(int iParam0) // Position - 0xCC2A Hash - 0xED567DFA ^0x7CDFEFC2
{
	if (!func_154(iParam0))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

BOOL func_366(int iParam0) // Position - 0xCC4C Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_367(int iParam0) // Position - 0xCC5F Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

int func_368(var uParam0) // Position - 0xCC89 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_400(i, 1);
	}

	return -358215195;
}

int func_369(int iParam0) // Position - 0xCCC4 Hash - 0x50D6DDCE ^0x50D6DDCE
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

Hash func_370(int iParam0) // Position - 0xCD9D Hash - 0xB8EC44B7 ^0x3329A2B3
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

int func_371(int iParam0) // Position - 0xCEAA Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

BOOL func_372(int iParam0) // Position - 0xCEC9 Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_373(int iParam0, int iParam1) // Position - 0xCEDF Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_401(iParam0);
	else
		func_402(iParam0, iParam1);

	func_403();
	return;
}

void func_374(int iParam0, int iParam1) // Position - 0xCF27 Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_375(int iParam0, int iParam1) // Position - 0xCF47 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_376(int iParam0, int iParam1) // Position - 0xCF67 Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_377(int iParam0, BOOL bParam1) // Position - 0xCF87 Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_378(int iParam0, Hash hParam1) // Position - 0xCFB2 Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

void func_379(var uParam0, int iParam1) // Position - 0xCFE1 Hash - 0xD05180BA ^0x39589262
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

void func_380(var uParam0, int iParam1) // Position - 0xD067 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_381(var uParam0, int iParam1) // Position - 0xD0A3 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_224(*uParam0);
	num2 = func_225(*uParam0);

	if (iParam1 < 1 || iParam1 > func_230(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_382(var uParam0, int iParam1) // Position - 0xD0F6 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_383(var uParam0, int iParam1) // Position - 0xD131 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_384(var uParam0, int iParam1) // Position - 0xD16A Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

struct<4> func_385(BOOL bParam0) // Position - 0xD1A2 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_386(joaat("character"), func_404(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_386(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xD1BE Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_150(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_238(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_387(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0xD1EF Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_150(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

BOOL func_388() // Position - 0xD264 Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_405())
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

void func_389(int iParam0, int iParam1) // Position - 0xD2BA Hash - 0x787BB1AC ^0x11099E69
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

BOOL func_390(BOOL bParam0, var uParam1, var uParam2) // Position - 0xD362 Hash - 0x2A9340EF ^0xAD765E32
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

Ped func_391(BOOL bParam0) // Position - 0xD429 Hash - 0xF229F24F ^0x47381422
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

	if (bParam0->f_6 == 3)
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

void func_392(BOOL bParam0) // Position - 0xD4D1 Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_325(bParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_323(bParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

Hash func_393(Ped pedParam0, int iParam1) // Position - 0xD536 Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_394(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0xD54D Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_395(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_395(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0xD57B Hash - 0xBF2250D5 ^0x34592C3E
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

BOOL func_396(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0xD5C5 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_397(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD606 Hash - 0x1D055735 ^0x5D260F19
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

BOOL func_398(Ped pedParam0) // Position - 0xD67F Hash - 0xF2F988FE ^0xA63CD631
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

int func_399(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xD767 Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

int func_400(int iParam0, int iParam1) // Position - 0xD7A9 Hash - 0xE1D12727 ^0xA46110B3
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

int func_401(int iParam0) // Position - 0xD9F8 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_305(iParam0);

	if (num < 0)
		return 0;

	return func_406(num);
}

int func_402(int iParam0, int iParam1) // Position - 0xDA18 Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_407(num2);
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

void func_403() // Position - 0xDB88 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

struct<4> func_404() // Position - 0xDBAB Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_405() // Position - 0xDBB7 Hash - 0x50F36DAB ^0xF55A49EF
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

int func_406(int iParam0) // Position - 0xDBE8 Hash - 0x78E19743 ^0x6ACC64F5
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

int func_407(int iParam0) // Position - 0xDC9C Hash - 0x6DD34799 ^0x352A62D8
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

