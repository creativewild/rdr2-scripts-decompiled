#region Local Var
	BOOL bLocal_0 = 0;
	Hash hLocal_1 = 0;
	Any anLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	Ped pedLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 3;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 3;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	BOOL bLocal_44 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x7F5EDA12 ^0x5DC82F6A
{
	bLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_42 = -1;
	iLocal_43 = -1;
	anLocal_2 = anScriptParam_0;
	uLocal_3 = anScriptParam_0.f_1;
	uLocal_4 = anScriptParam_0.f_2;
	func_1();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2();

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}

	func_2();
	return;
}

void func_1() // Position - 0x62 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x6A Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_2);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x8F Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_1 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_1) == 0)
			return bLocal_0;
		else
			return true;

	return bLocal_0;
}

void func_4() // Position - 0xB8 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xC0 Hash - 0x3D22DF46 ^0xED7FF9EC
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_ERRORS); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_ERRORS, i))
		{
			case -843555838:
				func_11(i);
				break;
		
			case -456923784:
				func_10(i);
				break;
		
			case -45008988:
				func_9(i);
				break;
		}
	}

	return;
}

void func_6() // Position - 0x118 Hash - 0x29AA5AE4 ^0x84600D96
{
	int num;
	var statId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_19))
		return;

	if (PED::IS_PED_INJURED(pedLocal_19))
	{
		bLocal_0 = false;
		return;
	}

	if (!func_12(iLocal_43))
	{
		iLocal_43 = func_13();
	
		if (iLocal_43 == -1)
			iLocal_43 = func_14();
	}

	if (!func_15(iLocal_42))
		iLocal_42 = func_17(func_16(), iLocal_43);

	switch (func_18())
	{
		case 0:
			if (func_19())
			{
				pedLocal_19.f_4 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedLocal_19);
				pedLocal_19.f_3 = func_20(pedLocal_19.f_4);
				pedLocal_19.f_2 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(pedLocal_19, false);
				pedLocal_19.f_1 = TASK::_GET_SCENARIO_POINT_ENTITY(pedLocal_19.f_2);
			
				if (func_12(iLocal_43))
					pedLocal_19.f_17 = func_21(iLocal_42);
				else
					pedLocal_19.f_17 = 0;
			
				func_22();
				func_23();
			}
		
			func_24(1);
			break;
	
		case 1:
			if (func_19())
			{
				func_25();
				func_23();
			}
		
			func_24(2);
			break;
	
		case 2:
			if (func_19())
				func_23();
		
			if (func_26())
				func_24(3);
			break;
	
		case 3:
			if (func_19())
			{
				func_27();
				func_23();
			}
		
			func_24(4);
			break;
	
		case 4:
			if (func_19())
				func_23();
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_19, -834364808) && !pedLocal_19.f_13)
			{
				pedLocal_19.f_13 = 1;
				func_28(2, 0, 0, 0, 0, false, 1065353216, false);
			
				if (pedLocal_19 == Global_35)
				{
					if (!bLocal_44)
					{
						if (func_15(iLocal_42))
						{
							func_30(func_29(iLocal_42, 1), false, 1065353216, 1, 0, 0, 1, 752097756);
							bLocal_44 = true;
						}
					}
				}
			
				func_32(func_31(joaat("CASH_REGISTERS_ROBBED")), 1);
			
				if (Global_1935630.f_13)
				{
					statId = { func_33(joaat("STORE_ROBBERY_WITNESSED"), 0) };
					STATS::_STAT_ID_INCREMENT_INT(&statId, 1);
				}
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_19, 15695821) && !pedLocal_19.f_14)
			{
				pedLocal_19.f_14 = 1;
			
				if (pedLocal_19 == Global_35)
				{
					if (!bLocal_44)
					{
						if (func_15(iLocal_42))
						{
							func_30(func_29(iLocal_42, 1), false, 1065353216, 1, 0, 0, 1, 752097756);
							bLocal_44 = true;
						}
					}
				}
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_19, joaat("objectexchange")) && !pedLocal_19.f_15)
			{
				if (pedLocal_19.f_3 == 2)
				{
					pedLocal_19.f_15 = 1;
				}
				else if (pedLocal_19.f_3 == 3)
				{
					pedLocal_19.f_16 = pedLocal_19.f_16 + 1;
					num = func_34(pedLocal_19.f_3);
				
					if (pedLocal_19 == Global_35)
					{
						if (!bLocal_44)
						{
							if (func_15(iLocal_42))
							{
								func_30(func_29(iLocal_42, 1), false, 1065353216, 1, 0, 0, 1, 752097756);
								bLocal_44 = true;
							}
						}
					}
				
					if (pedLocal_19.f_16 >= num)
						pedLocal_19.f_15 = 1;
				}
			}
		
			if (!PED::IS_PED_USING_ANY_SCENARIO(pedLocal_19))
			{
				if (!bLocal_44)
				{
					if (func_15(iLocal_42))
						func_30(func_29(iLocal_42, 1), false, 1065353216, 1, 0, 0, 1, 752097756);
				
					bLocal_44 = true;
				}
			
				func_35(iLocal_42);
				TASK::CLEAR_PED_TASKS(pedLocal_19, true, false);
				EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_SHOP_ROBBED"), Global_36, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, -1, -1);
				bLocal_0 = false;
			}
			break;
	}

	return;
}

void func_7() // Position - 0x41F Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_8() // Position - 0x427 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x433 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_36(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x45B Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_37(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x483 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_38(&eventData);
	}

	return;
}

BOOL func_12(int iParam0) // Position - 0x4AB Hash - 0x895544C2 ^0x895544C2
{
	return iParam0 > -1 && iParam0 < 35;
}

int func_13() // Position - 0x4C1 Hash - 0xC0E4D78F ^0xC0E4D78F
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (func_39(i))
			return i;
	}

	return -1;
}

int func_14() // Position - 0x4EB Hash - 0x90958908 ^0xC624EF2E
{
	int i;

	for (i = 0; i <= 25; i = i + 1)
	{
		switch (i)
		{
			case 0:
			case 3:
			case 4:
			case 6:
			case 7:
				if (func_40(Global_1914319.f_3[i /*446*/].f_25, Global_36))
					return i;
				break;
		}
	}

	return -1;
}

BOOL func_15(int iParam0) // Position - 0x54E Hash - 0x91023C9F ^0x91023C9F
{
	return iParam0 > -1 && iParam0 < 153;
}

eStackSize func_16() // Position - 0x564 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

int func_17(eStackSize essParam0, int iParam1) // Position - 0x572 Hash - 0x8A1A59F3 ^0x8A1A59F3
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

int func_18() // Position - 0xD86 Hash - 0x345AD124 ^0x4D6C51A5
{
	return pedLocal_19.f_19;
}

BOOL func_19() // Position - 0xD92 Hash - 0x345AD124 ^0xE06EA4BF
{
	return pedLocal_19.f_18;
}

int func_20(int iParam0) // Position - 0xD9E Hash - 0x4090E092 ^0x4090E092
{
	switch (iParam0)
	{
		case joaat("prop_player_cash_register_lockbreak"):
			return 2;
	
		case joaat("prop_player_cash_register_open"):
			return 0;
	
		case joaat("PROP_PLAYER_CASH_REGISTER_OPEN_GUN"):
			return 1;
	}

	return -1;
}

int func_21(int iParam0) // Position - 0xDD6 Hash - 0x1066FDE5 ^0xE4934528
{
	int num;

	if (func_41() == false)
		return 0;

	num = func_42(iParam0);

	if (num >= 25 || num <= -1)
		return 0;

	return Global_20710[num /*45*/].f_44;
}

void func_22() // Position - 0xE11 Hash - 0x2E7E62C5 ^0x8F456B39
{
	switch (pedLocal_19.f_3)
	{
		case 0:
		case 1:
			pedLocal_19.f_5[0] = joaat("p_cs_billsingle01bx");
			break;
	
		case 2:
			pedLocal_19.f_5[0] = joaat("p_cs_billsingle01bx");
			pedLocal_19.f_5[2] = joaat("p_cs_pick01x");
			break;
	}

	return;
}

void func_23() // Position - 0xE5F Hash - 0xC4FD9D65 ^0xD36CA77E
{
	pedLocal_19.f_18 = 0;
	return;
}

void func_24(int iParam0) // Position - 0xE6C Hash - 0x7B99D1DD ^0x7C0FDA51
{
	pedLocal_19.f_19 = iParam0;
	func_43();
	return;
}

void func_25() // Position - 0xE7E Hash - 0x4DB7CC5B ^0x455C58D
{
	int i;
	Hash model;

	for (i = 0; i < pedLocal_19.f_5; i = i + 1)
	{
		model = pedLocal_19.f_5[i];
	
		if (func_44(model))
			STREAMING::REQUEST_MODEL(model, false);
	}

	return;
}

BOOL func_26() // Position - 0xEB5 Hash - 0x1F805031 ^0x20400DD3
{
	int i;
	Hash model;

	for (i = 0; i < pedLocal_19.f_5; i = i + 1)
	{
		model = pedLocal_19.f_5[i];
	
		if (func_44(model))
			if (!STREAMING::HAS_MODEL_LOADED(model))
				return false;
	}

	return true;
}

void func_27() // Position - 0xEF7 Hash - 0xF901B8FB ^0x6E1B5798
{
	switch (pedLocal_19.f_3)
	{
		case 0:
		case 1:
			uLocal_39 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_19.f_1, 0.074814f, -0.117756f, 0.059386f) };
			pedLocal_19.f_9[0] = OBJECT::CREATE_OBJECT(pedLocal_19.f_5[0], uLocal_39, true, true, false, false, true);
			TASK::_ASSOCIATE_PROP_WITH_SCENARIO(pedLocal_19.f_2, pedLocal_19.f_9[0], "OOXO", true);
			uLocal_39 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_19.f_1, -0.082664f, -0.117757f, 0.059386f) };
			pedLocal_19.f_9[1] = OBJECT::CREATE_OBJECT(pedLocal_19.f_5[0], uLocal_39, true, true, false, false, true);
			TASK::_ASSOCIATE_PROP_WITH_SCENARIO(pedLocal_19.f_2, pedLocal_19.f_9[1], "OXOO", true);
			break;
	
		case 2:
			uLocal_39 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_19.f_1, 0.074814f, -0.117756f, 0.059386f) };
			pedLocal_19.f_9[0] = OBJECT::CREATE_OBJECT(pedLocal_19.f_5[0], uLocal_39, true, true, false, false, true);
			TASK::_ASSOCIATE_PROP_WITH_SCENARIO(pedLocal_19.f_2, pedLocal_19.f_9[0], "OOXO", true);
			uLocal_39 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_19.f_1, -0.082664f, -0.117757f, 0.059386f) };
			pedLocal_19.f_9[1] = OBJECT::CREATE_OBJECT(pedLocal_19.f_5[0], uLocal_39, true, true, false, false, true);
			TASK::_ASSOCIATE_PROP_WITH_SCENARIO(pedLocal_19.f_2, pedLocal_19.f_9[1], "OXOO", true);
			uLocal_39 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_19.f_1, 0f, 0f, 0f) };
			pedLocal_19.f_9[2] = OBJECT::CREATE_OBJECT(pedLocal_19.f_5[2], uLocal_39, true, true, false, false, true);
			TASK::_ASSOCIATE_PROP_WITH_SCENARIO(pedLocal_19.f_2, pedLocal_19.f_9[2], "Pick", true);
			break;
	}

	return;
}

void func_28(int iParam0, int iParam1, int iParam2, const char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x1083 Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_41() != -1)
		return;

	if (Global_36616 && func_45(iParam1) != false)
		return;

	num = func_46(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_47(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
	}
	else
	{
		num2 = -1;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (num2 < 0)
				if (Global_1347477.f_155[i /*6*/] == 0)
					num2 = i;
		}
	
		if (num2 >= 0)
			func_48(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_47(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

int func_29(int iParam0, int iParam1) // Position - 0x1182 Hash - 0xF4DF91EF ^0xC2B92D52
{
	int num;
	int num2;
	int num3;

	if (!func_49(iParam0))
		return 200;

	num = 4 * func_50(joaat("REWARD_SHOPROB_MEDIUM"), false, -1);
	num = func_51(num, MISC::GET_RANDOM_INT_IN_RANGE(2000, 2200), MISC::GET_RANDOM_INT_IN_RANGE(2800, 3000));
	num2 = num;
	num3 = BUILTIN::FLOOR(0.25f * (float)func_21(iParam0));
	num2 = func_52(5000, num2 + num3);

	if (num2 < num)
		num2 = num;

	func_53(iParam0);
	return num2;
}

void func_30(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, int iParam6, Hash hParam7) // Position - 0x11FC Hash - 0x63AC4944 ^0x63AC4944
{
	if (!bParam1)
		func_54(iParam0, sParam4, iParam5);

	func_55(iParam0, bParam1, iParam2, iParam3, hParam7);
	return;
}

struct<2> func_31(int iParam0) // Position - 0x1222 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_32(var uParam0, var uParam1, int iParam2) // Position - 0x1232 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_33(int iParam0, int iParam1) // Position - 0x1242 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

int func_34(int iParam0) // Position - 0x1258 Hash - 0x5777432B ^0x5777432B
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			num = 2;
			break;
	
		case 1:
			num = 1;
			break;
	}

	return num;
}

void func_35(int iParam0) // Position - 0x1291 Hash - 0x71F8EE6E ^0x71F8EE6E
{
	int num;

	if (func_41() == false)
		return;

	num = func_42(iParam0);
	func_56(num);
	return;
}

void func_36(var uParam0) // Position - 0x12B2 Hash - 0x880617B1 ^0x9C6E4E0B
{
	pedLocal_19 = uParam0->f_1;
	return;
}

void func_37(var uParam0) // Position - 0x12C0 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_38(var uParam0) // Position - 0x12C8 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_39(int iParam0) // Position - 0x12D0 Hash - 0xEFF1F628 ^0xEFF1F628
{
	if (func_57())
		if (Global_1914319.f_16855 == iParam0)
			return true;

	return false;
}

BOOL func_40(Volume volParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x12F0 Hash - 0x23F7A048 ^0x52C55AC8
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return false;

	return VOLUME::IS_POINT_IN_VOLUME(volParam0, vParam1);
}

BOOL func_41() // Position - 0x1310 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

int func_42(int iParam0) // Position - 0x131E Hash - 0x1497AC6A ^0x1497AC6A
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

void func_43() // Position - 0x1772 Hash - 0xF9E49D28 ^0x1ED0FE6B
{
	pedLocal_19.f_18 = 1;
	return;
}

BOOL func_44(Hash hParam0) // Position - 0x177F Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_45(int iParam0) // Position - 0x178B Hash - 0xA05361F6 ^0xF8A0FD3E
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return 16384;
	
		case joaat("honor_event_antagonize"):
			return 65536;
	
		case joaat("honor_event_steal_wagon"):
			return 8192;
	
		case joaat("honor_event_trampled_innocent"):
			return 4096;
	
		case joaat("honor_event_kill_vermin"):
			return 64;
	
		case joaat("honor_event_kill_farm_animal"):
			return 128;
	
		case joaat("honor_event_long_absence"):
			return 4194304;
	
		case 0:
			return -1;
	
		case joaat("honor_event_wanted_in_camp"):
			return 524288;
	
		case joaat("honor_event_animal_bleedout"):
			return 32768;
	
		case joaat("honor_event_steal_mule"):
			return 2048;
	
		case joaat("honor_event_theft"):
			return 131072;
	
		case joaat("honor_event_kill_horse"):
			return 256;
	
		case joaat("honor_event_steal_donkey"):
			return 1024;
	
		case joaat("honor_event_steal_horse"):
			return 512;
	
		case joaat("honor_event_ambient_kill"):
			return 2;
	
		case joaat("honor_event_item_request"):
			return 2097152;
	
		case joaat("honor_event_ambient_ko"):
			return 4;
	
		case joaat("honor_event_intervened"):
			return 262144;
	
		case joaat("honor_event_scare"):
			return 32;
	
		case joaat("honor_event_donated_game"):
			return 1048576;
	
		case joaat("honor_event_loot_innocent"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_46(int iParam0) // Position - 0x18A1 Hash - 0xC25EDEC0 ^0x47BF4274
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return -2;
	
		case 2:
			return -5;
	
		case 3:
			return -10;
	
		case 4:
			return -20;
	
		case 5:
			return -40;
	
		case 6:
			return -160;
	
		case 7:
			return -320;
	
		case 8:
			return -480;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 5;
	
		case 13:
			return 10;
	
		case 14:
			return 20;
	
		case 15:
			return 40;
	
		case 16:
			return 160;
	
		case 17:
			return 640;
	
		case 18:
			return -640;
	
		default:
		
	}

	return 0;
}

void func_47(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1988 Hash - 0x711733F1 ^0x564936BD
{
	int num;
	int num2;
	int num3;
	int num4;
	float num5;
	int num6;
	int num7;
	char* str;
	var statId;

	num = func_58();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_59(iParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(eParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_override"))
			{
				iParam0 = DECORATOR::DECOR_GET_INT(eParam5, "honor_override") * -1;
				DECORATOR::DECOR_REMOVE(eParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_bank"))
			{
				iParam0 = iParam0 - DECORATOR::DECOR_GET_INT(eParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", 0);
			}
		}
	}

	num3 = 240;
	num4 = -240;
	num5 = 1f;

	if (func_60(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_61())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_51(Global_40.f_11095.f_35, num4, num3);
	num2 = func_58();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_62(num2);
		func_64(func_63(), false, 4000);
		func_65(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_66(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_32(func_31(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_46(14))
				{
					str = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					str = "Honor_Increase_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_68(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_68(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_32(func_31(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_46(4))
				{
					str = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					str = "Honor_Decrease_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_68(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_68(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_31(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_69(10, 1);

	return;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0x1D15 Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

BOOL func_49(int iParam0) // Position - 0x1D74 Hash - 0x12721131 ^0x12721131
{
	Hash num;

	if (!func_15(iParam0))
		return false;

	if (!func_70(Global_20710.f_1476[iParam0]))
		return true;

	num = Global_20710.f_1476[iParam0];
	func_71(&num, 0, 0, 12, 0, 0, 0, false);
	return func_72(num, true);
}

int func_50(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1DC1 Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_73(joaat("provision_trinket_elk_antler"), 1, false))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_35, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_74(hash, 0) && func_75(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2) // Position - 0x1E86 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_52(int iParam0, int iParam1) // Position - 0x1EAB Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

void func_53(int iParam0) // Position - 0x1EC1 Hash - 0x107F0910 ^0x107F0910
{
	Global_20710.f_1476[iParam0] = func_76();
	return;
}

void func_54(int iParam0, const char* sParam1, int iParam2) // Position - 0x1ED7 Hash - 0x8540B9BB ^0xE1B1A761
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_68(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_55(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x1F17 Hash - 0x9636EF60 ^0x355C8D65
{
	int num;
	int value;
	int num2;

	if (iParam0 <= 0)
		return;

	if (bParam1)
	{
		num = BUILTIN::ROUND(BUILTIN::TO_FLOAT(iParam0) * iParam2);
		value = (iParam0 - num) / iParam3;
	
		if (func_77())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_68(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_78(num);
			func_79(num, 0, 0);
		}
	
		func_68(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_32(func_31(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_56(int iParam0) // Position - 0x1FF1 Hash - 0x16641B5F ^0x449C0BF9
{
	if (iParam0 >= 25 || iParam0 <= -1)
		return;

	Global_20710[iParam0 /*45*/].f_44 = 0;
	return;
}

BOOL func_57() // Position - 0x2018 Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1914319.f_17369 || Global_1914319.f_18996.f_1;
}

int func_58() // Position - 0x2036 Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_80();

	if (num <= -320)
		return -320;

	if (num <= -280)
		return -280;

	if (num <= -240)
		return -240;

	if (num <= -200)
		return -200;

	if (num <= -160)
		return -160;

	if (num <= -120)
		return -120;

	if (num <= -80)
		return -80;

	if (num <= -40)
		return -40;

	if (num >= 320)
		return 320;

	if (num >= 280)
		return 280;

	if (num >= 240)
		return 240;

	if (num >= 200)
		return 200;

	if (num >= 160)
		return 160;

	if (num >= 120)
		return 120;

	if (num >= 80)
		return 80;

	if (num >= 40)
		return 40;

	return 0;
}

int func_59(int iParam0) // Position - 0x2149 Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_41() != -1)
		return iParam0;

	if (Global_1347477.f_2 + 120000 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}

	num = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3 = Global_1347477.f_3 + 1;

	if (Global_1347477.f_3 >= 10)
		num = 2f;
	else if (Global_1347477.f_3 >= 3)
		num = 1.5f;

	value = BUILTIN::TO_FLOAT(iParam0) * num;
	value = MISC::ABSF(value) < 1f ? value < 0f ? -1f : 1f : value;
	return BUILTIN::CEIL(value);
}

BOOL func_60(int iParam0) // Position - 0x21EE Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_82(iParam0))
		return false;

	return func_83(iParam0);
}

BOOL func_61() // Position - 0x220A Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_41() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

int func_62(int iParam0) // Position - 0x222F Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case -320:
		case 320:
			return 8;
	
		case -280:
		case 280:
			return 7;
	
		case -240:
		case 240:
			return 6;
	
		case -200:
		case 200:
			return 5;
	
		case -160:
		case 160:
			return 4;
	
		case -120:
		case 120:
			return 3;
	
		case -80:
		case 80:
			return 2;
	
		case -40:
		case 40:
			return 1;
	
		case 0:
			return 0;
	}

	return 0;
}

Hash func_63() // Position - 0x22E6 Hash - 0xA46C8CCA ^0x71ABACD2
{
	if (Global_40.f_11095.f_35 <= -320)
		return 1;
	else if (Global_40.f_11095.f_35 <= -280)
		return 2;
	else if (Global_40.f_11095.f_35 <= -240)
		return 3;
	else if (Global_40.f_11095.f_35 <= -200)
		return 4;
	else if (Global_40.f_11095.f_35 <= -160)
		return 5;
	else if (Global_40.f_11095.f_35 <= -120)
		return 6;
	else if (Global_40.f_11095.f_35 <= -80)
		return 7;
	else if (Global_40.f_11095.f_35 < 0)
		return 8;
	else if (Global_40.f_11095.f_35 <= 40)
		return 9;
	else if (Global_40.f_11095.f_35 >= 320)
		return 16;
	else if (Global_40.f_11095.f_35 >= 280)
		return 15;
	else if (Global_40.f_11095.f_35 >= 240)
		return 14;
	else if (Global_40.f_11095.f_35 >= 200)
		return 13;
	else if (Global_40.f_11095.f_35 >= 160)
		return 12;
	else if (Global_40.f_11095.f_35 >= 120)
		return 11;
	else if (Global_40.f_11095.f_35 >= 80)
		return 10;

	return 9;
}

void func_64(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x243E Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_84(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_85(hParam0);
	return;
}

void func_65(int iParam0) // Position - 0x246A Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_86(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_66(BOOL bParam0) // Position - 0x24CE Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_87(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_88(i, &hash, &num))
			{
				if (!func_74(hash, 0))
				{
				}
				else
				{
					unlockHash = func_89(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_90(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_58() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_58() >= 160;
					else
						flag = num == func_91();
				
					if (flag)
					{
						UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, true);
						flag = false;
					}
				}
			}
		}
	}

	return;
}

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x258F Hash - 0xA17D549C ^0xFA0FC262
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
	
		case joaat("honor_event_antagonize"):
			return "HONOR_EVENT_ANTAGONIZE";
	
		case joaat("honor_event_cruel_death"):
			return "HONOR_EVENT_CRUEL_DEATH";
	
		case joaat("honor_event_cheat"):
			return "HONOR_EVENT_CHEAT";
	
		case joaat("honor_event_steal_wagon"):
			return "HONOR_EVENT_STEAL_WAGON";
	
		case joaat("honor_event_trampled_innocent"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
	
		case joaat("honor_event_kill_vermin"):
			return "HONOR_EVENT_KILL_VERMIN";
	
		case joaat("honor_event_kill_farm_animal"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
	
		case joaat("honor_event_long_absence"):
			return "HONOR_EVENT_LONG_ABSENCE";
	
		case joaat("honor_event_wanted_in_camp"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
	
		case joaat("honor_event_animal_bleedout"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
	
		case joaat("honor_event_steal_mule"):
			return "HONOR_EVENT_STEAL_MULE";
	
		case joaat("honor_event_theft"):
			return "HONOR_EVENT_THEFT";
	
		case joaat("honor_event_kill_horse"):
			return "HONOR_EVENT_KILL_HORSE";
	
		case joaat("honor_event_justice_served"):
			return "HONOR_EVENT_JUSTICE_SERVED";
	
		case joaat("honor_event_steal_donkey"):
			return "HONOR_EVENT_STEAL_DONKEY";
	
		case joaat("honor_event_steal_horse"):
			return "HONOR_EVENT_STEAL_HORSE";
	
		case joaat("honor_event_ambient_kill"):
			return "HONOR_EVENT_AMBIENT_KILL";
	
		case joaat("honor_event_item_request"):
			return "HONOR_EVENT_ITEM_REQUEST";
	
		case joaat("honor_event_ambient_ko"):
			return "HONOR_EVENT_AMBIENT_KO";
	
		case joaat("honor_event_intervened"):
			return "HONOR_EVENT_INTERVENED";
	
		case joaat("honor_event_scare"):
			return "HONOR_EVENT_SCARE";
	
		case joaat("honor_event_donated_game"):
			return "HONOR_EVENT_DONATED_GAME";
	
		case joaat("honor_event_loot_innocent"):
			return "HONOR_EVENT_LOOT_INNOCENT";
	
		default:
		
	}

	return "";
}

int func_68(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x26DB Hash - 0x72075C17 ^0x3AC6D3FB
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_92(sParam0, sParam1, hParam2);
	return num2;
}

int func_69(int iParam0, int iParam1) // Position - 0x273E Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_93(iParam0))
		return 0;

	if (!func_94())
		return 0;

	if (!func_95(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_70(int iParam0) // Position - 0x2799 Hash - 0xD02571D6 ^0x9878B86D
{
	return iParam0 != -15;
}

void func_71(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x27A7 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_96(*uParam0);
	i = func_97(*uParam0);
	num2 = func_98(*uParam0);
	j = func_99(*uParam0);
	k = func_100(*uParam0);
	l = func_101(*uParam0);

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

	for (m = func_102(i, num); num2 > m; m = func_102(i, num))
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

	func_103(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_72(Hash hParam0, BOOL bParam1) // Position - 0x292F Hash - 0x10DE2364 ^0x10DE2364
{
	return func_104(func_76(), hParam0, bParam1);
}

BOOL func_73(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x2943 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_74(hParam0, 0))
		return false;

	num = func_90(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_105(hParam0, 1))
			return false;

	return func_106(hParam0, false, bParam2) >= iParam1;
}

BOOL func_74(Hash hParam0, int iParam1) // Position - 0x29AD Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_75(Hash hParam0, Hash hParam1) // Position - 0x29C7 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_76() // Position - 0x29F8 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_77() // Position - 0x2A04 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_107())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_78(int iParam0) // Position - 0x2A1B Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_108(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_79(int iParam0, const char* sParam1, int iParam2) // Position - 0x2A4F Hash - 0x6F0C897 ^0x79F31F49
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_77())
		func_68(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_68(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

int func_80() // Position - 0x2AB9 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

var func_81(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2AC9 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_82(int iParam0) // Position - 0x2AE0 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_83(int iParam0) // Position - 0x2AF3 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_84(int iParam0, BOOL bParam1) // Position - 0x2B1D Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_109(bParam1);

	return;
}

void func_85(Hash hParam0) // Position - 0x2B38 Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_86(int iParam0) // Position - 0x2B4B Hash - 0x8FB6A40C ^0x3AFAACD7
{
	if (iParam0 <= -320)
		return "HONOR_BAD_8";
	else if (iParam0 <= -280)
		return "HONOR_BAD_7";
	else if (iParam0 <= -240)
		return "HONOR_BAD_6";
	else if (iParam0 <= -200)
		return "HONOR_BAD_5";
	else if (iParam0 <= -160)
		return "HONOR_BAD_4";
	else if (iParam0 <= -120)
		return "HONOR_BAD_3";
	else if (iParam0 <= -80)
		return "HONOR_BAD_2";
	else if (iParam0 < 0)
		return "HONOR_BAD_1";
	else if (iParam0 <= 40)
		return "HONOR_GOOD_1";
	else if (iParam0 >= 320)
		return "HONOR_GOOD_8";
	else if (iParam0 >= 280)
		return "HONOR_GOOD_7";
	else if (iParam0 >= 240)
		return "HONOR_GOOD_6";
	else if (iParam0 >= 200)
		return "HONOR_GOOD_5";
	else if (iParam0 >= 160)
		return "HONOR_GOOD_4";
	else if (iParam0 >= 120)
		return "HONOR_GOOD_3";
	else if (iParam0 >= 80)
		return "HONOR_GOOD_2";

	return "HONOR_GOOD_1";
}

BOOL func_87(var uParam0) // Position - 0x2C6C Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_110(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -2103982008;
		*uParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
		return true;
	}

	return false;
}

BOOL func_88(int iParam0, var uParam1, var uParam2) // Position - 0x2CB4 Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_110(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -57097983;
		unk.f_3 = iParam0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		{
			unk.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam1 = unk6;
			unk.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam2 = unk6;
			return true;
		}
	}

	return false;
}

Hash func_89(Hash hParam0) // Position - 0x2D34 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_90(Hash hParam0) // Position - 0x2D3E Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_74(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

int func_91() // Position - 0x2D69 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_58();

	switch (num)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
	
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
	
		default:
		
	}

	return joaat("SHOP_HONOR_AMORAL");
}

void func_92(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x2DB8 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_93(int iParam0) // Position - 0x2DE9 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_94() // Position - 0x2E08 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_95(int iParam0, var uParam1, var uParam2) // Position - 0x2E27 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_93(iParam0))
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
	
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
	
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
	
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
	
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
	
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
	
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
	
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
	
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
	
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
	
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
	
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
	
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
	
		case 13:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_UPGR_W");
			break;
	
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
	
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
	
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
	
		default:
			return false;
	}

	return true;
}

int func_96(Hash hParam0) // Position - 0x2FF6 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(hParam0, 26) & 31 * MISC::IS_BIT_SET(hParam0, 31) ? -1 : 1) + 1898;
}

int func_97(Hash hParam0) // Position - 0x301B Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 22) & 15;
}

int func_98(Hash hParam0) // Position - 0x302E Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 17) & 31;
}

int func_99(Hash hParam0) // Position - 0x3041 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

int func_100(Hash hParam0) // Position - 0x3054 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 6) & 63;
}

int func_101(Hash hParam0) // Position - 0x3066 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 0) & 63;
}

int func_102(int iParam0, int iParam1) // Position - 0x3078 Hash - 0x893AC59E ^0x893AC59E
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

void func_103(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3112 Hash - 0xA65AB937 ^0xA65AB937
{
	func_112(uParam0, iParam6);
	func_113(uParam0, iParam5);
	func_114(uParam0, iParam4);
	func_115(uParam0, iParam3);
	func_116(uParam0, iParam2);
	func_117(uParam0, iParam1);
	return;
}

BOOL func_104(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x314A Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_118(hParam1) || !func_118(hParam0))
			return true;

	return hParam0 > hParam1;
}

BOOL func_105(Hash hParam0, int iParam1) // Position - 0x3177 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_74(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_119(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_120("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_121(&unk, i, num, num2))
			{
			}
			else if (!func_122(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_123(num);
				return true;
			}
		}
	
		func_123(num);
	}

	return false;
}

int func_106(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x321F Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_74(hParam0, 0))
		return 0;

	num = func_90(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_119(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_124(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_125(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_107() // Position - 0x32A1 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_108(int iParam0) // Position - 0x32B2 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_31(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

void func_109(BOOL bParam0) // Position - 0x32E5 Hash - 0x970FE035 ^0x92589DF6
{
	func_126(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

BOOL func_110(int iParam0, var uParam1) // Position - 0x3318 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_127(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

var func_111(BOOL bParam0, var uParam1, var uParam2) // Position - 0x3345 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_112(var uParam0, int iParam1) // Position - 0x335C Hash - 0xD05180BA ^0x39589262
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

void func_113(var uParam0, int iParam1) // Position - 0x33E2 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_114(var uParam0, int iParam1) // Position - 0x341E Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_97(*uParam0);
	num2 = func_96(*uParam0);

	if (iParam1 < 1 || iParam1 > func_102(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_115(var uParam0, int iParam1) // Position - 0x3471 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_116(var uParam0, int iParam1) // Position - 0x34AC Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_117(var uParam0, int iParam1) // Position - 0x34E5 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_118(Hash hParam0) // Position - 0x351D Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (hParam0 == -15)
		return false;

	num = func_101(hParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_100(hParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_99(hParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_96(hParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_97(hParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_98(hParam0);

	if (num6 < 1 || num6 > func_102(num5, num4))
		return false;

	return true;
}

Hash func_119(Hash hParam0, int iParam1) // Position - 0x35F9 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_74(hParam0, 0))
		return 0;

	num = func_90(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_75(hParam0, 1399091007))
	{
		func_128(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_120(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x3673 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_125(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_121(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x369A Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_122(Hash hParam0) // Position - 0x36D5 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_123(int iParam0) // Position - 0x36F0 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_124(Hash hParam0, BOOL bParam1) // Position - 0x3711 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_129(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_131(&unk, func_130(false));

	if (!func_132(&unk, &num, &num2, false))
		return 0;

	func_123(num);
	return num2;
}

int func_125(BOOL bParam0) // Position - 0x376F Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_41() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

void func_126(BOOL bParam0) // Position - 0x37B0 Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

BOOL func_127(int iParam0) // Position - 0x37C3 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

void func_128(Hash hParam0, var uParam1, var uParam2) // Position - 0x37D9 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_129(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x39E5 Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_130(BOOL bParam0) // Position - 0x3AB7 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_125(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_134(923904168, func_133(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_134(923904168, func_133(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_134(923904168, func_133(bParam0), -740156546, false);
}

void func_131(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3B4C Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_132(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x3B67 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_125(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

struct<4> func_133(BOOL bParam0) // Position - 0x3B8C Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_134(joaat("character"), func_135(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_134(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x3BA8 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_74(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_125(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_135() // Position - 0x3BD9 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

