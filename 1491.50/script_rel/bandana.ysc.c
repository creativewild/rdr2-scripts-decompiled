#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x7CD1F6EB ^0x896A1083
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
		func_1(&uLocal_0, 10);
	else
		func_1(&uLocal_0, 0);

	uLocal_0.f_1 = uScriptParam_0.f_2;
	uLocal_0.f_6 = uScriptParam_0.f_4;
	uLocal_0.f_3 = uScriptParam_0;
	uLocal_0.f_4 = uScriptParam_0.f_3;

	while (func_2(&uLocal_0))
	{
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0, int iParam1) // Position - 0x57 Hash - 0x4C241C05 ^0x5F470F47
{
	*uParam0 = iParam1;
	uParam0->f_5 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_2(var uParam0) // Position - 0x6C Hash - 0x21155057 ^0x92667915
{
	func_3(uParam0);

	switch (*uParam0)
	{
		case 0:
			func_4(uParam0);
			break;
	
		case 1:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			func_6(uParam0);
			break;
	
		case 2:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				if (func_10(uParam0->f_1) == 81053684)
					func_11(uParam0->f_3, uParam0->f_1);
				else
					func_12(uParam0->f_3, uParam0->f_1);
			
				func_1(uParam0, 9);
			}
			break;
	
		case 3:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				if (func_10(uParam0->f_1) == 81053684)
					func_13(uParam0->f_3, uParam0->f_1);
				else
					func_12(uParam0->f_3, uParam0->f_1);
			
				func_1(uParam0, 9);
			}
			break;
	
		case 4:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 37, true);
		
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				func_7(uParam0->f_3);
				func_1(uParam0, 9);
			}
			break;
	
		case 5:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 37, true);
		
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				func_8(uParam0->f_3);
				func_1(uParam0, 9);
			}
			break;
	
		case 6:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 37, true);
		
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				func_9(uParam0->f_3, uParam0->f_1, &(uParam0->f_6));
				func_1(uParam0, 9);
			}
			break;
	
		case 7:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
			{
				func_9(uParam0->f_3, uParam0->f_2, &(uParam0->f_6));
				uParam0->f_5 = func_14();
				func_1(uParam0, 8);
			}
			break;
	
		case 8:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
				break;
			}
		
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(uParam0->f_3) && !uParam0->f_4)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 108107462))
					break;
			
				break;
			}
		
			if (func_15())
				break;
		
			if (func_16())
			{
				func_17();
				break;
			}
		
			if (Global_35 == uParam0->f_3)
				Global_1946054.f_2793 = 0;
		
			func_18(uParam0->f_1, 0);
			func_1(uParam0, 9);
			break;
	
		case 9:
			if (Global_35 == uParam0->f_3)
				Global_1946054.f_2793 = 0;
		
			func_1(uParam0, 10);
			break;
	
		case 10:
			return false;
	}

	return true;
}

void func_3(var uParam0) // Position - 0x3BE Hash - 0x3F5D430D ^0x373178E
{
	if (func_19(uParam0) == 10)
		return;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (Global_35 == uParam0->f_3)
		{
			uParam0->f_4 = 1;
			return;
		}
		else
		{
			uParam0->f_4 = 1;
			return;
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_1(uParam0, 10);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (Global_35 == uParam0->f_3)
		{
			func_1(uParam0, 9);
			return;
		}
		else
		{
			func_1(uParam0, 10);
			return;
		}
	}

	return;
}

void func_4(var uParam0) // Position - 0x43D Hash - 0x64D5359 ^0xF697D81A
{
	if (PED::IS_PED_A_PLAYER(uParam0->f_3))
	{
		if (Global_35 == uParam0->f_3)
		{
			if (Global_1946054.f_2793)
			{
				func_1(uParam0, 10);
			}
			else
			{
				Global_1946054.f_2793 = 1;
				func_1(uParam0, 1);
			}
		}
		else
		{
			func_1(uParam0, 1);
		}
	}
	else
	{
		func_1(uParam0, 10);
	}

	return;
}

BOOL func_5(var uParam0, int iParam1) // Position - 0x493 Hash - 0x276A6866 ^0x3B5EFCFF
{
	if (MISC::ABSI(MISC::GET_GAME_TIMER() - uParam0) >= iParam1)
		return true;

	return false;
}

void func_6(var uParam0) // Position - 0x4B3 Hash - 0x396FA599 ^0xA607C76
{
	var unk;
	var unk2;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	BOOL flag3;
	int num;

	if (!func_20(uParam0->f_1))
	{
		func_1(uParam0, 10);
		return;
	}

	flag = false;
	flag2 = true;

	if (func_21(&unk))
	{
		if (uParam0->f_1 == unk)
		{
			flag = true;
			flag2 = true;
		}
		else
		{
			uParam0->f_2 = unk;
			flag2 = false;
		}
	}

	hash = func_10(uParam0->f_1);
	flag3 = func_22(&unk2);

	if (flag2)
	{
		num = func_23(uParam0->f_1);
	
		if (num != -358215195 && func_24(uParam0->f_6, 1))
		{
			func_1(uParam0, 6);
		}
		else if (flag)
		{
			if (flag3)
				if (hash == 81053684)
					func_1(uParam0, 4);
				else
					func_1(uParam0, 6);
			else
				func_1(uParam0, 5);
		}
		else if (hash == 81053684 && func_24(uParam0->f_6, 2))
		{
			func_1(uParam0, 2);
			func_25(&(uParam0->f_6), 2);
		}
		else
		{
			func_1(uParam0, 3);
		}
	}
	else
	{
		func_1(uParam0, 7);
	}

	return;
}

void func_7(Ped pedParam0) // Position - 0x5AF Hash - 0xACD5BD82 ^0x1BD3368E
{
	Hash hash;

	if (!func_22(&hash))
		return;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	PED::_0xC494C76A34266E82(pedParam0, 13);
	func_26(hash, 2);
	func_27(26, 0, 0, 0, false);
	return;
}

void func_8(Ped pedParam0) // Position - 0x5E5 Hash - 0xB141F2CB ^0xC9E3FAD0
{
	Hash hash;
	var unk;

	if (!func_21(&hash))
		return;

	if (func_22(&unk))
		return;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	PED::_0xC494C76A34266E82(pedParam0, 0);

	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), pedParam0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, false, false, -1, -1) > 0)
	{
	}

	func_26(hash, 1);
	func_27(26, 0, 0, 0, false);
	return;
}

int func_9(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x65A Hash - 0xDD32467D ^0xC2125222
{
	if (!func_20(hParam1))
		return 0;

	if (!func_28(hParam1))
		return 0;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	PED::_0xC494C76A34266E82(pedParam0, 13);
	func_25(uParam2, 1);
	func_26(hParam1, 8);
	func_27(26, 0, 0, 0, false);
	return 1;
}

Hash func_10(Hash hParam0) // Position - 0x6A8 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_29(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

void func_11(Ped pedParam0, Hash hParam1) // Position - 0x6D3 Hash - 0x9D5BBC91 ^0xB1EC114D
{
	if (func_10(hParam1) != 81053684)
		return;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	func_26(hParam1, 2);
	func_27(26, 0, 0, 0, false);
	return;
}

void func_12(Ped pedParam0, Hash hParam1) // Position - 0x705 Hash - 0xFBD9516B ^0x30018D27
{
	if (func_10(hParam1) != -525676072)
		return;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	PED::_0xC494C76A34266E82(pedParam0, 0);

	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), pedParam0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, false, false, -1, -1) > 0)
	{
	}

	func_26(hParam1, 1);
	func_27(26, 0, 0, 0, false);
	return;
}

void func_13(Ped pedParam0, Hash hParam1) // Position - 0x772 Hash - 0xFBD9516B ^0x6E2A8030
{
	if (func_10(hParam1) != 81053684)
		return;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
	PED::_0xC494C76A34266E82(pedParam0, 0);

	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), pedParam0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, false, false, -1, -1) > 0)
	{
	}

	func_26(hParam1, 1);
	func_27(26, 0, 0, 0, false);
	return;
}

int func_14() // Position - 0x7DF Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_15() // Position - 0x7FD Hash - 0xFF29F962 ^0xFF29F962
{
	int num;

	num = Global_1946054.f_529[9];
	num = num + Global_1946054.f_529[4];
	num = num + Global_1946054.f_529[10];
	num = num + Global_1946054.f_529[1];
	num = num + Global_1946054.f_529[2];
	num = num + Global_1946054.f_529[6];
	num = num + Global_1946054.f_529[29];
	num = num + Global_1946054.f_529[26];
	num = num + Global_1946054.f_529[18];
	num = num + Global_1946054.f_529[19];
	return num > 0;
}

BOOL func_16() // Position - 0x8A2 Hash - 0xA37B0655 ^0xFE995B74
{
	int num;

	num = 0;

	if (func_30(81053684, &num))
		return true;

	if (func_30(-525676072, &num))
		return true;

	return false;
}

void func_17() // Position - 0x8D2 Hash - 0x1248B225 ^0x1248B225
{
	if (!func_16())
		return;

	func_31();
	return;
}

int func_18(Hash hParam0, int iParam1) // Position - 0x8E9 Hash - 0x4FF8311F ^0x88E4CE75
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_28(hParam0);

	if (func_32(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_22(&hash))
			if (flag)
				interactionAnimHash = func_33();
			else
				interactionAnimHash = func_34();
		else if (func_24(iParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_35();
		else
			interactionAnimHash = func_36();
	else if (func_21(&hash))
		if (func_32(hash, -1303648999))
			interactionAnimHash = func_33();
		else
			interactionAnimHash = func_34();
	else if (flag)
		interactionAnimHash = func_35();
	else
		interactionAnimHash = func_36();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

int func_19(var uParam0) // Position - 0x9BC Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

BOOL func_20(Hash hParam0) // Position - 0x9C7 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_37(hParam0);
}

BOOL func_21(var uParam0) // Position - 0x9D5 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_30(81053684, uParam0))
		return true;

	if (func_30(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_22(var uParam0) // Position - 0xA02 Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_38(81053684))
		if (func_21(uParam0))
			return 1;
	else if (func_30(-525676072, uParam0))
		if (func_21(uParam0))
			return 1;

	return 0;
}

int func_23(Hash hParam0) // Position - 0xA47 Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_39(hParam0, true, false) };
	return func_40(unk.f_4);
}

BOOL func_24(int iParam0, int iParam1) // Position - 0xA63 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_25(var uParam0, int iParam1) // Position - 0xA72 Hash - 0xF55E891F ^0xF55E891F
{
	func_41(uParam0, iParam1);
	return;
}

void func_26(Hash hParam0, int iParam1) // Position - 0xA82 Hash - 0xBA32D184 ^0x5EA8C439
{
	int num;
	int num2;
	int num3;
	var unk;
	Hash hash;

	num = func_23(hParam0);
	num2 = func_42(num, 1);

	if (num2 == 39)
		return;

	if (func_43(hParam0) && func_44(hParam0))
		iParam1 = iParam1 | 64;

	if (num == 1108822547 && func_45(32768) || Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && hParam0 != Global_1946054.f_1497.f_1[num2 /*3*/])
	{
		if (func_43(Global_1946054.f_1497.f_1[num2 /*3*/]) && func_44(Global_1946054.f_1497.f_1[num2 /*3*/]))
			iParam1 = iParam1 | 32;
	
		if (Global_1946054.f_57[num2 /*11*/].f_1 > 1)
			iParam1 = iParam1 | 16;
	
		num3 = 0;
	
		switch (func_10(hParam0))
		{
			case -525676072:
				if (func_45(32768))
					func_48(func_47(num2, 1));
			
				if (func_45(32768) || func_30(-2061583405, &hash) && !func_44(hash))
					PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			
				if (func_30(81053684, &hash))
				{
					num3 = func_42(func_46(81053684), 1);
				
					if (num3 == 39)
						break;
				
					Global_1946054.f_2377[num3 /*2*/] = Global_1946054.f_57[num3 /*11*/];
				}
				break;
		
			case 81053684:
				if (func_30(-525676072, &unk))
				{
					num3 = func_42(func_46(-525676072), 1);
				
					if (num3 == 39)
						break;
				
					Global_1946054.f_2377[num3 /*2*/] = Global_1946054.f_57[num3 /*11*/];
				}
				break;
		}
	}

	Global_1946054.f_2377[num2 /*2*/] = hParam0;
	func_49(num, iParam1, 6);
	return;
}

void func_27(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0xC4D Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_50(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = iParam3;
	func_51(num);
	return;
}

BOOL func_28(Hash hParam0) // Position - 0xC7F Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return false;

	hash = 0;

	if (func_21(&hash))
		if (hParam0 == hash)
			return true;

	return false;
}

BOOL func_29(Hash hParam0, int iParam1) // Position - 0xCA9 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_30(Hash hParam0, var uParam1) // Position - 0xCC3 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_42(func_46(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_10(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

void func_31() // Position - 0xD3A Hash - 0x80A76984 ^0x7CCBA551
{
	BOOL flag;
	Hash hash;

	flag = false;

	if (func_30(81053684, &hash))
	{
		if (func_37(hash))
		{
			func_52(81053684);
			flag = true;
		}
	}

	if (func_30(-525676072, &hash))
	{
		if (func_37(hash))
		{
			func_52(-525676072);
			flag = true;
		}
	}

	if (flag)
		PED::_0xC494C76A34266E82(Global_35, 13);

	return;
}

BOOL func_32(Hash hParam0, Hash hParam1) // Position - 0xD99 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_33() // Position - 0xDCA Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_53())
	{
		case 0:
			num = joaat("mask_off_left_hand");
			break;
	
		case 1:
			num = joaat("mask_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_34() // Position - 0xE21 Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_53())
	{
		case 0:
			num = joaat("bandana_off_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_35() // Position - 0xE78 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_53())
	{
		case 0:
			num = joaat("mask_on_left_hand");
			break;
	
		case 1:
			num = joaat("mask_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_on_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_36() // Position - 0xECF Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_53())
	{
		case 0:
			num = joaat("bandana_on_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_on_left_hand_rifle");
			break;
	}

	return num;
}

BOOL func_37(Hash hParam0) // Position - 0xF26 Hash - 0x76026CA6 ^0xF319C9CA
{
	Hash num;

	num = func_10(hParam0);

	if (num == 81053684 || num == -525676072)
		return 1;

	return 0;
}

Hash func_38(Hash hParam0) // Position - 0xF54 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_42(func_46(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

struct<5> func_39(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF83 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_54(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_55(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_62(hParam0, -1823706425))
			{
				unk = { func_56(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_62(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_56(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_61(bParam1) };
		
			switch (func_10(hParam0))
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
				unk = { func_56(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_57(bParam1) };
		
			if (bParam2 && func_58(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_59(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_59(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_60(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_63(unk, &unk28, bParam1, false))
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

int func_40(var uParam0) // Position - 0x1240 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_47(i, 1);
	}

	return -358215195;
}

void func_41(var uParam0, int iParam1) // Position - 0x127B Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_42(int iParam0, int iParam1) // Position - 0x1290 Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_43(Hash hParam0) // Position - 0x1461 Hash - 0x8EDDF1C2 ^0x8EDDF1C2
{
	switch (func_10(hParam0))
	{
		case -2061583405:
			return true;
	
		case -1719060085:
			return true;
	
		case -999503751:
			return true;
	
		case -525676072:
			return true;
	
		case -413129408:
			return true;
	
		case 81053684:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_44(Hash hParam0) // Position - 0x14B2 Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_64(hParam0, &unk);
}

BOOL func_45(BOOL bParam0) // Position - 0x14C2 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

int func_46(Hash hParam0) // Position - 0x14D3 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_40(outSlotId);
}

int func_47(int iParam0, int iParam1) // Position - 0x14F6 Hash - 0xE1D12727 ^0xA46110B3
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

void func_48(int iParam0) // Position - 0x1745 Hash - 0x65A082AE ^0x65A082AE
{
	func_65(iParam0, 8, 6);
	return;
}

void func_49(int iParam0, int iParam1, int iParam2) // Position - 0x1756 Hash - 0x7CD806BE ^0xAA6614A5
{
	Global_1946054.f_2377[func_42(iParam0, 1) /*2*/].f_1 = Global_1946054.f_2377[func_42(iParam0, 1) /*2*/].f_1 || iParam1;
	return;
}

void func_50(BOOL bParam0) // Position - 0x1785 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_51(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1798 Hash - 0x21CB5355 ^0x21CB5355
{
	int i;
	int num;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
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
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946054.f_850 >= 25)
				return;
		
			if (func_66(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_67(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_50(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_66(iParam0))
				return;
		
			func_67(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_50(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_68(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_52(Hash hParam0) // Position - 0x19A4 Hash - 0xC0AC03A1 ^0x69653DC
{
	int num;

	num = func_42(func_46(hParam0), 1);

	if (num == 39)
		return;

	func_26(Global_1946054.f_57[num /*11*/], 8);
	func_27(26, 0, 0, 0, false);
	return;
}

int func_53() // Position - 0x19DD Hash - 0x6AC5469B ^0xEA730EC
{
	Hash weaponHash;
	int weaponHash2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		return 1;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash2, true, 1, false);

	if (weaponHash2 == joaat("WEAPON_UNARMED"))
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_69(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_69(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

struct<4> func_54(BOOL bParam0) // Position - 0x1AD3 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_56(joaat("character"), func_70(), joaat("SLOTID_NONE"), bParam0);
}

int func_55(Hash hParam0) // Position - 0x1AEF Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_29(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_56(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1B1A Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_29(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_71(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_57(BOOL bParam0) // Position - 0x1B4B Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_71(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_56(923904168, func_54(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_56(923904168, func_54(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_56(923904168, func_54(bParam0), -740156546, false);
}

BOOL func_58(Hash hParam0, BOOL bParam1) // Position - 0x1BE0 Hash - 0x62864AB ^0xBC339691
{
	if (func_10(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_72(24);
		else
			return true;

	return false;
}

BOOL func_59(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x1C19 Hash - 0x4285A587 ^0x4285A587
{
	return func_73(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_60(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1C31 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_74(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_61(BOOL bParam0) // Position - 0x1C52 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_71(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_56(271701509, func_54(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_56(271701509, func_54(bParam0), 12999093, false);
}

BOOL func_62(Hash hParam0, Hash hParam1) // Position - 0x1CB6 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_10(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_63(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1D15 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_71(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

int func_64(Hash hParam0, var uParam1) // Position - 0x1D45 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return 1;
	
		*uParam1 = *uParam1 + 1;
	}

	return 0;
}

void func_65(int iParam0, int iParam1, int iParam2) // Position - 0x1D85 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_42(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_42(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_42(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

BOOL func_66(int iParam0) // Position - 0x1DC4 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_67(int iParam0) // Position - 0x1DD9 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_68(int iParam0, var uParam1, var uParam2) // Position - 0x1DF9 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = uParam2;
	num = iParam0;
	num.f_2 = uParam1;
	func_75(num);
	return;
}

BOOL func_69(Hash hParam0) // Position - 0x1E19 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

struct<4> func_70() // Position - 0x1E27 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_71(BOOL bParam0) // Position - 0x1E33 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_76() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_72(int iParam0) // Position - 0x1E74 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_77(iParam0))
		return false;

	return func_78(iParam0);
}

int func_73(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1E90 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_29(hParam0, 0))
		return 0;

	guid = { func_56(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_71(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_74(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x1ED8 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_71(false);
	*panParam1 = { func_56(hParam0, func_57(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

void func_75(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1F1D Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_66(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_66(20))
				return;
		}
	}

	func_67(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_50(8);
	return;
}

BOOL func_76() // Position - 0x2021 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_77(int iParam0) // Position - 0x202F Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_78(int iParam0) // Position - 0x2042 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

