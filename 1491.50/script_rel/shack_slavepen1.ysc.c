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
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 6;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 6;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 6;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 6;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 4;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 3;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xFE800E2D ^0x809DD821
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&uScriptParam_0);

	while (func_2())
	{
		BUILTIN::WAIT(0);
	
		switch (uScriptParam_0.f_2)
		{
			case 0:
				if (func_3(&uScriptParam_0))
					func_4(&uScriptParam_0, 1);
				break;
		
			case 1:
				func_5(&uScriptParam_0);
				func_4(&uScriptParam_0, 2);
				break;
		
			case 2:
				if (func_6(&uScriptParam_0) && !func_7())
					func_4(&uScriptParam_0, 3);
				break;
		
			case 3:
				if (func_8(&uScriptParam_0, false, true, true, false))
					if (func_9(&uScriptParam_0))
						if (func_10(&uScriptParam_0))
							func_4(&uScriptParam_0, 5);
				break;
		
			case 4:
				if (func_12(&uScriptParam_0))
					func_4(&uScriptParam_0, 7);
				break;
		
			case 5:
				func_11(&uScriptParam_0);
				func_4(&uScriptParam_0, 6);
				break;
		
			case 6:
				if (func_10(&uScriptParam_0))
					func_4(&uScriptParam_0, 4);
				break;
		
			case 7:
				if (CAM::IS_SCREEN_FADED_IN())
					func_4(&uScriptParam_0, 8);
				break;
		
			case 8:
				if (ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					func_1(&uScriptParam_0);
					return;
				}
			
				if (uScriptParam_0.f_48)
				{
					if (!TASK::DOES_SCENARIO_POINT_EXIST(uScriptParam_0.f_56.f_1))
					{
						func_13(&uScriptParam_0);
						func_14(&uScriptParam_0);
						func_4(&uScriptParam_0, 9);
					}
				}
				else if (VOLUME::DOES_VOLUME_EXIST(func_16(func_15())))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_16(func_15()), true, 0) || func_17(&uScriptParam_0))
					{
						func_13(&uScriptParam_0);
						func_14(&uScriptParam_0);
						func_4(&uScriptParam_0, 9);
					}
				}
			
				if (func_18(&uScriptParam_0))
					func_4(&uScriptParam_0, 9);
				break;
		
			case 9:
				func_1(&uScriptParam_0);
				break;
		
			default:
				break;
		}
	}

	func_1(&uScriptParam_0);
	return;
}

void func_1(var uParam0) // Position - 0x1D0 Hash - 0x24B9E3A7 ^0xB3B3BD3F
{
	func_19(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x1E2 Hash - 0x5C23286E ^0xFDEB700F
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return false;

	return true;
}

BOOL func_3(var uParam0) // Position - 0x1F6 Hash - 0x9A5179D3 ^0x9A5179D3
{
	func_20(uParam0);
	func_21(uParam0);
	func_22(uParam0);

	if (func_23(uParam0))
	{
	}
	else
	{
		return false;
	}

	return true;
}

void func_4(var uParam0, int iParam1) // Position - 0x221 Hash - 0x4F8BE4B5 ^0x5AE41537
{
	uParam0->f_2 = iParam1;
	return;
}

void func_5(var uParam0) // Position - 0x22F Hash - 0x45D72419 ^0x8D91F526
{
	if (uParam0->f_4 > 0)
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(uParam0->f_4);

	func_24(uParam0);
	func_25(uParam0);
	func_26(uParam0, 0);
	func_27(uParam0);
	return;
}

BOOL func_6(var uParam0) // Position - 0x260 Hash - 0xD7D81DC2 ^0xD13B8668
{
	if (!func_28(uParam0) || !func_29(uParam0) || !func_30(uParam0))
		return false;

	if (uParam0->f_4 > 0)
		if (!(PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == uParam0->f_4))
			return false;

	return true;
}

BOOL func_7() // Position - 0x2AA Hash - 0x463DA432 ^0x3948CA04
{
	return func_31(Global_1935630, 4096);
}

BOOL func_8(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2BD Hash - 0x3841C00E ^0xB4490AED
{
	if (bParam1)
	{
		while (uParam0->f_20 < 6)
		{
			func_34(uParam0, func_32(uParam0, uParam0->f_20), func_33(uParam0, uParam0->f_20), uParam0->f_20, bParam2, bParam3, bParam4);
		}
	
		func_35(&(uParam0->f_21), 2);
		return true;
	}
	else
	{
		switch (uParam0->f_21)
		{
			case 0:
				func_35(&(uParam0->f_21), 1);
				break;
		
			case 1:
				if (uParam0->f_20 < 6)
					func_34(uParam0, func_32(uParam0, uParam0->f_20), func_33(uParam0, uParam0->f_20), uParam0->f_20, bParam2, bParam3, bParam4);
				else
					func_35(&(uParam0->f_21), 2);
				break;
		
			case 2:
				return true;
		}
	}

	return false;
}

BOOL func_9(var uParam0) // Position - 0x374 Hash - 0x55577EDB ^0x55577EDB
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!func_38(uParam0, func_36(uParam0, i), func_37(uParam0, i), i))
			return false;
	}

	return true;
}

BOOL func_10(var uParam0) // Position - 0x3B1 Hash - 0xD4977A70 ^0x8C5AACF0
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i]))
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i]))
				if (!PED::IS_PED_READY_TO_RENDER(uParam0->f_13[i]))
					return false;
			else
				return false;
	}

	return true;
}

void func_11(var uParam0) // Position - 0x408 Hash - 0xF1235719 ^0x21C43126
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(func_39(uParam0, i) == joaat("META_OUTFIT_DEFAULT")))
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i]))
				func_40(uParam0->f_13[i], func_39(uParam0, i));
	}

	return;
}

BOOL func_12(var uParam0) // Position - 0x45A Hash - 0x9D207764 ^0x9159B6EB
{
	if (!func_41(uParam0->f_3, 4))
	{
		if (!func_41(iLocal_73.f_4, 1))
		{
			if (func_42(Global_35, func_36(uParam0, 0), 75f, true, true))
			{
				func_43(&uParam0->f_29[0], false, 0);
			
				if (func_44(uParam0, &(iLocal_73.f_5), 0, 7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_29[0]))
					{
						if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_41[0]))
						{
							uParam0->f_41[0] = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(uParam0->f_29[0], joaat("PROP_PLAYER_LOOT_FLOORBOARD_P_CS_PHOTO_5X7"), 0f, 0f, 0f, 0, 0, 0, true);
							return true;
						}
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
	
		!func_41(iLocal_73.f_4, 2);
	}

	return false;
}

void func_13(var uParam0) // Position - 0x50F Hash - 0x5B5CA065 ^0x6B998B4A
{
	if (func_41(uParam0->f_3, 2048) && !func_41(uParam0->f_3, 64))
		func_45(&(uParam0->f_3), 64);
	else if (func_41(uParam0->f_3, 1024) && !func_41(uParam0->f_3, 32))
		func_45(&(uParam0->f_3), 32);
	else if (func_41(uParam0->f_3, 512) && !func_41(uParam0->f_3, 16))
		func_45(&(uParam0->f_3), 16);
	else if (func_41(uParam0->f_3, 256) && !func_41(uParam0->f_3, 8))
		func_45(&(uParam0->f_3), 8);
	else if (func_41(uParam0->f_3, 128) && !func_41(uParam0->f_3, 4))
		func_45(&(uParam0->f_3), 4);

	func_46(&(uParam0->f_5), &(uParam0->f_3));
	return;
}

void func_14(var uParam0) // Position - 0x5F5 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

int func_15() // Position - 0x5FD Hash - 0xAAEE7974 ^0xAAEE7974
{
	return 106;
}

Volume func_16(int iParam0) // Position - 0x607 Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_47(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_3;
}

BOOL func_17(var uParam0) // Position - 0x627 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

BOOL func_18(var uParam0) // Position - 0x630 Hash - 0xEC6CA172 ^0xF1D227F8
{
	iLocal_73 > 0 && iLocal_73 < 2;

	switch (iLocal_73)
	{
		case 0:
			if (!func_41(uParam0->f_3, 4))
				func_48(&iLocal_73, 1, true);
			else
				func_48(&iLocal_73, 2, true);
			break;
	
		case 1:
			if (!func_41(uParam0->f_3, 8192))
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_46) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_46, true, 0))
					func_49(uParam0);
		
			if (!func_41(iLocal_73.f_4, 1))
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_41[0]))
				{
					if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, uParam0->f_41[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, MISC::GET_HASH_KEY("ObjectExchange")))
						{
							func_45(&(iLocal_73.f_4), 1);
							func_50(&(uParam0->f_5), &(iLocal_73.f_4));
							func_51(-671394593, 1, false, 0, 0, 752097756, 0, 0, 0, 0);
						}
					}
				}
			}
		
			if (!func_41(iLocal_73.f_4, 2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_29[1]))
					if (func_42(Global_35, func_36(uParam0, 1), 5f, true, true))
						TASK::_0xA6A76D666A281F2D(uParam0->f_29[1], joaat("DOCUMENT_DISCO_SLAVE_NEWSCLIP"));
			
				if (func_52(joaat("DOCUMENT_DISCO_SLAVE_NEWSCLIP")))
				{
					func_45(&(iLocal_73.f_4), 2);
					func_50(&(uParam0->f_5), &(iLocal_73.f_4));
				}
			}
		
			if (func_41(iLocal_73.f_4, 1) && func_41(iLocal_73.f_4, 2))
				func_48(&iLocal_73, 2, true);
			break;
	
		case 2:
			if (!func_41(uParam0->f_3, 128))
			{
				func_45(&(uParam0->f_3), 128);
				func_46(&(uParam0->f_5), &(uParam0->f_3));
			}
			break;
	}

	return false;
}

void func_19(var uParam0) // Position - 0x7DD Hash - 0x94B4D230 ^0xB29068A0
{
	func_53(uParam0);
	func_54(uParam0);
	func_55(uParam0, false);
	func_56(uParam0, false);
	func_57(uParam0);
	func_58(uParam0);
	func_59(uParam0);

	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam0, false))
		SCRIPTS::TERMINATE_THREAD(*uParam0);

	return;
}

void func_20(var uParam0) // Position - 0x823 Hash - 0x55173727 ^0xB804F751
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_46))
	{
		if (!_IS_NULL_VECTOR(func_60(uParam0)))
			if (uParam0->f_1 == 2 || uParam0->f_1 == 4 || uParam0->f_1 == 8)
				uParam0->f_46 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_60(uParam0), func_62(uParam0), func_63(uParam0), "SHACK_VOLUME_RESTRICTION");
			else
				uParam0->f_46 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_60(uParam0), func_62(uParam0), func_63(uParam0), "SHACK_VOLUME_RESTRICTION");
	
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_46))
		{
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_46, 0, 0, 0, -1, -1, 0);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_46, 0, 0, 0, -1, -1, 2);
		}
	}

	func_64(uParam0);

	if (func_65(uParam0))
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_46))
			if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_45))
				uParam0->f_45 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(uParam0->f_46, false, 15);

	return;
}

void func_21(var uParam0) // Position - 0x900 Hash - 0xF1A1E55B ^0xF1A1E55B
{
	int i;

	for (i = 0; i <= 3 - 1; i = i + 1)
	{
		!func_66(uParam0, i);
	}

	return;
}

void func_22(var uParam0) // Position - 0x928 Hash - 0x645DF762 ^0x5C851819
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		uParam0->f_22[i] = 0;
	}

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		uParam0->f_6[i] = 0;
	}

	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 262144:
			break;
	
		case 16:
			uParam0->f_4 = 1;
			uParam0->f_6[0] = joaat("a_f_m_unicorpse_01");
			break;
	
		case 32:
			if (func_74(uParam0, 1126694912))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
			}
			break;
	
		case 64:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 6;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[2] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[3] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[4] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[5] = joaat("a_m_m_unicorpse_01");
			}
			break;
	
		case 256:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[2] = joaat("a_c_crow_01");
				uParam0->f_6[3] = joaat("a_c_crow_01");
				uParam0->f_6[4] = joaat("a_c_crow_01");
			}
			break;
	
		case 512:
			uParam0->f_4 = 5;
			uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
			uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
			uParam0->f_6[2] = joaat("a_f_m_unicorpse_01");
			uParam0->f_6[3] = joaat("a_f_m_unicorpse_01");
			uParam0->f_6[4] = joaat("a_m_y_unicorpse_01");
			break;
	
		case 4096:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_f_m_unicorpse_01");
				uParam0->f_6[2] = joaat("a_f_m_unicorpse_01");
				uParam0->f_6[3] = joaat("a_c_crow_01");
				uParam0->f_6[4] = joaat("a_c_crow_01");
			}
			else if (func_74(uParam0, 1126694912))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_f_m_unicorpse_01");
			}
			break;
	
		case 8192:
			if (!func_41(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					if (!func_69(func_68(uParam0->f_5), 4) || !func_69(func_68(uParam0->f_5), 8))
					{
						uParam0->f_4 = 0;
					
						if (!func_69(func_68(uParam0->f_5), 2) && !func_70(128, false, true) && !func_71(PLAYER::GET_PLAYER_INDEX(), true, true, true) && !func_72() && !func_73(20) && !func_69(func_68(uParam0->f_5), 4) && !func_69(func_68(uParam0->f_5), 8))
						{
							uParam0->f_4 = uParam0->f_4 + 2;
							uParam0->f_6[0] = joaat("shack_missinghusband_males_01");
							uParam0->f_6[4] = joaat("a_c_horse_morgan_flaxenchestnut");
						}
					
						if (!func_69(func_68(uParam0->f_5), 4))
						{
							uParam0->f_4 = uParam0->f_4 + 3;
							uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
							uParam0->f_6[2] = joaat("a_c_horse_morgan_flaxenchestnut");
							uParam0->f_6[3] = joaat("a_c_horse_morgan_flaxenchestnut");
						}
					
						if (!func_69(func_68(uParam0->f_5), 8))
							uParam0->f_22[1] = joaat("p_cs_rt_envelope01x");
					}
				}
				else if (!func_69(func_68(uParam0->f_5), 1))
				{
					uParam0->f_22[0] = joaat("p_cs_rt_envelope01x");
				}
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				uParam0->f_22[0] = joaat("p_cs_rt_envelope01x");
			}
			break;
	
		case 16384:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
			}
			break;
	
		case 32768:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = joaat("shack_ontherun_males_01");
				uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[2] = joaat("a_m_m_unicorpse_01");
				uParam0->f_22[0] = joaat("p_cs_shackleleg01x");
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				if (!func_67(-1282804314))
				{
					uParam0->f_4 = 3;
					uParam0->f_6[0] = joaat("shack_ontherun_males_01");
					uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
					uParam0->f_6[2] = joaat("a_m_m_unicorpse_01");
				}
				else
				{
					uParam0->f_4 = 2;
					uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
					uParam0->f_6[2] = joaat("a_m_m_unicorpse_01");
				}
			}
			break;
	
		case 65536:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_22[0] = joaat("p_lnnhouse_stash02");
			
				if (!func_69(func_68(uParam0->f_5), 2))
					uParam0->f_22[1] = joaat("p_cs_rt_envelope01x");
			}
			break;
	
		case 131072:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("u_m_y_shackstarvingkid_01");
				uParam0->f_6[1] = joaat("u_m_y_shackstarvingkid_01");
				uParam0->f_22[0] = joaat("p_cs_rt_envelope01x");
			}
			else
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("u_m_y_shackstarvingkid_01");
				uParam0->f_6[1] = joaat("u_m_y_shackstarvingkid_01");
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_23(var uParam0) // Position - 0xE63 Hash - 0xBE7FF4A2 ^0xEE823D4C
{
	!func_41(uParam0->f_3, 4);
	iLocal_73.f_4 = func_68(uParam0->f_5);
	return true;
}

void func_24(var uParam0) // Position - 0xE85 Hash - 0xB05B1E4C ^0x659B50C5
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			STREAMING::REQUEST_MODEL(uParam0->f_6[i], false);
	}

	return;
}

void func_25(var uParam0) // Position - 0xEBC Hash - 0xB05B1E4C ^0x3803CA63
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(uParam0->f_22[i] == 0))
			STREAMING::REQUEST_MODEL(uParam0->f_22[i], false);
	}

	return;
}

void func_26(var uParam0, int iParam1) // Position - 0xEF3 Hash - 0x2059281F ^0x920C6508
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_75(uParam0, i, 0)))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_36[i]))
			{
				if (func_76(uParam0, i))
					iParam1 = 8;
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_75(uParam0, i, 1)))
					uParam0->f_36[i] = ANIMSCENE::_CREATE_ANIM_SCENE(func_75(uParam0, i, 0), iParam1, func_75(uParam0, i, 1), false, true);
				else
					uParam0->f_36[i] = ANIMSCENE::_CREATE_ANIM_SCENE(func_75(uParam0, i, 0), iParam1, 0, false, true);
			
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_36[i]);
			}
		}
	}

	return;
}

void func_27(var uParam0) // Position - 0xF9E Hash - 0x241C3442 ^0x6CFD6465
{
	if (TXD::DOES_STREAMED_TXD_EXIST(func_77(uParam0)))
		TXD::REQUEST_STREAMED_TXD(func_77(uParam0), false);

	return;
}

BOOL func_28(var uParam0) // Position - 0xFBE Hash - 0xA87D3B90 ^0xA87D3B90
{
	if (!func_78(uParam0) || !func_79(uParam0))
		return false;

	return true;
}

BOOL func_29(var uParam0) // Position - 0xFE2 Hash - 0x5A1D2D19 ^0x46EFDD64
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_75(uParam0, i, 0)))
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_36[i], true, false))
				return false;
	}

	return true;
}

BOOL func_30(var uParam0) // Position - 0x1026 Hash - 0xC507B9F5 ^0xEEF0FFED
{
	if (TXD::DOES_STREAMED_TXD_EXIST(func_77(uParam0)) && !TXD::HAS_STREAMED_TXD_LOADED(func_77(uParam0)))
		return false;

	return true;
}

BOOL func_31(int iParam0, int iParam1) // Position - 0x1050 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Vector3 func_32(var uParam0, int iParam1) // Position - 0x105F Hash - 0x2988EE5 ^0x6BBE7B16
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1983.0525f, 1192.3643f, 170.4026f;
			
				default:
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return -155.9291f, 1491.3158f, 115.17f;
			
				case 1:
					return -155.5224f, 1489.7772f, 115.1745f;
			
				default:
					break;
			}
			break;
	
		case 64:
			switch (iParam1)
			{
				case 0:
					return -2037.1212f, -1901.7516f, 109.4507f;
			
				case 1:
					return -2031.3628f, -1932.4497f, 108.5494f;
			
				case 2:
					return -2038.6339f, -1898.968f, 109.3499f;
			
				case 3:
					return -2079.0847f, -1890.2344f, 112.6797f;
			
				case 4:
					return -2031.7662f, -1930.2153f, 108.6972f;
			
				case 5:
					return -2062.6038f, -1926.374f, 112.3715f;
			
				default:
					break;
			}
			break;
	
		case 256:
			switch (iParam1)
			{
				case 0:
					return 1586.7949f, 2192.223f, 323.4134f;
			
				case 1:
					return 1592.7903f, 2194.2954f, 323.0721f;
			
				case 2:
					return 1593.0355f, 2193.6187f, 323.0598f;
			
				case 3:
					return 1592.9316f, 2194.539f, 323.03473f;
			
				case 4:
					return 1592.46f, 2195.0615f, 323.03806f;
			
				default:
					break;
			}
			break;
	
		case 512:
			switch (iParam1)
			{
				case 0:
					return 1889.1003f, 304.105f, 77.0837f;
			
				case 1:
					return 1887.5104f, 300.0471f, 78.8974f;
			
				case 2:
					return 1889.9293f, 299.6248f, 76.7374f;
			
				case 3:
					return 1887.1722f, 301.2639f, 76.0748f;
			
				case 4:
					return 1888.5212f, 299.7741f, 76.1599f;
			
				default:
					break;
			}
			break;
	
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1133.5016f, -979.8339f, 68.3721f;
			
				case 1:
					return 1130.8916f, -979.0982f, 69.1826f;
			
				case 2:
					return 1129.659f, -985.3533f, 67.7327f;
			
				case 3:
					return 1129.4547f, -984.3824f, 67.77183f;
			
				case 4:
					return 1130.0846f, -985.62085f, 67.75238f;
			
				default:
					break;
			}
			break;
	
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -1607.9089f, -202.6873f, 160.0056f;
			
				case 1:
					return -1597.2023f, -194.4726f, 140.2473f;
			
				case 2:
					return -1605.202f, -191.5559f, 146.978f;
			
				case 3:
					return -1598.868f, -190.1475f, 142.4308f;
			
				case 4:
					return -1621.2784f, -211.1197f, 159.4808f;
			
				default:
					break;
			}
			break;
	
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -2031.882f, 2082.897f, 331.4405f;
			
				default:
					break;
			}
			break;
	
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 2119f, -1836.355f, 41.5868f;
			
				case 1:
					return 2119.7273f, -1834.7585f, 41.5868f;
			
				case 2:
					return 2086.9778f, -1817.4274f, 42.94f;
			
				default:
					break;
			}
			break;
	
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -689.3527f, 1046.6498f, 134.253f;
			
				case 1:
					return -689.9694f, 1045.6125f, 133.7922f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

float func_33(var uParam0, int iParam1) // Position - 0x149C Hash - 0x8D7C8EE1 ^0x5E37210F
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 101.62f;
			
				default:
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 99.07f;
			
				case 1:
					return 166.65f;
			
				default:
					break;
			}
			break;
	
		case 64:
			switch (iParam1)
			{
				case 0:
					return 176.81f;
			
				case 1:
					return 91.91f;
			
				case 2:
					return -96.42f;
			
				case 3:
					return -123.76f;
			
				case 4:
					return -179.66f;
			
				case 5:
					return -99.82f;
			
				default:
					break;
			}
			break;
	
		case 256:
			switch (iParam1)
			{
				case 0:
					return -33.09f;
			
				case 1:
					return -48.05f;
			
				case 2:
					return 182.1318f;
			
				case 3:
					return 182.1318f;
			
				case 4:
					return 182.1318f;
			
				default:
					break;
			}
			break;
	
		case 512:
			switch (iParam1)
			{
				case 0:
					return 180f;
			
				case 1:
					return 12.78f;
			
				case 2:
					return 72.46f;
			
				case 3:
					return -148.24f;
			
				case 4:
					return 55.1f;
			
				default:
					break;
			}
			break;
	
		case 4096:
			switch (iParam1)
			{
				case 0:
					return -155.52f;
			
				case 1:
					return 146f;
			
				case 2:
					return -40.99f;
			
				case 3:
					return 16.8645f;
			
				case 4:
					return 182.1318f;
			
				default:
					break;
			}
			break;
	
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -74.96f;
			
				case 1:
					return 155.46f;
			
				case 2:
					return 0f;
			
				case 3:
					return 0f;
			
				case 4:
					return 117.5512f;
			
				default:
					break;
			}
			break;
	
		case 16384:
			switch (iParam1)
			{
				case 0:
					return 135f;
			
				default:
					break;
			}
			break;
	
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 0.1f;
			
				case 1:
					return 124.56f;
			
				case 2:
					return -111.72f;
			
				default:
					break;
			}
			break;
	
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -143.96f;
			
				case 1:
					return 125.28f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f;
}

void func_34(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x1771 Hash - 0x330DA358 ^0xEE530B1D
{
	if (!(uParam0->f_6[iParam5] == 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iParam5]))
		{
			if (!func_80(uParam0, iParam5))
				bParam8 = true;
		
			if (uParam0->f_1 == 8192)
				if (iParam5 == 2 || iParam5 == 3)
					uParam0->f_13[iParam5] = func_81(uParam0->f_6[iParam5], uParam1, fParam4, true, true, 0, true, false, true, false, false, false, false);
				else
					uParam0->f_13[iParam5] = func_81(uParam0->f_6[iParam5], uParam1, fParam4, true, true, 0, true, bParam7, true, false, false, false, false);
			else
				uParam0->f_13[iParam5] = func_81(uParam0->f_6[iParam5], uParam1, fParam4, true, true, 0, true, bParam7, true, false, false, false, false);
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iParam5]))
			{
				if (bParam6)
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uParam0->f_13[iParam5], false);
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_13[iParam5], true);
				TASK::TASK_STAND_STILL(uParam0->f_13[iParam5], -1);
			
				if (!bParam8)
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13[iParam5], false);
			
				uParam0->f_20 = uParam0->f_20 + 1;
			}
		}
		else
		{
			uParam0->f_20 = uParam0->f_20 + 1;
		}
	}
	else
	{
		uParam0->f_20 = uParam0->f_20 + 1;
	}

	return;
}

void func_35(var uParam0, int iParam1) // Position - 0x18A9 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

Vector3 func_36(var uParam0, int iParam1) // Position - 0x18B6 Hash - 0xDA541216 ^0xC9AC9AC
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 128:
		case 512:
		case 1024:
		case 2048:
		case 262144:
			break;
	
		case 256:
			switch (iParam1)
			{
				case 0:
					return 1586.606f, 2192.7188f, 323.4388f;
			
				case 1:
					return 1593.2142f, 2194.4683f, 323.0663f;
			
				default:
					break;
			}
			break;
	
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1129.4f, -985.02f, 67.78f;
			
				default:
					break;
			}
			break;
	
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -1724.6903f, -86.3643f, 180.7049f;
			
				case 1:
					return -1590.3396f, -182.8431f, 136.87f;
			
				default:
					break;
			}
			break;
	
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -2032.0431f, 2082.8948f, 331.7289f;
			
				default:
					break;
			}
			break;
	
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 2086.9778f, -1817.4274f, 42.94f;
			
				default:
					break;
			}
			break;
	
		case 65536:
			switch (iParam1)
			{
				case 0:
					return 1389.4857f, -2079.0361f, 51.5495f;
			
				case 1:
					return 1390.9f, -2086f, 52.375f;
			
				default:
					break;
			}
			break;
	
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -690.8923f, 1044.7651f, 134.669f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

Vector3 func_37(var uParam0, int iParam1) // Position - 0x1A74 Hash - 0xA4B7AFCE ^0xCCB5B101
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 128:
		case 512:
		case 1024:
		case 2048:
		case 262144:
			break;
	
		case 256:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 90f;
			
				case 1:
					return 90f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 90f;
			
				default:
					break;
			}
			break;
	
		case 8192:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 7f;
			
				default:
					break;
			}
			break;
	
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -87.6368f, -17.6933f, -68.3214f;
			
				default:
					break;
			}
			break;
	
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 65536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 180f;
			
				default:
					break;
			}
			break;
	
		case 131072:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -25f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_38(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, int iParam7) // Position - 0x1BE2 Hash - 0x13A54AB0 ^0x7344042C
{
	if (!(uParam0->f_22[iParam7] == 0) && !_IS_NULL_VECTOR(vParam1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[iParam7]))
		{
			uParam0->f_29[iParam7] = OBJECT::CREATE_OBJECT(uParam0->f_22[iParam7], vParam1, true, true, false, false, true);
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_29[iParam7]))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_29[iParam7], vParam1, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_29[iParam7], vParam4, 2, true);
			}
			else
			{
				return false;
			}
		}
	}

	return true;
}

Hash func_39(var uParam0, int iParam1) // Position - 0x1C74 Hash - 0x3DF3B4F6 ^0x84E0C99B
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return -183039148;
			
				default:
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 1156572673;
			
				case 1:
					return -938873797;
			
				default:
					break;
			}
			break;
	
		case 64:
			switch (iParam1)
			{
				case 0:
					return -2089787434;
			
				case 1:
					return 1908325491;
			
				case 2:
					return 254342877;
			
				case 3:
					return -52800960;
			
				case 4:
					return -1197356488;
			
				case 5:
					return -1427362099;
			
				default:
					break;
			}
			break;
	
		case 256:
			switch (iParam1)
			{
				case 0:
					return 816323515;
			
				case 1:
					return 1113964342;
			
				default:
					break;
			}
			break;
	
		case 512:
			switch (iParam1)
			{
				case 0:
					return 2058743928;
			
				case 1:
					return 794165431;
			
				case 2:
					return 989984119;
			
				case 3:
					return -565729830;
			
				case 4:
					return 1022043639;
			
				default:
					break;
			}
			break;
	
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1112811077;
			
				case 1:
					return 1813871063;
			
				case 2:
					return 1112811077;
			
				default:
					break;
			}
			break;
	
		case 8192:
			switch (iParam1)
			{
				case 0:
					return 1980915318;
			
				case 1:
					return 569479591;
			
				case 2:
					return -937613161;
			
				case 3:
					return -937613161;
			
				default:
					break;
			}
			break;
	
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -774890814;
			
				default:
					break;
			}
			break;
	
		case 32768:
			switch (iParam1)
			{
				case 0:
					if (!func_41(uParam0->f_3, 4))
						return -1984759420;
					else
						return 50923185;
					break;
			
				case 1:
					return 550457596;
			
				case 2:
					return 855242065;
			}
			break;
	
		case 131072:
			switch (iParam1)
			{
				case 0:
					return 1202038884;
			
				case 1:
					return 1511738703;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return joaat("META_OUTFIT_DEFAULT");
}

void func_40(Ped pedParam0, Hash hParam1) // Position - 0x1F1C Hash - 0x73475E86 ^0x8900AC4D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_82(pedParam0, hParam1))
		{
			if (func_83(pedParam0, hParam1))
			{
				if (func_84(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_85(pedParam0);
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

BOOL func_41(int iParam0, int iParam1) // Position - 0x1FC3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_42(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1FD2 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_86(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

void func_43(Object* pobParam0, BOOL bParam1, int iParam2) // Position - 0x202D Hash - 0x58AF85DB ^0x583A29D8
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		if (bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
		else
			OBJECT::DELETE_OBJECT(pobParam0);

	return;
}

BOOL func_44(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x2053 Hash - 0x4355DE8E ^0xCD4F189
{
	if (*uParam1 == 0)
	{
		*uParam1 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_22[iParam2], func_36(uParam0, iParam2), iParam3);
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(*uParam1) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[iParam2]))
	{
		uParam0->f_29[iParam2] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(*uParam1));
		!ENTITY::IS_ENTITY_DEAD(uParam0->f_29[iParam2]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[iParam2]))
		return true;

	return false;
}

void func_45(var uParam0, int iParam1) // Position - 0x20D1 Hash - 0xF55E891F ^0xF55E891F
{
	func_87(uParam0, iParam1);
	return;
}

int func_46(var uParam0, var uParam1) // Position - 0x20E1 Hash - 0x52ACA8C9 ^0x52ACA8C9
{
	if (func_88(*uParam0))
	{
		func_89(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}

	return 0;
}

BOOL func_47(int iParam0) // Position - 0x2109 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

void func_48(var uParam0, int iParam1, BOOL bParam2) // Position - 0x211F Hash - 0x5D39ADC5 ^0x5540A452
{
	*uParam0 = iParam1;

	if (bParam2)
		func_90(&(uParam0->f_1));

	return;
}

void func_49(var uParam0) // Position - 0x2139 Hash - 0x90FF21B0 ^0x8C68D40F
{
	Hash discoveryHash;

	if (!func_41(uParam0->f_3, 8192))
	{
		switch (uParam0->f_1)
		{
			case 16:
				discoveryHash = -727372692;
				break;
		
			case 32:
				discoveryHash = 532503220;
				break;
		
			case 64:
				discoveryHash = 562599937;
				break;
		
			case 128:
				discoveryHash = joaat("MAP_SHACK_FROZEN_EXPLORERS");
				break;
		
			case 256:
				discoveryHash = 1610646968;
				break;
		
			case 512:
				discoveryHash = -1249289544;
				break;
		
			case 1024:
				discoveryHash = -508074447;
				break;
		
			case 2048:
				discoveryHash = -1917132299;
				break;
		
			case 4096:
				discoveryHash = -763271696;
				break;
		
			case 8192:
				discoveryHash = 1116308524;
				break;
		
			case 16384:
				discoveryHash = 379859357;
				break;
		
			case 32768:
				discoveryHash = joaat("MAP_SHACK_CRAWDAD_WILLIES");
				break;
		
			case 65536:
				discoveryHash = joaat("MAP_SHACK_SLAVE_PEN");
				break;
		
			case 131072:
				discoveryHash = 43681669;
				break;
		
			case 262144:
				discoveryHash = 1871337449;
				break;
		}
	
		if (discoveryHash != 0)
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(discoveryHash))
				MAP::_MAP_DISCOVER_REGION(discoveryHash);
	
		func_45(&(uParam0->f_3), 8192);
		func_92(func_91(joaat("shack_found")), 1);
	}

	return;
}

int func_50(var uParam0, var uParam1) // Position - 0x2279 Hash - 0x52ACA8C9 ^0x52ACA8C9
{
	if (func_88(*uParam0))
	{
		func_93(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}

	return 0;
}

int func_51(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x22A1 Hash - 0x11449F01 ^0x11449F01
{
	int value;
	Hash ammoTypeForWeapon;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	Hash collectableSubcategory;
	int num;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	int num2;
	int i;
	var statId;
	BOOL flag3;

	if (!func_94(hParam0, 0))
		return 0;

	if (!func_95(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_96(hParam0, &value, iParam1))
		return 0;

	func_97(hParam0, bParam2);
	lootTableKey = 0;

	if (func_98(hParam0, false, false) == 0)
	{
		if (func_99(hParam0))
		{
			hash = func_100(hParam0);
			collectableSubcategory = func_101(hash);
			num = func_102(collectableSubcategory) + 1;
			func_103(hash);
		
			if (func_104(38))
				func_105(483, false);
			else
				func_105(&func_2, false);
		
			if (num == func_106(collectableSubcategory))
			{
				func_51(func_107(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_108() && func_109(4))
				{
					if (func_108() && func_110(38) || func_104(38))
					{
						func_112(38, func_107(collectableSubcategory), 0, 0, func_111(), false, -1, false);
						func_113(2);
					}
					else
					{
						func_112(38, func_107(collectableSubcategory), 0, 0, func_111(), false, -1, false);
						func_113(1);
					}
				}
			}
			else if (func_108() && func_109(4))
			{
				if (func_108() && func_110(38) || func_104(38))
				{
					func_112(38, 0, 0, 0, func_111(), false, -1, false);
					func_113(2);
				}
				else
				{
					func_112(38, 0, 0, 0, func_111(), false, -1, false);
					func_113(1);
				}
			}
		
			if (func_108() && func_109(4))
				if (!Global_1914319.f_17376)
					if (func_108() && func_110(38) || func_104(38))
						func_114(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_114(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_115(hParam0) == joaat("CLOTHING"))
		if (!func_116(hParam0, 866047851) && !func_116(hParam0, -1979000645) && !func_116(hParam0, 1248798204))
			flag = true;

	if (func_117(hParam0, 8388608) && !func_118(28))
		func_119(28);

	if (!flag)
	{
		if (func_116(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_120(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_122(func_121(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_123() == -1)
						func_124(ammoTypeForWeapon);
				
					if (func_125(false) && func_126(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_127(hParam0, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
			else
			{
				ammoTypeForWeapon = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
			
				if (WEAPON::_IS_AMMO_VALID(ammoTypeForWeapon))
				{
					if (func_123() == -1)
						func_124(hParam0);
				
					if (func_125(false) && func_126(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_127(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_115(hParam0) == joaat("WEAPON"))
		{
			if (!func_128(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_115(hParam0) == joaat("AMMO") && func_129(hParam0))
		{
			if (!func_130(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_116(hParam0, 866047851))
		{
			func_131(hParam0);
		}
		else if (func_116(hParam0, 2000026003))
		{
			func_132(hParam0);
		}
		else if (func_116(hParam0, -103750053))
		{
			func_92(func_133(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_92(func_134(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_116(hParam0, -121341956) && !func_116(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_135(Global_1835011[4 /*74*/].f_1, true))
					func_105(498, false);
		
			if (func_116(hParam0, -2017733358) || func_116(hParam0, -1369131378))
				func_136(hParam0);
		}
		else if (func_116(hParam0, -136654233))
		{
			if (func_116(hParam0, -1021472396))
			{
			}
		}
		else if (func_116(hParam0, -1466706512) && func_116(hParam0, 1147021565))
		{
			func_105(484, false);
		}
		else if (func_116(hParam0, 1147021565) && func_116(hParam0, -524514947))
		{
		}
		else if (func_116(hParam0, 554195525))
		{
		}
		else if (func_116(hParam0, 589988438))
		{
			if (func_137())
			{
				func_138(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_116(hParam0, 787083290) && func_116(hParam0, 949916894))
		{
			func_139(hParam0);
		}
		else if (func_116(hParam0, -1718133314))
		{
			func_140(hParam0);
		}
		else if (func_116(hParam0, -1738650224))
		{
			func_141(hParam0);
		}
		else if (func_116(hParam0, -1112814642) && func_116(hParam0, 949916894))
		{
			func_142(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_116(hParam0, 1841149704))
		{
			func_143();
		}
		else if (func_116(hParam0, 606799272))
		{
			func_144(hParam0, iParam1);
			func_145(hParam0);
		}
		else if (func_116(hParam0, -1112814642) && func_116(hParam0, -1697809989))
		{
			func_146(hParam0, 0, false, false);
		}
		else if (func_116(hParam0, -2017733358) || func_116(hParam0, -1369131378))
		{
			func_136(hParam0);
		}
		else if (func_116(hParam0, -1921346699))
		{
			if (func_123() != -1)
				return 0;
		
			func_147(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_116(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_148(471514780, 1, false))
						func_51(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_148(526074061, 1, false))
						func_51(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_148(-967317137, 1, false))
						func_51(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_148(670273567, 1, false))
						func_51(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_148(215778062, 1, false))
						func_51(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_148(-1045488665, 1, false))
						func_51(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_116(hParam0, -839724752) && func_117(hParam0, 4))
		{
			if (!func_104(42))
				func_149(hParam0);
		}
		else if (func_116(hParam0, 1399091007))
		{
			func_150(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_116(hParam0, 1248798204))
		{
			hash2 = 0;
		
			switch (hParam0)
			{
				case joaat("clothing_hl_player_satchel_005_1"):
					hash2 = joaat("kit_pouch_provisions");
					break;
			
				case joaat("clothing_hl_player_satchel_002_1"):
					hash2 = joaat("kit_pouch_remedies");
					break;
			
				case joaat("clothing_hl_player_satchel_003_1"):
					hash2 = joaat("kit_pouch_ingredients");
					break;
			
				case joaat("clothing_hl_player_satchel_008_1"):
					hash2 = joaat("kit_pouch_legendary");
					break;
			
				case joaat("clothing_hl_player_satchel_004_1"):
					hash2 = joaat("kit_pouch_kit");
					break;
			
				case joaat("clothing_hl_player_satchel_006_1"):
					hash2 = joaat("kit_pouch_materials");
					break;
			
				case joaat("clothing_hl_player_satchel_007_1"):
					hash2 = joaat("kit_pouch_valuables");
					break;
			}
		
			if (hash2 != 0)
				func_51(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_123() == -1)
					hParam0 = -1448210800;
				break;
		
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_168(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_168(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_168(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_158(499813453, joaat("treasure_hunt_loot_01"), false);
				func_159(499813453, false);
				func_160(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_158(390004462, joaat("treasure_hunt_loot_17"), false);
				func_159(390004462, false);
				func_164(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_158(6410548, joaat("treasure_hunt_loot_23"), false);
				func_159(6410548, false);
				func_165(8);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_158(6410548, joaat("treasure_hunt_loot_22"), false);
				func_159(6410548, false);
				func_165(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_119(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_151(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_152(&hash3, false))
					func_126(hash3, 0, false, bParam4, 3, false, 752097756, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case -1080874779:
			case joaat("consumable_potent_medicine"):
			case joaat("consumable_medicine"):
			case joaat("consumable_moonshine"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_168(594, 1934060482, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("upgrade_fsh_bait_cricket_tin"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_crickets");
				break;
		
			case joaat("consumable_potent_restorative"):
			case joaat("consumable_cocaine_chewing_gum_used"):
			case joaat("consumable_cocaine_chewing_gum"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("consumable_restorative"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_168(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_105(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_158(6410548, joaat("treasure_hunt_loot_21"), false);
				func_159(6410548, false);
				func_165(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_105(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_51(func_169(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_51(func_170(), 1, false, false, false, 752097756, 0, 0, 0, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("consumable_snake_oil"):
			case joaat("consumable_potent_snake_oil"):
			case joaat("consumable_chewing_tobacco"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("consumable_chewing_tobacco_used"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_168(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_158(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_159(-220219788, false);
				func_162(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_118(1))
					func_105(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_158(666607663, joaat("treasure_hunt_loot_07"), false);
				func_159(666607663, false);
				func_161(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_167(241, func_166(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_158(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_159(-220219788, false);
				func_162(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_167(242, func_166(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_105(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_167(240, func_166(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_158(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_159(-220219788, false);
				func_162(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_158(390004462, joaat("treasure_hunt_loot_16"), false);
				func_159(390004462, false);
				func_164(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_158(499813453, joaat("treasure_hunt_loot_03"), false);
				func_159(499813453, false);
				func_160(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_158(666607663, joaat("treasure_hunt_loot_06"), false);
				func_159(666607663, false);
				func_161(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_158(218622660, joaat("treasure_hunt_loot_14"), false);
				func_159(218622660, false);
				func_163(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_158(666607663, joaat("treasure_hunt_loot_05"), false);
				func_159(666607663, false);
				func_161(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_123() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_151(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_158(218622660, joaat("treasure_hunt_loot_13"), false);
				func_159(218622660, false);
				func_163(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_158(6410548, joaat("treasure_hunt_loot_20"), false);
				func_159(6410548, false);
				func_165(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_105(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_105(491, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("upgrade_fsh_bait_worm_can"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_worms");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_158(499813453, joaat("treasure_hunt_loot_02"), false);
				func_159(499813453, false);
				func_160(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_105(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_153();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_154();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_155();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_156();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_157();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_158(390004462, joaat("treasure_hunt_loot_18"), false);
				func_159(390004462, false);
				func_164(4);
				break;
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash4 = hParam0;
		func_171(&hash4);
	
		if (!func_172(hash4, value, hParam5))
			return 0;
		else if (!func_125(false))
			return 1;
	
		if (func_115(hParam0) == joaat("CLOTHING"))
			func_173(hParam0);
	
		if (func_116(hParam0, -1979000645))
			func_174(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_125(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_51(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_175(lootTableKey, 0);
		}
	}

	statId = { func_176(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_177(hParam0);

	if (iParam6 > 0f)
	{
		if (func_116(hParam0, -839724752))
			func_178(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_179(hParam0, value, false, flag3, 0);
	}

	return 1;
}

BOOL func_52(int iParam0) // Position - 0x3536 Hash - 0x2C6D6290 ^0xF2EA2FC
{
	struct<10> eventData;
	int i;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i) == -1730772208)
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 10))
					if (eventData.f_2 == iParam0 || iParam0 == 0)
						return true;
		}
	}

	return false;
}

void func_53(var uParam0) // Position - 0x3595 Hash - 0x1E297F81 ^0xF817158A
{
	if (!(iLocal_73.f_5 == 0) && ENTITY::IS_MAP_ENTITY_PINNED(iLocal_73.f_5))
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_73.f_5);

	if (TXD::DOES_STREAMED_TXD_EXIST(func_77(uParam0)))
		TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(func_77(uParam0));

	return;
}

void func_54(var uParam0) // Position - 0x35D3 Hash - 0xD3290849 ^0xFA22875B
{
	int i;

	for (i = 0; i <= 3 - 1; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_41[i]))
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_41[i]);
	}

	return;
}

void func_55(var uParam0, BOOL bParam1) // Position - 0x360A Hash - 0xD0CC9A51 ^0x157C053C
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		func_43(&uParam0->f_29[i], bParam1, i);
	}

	return;
}

void func_56(var uParam0, BOOL bParam1) // Position - 0x3636 Hash - 0xD0CC9A51 ^0xEA6102F5
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		func_180(&uParam0->f_13[i], bParam1, i);
	}

	return;
}

void func_57(var uParam0) // Position - 0x3662 Hash - 0xC54F00EA ^0x7EEF38F8
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_75(uParam0, i, 0)))
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_36[i]))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_36[i]);
	}

	return;
}

void func_58(var uParam0) // Position - 0x36AA Hash - 0xE5E6F191 ^0x3DEDDBFC
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_46))
	{
		func_181(&(uParam0->f_45), uParam0->f_46, false);
		VOLUME::DELETE_VOLUME(uParam0->f_46);
	}

	func_182(uParam0);
	return;
}

void func_59(var uParam0) // Position - 0x36D8 Hash - 0x49584173 ^0x49584173
{
	func_183(uParam0);
	func_184(uParam0);
	return;
}

Vector3 func_60(var uParam0) // Position - 0x36EC Hash - 0x499CD658 ^0x2E31FDEE
{
	switch (uParam0->f_1)
	{
		case 2:
			return -1553.8129f, 257.88004f, 110.429f;
	
		case 4:
			return 1462.7716f, -1582.4757f, 70.113365f;
	
		case 8:
			return 1794.2118f, 458.8075f, 109.46942f;
	
		case 16:
			return 1984.2163f, 1193.4806f, 171.79419f;
	
		case 32:
			return -155.657f, 1489.998f, 117.244f;
	
		case 64:
			return -2054.9973f, -1910.5978f, 110.95312f;
	
		case 128:
			return -2109.321f, 1843.872f, 256.096f;
	
		case 256:
			return 1586.9924f, 2193.1138f, 323.38046f;
	
		case 512:
			return 1888.297f, 301.679f, 77.312f;
	
		case 1024:
			return -2370.1968f, 472.34607f, 132.25902f;
	
		case 2048:
			return 1462.616f, 811.213f, 99.923f;
	
		case 4096:
			return 1134.45f, -979.70355f, 69.06891f;
	
		case 8192:
			return -1724.5378f, -86.739525f, 180.7049f;
	
		case 16384:
			return -1961.7473f, 2159.3098f, 326.68732f;
	
		case 32768:
			return 2089.99f, -1817.4141f, 41.9281f;
	
		case 65536:
			return 1389.6478f, -2082.0444f, 53.0335f;
	
		case 131072:
			return -689.71844f, 1043.6307f, 132.85931f;
	
		case 262144:
			return 1185.4283f, -101.42105f, 96.4688f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x38B4 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

Vector3 func_62(var uParam0) // Position - 0x38DE Hash - 0xD3B249DB ^0xA7E53409
{
	switch (uParam0->f_1)
	{
		case 2:
			return 0f, 0f, 0f;
	
		case 4:
			return 0f, 0f, -26.225927f;
	
		case 8:
			return 0f, 0f, -15.848087f;
	
		case 16:
			return 0f, 0f, -34.16869f;
	
		case 32:
			return 0f, 0f, 24.999998f;
	
		case 64:
			return 0f, 0f, 0f;
	
		case 128:
			return 0f, 0f, 49.964f;
	
		case 256:
			return 0f, 0f, 30.560755f;
	
		case 512:
			return 0f, 0f, 0f;
	
		case 1024:
			return 0f, 0f, 0f;
	
		case 2048:
			return 0f, 0f, 45f;
	
		case 4096:
			return 0f, 0f, -35.580284f;
	
		case 8192:
			return 0f, 0f, -55.920013f;
	
		case 16384:
			return 0f, 0f, -4.355095f;
	
		case 32768:
			return 0f, 0f, 45.54978f;
	
		case 65536:
			return 0f, 0f, 19.964409f;
	
		case 131072:
			return 0f, 0f, -54.832832f;
	
		case 262144:
			return 0f, 0f, 0f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Vector3 func_63(var uParam0) // Position - 0x3A02 Hash - 0x607ACA1D ^0xEC3EC28E
{
	switch (uParam0->f_1)
	{
		case 2:
			return 12.611436f, 13.747872f, 21.603708f;
	
		case 4:
			return 18.622557f, 11.905437f, 36.472237f;
	
		case 8:
			return 19.32396f, 17.887568f, 40.777145f;
	
		case 16:
			return 5.127945f, 9.805676f, 4f;
	
		case 32:
			return 4f, 8f, 5f;
	
		case 64:
			return 43.911892f, 39.835968f, 14.899021f;
	
		case 128:
			return 6f, 7f, 5f;
	
		case 256:
			return 4.106579f, 4.25f, 5.262621f;
	
		case 512:
			return 5.76f, 7.6f, 3f;
	
		case 1024:
			return 5f, 5f, 4f;
	
		case 2048:
			return 6.7f, 12.2f, 8f;
	
		case 4096:
			return 9.60421f, 6.498575f, 5f;
	
		case 8192:
			return 2f, 2f, 5f;
	
		case 16384:
			return 4.966977f, 5.789305f, 4.917263f;
	
		case 32768:
			return 8.537304f, 6.882811f, 9.092137f;
	
		case 65536:
			return 4.720003f, 10.428696f, 3f;
	
		case 131072:
			return 7.909408f, 5.245724f, 9.092137f;
	
		case 262144:
			return 10.849536f, 5f, 5f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void func_64(var uParam0) // Position - 0x3B86 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_65(var uParam0) // Position - 0x3B8E Hash - 0xD3EE964E ^0x607CEDF2
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 16:
		case 1024:
		case 2048:
		case 4096:
		case 8192:
		case 65536:
		case 262144:
			break;
	
		case 32:
		case 128:
		case 256:
		case 512:
		case 16384:
		case 32768:
		case 131072:
			return true;
	
		default:
			break;
	}

	return false;
}

BOOL func_66(var uParam0, int iParam1) // Position - 0x3C14 Hash - 0x2691CBA1 ^0x66633B2F
{
	if (!(func_185(uParam0, iParam1) == 0) && !TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_41[iParam1]))
		uParam0->f_41[iParam1] = TASK::CREATE_SCENARIO_POINT_HASH(func_185(uParam0, iParam1), func_186(uParam0, iParam1), func_187(uParam0, iParam1), func_188(uParam0, iParam1), 0, false);

	return true;
}

BOOL func_67(int iParam0) // Position - 0x3C6B Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_189(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

int func_68(int iParam0) // Position - 0x3CBA Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_88(iParam0))
		return -1;

	return func_190(iParam0);
}

BOOL func_69(int iParam0, int iParam1) // Position - 0x3CD6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_70(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3CE5 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_191())
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
		num = func_192(Global_1898164.f_1[0 /*5*/]);
	
		if (func_193(num) && func_194(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_88(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_71(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3EE9 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_195(bParam1, bParam2, bParam3);

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

BOOL func_72() // Position - 0x401F Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1310750.f_16077 != 0;
}

BOOL func_73(int iParam0) // Position - 0x4030 Hash - 0x7647021A ^0x923E095B
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

BOOL func_74(var uParam0, int iParam1) // Position - 0x4042 Hash - 0x3F071584 ^0x990A9185
{
	float num;
	float num2;
	float num3;

	num2 = func_196();

	if (func_197(uParam0->f_1, &num))
	{
		if (num > 0f)
		{
			num3 = num2 - num;
		
			if (num3 >= iParam1)
				return false;
		}
	}

	return true;
}

char* func_75(var uParam0, int iParam1, int iParam2) // Position - 0x407B Hash - 0x7186D82D ^0xBB670D93
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@ambient@discoverables@civil_war_bride@civil_war_bride";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 32:
			if (func_74(uParam0, 1126694912))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_dead_rivals@shack_dead_rivals";
						
							default:
								break;
						}
						break;
				}
			}
			break;
	
		case 64:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@dead_settler@dead_settler";
						
							case 1:
								return "pl_dead_settler";
						
							default:
								break;
						}
						break;
				}
			}
			break;
	
		case 256:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_gunfight@pose";
						
							default:
								break;
						}
						break;
				}
			}
			break;
	
		case 512:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@beat@wilderness@shack_happy_family@dead_family";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 4096:
			if (!func_41(uParam0->f_3, 4) || func_74(uParam0, 1126694912))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_love_triangle@hisandher_pose";
						
							default:
								break;
						}
						break;
				}
			}
			break;
	
		case 8192:
			if (!func_41(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if (!func_69(func_68(uParam0->f_5), 4) && !func_69(func_68(uParam0->f_5), 2) && !func_69(func_68(uParam0->f_5), 8))
							{
								switch (iParam2)
								{
									case 0:
										return "script@ambient@discoverables@missing_husband@action";
								
									case 1:
										return "PBL_IDLE2";
								
									default:
										break;
								}
							}
							break;
					
						case 1:
							if (!func_69(func_68(uParam0->f_5), 4))
							{
								switch (iParam2)
								{
									case 0:
										return "script@beat@wilderness@discoverables@missing_husband@missing_husband";
								
									case 1:
										return "pl_missing_husband";
								
									default:
										break;
								}
							}
							break;
					}
				}
			}
			break;
	
		case 16384:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@missingmountainman@missingmountainman";
						
							case 1:
								return "pl_Base";
						
							default:
								break;
						}
						break;
				}
			}
			break;
	
		case 32768:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig1_corpse";
						
							case 1:
								return "pb_dead";
						
							default:
								break;
						}
						break;
				
					case 1:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2_corpse";
						
							case 1:
								return "pb_dead";
						
							default:
								break;
						}
						break;
				
					case 2:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2";
						
							case 1:
								return "pb_base";
						
							default:
								break;
						}
						break;
				}
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig1_corpse";
						
							case 1:
								return "pb_dead";
						
							default:
								break;
						}
						break;
				
					case 1:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2_corpse";
						
							case 1:
								return "pb_dead";
						
							default:
								break;
						}
						break;
				}
			}
			break;
	
		case 131072:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@beat@wilderness@discoverables@shack_starved_children@shack_dead_children";
					
						case 1:
							return "pl_dead_children";
					
						default:
							break;
					}
					break;
			}
			break;
	
		default:
			break;
	}

	return "";
}

BOOL func_76(var uParam0, int iParam1) // Position - 0x4482 Hash - 0xB2668DA9 ^0xDE3ACD93
{
	if (uParam0->f_1 == 32768)
		if (iParam1 == 0 || iParam1 == 1)
			return true;
	else if (uParam0->f_1 == 8192)
		if (iParam1 == 1)
			return true;
	else if (uParam0->f_1 == 131072 || uParam0->f_1 == 16 || uParam0->f_1 == 64 || uParam0->f_1 == 4096 || uParam0->f_1 == 256 || uParam0->f_1 == 512 || uParam0->f_1 == 32 || uParam0->f_1 == 16384)
		return true;

	return false;
}

Hash func_77(var uParam0) // Position - 0x4534 Hash - 0xBE20C47A ^0xB498B169
{
	switch (uParam0->f_1)
	{
		case 16:
			return joaat("ui_letter_civil_war");
	
		case 65536:
			return joaat("ui_photo_slavepen");
	
		default:
		
	}

	return -1;
}

BOOL func_78(var uParam0) // Position - 0x4563 Hash - 0x6AED41FA ^0x20BB64C1
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(uParam0->f_22[i] == 0))
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_22[i]))
				return false;
	}

	return true;
}

BOOL func_79(var uParam0) // Position - 0x45A2 Hash - 0x6AED41FA ^0xE5C98481
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_6[i]))
				return false;
	}

	return true;
}

BOOL func_80(var uParam0, int iParam1) // Position - 0x45E1 Hash - 0x7407E27F ^0x5B559311
{
	if (uParam0->f_1 == 32768)
		if (!func_41(uParam0->f_3, 4))
			if (iParam1 == 1 || iParam1 == 2)
				return true;
		else if (iParam1 == 0 || iParam1 == 1 || iParam1 == 2)
			return true;
	else if (uParam0->f_1 == 8192)
		if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3)
			return true;
	else if (uParam0->f_1 == 256)
		if (iParam1 == 0 || iParam1 == 1)
			return true;
	else if (uParam0->f_1 == 4096)
		if (iParam1 == 0 || iParam1 == 1 || iParam1 == 2)
			return true;
	else if (uParam0->f_1 == 131072 || uParam0->f_1 == 16 || uParam0->f_1 == 64 || uParam0->f_1 == 512 || uParam0->f_1 == 32 || uParam0->f_1 == 16384)
		return true;

	return false;
}

Ped func_81(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x4709 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_198(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_82(Ped pedParam0, Hash hParam1) // Position - 0x474B Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_83(Ped pedParam0, Hash hParam1) // Position - 0x4779 Hash - 0x6D25F5FD ^0xE12AA6D
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

BOOL func_84(Ped pedParam0, Hash hParam1) // Position - 0x47C9 Hash - 0x6D25F5FD ^0xE12AA6D
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_82(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_85(Ped pedParam0) // Position - 0x4839 Hash - 0x197B6598 ^0xFDE09D8F
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

float func_86(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x4856 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_87(var uParam0, int iParam1) // Position - 0x4874 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_88(int iParam0) // Position - 0x4885 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_89(int iParam0, var uParam1) // Position - 0x48B8 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_88(iParam0))
		return;

	func_199(iParam0, uParam1);
	return;
}

void func_90(var uParam0) // Position - 0x48D5 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_200(uParam0, 0f);
	return;
}

struct<2> func_91(int iParam0) // Position - 0x48E4 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_92(var uParam0, var uParam1, int iParam2) // Position - 0x48F4 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_93(int iParam0, var uParam1) // Position - 0x4904 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_88(iParam0))
		return;

	func_201(iParam0, uParam1);
	return;
}

BOOL func_94(Hash hParam0, int iParam1) // Position - 0x4921 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_95(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x493B Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_123() == -1)
	{
		if (func_202(hParam0) && func_203(hParam0))
		{
			func_204(hParam0, iParam1, true, &bParam2, iParam3);
			return false;
		}
	}
	else if (hParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (hParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}

	return true;
}

BOOL func_96(Hash hParam0, var uParam1, int iParam2) // Position - 0x4992 Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_205(hParam0, uParam1);
	unk = { func_206(hParam0, false, true) };
	num = func_207(hParam0, &unk, false, false);
	num2 = func_208(hParam0, false);

	if (num > 1 && !func_209() && num2 + iParam2 >= num)
		if (func_116(hParam0, -2051813666))
			func_105(583, true);
		else
			func_105(582, false);

	if (func_210(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_97(Hash hParam0, BOOL bParam1) // Position - 0x4A2E Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_211(hParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = hParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

int func_98(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4ADA Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_94(hParam0, 0))
		return 0;

	num = func_115(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_212(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_213(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_214(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_99(Hash hParam0) // Position - 0x4B5C Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_123() != -1)
		return false;

	return func_100(hParam0) != 0;
}

Hash func_100(Hash hParam0) // Position - 0x4B78 Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_215(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_216(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_101(Hash hParam0) // Position - 0x4BB4 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_102(Hash hParam0) // Position - 0x4BC2 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_215(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_101(collectableItemHash))
			if (func_148(func_216(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_103(Hash hParam0) // Position - 0x4C0F Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_217(48);
	func_218(false, -1);
	return;
}

BOOL func_104(int iParam0) // Position - 0x4C2A Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_123() != -1)
		return false;

	return func_135(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_105(int iParam0, BOOL bParam1) // Position - 0x4C4D Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_219(iParam0, &num, &num2);

	if (!func_220(iParam0, num, num2, bParam1))
		return;

	func_221(num, num2);
	return;
}

int func_106(Hash hParam0) // Position - 0x4C7A Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_107(Hash hParam0) // Position - 0x4C8D Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_108() // Position - 0x4CA0 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_109(int iParam0) // Position - 0x4CBF Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_123() != -1)
		return false;

	return func_135(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_110(int iParam0) // Position - 0x4CE2 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_123() != -1)
		return false;

	if (!func_193(iParam0))
		return false;

	return func_222(Global_1347702[iParam0 /*49*/].f_15);
}

int func_111() // Position - 0x4D12 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_148(func_223(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_112(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x4D47 Hash - 0x2D6CF941 ^0x4D2E905D
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	char* str5;
	char* str6;
	var unk;
	int num;
	int num2;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case 38:
			str = "MISSION_RCCIG";
			str2 = "SP_MISSIONS_13";
		
			if (func_108() && func_110(38) || func_104(38))
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				str6 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				hash = joaat("col_cc_intro");
			}
			else
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				str6 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				hash = joaat("col_cc_intro_pre");
			}
		
			str5 = "COL_CC_TITLE";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = 12;
			hash2 = joaat("CIGARETTE_CARDS");
			break;
	
		case 39:
			if (func_108() && func_110(39) || func_104(39))
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_02";
				str6 = "COL_DB_INTRO";
				num = 3;
				hashKey = joaat("blip_rc_deborah");
				hash = joaat("col_db_intro");
			}
			else
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_01";
				str6 = "COL_DB_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				hash = joaat("col_db_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_DB_TITLE";
			unk = { 122.7758f, -185.4978f, 116.4383f };
			num2 = 30;
			hash2 = joaat("dino_bones");
			break;
	
		case 41:
			if (func_108() && func_110(41) || func_104(41))
				str = "MISSION_RCFSH2";
			else
				str = "MISSION_RCFSH1";
		
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_RARE_FISH_01";
			str5 = "COL_LF_TITLE";
			str6 = "COL_LF_INTRO";
			unk = { 337.3075f, -684.5404f, 41.8362f };
			num = 13;
			hash2 = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
			if (hParam3 == joaat("exotic_stage_01"))
			{
				str = "MISSION_RCEXO1";
				str4 = "RCEXO1_DESC";
				num2 = 30;
			}
			else if (hParam3 == joaat("exotic_stage_02"))
			{
				str = "MISSION_RCEXO2";
				str4 = "RCEXO2_DESC";
				num2 = 37;
			}
			else if (hParam3 == joaat("exotic_stage_03"))
			{
				str = "MISSION_RCEXO3";
				str4 = "RCEXO3_DESC";
				num2 = 40;
			}
			else if (hParam3 == joaat("exotic_stage_04"))
			{
				str = "MISSION_RCEXO4";
				str4 = "RCEXO4_DESC";
				num2 = 50;
			}
			else if (hParam3 == joaat("exotic_stage_05"))
			{
				str = "MISSION_RCEXO5";
				str4 = "RCEXO5_DESC";
				num2 = 25;
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_EX_TITLE";
			str6 = "COL_EX_INTRO";
			unk = { 2585.6682f, -1009.6161f, 44.979717f };
			num = func_224(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_108() && func_110(49) || func_104(49))
			{
				str = "MISSION_RCRKF2";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				str6 = "COL_RC_INTRO";
				num = 3;
				hashKey = joaat("blip_scm_frances");
				hash = joaat("col_rc_intro");
			}
			else
			{
				str = "MISSION_RCRKF1";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				str6 = "COL_RC_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				hash = joaat("col_rc_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_RC_TITLE";
			unk = { -2178.646f, -245.6886f, 191.1569f };
			num2 = 10;
			hash2 = joaat("rock_carvings");
			break;
	
		case 51:
			str = "MISSION_RCTAX1";
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			str5 = "COL_TX_TITLE";
			str6 = "COL_TX_INTRO";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = func_224(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_225(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_226(iParam0, hash, hash2);
	func_227(iParam0, hash, unk, str5, str4);
	func_228(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_229(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_230(iParam0, hash, hash2, iParam6);
	func_231(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_113(int iParam0) // Position - 0x5182 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_114(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x5199 Hash - 0xD806FABF ^0xD7690A3C
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	int num;

	switch (iParam0)
	{
		case 38:
			str = "COL_CC_TITLE";
			str4 = "COL_CC_CARD_FOUND";
			num = joaat("CIGARETTE_CARDS");
		
			if (func_108() && func_110(38) || func_104(38))
			{
				str2 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				str2 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
		
			hash = joaat("col_cc_intro");
			break;
	
		case 39:
			str = "COL_DB_TITLE";
			str4 = "COL_DB_FOUND";
			num = joaat("dino_bones");
		
			if (func_108() && func_110(39) || func_104(39))
			{
				str2 = "COL_DB_INTRO";
				hashKey = joaat("blip_rc_deborah");
			}
			else
			{
				str2 = "COL_DB_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
		
			hash = joaat("col_db_intro");
			break;
	
		case 41:
			str = "COL_LF_TITLE";
			str4 = "COL_LF_CAUGHT";
			str2 = "COL_LF_INTRO";
			num = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			str = "COL_EX_TITLE";
			str4 = "COL_EX_ITEMS_COLLECTED";
			str2 = "COL_EX_INTRO";
			num = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			str = "COL_RC_TITLE";
			str4 = "COL_RC_FOUND";
			num = joaat("rock_carvings");
		
			if (func_108() && func_110(49) || func_104(49))
			{
				str2 = "COL_RC_INTRO";
				hashKey = joaat("blip_scm_frances");
			}
			else
			{
				str2 = "COL_RC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
		
			hash = joaat("col_rc_intro");
			break;
	
		case 51:
			str = "COL_TX_TITLE";
			str4 = "COL_TX_CARCASS_COLLECTED";
			str2 = "COL_TX_INTRO";
			num = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	if (iParam5 == 2)
	{
		str = "MISSION_COMPLETE";
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
		str2 = "COL_ALL_LOG_UPDATED";
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (num == joaat("CIGARETTE_CARDS"))
	{
		if (func_108() && func_110(38) || func_104(38))
			hash = joaat("col_cc_intro");
		else
			hash = joaat("col_cc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 0)
		{
			hashKey2 = hParam1;
			hashKey = hParam2;
		}
	
		if (iParam5 == 2)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_234(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_107(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_108() && func_110(39) || func_104(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_108() && func_110(49) || func_104(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

int func_115(Hash hParam0) // Position - 0x5745 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_94(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_116(Hash hParam0, Hash hParam1) // Position - 0x5770 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_117(Hash hParam0, int iParam1) // Position - 0x57A1 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_94(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_118(int iParam0) // Position - 0x57C0 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_235(iParam0))
		return false;

	return func_236(iParam0);
}

void func_119(int iParam0) // Position - 0x57DC Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_235(iParam0))
		return;

	func_237(iParam0);
	func_238(iParam0);
	return;
}

Hash func_120(Hash hParam0) // Position - 0x57FD Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_94(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Hash func_121(Hash hParam0, BOOL bParam1) // Position - 0x5828 Hash - 0x27CC99BE ^0x9BD61A93
{
	Hash hash;

	switch (hParam0)
	{
		case joaat("ammo_hatchet_hewing"):
			hash = joaat("weapon_melee_hatchet_hewing");
			break;
	
		case joaat("ammo_molotov_volatile"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_ancient"):
			hash = joaat("weapon_melee_ancient_hatchet");
			break;
	
		case joaat("ammo_tomahawk_homing"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_cleaver"):
			hash = joaat("weapon_melee_cleaver");
			break;
	
		case joaat("ammo_hatchet_hunter_rusted"):
			hash = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
	
		case joaat("ammo_hatchet_double_bit_rusted"):
			hash = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
	
		case joaat("ammo_tomahawk_improved"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_viking"):
			hash = joaat("weapon_melee_hatchet_viking");
			break;
	
		case joaat("ammo_tomahawk_ancient"):
			hash = joaat("weapon_thrown_tomahawk_ancient");
			break;
	
		case joaat("ammo_hatchet"):
			hash = joaat("weapon_melee_hatchet");
			break;
	
		case joaat("ammo_hatchet_hunter"):
			hash = joaat("weapon_melee_hatchet_hunter");
			break;
	
		case joaat("ammo_dynamite"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_dynamite_volatile"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_94(hash, 0))
		if (bParam1)
			if (func_239(hash) || func_240(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_122(Hash hParam0, BOOL bParam1) // Position - 0x59AE Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_94(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

BOOL func_123() // Position - 0x59DA Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_124(Hash hParam0) // Position - 0x59E8 Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_241(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_125(BOOL bParam0) // Position - 0x5A22 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_123() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_214(bParam0));
}

BOOL func_126(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x5A40 Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	Hash hash;
	var unk6;
	int i;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
	{
		unk = { func_206(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_242(398 + i, 1);
		
			if (func_243(hParam0, &unk, hash, false))
			{
				if (func_244(hParam0, &unk6, hash))
				{
					unk28 = { func_245(hParam0, unk, hash, false) };
					func_246(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_125(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_127(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_247(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_127(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x5B92 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_129(hParam0))
		return false;

	if (!func_125(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_128(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5BCD Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_122(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_123() == -1)
		{
			func_124(weaponHash);
		
			if (hParam1 == 1248274121)
				func_248(weaponHash);
		}
	
		if (!func_210(hParam0, &unk, 1, false, false))
		{
			func_204(hParam0, 1, false, uParam2, hParam1);
			num = func_249(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_126(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_126(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_126(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_250())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_251(weaponHash))
				{
					func_126(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_126(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_252(Global_35, 2, false, true);
			
				if (func_241(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_118(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_241(weaponHash2) && func_118(24))
					if (!func_126(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_126(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_126(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}

	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && hParam1 == 1248274121)
		func_105(480, true);

	return true;
}

BOOL func_129(Hash hParam0) // Position - 0x5DD9 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_130(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x5DE7 Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_129(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_241(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_35, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

	if (func_148(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
		num3 = BUILTIN::CEIL((float)num3 * 1.1f);

	if (num2 >= num3)
	{
		num = num3;
	}
	else if (num2 < num3 && num2 >= 1)
	{
		num = num2;
	}
	else
	{
		func_167(func_253(hParam0), func_166(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_123() == -1)
			if (func_135(Global_1835011[14 /*74*/].f_1, true))
				func_105(416, false);

	if (num == 0)
		return false;

	if (func_125(false))
	{
		if (func_127(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_172(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_131(Hash hParam0) // Position - 0x5F30 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_254() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_255(Global_35, hParam0, &unk))
			func_151(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_157();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_157();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_155();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_153();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_157();
			break;
	}

	return;
}

void func_132(Hash hParam0) // Position - 0x6037 Hash - 0xA92CE7CF ^0x8CEA2EC6
{
	switch (hParam0)
	{
		case joaat("provision_trinket_shark_tooth"):
			Global_40.f_11095.f_68 = Global_40.f_11095.f_68 + 0.1f;
			break;
	
		case joaat("provision_trinket_cat_eye"):
			Global_40.f_11095.f_70 = Global_40.f_11095.f_70 + 0.2f;
			break;
	
		case joaat("provision_trinket_turtle_shell"):
			Global_40.f_11095.f_69 = Global_40.f_11095.f_69 + 0.1f;
			func_257();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_155();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_256();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_153();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_156();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_154();
			break;
	
		case joaat("provision_trinket_lion_paw"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_cougar_fang"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_moose_antler"):
			Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
			break;
	
		case joaat("provision_trinket_owl_feather"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.15f;
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.15f;
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.15f;
			func_157();
			break;
	}

	return;
}

struct<2> func_133(int iParam0) // Position - 0x6222 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

struct<2> func_134(int iParam0, int iParam1) // Position - 0x6234 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

BOOL func_135(int iParam0, BOOL bParam1) // Position - 0x624A Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_258(iParam0))
	{
		case 5:
			return true;
	
		case 6:
			if (bParam1)
				return true;
			break;
	}

	return false;
}

void func_136(Hash hParam0) // Position - 0x627B Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_116(hParam0, -2017733358);

	if (func_259() < 3)
		if (flag)
			if (func_261(func_260(hParam0), hParam0))
				func_167(79, func_166(func_260(hParam0)), true);
			else
				func_167(78, func_166(func_260(hParam0)), true);
		else
			func_167(80, func_166(func_262(hParam0)), true);

	return;
}

BOOL func_137() // Position - 0x62E8 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_263(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_263(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_263(joaat("document_arthur_high_bounty_1"), 400) || func_263(joaat("document_arthur_high_bounty_2"), 400) || func_263(joaat("document_arthur_has_poster_1"), 400) || func_263(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_138(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x635E Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_264(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_265(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_266(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_139(Hash hParam0) // Position - 0x63A5 Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_112(43, 0, 0, joaat("exotic_stage_01"), func_271(1), false, -1, false);
			func_272(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_112(39, 0, 0, 0, 0, false, 1, false);
			func_114(39, 0, 0, 0, 0, -1, 0);
			func_268(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_112(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_114(51, 0, 0, 0, 0, -1, 0);
			func_267(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_112(43, 0, 0, joaat("exotic_stage_02"), func_271(2), false, -1, false);
			func_272(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_112(43, 0, 0, joaat("exotic_stage_03"), func_271(4), false, -1, false);
			func_272(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_112(49, 0, 0, 0, 0, false, 1, false);
			func_114(49, 0, 0, 0, 0, -1, 0);
			func_270(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_112(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_114(51, 0, 0, 0, 0, -1, 0);
			func_267(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_112(41, 0, 0, 0, 0, false, 1, false);
			func_114(41, 0, 0, 0, 0, -1, 0);
			func_269(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_112(43, 0, 0, joaat("exotic_stage_05"), func_271(16), false, -1, false);
			func_272(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_112(43, 0, 0, joaat("exotic_stage_04"), func_271(8), false, -1, false);
			func_272(8);
			break;
	}

	return;
}

void func_140(Hash hParam0) // Position - 0x653B Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_273() == 1)
	{
		if (func_104(39))
		{
			func_105(342, false);
		}
		else
		{
			func_105(343, false);
			func_268(1);
		}
	}

	if (func_273() >= 30)
		func_105(344, false);

	func_112(39, 0, 0, 0, 0, false, -1, false);
	func_114(39, 0, 0, func_273(), 30, 1, 0);
	return;
}

void func_141(Hash hParam0) // Position - 0x659A Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_274() == 1)
	{
		if (func_104(49))
		{
			func_105(409, false);
		}
		else
		{
			func_105(410, false);
			func_270(1);
		}
	}

	if (func_274() >= 10)
		func_105(411, false);

	func_112(49, 0, 0, 0, 0, false, -1, false);
	func_114(49, 0, 0, func_274(), 10, 1, 0);
	return;
}

void func_142(Hash hParam0) // Position - 0x65F9 Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_105(438, false);
			func_275(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_112(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_114(51, 0, 0, num, func_224(joaat("taxidermy_order_05"), 20), 1, 0);
			func_267(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_275(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_112(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_114(51, 0, 0, num, func_224(joaat("taxidermy_order_04"), 20), 1, 0);
			func_267(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_275(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_112(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_114(51, 0, 0, num, func_224(joaat("taxidermy_order_03"), 20), 1, 0);
			func_267(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_105(437, false);
			func_105(440, false);
			func_275(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_112(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_114(51, 0, 0, num, func_224(joaat("taxidermy_order_01"), 20), 1, 0);
			func_267(1);
			func_276(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_275(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_112(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_114(51, 0, 0, num, func_224(joaat("taxidermy_order_02"), 20), 1, 0);
			func_267(8);
			break;
	
		default:
			func_105(439, false);
			break;
	}

	return;
}

void func_143() // Position - 0x67E7 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_144(Hash hParam0, int iParam1) // Position - 0x680B Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_123() == -1)
	{
		if (!func_104(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_105(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_105(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_105(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_105(400, false);
		}
		else if (func_116(hParam0, 412399755))
		{
			func_277(joaat("exotic_stage_01"));
		
			if (func_278() == 0)
			{
				func_218(false, 10);
				num2 = func_279(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_280(hParam0) < func_281(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_104(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_105(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_105(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_105(401, false);
		}
		else if (func_116(hParam0, 709057512))
		{
			func_277(joaat("exotic_stage_02"));
		
			if (func_278() == 1)
			{
				func_218(false, 10);
				num2 = func_279(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_280(hParam0) < func_281(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_104(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_105(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_105(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_105(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_105(398, false);
		}
		else if (func_116(hParam0, -1478961327))
		{
			func_277(joaat("exotic_stage_03"));
		
			if (func_278() == 2)
			{
				func_218(false, 10);
				num2 = func_279(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_282(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_283(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_217(48);
					}
				
					if (func_280(hParam0) < func_281(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_280(hParam0) < func_281(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_104(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_105(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_105(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_105(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_105(406, false);
		}
		else if (func_116(hParam0, -1238404098))
		{
			func_277(joaat("exotic_stage_04"));
		
			if (func_278() == 3)
			{
				func_218(false, 10);
				num2 = func_279(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_280(hParam0) < func_281(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_104(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_105(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_105(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_105(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_105(403, false);
		}
		else if (func_116(hParam0, 1160548794))
		{
			func_277(joaat("exotic_stage_05"));
		
			if (func_278() == 4)
			{
				func_218(false, 10);
				num2 = func_279(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_280(hParam0) < func_281(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_145(Hash hParam0) // Position - 0x6D24 Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_282(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_283(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_217(48);
		}
	}

	return;
}

void func_146(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6D64 Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_148(func_284(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_285(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_286(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_147(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x6DC4 Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_123() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_138(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_138(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_138(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_138(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_138(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_138(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_138(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_287())
				func_138(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_138(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_138(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_138(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_138(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_138(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_138(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_138(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_138(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_138(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_138(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_138(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_138(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_138(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_138(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

BOOL func_148(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x719C Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_94(hParam0, 0))
		return false;

	num = func_115(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_288(hParam0, 1))
			return false;

	return func_98(hParam0, false, bParam2) >= iParam1;
}

void func_149(Hash hParam0) // Position - 0x7206 Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_104(41))
		func_105(363, false);
	else
		func_105(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_289(joaat("legendary_fish_02"));
			func_290(joaat("legendary_fishing_spot_02"));
			func_291(joaat("legendary_fishing_spot_02"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_289(joaat("legendary_fish_06"));
			func_290(joaat("legendary_fishing_spot_06"));
			func_291(joaat("legendary_fishing_spot_06"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_289(joaat("legendary_fish_13"));
			func_290(joaat("legendary_fishing_spot_13"));
			func_291(joaat("legendary_fishing_spot_13"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_289(joaat("legendary_fish_03"));
			func_290(joaat("legendary_fishing_spot_03"));
			func_291(joaat("legendary_fishing_spot_03"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_289(joaat("legendary_fish_08"));
			func_290(joaat("legendary_fishing_spot_08"));
			func_291(joaat("legendary_fishing_spot_08"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_289(joaat("legendary_fish_12"));
			func_290(joaat("legendary_fishing_spot_12"));
			func_291(joaat("legendary_fishing_spot_12"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_289(joaat("legendary_fish_05"));
			func_290(joaat("legendary_fishing_spot_05"));
			func_291(joaat("legendary_fishing_spot_05"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_289(joaat("legendary_fish_04"));
			func_290(joaat("legendary_fishing_spot_04"));
			func_291(joaat("legendary_fishing_spot_04"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_289(joaat("legendary_fish_14"));
			func_290(joaat("legendary_fishing_spot_14"));
			func_291(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_289(joaat("legendary_fish_09"));
			func_290(joaat("legendary_fishing_spot_09"));
			func_291(joaat("legendary_fishing_spot_09"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_289(joaat("legendary_fish_07"));
			func_290(joaat("legendary_fishing_spot_07"));
			func_291(joaat("legendary_fishing_spot_07"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_289(joaat("legendary_fish_01"));
			func_290(joaat("legendary_fishing_spot_01"));
			func_291(joaat("legendary_fishing_spot_01"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_289(joaat("legendary_fish_11"));
			func_290(joaat("legendary_fishing_spot_11"));
			func_291(joaat("legendary_fishing_spot_11"));
			func_218(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_289(joaat("legendary_fish_10"));
			func_290(joaat("legendary_fishing_spot_10"));
			func_291(joaat("legendary_fishing_spot_10"));
			func_218(false, 10);
			break;
	}

	return;
}

void func_150(Hash hParam0, var uParam1) // Position - 0x7485 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_292(hParam0, uParam1, &unk);
	return;
}

int func_151(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x7497 Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_206(hParam1, true, false) };
		iParam3 = func_293(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_295(hParam1, hParam2, func_294(iParam3, 1), bParam4, bParam9))
		return 0;

	func_296(true, func_123() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_298(32768) && hParam1 != Global_1946054.f_57[func_294(iParam3, 1) /*11*/])
			{
				func_299();
				func_297(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_294(iParam3, 1) /*11*/])
				func_297(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_297(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_300(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_297(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_301(0);
			func_302(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_297(19, 0, num, pedParam0, false);
	}

	return 1;
}

BOOL func_152(var uParam0, BOOL bParam1) // Position - 0x7605 Hash - 0x2DC8D50 ^0x79739B7E
{
	int num;
	int num2;
	int i;
	var unk;
	BOOL flag;
	Hash hash;
	Hash hash2;

	unk.f_9 = joaat("SLOTID_NONE");
	flag = false;
	*uParam0 = 0;
	hash = func_252(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_252(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_303("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_304(&unk, i, num, num2))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4))
				{
					if (!bParam1)
					{
						if (unk.f_4 == hash || unk.f_4 == hash2)
						{
						}
						else if (!flag)
						{
							*uParam0 = unk.f_4;
							flag = true;
						}
					}
				
					if (!flag)
					{
						*uParam0 = unk.f_4;
						flag = true;
					}
				}
			}
		}
	
		func_305(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_153() // Position - 0x76CE Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_154() // Position - 0x76E8 Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_155() // Position - 0x771D Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_156() // Position - 0x7739 Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_157() // Position - 0x7753 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_306();
	func_307();
	func_308();
	return;
}

void func_158(int iParam0, int iParam1, BOOL bParam2) // Position - 0x776A Hash - 0x968DA278 ^0x28094E49
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;
	Vector3 vector;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_JACK_HALL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_HIGH_STAKES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	switch (iParam1)
	{
		case joaat("treasure_hunt_loot_12"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
	
		case joaat("treasure_hunt_loot_13"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
	
		case joaat("treasure_hunt_loot_02"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
	
		case joaat("treasure_hunt_loot_18"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
	
		case joaat("treasure_hunt_loot_03"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
	
		case joaat("treasure_hunt_loot_19"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
	
		case joaat("treasure_hunt_loot_04"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
	
		case joaat("treasure_hunt_loot_16"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
	
		case joaat("treasure_hunt_loot_17"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
	
		case joaat("treasure_hunt_loot_05"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
	
		case joaat("treasure_hunt_loot_10"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
	
		case joaat("treasure_hunt_loot_07"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
	
		case joaat("treasure_hunt_loot_21"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
	
		case joaat("treasure_hunt_loot_01"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
	
		case joaat("treasure_hunt_loot_11"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
	
		case joaat("treasure_hunt_loot_06"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
	
		case joaat("treasure_hunt_loot_24"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	
		case joaat("treasure_hunt_loot_20"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
	
		case joaat("treasure_hunt_loot_09"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
	
		case joaat("treasure_hunt_loot_23"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
	
		case joaat("treasure_hunt_loot_22"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
	
		case joaat("treasure_hunt_loot_08"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
	
		case joaat("treasure_hunt_loot_14"):
			str = "COL_TH_OBJ_RDL";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
	
		case joaat("treasure_hunt_loot_15"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
	}

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_REMOVE_ENTRY(3, hash);

	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hash, vector, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(str2), 0);

	if (bParam2)
	{
		switch (iParam0)
		{
			case -220219788:
				str = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
		
			case 6410548:
				str = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		
			case 218622660:
				str = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
		
			case 390004462:
				str = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
		
			case 499813453:
				str = "COL_TH_JACK_HALL_COMPLETE";
				break;
		
			case 666607663:
				str = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
		}
	}

	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, MISC::GET_HASH_KEY(str), str, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hash, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hash, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hash, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hash, MISC::VAR_STRING(2, str3));
	return;
}

void func_159(int iParam0, BOOL bParam1) // Position - 0x7B41 Hash - 0x922C415B ^0x9ED05E13
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_POISONOUS_TRAIL";
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_JACK_HALL";
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_HIGH_STAKES";
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (bParam1)
		str = "MISSION_COMPLETE";

	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	func_232(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_160(int iParam0) // Position - 0x7C57 Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_161(int iParam0) // Position - 0x7C72 Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_162(int iParam0) // Position - 0x7C8D Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_163(int iParam0) // Position - 0x7CA8 Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_164(int iParam0) // Position - 0x7CC3 Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_165(int iParam0) // Position - 0x7CDE Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_166(Hash hParam0) // Position - 0x7CF9 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_94(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_167(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x7D12 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_219(iParam0, &num, &num2);

	if (!func_220(iParam0, num, num2, bParam2))
		return;

	if (!func_309(iParam0, 1024))
		return;

	func_221(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_168(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7D72 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_219(iParam0, &num, &num2);

	if (!func_220(iParam0, num, num2, bParam2))
		return;

	if (!func_309(iParam0, 1024))
		return;

	func_221(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_169() // Position - 0x7DED Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_215())
		return func_170();

	endRange = func_215() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_215(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_310(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_216(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_170() // Position - 0x7E67 Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_215());
	return func_216(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_171(var uParam0) // Position - 0x7E8A Hash - 0x26E9B20B ^0x108E1842
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

BOOL func_172(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x7EDF Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_94(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_206(hParam0, false, true) };
	unk6 = { func_245(hParam0, unk, unk.f_4, false) };
	return func_311(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_173(Hash hParam0) // Position - 0x7F2E Hash - 0x90E372CB ^0xEE55522E
{
	eStackSize stackSize;
	Hash hash;
	Hash hash2;

	if (func_123() != -1)
		return;

	switch (func_120(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_297(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			stackSize = func_313(hParam0);
		
			if (func_314(stackSize))
				func_315(stackSize, stackSize >= 0 && stackSize <= 5, true);
			else
				func_297(30, hParam0, 0, 0, false);
		
			if (func_316() == -2125499975 || func_316() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_297(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_316() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_297(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_317(-525676072, false))
				if (func_318(-525676072, &hash))
					func_297(33, hash, 0, 0, false);
		
			func_297(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_312(81053684, false) <= 0)
				func_297(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_319(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_151(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_119(24);
	
		if (func_152(&hash2, false))
			func_126(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_174(Hash hParam0) // Position - 0x8101 Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_116(hParam0, 943695443))
		func_320(0, hParam0);
	else if (func_116(hParam0, -2096528786))
		func_320(1, hParam0);
	else if (func_116(hParam0, -1094167013))
		func_320(2, hParam0);
	else if (func_116(hParam0, 1936654645))
		func_320(3, hParam0);
	else if (func_116(hParam0, 1306489306))
		func_320(4, hParam0);
	else if (func_116(hParam0, 435762317))
		func_320(5, hParam0);
	else if (func_116(hParam0, 1259363210))
		func_320(6, hParam0);
	else if (func_116(hParam0, 881398259))
		func_320(7, hParam0);
	else if (func_116(hParam0, -541549214))
		func_320(8, hParam0);
	else if (func_116(hParam0, 130796156))
		func_320(-1, hParam0);

	return;
}

int func_175(Hash hParam0, int iParam1) // Position - 0x81F7 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_321(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_322(hParam0, &unk5, &unk, iParam1);
}

struct<2> func_176(Hash hParam0) // Position - 0x8220 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_94(hParam0, 0))
		return unk;

	if (func_116(hParam0, -305066475))
		if (func_123() == -1)
			if (func_116(hParam0, -537818634))
				return func_91(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_91(joaat("deadeye_items"));
	else if (func_116(hParam0, -537818634))
		return func_91(joaat("medicine_items"));

	if (func_116(hParam0, 2084895747))
		return func_91(joaat("lock_breaker_items"));

	return unk3;
}

void func_177(Hash hParam0) // Position - 0x82B4 Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_123() == -1)
				if (func_135(Global_1835011[4 /*74*/].f_1, true))
					func_105(109, true);
			break;
	}

	return;
}

void func_178(Hash hParam0, int iParam1) // Position - 0x82ED Hash - 0x3053C451 ^0x7CF83135
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_323(0));
	func_326(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_325(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_179(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x832D Hash - 0xB6CF78C ^0x845E9244
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	char* str;
	int num3;
	int num4;
	int num5;
	char* str2;
	int num6;
	const char* str3;

	if (hParam0 == joaat("ammo_moonshinejug"))
		return;

	if (!func_94(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_327())
	{
		func_328(hParam0, iParam1, bParam2, iParam4);
		return;
	}

	flag = false;
	num = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || iParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_117(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_115(hParam0);
	num3 = 0;
	num4 = joaat("Inventory");

	if (num2 == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver"))
	{
		num3 = joaat("ammo_types");
		num4 = joaat("ammo_types");
	}

	if (num2 == joaat("weapon_mod") || num2 == joaat("weapon_decoration"))
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_330(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num5 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	num6 = 0;

	if (flag)
	{
		num5 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num6 = 1;
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_rpg_special_1");
		else
			num5 = joaat("color_yellowdark");

	str3 = func_331(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_166(hParam0)), num), num5);

	if (iParam1 == 1 || func_116(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_166(hParam0));

	func_326(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

void func_180(Ped* ppedParam0, BOOL bParam1, int iParam2) // Position - 0x8582 Hash - 0xE077C306 ^0xAE09206
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
		if (bParam1)
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
		else if (!PED::GET_PED_CONFIG_FLAG(*ppedParam0, 186, true))
			PED::DELETE_PED(ppedParam0);

	return;
}

void func_181(var uParam0, Volume volParam1, BOOL bParam2) // Position - 0x85B9 Hash - 0x2EB65318 ^0x737362FB
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

void func_182(var uParam0) // Position - 0x85F1 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_183(var uParam0) // Position - 0x85F9 Hash - 0x5DAA6EFD ^0x8C3E0B48
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[i]);
	}

	return;
}

void func_184(var uParam0) // Position - 0x862F Hash - 0x5DAA6EFD ^0x787D1A53
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(uParam0->f_22[i] == 0))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_22[i]);
	}

	return;
}

Hash func_185(var uParam0, int iParam1) // Position - 0x8665 Hash - 0x573D844D ^0x76274586
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 32:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 4096:
		case 8192:
		case 16384:
		case 32768:
		case 131072:
			break;
	
		case 16:
			if (iParam1 == 0)
				if (!func_41(uParam0->f_3, 4))
					return joaat("world_player_inspect_letter_80cm_paper_w15_1_h24_foldvertical_p_cs_letter03x");
			break;
	
		case 2048:
			switch (iParam1)
			{
				case 0:
				case 1:
					break;
			
				case 2:
					break;
			
				default:
					break;
			}
			break;
	
		case 65536:
			break;
	
		case 262144:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("prop_player_str_gen_bsmt_loot");
				
					default:
					
				}
			}
			break;
	
		default:
			break;
	}

	return 0;
}

Vector3 func_186(var uParam0, int iParam1) // Position - 0x8754 Hash - 0x7D92E42F ^0xD64F2D3A
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 32:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 4096:
		case 8192:
		case 16384:
		case 32768:
		case 131072:
			break;
	
		case 16:
			return 1984.534f, 1192.017f, 170.403f;
	
		case 2048:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				case 2:
					return 0f, 0f, 0f;
			
				default:
				
			}
			break;
	
		case 65536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
				
			}
			break;
	
		case 262144:
			switch (iParam1)
			{
				case 0:
					return 1189.531f, -103.881f, 94.897f;
			
				default:
				
			}
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

float func_187(var uParam0, int iParam1) // Position - 0x8859 Hash - 0x5F2B7B ^0x1F7940FF
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 32:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 4096:
		case 8192:
		case 16384:
		case 32768:
		case 131072:
			break;
	
		case 16:
			return -110f;
	
		case 2048:
			switch (iParam1)
			{
				case 0:
					return 0f;
			
				case 1:
					return 0f;
			
				default:
				
			}
			break;
	
		case 65536:
			switch (iParam1)
			{
				case 0:
					return 0f;
			
				default:
				
			}
			break;
	
		case 262144:
			switch (iParam1)
			{
				case 0:
					return 0f;
			
				default:
				
			}
			break;
	
		default:
			break;
	}

	return 0f;
}

float func_188(var uParam0, int iParam1) // Position - 0x8932 Hash - 0xB2094D25 ^0xEC07B69E
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 32:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 2048:
		case 4096:
		case 8192:
		case 16384:
		case 32768:
		case 65536:
		case 131072:
			break;
	
		case 16:
			break;
	
		case 262144:
			switch (iParam1)
			{
				case 0:
					return 3f;
			
				default:
				
			}
			break;
	
		default:
			break;
	}

	return 0f;
}

int func_189(int iParam0, int iParam1) // Position - 0x89CC Hash - 0x8FA0E29 ^0xC3F68E87
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

int func_190(int iParam0) // Position - 0x9AE5 Hash - 0xB1EC3C9 ^0x6FAB5D7B
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_4;

	return 0;
}

BOOL func_191() // Position - 0x9B04 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_192(int iParam0) // Position - 0x9B57 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_88(iParam0))
		return -1;

	return func_333(func_332(iParam0));
}

BOOL func_193(int iParam0) // Position - 0x9B77 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_194(int iParam0, int iParam1) // Position - 0x9B8D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_195(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9B9C Hash - 0xC9655EC3 ^0x88C9AFE1
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

float func_196() // Position - 0x9C3A Hash - 0x5FC8DB2 ^0x961D5AF9
{
	float num;
	int value;
	int num2;
	int value2;
	int value3;
	int num3;
	eStackSize stackSize;

	stackSize = func_334();
	value3 = func_335(stackSize);
	num3 = func_336(stackSize);
	value2 = func_337(num3, value3);
	num2 = func_338(stackSize);
	value = func_339(stackSize);
	num = BUILTIN::TO_FLOAT(value) + (BUILTIN::TO_FLOAT(num2 - 1) * 24f) + (BUILTIN::TO_FLOAT(value2) * 24f) + (BUILTIN::TO_FLOAT(value3) * 365.2422f * 24f);
	return num;
}

BOOL func_197(int iParam0, var uParam1) // Position - 0x9CAB Hash - 0x3E138978 ^0x3E138978
{
	int num;

	num = func_340(iParam0);

	if (num != 0)
	{
		*uParam1 = func_341(iParam0);
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

void func_198(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x9CD6 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_342(eptParam1))
		{
			func_40(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_343(pedParam0, 0, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, &func_3, true);
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
			func_344(pedParam0, false);
			flag = true;
		}
	
		func_345(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_199(int iParam0, var uParam1) // Position - 0x9DB7 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = uParam1;
	return;
}

void func_200(var uParam0, float fParam1) // Position - 0x9DD7 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_346() - fParam1;
	func_347(uParam0, 1);
	func_348(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_201(int iParam0, var uParam1) // Position - 0x9DFD Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = uParam1;
	return;
}

BOOL func_202(Hash hParam0) // Position - 0x9E1D Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_115(hParam0) == joaat("WEAPON");
}

BOOL func_203(Hash hParam0) // Position - 0x9E31 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_123() != -1)
		return false;

	if (func_117(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_210(hParam0, &unk, 1, false, false);

	return func_148(hParam0, 1, false);
}

void func_204(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x9E75 Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_115(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_122(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_240(weaponHash))
	{
		if (func_123() == -1)
			func_124(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_98(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_179(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_205(Hash hParam0, var uParam1) // Position - 0x9F1C Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_116(hParam0, 58855631))
	{
		func_349(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

struct<5> func_206(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9F4A Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_350(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_115(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_354(hParam0, -1823706425))
			{
				unk = { func_245(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_354(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_245(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_353(bParam1) };
		
			switch (func_120(hParam0))
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
				unk = { func_245(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_351(bParam1) };
		
			if (bParam2 && func_352(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_243(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_243(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_244(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_355(unk, &unk28, bParam1, false))
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

int func_207(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA207 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_94(hParam0, 0))
		return 0;

	if (!func_125(false))
		bParam2 = true;

	if (bParam2 || !func_356(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_214(bParam3), hParam0);
}

int func_208(Hash hParam0, BOOL bParam1) // Position - 0xA255 Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_129(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_214(bParam1), hParam0, false);
}

BOOL func_209() // Position - 0xA27F Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_123() != -1)
		return false;

	if (!func_108())
		return false;

	if (!func_135(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[2 /*74*/].f_1, true) && func_135(Global_1347702[120 /*49*/].f_15, true) && !func_135(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[37 /*74*/].f_1, true) && !func_135(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[57 /*74*/].f_1, true) && !func_135(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[26 /*74*/].f_1, true) && !func_135(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_135(Global_1835011[62 /*74*/].f_1, true) && func_135(Global_1835011[63 /*74*/].f_1, true) && !func_135(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[75 /*74*/].f_1, true) && !func_135(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_135(Global_1835011[76 /*74*/].f_1, true) && !func_135(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[40 /*74*/].f_1, true) && func_135(Global_1835011[41 /*74*/].f_1, true) && !func_135(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[62 /*74*/].f_1, true) && func_135(Global_1835011[63 /*74*/].f_1, true) && !func_135(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[65 /*74*/].f_1, true) && func_135(Global_1835011[66 /*74*/].f_1, true) && !func_135(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_210(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA4C5 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_357(&hParam0);

	if (!func_94(hParam0, 0))
		return 0;

	if (!func_125(false))
		bParam3 = true;

	if (func_202(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_351(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_243(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_244(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_352(hParam0, true))
				if (!func_243(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_244(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_358(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_207(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_356(hParam0))
		inventoryItemCountWithItemid = func_359(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_214(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

int func_211(Hash hParam0, int iParam1) // Position - 0xA60A Hash - 0x7A1C2599 ^0xFF9B5634
{
	var outData;
	int outIndex;
	int i;

	outData = 20;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
				return outData[i /*2*/];
		}
	}

	return 0;
}

Hash func_212(Hash hParam0, int iParam1) // Position - 0xA654 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_94(hParam0, 0))
		return 0;

	num = func_115(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_116(hParam0, 1399091007))
	{
		func_292(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_213(Hash hParam0, BOOL bParam1) // Position - 0xA6CE Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_360(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_361(&unk, func_351(false));

	if (!func_362(&unk, &num, &num2, false))
		return 0;

	func_305(num);
	return num2;
}

int func_214(BOOL bParam0) // Position - 0xA72C Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_123() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_215() // Position - 0xA76D Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_216(Hash hParam0) // Position - 0xA77F Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_217(int iParam0) // Position - 0xA78D Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_123() != -1)
		return;

	num = func_363(iParam0);
	value = func_364(iParam0);

	if (Global_1347477.f_117 || !func_118(31) || !func_365(num))
		return;

	if (value <= 0f)
		return;

	if (func_366(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_367(num, Global_40.f_11095.f_11[num] + value, false);
	func_326(MISC::VAR_STRING(6, func_368(iParam0), value), "itemtype_textures", func_369(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_218(BOOL bParam0, int iParam1) // Position - 0xA88C Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_370(&Global_0, 8);

	if (!func_108() || func_123() != -1)
		return;

	func_370(&Global_0, 1);
	return;
}

void func_219(int iParam0, var uParam1, var uParam2) // Position - 0xA8D2 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_220(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xA8EE Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_371(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_372(iParam0))
		return false;

	if (func_373(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_309(iParam0, 1) || func_374(32768))
		if (!func_309(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_375())
		return false;

	return true;
}

void func_221(int iParam0, int iParam1) // Position - 0xA990 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_222(int iParam0) // Position - 0xA9B4 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_258(iParam0);
	return num == 3 || num == 4;
}

Hash func_223(int iParam0) // Position - 0xA9D2 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

int func_224(Hash hParam0, int iParam1) // Position - 0xAA8B Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_376(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_225(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0xAABA Hash - 0xF20034E5 ^0x65DE0CC4
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_111() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_377(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_378(), 12);
			break;
	
		case -1531394072:
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_EX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", iParam4, iParam5);
			break;
	
		case joaat("dino_bones"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_DB_COMPLETE";
			else if (func_273() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_379(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_273(), 30);
			break;
	
		case joaat("taxidermy"):
			if (iParam2 == 3)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 4)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			else if (iParam2 == 5)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			else if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			else if (iParam2 == 8)
				sParam3 = "COL_TX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_224(iParam6, 20));
			break;
	
		case 1995362678:
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_LF_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_380(), 13);
			break;
	
		case joaat("rock_carvings"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_RC_COMPLETE";
			else if (func_274() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_381(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_274(), 10);
			break;
	}

	return sParam3;
}

BOOL func_226(int iParam0, Hash hParam1, Hash hParam2) // Position - 0xADA7 Hash - 0xC978E890 ^0x1621426E
{
	if (hParam2 == joaat("CIGARETTE_CARDS"))
		if (hParam1 == joaat("col_cc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_cc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_cc_intro_pre"));
	else if (hParam2 == joaat("dino_bones"))
		if (hParam1 == joaat("col_db_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_db_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_db_intro_pre"));
	else if (hParam2 == joaat("rock_carvings"))
		if (hParam1 == joaat("col_rc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_rc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_rc_intro_pre"));

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_REMOVE_ENTRY(3, hParam1);

	return true;
}

BOOL func_227(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0xAE54 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_228(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0xAE80 Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_229(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0xAECF Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_382(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_148(hash, 1, false) || func_384(func_383(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_382(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_382(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_273() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_385(i)), func_385(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_379() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_385(i)), func_385(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_385(i)), func_385(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_284(iParam3, func_386(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_280(hash) - iParam7 >= func_224(iParam3, func_387(i));
				else
					flag = func_280(hash) >= func_224(iParam3, func_387(i));
			else if (hParam4 == hash)
				flag = func_280(hash) + iParam7 >= func_224(iParam3, func_387(i));
			else
				flag = func_280(hash) >= func_224(iParam3, func_387(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_389(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_274() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_391(i)), func_391(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_381() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_391(i)), func_391(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_391(i)), func_391(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_284(iParam3, func_386(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_280(hash) - iParam7 >= 1;
				else
					flag = func_392(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_392(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_393(hash)), func_393(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_230(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0xB244 Hash - 0x3C34F826 ^0xF991BF0B
{
	BOOL flag;

	flag = false;

	if (iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("CIGARETTE_CARDS"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == -1531394072)
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == 1995362678)
	{
		if (func_380() >= 13)
			flag = true;
		else
			flag = false;
	
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", flag, true, false);
	}

	if (iParam3 == 7 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("taxidermy"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", flag, true, false);

	return true;
}

BOOL func_231(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xB34D Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_88(func_394(0)) && func_395(0) == 1 || func_395(0) == 8 || func_395(0) == 6)
		iParam3 = 7;

	if (hParam2 == joaat("dino_bones") || hParam2 == 1995362678 || hParam2 == joaat("rock_carvings"))
	{
		if (iParam3 == 7)
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
	}
	else if (hParam2 == joaat("taxidermy"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
			}
		}
	}

	return true;
}

int func_232(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0xB3EF Hash - 0x51CE9407 ^0x19439D00
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam7;
	num.f_1 = sParam8;
	num.f_2 = sParam9;
	num.f_3 = iParam11;
	num.f_4 = iParam4;
	num.f_4.f_1 = iParam6;
	num.f_4.f_2 = sParam5;
	num2.f_7 = 1;
	num2 = iParam10;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Hash hParam0) // Position - 0xB466 Hash - 0xA17D549C ^0x62F0D27C
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
	
		default:
		
	}

	return "";
}

int func_234(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0xB516 Hash - 0xB88D7AA5 ^0x36259347
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam4;
	num.f_1 = iParam5;
	num.f_2 = iParam6;
	num.f_3 = iParam8;
	num2.f_7 = 1;
	num2 = iParam7;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

BOOL func_235(int iParam0) // Position - 0xB577 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_236(int iParam0) // Position - 0xB58A Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_237(int iParam0) // Position - 0xB5B4 Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_40.f_7857[num2];
	MISC::SET_BIT(&address, offset);
	Global_40.f_7857[num2] = address;
	return;
}

void func_238(int iParam0) // Position - 0xB5EE Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_108() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_234("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_105(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_108() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_234("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_105(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_108() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_234("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_105(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_108() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_234("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_105(589, false);
			break;
	
		case 6:
			break;
	
		case 7:
			break;
	
		case 8:
			break;
	
		case 9:
			break;
	
		case 10:
			break;
	
		case 11:
			func_396(true);
			break;
	
		case 12:
			break;
	
		case 13:
			break;
	
		case 14:
			break;
	
		case 15:
			break;
	
		case 16:
			break;
	
		case 17:
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_397(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_397(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_397(3);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 23:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
		
			if (func_123() == -1)
			{
				if (!func_319(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_404(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_250())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_148(hash, 1, false))
						func_172(hash, 1, 752097756);
				
					func_151(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
				}
			}
			break;
	
		case 25:
			break;
	
		case 26:
			break;
	
		case 27:
			break;
	
		case 28:
			break;
	
		case 29:
			break;
	
		case 30:
			break;
	
		case 31:
			break;
	
		case 32:
			break;
	
		case 33:
			func_398(true);
			break;
	
		case 34:
			func_399(true);
			break;
	
		case 35:
			func_400(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_401(false);
			break;
	
		case 38:
			func_402(false);
			break;
	
		case 39:
			func_403(false);
			break;
	
		case 40:
			break;
	
		case 41:
			break;
	
		case 42:
			break;
	
		case 43:
			break;
	
		case 44:
			break;
	
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 46:
			func_405();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_123() == -1)
				if (!func_148(1013902307, 1, false))
					func_172(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_123() == -1)
				if (!func_148(786809402, 1, false))
					func_172(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_123() == -1)
			{
				if (!func_148(1013902307, 1, false))
					func_172(1013902307, 1, 752097756);
			
				if (!func_148(142640135, 1, false))
					func_172(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_123() == -1)
			{
				if (!func_148(786809402, 1, false))
					func_172(786809402, 1, 752097756);
			
				if (!func_148(-518019409, 1, false))
					func_172(-518019409, 1, 752097756);
			}
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

BOOL func_239(Hash hParam0) // Position - 0xBC16 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_240(Hash hParam0) // Position - 0xBC3E Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_241(Hash hParam0) // Position - 0xBC66 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

Hash func_242(int iParam0, int iParam1) // Position - 0xBC81 Hash - 0xEA82FE59 ^0xEA82FE59
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

BOOL func_243(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0xE143 Hash - 0x4285A587 ^0x4285A587
{
	return func_359(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_244(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xE15B Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_406(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_245(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xE17C Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_94(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_214(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_246(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0xE1AD Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_407(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_355(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_125(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_214(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_247(Hash hParam0, int iParam1) // Position - 0xE23D Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_408(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_248(Hash hParam0) // Position - 0xE285 Hash - 0x708BD33E ^0x1C093A52
{
	char* propertyName;
	char* propertyName2;
	eStackSize value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		return;

	if (WEAPON::IS_WEAPON_BOW(hParam0))
		return;

	propertyName = "player_newWeaponType";
	propertyName2 = "player_newWeaponTime";

	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
	{
		propertyName = "player_newPistolWeaponType";
		propertyName2 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
	{
		propertyName = "player_newRevolverWeaponType";
		propertyName2 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
	{
		propertyName = "player_newRifleWeaponType";
		propertyName2 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
	{
		propertyName = "player_newShotgunWeaponType";
		propertyName2 = "player_newShotgunWeaponTime";
	}

	DECORATOR::DECOR_SET_INT(Global_35, propertyName, hParam0);
	value = func_334();
	func_409(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_249(Hash hParam0) // Position - 0xE354 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_410(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("ammo_arrow")) <= 0)
			num = 10;
		else
			num = 0;
	}
	else if (WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(hParam0))
			num = 12;
		else
			num = WEAPON::GET_WEAPON_CLIP_SIZE(hParam0) * 4;
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

BOOL func_250() // Position - 0xE3D0 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_123() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_251(Hash hParam0) // Position - 0xE3F5 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_252(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE407 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_253(Hash hParam0) // Position - 0xE42D Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_118(50))
			{
				if (!func_118(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_118(51))
			{
				if (!func_118(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_254() // Position - 0xE499 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_255(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0xE4AA Hash - 0x4FC4FA99 ^0x540DBE26
{
	var unk;
	BOOL isMP;
	BOOL metaPedType;
	Hash hash;
	int num;
	int num2;
	int num3;
	BOOL flag;
	Hash componentHash;
	int num4;
	int num5;
	int numComponentsInPed;

	if (!func_94(hParam1, 0))
		return false;

	if (func_115(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_123() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_120(hParam1) == -999503751)
		return true;

	num = func_411(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_116(hParam1, 866047851))
	{
		num2 = func_294(num, 1);
	
		if (func_412(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
		{
			*uParam2 = -265166256;
			return false;
		}
	
		flag = true;
	}

	switch (num)
	{
		case -1944638739:
			num2 = 35;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_116(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_413(1868067663, &unk))
			{
				*uParam2 = 939463734;
				return false;
			}
		
			[[fallthrough]];
	
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!flag)
				break;
		
			numComponentsInPed = PED::_GET_NUM_COMPONENTS_IN_PED(pedParam0);
			num5 = func_414(componentHash, num, metaPedType, isMP);
			num4 = func_414(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
			if ((numComponentsInPed + num5) - num4 > 31)
			{
				*uParam2 = -1608241763;
				return false;
			}
			break;
	
		case 1742327865:
			if (PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(componentHash, metaPedType, isMP) == joaat("neckties") && PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
		
			num2 = 10;
			hash = func_120(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
			if (flag && hash == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
	
		case 1900541263:
			num2 = 36;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
		
			if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
	
		case 1958421083:
			hash = func_120(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_116(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_415(Global_1946054.f_1497.f_1[num2 /*3*/]))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			break;
	}

	*uParam2 = 0;
	return true;
}

void func_256() // Position - 0xE7BA Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_257() // Position - 0xE7DB Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	float num2;

	num = Global_40.f_11095.f_44;
	num2 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num2);
	return;
}

int func_258(int iParam0) // Position - 0xE830 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_88(iParam0))
		return -1;

	return func_416(iParam0);
}

int func_259() // Position - 0xE84C Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_148(func_417(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_260(Hash hParam0) // Position - 0xE87E Hash - 0xBD10D1A2 ^0xAD2FE305
{
	switch (hParam0)
	{
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("provision_earring_silver"):
		case joaat("provision_rs_abalone_shell_fragment"):
			return joaat("provision_talisman_buffalo_horn");
	
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("provision_bracelet_silver"):
		case joaat("provision_rc_quartz_chunk"):
			return joaat("provision_talisman_bear_claw");
	
		case joaat("provision_bracelet_gold"):
		case joaat("provision_cc_vintage_handcuffs"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("provision_talisman_alligator_tooth");
	
		case joaat("provision_rf_wood_cobalt"):
		case joaat("provision_earring_gold"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("provision_talisman_boar_tusk");
	
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("provision_talisman_raven_claw");
	}

	return 0;
}

BOOL func_261(int iParam0, Hash hParam1) // Position - 0xE914 Hash - 0x33707815 ^0xEA5B7C5C
{
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			if (hParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				hash = joaat("provision_rs_abalone_shell_fragment");
				hash2 = joaat("provision_earring_silver");
			}
			else if (hParam1 == joaat("provision_rs_abalone_shell_fragment"))
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_earring_silver");
			}
			else
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_rs_abalone_shell_fragment");
			}
			break;
	
		case joaat("provision_talisman_bear_claw"):
			if (hParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				hash = joaat("provision_rc_quartz_chunk");
				hash2 = joaat("provision_bracelet_silver");
			}
			else if (hParam1 == joaat("provision_rc_quartz_chunk"))
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_bracelet_silver");
			}
			else
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_rc_quartz_chunk");
			}
			break;
	
		case joaat("provision_talisman_boar_tusk"):
			if (hParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				hash = joaat("provision_rf_wood_cobalt");
				hash2 = joaat("provision_earring_gold");
			}
			else if (hParam1 == joaat("provision_rf_wood_cobalt"))
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_earring_gold");
			}
			else
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_rf_wood_cobalt");
			}
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			if (hParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				hash = joaat("provision_cc_vintage_handcuffs");
				hash2 = joaat("provision_bracelet_gold");
			}
			else if (hParam1 == joaat("provision_cc_vintage_handcuffs"))
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_bracelet_gold");
			}
			else
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_cc_vintage_handcuffs");
			}
			break;
	}

	if (func_148(hash, 1, false) && func_148(hash2, 1, false))
		return true;

	return false;
}

Hash func_262(Hash hParam0) // Position - 0xEA75 Hash - 0xB8EC44B7 ^0x8CFD1640
{
	switch (hParam0)
	{
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("provision_trinket_wolf_heart");
	
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_pronghorn_antler");
	
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("provision_trinket_fox_claw");
	
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("provision_trinket_coyote_fang");
	
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("provision_trinket_ram_horn");
	
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_buck_antler");
	
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_elk_antler");
	
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("provision_trinket_cougar_fang");
	
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("provision_trinket_bison_horn");
	
		case joaat("provision_lions_paw"):
			return joaat("provision_trinket_lion_paw");
	
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_moose_antler");
	
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("provision_trinket_beaver_tooth");
	
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("provision_trinket_panther_eye");
	
		default:
		
	}

	return 0;
}

BOOL func_263(Hash hParam0, int iParam1) // Position - 0xEB3C Hash - 0xB78A2FC ^0x6E3EB1C7
{
	eStackSize stackSize;

	stackSize = func_418(hParam0);

	if (stackSize != -15)
	{
		func_409(&stackSize, 0, iParam1, 0, 0, 0, 0, false);
		return !func_419(stackSize, true);
	}

	return false;
}

int func_264(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xEB6E Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_148(joaat("provision_trinket_elk_antler"), 1, false))
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
		
			if (func_94(hash, 0) && func_116(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_265(int iParam0, const char* sParam1, int iParam2) // Position - 0xEC33 Hash - 0x4DF85B80 ^0x777F302C
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_326(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_266(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xEC74 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_420())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_326(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_421(num);
			func_422(num, 0, 0);
		}
	
		func_326(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_92(func_91(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_267(int iParam0) // Position - 0xED50 Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_268(int iParam0) // Position - 0xED6B Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_269(int iParam0) // Position - 0xED86 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_270(int iParam0) // Position - 0xEDA1 Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_271(int iParam0) // Position - 0xEDBC Hash - 0xC69F7374 ^0xCEC8F963
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam0)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_280(hash);
	num3 = func_280(hash2);
	num4 = func_280(hash3);
	num6 = func_281(hash);
	num7 = func_281(hash2);
	num8 = func_281(hash3);

	if (iParam0 != 2)
	{
		num5 = func_280(hash4);
		num9 = func_281(hash4);
	}

	if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam0 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

void func_272(int iParam0) // Position - 0xEF2F Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_273() // Position - 0xEF4A Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_423(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_274() // Position - 0xEF83 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_275(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0xEF95 Hash - 0x9548C303 ^0x2CDF6383
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	switch (hParam0)
	{
		case joaat("taxidermy_order_05"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_02"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_01"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			break;
	
		case joaat("taxidermy_order_04"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_03"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
	}

	if (hParam0 == joaat("taxidermy_order_01"))
	{
		if (bParam3)
			if (func_392(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_392(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_392(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_392(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_392(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_392(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_392(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_392(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_392(hash) && func_392(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_392(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_392(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_392(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_392(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_392(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_392(hash) && func_392(hash2) && func_392(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_392(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_392(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_392(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_392(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_392(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_392(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_392(hash) && func_392(hash2) && func_392(hash3) && func_392(hash4))
			return true;
	}

	return false;
}

void func_276(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF45A Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_426();
			func_424(iParam0);
			break;
	
		case -1925798111:
			func_424(-1925798111);
			func_425(-919512195);
			func_425(420709909);
			func_425(1703426636);
			break;
	
		case -1838352012:
			func_425(-1674179981);
			func_425(-1835851517);
			func_424(-1838352012);
			break;
	
		case -1835851517:
			func_425(-1674179981);
			func_425(-1838352012);
			func_424(-1835851517);
			break;
	
		case -1738165526:
			func_424(-1738165526);
			func_425(0);
			func_425(473295046);
			break;
	
		case -1717960576:
			func_425(210001842);
			func_424(-1717960576);
			break;
	
		case -1674179981:
			func_425(-1835851517);
			func_425(-1838352012);
			func_424(-1674179981);
			break;
	
		case -1612662716:
			func_425(1822001510);
			func_424(-1612662716);
			break;
	
		case -1414537028:
			func_425(38162571);
			func_425(1350391819);
			func_425(54073871);
			func_424(-1414537028);
			break;
	
		case -1311865656:
			func_424(-1311865656);
			func_425(1509509592);
			func_425(-959357075);
			func_425(405586984);
			break;
	
		case -1271608261:
			func_425(-150493654);
			func_425(1846061697);
			func_425(-1145519186);
			func_424(-1271608261);
			break;
	
		case -1223121209:
			func_424(-1223121209);
			func_425(630808005);
			break;
	
		case -1145519186:
			func_425(-150493654);
			func_425(-1271608261);
			func_425(1846061697);
			func_424(-1145519186);
			break;
	
		case -1124061431:
			func_425(198200492);
			func_424(-1124061431);
			func_425(52706132);
			func_425(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_424(-1080627546);
			else
				func_425(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_425(-538889627);
			func_425(-538880323);
			func_425(-1056767524);
			func_424(iParam0);
			break;
	
		case -959357075:
			func_424(-959357075);
			func_425(1509509592);
			func_425(405586984);
			func_425(-1311865656);
			break;
	
		case -919512195:
			func_424(-919512195);
			func_425(-1925798111);
			func_425(420709909);
			func_425(1703426636);
			break;
	
		case -664252410:
			func_425(2019386373);
			func_425(2109952320);
			func_424(-664252410);
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
			func_427();
			func_424(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_424(-524145696);
			else
				func_425(-524145696);
		
			func_425(1626481264);
			func_425(282809459);
			break;
	
		case -502324015:
			func_425(1497516462);
			func_425(2016141805);
			func_425(1010885152);
			func_424(-502324015);
			break;
	
		case -434590080:
			func_425(1376646519);
			func_425(931649776);
			func_425(1743048395);
			func_425(449774763);
			func_424(-434590080);
			break;
	
		case -404698347:
			func_425(1306158345);
			func_425(1952610440);
			func_425(-223469678);
			func_425(1517904467);
			func_424(-404698347);
			break;
	
		case -259123672:
			func_425(198200492);
			func_425(-1124061431);
			func_425(52706132);
			func_424(-259123672);
			break;
	
		case -223469678:
			func_425(1306158345);
			func_425(1952610440);
			func_425(-404698347);
			func_425(1517904467);
			func_424(-223469678);
			break;
	
		case -150493654:
			func_425(-1271608261);
			func_425(1846061697);
			func_425(-1145519186);
			func_424(-150493654);
			break;
	
		case 0:
			func_424(0);
			func_425(473295046);
			func_425(-1738165526);
			break;
	
		case 38162571:
			func_425(-1414537028);
			func_425(1350391819);
			func_425(54073871);
			func_424(38162571);
			break;
	
		case 52706132:
			func_425(198200492);
			func_425(-1124061431);
			func_424(52706132);
			func_425(-259123672);
			break;
	
		case 54073871:
			func_425(-1414537028);
			func_425(38162571);
			func_425(1350391819);
			func_424(54073871);
			break;
	
		case 198200492:
			func_424(198200492);
			func_425(-1124061431);
			func_425(52706132);
			func_425(-259123672);
			break;
	
		case 210001842:
			func_425(-1717960576);
			func_424(210001842);
			break;
	
		case 280705402:
			func_425(1766284049);
			func_425(1926308480);
			func_424(280705402);
			break;
	
		case 282809459:
			func_424(282809459);
			func_425(1626481264);
			func_425(-524145696);
			break;
	
		case 405586984:
			func_424(405586984);
			func_425(1509509592);
			func_425(-959357075);
			func_425(-1311865656);
			break;
	
		case 420709909:
			func_424(420709909);
			func_425(-919512195);
			func_425(-1925798111);
			func_425(1703426636);
			break;
	
		case 439465264:
			if (func_67(1609506757))
				if (bParam1)
					func_424(439465264);
				else
					func_425(439465264);
			break;
	
		case 449774763:
			func_425(1376646519);
			func_425(931649776);
			func_425(-434590080);
			func_425(1743048395);
			func_424(449774763);
			break;
	
		case 473295046:
			func_424(473295046);
			func_425(0);
			func_425(-1738165526);
			break;
	
		case 630808005:
			func_424(630808005);
			func_425(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_424(885203519);
			else
				func_425(885203519);
			break;
	
		case 931649776:
			func_425(1376646519);
			func_425(-434590080);
			func_425(1743048395);
			func_425(449774763);
			func_424(931649776);
			break;
	
		case 932909855:
			func_424(932909855);
			func_425(2051822093);
			break;
	
		case 1010885152:
			func_425(1497516462);
			func_425(2016141805);
			func_424(1010885152);
			func_425(-502324015);
			break;
	
		case 1306158345:
			func_425(1952610440);
			func_425(-223469678);
			func_425(-404698347);
			func_425(1517904467);
			func_424(1306158345);
			break;
	
		case 1350391819:
			func_425(-1414537028);
			func_425(38162571);
			func_425(54073871);
			func_424(1350391819);
			break;
	
		case 1376646519:
			func_425(931649776);
			func_425(-434590080);
			func_425(1743048395);
			func_425(449774763);
			func_424(1376646519);
			break;
	
		case 1453909576:
			func_424(1453909576);
			func_425(1643531967);
			break;
	
		case 1497516462:
			func_424(1497516462);
			func_425(2016141805);
			func_425(1010885152);
			func_425(-502324015);
			break;
	
		case 1509509592:
			func_424(1509509592);
			func_425(405586984);
			func_425(-959357075);
			func_425(-1311865656);
			break;
	
		case 1517904467:
			func_425(1306158345);
			func_425(1952610440);
			func_425(-223469678);
			func_425(-404698347);
			func_424(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_425(439465264);
				func_424(1609506757);
			}
			else
			{
				func_425(1609506757);
				func_425(439465264);
			}
			break;
	
		case 1626481264:
			func_424(1626481264);
			func_425(-524145696);
			func_425(282809459);
			break;
	
		case 1643531967:
			func_424(1643531967);
			func_425(1453909576);
			break;
	
		case 1703426636:
			func_424(1703426636);
			func_425(-919512195);
			func_425(-1925798111);
			func_425(420709909);
			break;
	
		case 1743048395:
			func_425(1376646519);
			func_425(931649776);
			func_425(-434590080);
			func_425(449774763);
			func_424(1743048395);
			break;
	
		case 1766284049:
			func_425(280705402);
			func_425(1926308480);
			func_424(1766284049);
			break;
	
		case 1822001510:
			func_425(-1612662716);
			func_424(1822001510);
			break;
	
		case 1846061697:
			func_425(-150493654);
			func_425(-1271608261);
			func_425(-1145519186);
			func_424(1846061697);
			break;
	
		case 1926308480:
			func_425(1766284049);
			func_425(280705402);
			func_424(1926308480);
			break;
	
		case 1952610440:
			func_425(1306158345);
			func_425(-223469678);
			func_425(-404698347);
			func_425(1517904467);
			func_424(1952610440);
			break;
	
		case 2016141805:
			func_425(1497516462);
			func_424(2016141805);
			func_425(1010885152);
			func_425(-502324015);
			break;
	
		case 2019386373:
			func_425(-664252410);
			func_425(2109952320);
			func_424(2019386373);
			break;
	
		case 2051822093:
			func_424(2051822093);
			func_425(932909855);
			break;
	
		case 2109952320:
			func_425(2019386373);
			func_425(-664252410);
			func_424(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_67(iParam0))
					func_424(iParam0);
			else if (func_67(iParam0))
				func_425(iParam0);
			break;
	}

	return;
}

void func_277(Hash hParam0) // Position - 0xFF7D Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_428(hParam0))
		func_430(func_429(hParam0));

	return;
}

int func_278() // Position - 0xFF99 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_428(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_279(Hash hParam0, int iParam1, int iParam2) // Position - 0xFFD1 Hash - 0x3587D65 ^0xBF829C67
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam2)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_280(hash);
	num3 = func_280(hash2);
	num4 = func_280(hash3);
	num6 = func_281(hash);
	num7 = func_281(hash2);
	num8 = func_281(hash3);

	if (iParam2 != 2)
	{
		num5 = func_280(hash4);
		num9 = func_281(hash4);
	}

	if (hParam0 == hash)
		if (num2 + iParam1 >= num6)
			num = num + num6;
		else
			num = num + num2 + iParam1;
	else if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (hParam0 == hash2)
		if (num3 + iParam1 >= num7)
			num = num + num7;
		else
			num = num + num3 + iParam1;
	else if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (hParam0 == hash3)
		if (num4 + iParam1 >= num8)
			num = num + num8;
		else
			num = num + num4 + iParam1;
	else if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam2 != 2)
		if (hParam0 == hash4)
			if (num5 + iParam1 >= num9)
				num = num + num9;
			else
				num = num + num5 + iParam1;
		else if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

int func_280(Hash hParam0) // Position - 0x101E5 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_148(hParam0, 1, false))
		num = func_98(hParam0, false, false);

	return num;
}

int func_281(Hash hParam0) // Position - 0x10204 Hash - 0xEED5739D ^0xEED5739D
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 3;
	
		case joaat("provision_ro_flower_cigar"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 10;
	
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
	
		case joaat("provision_ro_flower_night_scented"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 15;
	
		case joaat("provision_ro_flower_sparrows"):
			return 10;
	
		case joaat("provision_ro_flower_queens"):
			return 5;
	
		case joaat("provision_ro_flower_spider"):
			return 5;
	
		case joaat("provision_ro_flower_dragons"):
			return 5;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 7;
	
		case joaat("provision_ro_flower_moccasin"):
			return 10;
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
	
		case joaat("provision_ro_flower_ghost"):
			return 5;
	
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
	
		default:
		
	}

	return 0;
}

int func_282(Hash hParam0) // Position - 0x102DD Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_283(Hash hParam0, int iParam1) // Position - 0x102EB Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_284(Hash hParam0, int iParam1) // Position - 0x102FB Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_376(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_285(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x1032A Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_284(hParam1, 5) || hParam0 == func_284(hParam1, 6) || hParam0 == func_284(hParam1, 7) || hParam0 == func_284(hParam1, 8) || hParam0 == func_284(hParam1, 9))
	{
		func_275(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_112(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_114(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_286(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x103AC Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_284(hParam1, 5) || hParam0 == func_284(hParam1, 6) || hParam0 == func_284(hParam1, 7) || hParam0 == func_284(hParam1, 8) || hParam0 == func_284(hParam1, 9))
	{
		if (func_275(hParam1, hParam0, &num, false, 0, false))
		{
			func_112(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_114(51, 0, 0, num, func_224(hParam1, 20), 1, 0);
		}
		else
		{
			func_112(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_114(51, 0, 0, num, func_224(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_287() // Position - 0x1046D Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_222(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

BOOL func_288(Hash hParam0, int iParam1) // Position - 0x10496 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_94(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_212(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_303("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_304(&unk, i, num, num2))
			{
			}
			else if (!func_241(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_305(num);
				return true;
			}
		}
	
		func_305(num);
	}

	return false;
}

void func_289(Hash hParam0) // Position - 0x1053E Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_290(Hash hParam0) // Position - 0x1054D Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_431(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_291(Hash hParam0) // Position - 0x10566 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_292(Hash hParam0, var uParam1, var uParam2) // Position - 0x10575 Hash - 0x38E6C2DD ^0xA4FE6475
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

int func_293(var uParam0) // Position - 0x10781 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_432(i, 1);
	}

	return -358215195;
}

int func_294(int iParam0, int iParam1) // Position - 0x107BC Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_295(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1098D Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_433();

	if (iParam2 == 39)
	{
		unk = { func_206(hParam0, true, false) };
		iParam2 = func_294(func_293(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_116(hParam0, 866047851) && func_412(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_298(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_434(func_432(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_435(iParam2);
	func_436(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_437(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_437(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_438(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_439(hParam0, iParam2, hParam1, func_123() != -1);

	if (bParam4)
		func_440(&(Global_1946054.f_1378), true, 3);
	else
		func_440(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_441(func_432(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_296(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10B9A Hash - 0x5AF76643 ^0x5AF76643
{
	func_442(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_297(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x10BB3 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_443(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_444(num);
	return;
}

BOOL func_298(BOOL bParam0) // Position - 0x10BE5 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_299() // Position - 0x10BF6 Hash - 0xB6203BF0 ^0x217DD714
{
	func_445(&(Global_1946054.f_2776));
	func_446(32768);
	func_441(1108822547, 8, 6);
	return;
}

int func_300(int iParam0) // Position - 0x10C1D Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_294(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_301(int iParam0) // Position - 0x10C81 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_447(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_448(num);
	return;
}

void func_302(int iParam0, int iParam1, int iParam2) // Position - 0x10CC5 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_448(num);
	return;
}

BOOL func_303(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x10CE5 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_214(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_304(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x10D0C Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_305(int iParam0) // Position - 0x10D47 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

float func_306() // Position - 0x10D68 Hash - 0xB0642BCC ^0x4D6FEEA4
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_449())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_450(2);

	if (Global_1347477.f_119)
		return func_450(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_451();
	num3 = func_452();
	num4 = func_453();
	num5 = func_454();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_455());
	num8 = func_450(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_456(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_457(3, num9, num9 > 100f);
	return func_458(num8, -100f, 100f);
}

float func_307() // Position - 0x10E91 Hash - 0x951B1CCC ^0x7B312694
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_449())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_450(1);

	if (Global_1347477.f_119)
		return func_450(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_451();
	num3 = func_452();
	num4 = func_453();
	num5 = func_454();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_455());
	num8 = func_450(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_456(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_457(2, num9, num9 > 100f);
	return func_458(num8, -100f, 100f);
}

float func_308() // Position - 0x10FBA Hash - 0x4D146F4A ^0xFC60D2FE
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_449())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_450(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_459())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_460())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_450(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_451();
	num3 = func_452();
	num4 = func_453();
	num5 = func_454();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_455());
	num8 = func_450(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_456(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_457(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_450(0);

	return func_458(num8, -100f, 100f);
}

BOOL func_309(int iParam0, int iParam1) // Position - 0x11161 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_310(Hash hParam0) // Position - 0x1117A Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_311(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x1118A Hash - 0x86E39CDA ^0xCF922D1
{
	!func_94(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_210(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_125(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_214(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

int func_312(int iParam0, BOOL bParam1) // Position - 0x111EC Hash - 0x6C404ADF ^0x7D516F33
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946054.f_2657.f_21;
	
		case -1719060085:
			return Global_1946054.f_2657.f_24;
	
		case -999503751:
			if (bParam1)
				return Global_1946054.f_2657.f_20;
			else
				return func_461();
			break;
	
		case -525676072:
			return Global_1946054.f_2657.f_22;
	
		case -413129408:
			return Global_1946054.f_2657.f_25;
	
		case 81053684:
			return Global_1946054.f_2657.f_23;
	}

	return 0;
}

eStackSize func_313(Hash hParam0) // Position - 0x1127B Hash - 0x9830D1FB ^0x9830D1FB
{
	switch (hParam0)
	{
		case -2114499732:
			return 18;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
	
		case -1951220140:
			return 78;
	
		case -1914506115:
			return 71;
	
		case -1826731591:
			return 24;
	
		case -1725704631:
			return 81;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
	
		case -1611873049:
			return 91;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
	
		case -1476781101:
			return 10;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
	
		case -1303643297:
			return 86;
	
		case -1300731953:
			return 74;
	
		case -1243402388:
			return 66;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
	
		case -1205612021:
			return 70;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
	
		case -978578725:
			return 94;
	
		case -926815459:
			return 72;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
	
		case -769081407:
			return 16;
	
		case -659341240:
			return 85;
	
		case -535599244:
			return 89;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
	
		case -409616653:
			return 65;
	
		case -389591806:
			return 73;
	
		case -361635024:
			return 62;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
	
		case -291256376:
			return 23;
	
		case -272211555:
			return 61;
	
		case -55563408:
			return 64;
	
		case -19271249:
			return 82;
	
		case 65931886:
			return 67;
	
		case 162509669:
			return 3;
	
		case 166243423:
			return 0;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
	
		case 214175524:
			return 84;
	
		case 274995506:
			return 5;
	
		case 294553332:
			return 11;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
	
		case 411856831:
			return 88;
	
		case 439606975:
			return 14;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
	
		case 523337834:
			return 80;
	
		case 594312243:
			return 92;
	
		case 624063935:
			return 9;
	
		case 635948769:
			return 4;
	
		case 688004210:
			return 20;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
	
		case 800827126:
			return 19;
	
		case 802495462:
			return 75;
	
		case 842905332:
			return 77;
	
		case 890706995:
			return 93;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
	
		case 1156438275:
			return 90;
	
		case 1160643979:
			return 8;
	
		case 1164374808:
			return 7;
	
		case 1201189539:
			return 28;
	
		case 1257427489:
			return 83;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
	
		case 1351927599:
			return 21;
	
		case 1352942778:
			return 26;
	
		case 1371678229:
			return 68;
	
		case 1383300684:
			return 1;
	
		case 1389254668:
			return 58;
	
		case 1460520700:
			return 76;
	
		case 1511551084:
			return 79;
	
		case 1560492757:
			return 15;
	
		case 1661121390:
			return 6;
	
		case 1784889667:
			return 13;
	
		case 1788874135:
			return 12;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
	
		case 1902428294:
			return 17;
	
		case 1964379549:
			return 27;
	
		case 2032023096:
			return 22;
	
		case 2038771525:
			return 87;
	
		case 2051441678:
			return 2;
	
		case 2102263084:
			return 69;
	
		case 2119049229:
			return 25;
	
		default:
		
	}

	return -1;
}

BOOL func_314(eStackSize essParam0) // Position - 0x1168E Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

void func_315(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x116AD Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_314(essParam0))
		return;

	if (func_462(essParam0))
		return;

	if (!func_463(essParam0))
		func_464(essParam0, true, false);

	hash = func_465(essParam0);

	if (hash != 0 && !(essParam0 >= 0 && essParam0 <= 5))
		if (func_466(essParam0, 512))
			func_297(30, hash, 0, 0, false);

	if (!func_467() && !bParam1 && !func_70(0, false, true))
		func_468(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_469(essParam0, 6);

	if (bParam2)
		if (!func_70(0, false, true))
			func_218(true, 4);

	return;
}

int func_316() // Position - 0x11773 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_317(int iParam0, BOOL bParam1) // Position - 0x11781 Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_312(iParam0, false) < func_470(iParam0, bParam1);
}

BOOL func_318(Hash hParam0, var uParam1) // Position - 0x11799 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_120(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_319(int iParam0) // Position - 0x117DD Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_294(iParam0, 1) /*3*/] != Global_1946054.f_57[func_294(iParam0, 1) /*11*/];
}

void func_320(int iParam0, Hash hParam1) // Position - 0x11815 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_116(hParam1, 130796156))
	{
		func_471(hParam1, false);
	}
	else if (func_116(hParam1, 930141731))
	{
		func_471(hParam1, true);
		func_472(iParam0);
	}

	return;
}

void func_321(var uParam0, int iParam1) // Position - 0x11850 Hash - 0x84556899 ^0xA18AFCFA
{
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		if (iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE") || iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING") || iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL"))
		{
			uParam0->f_1[i] = iParam1;
			return;
		}
	}

	if (*uParam0 >= 10)
		return;

	uParam0->f_1[*uParam0] = iParam1;
	*uParam0 = *uParam0 + 1;
	return;
}

int func_322(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x11931 Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_473(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_474(anParam2, hParam0, num);
	return 1;
}

int func_323(int iParam0) // Position - 0x1199A Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x119AC Hash - 0xA17D549C ^0xC3ABEF47
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
	
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
	
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
	
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
	
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
	
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
	
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
	
		case 7:
			return "PROVISION_FISH_MUSKIE";
	
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
	
		case 9:
			return "PROVISION_FISH_PERCH";
	
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
	
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
	
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
	
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
	
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
	
		default:
		
	}

	return "FISHTYPE_UNKNOWN";
}

Hash func_325(Hash hParam0) // Position - 0x11A83 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_475(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_326(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x11AAD Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_476(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_327() // Position - 0x11B10 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_328(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x11B1D Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_329(BOOL bParam0, var uParam1, var uParam2) // Position - 0x11B87 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_330(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x11B9E Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { outData.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

const char* func_331(const char* sParam0, int iParam1) // Position - 0x11C91 Hash - 0x9E99F03 ^0x6C5E3D7E
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_332(int iParam0) // Position - 0x11CAB Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_333(BOOL bParam0) // Position - 0x11CE9 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

eStackSize func_334() // Position - 0x11CFC Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_335(eStackSize essParam0) // Position - 0x11D08 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

int func_336(eStackSize essParam0) // Position - 0x11D2D Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_337(int iParam0, int iParam1) // Position - 0x11D40 Hash - 0x24B83B6D ^0x24B83B6D
{
	int i;
	int num;
	int num2;

	num = iParam0 - 1;

	if (num > 0)
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = num2 + func_478(num, iParam1);
		}
	}

	return num2;
}

int func_338(eStackSize essParam0) // Position - 0x11D76 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_339(eStackSize essParam0) // Position - 0x11D89 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_340(int iParam0) // Position - 0x11D9C Hash - 0x759A7885 ^0x759A7885
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

float func_341(int iParam0) // Position - 0x11E6C Hash - 0x149415FC ^0x149415FC
{
	int num;

	num = func_340(iParam0);

	if (num == 0)
		return 0f;

	return Global_40.f_11959[num];
}

BOOL func_342(ePedType eptParam0) // Position - 0x11E90 Hash - 0x5000025C ^0x5000025C
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

void func_343(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x122E3 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_344(Ped pedParam0, BOOL bParam1) // Position - 0x12313 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_345(Ped pedParam0, int iParam1) // Position - 0x12358 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

float func_346() // Position - 0x1237F Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_347(var uParam0, int iParam1) // Position - 0x123B1 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_348(var uParam0, int iParam1) // Position - 0x123C2 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_349(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x123D7 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_94(hParam0, 0))
		return 0;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return 1;
}

struct<4> func_350(BOOL bParam0) // Position - 0x12425 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_245(joaat("character"), func_479(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_351(BOOL bParam0) // Position - 0x12441 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_214(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_245(923904168, func_350(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_245(923904168, func_350(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_245(923904168, func_350(bParam0), -740156546, false);
}

BOOL func_352(Hash hParam0, BOOL bParam1) // Position - 0x124D6 Hash - 0x62864AB ^0xBC339691
{
	if (func_120(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_118(24);
		else
			return true;

	return false;
}

struct<4> func_353(BOOL bParam0) // Position - 0x1250F Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_214(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_245(271701509, func_350(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_245(271701509, func_350(bParam0), 12999093, false);
}

BOOL func_354(Hash hParam0, Hash hParam1) // Position - 0x12573 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_120(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_355(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x125D2 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_214(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_356(Hash hParam0) // Position - 0x12602 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_480(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_357(var uParam0) // Position - 0x1261E Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_94(*uParam0, 0))
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

BOOL func_358(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x1269A Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_94(hParam0, 0))
		return false;

	unk = { func_206(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_242(398 + i, 1);
	
		if (func_243(hParam0, &unk, hash, false))
		{
			flag = func_244(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_359(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1272E Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_94(hParam0, 0))
		return 0;

	guid = { func_245(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_214(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

struct<18> func_360(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x12776 Hash - 0x84700F53 ^0xB9E7AA96
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

void func_361(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x12848 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_362(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x12863 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_214(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_363(int iParam0) // Position - 0x12888 Hash - 0x92F940EE ^0x92F940EE
{
	int num;

	num = iParam0;

	if (num >= 1 && num <= 23)
		return 0;
	else if (num >= 24 && num <= 34)
		return 1;
	else if (num >= 35 && num <= 55)
		return 2;

	return 0;
}

float func_364(int iParam0) // Position - 0x128DC Hash - 0xBAFBA316 ^0xBAFBA316
{
	switch (iParam0)
	{
		case 1:
			return 5f;
	
		case 2:
			return 20f;
	
		case 3:
			return 10f;
	
		case 4:
			return 10f;
	
		case 5:
			return 20f;
	
		case 6:
			return 10f;
	
		case 7:
			return 15f;
	
		case 8:
			return 15f;
	
		case 9:
			return 20f;
	
		case 10:
			return 5f;
	
		case 11:
			return 5f;
	
		case 12:
			return 10f;
	
		case 13:
			return 20f;
	
		case 14:
			return 30f;
	
		case 15:
			return 5f;
	
		case 16:
			return 5f;
	
		case 17:
			return 3f;
	
		case 18:
			return 20f;
	
		case 19:
			return func_481(iParam0);
	
		case 20:
			return 25f;
	
		case 21:
			return 50f;
	
		case 22:
			return 100f;
	
		case 23:
			return 150f;
	
		case 24:
			return 20f;
	
		case 25:
			return 10f;
	
		case 26:
			return 20f;
	
		case 27:
			return 20f;
	
		case 28:
			return 20f;
	
		case 29:
			return 20f;
	
		case 30:
			return func_481(iParam0);
	
		case 31:
			return 25f;
	
		case 32:
			return 50f;
	
		case 33:
			return 100f;
	
		case 34:
			return 150f;
	
		case 35:
			return 1f;
	
		case 36:
			return 5f;
	
		case 37:
			return 1f;
	
		case 38:
			return 3f;
	
		case 39:
			return 1f;
	
		case 40:
			return 1f;
	
		case 41:
			return 1f;
	
		case 42:
			return 5f;
	
		case 43:
			return 10f;
	
		case 44:
			return 5f;
	
		case 45:
			return 5f;
	
		case 46:
			return 10f;
	
		case 47:
			return 10f;
	
		case 48:
			return 5f;
	
		case 49:
			return 20f;
	
		case 50:
			return func_481(iParam0);
	
		case 51:
			return 25f;
	
		case 52:
			return 50f;
	
		case 53:
			return 100f;
	
		case 54:
			return 150f;
	
		case 55:
			return 5f;
	
		default:
		
	}

	return 0f;
}

BOOL func_365(int iParam0) // Position - 0x12BAA Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_118(18);
	
		case 1:
			return func_118(19);
	
		case 2:
			return func_118(20);
	
		default:
		
	}

	return true;
}

int func_366(int iParam0) // Position - 0x12BE8 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_482(Global_40.f_11095.f_11[iParam0]);
}

void func_367(int iParam0, float fParam1, BOOL bParam2) // Position - 0x12C00 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_123() != -1)
		return;

	if (Global_1347477.f_117 || !func_118(31))
		return;

	num = func_366(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_366(iParam0);

	if (func_483(iParam0) && func_484(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_485(num2, fParam1);
		
			if (fParam1 > (float)func_486(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_105(func_487(iParam0), false);
				
					func_488(iParam0, num3, num4);
					func_489(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_368(int iParam0) // Position - 0x12D02 Hash - 0xEB40D7A4 ^0x701193
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_369(int iParam0) // Position - 0x12D0E Hash - 0x21FAF347 ^0xAF7D8F21
{
	switch (iParam0)
	{
		case 0:
			return joaat("itemtype_player_health");
	
		case 1:
			return joaat("itemtype_player_stamina");
	
		case 2:
			return joaat("itemtype_player_deadeye");
	
		default:
		
	}

	return 0;
}

void func_370(Hash hParam0, int iParam1) // Position - 0x12D49 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_371(int iParam0, int iParam1) // Position - 0x12D5C Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_123() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_372(int iParam0) // Position - 0x12D8F Hash - 0x3E25647A ^0x3E25647A
{
	if (func_123() != -1)
		if (func_309(iParam0, 4))
			return false;
	else if (func_309(iParam0, 2))
		return false;

	return true;
}

BOOL func_373(int iParam0) // Position - 0x12DBF Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_309(iParam0, 65536) && !func_309(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_309(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_309(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_374(int iParam0) // Position - 0x12E6B Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_375() // Position - 0x12E7E Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_376(int iParam0, var uParam1) // Position - 0x12E8D Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_490(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_377() // Position - 0x12EBA Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_491(Global_40.f_12019);
}

int func_378() // Position - 0x12ECC Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_223(i);
	
		if (func_148(hash, 1, false) || func_384(func_383(hash)))
			num = num + 1;
	}

	return num;
}

int func_379() // Position - 0x12F15 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_492(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_380() // Position - 0x12F4E Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_389(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_381() // Position - 0x12F87 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_382(int iParam0) // Position - 0x12F99 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

BOOL func_383(Hash hParam0) // Position - 0x13052 Hash - 0x6931DCCD ^0x96AB98B4
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return true;
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
	
		default:
		
	}

	return false;
}

BOOL func_384(BOOL bParam0) // Position - 0x130E8 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_385(int iParam0) // Position - 0x130FB Hash - 0x21CE226B ^0x677CB6FF
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
	
		case 1:
			return "COL_DB_SEND";
	
		case 2:
			return "COL_DB_COLLECT";
	
		default:
		
	}

	return "";
}

int func_386(int iParam0) // Position - 0x13136 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	
		case 3:
			return 8;
	
		case 4:
			return 9;
	
		default:
		
	}

	return 5;
}

int func_387(int iParam0) // Position - 0x1317B Hash - 0x499196F8 ^0x499196F8
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 16;
	
		case 2:
			return 17;
	
		case 3:
			return 18;
	
		case 4:
			return 19;
	
		default:
		
	}

	return 15;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0x131C4 Hash - 0xA17D549C ^0xEBA3CB32
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return "COL_RO_CLAMSHELL_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
	
		case joaat("provision_ro_flower_acunas_star"):
			return "COL_RO_ACUNAS_STAR_FOUND";
	
		case joaat("provision_ro_flower_cigar"):
			return "COL_RO_CIGAR_FOUND";
	
		case joaat("provision_ro_flower_rat_tail"):
			return "COL_RO_RAT_TAIL_FOUND";
	
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
	
		case joaat("provision_ro_flower_night_scented"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
	
		case joaat("provision_ro_flower_lady_of_night"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
	
		case joaat("provision_ro_flower_sparrows"):
			return "COL_RO_SPARROWS_FOUND";
	
		case joaat("provision_ro_flower_queens"):
			return "COL_RO_QUEENS_FOUND";
	
		case joaat("provision_ro_flower_spider"):
			return "COL_RO_SPIDER_FOUND";
	
		case joaat("provision_ro_flower_dragons"):
			return "COL_RO_DRAGONS_FOUND";
	
		case joaat("provision_ro_flower_lady_slipper"):
			return "COL_RO_LADY_SLIPPER_FOUND";
	
		case joaat("provision_ro_flower_moccasin"):
			return "COL_RO_MOCCASIN_FOUND";
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
	
		case joaat("provision_ro_flower_ghost"):
			return "COL_RO_GHOST_FOUND";
	
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
	
		default:
		
	}

	return "";
}

BOOL func_389(Hash hParam0) // Position - 0x132D2 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x132E2 Hash - 0xA17D549C ^0xFCEB134
{
	switch (hParam0)
	{
		case joaat("legendary_fish_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
	
		case joaat("legendary_fish_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
	
		case joaat("legendary_fish_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
	
		case joaat("legendary_fish_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
	
		case joaat("legendary_fish_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
	
		case joaat("legendary_fish_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
	
		case joaat("legendary_fish_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
	
		case joaat("legendary_fish_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
	
		case joaat("legendary_fish_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
	
		case joaat("legendary_fish_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
	
		case joaat("legendary_fish_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
	
		default:
		
	}

	return "";
}

char* func_391(int iParam0) // Position - 0x1339F Hash - 0x21CE226B ^0x1B3FB120
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
	
		case 1:
			return "COL_RC_SEND";
	
		case 2:
			return "COL_RC_COLLECT";
	
		default:
		
	}

	return "";
}

BOOL func_392(Hash hParam0) // Position - 0x133DA Hash - 0x5C411CF ^0x5C411CF
{
	if (func_493(hParam0) && func_148(hParam0, 1, false))
		return 1;
	else if (func_494(hParam0) && func_495(hParam0))
		return 1;

	return 0;
}

char* func_393(Hash hParam0) // Position - 0x13418 Hash - 0x9E507475 ^0x45BC9FF1
{
	if (!func_94(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_166(hParam0));
}

int func_394(int iParam0) // Position - 0x1343C Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_395(int iParam0) // Position - 0x1344E Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_396(BOOL bParam0) // Position - 0x13462 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}

	return;
}

void func_397(int iParam0) // Position - 0x134A0 Hash - 0x2EDDC601 ^0xD5F96979
{
	Hash itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
	
		if (itemContextByIndex == Global_1954819.f_5.f_2[iParam0 /*36*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
	return;
}

void func_398(BOOL bParam0) // Position - 0x1350E Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_399(BOOL bParam0) // Position - 0x13548 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_400(BOOL bParam0) // Position - 0x13582 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_401(BOOL bParam0) // Position - 0x135BC Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_402(BOOL bParam0) // Position - 0x135DF Hash - 0x15EA8A2D ^0x6EE74130
{
	int promptType;
	Player player;

	promptType = 50;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

void func_403(BOOL bParam0) // Position - 0x13621 Hash - 0xBAD014C9 ^0x3FDE3E28
{
	int promptType;
	Player player;

	promptType = 49;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

Hash func_404(int iParam0) // Position - 0x13663 Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_294(iParam0, 1) /*3*/];
}

void func_405() // Position - 0x1368B Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_496();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_124(joaat("weapon_revolver_cattleman_john"));
		func_172(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_124(joaat("weapon_melee_knife_john"));
		func_172(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

BOOL func_406(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x13703 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_214(false);
	*panParam1 = { func_245(hParam0, func_351(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_407(Hash hParam0) // Position - 0x13748 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_408(int iParam0, int iParam1) // Position - 0x1375E Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

void func_409(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x13774 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_335(*uParam0);
	i = func_336(*uParam0);
	num2 = func_338(*uParam0);
	j = func_339(*uParam0);
	k = func_497(*uParam0);
	l = func_498(*uParam0);

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

	for (m = func_478(i, num); num2 > m; m = func_478(i, num))
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

	func_499(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_410(Hash hParam0) // Position - 0x138FC Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_411(Hash hParam0) // Position - 0x1390A Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_206(hParam0, true, false) };
	return func_293(unk.f_4);
}

int func_412(Hash hParam0) // Position - 0x13926 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_116(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_116(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_116(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_116(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_116(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_116(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

BOOL func_413(Hash hParam0, var uParam1) // Position - 0x13A77 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_294(func_500(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_120(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_414(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13AEE Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_294(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_298(524288))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				num = num + 1;
				break;
		
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				num = num + 1;
				break;
		}
	}

	num = num + PED::_0x31B2E7F2E3C58B89(hParam0, joaat("base"), bParam2, bParam3);
	return num;
}

BOOL func_415(Hash hParam0) // Position - 0x13B59 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
{
	switch (hParam0)
	{
		case joaat("clothing_hl_player_boot_007_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_2"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_3"):
			return true;
	
		case joaat("clothing_hl_player_boot_009_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_4"):
			return true;
	
		default:
		
	}

	return false;
}

int func_416(int iParam0) // Position - 0x13B9C Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_501(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

Hash func_417(int iParam0) // Position - 0x13BDD Hash - 0xB8EC44B7 ^0xD4FF48D5
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
	
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
	
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
	
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
	
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
	
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
	
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
	
		case 7:
			return joaat("provision_lions_paw");
	
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
	
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
	
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
	
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
	
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
	
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
	
		case 14:
			return joaat("provision_cc_vintage_handcuffs");
	
		case 15:
			return joaat("provision_bracelet_gold");
	
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
	
		case 17:
			return joaat("provision_rc_quartz_chunk");
	
		case 18:
			return joaat("provision_bracelet_silver");
	
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
	
		case 20:
			return joaat("provision_rf_wood_cobalt");
	
		case 21:
			return joaat("provision_earring_gold");
	
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
	
		case 23:
			return joaat("provision_rs_abalone_shell_fragment");
	
		case 24:
			return joaat("provision_earring_silver");
	
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
	
		default:
		
	}

	return 0;
}

eStackSize func_418(Hash hParam0) // Position - 0x13D5A Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_502(hParam0, -1);
}

BOOL func_419(eStackSize essParam0, BOOL bParam1) // Position - 0x13D69 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_503(func_334(), essParam0, bParam1);
}

BOOL func_420() // Position - 0x13D7D Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_254())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_421(int iParam0) // Position - 0x13D94 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_504(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_422(int iParam0, const char* sParam1, int iParam2) // Position - 0x13DC8 Hash - 0x56940320 ^0x461887FD
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_420())
		func_326(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_326(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_423(Hash hParam0) // Position - 0x13E34 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_424(int iParam0) // Position - 0x13E44 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_189(iParam0, 1);
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

void func_425(int iParam0) // Position - 0x13EDD Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_189(iParam0, 1);
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

void func_426() // Position - 0x13F63 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_425(-939420910);
	func_425(-1187950766);
	func_425(356365161);
	func_425(753127042);
	func_425(-2038424081);
	func_425(1884271742);
	func_425(459290420);
	return;
}

void func_427() // Position - 0x13FAA Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_425(704802028);
	func_425(588987611);
	func_425(2008888900);
	func_425(1649996811);
	func_425(227918160);
	func_425(168171957);
	func_425(1193080109);
	func_425(-491981251);
	func_425(-639037538);
	func_425(-618620429);
	return;
}

BOOL func_428(Hash hParam0) // Position - 0x1400C Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_429(Hash hParam0) // Position - 0x1401C Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case joaat("exotic_stage_02"):
			return 2;
	
		case joaat("exotic_stage_01"):
			return 1;
	
		case joaat("exotic_stage_05"):
			return 16;
	
		case joaat("exotic_stage_04"):
			return 8;
	
		case joaat("exotic_stage_03"):
			return 4;
	
		default:
		
	}

	return 0;
}

void func_430(int iParam0) // Position - 0x14061 Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_431(Hash hParam0) // Position - 0x1407C Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_432(int iParam0, int iParam1) // Position - 0x1408C Hash - 0xE1D12727 ^0xA46110B3
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

void func_433() // Position - 0x142DB Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_434(int iParam0) // Position - 0x14322 Hash - 0x65A082AE ^0x65A082AE
{
	func_441(iParam0, 8, 6);
	return;
}

void func_435(int iParam0) // Position - 0x14333 Hash - 0x20214C72 ^0x20214C72
{
	func_505(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_436(int iParam0, int iParam1) // Position - 0x14348 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_506(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_437(Hash hParam0, int iParam1, int iParam2) // Position - 0x1435F Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_438(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x14372 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_120(hParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_507(iParam2, 65536) && hParam0->f_1[num2 /*3*/] == -452402570)
	{
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_436(num2, num3);
	}

	if (func_319(-1586649372) && func_507(iParam2, 524288))
	{
		num2 = 33;
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_436(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_508(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_508(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (hParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				hParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_436(num2, num3);
			}
		
			if (hParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_415(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_116(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_436(num2, num3);
				}
			
				num2 = 38;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_436(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_120(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_436(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_415(hParam1) && hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_120(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_436(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_508(hParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_508(hParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (hParam0->f_1[num /*3*/].f_1 == joaat("base") || hParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (hParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_436(num2, num3);
				}
			}
		
			func_508(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_116(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	
		case 1868067663:
			func_508(hParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	}

	switch (func_120(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_120(hParam0->f_1[num2 /*3*/]) || func_116(hParam0->f_1[num2 /*3*/], 866047851))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_120(hParam0->f_1[num2 /*3*/]))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	}

	return;
}

Hash func_439(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x149B6 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_509(0);

	if (hParam2 != 0 && func_510(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_511(hParam0, func_432(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_440(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x149FC Hash - 0xE06CF505 ^0xBC49746F
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	BOOL flag2;
	int num6;

	flag = func_123() != -1;
	flag2 = func_509(0);

	if (func_298(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_432(num, 1);
		
			if (func_512(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_512(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_414(hParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_513(hParam0);

	if (num3 > 0)
	{
		if (!func_298(524288))
		{
			func_443(524288);
			num2 = num2 - num6;
		}
	
		for (i = num3; i <= 38; i = i + 1)
		{
			num = Global_1946054.f_57.f_430[i];
		
			if (num <= -1 || num >= 39)
			{
			}
			else
			{
				num5 = func_432(num, 1);
			
				if (func_512(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_512(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_414(hParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						hParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						hParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_436(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_446(524288);

	return;
}

void func_441(int iParam0, int iParam1, int iParam2) // Position - 0x14C19 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_294(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_294(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_294(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_442(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x14C58 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_514(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_123() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_515(2, Global_26796.f_776) || Global_1946054.f_1497 != func_465(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_465(Global_40.f_7729);
				Global_1946054.f_1378 = func_465(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_516(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_517(false, true);

	return;
}

void func_443(BOOL bParam0) // Position - 0x14D77 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_444(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x14D8A Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_518(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_519(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_443(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_518(iParam0))
				return;
		
			func_519(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_443(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_302(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_445(var uParam0) // Position - 0x14F96 Hash - 0x7C3D914C ^0xB1998A7B
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;

	if (uParam0->f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_13);

	uParam0->f_12 = 0;
	return;
}

void func_446(BOOL bParam0) // Position - 0x14FF4 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_447(int iParam0, int iParam1) // Position - 0x1500C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_448(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1501B Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_518(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_518(20))
				return;
		}
	}

	func_519(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_443(8);
	return;
}

BOOL func_449() // Position - 0x1511F Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_450(int iParam0) // Position - 0x1513B Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_451() // Position - 0x1514D Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_520(13);
	num2 = func_521(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_452() // Position - 0x15190 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_453() // Position - 0x151AB Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_254())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_454() // Position - 0x151CA Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_455() // Position - 0x1520C Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_456(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1521A Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_522(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_457(int iParam0, float fParam1, BOOL bParam2) // Position - 0x15266 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_522(iParam0, 2, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[2], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);

	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}

	return;
}

float func_458(float fParam0, float fParam1, float fParam2) // Position - 0x153AC Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_459() // Position - 0x153D3 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_520(12) <= -99f;
}

BOOL func_460() // Position - 0x153E7 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_520(12) >= 99f;
}

int func_461() // Position - 0x153FB Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_120(hash) == -999503751)
			if (func_523() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_462(eStackSize essParam0) // Position - 0x1544C Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_314(essParam0))
		return false;

	if (func_466(essParam0, 4))
		return true;

	return false;
}

BOOL func_463(eStackSize essParam0) // Position - 0x15471 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_314(essParam0))
		return false;

	if (func_466(essParam0, 2))
		return true;

	return false;
}

void func_464(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15496 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_314(essParam0))
		return;

	if (!func_463(essParam0))
	{
		func_469(essParam0, 2);
	
		if (bParam2)
			if (!func_70(0, false, true))
				func_218(true, 4);
	
		if (!func_467() && !bParam1 && !func_70(0, false, true))
			func_468(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_524(essParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

Hash func_465(eStackSize essParam0) // Position - 0x1550B Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (essParam0)
	{
		case 0:
			return 166243423;
	
		case 1:
			return 1383300684;
	
		case 2:
			return 2051441678;
	
		case 3:
			return 162509669;
	
		case 4:
			return 635948769;
	
		case 5:
			return 274995506;
	
		case 6:
			return 1661121390;
	
		case 7:
			return 1164374808;
	
		case 8:
			return 1160643979;
	
		case 9:
			return 624063935;
	
		case 10:
			return -1476781101;
	
		case 11:
			return 294553332;
	
		case 12:
			return 1788874135;
	
		case 13:
			return 1784889667;
	
		case 14:
			return 439606975;
	
		case 15:
			return 1560492757;
	
		case 16:
			return -769081407;
	
		case 17:
			return 1902428294;
	
		case 18:
			return -2114499732;
	
		case 19:
			return 800827126;
	
		case 20:
			return 688004210;
	
		case 21:
			return 1351927599;
	
		case 22:
			return 2032023096;
	
		case 23:
			return -291256376;
	
		case 24:
			return -1826731591;
	
		case 25:
			return 2119049229;
	
		case 26:
			return 1352942778;
	
		case 27:
			return 1964379549;
	
		case 28:
			return 1201189539;
	
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
	
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
	
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
	
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
	
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
	
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
	
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
	
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
	
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
	
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
	
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
	
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
	
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
	
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
	
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
	
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
	
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
	
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
	
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
	
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
	
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
	
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
	
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
	
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
	
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
	
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
	
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
	
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
	
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
	
		case 58:
			return 1389254668;
	
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
	
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
	
		case 61:
			return -272211555;
	
		case 62:
			return -361635024;
	
		case 64:
			return -55563408;
	
		case 65:
			return -409616653;
	
		case 66:
			return -1243402388;
	
		case 67:
			return 65931886;
	
		case 68:
			return 1371678229;
	
		case 69:
			return 2102263084;
	
		case 70:
			return -1205612021;
	
		case 71:
			return -1914506115;
	
		case 72:
			return -926815459;
	
		case 73:
			return -389591806;
	
		case 74:
			return -1300731953;
	
		case 75:
			return 802495462;
	
		case 76:
			return 1460520700;
	
		case 77:
			return 842905332;
	
		case 78:
			return -1951220140;
	
		case 79:
			return 1511551084;
	
		case 80:
			return 523337834;
	
		case 81:
			return -1725704631;
	
		case 82:
			return -19271249;
	
		case 83:
			return 1257427489;
	
		case 84:
			return 214175524;
	
		case 85:
			return -659341240;
	
		case 86:
			return -1303643297;
	
		case 87:
			return 2038771525;
	
		case 88:
			return 411856831;
	
		case 89:
			return -535599244;
	
		case 90:
			return 1156438275;
	
		case 91:
			return -1611873049;
	
		case 92:
			return 594312243;
	
		case 93:
			return 890706995;
	
		case 94:
			return -978578725;
	
		default:
		
	}

	return 0;
}

BOOL func_466(eStackSize essParam0, BOOL bParam1) // Position - 0x15A40 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_314(essParam0))
		return false;

	return Global_40.f_7157[essParam0 /*3*/] && bParam1 != false;
}

BOOL func_467() // Position - 0x15A65 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

int func_468(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x15A85 Hash - 0x8EBD6187 ^0x42F0F0AC
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = iParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = sParam0;
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

void func_469(eStackSize essParam0, BOOL bParam1) // Position - 0x15AC0 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_314(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

int func_470(int iParam0, BOOL bParam1) // Position - 0x15AEC Hash - 0x14DDA26B ^0xFFF4A8D0
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -2061583405:
			num = Global_1946054.f_2657.f_26.f_1;
			break;
	
		case -1719060085:
			num = 1;
			break;
	
		case -999503751:
			num = Global_1946054.f_2657.f_26;
			break;
	
		case -525676072:
			num = Global_1946054.f_2657.f_26.f_2;
			break;
	
		case -413129408:
			num = 1;
			break;
	
		case 81053684:
			num = 1;
			break;
	
		default:
			return 0;
	}

	switch (iParam0)
	{
		case -999503751:
			if (num > 0 && !bParam1)
				num = num - 1;
			break;
	}

	return num;
}

void func_471(Hash hParam0, BOOL bParam1) // Position - 0x15B8F Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_525(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_119(50);
			else
				func_119(48);
			break;
	
		case 1:
			if (bParam1)
				func_119(51);
			else
				func_119(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_526(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_153();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_153();
			}
			break;
	
		case 3:
			func_119(24);
		
			if (bParam1)
			{
				if (!func_526(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_153();
				}
			}
			break;
	}

	return;
}

void func_472(int iParam0) // Position - 0x15C6E Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_527(0))
				num = num + 1;
		
			if (func_527(2))
				num = num + 1;
		
			if (func_527(4))
				num = num + 1;
		
			if (!func_528(16))
			{
				if (num == 1)
				{
					func_529();
					func_105(456, true);
					func_530(16);
				}
			}
		
			if (!func_528(32))
			{
				if (num >= 3)
				{
					func_529();
					func_105(456, true);
					func_530(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_527(1))
				num = num + 1;
		
			if (func_527(3))
				num = num + 1;
		
			if (func_527(7))
				num = num + 1;
		
			if (!func_528(1))
			{
				if (num == 1)
				{
					func_531();
					func_105(457, true);
					func_530(1);
				}
			}
		
			if (!func_528(2))
			{
				if (num >= 3)
				{
					func_531();
					func_105(457, true);
					func_530(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_527(5))
				num = num + 1;
		
			if (func_527(6))
				num = num + 1;
		
			if (func_527(8))
				num = num + 1;
		
			if (!func_528(4))
			{
				if (num == 1)
				{
					func_532();
					func_105(455, true);
					func_530(4);
				}
			}
		
			if (!func_528(8))
			{
				if (num >= 3)
				{
					func_532();
					func_105(455, true);
					func_530(8);
				}
			}
			break;
	}

	return;
}

void func_473(var uParam0) // Position - 0x15E05 Hash - 0x2CE00B72 ^0x958A4727
{
	func_321(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_321(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_321(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_474(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x15E3F Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_533(anParam0))
		return;

	if (Global_1223851 < 20)
	{
		Global_1223851 = Global_1223851 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223851.f_1[i /*21*/] = { Global_1223851.f_1[i + 1 /*21*/] };
		}
	}

	unk.f_7.f_2.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = hParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1223851.f_1[Global_1223851 - 1 /*21*/] = { unk };
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_475(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x15EE0 Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE6;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE6;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE6;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE6;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = hashKey;
					uParam1->f_1 = hashKey2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
		}
	}

	return false;
}

void func_476(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x15FD6 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

var func_477(BOOL bParam0, var uParam1, var uParam2) // Position - 0x16007 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_478(int iParam0, int iParam1) // Position - 0x1601E Hash - 0x893AC59E ^0x893AC59E
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

struct<4> func_479() // Position - 0x160B8 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_480(Hash hParam0, Hash hParam1) // Position - 0x160C4 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_481(int iParam0) // Position - 0x160DE Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_363(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_482(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_534(num7) - func_534(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_482(float fParam0) // Position - 0x16148 Hash - 0x3E9B0DE9 ^0x3E9B0DE9
{
	if (fParam0 <= (float)-1)
		return -1;

	if (fParam0 < (float)50)
		return 0;

	if (fParam0 < (float)100)
		return 1;

	if (fParam0 < (float)200)
		return 2;

	if (fParam0 < (float)350)
		return 3;

	if (fParam0 < (float)550)
		return 4;

	if (fParam0 < (float)800)
		return 5;

	if (fParam0 < (float)1100)
		return 6;

	return 7;
}

int func_483(int iParam0) // Position - 0x161D4 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_484(int iParam0) // Position - 0x1620D Hash - 0xB8632262 ^0xB8632262
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 16:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_485(float fParam0, float fParam1) // Position - 0x1628C Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_482(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_534(num));
	num3 = BUILTIN::TO_FLOAT(func_534(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_486(int iParam0) // Position - 0x162FF Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_535(iParam0, &num))
		return func_534(num);

	switch (iParam0)
	{
		case 0:
			if (func_536())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_536())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_536())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_487(int iParam0) // Position - 0x1638B Hash - 0xEE6D3E20 ^0xEE6D3E20
{
	switch (iParam0)
	{
		case 0:
			return 246;
	
		case 1:
			return 248;
	
		case 2:
			return 247;
	
		default:
		
	}

	return -1;
}

void func_488(int iParam0, int iParam1, int iParam2) // Position - 0x163BD Hash - 0x29688DE6 ^0xF735ACA4
{
	char* str;
	const char* str2;
	BOOL flag;
	int num;
	const char* str3;
	char* str4;
	char* str5;
	const char* str6;
	int num2;
	Hash hashKey;
	const char* data;

	if (iParam1 == 0)
		return;

	num = iParam1 + 1;

	if (iParam2 != 0)
	{
		str = "RPG_LEVEL_PROGRESS_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, num + 1);
	}
	else
	{
		str = "RPG_LEVEL_INCREASED_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", num);
		flag = true;
	}

	num = num + func_537(iParam0);
	str3 = func_539(func_538(num, iParam2));
	str5 = func_540(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_541(iParam0));
	num2 = func_542(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_543(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_232(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_544(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_489(int iParam0, int iParam1) // Position - 0x164B5 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

BOOL func_490(int iParam0) // Position - 0x164CE Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_491(BOOL bParam0) // Position - 0x164E4 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_492(Hash hParam0) // Position - 0x16509 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_493(Hash hParam0) // Position - 0x16519 Hash - 0xB8632262 ^0xB8632262
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
	
		default:
		
	}

	return false;
}

int func_494(Hash hParam0) // Position - 0x165C0 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_495(Hash hParam0) // Position - 0x165F9 Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_545(&entity, 0, i, &model) && !func_545(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_546(entity, &model);
		
			if (func_94(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_496() // Position - 0x16665 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_547(Global_35, &unk);
	unk31 = { func_350(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_548(false);
	func_549(7);
	func_550(joaat("kit_bandana"), true, true, false);

	if (func_316() == 1160113249)
	{
		func_550(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_550(-361635024, true, true, true);
	}

	func_551(Global_35, &unk);
	return;
}

int func_497(eStackSize essParam0) // Position - 0x166EE Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

int func_498(eStackSize essParam0) // Position - 0x16700 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 0) & 63;
}

void func_499(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x16712 Hash - 0xA65AB937 ^0xA65AB937
{
	func_552(uParam0, iParam6);
	func_553(uParam0, iParam5);
	func_554(uParam0, iParam4);
	func_555(uParam0, iParam3);
	func_556(uParam0, iParam2);
	func_557(uParam0, iParam1);
	return;
}

int func_500(Hash hParam0) // Position - 0x1674A Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_293(outSlotId);
}

int func_501(int iParam0) // Position - 0x1676D Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_502(Hash hParam0, int iParam1) // Position - 0x167EE Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_214(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_552(&num, year);
	func_553(&num, month);
	func_554(&num, day);
	func_555(&num, hour);
	func_556(&num, minute);
	func_557(&num, second);
	return num;
}

BOOL func_503(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x16853 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_558(essParam1) || !func_558(essParam0))
			return true;

	return essParam0 > essParam1;
}

void func_504(int iParam0) // Position - 0x16880 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_91(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

void func_505(int iParam0, int iParam1) // Position - 0x168B3 Hash - 0x19A9221A ^0x79EEA925
{
	int i;
	int num;
	var unk;
	var unk3;

	unk = 39;
	unk3 = 10;
	unk3.f_1 = 39;
	unk3.f_1.f_2 = 39;
	unk3.f_1.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;

	for (i = 0; i < 10; i = i + 1)
	{
		if (i < *iParam0)
		{
			if (func_559(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_559(&iParam0->f_2[i /*2*/], 1))
					func_560(&iParam0->f_2[i /*2*/], 2, 6);
			
				unk3[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { unk3[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_506(int iParam0, int iParam1, int iParam2) // Position - 0x169DF Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_561(iParam0, 1))
		func_562(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_507(int iParam0, Hash hParam1) // Position - 0x16A26 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && hParam1 != false;
}

void func_508(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x16A3F Hash - 0xE34B9CEC ^0xAFBB60FB
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 0;

	if (bParam4)
		num = 3;

	num2 = 12;
	num3 = 20;
	num4 = 16;

	if (hParam0->f_1[num4 /*3*/].f_1 == 1216705912 || hParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			hParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			hParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			hParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_436(num2, num);
	
		if (bParam1)
			func_436(num4, num);
	}

	if (hParam0->f_1[num3 /*3*/].f_1 == -1333118809 || hParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		hParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_436(num3, num);
	}

	return;
}

BOOL func_509(int iParam0) // Position - 0x16B2B Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_316();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_510(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x16B51 Hash - 0x3A135443 ^0x969430D9
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, bParam3); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, bParam3) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_511(Hash hParam0, int iParam1, var uParam2) // Position - 0x16B95 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_512(int iParam0, int iParam1) // Position - 0x16BA6 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_294(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_513(Hash hParam0) // Position - 0x16BC4 Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_514(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x16C0F Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_123() == -1)
		func_563(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_564(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_515(BOOL bParam0, eStackSize essParam1) // Position - 0x16C85 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_123() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			return Global_26796.f_26[essParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		return Global_36638.f_45.f_350.f_26[essParam1 /*120*/] && bParam0 != false;

	return false;
}

void func_516(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x16D02 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_565(&(Global_1946054.f_1378), essParam0);
	func_566(2, essParam0, 6);

	if (bParam1)
		func_517(false, true);

	return;
}

void func_517(BOOL bParam0, BOOL bParam1) // Position - 0x16D2A Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_567(0);

	if (bParam0)
	{
		func_443(8);
		func_443(512);
	}
	else
	{
		func_443(8);
		func_443(16);
	}

	return;
}

BOOL func_518(int iParam0) // Position - 0x16D5D Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_519(int iParam0) // Position - 0x16D72 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

float func_520(int iParam0) // Position - 0x16D92 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_521(float fParam0) // Position - 0x16DA6 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_522(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x16DC1 Hash - 0xC24B5846 ^0x89702B3B
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					else
						return bParam3 ? "PMPLAYER_CONDITION_TEMPERATURE_COLD" : "PMPLAYER_CONDITION_TEMPERATURE_HOT";
					break;
			
				case 2:
					return bParam2 ? "PMPLAYER_CONDITION_HONOR_GOOD" : "PMPLAYER_CONDITION_HONOR_BAD";
			}
			break;
	
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
			
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
			
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
			
				default:
					break;
			}
			break;
	}

	return "";
}

Hash func_523() // Position - 0x16E6A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_524(eStackSize essParam0) // Position - 0x16E79 Hash - 0xCCDB3731 ^0xBD73F64A
{
	Hash hash;

	hash = func_465(essParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_393(hash);
}

int func_525(Hash hParam0) // Position - 0x16E9C Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_568(hParam0))
		num = 0;
	else if (func_569(hParam0))
		num = 1;
	else if (func_570(hParam0))
		num = 2;
	else if (func_571(hParam0))
		num = 3;

	return num;
}

BOOL func_526(int iParam0) // Position - 0x16EDF Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_148(func_572(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_527(int iParam0) // Position - 0x16F1F Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_148(func_573(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_528(int iParam0) // Position - 0x16F5E Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_529() // Position - 0x16F71 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_123() != -1)
		return;

	func_172(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_366(1);
	func_488(1, num, 0);
	return;
}

void func_530(int iParam0) // Position - 0x16FA3 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_531() // Position - 0x16FBA Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_123() != -1)
		return;

	func_172(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_366(2);
	func_488(2, num, 0);
	return;
}

void func_532() // Position - 0x16FEC Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_123() != -1)
		return;

	func_172(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_366(0);
	func_488(0, num, 0);
	return;
}

BOOL func_533(Any anParam0) // Position - 0x1701E Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

int func_534(int iParam0) // Position - 0x17054 Hash - 0xD14E7A6C ^0x65ACC420
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 0;
	
		case 1:
			return 50;
	
		case 2:
			return 100;
	
		case 3:
			return 200;
	
		case 4:
			return 350;
	
		case 5:
			return 550;
	
		case 6:
			return 800;
	
		case 7:
			return 1100;
	
		default:
		
	}

	return 0;
}

BOOL func_535(int iParam0, var uParam1) // Position - 0x170CA Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_536() // Position - 0x170D3 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_537(int iParam0) // Position - 0x170DC Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_214(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_214(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_214(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_538(int iParam0, int iParam1) // Position - 0x1713E Hash - 0xD5391B76 ^0xAEA98D0C
{
	var unk;

	if (iParam0 >= 10)
		iParam1 = 0;

	TEXT_LABEL_ASSIGN_STRING(&unk, "TOAST_RPG_LEVEL_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 32);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 32);
	return unk;
}

const char* func_539(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x17170 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_540(int iParam0) // Position - 0x17184 Hash - 0x21CE226B ^0x5AEDC5BC
{
	switch (iParam0)
	{
		case 0:
			return "stamina" /*Stamina*/;
	
		case 1:
			return "health";
	
		case 2:
			return "dead_eye_level_up";
	
		default:
		
	}

	return "";
}

char* func_541(int iParam0) // Position - 0x171BF Hash - 0x21CE226B ^0xF1794517
{
	switch (iParam0)
	{
		case 0:
			return "RPG_HEALTH";
	
		case 1:
			return "RPG_STAMINA";
	
		case 2:
			return "RPG_DEADEYE";
	
		default:
		
	}

	return "";
}

int func_542(int iParam0) // Position - 0x171FA Hash - 0x21FAF347 ^0x467E3BE5
{
	switch (iParam0)
	{
		case 0:
			return joaat("toast_rpg_level_health");
	
		case 1:
			return joaat("toast_rpg_level_stamina");
	
		case 2:
			return joaat("toast_rpg_level_deadeye");
	
		default:
		
	}

	return 0;
}

int func_543(int iParam0) // Position - 0x17235 Hash - 0x5163992 ^0x5163992
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 3;
	
		default:
		
	}

	return 0;
}

int func_544(int iParam0) // Position - 0x17264 Hash - 0x21FAF347 ^0xA8C8F0DA
{
	switch (iParam0)
	{
		case 0:
			return joaat("stats_health");
	
		case 1:
			return joaat("stats_stamina");
	
		case 2:
			return joaat("stats_deadeye");
	
		default:
		
	}

	return 0;
}

BOOL func_545(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x1729F Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_574(iParam1) && !func_575(iParam1))
		ped = func_576(iParam1);
	else
		return false;

	func_577(uParam3);
	num = func_578(iParam2);

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		return false;

	*uParam0 = unk.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
		return false;

	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*uParam0);
	return true;
}

void func_546(Entity eParam0, var uParam1) // Position - 0x1733E Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_579(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_580(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_547(Ped pedParam0, Any* panParam1) // Position - 0x17388 Hash - 0x2B5AFE28 ^0xF454BB04
{
	var src;
	int i;
	Hash weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	src = 29;
	MISC::COPY_SCRIPT_STRUCT(panParam1, &src, 30);

	for (i = 0; i < 29; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
	
		if (func_241(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_548(BOOL bParam0) // Position - 0x173ED Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_94(hash, 0))
			func_581(hash, false, bParam0);
	
		Global_1946054.f_2657[i] = 0;
	}

	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
	return;
}

void func_549(int iParam0) // Position - 0x17486 Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_123() == -1)
	{
		func_582(352481484);
	
		for (i = 0; i < Global_26796.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_26796[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		for (i = 0; i < Global_36638.f_45.f_350.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_36638.f_45.f_350[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_120(hash) != -999503751)
			func_583(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_584(hash, false))
			func_585(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_550(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x17676 Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_586(hParam0))
		return;

	hash = func_120(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_587(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_587(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_587(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_587(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_587(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_587(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_588(0))
	{
		func_589(hParam0, true);
	
		if (func_316() == 1160113249)
			func_589(func_588(-2125499975), false);
		else
			func_589(func_588(1160113249), false);
	}

	func_590();

	if (func_591(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_214(false), hParam0, 0);

	func_585(hParam0, bParam3);

	if (bParam2)
		func_517(false, false);

	return;
}

void func_551(Ped pedParam0, var uParam1) // Position - 0x177DC Hash - 0xEFD384E2 ^0xD2D4DFA3
{
	int i;
	int weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	for (i = 0; i < 29; i = i + 1)
	{
		if (uParam1->[i] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1->[i], 0, false))
				if (func_240(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

void func_552(var uParam0, int iParam1) // Position - 0x17885 Hash - 0xD05180BA ^0x39589262
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

void func_553(var uParam0, int iParam1) // Position - 0x1790B Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_554(var uParam0, int iParam1) // Position - 0x17947 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_336(*uParam0);
	num2 = func_335(*uParam0);

	if (iParam1 < 1 || iParam1 > func_478(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_555(var uParam0, int iParam1) // Position - 0x1799A Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_556(var uParam0, int iParam1) // Position - 0x179D5 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_557(var uParam0, int iParam1) // Position - 0x17A0E Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_558(eStackSize essParam0) // Position - 0x17A46 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_498(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_497(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_339(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_335(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_336(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_338(essParam0);

	if (num6 < 1 || num6 > func_478(num5, num4))
		return false;

	return true;
}

BOOL func_559(var uParam0, int iParam1) // Position - 0x17B22 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_560(var uParam0, int iParam1, int iParam2) // Position - 0x17B33 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_561(int iParam0, int iParam1) // Position - 0x17B46 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_562(int iParam0, int iParam1) // Position - 0x17B57 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_563(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x17B6A Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_564(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x17BC5 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_565(Hash hParam0, eStackSize essParam1) // Position - 0x17C2F Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_123() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *hParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_563(&hParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_564(&hParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_566(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x17CCA Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_123() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			Global_26796.f_26[essParam1 /*120*/] = Global_26796.f_26[essParam1 /*120*/] || bParam0;
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		Global_36638.f_45.f_350.f_26[essParam1 /*120*/] = Global_36638.f_45.f_350.f_26[essParam1 /*120*/] || bParam0;

	return;
}

void func_567(int iParam0) // Position - 0x17D52 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_568(Hash hParam0) // Position - 0x17D63 Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_94(hParam0, 0))
		return false;

	if (func_116(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_569(Hash hParam0) // Position - 0x17D8D Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_94(hParam0, 0))
		return false;

	if (func_116(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_570(Hash hParam0) // Position - 0x17DB7 Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_94(hParam0, 0))
		return false;

	if (func_116(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_571(Hash hParam0) // Position - 0x17DE1 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_94(hParam0, 0))
		return false;

	if (func_116(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_572(int iParam0, int iParam1) // Position - 0x17E0B Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_592(iParam0);
	
		case 1:
			return func_593(iParam0);
	
		case 2:
			return func_594(iParam0);
	
		case 3:
			return func_595(iParam0);
	}

	return 0;
}

Hash func_573(int iParam0, int iParam1) // Position - 0x17E64 Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_596(iParam0);
	
		case 1:
			return func_597(iParam0);
	
		case 2:
			return func_598(iParam0);
	
		case 3:
			return func_599(iParam0);
	
		case 4:
			return func_600(iParam0);
	
		case 5:
			return func_601(iParam0);
	
		case 6:
			return func_602(iParam0);
	
		case 7:
			return func_603(iParam0);
	
		case 8:
			return func_604(iParam0);
	}

	return 0;
}

BOOL func_574(int iParam0) // Position - 0x17F17 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_605(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_575(int iParam0) // Position - 0x17F4F Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_605(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_574(iParam0))
		return false;

	ped = func_576(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_576(int iParam0) // Position - 0x17FA3 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_605(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_577(var uParam0) // Position - 0x17FCF Hash - 0x6843C143 ^0xA531F0D1
{
	int i;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_10[i /*8*/] = 0;
		uParam0->f_10[i /*8*/].f_1 = 0;
		uParam0->f_10[i /*8*/].f_2 = 0;
		uParam0->f_10[i /*8*/].f_3 = 0;
		uParam0->f_10[i /*8*/].f_4 = 0;
		uParam0->f_10[i /*8*/].f_5 = 0;
		uParam0->f_10[i /*8*/].f_6 = 0;
		uParam0->f_10[i /*8*/].f_7 = 0;
	}

	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	return;
}

int func_578(int iParam0) // Position - 0x18078 Hash - 0x1B64DC55 ^0x1B64DC55
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 6;
	}

	return 0;
}

void func_579(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x180B0 Hash - 0x125E1FB8 ^0x58C5F328
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(pedParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(pedParam0);

	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(pedParam0);
	
		switch (*uParam4)
		{
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		
			case 0:
				*uParam1 = 0;
				break;
		
			case 1:
				*uParam1 = 1;
				break;
		}
	}

	return;
}

BOOL func_580(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x18125 Hash - 0xF684EE16 ^0xD8F147D7
{
	int num;
	var unk;
	BOOL flag;

	num = uParam3;
	unk = iParam2;

	if (num < unk)
		iParam2 = num;

	flag = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(anParam0, pedParam1, iParam2);
	return flag;
}

void func_581(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1814E Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_120(hParam0))
	{
		case -2061583405:
			flag = func_606(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_606(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_606(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_606(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_606(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_606(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_590();

	if (bParam1)
		func_517(false, false);

	return;
}

void func_582(int iParam0) // Position - 0x1821B Hash - 0x958E8FB2 ^0x9CA4541C
{
	int num;
	int num2;
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk = { func_360(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_362(&unk, &num, &num2, false))
	{
		if (num2 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
	
		func_305(num);
	}

	return;
}

void func_583(var uParam0, Hash hParam1, int iParam2) // Position - 0x182E5 Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_607(iParam2, *uParam0);
	func_608(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_584(Hash hParam0, BOOL bParam1) // Position - 0x1831B Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_206(hParam0, false, false) };
	guid = { func_245(hParam0, unk, unk.f_4, false) };

	if (func_359(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_214(false), &guid, bParam1);
	return true;
}

void func_585(Hash hParam0, BOOL bParam1) // Position - 0x18367 Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_206(hParam0, false, false) };
	guid = { func_245(hParam0, unk, unk.f_4, false) };

	if (func_359(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_214(false), &guid, bParam1);
	return;
}

BOOL func_586(Hash hParam0) // Position - 0x183B1 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_123() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_587(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x183DA Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_609(hash, &unk))
		return 0;

	if (bParam3 && !func_584(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_120(hParam0) != -999503751)
		func_583(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_588(int iParam0) // Position - 0x18482 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_316();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_589(Hash hParam0, BOOL bParam1) // Position - 0x184AD Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_206(hParam0, false, false) };
	guid = { func_245(hParam0, unk, unk.f_4, false) };

	if (func_359(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_214(false), &guid);
	return 1;
}

void func_590() // Position - 0x184F9 Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_123() == -1)
	{
		for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
		{
			Global_26796[i] = Global_1946054.f_2657[i];
		}
	
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		Global_36638.f_45.f_350[i] = Global_1946054.f_2657[i];
	}

	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
	return;
}

BOOL func_591(Hash hParam0) // Position - 0x1862F Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_611(func_610(hParam0));
}

Hash func_592(int iParam0) // Position - 0x18641 Hash - 0xC02FF737 ^0xE6E3E291
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 2:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 3:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 4:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 5:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 6:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 7:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 8:
			return joaat("provision_reinforced_bandolier_snake");
	
		default:
		
	}

	return 0;
}

Hash func_593(int iParam0) // Position - 0x186D0 Hash - 0xC02FF737 ^0x9CC78C98
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 3:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 4:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 5:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 6:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 7:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 8:
			return joaat("provision_reinforced_gunbelt_snake");
	
		default:
		
	}

	return 0;
}

Hash func_594(int iParam0) // Position - 0x1875F Hash - 0xC02FF737 ^0x26BFE76B
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_holster_gator");
	
		case 1:
			return joaat("provision_reinforced_holster_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 4:
			return joaat("provision_reinforced_holster_cougar");
	
		case 5:
			return joaat("provision_reinforced_holster_deer");
	
		case 6:
			return joaat("provision_reinforced_holster_panther");
	
		case 7:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 8:
			return joaat("provision_reinforced_holster_snake");
	
		default:
		
	}

	return 0;
}

Hash func_595(int iParam0) // Position - 0x187EE Hash - 0xC02FF737 ^0xC89D76B1
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_offhand_gator");
	
		case 1:
			return joaat("provision_reinforced_offhand_bear");
	
		case 2:
			return joaat("provision_reinforced_offhand_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		case 4:
			return joaat("provision_reinforced_offhand_cougar");
	
		case 5:
			return joaat("provision_reinforced_offhand_deer");
	
		case 6:
			return joaat("provision_reinforced_offhand_panther");
	
		case 7:
			return joaat("provision_reinforced_offhand_rabbit");
	
		case 8:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

Hash func_596(int iParam0) // Position - 0x1887D Hash - 0x51E02475 ^0x6FAD83C9
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 2:
			return joaat("provision_reinforced_holster_gator");
	
		case 3:
			return joaat("provision_reinforced_offhand_gator");
	
		default:
		
	}

	return 0;
}

Hash func_597(int iParam0) // Position - 0x188C6 Hash - 0x51E02475 ^0x73BA00BD
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_bear");
	
		case 3:
			return joaat("provision_reinforced_offhand_bear");
	
		default:
		
	}

	return 0;
}

Hash func_598(int iParam0) // Position - 0x1890F Hash - 0x51E02475 ^0xD39CAF97
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_boar");
	
		default:
		
	}

	return 0;
}

Hash func_599(int iParam0) // Position - 0x18958 Hash - 0x51E02475 ^0xB8F3F001
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 2:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		default:
		
	}

	return 0;
}

Hash func_600(int iParam0) // Position - 0x189A1 Hash - 0x51E02475 ^0xCED8E5FA
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 2:
			return joaat("provision_reinforced_holster_cougar");
	
		case 3:
			return joaat("provision_reinforced_offhand_cougar");
	
		default:
		
	}

	return 0;
}

Hash func_601(int iParam0) // Position - 0x189EA Hash - 0x51E02475 ^0x25F7B61
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 2:
			return joaat("provision_reinforced_holster_deer");
	
		case 3:
			return joaat("provision_reinforced_offhand_deer");
	
		default:
		
	}

	return 0;
}

Hash func_602(int iParam0) // Position - 0x18A33 Hash - 0x51E02475 ^0xE0DEBCEF
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 2:
			return joaat("provision_reinforced_holster_panther");
	
		case 3:
			return joaat("provision_reinforced_offhand_panther");
	
		default:
		
	}

	return 0;
}

Hash func_603(int iParam0) // Position - 0x18A7C Hash - 0x51E02475 ^0x50FB5131
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 2:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 3:
			return joaat("provision_reinforced_offhand_rabbit");
	
		default:
		
	}

	return 0;
}

Hash func_604(int iParam0) // Position - 0x18AC5 Hash - 0x51E02475 ^0x8656D204
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_snake");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_snake");
	
		case 2:
			return joaat("provision_reinforced_holster_snake");
	
		case 3:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

int func_605(int iParam0) // Position - 0x18B0E Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_606(Hash hParam0, int iParam1) // Position - 0x18B27 Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_609(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_120(hParam0) != -999503751)
			func_612(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_120(hParam0) != -999503751)
		func_612(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_584(hParam0, true);
	return 1;
}

void func_607(int iParam0, int iParam1) // Position - 0x18C0D Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_608(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x18C26 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_613(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_294(func_411(hParam1), 1);
		uParam0->f_1 == -1;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}

	uParam0->f_2 = iParam4;
	*uParam0 = hParam1;
	uParam0->f_3 = 0;

	if (bParam3)
		func_614(uParam0);

	return;
}

BOOL func_609(Hash hParam0, var uParam1) // Position - 0x18C82 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

int func_610(Hash hParam0) // Position - 0x18CC2 Hash - 0x497B15BA ^0x497B15BA
{
	switch (hParam0)
	{
		case -2061583405:
			return 2;
	
		case -1719060085:
			return 16;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 4;
	
		case -413129408:
			return 32;
	
		case 81053684:
			return 8;
	
		default:
		
	}

	return 0;
}

BOOL func_611(int iParam0) // Position - 0x18D12 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

void func_612(int iParam0, int iParam1, int iParam2) // Position - 0x18D2A Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_615(iParam1);
	func_616(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_617(&(iParam0->f_26), num2);
	
		if (func_618(iParam0->f_26, &num))
			func_619(num, num2);
	}

	return;
}

void func_613(var uParam0) // Position - 0x18D73 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_620(&(uParam0->f_3));
	return;
}

void func_614(var uParam0) // Position - 0x18D91 Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_621(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

int func_615(int iParam0) // Position - 0x18DB2 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_616(int iParam0, int iParam1) // Position - 0x18DC9 Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_617(var uParam0, int iParam1) // Position - 0x18E11 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_613(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_618(int iParam0, var uParam1) // Position - 0x18E42 Hash - 0xE231A73F ^0x924E070C
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*uParam1] == iParam0)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_619(int iParam0, int iParam1) // Position - 0x18E86 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_620(var uParam0) // Position - 0x18E9F Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_621(var uParam0, Any anParam1, int iParam2) // Position - 0x18ECB Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_622(func_316());

	if (*uParam0)
		func_620(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_123() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_622(int iParam0) // Position - 0x18F02 Hash - 0xB4860741 ^0xB4860741
{
	if (func_123() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
		
			case -449205311:
				return 0;
		
			case 1160113249:
				return 0;
		
			default:
			
		}
	
		return 0;
	}

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
	
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
	
		default:
		
	}

	return 0;
}

