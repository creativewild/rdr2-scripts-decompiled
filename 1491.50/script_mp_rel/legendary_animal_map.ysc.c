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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 28;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x72E14323 ^0xD06A97F7
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1(&uLocal_19);

	while (!flag)
	{
		if (func_2(&uLocal_19))
			flag = true;
	
		switch (func_3(&uLocal_19))
		{
			case 0:
				if (func_4(&uLocal_19))
					func_5(&uLocal_19, 1);
				else
					flag = true;
				break;
		
			case 1:
				switch (func_6(&uLocal_19))
				{
					case 0:
						if (!func_7(&(uLocal_19.f_1)))
							func_8(&(uLocal_19.f_1), false);
					
						if (func_9(&(uLocal_19.f_1)) >= 10f)
							flag = true;
						break;
				
					case 1:
						if (func_7(&(uLocal_19.f_1)))
							func_10(&(uLocal_19.f_1));
					
						func_5(&uLocal_19, 2);
						break;
				
					case 2:
						flag = true;
						break;
				}
				break;
		
			case 2:
				if (func_11(&uLocal_19))
					func_5(&uLocal_19, 3);
				break;
		
			case 3:
				if (!func_12(&uLocal_19))
					flag = true;
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_19);
	return;
}

void func_1(var uParam0) // Position - 0x111 Hash - 0x959FB93E ^0xEB42C37
{
	func_13(&(uParam0->f_4));

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_9))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_9);

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

BOOL func_2(var uParam0) // Position - 0x142 Hash - 0x6E95BD9F ^0x5CD35AC6
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return true;

	if (func_3(uParam0) >= 3)
		if (!TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID()))
			return true;

	return false;
}

int func_3(var uParam0) // Position - 0x170 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

BOOL func_4(var uParam0) // Position - 0x17B Hash - 0x20816063 ^0x2FF487AC
{
	if (!func_14(&(uParam0->f_4), -980176693, 978408792, 978408792))
		return false;

	return true;
}

void func_5(var uParam0, int iParam1) // Position - 0x1A3 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

int func_6(var uParam0) // Position - 0x1B0 Hash - 0xECF9CF39 ^0xDABA2E4
{
	switch (func_15(&(uParam0->f_4)))
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	}

	return 1;
}

BOOL func_7(var uParam0) // Position - 0x1E1 Hash - 0x5001E582 ^0x5001E582
{
	return func_16(*uParam0, 1);
}

void func_8(var uParam0, BOOL bParam1) // Position - 0x1F1 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_7(uParam0))
		func_17(uParam0);

	return;
}

float func_9(var uParam0) // Position - 0x211 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_7(uParam0))
		return 0f;

	if (func_18(uParam0))
		return uParam0->f_2;

	return func_19() - uParam0->f_1;
}

void func_10(var uParam0) // Position - 0x243 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_11(var uParam0) // Position - 0x259 Hash - 0x98A6C570 ^0xF255447
{
	var unk;
	var unk2;
	int i;

	if (!func_20(&(uParam0->f_4)))
		return false;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_9))
	{
		uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "DynamicAnimalMap");
	
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_9))
			return false;
	}

	for (i = 0; i < 28; i = i + 1)
	{
		func_21(i, &unk, &unk2);
		uParam0->f_10[i /*3*/] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_9, func_23(func_22(i)));
		uParam0->f_10[i /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_10[i /*3*/], func_23(func_24(i)), func_25(&unk, unk2));
		uParam0->f_10[i /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_10[i /*3*/], func_23(func_26(i)), UNLOCK::UNLOCK_IS_UNLOCKED(func_27(&unk, unk2)));
	}

	TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 17745825, 889797228, 1, 0, -1082130432);
	return true;
}

BOOL func_12(var uParam0) // Position - 0x33E Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_13(var uParam0) // Position - 0x347 Hash - 0xE6D8B8FE ^0x9105A57C
{
	UISTATEMACHINE::UI_STATE_MACHINE_DESTROY_AND_CLEAR(&(uParam0->f_3));

	if (uParam0->f_4 != 0)
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}

	return;
}

BOOL func_14(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x36F Hash - 0xB05ECC94 ^0xDA5EE4F7
{
	if (iParam1 == 0)
		return false;

	if (iParam2 == 0)
		return false;

	if (iParam3 == 0)
		return false;

	uParam0->f_1 = iParam1;
	uParam0->f_2 = iParam2;
	uParam0->f_3 = iParam3;
	*uParam0 = 1;
	return true;
}

int func_15(var uParam0) // Position - 0x3AC Hash - 0xBD7CC78A ^0x47767110
{
	if (!*uParam0)
		return 2;

	if (uParam0->f_4 == 0)
	{
		uParam0->f_4 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(uParam0->f_1);
	
		if (uParam0->f_4 == 0)
			return 2;
	}

	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_4))
		return 0;

	return 1;
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x3F0 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_17(var uParam0) // Position - 0x3FF Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_28(uParam0, 0f);
	return;
}

BOOL func_18(var uParam0) // Position - 0x40E Hash - 0x39705408 ^0x39705408
{
	return func_16(*uParam0, 2);
}

float func_19() // Position - 0x41E Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_20(var uParam0) // Position - 0x450 Hash - 0x7BC47813 ^0x24266FB2
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_4, uParam0->f_2))
	{
	}
	else
	{
		return false;
	}

	if (UISTATEMACHINE::UI_STATE_MACHINE_CREATE(uParam0->f_3, uParam0->f_4))
	{
	}
	else
	{
		return false;
	}

	return true;
}

void func_21(int iParam0, var uParam1, var uParam2) // Position - 0x485 Hash - 0xC2D2DA1A ^0xC2D2DA1A
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
	
		case 1:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
	
		case 2:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
	
		case 3:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
	
		case 4:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
	
		case 5:
			*uParam1 = 2;
			*uParam2 = 1;
			break;
	
		case 6:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
	
		case 7:
			*uParam1 = 5;
			*uParam2 = 0;
			break;
	
		case 8:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
	
		case 9:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 10:
			*uParam1 = 13;
			*uParam2 = 1;
			break;
	
		case 11:
			*uParam1 = 13;
			*uParam2 = 0;
			break;
	
		case 12:
			*uParam1 = 8;
			*uParam2 = 1;
			break;
	
		case 13:
			*uParam1 = 3;
			*uParam2 = 1;
			break;
	
		case 14:
			*uParam1 = 7;
			*uParam2 = 0;
			break;
	
		case 15:
			*uParam1 = 6;
			*uParam2 = 1;
			break;
	
		case 16:
			*uParam1 = 12;
			*uParam2 = 1;
			break;
	
		case 17:
			*uParam1 = 7;
			*uParam2 = 1;
			break;
	
		case 18:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
	
		case 19:
			*uParam1 = 6;
			*uParam2 = 0;
			break;
	
		case 20:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
	
		case 21:
			*uParam1 = 5;
			*uParam2 = 1;
			break;
	
		case 22:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
	
		case 23:
			*uParam1 = 3;
			*uParam2 = 0;
			break;
	
		case 24:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
	
		case 25:
			*uParam1 = 4;
			*uParam2 = 1;
			break;
	
		case 26:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
	
		case 27:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
	}

	return;
}

struct<16> func_22(int iParam0) // Position - 0x67D Hash - 0xB599CC3B ^0xB599CC3B
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "Zone", 128);
	TEXT_LABEL_APPEND_INT(&unk, iParam0 + 1, 128);
	return unk;
}

const char* func_23(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x699 Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

struct<16> func_24(int iParam0) // Position - 0x6AD Hash - 0xA9A782CC ^0xA9A782CC
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "animalType", 128);
	return unk;
}

Hash func_25(var uParam0, int iParam1) // Position - 0x6C1 Hash - 0x4301E198 ^0xFE25D680
{
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -317373141;
			
				case 1:
					return -1632720801;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2046336256;
			
				case 1:
					return 2085003676;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -110898462;
			
				case 1:
					return 56059597;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1520433456;
			
				case 1:
					return 751508871;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1047689404;
			
				case 1:
					return -768169834;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return -617397357;
			
				case 1:
					return 413253235;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return -888046168;
			
				case 1:
					return 1499142717;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
					return 159901881;
			
				case 1:
					return -4270809;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 417928156;
			
				case 1:
					return -1753771781;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1598011864;
			
				case 1:
					return -1165067836;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2103187059;
			
				case 1:
					return 1950895318;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					return -1979107230;
			
				case 1:
					return 2073533311;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return -708560898;
			
				case 1:
					return -1077605376;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1005924273;
			
				case 1:
					return -1245170742;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

struct<16> func_26(int iParam0) // Position - 0x949 Hash - 0x150C20CC ^0x150C20CC
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "isVisible", 128);
	return unk;
}

Hash func_27(var uParam0, int iParam1) // Position - 0x95D Hash - 0x5D507F15 ^0x3A5F5AB4
{
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1089915990;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -773408572;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -2082859740;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -889608768;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -909138717;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1835385888;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -771537204;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -366807494;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1843292837;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -804810882;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 189635081;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -2001092856;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1371968565;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1114581963;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

void func_28(var uParam0, float fParam1) // Position - 0xB75 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_19() - fParam1;
	func_29(uParam0, 1);
	func_30(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_29(var uParam0, int iParam1) // Position - 0xB9B Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_30(var uParam0, int iParam1) // Position - 0xBAC Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

