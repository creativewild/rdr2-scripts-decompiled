#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x3FEA59EB ^0x77B351BF
{
	int num;

	fLocal_8 = 1f;
	fLocal_9 = 1f;
	num = -1;
	num.f_7 = 1077936128;
	num.f_8 = 1120403456;
	num.f_9 = 1120403456;
	num.f_10 = 1132068864;
	num.f_12.f_3 = 1061158912;
	num.f_12.f_4 = 1066611507;
	num.f_12.f_6 = 1;
	num.f_31 = 15;
	num.f_572 = 7;
	num.f_580 = 7;
	num.f_588 = 7;
	num.f_596 = 7;
	num.f_630 = 5;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (num.f_622)
		{
			if (func_1() > Global_40.f_9319[num /*4*/].f_2)
			{
				Global_40.f_9319[num /*4*/].f_2 = func_1();
				func_2(&(Global_40.f_9319[num /*4*/].f_2), 0, 0, 24, 0, 0, 0, false);
			}
		}
	
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
			num.f_619 = 1;
	
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		func_3(&num);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		func_3(&num);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	if (func_4())
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		func_3(&num);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	num.f_627 = { TASK::_GET_SCENARIO_POINT_COORDS(anScriptParam_0.f_1, true) };

	while (!func_5(&num) && !func_6(&num))
	{
		BUILTIN::WAIT(0);
	}

	func_3(&num);
	SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
	return;
}

Hash func_1() // Position - 0x161 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_2(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x16D Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_7(*hParam0);
	i = func_8(*hParam0);
	num2 = func_9(*hParam0);
	j = func_10(*hParam0);
	k = func_11(*hParam0);
	l = func_12(*hParam0);

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

	for (m = func_13(i, num); num2 > m; m = func_13(i, num))
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

	func_14(hParam0, l, k, j, num2, i, num);
	return;
}

void func_3(var uParam0) // Position - 0x2F5 Hash - 0xECB008A6 ^0x9055A3E2
{
	int i;

	if (uParam0->f_626)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", false, -1);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		uParam0->f_626 = 0;
	}

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_12);
			PLAYER::_0x00B156AFEBCC5AE0(uParam0->f_12);
		}
	
		if (!uParam0->f_621 || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12) || uParam0->f_619)
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(uParam0->f_12, 0, Global_35);
				Global_40.f_9319[*uParam0 /*4*/].f_1 = 1;
				MAP::_MAP_DISCOVERY_SET_ENABLED(func_15(*uParam0));
				MAP::_MAP_DISCOVER_REGION(func_16(*uParam0));
				func_17(false, -1);
			
				if (!func_18(466))
					func_20(func_19(18, false, false, false), 466, 40000);
			}
		}
		else
		{
			if (uParam0->f_619 && uParam0->f_11 == 8)
			{
				if (func_21(Global_35) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_22(Global_35)) == uParam0->f_12)
				{
					func_23(*uParam0, true);
					func_25(func_24(*uParam0), uParam0->f_12.f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), true, false);
					func_27(func_26(joaat("Tracked"), func_24(*uParam0)), 1);
					func_27(func_26(joaat("killed"), func_24(*uParam0)), 1);
					func_27(func_26(joaat("skinned"), func_24(*uParam0)), 1);
					STATS::_0xA59590050F80FF2E(func_24(*uParam0), false, true, false);
					ENTITY::_SET_ENTITY_FULLY_LOOTED(uParam0->f_12, true);
					TASK::_0xA21AA2F0C2180125(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_12), 0);
					PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1f);
				}
			}
		
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}

	if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_12.f_9))
		PED::_RELEASE_META_PED_OUTFIT_REQUEST(uParam0->f_12.f_9);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_3))
	{
		func_28(uParam0->f_3);
		VOLUME::DELETE_VOLUME(uParam0->f_3);
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
	{
		func_28(uParam0->f_2);
		VOLUME::DELETE_VOLUME(uParam0->f_2);
		func_29(&(uParam0->f_5), uParam0->f_4, false);
	}

	if (*uParam0 == 15)
	{
		FLOCK::_0x706B434FEFAD6A24(-1f);
		FLOCK::_0xA881F5C77A560906(-1f);
	}

	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
		MAP::REMOVE_BLIP(&(uParam0->f_6));

	for (i = 0; i < func_30(); i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[i /*36*/].f_1))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_31[i /*36*/].f_1));
		
			if (uParam0->f_31[i /*36*/].f_9 != -1)
				GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(uParam0->f_31[i /*36*/].f_9), 1);
		
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[i /*36*/]))
				MAP::REMOVE_BLIP(&uParam0->f_31[i /*36*/]);
		
			if (uParam0->f_31[i /*36*/].f_3 != 0)
				ENTITY::_UNPIN_MAP_ENTITY(uParam0->f_31[i /*36*/].f_3);
		}
	
		func_31(uParam0->f_31[i /*36*/].f_10);
		func_32(&(uParam0->f_31[i /*36*/].f_16), true, true);
	}

	func_33(uParam0);
	return;
}

BOOL func_4() // Position - 0x5FA Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_5(var uParam0) // Position - 0x603 Hash - 0xBA3CD49A ^0x8BDBEB72
{
	BOOL flag;
	BOOL flag2;
	int num;

	if (uParam0->f_11 > 0)
	{
		flag = false;
		flag2 = false;
	
		if (MISC::GET_GAME_TIMER() - uParam0->f_613 > 1200000)
			flag = true;
	
		if (func_34() || func_35(Global_1935630, 131072))
			flag = true;
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED() && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("Hunting1")) == 0 && !func_36(15))
		{
			flag = true;
		}
		else if (func_37() && *uParam0 != 0)
		{
			num = func_38(0);
		
			if (num != 9 && num != 7)
				flag = true;
		}
		else if (func_39(PLAYER::PLAYER_ID(), true, false, true))
		{
			if (!Global_40.f_9319[*uParam0 /*4*/].f_1)
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12))
						func_40(200, true);
		
			flag = true;
		}
	
		if (flag)
		{
			if (uParam0->f_622)
			{
				if (Global_40.f_9319[*uParam0 /*4*/].f_1)
					flag2 = true;
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12))
						flag2 = true;
			
				if (!flag2)
					func_41(Global_35, "HUNTING_LOST_TRAIL", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
			
				if (func_1() > Global_40.f_9319[*uParam0 /*4*/].f_2)
				{
					Global_40.f_9319[*uParam0 /*4*/].f_2 = func_1();
					func_2(&(Global_40.f_9319[*uParam0 /*4*/].f_2), 0, 0, 24, 0, 0, 0, false);
				}
			}
		
			return true;
		}
	}

	return false;
}

BOOL func_6(var uParam0) // Position - 0x793 Hash - 0xD9E3A7D5 ^0xBB379E2E
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_42(uParam0))
				uParam0->f_11 = 1;
		
			uParam0->f_613 = MISC::GET_GAME_TIMER();
			break;
	
		case 1:
			if (func_43(uParam0))
				uParam0->f_11 = 9;
			else
				uParam0->f_11 = 2;
			break;
	
		case 2:
			if (uParam0->f_623)
				PED::_RESERVE_AMBIENT_PEDS(func_44(0) + 1);
			else
				PED::_RESERVE_AMBIENT_PEDS(1);
		
			func_45(uParam0);
			uParam0->f_11 = 3;
			break;
	
		case 3:
			if (PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY() && func_46(uParam0))
				uParam0->f_11 = 4;
			break;
	
		case 4:
			if (func_47(uParam0))
				uParam0->f_11 = 5;
			break;
	
		case 5:
			if (func_48(uParam0))
				uParam0->f_11 = 6;
			break;
	
		case 6:
			if (func_49(uParam0))
				uParam0->f_11 = 7;
			break;
	
		case 7:
			if (!uParam0->f_622)
				func_50(uParam0);
		
			func_51(uParam0);
		
			if (uParam0->f_621)
				func_52(uParam0);
		
			if (MISC::GET_FRAME_COUNT() % 5 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
				{
					if (ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
					{
						Global_40.f_9319[*uParam0 /*4*/].f_1 = 1;
						MAP::_MAP_DISCOVERY_SET_ENABLED(func_15(*uParam0));
						MAP::_MAP_DISCOVER_REGION(func_16(*uParam0));
						func_17(false, -1);
					
						if (!func_18(466))
							func_20(func_19(18, false, false, false), 466, 40000);
					
						func_33(uParam0);
					
						if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
							MAP::REMOVE_BLIP(&(uParam0->f_6));
					
						uParam0->f_11 = 8;
					}
					else if (uParam0->f_679 != 0 && !uParam0->f_680 && PED::IS_PED_IN_COMBAT(uParam0->f_12, 0))
					{
						AUDIO::_0xDC2F83A0612CA34D(uParam0->f_679);
						uParam0->f_680 = 1;
					}
					else if (uParam0->f_680)
					{
						if (!PED::IS_PED_IN_COMBAT(uParam0->f_12, 0))
						{
							AUDIO::_0x6AB944DF68B512D3(uParam0->f_679);
							uParam0->f_680 = 0;
						}
					}
				}
			}
			break;
	
		case 8:
			if (func_53(func_26(joaat("killed"), func_24(*uParam0))) < 1)
				func_27(func_26(joaat("killed"), func_24(*uParam0)), 1);
		
			if (func_54(uParam0))
			{
				func_17(false, -1);
				uParam0->f_11 = 9;
			}
			break;
	
		case 9:
			return true;
	}

	return false;
}

int func_7(int iParam0) // Position - 0x9E3 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_8(int iParam0) // Position - 0xA08 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_9(int iParam0) // Position - 0xA1B Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_10(int iParam0) // Position - 0xA2E Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_11(int iParam0) // Position - 0xA41 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_12(int iParam0) // Position - 0xA53 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_13(int iParam0, int iParam1) // Position - 0xA65 Hash - 0x893AC59E ^0x893AC59E
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

void func_14(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xAFF Hash - 0xA65AB937 ^0xA65AB937
{
	func_56(hParam0, iParam6);
	func_57(hParam0, iParam5);
	func_58(hParam0, iParam4);
	func_59(hParam0, iParam3);
	func_60(hParam0, iParam2);
	func_61(hParam0, iParam1);
	return;
}

Hash func_15(int iParam0) // Position - 0xB37 Hash - 0xED7149D6 ^0x70CFB709
{
	switch (iParam0)
	{
		case 0:
			return -372503450;
	
		case 1:
			return 1523666538;
	
		case 2:
			return 4951849;
	
		case 3:
			return -1644197791;
	
		case 4:
			return -1503385932;
	
		case 5:
			return 87178501;
	
		case 6:
			return -188752474;
	
		case 7:
			return -349166975;
	
		case 8:
			return -1290927903;
	
		case 9:
			return 637563550;
	
		case 10:
			return 1475355982;
	
		case 11:
			return 1724443719;
	
		case 12:
			return 1050506191;
	
		case 13:
			return 1623565947;
	
		case 14:
			return -1962265862;
	
		case 15:
			return 1526203407;
	
		default:
		
	}

	return 0;
}

Hash func_16(int iParam0) // Position - 0xC27 Hash - 0x2AB77E3A ^0xDDF0AC0D
{
	switch (iParam0)
	{
		case 0:
			return 13083484;
	
		case 1:
			return 333045931;
	
		case 2:
			return 1902076494;
	
		case 3:
			return -453294510;
	
		case 4:
			return 904770332;
	
		case 5:
			return 1407413829;
	
		case 6:
			return 45199580;
	
		case 7:
			return -140390317;
	
		case 8:
			return 1415123831;
	
		case 9:
			return 1789471985;
	
		case 10:
			return -2000773121;
	
		case 11:
			return 21224643;
	
		case 12:
			return -1026516599;
	
		case 13:
			return -1026066875;
	
		case 14:
			return -1536975869;
	
		case 15:
			return -412469442;
	
		default:
		
	}

	return 0;
}

void func_17(BOOL bParam0, int iParam1) // Position - 0xD17 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_62(&Global_0, 8);

	if (!func_63() || func_64() != -1)
		return;

	func_62(&Global_0, 1);
	return;
}

BOOL func_18(int iParam0) // Position - 0xD5D Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_64() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

int func_19(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDA2 Hash - 0x16C9DD13 ^0x16C9DD13
{
	int i;
	int num;
	int num2;
	float num3;
	float num4;

	i = -1;
	num = -1;
	num4 = -1f;

	for (i = 0; i < 153; i = i + 1)
	{
		if (!func_65(i))
		{
		}
		else if (func_66(i) != iParam0)
		{
		}
		else
		{
			if (bParam1)
			{
				if (!func_67(i))
				{
				}
				else
				{
					num2 = func_68(i);
				
					if (bParam3)
					{
						if (!func_69(num2))
						{
						}
						else
						{
							if (bParam2)
							{
								if (func_70(num2))
								{
								}
								else
								{
									num3 = func_72(Global_35, func_71(i), true);
								
									if (num3 < num4 || num4 == -1f)
									{
										num = i;
										num4 = num3;
									}
								}
							}
						
							num3 = func_72(Global_35, func_71(i), true);
						
							if (num3 < num4 || num4 == -1f)
							{
								num = i;
								num4 = num3;
							}
						}
					}
				
					if (bParam2)
					{
						if (func_70(num2))
						{
						}
						else
						{
							num3 = func_72(Global_35, func_71(i), true);
						
							if (num3 < num4 || num4 == -1f)
							{
								num = i;
								num4 = num3;
							}
						}
					}
				
					num3 = func_72(Global_35, func_71(i), true);
				
					if (num3 < num4 || num4 == -1f)
					{
						num = i;
						num4 = num3;
					}
				}
			}
		
			num2 = func_68(i);
		
			if (bParam3)
			{
				if (!func_69(num2))
				{
				}
				else
				{
					if (bParam2)
					{
						if (func_70(num2))
						{
						}
						else
						{
							num3 = func_72(Global_35, func_71(i), true);
						
							if (num3 < num4 || num4 == -1f)
							{
								num = i;
								num4 = num3;
							}
						}
					}
				
					num3 = func_72(Global_35, func_71(i), true);
				
					if (num3 < num4 || num4 == -1f)
					{
						num = i;
						num4 = num3;
					}
				}
			}
		
			if (bParam2)
			{
				if (func_70(num2))
				{
				}
				else
				{
					num3 = func_72(Global_35, func_71(i), true);
				
					if (num3 < num4 || num4 == -1f)
					{
						num = i;
						num4 = num3;
					}
				}
			}
		
			num3 = func_72(Global_35, func_71(i), true);
		
			if (num3 < num4 || num4 == -1f)
			{
				num = i;
				num4 = num3;
			}
		}
	}

	return num;
}

void func_20(int iParam0, int iParam1, int iParam2) // Position - 0xE4A Hash - 0xAB9DB255 ^0xDE3F0264
{
	Global_1934051.f_115 = iParam1;
	Global_1934051.f_116 = iParam0;
	Global_1934051.f_117 = iParam2;
	Global_1934051.f_118 = 1;
	return;
}

BOOL func_21(Ped pedParam0) // Position - 0xE71 Hash - 0x8F7DFED5 ^0x8768F0B4
{
	var lootTarget;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 0, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 2, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 1, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_0x758F081DB204DDDE(pedParam0))
		return true;

	return false;
}

Entity func_22(Ped pedParam0) // Position - 0xEDB Hash - 0x3D354C79 ^0x6A3F9034
{
	Entity lootTarget;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 0, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 2, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 1, &lootTarget, 1, 0) != 0)
		return lootTarget;

	return 0;
}

void func_23(int iParam0, BOOL bParam1) // Position - 0xF3B Hash - 0xF955E936 ^0xF52EED36
{
	int num;
	BOOL flag;
	BOOL flag2;
	int i;
	int num2;
	var unk;
	int num3;
	Hash model;

	num = 0;
	i = 0;
	num2 = 0;
	unk = 15;
	num3 = func_73(iParam0);
	func_74(iParam0, &model);
	num2 = PED::_0xB29C553BA582D09E(&unk, model, 2, 4);

	if (num2 > 0 && num2 < 15)
	{
		flag = true;
		flag2 = false;
	
		for (i = 0; i < num2; i = i + 1)
		{
			num = 0;
		
			if (func_75(unk[i], 369710026, &num))
			{
				num = num - func_76(unk[i], 1);
			
				if (num > 0)
					if (func_77(unk[i], 1))
						if (!func_78(unk[i], 1, num))
							flag = false;
						else
							flag2 = true;
			}
		
			if (bParam1 && func_75(unk[i], -768110908, &num))
			{
				num = num - func_76(unk[i], 0);
			
				if (num > 0)
					if (func_77(unk[i], 0))
						if (!func_78(unk[i], 0, num))
							flag = false;
						else
							flag2 = true;
			}
		}
	
		if (flag)
		{
			Global_40.f_9319[iParam0 /*4*/].f_3 = 0;
			func_79(&(Global_20710.f_2407), num3);
		
			if (flag2)
				func_40(467, true);
		
			func_17(false, -1);
		}
	}

	return;
}

Hash func_24(int iParam0) // Position - 0x107B Hash - 0xB8EC44B7 ^0x7CA82820
{
	switch (iParam0)
	{
		case 0:
			return joaat("at_bear_legendary");
	
		case 1:
			return joaat("at_beaver_legendary");
	
		case 2:
			return joaat("at_ram_legendary");
	
		case 3:
			return joaat("at_buffalo_legendary");
	
		case 4:
			return joaat("at_boar_legendary");
	
		case 5:
			return joaat("at_buck_legendary");
	
		case 6:
			return joaat("at_buffalo_tatanka");
	
		case 7:
			return joaat("at_gator_bull");
	
		case 8:
			return joaat("at_cougar_legendary");
	
		case 9:
			return joaat("at_coyote_legendary");
	
		case 10:
			return joaat("at_elk_legendary");
	
		case 11:
			return joaat("at_fox_legendary");
	
		case 12:
			return joaat("at_moose_legendary");
	
		case 13:
			return joaat("at_panther_legendary");
	
		case 14:
			return joaat("at_pronghorn_legendary");
	
		case 15:
			return joaat("at_wolf_legendary");
	
		default:
		
	}

	return 0;
}

void func_25(Hash hParam0, int iParam1, Vector3 vParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6) // Position - 0x116C Hash - 0x1E507D43 ^0xD4646B2A
{
	Hash mapDiscoverableFromStatItem;
	Hash discoveryHash;
	int num;

	mapDiscoverableFromStatItem = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(hParam0, vParam2);
	discoveryHash = mapDiscoverableFromStatItem;

	if (discoveryHash != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(discoveryHash))
		MAP::_MAP_DISCOVER_REGION(discoveryHash);

	if (bParam5 && joaat("at_horse") != hParam0)
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(hParam0, bParam6);

	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_39 == joaat("Player_Zero"))
		{
			num = func_80(hParam0, iParam1, 1);
		
			if (num != 0)
				func_81(num, 0);
		}
		else
		{
			num = func_80(hParam0, iParam1, 1);
		
			if (num != 0)
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(num))
				{
					num = func_80(hParam0, iParam1, 0);
				
					if (num != 0)
						func_81(num, 0);
				}
			}
		}
	}

	return;
}

struct<2> func_26(int iParam0, Hash hParam1) // Position - 0x121E Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = hParam1;
	return num;
}

void func_27(var uParam0, var uParam1, int iParam2) // Position - 0x1234 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_28(Volume volParam0) // Position - 0x1244 Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_82(volumeCoords, 0);
	return;
}

void func_29(var uParam0, Volume volParam1, BOOL bParam2) // Position - 0x126C Hash - 0x2EB65318 ^0x737362FB
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volParam1);
	POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volParam1);

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(*uParam0))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);

	return;
}

int func_30() // Position - 0x12A4 Hash - 0x710DEC78 ^0x710DEC78
{
	return 9;
}

void func_31(Volume volParam0) // Position - 0x12AE Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_32(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12C5 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_83(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_84(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_85(num);
	*uParam0 = 0;
	return;
}

void func_33(var uParam0) // Position - 0x1319 Hash - 0x6E0E5DAC ^0x576FCDC5
{
	if (uParam0->f_680)
	{
		AUDIO::_0x6AB944DF68B512D3(uParam0->f_679);
		uParam0->f_680 = 0;
	}

	if (uParam0->f_614 > 0)
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_677))
			AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_677, false, true);

	return;
}

BOOL func_34() // Position - 0x1359 Hash - 0x7DF1A9A5 ^0x80A37AC6
{
	return func_35(Global_1935630, 4096) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_dump_body")) > 0;
}

BOOL func_35(int iParam0, int iParam1) // Position - 0x137D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_36(int iParam0) // Position - 0x138C Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_86(Global_1835011[iParam0 /*74*/].f_1);
}

BOOL func_37() // Position - 0x13B8 Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

int func_38(int iParam0) // Position - 0x13C6 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_39(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13DA Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_87(bParam1, bParam2, bParam3);

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

void func_40(int iParam0, BOOL bParam1) // Position - 0x150F Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_88(iParam0, &num, &num2);

	if (!func_89(iParam0, num, num2, bParam1))
		return;

	func_90(num, num2);
	return;
}

BOOL func_41(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x153C Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_91(pedParam0, &str);
}

BOOL func_42(var uParam0) // Position - 0x1583 Hash - 0x47A20034 ^0xB19DE376
{
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_9 = 90f;
	uParam0->f_10 = 190f;
	uParam0->f_572[0] = joaat("p_elkscat01x");
	uParam0->f_572[1] = joaat("eag_eye_trck_elk_aa");
	uParam0->f_572[2] = joaat("p_elktuftsfur01x");
	uParam0->f_580[0] = 0;
	uParam0->f_580[1] = 5;
	uParam0->f_580[2] = 1;
	uParam0->f_588[0] = 0;
	uParam0->f_588[1] = 5;
	uParam0->f_588[2] = 4;
	uParam0->f_596[0] = 1;
	uParam0->f_596[1] = 1;
	uParam0->f_596[2] = 1;
	uParam0->f_12.f_1 = joaat("a_c_elk_01");
	uParam0->f_12.f_3 = 0.9f;
	uParam0->f_12.f_5 = 1;
	uParam0->f_12.f_8 = joaat("META_OUTFIT_ANIMAL_ALBINO_ELK");
	return true;
}

BOOL func_43(var uParam0) // Position - 0x1648 Hash - 0x90008B47 ^0xA0ACAD4E
{
	float num;
	var unk;
	var unk6;

	if (*uParam0 != -1)
	{
		if (!func_92(15))
			return true;
	
		if (Global_40.f_9319[*uParam0 /*4*/].f_1)
		{
			return true;
		}
		else if (func_1() < Global_40.f_9319[*uParam0 /*4*/].f_2)
		{
			func_40(201, true);
			return true;
		}
	}

	if (*uParam0 == 1)
		if (func_93(123) || func_94(123) || func_95(123))
			return true;
		else
			num = 10f;
	else if (*uParam0 == 13)
		num = 10f;
	else if (*uParam0 == 5)
		num = 10f;
	else if (*uParam0 == 12)
		num = 50f;
	else
		num = uParam0->f_9 - 15f;

	unk = 4;
	unk6 = 4;
	unk6[0] = 4096;
	unk6[1] = 16384;
	unk6[2] = 16;
	unk6[3] = 8192;

	if (VOLUME::_0x51E52C9687FCDEEC(uParam0->f_627, num, &unk, &unk6, 0))
	{
		func_40(200, true);
		return true;
	}

	return false;
}

int func_44(int iParam0) // Position - 0x175F Hash - 0x7F390DDD ^0x7F390DDD
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 3;
			break;
	
		case 1:
			num = 3;
			break;
	
		case 2:
			num = 3;
			break;
	}

	return num;
}

void func_45(var uParam0) // Position - 0x1795 Hash - 0xF060930F ^0x679498F2
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uParam0->f_572[i] != 0)
			STREAMING::REQUEST_MODEL(uParam0->f_572[i], false);
	}

	if (uParam0->f_12.f_1 != 0)
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_1, false);

	return;
}

BOOL func_46(var uParam0) // Position - 0x17DF Hash - 0x7B76A2ED ^0x317722B6
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uParam0->f_572[i] != 0)
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_572[i]))
				return false;
	}

	if (uParam0->f_12.f_1 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_1))
		{
			return false;
		}
		else if (uParam0->f_12.f_5)
		{
			if (!PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_12.f_9))
			{
				if (uParam0->f_12.f_7 > 0)
					uParam0->f_12.f_9 = PED::_0x273915CE30780986(uParam0->f_12.f_1, uParam0->f_12.f_7);
				else
					uParam0->f_12.f_9 = PED::_REQUEST_META_PED_OUTFIT(uParam0->f_12.f_1, uParam0->f_12.f_8);
			
				return false;
			}
			else if (!PED::_HAS_META_PED_OUTFIT_LOADED(uParam0->f_12.f_9))
			{
				return false;
			}
		}
	}

	return true;
}

BOOL func_47(var uParam0) // Position - 0x18A4 Hash - 0x43C1809B ^0xD255F79A
{
	float scaleX;

	scaleX = uParam0->f_9 + 20f;
	uParam0->f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_627, 0f, 0f, 0f, scaleX, scaleX, scaleX, "HuntingZoneRestrictionPending");
	func_96(uParam0->f_3, "Hunting Zone Target Pending", false, 0, 8192, false, -1082130432);
	return true;
}

BOOL func_48(var uParam0) // Position - 0x18EB Hash - 0xC25AB6F8 ^0xC25AB6F8
{
	int i;
	int j;

	for (i = 0; i < func_97(); i = i + 1)
	{
		for (j = 0; j < func_44(i); j = j + 1)
		{
			func_98(uParam0, i, j);
			uParam0->f_618 = uParam0->f_618 + 1;
		}
	}

	return true;
}

BOOL func_49(var uParam0) // Position - 0x1936 Hash - 0x10BF63DF ^0x638AC662
{
	int i;
	float radius;
	var unk;
	var unk3;
	var unk6;
	var unk9;
	float num;

	uParam0->f_12.f_10 = { uParam0->f_627 + { -20f, 0f, 0f } };
	uParam0->f_12.f_13 = { 0f, 0f, func_99(0) };

	if (uParam0->f_12.f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			if (uParam0->f_12.f_5)
				uParam0->f_12 = PED::_CREATE_META_PED_OUTFIT_PED(uParam0->f_12.f_9, uParam0->f_12.f_10, 0, true, true, false, false);
			else
				uParam0->f_12 = func_100(uParam0->f_12.f_1, uParam0->f_12.f_10, 0, true, true, 0, true, false, true, false, false, false, false);
		
			func_101(uParam0);
			return false;
		}
	}

	radius = uParam0->f_12.f_3;

	for (i = 0; i < func_30(); i = i + 1)
	{
		if (uParam0->f_31[i /*36*/].f_4 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[i /*36*/].f_1) && uParam0->f_31[i /*36*/].f_28 < 3)
			{
				if (uParam0->f_31[i /*36*/].f_6 == 0)
				{
					uParam0->f_31[i /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[i /*36*/].f_4, uParam0->f_31[i /*36*/].f_17, true, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_31[i /*36*/].f_1, uParam0->f_31[i /*36*/].f_23);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uParam0->f_31[i /*36*/].f_1, false);
				}
				else if (uParam0->f_31[i /*36*/].f_6 == 1)
				{
					uParam0->f_31[i /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[i /*36*/].f_4, uParam0->f_31[i /*36*/].f_17, true, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_31[i /*36*/].f_1, 0f, 90f, uParam0->f_31[i /*36*/].f_23, 0, false);
				}
				else if (uParam0->f_31[i /*36*/].f_6 == 2)
				{
					uParam0->f_31[i /*36*/].f_2 = func_100(uParam0->f_31[i /*36*/].f_4, uParam0->f_31[i /*36*/].f_17, 0, true, true, 0, true, true, true, false, false, false, false);
				
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[i /*36*/].f_2))
					{
						func_102(uParam0->f_31[i /*36*/].f_2, false, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_31[i /*36*/].f_2, 186, false);
						PED::APPLY_PED_DAMAGE_PACK(uParam0->f_31[i /*36*/].f_2, &(uParam0->f_605), 1f, 1f);
						PERSISTENCE::_0xF5622FA6ACFCA7DB(uParam0->f_31[i /*36*/].f_2, MISC::GET_RANDOM_INT_IN_RANGE(40, 50));
						PERSISTENCE::_0xDC0A1F0ECEC9F0C0(uParam0->f_31[i /*36*/].f_2, 1.25f);
						MISC::SET_PED_DECOMPOSED(uParam0->f_31[i /*36*/].f_2, true);
					}
				
					uParam0->f_31[i /*36*/].f_1 = func_103(uParam0->f_31[i /*36*/].f_2);
				}
				else if (uParam0->f_31[i /*36*/].f_6 == 3)
				{
					uParam0->f_31[i /*36*/].f_9 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(uParam0->f_31[i /*36*/].f_17, radius, 4, -1, 0);
					uParam0->f_31[i /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[i /*36*/].f_4, uParam0->f_31[i /*36*/].f_17, true, true, false, false, true);
				}
				else if (uParam0->f_31[i /*36*/].f_6 == 4)
				{
					uParam0->f_31[i /*36*/].f_9 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(uParam0->f_31[i /*36*/].f_17, radius, 2, -1, 0);
					uParam0->f_31[i /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[i /*36*/].f_4, uParam0->f_31[i /*36*/].f_17, true, true, false, false, true);
				}
				else if (uParam0->f_31[i /*36*/].f_6 == 5)
				{
					if (uParam0->f_31[i /*36*/].f_3 == 0)
						uParam0->f_31[i /*36*/].f_3 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_31[i /*36*/].f_4, uParam0->f_31[i /*36*/].f_17, 11);
					else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_31[i /*36*/].f_3))
						uParam0->f_31[i /*36*/].f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(uParam0->f_31[i /*36*/].f_3));
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[i /*36*/].f_1))
				{
					if (uParam0->f_31[i /*36*/].f_26 == 0)
						uParam0->f_31[i /*36*/] = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_LEGENDARY_ANIMAL_CLUE"), uParam0->f_31[i /*36*/].f_17);
				
					TEXT_LABEL_ASSIGN_STRING(&unk, "hzt_", 16);
					TEXT_LABEL_APPEND_INT(&unk, *uParam0, 16);
					TEXT_LABEL_APPEND_STRING(&unk, "_clue_", 16);
					TEXT_LABEL_APPEND_INT(&unk, uParam0->f_31[i /*36*/].f_27, 16);
					TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
					TEXT_LABEL_APPEND_INT(&unk, uParam0->f_31[i /*36*/].f_26, 16);
					uParam0->f_31[i /*36*/].f_29 = { unk };
					num = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_31[i /*36*/].f_20, uParam0->f_31[i /*36*/].f_17, true) / 4f;
					unk3 = { uParam0->f_31[i /*36*/].f_20 - uParam0->f_31[i /*36*/].f_17 };
					unk6 = { func_104(unk3, 1.5f) };
					unk9 = { func_104(unk3, num) };
					uParam0->f_630[0 /*8*/] = { uParam0->f_31[i /*36*/].f_17 };
					uParam0->f_630[1 /*8*/] = { uParam0->f_31[i /*36*/].f_17 + unk6 };
					uParam0->f_630[2 /*8*/] = { uParam0->f_630[1 /*8*/] + unk9 };
					uParam0->f_630[3 /*8*/] = { uParam0->f_630[2 /*8*/] + unk9 };
					uParam0->f_630[4 /*8*/] = { uParam0->f_630[3 /*8*/] + unk6 };
					func_105(&uParam0->f_630[1 /*8*/], 50, 10, false);
					func_105(&uParam0->f_630[2 /*8*/], 50, 10, false);
					func_105(&uParam0->f_630[3 /*8*/], 50, 10, false);
					func_105(&uParam0->f_630[4 /*8*/], 50, 10, false);
					TASK::_CREATE_WAYPOINT_PATH(func_106(&(uParam0->f_31[i /*36*/].f_29)), &(uParam0->f_630), 5, 0);
				}
			
				uParam0->f_31[i /*36*/].f_28 = uParam0->f_31[i /*36*/].f_28 + 1;
				return false;
			}
		}
	}

	func_40(199, true);

	if (!Global_40.f_9319[*uParam0 /*4*/])
	{
		MAP::_MAP_DISCOVER_REGION(func_15(*uParam0));
		Global_40.f_9319[*uParam0 /*4*/] = true;
	}

	return true;
}

void func_50(var uParam0) // Position - 0x1ED6 Hash - 0x85508A28 ^0x573D2B47
{
	float num;
	int num2;
	int i;
	BOOL flag;
	float num3;

	num = 9999f;
	num2 = 0;
	flag = PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID());

	for (i = 0; i < func_30(); i = i + 1)
	{
		num3 = 0f;
	
		if (uParam0->f_31[i /*36*/].f_13)
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[i /*36*/]))
				MAP::BLIP_ADD_MODIFIER(uParam0->f_31[i /*36*/], joaat("BLIP_MODIFIER_HIDDEN"));
		
			num3 = func_107(Global_35, uParam0->f_31[i /*36*/].f_17, true);
		
			if (num3 < num)
			{
				num = num3;
				num2 = i;
			}
		}
	}

	MAP::BLIP_REMOVE_MODIFIER(uParam0->f_31[num2 /*36*/], joaat("BLIP_MODIFIER_HIDDEN"));

	if (flag)
		MAP::BLIP_ADD_MODIFIER(uParam0->f_31[num2 /*36*/], joaat("BLIP_MODIFIER_EAGLE_EYE"));
	else
		MAP::BLIP_REMOVE_MODIFIER(uParam0->f_31[num2 /*36*/], joaat("BLIP_MODIFIER_EAGLE_EYE"));

	return;
}

void func_51(var uParam0) // Position - 0x1F9C Hash - 0x46A37087 ^0x6FADEB49
{
	int i;
	int duration;
	int num;
	int num2;
	int taskSequenceId;
	BOOL flag;
	BOOL isPedOnMount;
	BOOL flag2;
	float num3;
	int gameTimer;

	flag = false;
	isPedOnMount = PED::IS_PED_ON_MOUNT(Global_35);
	num2 = 5000;
	duration = 3000;
	num = 1500;
	PED::SET_PED_RESET_FLAG(Global_35, 211, true);

	for (i = 0; i < uParam0->f_618; i = i + 1)
	{
		if (!uParam0->f_31[i /*36*/].f_14)
		{
			flag2 = true;
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[i /*36*/].f_1))
			{
				num3 = func_108(Global_35, uParam0->f_31[i /*36*/].f_1, true);
			
				if (uParam0->f_31[i /*36*/].f_13 && num3 < 2500f && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_31[i /*36*/].f_1))
				{
					if (!flag)
						flag = true;
				
					if (!uParam0->f_31[i /*36*/].f_11)
					{
						if (uParam0->f_620)
						{
							PLAYER::_0x6ECFC621A168424C(uParam0->f_12, uParam0->f_31[i /*36*/].f_1, uParam0->f_31[i /*36*/].f_5, 0);
						}
						else
						{
							PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_31[i /*36*/].f_1, false);
							PLAYER::_0x6ECFC621A168424C(uParam0->f_31[i /*36*/].f_1, uParam0->f_31[i /*36*/].f_1, uParam0->f_31[i /*36*/].f_5, 0);
						}
					
						uParam0->f_31[i /*36*/].f_11 = 1;
					}
				
					if (num3 < 36f)
					{
						if (!uParam0->f_31[i /*36*/].f_12)
						{
							PED::_0xF9CBD46433E36713(Global_35, uParam0->f_31[i /*36*/].f_1, 0f, 0f, 0f, 7.5f, 6f, 15f, 20f, "TRACKING_ZONE_CLUE");
							PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 125);
							uParam0->f_31[i /*36*/].f_12 = 1;
						}
					}
				
					if (num3 < 6.25f && !func_109() && !isPedOnMount)
					{
						flag2 = false;
					
						if (!func_83(uParam0->f_31[i /*36*/].f_16))
						{
							uParam0->f_31[i /*36*/].f_16 = func_110("INSPECT_GENERIC", joaat("INPUT_CONTEXT_Y"), uParam0->f_31[i /*36*/].f_1, 2, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false, false);
							func_111(uParam0->f_31[i /*36*/].f_16, 2.5f, false);
							func_112(&(uParam0->f_31[i /*36*/].f_16), uParam0->f_31[i /*36*/].f_1);
						}
						else if (uParam0->f_31[i /*36*/].f_8 == 5)
						{
							HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 2.5f, 2, 1, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[i /*36*/].f_1), func_106(&(uParam0->f_31[i /*36*/].f_31)), 2);
						}
						else
						{
							HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_31[i /*36*/].f_1, 2.5f, 2, 1, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[i /*36*/].f_1), func_106(&(uParam0->f_31[i /*36*/].f_31)), 2);
						}
					
						if (func_113(uParam0->f_31[i /*36*/].f_16, true))
						{
							if (PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
								PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_DISABLED(PLAYER::PLAYER_ID(), true);
						
							if (uParam0->f_614 == 0)
								func_41(Global_35, "HUNTING_START", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
						
							func_114(uParam0->f_31[i /*36*/].f_16, false, true);
							uParam0->f_31[i /*36*/].f_24 = 0f;
							uParam0->f_31[i /*36*/].f_14 = 1;
							uParam0->f_31[i /*36*/].f_25 = MISC::GET_GAME_TIMER();
							PLAYER::_0xDC5E09D012D759C4(uParam0->f_12, uParam0->f_31[i /*36*/].f_1, uParam0->f_31[i /*36*/].f_5);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_LEAVE_CAMERA_CONTROL_ON, false);
							uParam0->f_626 = 1;
							PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", true, -1);
							TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, uParam0->f_31[i /*36*/].f_17, duration);
							TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						
							if (!PED::IS_PED_ON_MOUNT(Global_35))
								if (!PED::GET_PED_CROUCH_MOVEMENT(Global_35))
									PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
						
							TASK::TASK_PERFORM_SEQUENCE(Global_35, taskSequenceId);
							TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
							func_115(uParam0, uParam0->f_31[i /*36*/].f_27);
						}
					}
					else if (uParam0->f_31[i /*36*/].f_12 && num3 > 64f)
					{
						uParam0->f_31[i /*36*/].f_12 = 0;
					}
				
					if (flag2 && func_83(uParam0->f_31[i /*36*/].f_16))
						func_32(&(uParam0->f_31[i /*36*/].f_16), true, true);
				}
				else if (uParam0->f_31[i /*36*/].f_11)
				{
					if (uParam0->f_31[i /*36*/].f_12)
						uParam0->f_31[i /*36*/].f_12 = 0;
				
					if (uParam0->f_620)
					{
						PLAYER::_0xDC5E09D012D759C4(uParam0->f_12, uParam0->f_31[i /*36*/].f_1, uParam0->f_31[i /*36*/].f_5);
					}
					else
					{
						PLAYER::_0xDC5E09D012D759C4(uParam0->f_31[i /*36*/].f_1, uParam0->f_31[i /*36*/].f_1, uParam0->f_31[i /*36*/].f_5);
						PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_31[i /*36*/].f_1);
					}
				
					if (func_83(uParam0->f_31[i /*36*/].f_16))
						func_32(&(uParam0->f_31[i /*36*/].f_16), true, true);
				
					uParam0->f_31[i /*36*/].f_11 = 0;
				}
			}
		}
		else if (uParam0->f_31[i /*36*/].f_15)
		{
			if (uParam0->f_31[i /*36*/].f_8 == 5)
				HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 2.5f, 2, 1, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[i /*36*/].f_1), func_106(&(uParam0->f_31[i /*36*/].f_33)), 2);
			else
				HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_31[i /*36*/].f_1, 2.5f, 2, 1, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[i /*36*/].f_1), func_106(&(uParam0->f_31[i /*36*/].f_33)), 2);
		
			gameTimer = MISC::GET_GAME_TIMER();
		
			if (gameTimer - uParam0->f_31[i /*36*/].f_25 > num2 || gameTimer - uParam0->f_31[i /*36*/].f_25 > duration && !func_116(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE))
			{
				func_117(uParam0->f_614 - 1, *uParam0);
				func_32(&(uParam0->f_31[i /*36*/].f_16), true, true);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				PLAYER::_EAGLE_EYE_SET_FOCUS_ON_ASSOCIATED_CLUE_TRAIL(PLAYER::PLAYER_ID(), uParam0->f_12);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", false, -1);
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				uParam0->f_626 = 0;
				uParam0->f_31[i /*36*/].f_15 = 0;
			}
			else if (gameTimer - uParam0->f_31[i /*36*/].f_25 > num && uParam0->f_31[i /*36*/].f_13)
			{
				func_118(uParam0->f_12, func_106(&(uParam0->f_31[i /*36*/].f_29)), true, 0.762f, 1053609165, 0, 2f, true);
			
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_31[i /*36*/].f_10))
					func_119(uParam0->f_31[i /*36*/].f_10);
			
				uParam0->f_31[i /*36*/].f_13 = 0;
			}
		}
	}

	if (uParam0->f_614 > 0)
	{
		if (!uParam0->f_624)
		{
			if (!uParam0->f_625)
			{
				if (func_120(*uParam0))
					if (Global_1935496.f_31 == joaat("consumable_potent_predator_bait"))
						uParam0->f_625 = 1;
				else if (Global_1935496.f_31 == joaat("consumable_potent_herbivore_bait"))
					uParam0->f_625 = 1;
			}
			else if (func_107(Global_35, uParam0->f_12.f_10, true) > 400f && !CAM::IS_SPHERE_VISIBLE(uParam0->f_12.f_10, 1f))
			{
				uParam0->f_621 = 1;
				func_121(uParam0);
				uParam0->f_624 = 1;
			}
		}
	}

	return;
}

void func_52(var uParam0) // Position - 0x265D Hash - 0x271CC8B9 ^0x72DC5E80
{
	int taskSequenceId;
	float num;

	if (uParam0->f_12.f_2 != 1)
	{
		if (func_107(uParam0->f_12, uParam0->f_12.f_16, true) >= 2500f && func_108(Global_35, uParam0->f_12, true) > 400f && !PED::IS_PED_INJURED(uParam0->f_12) && !func_116(uParam0->f_12, SCRIPT_TASK_PERFORM_SEQUENCE))
		{
			func_122(uParam0);
			uParam0->f_12.f_2 = 1;
			num = 3f;
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		
			if (*uParam0 == 0)
			{
				TASK::TASK_STAND_STILL(0, 2000);
				num = 1f;
			}
		
			TASK::_TASK_FLEE_FROM_PED(0, Global_35, uParam0->f_12.f_16, 25f, -1, 1024, num, 0);
			TASK::TASK_WANDER_IN_AREA(0, uParam0->f_12.f_16, 15f, 1.5f, 3f, 1);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_12, taskSequenceId);
		}
	}
	else if (func_107(uParam0->f_12, uParam0->f_12.f_16, true) >= 100f)
	{
		uParam0->f_12.f_2 = 0;
	}

	return;
}

int func_53(var uParam0, var uParam1) // Position - 0x2752 Hash - 0x3AAD93D4 ^0x6348F3E3
{
	int unk;

	STATS::STAT_ID_GET_INT(&uParam0, &unk);
	return unk;
}

BOOL func_54(var uParam0) // Position - 0x2765 Hash - 0x26561433 ^0x8D630CC6
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		return true;

	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(uParam0->f_12) && !func_21(Global_35))
		return true;

	return false;
}

var func_55(BOOL bParam0, var uParam1, var uParam2) // Position - 0x279A Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_56(Hash hParam0, int iParam1) // Position - 0x27B1 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*hParam0 = *hParam0 - *hParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*hParam0 = *hParam0 | -2147483648;
	}
	else
	{
		*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*hParam0 = *hParam0 - *hParam0 & -2147483648;
	}

	return;
}

void func_57(Hash hParam0, int iParam1) // Position - 0x2837 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*hParam0 = *hParam0 - *hParam0 & 62914560;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_58(Hash hParam0, int iParam1) // Position - 0x2873 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_8(*hParam0);
	num2 = func_7(*hParam0);

	if (iParam1 < 1 || iParam1 > func_13(num, num2))
		return;

	*hParam0 = *hParam0 - *hParam0 & 4063232;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_59(Hash hParam0, int iParam1) // Position - 0x28C6 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*hParam0 = *hParam0 - *hParam0 & 126976;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_60(Hash hParam0, int iParam1) // Position - 0x2901 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*hParam0 = *hParam0 - *hParam0 & 4032;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_61(Hash hParam0, int iParam1) // Position - 0x293A Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*hParam0 = *hParam0 - *hParam0 & 63;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

void func_62(Hash hParam0, int iParam1) // Position - 0x2972 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_63() // Position - 0x2985 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_64() // Position - 0x29A4 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_65(int iParam0) // Position - 0x29B2 Hash - 0x91023C9F ^0x91023C9F
{
	return iParam0 > -1 && iParam0 < 153;
}

int func_66(int iParam0) // Position - 0x29C8 Hash - 0x1497AC6A ^0x1497AC6A
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

BOOL func_67(int iParam0) // Position - 0x2E1C Hash - 0xE4B93749 ^0xE4B93749
{
	return !func_123(iParam0, 1);
}

int func_68(int iParam0) // Position - 0x2E2C Hash - 0xA776614E ^0xA776614E
{
	if (!func_65(iParam0))
		return -1;

	if (iParam0 == 34 && func_124() == MICRO)
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

BOOL func_69(int iParam0) // Position - 0x3272 Hash - 0x14DDF3C9 ^0xAD14D790
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] & 32 != 0;

	return Global_1058888.f_40545[iParam0 /*11*/] & 32 != 0;
}

BOOL func_70(int iParam0) // Position - 0x32BB Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_125(iParam0))
		return false;

	return func_126(iParam0, 33554432);
}

Vector3 func_71(int iParam0) // Position - 0x32DC Hash - 0x19C525E7 ^0x19C525E7
{
	if (!func_65(iParam0))
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return 2947.0547f, 1320.1497f, 43.8203f;
	
		case 1:
			return 2947.64f, 1344.9012f, 43.899f;
	
		case 2:
			return 2939.0627f, 1287.116f, 43.6529f;
	
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
	
		case 4:
			return -2842.2114f, 137.3398f, 183.8268f;
	
		case 5:
			return -1005.9343f, -540.8262f, 97.9502f;
	
		case 7:
			return -784.49f, -1321.95f, 42.88f;
	
		case 9:
			return -814.4116f, -1367.2427f, 43.7509f;
	
		case 10:
			return -753.42194f, -1284.2399f, 43.200493f;
	
		case 12:
			return -813.6f, -1373.8f, 44.2f;
	
		case 13:
			return -868.33563f, -1366.2074f, 44.753105f;
	
		case 14:
			return -875.03f, -1327.09f, 42.97f;
	
		case 15:
			return -875.02f, -1326.71f, 42.97f;
	
		case 16:
			return -805.72f, -1330.5f, 42.67f;
	
		case 17:
			return -762.0716f, -1293.5487f, 42.8355f;
	
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
	
		case 20:
			return 1521.91f, 441.15f, 89.68f;
	
		case 21:
			return 1523.63f, 442.65f, 89.68f;
	
		case 22:
			return 2161.5f, -618.5f, 43f;
	
		case 23:
			return -1092.88f, -575.69f, 81.41f;
	
		case 24:
			return -1094.35f, -577.48f, 81.41f;
	
		case 25:
			return 1294.0844f, -1303.1022f, 76.0418f;
	
		case 26:
			return 1297.4229f, -1278.4122f, 75.65752f;
	
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
	
		case 28:
			return 1329.7546f, -1294.2175f, 76.0092f;
	
		case 29:
			return 1323.7344f, -1321.7745f, 77.8924f;
	
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
	
		case 31:
			return 1230.34f, -1298.5785f, 75.9027f;
	
		case 32:
			return 1332.5504f, -1298.679f, 75.35602f;
	
		case 34:
			return 2076.8354f, 1000.8294f, 111.4973f;
	
		case 35:
			return 1209.0531f, -193.1814f, 101.97852f;
	
		case 36:
			return 2644.1882f, -1292.5067f, 51.2496f;
	
		case 37:
			return 2657.4658f, -1180.9601f, 53.2785f;
	
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
	
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
	
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
	
		case 42:
			return 2825.6067f, -1318.2065f, 45.7557f;
	
		case 43:
			return 2718f, -1287f, 49.6f;
	
		case 44:
			return 2508.212f, -1449.6539f, 48.415234f;
	
		case 45:
			return 2748.8113f, -1398.2766f, 45.18309f;
	
		case 46:
			return 2747.8245f, -1396.3843f, 45.18309f;
	
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
	
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
	
		case 49:
			return 2817.6404f, -1325.0112f, 47.00512f;
	
		case 50:
			return 2836.9917f, -1305.805f, 45.6964f;
	
		case 51:
			return 2683.84f, -1399.6421f, 45.37881f;
	
		case 54:
			return 2734.1738f, -1119.7551f, 50.10792f;
	
		case 55:
			return 2832.0198f, -1225.5627f, 46.6422f;
	
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
	
		case 57:
			return 675.3091f, -1251.2332f, 43.0152f;
	
		case 58:
			return 1875.2003f, -1859.1821f, 41.8f;
	
		case 59:
			return 2366.0842f, 1347.1224f, 105.1305f;
	
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
	
		case 61:
			return -1790f, -388.27f, 159.33f;
	
		case 62:
			return -1818.99f, -370.94f, 162.3f;
	
		case 63:
			return -1819.8796f, -561.8194f, 157.23232f;
	
		case 64:
			return -1773.3142f, -393.91223f, 155.56471f;
	
		case 65:
			return -1763.7804f, -385.1118f, 156.7401f;
	
		case 67:
			return -2251.0344f, -1916.9109f, 115.9488f;
	
		case 68:
			return -307.96432f, 773.6048f, 117.70312f;
	
		case 69:
			return -306.3f, 815.08f, 117.98f;
	
		case 70:
			return 0f, 0f, 0f;
	
		case 72:
			return -338.8647f, 767.4334f, 115.56277f;
	
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
	
		case 74:
			return -324f, 803.72f, 116.88f;
	
		case 75:
			return -281.82f, 778.97f, 118.5f;
	
		case 76:
			return -369.44574f, 786.69354f, 115.9904f;
	
		case 77:
			return -178.0316f, 628.06213f, 113.08961f;
	
		case 78:
			return -175.03769f, 631.79987f, 113.08961f;
	
		case 79:
			return -325.53195f, 773.6285f, 117.50383f;
	
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
	
		case 82:
			return 3025.7864f, 562.7253f, 43.7167f;
	
		case 84:
			return 2967.2727f, 796.7416f, 52.5948f;
	
		case 85:
			return 2986.94f, 574.9f, 43.64f;
	
		case 86:
			return 2986.2236f, 569.94684f, 43.62284f;
	
		case 87:
			return -1302.9513f, 394.6608f, 94.3817f;
	
		case 88:
			return -1299.8906f, 401.36154f, 94.38248f;
	
		case 89:
			return -1300.8296f, 399.75986f, 94.38248f;
	
		case 90:
			return -5487.1973f, -2939.0383f, -1.3872f;
	
		case 91:
			return -5507.9927f, -2964.8442f, -1.6215f;
	
		case 92:
			return -5509.0186f, -2947.4353f, -2.8934f;
	
		case 93:
			return -5518.0713f, -2906.2173f, -2.7513f;
	
		case 94:
			return -5520.701f, -3044.4265f, -1.40419f;
	
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
	
		case 99:
			return -5227.3574f, -3470.0674f, -20.49293f;
	
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

float func_72(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x3B03 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

int func_73(int iParam0) // Position - 0x3B2B Hash - 0x23547602 ^0x23547602
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 4;
	
		case 3:
			return 8;
	
		case 4:
			return 64;
	
		case 5:
			return 16;
	
		case 6:
			return 32;
	
		case 7:
			return 128;
	
		case 8:
			return 256;
	
		case 9:
			return 512;
	
		case 10:
			return 1024;
	
		case 11:
			return 2048;
	
		case 12:
			return 4096;
	
		case 13:
			return 8192;
	
		case 14:
			return 16384;
	
		case 15:
			return 32768;
	}

	return 0;
}

int func_74(int iParam0, var uParam1) // Position - 0x3C22 Hash - 0x4931B454 ^0x88362C28
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("a_c_bear_01");
			return 1;
	
		case 1:
			*uParam1 = joaat("a_c_beaver_01");
			return 1;
	
		case 2:
			*uParam1 = joaat("a_c_bighornram_01");
			return 1;
	
		case 3:
			*uParam1 = joaat("a_c_buffalo_01");
			return 1;
	
		case 4:
			*uParam1 = joaat("a_c_boar_01");
			return 1;
	
		case 5:
			*uParam1 = joaat("a_c_buck_01");
			return 1;
	
		case 6:
			*uParam1 = joaat("a_c_buffalo_tatanka_01");
			return 1;
	
		case 7:
			*uParam1 = joaat("a_c_alligator_02");
			return 1;
	
		case 8:
			*uParam1 = joaat("a_c_cougar_01");
			return 1;
	
		case 9:
			*uParam1 = joaat("a_c_coyote_01");
			return 1;
	
		case 10:
			*uParam1 = joaat("a_c_elk_01");
			return 1;
	
		case 11:
			*uParam1 = joaat("a_c_fox_01");
			return 1;
	
		case 12:
			*uParam1 = joaat("a_c_moose_01");
			return 1;
	
		case 13:
			*uParam1 = joaat("a_c_panther_01");
			return 1;
	
		case 14:
			*uParam1 = joaat("a_c_pronghorn_01");
			return 1;
	
		case 15:
			*uParam1 = joaat("a_c_wolf");
			return 1;
	}

	return 0;
}

BOOL func_75(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x3D83 Hash - 0x49B3EF5C ^0x9505D01C
{
	var data;
	int size;
	int collectionId;
	int i;
	Hash outKey;
	var unk10;
	int num;
	int j;

	if (!func_127(hParam0, 0))
		return false;

	*uParam2 = 0;
	data = { func_128(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, hParam1, 0, -1, 0, 0) };
	collectionId = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&data, &size, 1);

	if (collectionId != -1)
	{
		unk10 = 15;
	
		for (i = 0; i < size; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey))
			{
				if (func_129(outKey, hParam1, &unk10, &num, true, false))
				{
					for (j = 0; j < num; j = j + 1)
					{
						if (hParam0 == unk10[j /*2*/])
							*uParam2 = *uParam2 + unk10[j /*2*/].f_1;
					}
				}
			}
		}
	
		ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(collectionId);
	}

	return true;
}

int func_76(Hash hParam0, int iParam1) // Position - 0x3E36 Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_127(hParam0, 0))
		return 0;

	unk = { func_130(false) };
	unk.f_4 = func_131(iParam1);
	guid = { func_132(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_133(false), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_77(Hash hParam0, int iParam1) // Position - 0x3E91 Hash - 0xD7B4F3C5 ^0x943C8C22
{
	var unk;
	int num;
	int num2;

	if (!func_127(hParam0, 0))
		return false;

	unk.f_4 = func_131(iParam1);

	if (!func_134(hParam0, unk.f_4))
		return false;

	num = func_135(hParam0, &unk, true, false);
	num2 = func_136(hParam0, false);

	if (num >= 0 && num2 > num)
		return false;

	return true;
}

BOOL func_78(Hash hParam0, int iParam1, int iParam2) // Position - 0x3EEF Hash - 0xC758F57F ^0x801747D0
{
	int num;
	var unk;
	var unk6;

	if (!func_77(hParam0, iParam1))
		return false;

	if (iParam1 == 1)
	{
		if (func_137(hParam0) && func_138(hParam0))
		{
			num = 0;
		
			if (func_75(hParam0, 369710026, &num))
				iParam2 = num;
		}
	}

	unk.f_4 = func_131(iParam1);
	unk = { func_130(false) };

	if (!func_139(hParam0, &unk6, &unk, iParam2, 752097756, true))
		return false;

	return true;
}

void func_79(var uParam0, int iParam1) // Position - 0x3F66 Hash - 0xF55E891F ^0xF55E891F
{
	func_140(uParam0, iParam1);
	return;
}

int func_80(Hash hParam0, int iParam1, int iParam2) // Position - 0x3F76 Hash - 0xB04D1B6E ^0xB04D1B6E
{
	switch (hParam0)
	{
		case joaat("at_duck_pekin"):
			if (iParam2 == 1)
				return joaat("journal_animal_peking_duck_ar");
			else
				return joaat("journal_animal_peking_duck_jn");
			break;
	
		case joaat("at_turkey"):
			if (iParam2 == 1)
				return joaat("journal_animal_turkey_ar");
			else
				return joaat("journal_animal_turkey_jn");
			break;
	
		case joaat("at_cormorant_neo"):
			if (iParam2 == 1)
				return joaat("journal_animal_neotropic_cormorant_ar");
			else
				return joaat("journal_animal_neotropic_cormorant_jn");
			break;
	
		case joaat("at_sparrow_gold"):
			if (iParam2 == 1)
				return joaat("journal_animal_golden_crowned_sparrow_ar");
			else
				return joaat("journal_animal_golden_crowned_sparrow_jn");
			break;
	
		case joaat("at_chipmunk"):
			if (iParam2 == 1)
				return joaat("journal_animal_chipmunk_ar");
			else
				return joaat("journal_animal_chipmunk_jn");
			break;
	
		case joaat("at_pheasant_chinese"):
			if (iParam2 == 1)
				return joaat("journal_animal_pheasant_ar");
			else
				return joaat("journal_animal_pheasant_jn");
			break;
	
		case joaat("at_moose_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_moose_ar");
			else
				return joaat("journal_animal_legendary_moose_jn");
			break;
	
		case joaat("at_dog_mutt"):
			if (iParam2 == 1)
				return joaat("journal_animal_mutt_ar");
			else
				return joaat("journal_animal_mutt_jn");
			break;
	
		case joaat("at_crane"):
			if (iParam2 == 1)
				return joaat("journal_animal_whooping_crane_ar");
			else
				return joaat("journal_animal_whooping_crane_jn");
			break;
	
		case joaat("at_vulture_east"):
			if (iParam2 == 1)
				return joaat("journal_animal_eastern_turkey_vulture_ar");
			else
				return joaat("journal_animal_eastern_turkey_vulture_jn");
			break;
	
		case joaat("at_buck_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_buck_ar");
			else
				return joaat("journal_animal_legendary_buck_jn");
			break;
	
		case joaat("at_squirrel_red"):
			if (iParam2 == 1)
				return joaat("journal_animal_red_squirrel_ar");
			else
				return joaat("journal_animal_red_squirrel_jn");
			break;
	
		case joaat("at_pronghorn_baja"):
			if (iParam2 == 1)
				return joaat("journal_animal_baja_californian_pronghorn_ar");
			else
				return joaat("journal_animal_baja_californian_pronghorn_jn");
			break;
	
		case joaat("at_californiacondor"):
			if (iParam2 == 1)
				return joaat("journal_animal_californian_condor_ar");
			else
				return joaat("journal_animal_californian_condor_jn");
			break;
	
		case joaat("at_turkey_rio"):
			if (iParam2 == 1)
				return joaat("journal_animal_rio_grande_turkey_ar");
			else
				return joaat("journal_animal_rio_grande_turkey_jn");
			break;
	
		case joaat("at_eagle_golden"):
			if (iParam2 == 1)
				return joaat("journal_animal_golden_eagle_ar");
			else
				return joaat("journal_animal_golden_eagle_jn");
			break;
	
		case joaat("at_dog_border"):
			if (iParam2 == 1)
				return joaat("journal_animal_collie_ar");
			else
				return joaat("journal_animal_collie_jn");
			break;
	
		case joaat("at_raven"):
			if (iParam2 == 1)
				return joaat("journal_animal_raven_ar");
			else
				return joaat("journal_animal_raven_jn");
			break;
	
		case joaat("at_pronghorn_sono"):
			if (iParam2 == 1)
				return joaat("journal_animal_sonoran_pronghorn_ar");
			else
				return joaat("journal_animal_sonoran_pronghorn_jn");
			break;
	
		case joaat("at_buffalo_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_white_buffalo_ar");
			else
				return joaat("journal_animal_legendary_white_buffalo_jn");
			break;
	
		case joaat("at_rabbit"):
			if (iParam2 == 1)
				return joaat("journal_animal_rabbit_ar");
			else
				return joaat("journal_animal_rabbit_jn");
			break;
	
		case joaat("at_gator"):
			if (iParam2 == 1)
				return joaat("journal_animal_aligator_ar");
			else
				return joaat("journal_animal_aligator_jn");
			break;
	
		case joaat("at_rooster_java"):
		case joaat("at_rooster"):
		case joaat("at_rooster_leghorn"):
			if (iParam2 == 1)
				return joaat("journal_animal_rooster_ar");
			else
				return joaat("journal_animal_rooster_jn");
			break;
	
		case joaat("at_loon"):
			if (iParam2 == 1)
				return joaat("journal_animal_common_loon_ar");
			else
				return joaat("journal_animal_common_loon_jn");
			break;
	
		case joaat("at_sheep"):
			if (iParam2 == 1)
				return joaat("journal_animal_sheep_ar");
			else
				return joaat("journal_animal_sheep_jn");
			break;
	
		case joaat("at_snake_cotton"):
			if (iParam2 == 1)
				return joaat("journal_animal_cottonmouth_snake_ar");
			else
				return joaat("journal_animal_cottonmouth_snake_jn");
			break;
	
		case joaat("at_duck"):
			if (iParam2 == 1)
				return joaat("journal_animal_mallard_duck_ar");
			else
				return joaat("journal_animal_mallard_duck_jn");
			break;
	
		case joaat("at_bull_devon"):
			if (iParam2 == 1)
				return joaat("journal_animal_devon_bull_ar");
			else
				return joaat("journal_animal_devon_bull_jn");
			break;
	
		case joaat("at_dog_bluetick"):
			if (iParam2 == 1)
				return joaat("journal_animal_coonhound_ar");
			else
				return joaat("journal_animal_coonhound_jn");
			break;
	
		case joaat("at_pheasant"):
			if (iParam2 == 1)
				return joaat("journal_animal_ring_necked_pheasant_ar");
			else
				return joaat("journal_animal_ring_necked_pheasant_jn");
			break;
	
		case joaat("at_cedarwaxwing"):
			if (iParam2 == 1)
				return joaat("journal_animal_cedar_waxwing_ar");
			else
				return joaat("journal_animal_cedar_waxwing_jn");
			break;
	
		case joaat("at_heron_tri"):
			if (iParam2 == 1)
				return joaat("journal_animal_blue_heron_ar");
			else
				return joaat("journal_animal_blue_heron_jn");
			break;
	
		case joaat("at_cow"):
			if (iParam2 == 1)
				return joaat("journal_animal_cracker_cow_ar");
			else
				return joaat("journal_animal_cracker_cow_jn");
			break;
	
		case joaat("at_egret_snowy"):
			if (iParam2 == 1)
				return joaat("journal_animal_snowy_egret_ar");
			else
				return joaat("journal_animal_snowy_egret_jn");
			break;
	
		case joaat("at_ox_devon"):
			if (iParam2 == 1)
				return joaat("journal_animal_devon_oxen_ar");
			else
				return joaat("journal_animal_devon_oxen_jn");
			break;
	
		case joaat("at_rosespoonbill"):
			if (iParam2 == 1)
				return joaat("journal_animal_spoonbill_ar");
			else
				return joaat("journal_animal_spoonbill_jn");
			break;
	
		case joaat("at_crane_sand"):
			if (iParam2 == 1)
				return joaat("journal_animal_sandhill_crane_ar");
			else
				return joaat("journal_animal_sandhill_crane_ar");
			break;
	
		case joaat("at_dog_catahoula"):
			if (iParam2 == 1)
				return joaat("journal_animal_catahoula_cur_ar");
			else
				return joaat("journal_animal_catahoula_cur_jn");
			break;
	
		case joaat("at_sparrow_euro"):
			if (iParam2 == 1)
				return joaat("journal_animal_eurasian_tree_sparrow_ar");
			else
				return joaat("journal_animal_eurasian_tree_sparrow_jn");
			break;
	
		case joaat("at_cougar"):
			if (iParam2 == 1)
				return joaat("journal_animal_cougar_ar");
			else
				return joaat("journal_animal_cougar_jn");
			break;
	
		case joaat("at_squirrel_black"):
			if (iParam2 == 1)
				return joaat("journal_animal_black_squirrel_ar");
			else
				return joaat("journal_animal_black_squirrel_jn");
			break;
	
		case joaat("at_buck"):
			if (iParam2 == 1)
				return joaat("journal_animal_whitetail_buck_ar");
			else
				return joaat("journal_animal_whitetail_buck_jn");
			break;
	
		case joaat("at_songbird_scarlet"):
			if (iParam2 == 1)
				return joaat("journal_animal_scarlet_tanager_songbird_ar");
			else
				return joaat("journal_animal_scarlet_tanager_songbird_jn");
			break;
	
		case joaat("at_fox"):
			if (iParam2 == 1)
				return joaat("journal_animal_fox_ar");
			else
				return joaat("journal_animal_fox_jn");
			break;
	
		case joaat("at_owl_north"):
		case joaat("at_owl"):
			if (iParam2 == 1)
				return joaat("journal_animal_horned_owl_ar");
			else
				return joaat("journal_animal_horned_owl_jn");
			break;
	
		case joaat("at_skunk"):
			if (iParam2 == 1)
				return joaat("journal_animal_skunk_ar");
			else
				return joaat("journal_animal_skunk_jn");
			break;
	
		case joaat("at_cougar_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_cougar_ar");
			else
				return joaat("journal_animal_legendary_cougar_jn");
			break;
	
		case joaat("at_snake_black"):
			if (iParam2 == 1)
				return joaat("journal_animal_black_tail_rattlesnake_ar");
			else
				return joaat("journal_animal_blacktailed_rattle_snake_jn");
			break;
	
		case joaat("at_chicken_prairie"):
			if (iParam2 == 1)
				return joaat("journal_animal_prarie_chicken_ar");
			else
				return joaat("journal_animal_prarie_chicken_jn");
			break;
	
		case joaat("at_pronghorn_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_pronghorn_ar");
			else
				return joaat("journal_animal_legendary_pronghorn_jn");
			break;
	
		case joaat("at_possum"):
			if (iParam2 == 1)
				return joaat("journal_animal_possum_ar");
			else
				return joaat("journal_animal_possum_jn");
			break;
	
		case joaat("at_ram_desert"):
			if (iParam2 == 1)
				return joaat("journal_animal_desert_bighorn_ram_ar");
			else
				return joaat("journal_animal_desert_bighorn_ram_jn");
			break;
	
		case joaat("at_fox_silver"):
			if (iParam2 == 1)
				return joaat("journal_animal_silver_fox_ar");
			else
				return joaat("journal_animal_silver_fox_jn");
			break;
	
		case joaat("at_pig_china"):
			if (iParam2 == 1)
				return joaat("journal_animal_china_pig_ar");
			else
				return joaat("journal_animal_china_pig_jn");
			break;
	
		case joaat("at_ram_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_long_horn_ar");
			else
				return joaat("journal_animal_legendary_long_horn_jn");
			break;
	
		case joaat("at_snake_ferdelance"):
		case joaat("at_snake_copper_north"):
		case joaat("at_snake_copper_south"):
			if (iParam2 == 1)
				return joaat("journal_animal_ferdelance_snake_ar");
			else
				return joaat("journal_animal_ferdelance_snake_jn");
			break;
	
		case joaat("at_quail"):
			if (iParam2 == 1)
				return joaat("journal_animal_quail_ar");
			else
				return joaat("journal_animal_quail_jn");
			break;
	
		case joaat("at_rat"):
			if (iParam2 == 1)
				return joaat("journal_animal_brown_rat_ar");
			else
				return joaat("journal_animal_brown_rat_jn");
			break;
	
		case joaat("at_parrot_scarlet"):
			if (iParam2 == 1)
				return joaat("journal_animal_scarlet_macaw_ar");
			else
				return joaat("journal_animal_scarlet_macaw_jn");
			break;
	
		case joaat("at_chicken_java"):
			if (iParam2 == 1)
				return joaat("journal_animal_java_chicken_ar");
			else
				return joaat("journal_animal_java_chicken_jn");
			break;
	
		case joaat("at_dog_bloodhound"):
			if (iParam2 == 1)
				return joaat("journal_animal_bloodhound_ar");
			else
				return joaat("journal_animal_bloodhound_jn");
			break;
	
		case joaat("at_ram_sierra"):
			if (iParam2 == 1)
				return joaat("journal_animal_sierra_nevada_bighorn_ar");
			else
				return joaat("journal_animal_sierra_nevada_bighorn_jn");
			break;
	
		case joaat("at_squirrel"):
			if (iParam2 == 1)
				return joaat("journal_animal_squirrel_ar");
			else
				return joaat("journal_animal_squirrel_jn");
			break;
	
		case joaat("at_bear_black"):
			if (iParam2 == 1)
				return joaat("journal_animal_black_bear_ar");
			else
				return joaat("journal_animal_black_bear_jn");
			break;
	
		case joaat("at_coyote"):
			if (iParam2 == 1)
				return joaat("journal_animal_coyote_ar");
			else
				return joaat("journal_animal_coyote_jn");
			break;
	
		case joaat("at_iguana_desert"):
			if (iParam2 == 1)
				return joaat("journal_animal_desert_iguana_ar");
			else
				return joaat("journal_animal_desert_iguana_jn");
			break;
	
		case joaat("at_snake_boa"):
		case joaat("at_snake_boa_rainbow"):
		case joaat("at_snake_boa_sun"):
			if (iParam2 == 1)
				return joaat("journal_animal_red_boa_ar");
			else
				return joaat("journal_animal_red_boa_jn");
			break;
	
		case joaat("at_deer"):
			if (iParam2 == 1)
				return joaat("journal_animal_deer_ar");
			else
				return joaat("journal_animal_deer_jn");
			break;
	
		case joaat("at_fox_gray"):
			if (iParam2 == 1)
				return joaat("journal_animal_grey_fox_ar");
			else
				return joaat("journal_animal_grey_fox_jn");
			break;
	
		case joaat("at_pelican"):
			if (iParam2 == 1)
				return joaat("journal_animal_pelican_ar");
			else
				return joaat("journal_animal_pelican_jn");
			break;
	
		case joaat("at_wolf"):
			if (iParam2 == 1)
				return joaat("journal_animal_wolf_ar");
			else
				return joaat("journal_animal_wolf_jn");
			break;
	
		case joaat("at_javelina"):
			if (iParam2 == 1)
				return joaat("journal_animal_peccary_ar");
			else
				return joaat("journal_animal_peccary_jn");
			break;
	
		case joaat("at_woodpecker_pileated"):
			if (iParam2 == 1)
				return joaat("journal_animal_wood_pecker_02_ar");
			else
				return joaat("journal_animal_wood_pecker_02_jn");
			break;
	
		case joaat("at_wolf_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_wolf_ar");
			else
				return joaat("journal_animal_legendary_wolf_jn");
			break;
	
		case joaat("at_bull_hereford"):
			if (iParam2 == 1)
				return joaat("journal_animal_hereford_bull_ar");
			else
				return joaat("journal_animal_hereford_bull_jn");
			break;
	
		case joaat("at_rat_black"):
			if (iParam2 == 1)
				return joaat("journal_animal_rat_ar");
			else
				return joaat("journal_animal_rat_jn");
			break;
	
		case joaat("at_ram_rocky"):
			if (iParam2 == 1)
				return joaat("journal_animal_rocky_mountain_bighorn_ar");
			else
				return joaat("journal_animal_rocky_mountain_bighorn_jn");
			break;
	
		case joaat("at_horse"):
			if (iParam1 == joaat("a_c_horse_americanpaint_overo") || iParam1 == joaat("a_c_horse_americanpaint_splashedwhite") || iParam1 == joaat("a_c_horse_americanpaint_tobiano") || iParam1 == joaat("a_c_horse_americanpaint_greyovero"))
				if (iParam2 == 1)
					return joaat("journal_animal_american_paint_ar");
				else
					return joaat("journal_animal_american_paint_jn");
			else if (iParam1 == joaat("a_c_horse_americanstandardbred_black") || iParam1 == joaat("a_c_horse_americanstandardbred_buckskin") || iParam1 == joaat("a_c_horse_americanstandardbred_palominodapple") || iParam1 == joaat("a_c_horse_americanstandardbred_silvertailbuckskin"))
				if (iParam2 == 1)
					return joaat("journal_animal_american_standardbred_ar");
				else
					return joaat("journal_animal_american_standardbred_jn");
			else if (iParam1 == joaat("a_c_horse_andalusian_darkbay") || iParam1 == joaat("a_c_horse_andalusian_perlino") || iParam1 == joaat("a_c_horse_andalusian_rosegray"))
				if (iParam2 == 1)
					return joaat("journal_animal_andalusian_ar");
				else
					return joaat("journal_animal_andalusian_jn");
			else if (iParam1 == joaat("a_c_horse_appaloosa_blanket") || iParam1 == joaat("a_c_horse_appaloosa_leopard") || iParam1 == joaat("a_c_horse_appaloosa_leopardblanket") || iParam1 == joaat("a_c_horse_appaloosa_brownleopard") || iParam1 == joaat("a_c_horse_appaloosa_fewspotted_pc"))
				if (iParam2 == 1)
					return joaat("journal_animal_appaloosa_ar");
				else
					return joaat("journal_animal_appaloosa_jn");
			else if (iParam1 == joaat("a_c_horse_arabian_black") || iParam1 == joaat("a_c_horse_arabian_redchestnut") || iParam1 == joaat("a_c_horse_arabian_rosegreybay") || iParam1 == joaat("a_c_horse_arabian_warpedbrindle_pc") || iParam1 == joaat("a_c_horse_arabian_white"))
				if (iParam2 == 1)
					return joaat("journal_animal_arabian_ar");
				else
					return joaat("journal_animal_arabian_jn");
			else if (iParam1 == joaat("a_c_horse_ardennes_bayroan") || iParam1 == joaat("a_c_horse_ardennes_irongreyroan") || iParam1 == joaat("a_c_horse_ardennes_strawberryroan"))
				if (iParam2 == 1)
					return joaat("journal_animal_ardennes_ar");
				else
					return joaat("journal_animal_ardennes_jn");
			else if (iParam1 == joaat("a_c_horse_belgian_blondchestnut") || iParam1 == joaat("a_c_horse_belgian_mealychestnut"))
				if (iParam2 == 1)
					return joaat("journal_animal_belgian_ar");
				else
					return joaat("journal_animal_belgian_jn");
			else if (iParam1 == joaat("a_c_horse_dutchwarmblood_chocolateroan") || iParam1 == joaat("a_c_horse_dutchwarmblood_sealbrown") || iParam1 == joaat("a_c_horse_dutchwarmblood_sootybuckskin"))
				if (iParam2 == 1)
					return joaat("journal_animal_dutch_warmblood_ar");
				else
					return joaat("journal_animal_dutch_warmblood_jn");
			else if (iParam1 == joaat("a_c_horse_hungarianhalfbred_darkdapplegrey") || iParam1 == joaat("a_c_horse_hungarianhalfbred_flaxenchestnut") || iParam1 == joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"))
				if (iParam2 == 1)
					return joaat("journal_animal_hungarian_halfbred_ar");
				else
					return joaat("journal_animal_hungarian_halfbred_jn");
			else if (iParam1 == joaat("a_c_horse_kentuckysaddle_black") || iParam1 == joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc") || iParam1 == joaat("a_c_horse_kentuckysaddle_chestnutpinto") || iParam1 == joaat("a_c_horse_kentuckysaddle_grey") || iParam1 == joaat("a_c_horse_kentuckysaddle_silverbay"))
				if (iParam2 == 1)
					return joaat("journal_animal_kentucky_saddler_ar");
				else
					return joaat("journal_animal_kentucky_saddler_jn");
			else if (iParam1 == joaat("a_c_horse_missourifoxtrotter_amberchampagne") || iParam1 == joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"))
				if (iParam2 == 1)
					return joaat("journal_animal_missouri_foxtrotter_ar");
				else
					return joaat("journal_animal_missouri_foxtrotter_jn");
			else if (iParam1 == joaat("a_c_horse_morgan_bay") || iParam1 == joaat("a_c_horse_morgan_bayroan") || iParam1 == joaat("a_c_horse_morgan_liverchestnut_pc") || iParam1 == joaat("a_c_horse_morgan_flaxenchestnut") || iParam1 == joaat("a_c_horse_morgan_palomino"))
				if (iParam2 == 1)
					return joaat("journal_animal_morgan_ar");
				else
					return joaat("journal_animal_morgan_jn");
			else if (iParam1 == joaat("a_c_horse_mustang_grullodun") || iParam1 == joaat("a_c_horse_mustang_tigerstripedbay") || iParam1 == joaat("a_c_horse_mustang_wildbay"))
				if (iParam2 == 1)
					return joaat("journal_animal_mustang_ar");
				else
					return joaat("journal_animal_mustang_jn");
			else if (iParam1 == joaat("a_c_horse_nokota_blueroan") || iParam1 == joaat("a_c_horse_nokota_reversedappleroan") || iParam1 == joaat("a_c_horse_nokota_whiteroan"))
				if (iParam2 == 1)
					return joaat("journal_animal_nokota_ar");
				else
					return joaat("journal_animal_nokota_jn");
			else if (iParam1 == joaat("a_c_horse_shire_darkbay") || iParam1 == joaat("a_c_horse_shire_lightgrey") || iParam1 == joaat("a_c_horse_shire_ravenblack"))
				if (iParam2 == 1)
					return joaat("journal_animal_shire_ar");
				else
					return joaat("journal_animal_shire_jn");
			else if (iParam1 == joaat("a_c_horse_suffolkpunch_redchestnut") || iParam1 == joaat("a_c_horse_suffolkpunch_sorrel"))
				if (iParam2 == 1)
					return joaat("journal_animal_suffolk_punch_ar");
				else
					return joaat("journal_animal_suffolk_punch_jn");
			else if (iParam1 == joaat("a_c_horse_tennesseewalker_blackrabicano") || iParam1 == joaat("a_c_horse_tennesseewalker_chestnut") || iParam1 == joaat("a_c_horse_tennesseewalker_dapplebay") || iParam1 == joaat("a_c_horse_tennesseewalker_goldpalomino_pc") || iParam1 == joaat("a_c_horse_tennesseewalker_mahoganybay") || iParam1 == joaat("a_c_horse_tennesseewalker_redroan") || iParam1 == joaat("a_c_horse_tennesseewalker_flaxenroan"))
				if (iParam2 == 1)
					return joaat("journal_animal_tennessee_walker_ar");
				else
					return joaat("journal_animal_tennessee_walker_jn");
			else if (iParam1 == joaat("a_c_horse_thoroughbred_blackchestnut") || iParam1 == joaat("a_c_horse_thoroughbred_bloodbay") || iParam1 == joaat("a_c_horse_thoroughbred_brindle") || iParam1 == joaat("a_c_horse_thoroughbred_dapplegrey") || iParam1 == joaat("a_c_horse_thoroughbred_reversedappleblack"))
				if (iParam2 == 1)
					return joaat("journal_animal_thoroughbred_ar");
				else
					return joaat("journal_animal_thoroughbred_jn");
			else if (iParam1 == joaat("a_c_horse_turkoman_darkbay") || iParam1 == joaat("a_c_horse_turkoman_gold") || iParam1 == joaat("a_c_horse_turkoman_silver"))
				if (iParam2 == 1)
					return joaat("journal_animal_turkoman_ar");
				else
					return joaat("journal_animal_turkoman_jn");
			break;
	
		case joaat("at_sparrow"):
			if (iParam2 == 1)
				return joaat("journal_animal_sparrow_ar");
			else
				return joaat("journal_animal_sparrow_jn");
			break;
	
		case joaat("at_turtle_sea"):
			if (iParam2 == 1)
				return joaat("journal_animal_sea_turtle_ar");
			else
				return joaat("journal_animal_sea_turtle_jn");
			break;
	
		case joaat("at_elk"):
			if (iParam2 == 1)
				return joaat("journal_animal_elk_f_ar");
			else
				return joaat("journal_animal_elk_f_jn");
			break;
	
		case joaat("at_armadillo"):
			if (iParam2 == 1)
				return joaat("journal_animal_armadillo_ar");
			else
				return joaat("journal_animal_armadillo_jn");
			break;
	
		case joaat("at_pronghorn"):
			if (iParam2 == 1)
				return joaat("journal_animal_pronghorn_ar");
			else
				return joaat("journal_animal_pronghorn_jn");
			break;
	
		case joaat("at_hawk_rough"):
			if (iParam2 == 1)
				return joaat("journal_animal_rough_legged_hawk_ar");
			else
				return joaat("journal_animal_rough_legged_hawk_jn");
			break;
	
		case joaat("at_panther"):
			if (iParam2 == 1)
				return joaat("journal_animal_florida_panther_ar");
			else
				return joaat("journal_animal_florida_panther_jn");
			break;
	
		case joaat("at_fox_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_fox_ar");
			else
				return joaat("journal_animal_legendary_fox_jn");
			break;
	
		case joaat("at_moose_bull"):
			if (iParam2 == 1)
				return joaat("journal_animal_moose_ar");
			else
				return joaat("journal_animal_moose_jn");
			break;
	
		case joaat("at_snake_diamond"):
			if (iParam2 == 1)
				return joaat("journal_animal_rattlesnake_ar");
			else
				return joaat("journal_animal_rattlesnake_jn");
			break;
	
		case joaat("at_pig"):
			if (iParam2 == 1)
				return joaat("journal_animal_pig_ar");
			else
				return joaat("journal_animal_pig_jn");
			break;
	
		case joaat("at_dog_foxhound"):
			if (iParam2 == 1)
				return joaat("journal_animal_fox_hound_ar");
			else
				return joaat("journal_animal_fox_hound_jn");
			break;
	
		case joaat("at_cat"):
			if (iParam2 == 1)
				return joaat("journal_animal_cat_ar");
			else
				return joaat("journal_animal_cat_jn");
			break;
	
		case joaat("at_turtle_snap"):
			if (iParam2 == 1)
				return joaat("journal_animal_snapping_turtle_ar");
			else
				return joaat("journal_animal_snapping_turtle_jn");
			break;
	
		case joaat("at_wolf_timber"):
			if (iParam2 == 1)
				return joaat("journal_animal_timber_wolf_ar");
			else
				return joaat("journal_animal_timber_wolf_jn");
			break;
	
		case joaat("at_goat"):
			if (iParam2 == 1)
				return joaat("journal_animal_alpine_goat_ar");
			else
				return joaat("journal_animal_alpine_goat_jn");
			break;
	
		case joaat("at_songbird"):
			if (iParam2 == 1)
				return joaat("journal_animal_songbird_ar");
			else
				return joaat("journal_animal_songbird_jn");
			break;
	
		case joaat("at_pelican_brown"):
			if (iParam2 == 1)
				return joaat("journal_animal_brown_pelican_ar");
			else
				return joaat("journal_animal_brown_pelican_jn");
			break;
	
		case joaat("at_donkey"):
			if (iParam2 == 1)
				return joaat("journal_animal_donkey_ar");
			else
				return joaat("journal_animal_donkey_jn");
			break;
	
		case joaat("at_hawk"):
			if (iParam2 == 1)
				return joaat("journal_animal_ferruginious_hawk_ar");
			else
				return joaat("journal_animal_ferruginious_hawk_jn");
			break;
	
		case joaat("at_oriole"):
			if (iParam2 == 1)
				return joaat("journal_animal_oriole_ar");
			else
				return joaat("journal_animal_oriole_jn");
			break;
	
		case joaat("at_woodpecker_red"):
			if (iParam2 == 1)
				return joaat("journal_animal_wood_pecker_ar");
			else
				return joaat("journal_animal_wood_pecker_jn");
			break;
	
		case joaat("at_badger"):
			if (iParam2 == 1)
				return joaat("journal_animal_badger_ar");
			else
				return joaat("journal_animal_badger_jn");
			break;
	
		case joaat("at_crow"):
			if (iParam2 == 1)
				return joaat("journal_animal_american_crow_ar");
			else
				return joaat("journal_animal_american_crow_jn");
			break;
	
		case joaat("at_parrot_green"):
			if (iParam2 == 1)
				return joaat("journal_animal_great_green_macaw_ar");
			else
				return joaat("journal_animal_great_green_macaw_jn");
			break;
	
		case joaat("at_beaver_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_beaver_ar");
			else
				return joaat("journal_animal_legendary_beaver_jn");
			break;
	
		case joaat("at_boar"):
			if (iParam2 == 1)
				return joaat("journal_animal_wild_boar_ar");
			else
				return joaat("journal_animal_wild_boar_jn");
			break;
	
		case joaat("at_elk_bull"):
			if (iParam2 == 1)
				return joaat("journal_animal_elk_ar");
			else
				return joaat("journal_animal_elk_jn");
			break;
	
		case joaat("at_toad"):
		case joaat("at_toad_desert"):
			if (iParam2 == 1)
				return joaat("journal_animal_toad_ar");
			else
				return joaat("journal_animal_toad_jn");
			break;
	
		case joaat("at_goose"):
			if (iParam2 == 1)
				return joaat("journal_animal_canada_goose_ar");
			else
				return joaat("journal_animal_canada_goose_jn");
			break;
	
		case joaat("at_mule"):
			if (iParam2 == 1)
				return joaat("journal_animal_mule_ar");
			else
				return joaat("journal_animal_mule_jn");
			break;
	
		case joaat("at_seagull_ring"):
			if (iParam2 == 1)
				return joaat("journal_animal_herring_gull_ar");
			else
				return joaat("journal_animal_herring_gull_jn");
			break;
	
		case joaat("at_heron"):
			if (iParam2 == 1)
				return joaat("journal_animal_blue_heron_ar");
			else
				return joaat("journal_animal_blue_heron_jn");
			break;
	
		case joaat("at_bat"):
			if (iParam2 == 1)
				return joaat("journal_animal_bat_ar");
			else
				return joaat("journal_animal_bat_jn");
			break;
	
		case joaat("at_dog_poodle"):
			if (iParam2 == 1)
				return joaat("journal_animal_poodle_ar");
			else
				return joaat("journal_animal_poodle_jn");
			break;
	
		case joaat("at_iguana"):
			if (iParam2 == 1)
				return joaat("journal_animal_iguana_ar");
			else
				return joaat("journal_animal_iguana_jn");
			break;
	
		case joaat("at_vulture"):
			if (iParam2 == 1)
				return joaat("journal_animal_western_vulture_ar");
			else
				return joaat("journal_animal_western_vulture_jn");
			break;
	
		case joaat("at_redfootedbooby"):
			if (iParam2 == 1)
				return joaat("journal_animal_red_footed_booby_ar");
			else
				return joaat("journal_animal_red_footed_booby_jn");
			break;
	
		case joaat("at_pigeon_band"):
			if (iParam2 == 1)
				return joaat("journal_animal_band_tailed_pigeon_ar");
			else
				return joaat("journal_animal_band_tailed_pigeon_jn");
			break;
	
		case joaat("at_raccoon"):
			if (iParam2 == 1)
				return joaat("journal_animal_raccoon_ar");
			else
				return joaat("journal_animal_raccoon_jn");
			break;
	
		case joaat("at_dog_australian"):
			if (iParam2 == 1)
				return joaat("journal_animal_australian_shepherd_ar");
			else
				return joaat("journal_animal_australian_shepherd_jn");
			break;
	
		case joaat("at_boar_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_boar_ar");
			else
				return joaat("journal_animal_legendary_boar_jn");
			break;
	
		case joaat("at_bull_angus"):
			if (iParam2 == 1)
				return joaat("journal_animal_bull_ar");
			else
				return joaat("journal_animal_bull_jn");
			break;
	
		case joaat("at_gator_bull"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_bullgator_ar");
			else
				return joaat("journal_animal_legendary_bullgator_jn");
			break;
	
		case joaat("at_muskrat"):
			if (iParam2 == 1)
				return joaat("journal_animal_muskrat_ar");
			else
				return joaat("journal_animal_muskrat_jn");
			break;
	
		case joaat("at_cardinal"):
			if (iParam2 == 1)
				return joaat("journal_animal_cardinal_ar");
			else
				return joaat("journal_animal_cardinal_jn");
			break;
	
		case joaat("at_seagull_laugh"):
			if (iParam2 == 1)
				return joaat("journal_animal_laughing_gull_ar");
			else
				return joaat("journal_animal_laughing_gull_jn");
			break;
	
		case joaat("at_egret"):
			if (iParam2 == 1)
				return joaat("journal_animal_reddish_egret_ar");
			else
				return joaat("journal_animal_reddish_egret_jn");
			break;
	
		case joaat("at_ramsheep_sierra"):
			if (iParam2 == 1)
				return joaat("journal_animal_sierra_nevada_bighorn_sheep_ar");
			else
				return joaat("journal_animal_sierra_nevada_bighorn_sheep_jn");
			break;
	
		case joaat("at_chicken_leghorn"):
			if (iParam2 == 1)
				return joaat("journal_animal_leghorn_chicken_ar");
			else
				return joaat("journal_animal_leghorn_chicken_jn");
			break;
	
		case joaat("at_coyote_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_coyote_ar");
			else
				return joaat("journal_animal_legendary_coyote_jn");
			break;
	
		case joaat("at_crab"):
			if (iParam2 == 1)
				return joaat("journal_animal_crab_ar");
			else
				return joaat("journal_animal_crab_jn");
			break;
	
		case joaat("at_ramsheep_rocky"):
			if (iParam2 == 1)
				return joaat("journal_animal_bighorn_ar");
			else
				return joaat("journal_animal_bighorn_jn");
			break;
	
		case joaat("at_pig_spot"):
			if (iParam2 == 1)
				return joaat("journal_animal_old_spot_pig_ar");
			else
				return joaat("journal_animal_old_spot_pig_jn");
			break;
	
		case joaat("at_ox"):
			if (iParam2 == 1)
				return joaat("journal_animal_oxen_ar");
			else
				return joaat("journal_animal_oxen_jn");
			break;
	
		case joaat("at_beaver"):
			if (iParam2 == 1)
				return joaat("journal_animal_beaver_ar");
			else
				return joaat("journal_animal_beaver_jn");
			break;
	
		case joaat("at_bullfrog"):
			if (iParam2 == 1)
				return joaat("journal_animal_bullfrog_ar");
			else
				return joaat("journal_animal_bullfrog_jn");
			break;
	
		case joaat("at_egret_little"):
			if (iParam2 == 1)
				return joaat("journal_animal_little_egret_ar");
			else
				return joaat("journal_animal_little_egret_jn");
			break;
	
		case joaat("at_seagull"):
			if (iParam2 == 1)
				return joaat("journal_animal_seagull_ar");
			else
				return joaat("journal_animal_seagull_jn");
			break;
	
		case joaat("at_owl_cali"):
			if (iParam2 == 1)
				return joaat("journal_animal_great_horned_owl_ar");
			else
				return joaat("journal_animal_great_horned_owl_jn");
			break;
	
		case joaat("at_loon_yellow"):
			if (iParam2 == 1)
				return joaat("journal_animal_yellow_billed_loon_ar");
			else
				return joaat("journal_animal_yellow_billed_loon_jn");
			break;
	
		case joaat("at_oriole_hooded"):
			if (iParam2 == 1)
				return joaat("journal_animal_hooded_oriole_ar");
			else
				return joaat("journal_animal_hooded_oriole_jn");
			break;
	
		case joaat("at_buffalo"):
			if (iParam2 == 1)
				return joaat("journal_animal_bison_ar");
			else
				return joaat("journal_animal_bison_jn");
			break;
	
		case joaat("at_dog"):
			if (iParam2 == 1)
				return joaat("journal_animal_mongrel_ar");
			else
				return joaat("journal_animal_mongrel_jn");
			break;
	
		case joaat("at_bluejay"):
			if (iParam2 == 1)
				return joaat("journal_animal_blue_jay_ar");
			else
				return joaat("journal_animal_blue_jay_jn");
			break;
	
		case joaat("at_bear_grizzly"):
			if (iParam2 == 1)
				return joaat("journal_animal_grizzly_bear_ar");
			else
				return joaat("journal_animal_grizzly_bear_jn");
			break;
	
		case joaat("at_parrot"):
			if (iParam2 == 1)
				return joaat("journal_animal_parrot_ar");
			else
				return joaat("journal_animal_parrot_jn");
			break;
	
		case joaat("at_panther_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_panther_ar");
			else
				return joaat("journal_animal_legendary_panther_jn");
			break;
	
		case joaat("at_ramsheep_desert"):
			if (iParam2 == 1)
				return joaat("journal_animal_desert_big_horn_sheep_ar");
			else
				return joaat("journal_animal_desert_big_horn_sheep_jn");
			break;
	
		case joaat("at_cormorant"):
			if (iParam2 == 1)
				return joaat("journal_animal_double_crested_cormorant_ar");
			else
				return joaat("STEREO_INTRO_16_LEFT") /* collision: journal_animal_double_crested_cormorant_jn */;
			break;
	
		case joaat("at_gilamonster"):
			if (iParam2 == 1)
				return joaat("journal_animal_gila_monster_ar");
			else
				return joaat("journal_animal_gila_monster_jn");
			break;
	
		case joaat("at_dog_husky"):
			if (iParam2 == 1)
				return joaat("journal_animal_husky_ar");
			else
				return joaat("journal_animal_husky_jn");
			break;
	
		case joaat("at_bear_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_bear_ar");
			else
				return joaat("journal_animal_legendary_bear_jn");
			break;
	
		case joaat("at_crayfish"):
			if (iParam2 == 1)
				return joaat("journal_animal_crayfish_ar");
			else
				return joaat("journal_animal_crayfish_jn");
			break;
	
		case joaat("at_hawk_red"):
			if (iParam2 == 1)
				return joaat("journal_animal_hawk_ar");
			else
				return joaat("journal_animal_hawk_jn");
			break;
	
		case joaat("at_elk_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_elk_ar");
			else
				return joaat("journal_animal_legendary_elk_jn");
			break;
	
		case joaat("at_dog_chesapeake"):
			if (iParam2 == 1)
				return joaat("journal_animal_chesapeakebay_ret_ar");
			else
				return joaat("journal_animal_chesapeakebay_ret_jn");
			break;
	
		case joaat("at_dog_lab"):
			if (iParam2 == 1)
				return joaat("journal_animal_labrador_ar");
			else
				return joaat("journal_animal_labrador_jn");
			break;
	
		case joaat("at_pigeon"):
			if (iParam2 == 1)
				return joaat("journal_animal_pigeon_ar");
			else
				return joaat("journal_animal_pigeon_jn");
			break;
	
		case joaat("at_robin"):
			if (iParam2 == 1)
				return joaat("journal_animal_robin_ar");
			else
				return joaat("journal_animal_robin_jn");
			break;
	
		case joaat("at_chicken"):
			if (iParam2 == 1)
				return joaat("journal_animal_dominique_chicken_ar");
			else
				return joaat("journal_animal_dominique_chicken_jn");
			break;
	
		case joaat("at_loon_pacific"):
			if (iParam2 == 1)
				return joaat("journal_animal_pacific_loon_ar");
			else
				return joaat("journal_animal_pacific_loon_jn");
			break;
	
		case joaat("at_eagle"):
			if (iParam2 == 1)
				return joaat("journal_animal_bald_eagle_ar");
			else
				return joaat("journal_animal_bald_eagle_jn");
			break;
	
		case joaat("at_buffalo_tatanka"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_buffalo_ar");
			else
				return joaat("journal_animal_legendary_buffalo_jn");
			break;
	
		default:
			break;
	}

	return 0;
}

void func_81(int iParam0, int iParam1) // Position - 0x5B4F Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_141(iParam0, 0);
	}
	else
	{
		for (i = 0; i < 20; i = i + 1)
		{
			if (Global_40.f_11922[i] == 0)
			{
				Global_40.f_11922[i] = iParam0;
				return;
			}
		}
	
		func_142(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

void func_82(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x5BA7 Hash - 0x303BFB8D ^0xBCF80455
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
		
			if (func_144(vector, uParam0, 2f, true))
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

BOOL func_83(int iParam0) // Position - 0x5C2B Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

int func_84(int iParam0) // Position - 0x5C6A Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_85(int iParam0) // Position - 0x5C74 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_145(iParam0))
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

BOOL func_86(int iParam0) // Position - 0x5D27 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_146(iParam0);
	return num == 3 || num == 4;
}

BOOL func_87(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5D45 Hash - 0xC9655EC3 ^0x88C9AFE1
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

void func_88(int iParam0, var uParam1, var uParam2) // Position - 0x5DE3 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_89(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5DFF Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_147(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_148(iParam0))
		return false;

	if (func_149(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_150(iParam0, 1) || func_151(32768))
		if (!func_150(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_152())
		return false;

	return true;
}

void func_90(int iParam0, int iParam1) // Position - 0x5EA1 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_91(Ped pedParam0, Any* panParam1) // Position - 0x5EC5 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

BOOL func_92(int iParam0) // Position - 0x5ED5 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_153(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_93(int iParam0) // Position - 0x5F34 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_64() != -1)
		return false;

	if (!func_154(iParam0))
		return false;

	return func_155(Global_1347702[iParam0 /*49*/].f_15);
}

BOOL func_94(int iParam0) // Position - 0x5F64 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_64() != -1)
		return false;

	if (!func_154(iParam0))
		return false;

	return func_86(Global_1347702[iParam0 /*49*/].f_15);
}

BOOL func_95(int iParam0) // Position - 0x5F94 Hash - 0xAD2044D7 ^0xA119206F
{
	if (func_64() != -1)
		return false;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false) && !func_86(Global_1347702[iParam0 /*49*/].f_15) && !func_156(Global_1347702[iParam0 /*49*/].f_13, 4))
		return true;

	return false;
}

Volume func_96(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x5FE8 Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_157(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

int func_97() // Position - 0x602C Hash - 0xDF9E118A ^0xDF9E118A
{
	return 3;
}

void func_98(var uParam0, int iParam1, int iParam2) // Position - 0x6035 Hash - 0x8F422A6A ^0x6E6CA92A
{
	uParam0->f_31[uParam0->f_618 /*36*/].f_4 = uParam0->f_572[iParam1];
	uParam0->f_31[uParam0->f_618 /*36*/].f_5 = 0;
	uParam0->f_31[uParam0->f_618 /*36*/].f_17 = { func_158(iParam1, iParam2) };
	uParam0->f_31[uParam0->f_618 /*36*/].f_23 = func_159(iParam1, iParam2);
	uParam0->f_31[uParam0->f_618 /*36*/].f_26 = iParam1;
	uParam0->f_31[uParam0->f_618 /*36*/].f_27 = iParam2;

	if (uParam0->f_580[iParam1] == 0)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 0;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_EXC", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_160() };
	}
	else if (uParam0->f_580[iParam1] == 1)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_FUR", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_161() };
	}
	else if (uParam0->f_580[iParam1] == 2)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 2;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_KLR", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_162() };
	}
	else if (uParam0->f_580[iParam1] == 3)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 3;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_BLD", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_163() };
	}
	else if (uParam0->f_580[iParam1] == 4)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 4;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_BRK", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_164() };
	}
	else if (uParam0->f_580[iParam1] == 5)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 5;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_TRB", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_165() };
	}

	if (uParam0->f_588[iParam1] == 0)
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 0;
	else if (uParam0->f_588[iParam1] == 1)
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 1;
	else if (uParam0->f_588[iParam1] == 2)
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 2;
	else if (uParam0->f_588[iParam1] == 3)
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 3;
	else if (uParam0->f_588[iParam1] == 4)
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 4;
	else if (uParam0->f_588[iParam1] == 5)
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 5;

	if (iParam1 == 0)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_13 = 1;
		uParam0->f_31[uParam0->f_618 /*36*/].f_15 = 1;
		func_166(&(uParam0->f_31[uParam0->f_618 /*36*/].f_10), uParam0->f_31[uParam0->f_618 /*36*/].f_17, 0f, 0f, 0f, uParam0->f_7, uParam0->f_7, uParam0->f_7, "volHerbBlocking - Legendary Tracking Clue");
	
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_31[uParam0->f_618 /*36*/].f_10))
			func_167(uParam0->f_31[uParam0->f_618 /*36*/].f_10, 1);
	}

	if (iParam1 + 1 < func_97())
		uParam0->f_31[uParam0->f_618 /*36*/].f_20 = { func_158(iParam1 + 1, iParam2) };
	else
		uParam0->f_31[uParam0->f_618 /*36*/].f_20 = { func_168(iParam2) };

	return;
}

float func_99(int iParam0) // Position - 0x63A1 Hash - 0x566AD102 ^0x566AD102
{
	return func_169(0, iParam0);
}

Ped func_100(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x63B0 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_170(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_101(var uParam0) // Position - 0x63F2 Hash - 0xB1EA7205 ^0x42F352D8
{
	PED::_SET_PED_SCALE(uParam0->f_12, uParam0->f_12.f_4);
	PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(uParam0->f_12, func_171());
	PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_12, false);
	FLOCK::_SET_ANIMAL_RARITY(uParam0->f_12, 2);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 305, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 306, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 186, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 465, true);
	PERSISTENCE::_0xDC0A1F0ECEC9F0C0(uParam0->f_12, 100000000f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, true);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_12, false);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_12, false);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_12, true);
	PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_12, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 34, true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 112, 100f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 81, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 82, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 85, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 83, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 84, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 89, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 90, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 105, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 106, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 78, 20f);
	uParam0->f_620 = 1;

	if (uParam0->f_1 == 2)
	{
		if (*uParam0 == 15)
		{
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 137, 0f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 138, 0f);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 39, true);
			FLOCK::_0x706B434FEFAD6A24(1f);
			FLOCK::_0xA881F5C77A560906(3f);
		}
	
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 139, 0.75f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 88, 50f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 91, 40f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 10, 30f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 1f);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 32, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 54, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 80, true);
	}
	else if (uParam0->f_1 == 3)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 139, 0.75f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 88, 50f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 91, 40f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 10, 30f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 1f);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 16, false);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 12, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 32, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 54, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 80, true);
	}
	else if (uParam0->f_1 == 1)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 0f);
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_678))
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_12, uParam0->f_678, 0);

	return;
}

void func_102(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x668E Hash - 0xC26AC0FE ^0xFF80BBA5
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (bParam1)
			AUDIO::DISABLE_PED_PAIN_AUDIO(pedParam0, true);
	
		if (bParam2)
			PED::SET_PED_CONFIG_FLAG(pedParam0, 243, true);
	
		Global_35 == pedParam0;
		ENTITY::SET_ENTITY_HEALTH(pedParam0, 0, 0);
	}

	return;
}

Ped func_103(Ped pedParam0) // Position - 0x66CA Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

Vector3 func_104(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x66D4 Hash - 0x88200B15 ^0xE07B704A
{
	float num;

	if (fParam3 == 0f)
		return 0f, 0f, 0f;

	num = BUILTIN::VMAG(vParam0);

	if (num != 0f)
		return vParam0 * { fParam3 / num, fParam3 / num, fParam3 / num };

	return 0f, 0f, 0f;
}

int func_105(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x670B Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_172(*uParam0, 0f, 0f, 0f))
		return 1;

	num = 0;
	flag = false;
	flag2 = false;
	vector = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);

	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag)
	{
		if (num < iParam2)
		{
			num = num + 1;
			vector.f_2 = vector.f_2 + (float)iParam1;
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		}
		else
		{
			flag = true;
		}
	}

	if (flag)
	{
		num = 1;
		vector.f_2 = vector.f_2 - (float)iParam1;
		STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag2)
		{
			if (num < iParam2)
			{
				num = num + 1;
				vector.f_2 = vector.f_2 - (float)iParam1;
				STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			}
			else
			{
				flag2 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = groundZ;
		return 1;
	}

	if (flag && flag2)
		return 0;

	uParam0->f_2 = groundZ;
	return 1;
}

const char* func_106(const char* sParam0) // Position - 0x6802 Hash - 0xC9D82232 ^0xC9D82232
{
	return sParam0;
}

float func_107(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x680C Hash - 0x1A58F423 ^0x2317B76D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_173(entityCoords, vParam1);
}

float func_108(Ped pedParam0, Entity eParam1, BOOL bParam2) // Position - 0x685C Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false));

	return func_173(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false));
}

BOOL func_109() // Position - 0x68B3 Hash - 0x7A8E245E ^0x59FC764
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_174(Global_35))
		return true;

	return false;
}

// Unhandled jump detected. Output should be considered invalid
int func_110(char* sParam0, Hash hParam1, Object obParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x68D7 Hash - 0xA9244E74 ^0xC0A4C4ED
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
		if (func_175(i, 2))
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
		func_176(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, obParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_111(int iParam0, float fParam1, BOOL bParam2) // Position - 0x69AE Hash - 0x9018D919 ^0x90AC92B6
{
	int num;

	if (bParam2 && !func_83(iParam0))
		return;

	if (fParam1 <= 0f)
		return;

	num = func_84(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	Global_1945188[num /*18*/].f_9 = fParam1;
	HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(Global_1945188[num /*18*/].f_3, fParam1);
	return;
}

int func_112(var uParam0, Entity eParam1) // Position - 0x6A0D Hash - 0x583186B5 ^0x1718BFF6
{
	int num;

	num = func_84(*uParam0);

	if (ENTITY::DOES_ENTITY_EXIST(eParam1))
	{
		if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		{
			HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(eParam1), 0);
			return 1;
		}
	}

	return 0;
}

BOOL func_113(int iParam0, BOOL bParam1) // Position - 0x6A52 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_83(iParam0))
		return false;

	num = func_84(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_114(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6AAA Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_83(iParam0))
		return;

	num = func_84(iParam0);

	if (bParam1)
	{
		func_177(iParam0, 4);
		func_178(num, true);
		func_179(num, true);
	}
	else
	{
		func_180(iParam0, 4);
		func_179(num, false);
	}

	return;
}

void func_115(var uParam0, var uParam1) // Position - 0x6AF9 Hash - 0x2173EF1C ^0x6EFEA7E5
{
	int i;
	int num;
	int num2;
	float scaleX;

	num = func_30();
	num2 = 210;
	scaleX = uParam0->f_9 + 20f;

	if (uParam0->f_614 == 0)
	{
		uParam0->f_615 = uParam1;
		uParam0->f_616 = uParam1;
		uParam0->f_12.f_10 = { func_168(uParam0->f_615) };
		uParam0->f_12.f_16 = { func_168(uParam0->f_615) };
		uParam0->f_4 = VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_12.f_10, 0f, 0f, 0f, 50f, 50f, 50f);
		uParam0->f_5 = func_181(uParam0->f_4, 0, false, 0);
		func_182(uParam0);
	
		if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
		{
			uParam0->f_6 = MAP::BLIP_ADD_FOR_RADIUS(joaat("BLIP_STYLE_LEGENDARY_ANIMAL_AREA"), uParam0->f_627, uParam0->f_9);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "ATZ_AREA_BLIP");
		}
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_677))
			AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_677, true, true);
	
		func_183(-1, false, 0, false, false);
		func_184();
		func_185(num2, 0, true);
		func_28(uParam0->f_3);
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_627, 0f, 0f, 0f, scaleX, scaleX, scaleX, "HuntingZoneRestriction");
		func_96(uParam0->f_3, "Hunting Zone Target", false, 0, 0, false, -1082130432);
		uParam0->f_622 = 1;
	}

	uParam0->f_614 = uParam0->f_614 + 1;

	if (!(uParam0->f_614 >= func_97()))
	{
		for (i = 0; i < num; i = i + 1)
		{
			if (uParam0->f_614 == uParam0->f_31[i /*36*/].f_26 && uParam0->f_615 == uParam0->f_31[i /*36*/].f_27)
			{
				func_166(&(uParam0->f_31[i /*36*/].f_10), uParam0->f_31[i /*36*/].f_17, 0f, 0f, 0f, uParam0->f_7, uParam0->f_7, uParam0->f_7, "volHerbBlocking - Legendary Tracking Clue");
			
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_31[i /*36*/].f_10))
					func_167(uParam0->f_31[i /*36*/].f_10, 1);
			
				uParam0->f_31[i /*36*/].f_13 = 1;
				uParam0->f_31[i /*36*/].f_15 = 1;
			}
			else if (uParam0->f_31[i /*36*/].f_14 == 0)
			{
				uParam0->f_31[i /*36*/].f_13 = 0;
				uParam0->f_31[i /*36*/].f_15 = 0;
			}
		}
	}
	else
	{
		uParam0->f_621 = 1;
	
		if (!uParam0->f_624)
		{
			func_121(uParam0);
			uParam0->f_624 = 1;
		}
	}

	return;
}

BOOL func_116(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x6D20 Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

void func_117(int iParam0, int iParam1) // Position - 0x6D79 Hash - 0x95CEEAD4 ^0xCB13CDAE
{
	if (iParam1 == 0)
		if (iParam0 == 0)
			func_41(Global_35, "HUNTING_MEDIUM", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
		else if (iParam0 == 1)
			func_41(Global_35, "HUNTING_NEAR", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
	else if (iParam0 == 0)
		func_41(Global_35, "HUNTING_FAR", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
	else if (iParam0 == 1)
		func_41(Global_35, "HUNTING_MEDIUM", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
	else if (iParam0 == 2)
		func_41(Global_35, "HUNTING_NEAR", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);

	return;
}

int func_118(Entity eParam0, const char* sParam1, BOOL bParam2, float fParam3, int iParam4, int iParam5, float fParam6, BOOL bParam7) // Position - 0x6E1F Hash - 0xF2C93E75 ^0x2DDAA8D0
{
	int points;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
		return 0;

	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &points))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(eParam0);

	if (points > 256)
		return 0;

	if (ENTITY::_CREATE_FOOTPATH_TRAIL(eParam0, sParam1, bParam2, fParam3, iParam4, iParam5, 0, 0, 0, fParam6, 0, bParam7))
		return 1;

	return 0;
}

void func_119(Volume volParam0) // Position - 0x6E8B Hash - 0x530B7370 ^0x1B8FEE27
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_36581[i /*2*/] == volParam0)
			Global_36581[i /*2*/].f_1 = 3;
	}

	return;
}

BOOL func_120(int iParam0) // Position - 0x6EBC Hash - 0x90A8253B ^0x90A8253B
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 8:
		case 9:
		case 11:
		case 13:
		case 15:
			return true;
	
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 10:
		case 12:
		case 14:
			return false;
	
		default:
		
	}

	return false;
}

void func_121(var uParam0) // Position - 0x6F35 Hash - 0x8EF783D9 ^0x83F1A18A
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		func_186(uParam0->f_12, uParam0->f_12.f_10, func_99(uParam0->f_615), 2, 1073741824);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_12, true);
		PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_12, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_12, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_12, false);
		TASK::TASK_WANDER_IN_AREA(uParam0->f_12, uParam0->f_12.f_10, 10f, 1.5f, 3f, 1);
	}

	return;
}

void func_122(var uParam0) // Position - 0x6FB0 Hash - 0x6C6259DC ^0xF1EA64EB
{
	int num;

	num = func_188(0, func_187(), uParam0->f_616);
	uParam0->f_616 = num;
	uParam0->f_12.f_16 = { func_168(num) };
	return;
}

BOOL func_123(int iParam0, BOOL bParam1) // Position - 0x6FDD Hash - 0xC3E950D6 ^0xC3E950D6
{
	if (!func_65(iParam0))
		return false;

	return Global_1914319.f_15614[iParam0] && bParam1 != false;
}

eStackSize func_124() // Position - 0x7003 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_125(int iParam0) // Position - 0x7011 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_126(int iParam0, BOOL bParam1) // Position - 0x7027 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_127(Hash hParam0, int iParam1) // Position - 0x705A Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

struct<10> func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x7074 Hash - 0x440EE211 ^0xAE2816F9
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != joaat("SLOTID_NONE"))
		num = iParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_129(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x7148 Hash - 0x72399051 ^0x6D1C1C66
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_127(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam5;
		return false;
	}

	!bParam5;
	*uParam3 = outData.f_3;

	for (i = 0; i < outData.f_3; i = i + 1)
	{
		!bParam5;
		uParam2->[i /*2*/] = { outData.f_4[i /*2*/] };
	}

	if (bParam4)
		func_189(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

struct<4> func_130(BOOL bParam0) // Position - 0x71E5 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_132(joaat("character"), func_190(), joaat("SLOTID_NONE"), bParam0);
}

int func_131(int iParam0) // Position - 0x7201 Hash - 0xF3DAE918 ^0xA65130AC
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		case 2:
			return 1426626782;
	
		case 3:
			return 1227915917;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

struct<4> func_132(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x724E Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_127(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_133(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_133(BOOL bParam0) // Position - 0x727F Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_64() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_134(Hash hParam0, var uParam1) // Position - 0x72C0 Hash - 0x6C0FFC3B ^0xB2795CB6
{
	int i;
	var outSlotId;
	var unk;
	Hash category;
	int num;

	if (hParam0 != 0)
	{
		category = func_191(hParam0);
	
		if (category != 0)
		{
			num = func_192(hParam0);
		
			for (i = 0; i < num; i = i + 1)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
				{
					unk = outSlotId;
				
					if (unk == uParam1)
						return true;
				}
			}
		}
	}

	return false;
}

int func_135(Hash hParam0, Any* panParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7314 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_127(hParam0, 0))
		return 0;

	if (!func_193(false))
		bParam2 = true;

	if (bParam2 || !func_194(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, panParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_133(bParam3), hParam0);
}

int func_136(Hash hParam0, BOOL bParam1) // Position - 0x7362 Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_195(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_133(bParam1), hParam0, false);
}

BOOL func_137(Hash hParam0) // Position - 0x738C Hash - 0x5E6E1858 ^0x84C97687
{
	!func_127(hParam0, 0);

	if (func_196(hParam0, 173360570))
		return true;

	return false;
}

BOOL func_138(Hash hParam0) // Position - 0x73B2 Hash - 0x33F7D399 ^0xEB534519
{
	if (!func_127(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

BOOL func_139(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x73CF Hash - 0x86E39CDA ^0xCF922D1
{
	!func_127(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return false;

	if (func_197(hParam0, panParam2, iParam3, bParam5, false))
		return false;

	if (!func_193(false))
		return false;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_133(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return false;

	return true;
}

void func_140(var uParam0, int iParam1) // Position - 0x7431 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_141(int iParam0, int iParam1) // Position - 0x7442 Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_198(true);

	return;
}

void func_142(int iParam0) // Position - 0x745B Hash - 0x23AE6B73 ^0x23AE6B73
{
	int i;
	int num;

	num = 0;

	if (iParam0 == 0 && Global_43891 == true)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_40.f_11922[i] == 0)
			break;
	
		func_141(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_198(true);

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x74C9 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_144(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x74F3 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

BOOL func_145(int iParam0) // Position - 0x7548 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_175(iParam0, 2);
}

int func_146(int iParam0) // Position - 0x7557 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_199(iParam0))
		return -1;

	return func_200(iParam0);
}

BOOL func_147(int iParam0, int iParam1) // Position - 0x7573 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_64() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_148(int iParam0) // Position - 0x75A6 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_64() != -1)
		if (func_150(iParam0, 4))
			return false;
	else if (func_150(iParam0, 2))
		return false;

	return true;
}

BOOL func_149(int iParam0) // Position - 0x75D6 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_150(iParam0, 65536) && !func_150(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_150(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_150(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_150(int iParam0, int iParam1) // Position - 0x7682 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_151(int iParam0) // Position - 0x769B Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_152() // Position - 0x76AE Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_153(int iParam0, BOOL bParam1) // Position - 0x76BD Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_146(iParam0))
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

BOOL func_154(int iParam0) // Position - 0x76EE Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_155(int iParam0) // Position - 0x7704 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_200(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

BOOL func_156(int iParam0, int iParam1) // Position - 0x776F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Volume func_157(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x777E Hash - 0xC1E3A062 ^0xD42263D3
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
		if (func_201(vParam0))
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

	func_202(volume, bParam8);
	return volume;
}

Vector3 func_158(int iParam0, int iParam1) // Position - 0x7838 Hash - 0xFF60DCDC ^0xFF60DCDC
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { func_203(1, iParam1) };
			break;
	
		case 1:
			unk = { func_203(2, iParam1) };
			break;
	
		case 2:
			unk = { func_203(3, iParam1) };
			break;
	}

	return unk;
}

float func_159(int iParam0, int iParam1) // Position - 0x7888 Hash - 0xA6D14BD7 ^0xA6D14BD7
{
	float num;

	switch (iParam0)
	{
		case 0:
			num = func_169(1, iParam1);
			break;
	
		case 1:
			num = func_169(2, iParam1);
			break;
	
		case 2:
			num = func_169(3, iParam1);
			break;
	}

	return num;
}

Vector3 func_160() // Position - 0x78D0 Hash - 0x1DA0618A ^0x8AE75639
{
	return func_204("ATZ_INS_EXC_EL");
}

Vector3 func_161() // Position - 0x78E0 Hash - 0x1DA0618A ^0xAC40CBAA
{
	return func_204("ATZ_INS_FUR_EL");
}

Vector3 func_162() // Position - 0x78F0 Hash - 0x54479E84 ^0x54479E84
{
	return func_204("ATZ_INS_KLR");
}

Vector3 func_163() // Position - 0x78FF Hash - 0x77F9FE5D ^0x77F9FE5D
{
	return func_204("ATZ_INS_BLD");
}

Vector3 func_164() // Position - 0x790E Hash - 0xCB393341 ^0xCB393341
{
	return func_204("ATZ_INS_BRK");
}

Vector3 func_165() // Position - 0x791D Hash - 0x1DA0618A ^0xD8279D08
{
	return func_204("ATZ_INS_TRB_EL");
}

void func_166(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, Vector3 vParam7, var uParam8, var uParam9, char* sParam10) // Position - 0x792D Hash - 0x3A05F50D ^0x6A8E2731
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, fParam4, vParam7, sParam10);
	return;
}

void func_167(Volume volParam0, int iParam1) // Position - 0x794A Hash - 0x28736565 ^0xF0314607
{
	if (func_205(volParam0))
		return;

	if (func_206(volParam0) == iParam1)
		return;

	if (Global_36602 >= 10)
		Global_36602 = 0;

	Global_36581[Global_36602 /*2*/].f_1 = iParam1;
	Global_36581[Global_36602 /*2*/] = volParam0;
	Global_36602 = Global_36602 + 1;
	return;
}

Vector3 func_168(int iParam0) // Position - 0x7996 Hash - 0x783205AD ^0x783205AD
{
	return func_203(0, iParam0);
}

float func_169(int iParam0, int iParam1) // Position - 0x79A5 Hash - 0x7009ECAD ^0x7009ECAD
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 59.741f;
			
				case 1:
					return 306.5778f;
			
				case 2:
					return 16.9446f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return -90.4649f;
			
				case 1:
					return -254.88f;
			
				case 2:
					return 222.3636f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -90.59f;
			
				case 1:
					return -178.881f;
			
				case 2:
					return -82.701f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 225.7847f;
			
				case 1:
					return 225.7847f;
			
				case 2:
					return 225.7847f;
			}
			break;
	}

	return 0f;
}

void func_170(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x7AC6 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_207(eptParam1))
		{
			func_208(pedParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(pedParam0, true);
			flag = true;
		}
	}

	if (PED::IS_PED_HUMAN(pedParam0))
	{
		if (bParam6)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (PED::IS_PED_MALE(pedParam0) && !bParam3)
			func_209(pedParam0, 0, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(pedParam0, 0, false);
			flag = true;
		}
	
		if (bParam4)
		{
			func_210(pedParam0, false);
			flag = true;
		}
	
		func_211(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

Hash func_171() // Position - 0x7BA7 Hash - 0x9F572D68 ^0xA1CA6403
{
	return -1040890554;
}

BOOL func_172(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x7BB4 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

float func_173(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x7BDD Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_174(Ped pedParam0) // Position - 0x7BFB Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_212(pedParam0, 4) || func_212(pedParam0, 5);
}

BOOL func_175(int iParam0, int iParam1) // Position - 0x7C17 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_176(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, Volume volParam10, Object obParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x7C38 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = iParam9;
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
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, obParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
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
	func_178(iParam0, true);
	func_179(iParam0, true);
	func_180(iParam0, 128);
	return;
}

void func_177(int iParam0, int iParam1) // Position - 0x7EDE Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_178(int iParam0, BOOL bParam1) // Position - 0x7F11 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_175(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_179(int iParam0, BOOL bParam1) // Position - 0x7F69 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_180(int iParam0, int iParam1) // Position - 0x7F92 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

Any func_181(Volume volParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x7FBA Hash - 0xDFB996B4 ^0xC287A71C
{
	Any any;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return any;

	func_213(volParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam3, 0, 0, -1, -1, 2);
	any = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volParam0, bParam2, 15);
	return any;
}

void func_182(var uParam0) // Position - 0x8003 Hash - 0xC6A5F393 ^0x3F787E83
{
	int i;

	for (i = 0; i < func_30(); i = i + 1)
	{
		if (uParam0->f_31[i /*36*/].f_26 == 0)
		{
			if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_31[i /*36*/].f_10))
				func_119(uParam0->f_31[i /*36*/].f_10);
		
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[i /*36*/]))
				MAP::REMOVE_BLIP(&uParam0->f_31[i /*36*/]);
		}
	}

	return;
}

void func_183(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8068 Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_214() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_215(num) && !func_216(num, iParam2) && !bParam3 || !func_217(num) && !bParam4 || !func_218(num))
			if (num != iParam0)
				func_219(i);
	}

	return;
}

void func_184() // Position - 0x80F6 Hash - 0x18ACD9D3 ^0xB2ADEAB8
{
	if (!func_215(Global_1327479))
		return;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));

	func_220(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
	return;
}

void func_185(int iParam0, int iParam1, BOOL bParam2) // Position - 0x8169 Hash - 0xD61623D0 ^0x48AE56A
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_221(iParam0, iParam1, bParam2);
	return;
}

void func_186(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6) // Position - 0x8185 Hash - 0xF46E0F16 ^0xED4BA72A
{
	Vehicle vehiclePedIsIn;
	Ped pedIndexFromEntityIndex;
	Ped mount;
	BOOL pedCrouchMovement;
	BOOL isEntityAPed;
	var height;
	Ped pedIndexFromEntityIndex2;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(pedParam0);

	if (isEntityAPed)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
		pedCrouchMovement = PED::GET_PED_CROUCH_MOVEMENT(pedIndexFromEntityIndex);
	
		if (PED::IS_PED_RAGDOLL(pedIndexFromEntityIndex))
			PED::_SET_PED_TO_DISABLE_RAGDOLL(pedIndexFromEntityIndex, true);
	}

	pedParam0 == func_103(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_222(pedParam0))
		if (func_223(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_224(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_186(vehiclePedIsIn, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_186(mount, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_224(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_224(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_224(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_224(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_224(iParam5, 129))
	{
		if (func_224(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, vParam1, func_224(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_224(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_224(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_222(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_224(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_224(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

int func_187() // Position - 0x8407 Hash - 0xDF9E118A ^0xDF9E118A
{
	return 3;
}

int func_188(int iParam0, int iParam1, int iParam2) // Position - 0x8410 Hash - 0xC76BC009 ^0xD35219B8
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);

	if (randomIntInRange == iParam2)
	{
		if (func_225())
			randomIntInRange = randomIntInRange - 1;
		else
			randomIntInRange = randomIntInRange + 1;
	
		if (randomIntInRange < iParam0)
			randomIntInRange = iParam0;
		else if (randomIntInRange >= iParam1)
			randomIntInRange = iParam1 - 1;
	
		if (randomIntInRange == iParam0 && iParam0 == iParam2)
			randomIntInRange = randomIntInRange + 1;
		else if (randomIntInRange == iParam1 - 1 && iParam1 - 1 == iParam2)
			randomIntInRange = randomIntInRange - 1;
	
		if (randomIntInRange < iParam0 || randomIntInRange >= iParam1)
			randomIntInRange = func_225() ? iParam0 : iParam1 - 1;
	}

	return randomIntInRange;
}

void func_189(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x84B6 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i /*2*/] = uParam2->[i /*2*/];
		unk13[i /*2*/].f_1 = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (unk13[i /*2*/] == outData2)
							{
								unk13[i /*2*/].f_1 = unk13[i /*2*/].f_1 - outData2.f_1;
								break;
							}
						}
					}
				}
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i /*2*/].f_1 != 1f)
			uParam2->[i /*2*/].f_1 = BUILTIN::FLOOR((float)uParam2->[i /*2*/].f_1 * (unk13[i /*2*/].f_1 / 1f));
	}

	return;
}

struct<4> func_190() // Position - 0x861D Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

Hash func_191(Hash hParam0) // Position - 0x8629 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_127(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_192(Hash hParam0) // Position - 0x8654 Hash - 0xF4E671A6 ^0x338FA446
{
	Hash category;

	if (!func_127(hParam0, 0))
		return 0;

	category = func_191(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);
}

BOOL func_193(BOOL bParam0) // Position - 0x8683 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_64() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_133(bParam0));
}

BOOL func_194(Hash hParam0) // Position - 0x86A1 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_226(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

BOOL func_195(Hash hParam0) // Position - 0x86BD Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_196(Hash hParam0, Hash hParam1) // Position - 0x86CB Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_197(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x86FC Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_227(&hParam0);

	if (!func_127(hParam0, 0))
		return false;

	if (!func_193(false))
		bParam3 = true;

	if (func_228(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_229(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_230(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return false;
			else if (func_231(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return false;
		
			if (func_232(hParam0, true))
				if (!func_230(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return false;
				else if (func_231(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return false;
		}
		else if (!func_233(hParam0, &unk27, false))
		{
			return false;
		}
	
		return true;
	}

	num = func_135(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	if (bParam3 || !func_194(hParam0))
		inventoryItemCountWithItemid = func_234(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_133(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return true;

	return false;
}

void func_198(BOOL bParam0) // Position - 0x8841 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_235(&(Global_40.f_12019.f_42), 1);
	else
		func_236(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_199(int iParam0) // Position - 0x886B Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_200(int iParam0) // Position - 0x889E Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_237(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_201(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x88DF Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_202(Volume volParam0, BOOL bParam1) // Position - 0x88F9 Hash - 0xEA796703 ^0x695D7925
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

Vector3 func_203(int iParam0, int iParam1) // Position - 0x8961 Hash - 0x24E72BF3 ^0x24E72BF3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 723.7944f, 1737.194f, 223.8191f;
			
				case 1:
					return 769.059f, 1650.3857f, 218.4761f;
			
				case 2:
					return 673.3187f, 1687.3396f, 200.9561f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 750.8877f, 1620.8823f, 209.4426f;
			
				case 1:
					return 685.8033f, 1660.6737f, 204.4739f;
			
				case 2:
					return 732.7f, 1724.1746f, 224.0503f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 754.349f, 1644.338f, 214.33f;
			
				case 1:
					return 714.128f, 1680.967f, 214.6f;
			
				case 2:
					return 745.912f, 1681.867f, 222.813f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 728.8153f, 1671.7921f, 217.1227f;
			
				case 1:
					return 753.9499f, 1699.5311f, 228.8089f;
			
				case 2:
					return 712.7245f, 1653.9259f, 212.1277f;
			}
			break;
	}

	return 0f, 0f, 0f;
}

Vector3 func_204(char* sParam0) // Position - 0x8AFC Hash - 0xB2B2D053 ^0xB2B2D053
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 24);
	return unk;
}

BOOL func_205(Volume volParam0) // Position - 0x8B0E Hash - 0x1D6344D9 ^0x1D6344D9
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_36581[i /*2*/] == volParam0)
			return true;
	}

	return false;
}

int func_206(Volume volParam0) // Position - 0x8B3A Hash - 0x67695E3A ^0xB4A144D5
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_36581[i /*2*/] == volParam0)
			return Global_36581[Global_36602 /*2*/].f_1;
	}

	return 3;
}

BOOL func_207(ePedType eptParam0) // Position - 0x8B6F Hash - 0x5000025C ^0x5000025C
{
	switch (eptParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return true;
	
		default:
		
	}

	return false;
}

void func_208(Ped pedParam0, Hash hParam1) // Position - 0x8FC2 Hash - 0xEA1C858E ^0xBBF5A2A3
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_238(pedParam0, hParam1))
		{
			if (func_239(pedParam0, hParam1))
			{
				if (func_240(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_241(pedParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);
				PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
			}
		
			PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 9);
		}
	}

	return;
}

void func_209(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x906C Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_210(Ped pedParam0, BOOL bParam1) // Position - 0x909C Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_211(Ped pedParam0, int iParam1) // Position - 0x90E1 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_212(Ped pedParam0, int iParam1) // Position - 0x9108 Hash - 0x25D0971D ^0xF7D4E234
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

void func_213(Volume volParam0, BOOL bParam1) // Position - 0x9147 Hash - 0xD6642292 ^0x5A7BA218
{
	int num;

	num = 16384;

	if (bParam1)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

int func_214() // Position - 0x916A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_215(int iParam0) // Position - 0x9179 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

BOOL func_216(int iParam0, int iParam1) // Position - 0x918F Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_215(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_217(int iParam0) // Position - 0x91B2 Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_215(iParam0))
		return false;

	if (func_242(64) && func_243(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_218(int iParam0) // Position - 0x91EA Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_215(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_219(int iParam0) // Position - 0x920A Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_215(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_244(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

void func_220(int iParam0) // Position - 0x9273 Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1327479.f_3 = iParam0;
	return;
}

void func_221(int iParam0, int iParam1, BOOL bParam2) // Position - 0x9283 Hash - 0x4464293B ^0x680D2F86
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

BOOL func_222(Ped pedParam0) // Position - 0x9308 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_223(Ped pedParam0) // Position - 0x933A Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_224(int iParam0, int iParam1) // Position - 0x937C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_225() // Position - 0x938B Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

int func_226(Hash hParam0, Hash hParam1) // Position - 0x93AC Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_227(var uParam0) // Position - 0x93C6 Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_127(*uParam0, 0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			return 1;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			return 1;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			return 1;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			return 1;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_228(Hash hParam0) // Position - 0x9442 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_245(hParam0) == joaat("WEAPON");
}

struct<4> func_229(BOOL bParam0) // Position - 0x9456 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_133(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_132(923904168, func_130(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_132(923904168, func_130(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_132(923904168, func_130(bParam0), -740156546, false);
}

BOOL func_230(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x94EB Hash - 0x4285A587 ^0x4285A587
{
	return func_234(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_231(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x9503 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_246(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

BOOL func_232(Hash hParam0, BOOL bParam1) // Position - 0x9524 Hash - 0x62864AB ^0xBC339691
{
	if (func_191(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_247(24);
		else
			return true;

	return false;
}

BOOL func_233(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x955D Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_127(hParam0, 0))
		return false;

	unk = { func_248(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_249(398 + i, 1);
	
		if (func_230(hParam0, &unk, hash, false))
		{
			flag = func_231(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_234(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x95F1 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_127(hParam0, 0))
		return 0;

	guid = { func_132(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_133(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

void func_235(BOOL bParam0, int iParam1) // Position - 0x9639 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_236(BOOL bParam0, int iParam1) // Position - 0x964A Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

int func_237(int iParam0) // Position - 0x965F Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_238(Ped pedParam0, Hash hParam1) // Position - 0x96E0 Hash - 0x902FAF7B ^0x852CA371
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	flag = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, ENTITY::GET_ENTITY_MODEL(pedParam0));

	if (flag)
	{
	}

	return flag;
}

BOOL func_239(Ped pedParam0, Hash hParam1) // Position - 0x970E Hash - 0xA54F3032 ^0xFFD4678D
{
	Hash _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (_int == hParam1)
		return true;

	return false;
}

BOOL func_240(Ped pedParam0, Hash hParam1) // Position - 0x975F Hash - 0xA54F3032 ^0xFFD4678D
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_238(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_241(Ped pedParam0) // Position - 0x97D1 Hash - 0x446F1BDD ^0xF31759D8
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_242(int iParam0) // Position - 0x97EF Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_243(int iParam0) // Position - 0x9803 Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_216(iParam0, Global_1310750.f_16072 | 64);
}

void func_244(int iParam0) // Position - 0x981B Hash - 0x3D0B339A ^0xB87B2B3D
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

int func_245(Hash hParam0) // Position - 0x98A8 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_127(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_246(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x98D3 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_133(false);
	*panParam1 = { func_132(hParam0, func_229(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_247(int iParam0) // Position - 0x9918 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_250(iParam0))
		return false;

	return func_251(iParam0);
}

struct<5> func_248(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9934 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_130(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_245(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_253(hParam0, -1823706425))
			{
				unk = { func_132(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_253(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_132(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
		
			[[fallthrough]];
	
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -813824107;
			unk = { func_252(bParam1) };
		
			switch (func_191(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case 664784405:
					unk.f_4 = -1150938404;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					unk.f_4 = -1756997214;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk = { func_132(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_229(bParam1) };
		
			if (bParam2 && func_232(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_230(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_230(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_231(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else
					unk.f_4 = joaat("SLOTID_WEAPON_1");
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_SATCHEL")))
			{
				unk.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_CURRENCY")))
			{
				unk28.f_9 = joaat("SLOTID_NONE");
			
				if (!func_254(unk, &unk28, bParam1, false))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

Hash func_249(int iParam0, int iParam1) // Position - 0x9BF1 Hash - 0xE1D12727 ^0x71D656A6
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
	
		case 1:
			return -1783281882;
	
		case 2:
			return 1704602624;
	
		case 3:
			return 1214181762;
	
		case 4:
			return 1520605650;
	
		case 5:
			return 551482925;
	
		case 6:
			return 843929315;
	
		case 7:
			return 1974334822;
	
		case 8:
			return -1963435638;
	
		case 9:
			return -430578371;
	
		case 10:
			return -730381952;
	
		case 11:
			return -1500304973;
	
		case 12:
			return -253503777;
	
		case 13:
			return 1352275534;
	
		case 14:
			return 1666399168;
	
		case 15:
			return -1911121386;
	
		case 16:
			return 1756656691;
	
		case 17:
			return -1774867076;
	
		case 18:
			return -421952220;
	
		case 19:
			return -1087003323;
	
		case 20:
			return 1231618917;
	
		case 21:
			return -1183777174;
	
		case 22:
			return -841767082;
	
		case 23:
			return 1043717005;
	
		case 24:
			return 142663787;
	
		case 25:
			return 1718143051;
	
		case 26:
			return -6605744;
	
		case 27:
			return 953047564;
	
		case 28:
			return 769706682;
	
		case 29:
			return 1635590003;
	
		case 30:
			return -2047978619;
	
		case 31:
			return -586319254;
	
		case 32:
			return 249896112;
	
		case 33:
			return -1060513333;
	
		case 34:
			return 1317351007;
	
		case 35:
			return -500478573;
	
		case 36:
			return -806573802;
	
		case 37:
			return -1109949204;
	
		case 38:
			return -740156546;
	
		case 39:
			return -684532710;
	
		case 40:
			return 1158805436;
	
		case 41:
			return -559473670;
	
		case 42:
			return -797147251;
	
		case 43:
			return -382216265;
	
		case 44:
			return 1419177114;
	
		case 45:
			return 1704297235;
	
		case 46:
			return -1139016418;
	
		case 47:
			return 897705377;
	
		case 48:
			return 17961769;
	
		case 49:
			return 205582207;
	
		case 50:
			return 900740963;
	
		case 51:
			return -1369589344;
	
		case 52:
			return -1695823795;
	
		case 53:
			return -41453074;
	
		case 54:
			return 539767227;
	
		case 55:
			return 1210490314;
	
		case 56:
			return -399684751;
	
		case 57:
			return 2138893455;
	
		case 58:
			return -1617010487;
	
		case 59:
			return -832377028;
	
		case 60:
			return -428040245;
	
		case 61:
			return 1279288897;
	
		case 62:
			return -594897905;
	
		case 63:
			return -1360459240;
	
		case 64:
			return 1838428396;
	
		case 65:
			return -1467846997;
	
		case 66:
			return -490610263;
	
		case 67:
			return -1885413079;
	
		case 68:
			return 708884155;
	
		case 69:
			return joaat("BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS") /* collision: BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS */;
	
		case 70:
			return -1912136700;
	
		case 71:
			return -1268031552;
	
		case 72:
			return 1177953227;
	
		case 73:
			return 2130805296;
	
		case 74:
			return 38093490;
	
		case 75:
			return -269153218;
	
		case 76:
			return -1995068011;
	
		case 77:
			return -164284834;
	
		case 78:
			return 1446463345;
	
		case 79:
			return 1501315823;
	
		case 80:
			return -750379482;
	
		case 81:
			return -929560937;
	
		case 82:
			return 608323241;
	
		case 83:
			return 1030796013;
	
		case 84:
			return 1915057434;
	
		case 85:
			return -1582276476;
	
		case 86:
			return 692059311;
	
		case 87:
			return 2062839241;
	
		case 88:
			return -1884531872;
	
		case 89:
			return -866434534;
	
		case 90:
			return -1252192421;
	
		case 91:
			return 1243288963;
	
		case 92:
			return -1953772189;
	
		case 93:
			return 754411745;
	
		case 94:
			return 545309006;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_250(int iParam0) // Position - 0xBD3B Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_251(int iParam0) // Position - 0xBD4E Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

struct<4> func_252(BOOL bParam0) // Position - 0xBD78 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_133(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_132(271701509, func_130(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_132(271701509, func_130(bParam0), 12999093, false);
}

BOOL func_253(Hash hParam0, Hash hParam1) // Position - 0xBDDC Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_191(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_254(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0xBE3B Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_133(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

