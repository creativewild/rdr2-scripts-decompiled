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
	var uLocal_78 = 2;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
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

BOOL func_12(var uParam0) // Position - 0x45A Hash - 0x36112792 ^0xCB353445
{
	if (func_41(uParam0, 1126694912))
	{
		if (func_42(uParam0))
		{
			func_43(uParam0);
			func_44(uParam0, &uParam0->f_36[0], 0);
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

void func_13(var uParam0) // Position - 0x499 Hash - 0x5B5CA065 ^0x6B998B4A
{
	if (func_45(uParam0->f_3, 2048) && !func_45(uParam0->f_3, 64))
		func_46(&(uParam0->f_3), 64);
	else if (func_45(uParam0->f_3, 1024) && !func_45(uParam0->f_3, 32))
		func_46(&(uParam0->f_3), 32);
	else if (func_45(uParam0->f_3, 512) && !func_45(uParam0->f_3, 16))
		func_46(&(uParam0->f_3), 16);
	else if (func_45(uParam0->f_3, 256) && !func_45(uParam0->f_3, 8))
		func_46(&(uParam0->f_3), 8);
	else if (func_45(uParam0->f_3, 128) && !func_45(uParam0->f_3, 4))
		func_46(&(uParam0->f_3), 4);

	func_47(&(uParam0->f_5), &(uParam0->f_3));
	return;
}

void func_14(var uParam0) // Position - 0x57F Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

int func_15() // Position - 0x587 Hash - 0x45910AF6 ^0x45910AF6
{
	return 41;
}

Volume func_16(int iParam0) // Position - 0x591 Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_48(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_3;
}

BOOL func_17(var uParam0) // Position - 0x5B1 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

BOOL func_18(var uParam0) // Position - 0x5BA Hash - 0x354E7558 ^0x2DA5DBDD
{
	var unk;

	if (!iLocal_73.f_4)
		if (func_49(uParam0))
			iLocal_73.f_4 = 1;

	if (iLocal_73 > 0)
		func_50(uParam0);

	switch (iLocal_73)
	{
		case 0:
			if (func_41(uParam0, 1126694912))
				func_51(&iLocal_73, 1, true);
			else
				func_51(&iLocal_73, 2, true);
			break;
	
		case 1:
			if (!func_45(uParam0->f_3, 4))
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_46) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_46, true, 0))
					func_51(&iLocal_73, 2, true);
			break;
	
		case 2:
			if (!func_45(uParam0->f_3, 128))
			{
				func_52(uParam0->f_1, &unk);
				func_53(uParam0, 0);
				func_46(&(uParam0->f_3), 128);
				func_54(uParam0);
				func_47(&(uParam0->f_5), &(uParam0->f_3));
			}
			break;
	}

	return false;
}

void func_19(var uParam0) // Position - 0x69B Hash - 0x94B4D230 ^0xB29068A0
{
	func_55(uParam0);
	func_56(uParam0);
	func_57(uParam0, false);
	func_58(uParam0, false);
	func_59(uParam0);
	func_60(uParam0);
	func_61(uParam0);

	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam0, false))
		SCRIPTS::TERMINATE_THREAD(*uParam0);

	return;
}

void func_20(var uParam0) // Position - 0x6E1 Hash - 0x55173727 ^0xB804F751
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_46))
	{
		if (!_IS_NULL_VECTOR(func_62(uParam0)))
			if (uParam0->f_1 == 2 || uParam0->f_1 == 4 || uParam0->f_1 == 8)
				uParam0->f_46 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_62(uParam0), func_64(uParam0), func_65(uParam0), "SHACK_VOLUME_RESTRICTION");
			else
				uParam0->f_46 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_62(uParam0), func_64(uParam0), func_65(uParam0), "SHACK_VOLUME_RESTRICTION");
	
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_46))
		{
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_46, 0, 0, 0, -1, -1, 0);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_46, 0, 0, 0, -1, -1, 2);
		}
	}

	func_66(uParam0);

	if (func_67(uParam0))
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_46))
			if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_45))
				uParam0->f_45 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(uParam0->f_46, false, 15);

	return;
}

void func_21(var uParam0) // Position - 0x7BC Hash - 0xF1A1E55B ^0xF1A1E55B
{
	int i;

	for (i = 0; i <= 3 - 1; i = i + 1)
	{
		!func_68(uParam0, i);
	}

	return;
}

void func_22(var uParam0) // Position - 0x7E4 Hash - 0x645DF762 ^0x5C851819
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
			if (func_41(uParam0, 1126694912))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
			}
			break;
	
		case 64:
			if (!func_45(uParam0->f_3, 4))
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
			if (!func_45(uParam0->f_3, 4))
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
			if (!func_45(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_f_m_unicorpse_01");
				uParam0->f_6[2] = joaat("a_f_m_unicorpse_01");
				uParam0->f_6[3] = joaat("a_c_crow_01");
				uParam0->f_6[4] = joaat("a_c_crow_01");
			}
			else if (func_41(uParam0, 1126694912))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_f_m_unicorpse_01");
			}
			break;
	
		case 8192:
			if (!func_45(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					if (!func_71(func_70(uParam0->f_5), 4) || !func_71(func_70(uParam0->f_5), 8))
					{
						uParam0->f_4 = 0;
					
						if (!func_71(func_70(uParam0->f_5), 2) && !func_72(128, false, true) && !func_73(PLAYER::GET_PLAYER_INDEX(), true, true, true) && !func_74() && !func_75(20) && !func_71(func_70(uParam0->f_5), 4) && !func_71(func_70(uParam0->f_5), 8))
						{
							uParam0->f_4 = uParam0->f_4 + 2;
							uParam0->f_6[0] = joaat("shack_missinghusband_males_01");
							uParam0->f_6[4] = joaat("a_c_horse_morgan_flaxenchestnut");
						}
					
						if (!func_71(func_70(uParam0->f_5), 4))
						{
							uParam0->f_4 = uParam0->f_4 + 3;
							uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
							uParam0->f_6[2] = joaat("a_c_horse_morgan_flaxenchestnut");
							uParam0->f_6[3] = joaat("a_c_horse_morgan_flaxenchestnut");
						}
					
						if (!func_71(func_70(uParam0->f_5), 8))
							uParam0->f_22[1] = joaat("p_cs_rt_envelope01x");
					}
				}
				else if (!func_71(func_70(uParam0->f_5), 1))
				{
					uParam0->f_22[0] = joaat("p_cs_rt_envelope01x");
				}
			}
			else if (!func_45(uParam0->f_3, 8))
			{
				uParam0->f_22[0] = joaat("p_cs_rt_envelope01x");
			}
			break;
	
		case 16384:
			if (!func_45(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
			}
			break;
	
		case 32768:
			if (!func_45(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = joaat("shack_ontherun_males_01");
				uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[2] = joaat("a_m_m_unicorpse_01");
				uParam0->f_22[0] = joaat("p_cs_shackleleg01x");
			}
			else if (!func_45(uParam0->f_3, 8))
			{
				if (!func_69(-1282804314))
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
			if (!func_45(uParam0->f_3, 4))
			{
				uParam0->f_22[0] = joaat("p_lnnhouse_stash02");
			
				if (!func_71(func_70(uParam0->f_5), 2))
					uParam0->f_22[1] = joaat("p_cs_rt_envelope01x");
			}
			break;
	
		case 131072:
			if (!func_45(uParam0->f_3, 4))
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

BOOL func_23(var uParam0) // Position - 0xD1F Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_24(var uParam0) // Position - 0xD28 Hash - 0xB05B1E4C ^0x659B50C5
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			STREAMING::REQUEST_MODEL(uParam0->f_6[i], false);
	}

	return;
}

void func_25(var uParam0) // Position - 0xD5F Hash - 0xB05B1E4C ^0x3803CA63
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(uParam0->f_22[i] == 0))
			STREAMING::REQUEST_MODEL(uParam0->f_22[i], false);
	}

	return;
}

void func_26(var uParam0, int iParam1) // Position - 0xD96 Hash - 0x2059281F ^0x920C6508
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_76(uParam0, i, 0)))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_36[i]))
			{
				if (func_77(uParam0, i))
					iParam1 = 8;
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_76(uParam0, i, 1)))
					uParam0->f_36[i] = ANIMSCENE::_CREATE_ANIM_SCENE(func_76(uParam0, i, 0), iParam1, func_76(uParam0, i, 1), false, true);
				else
					uParam0->f_36[i] = ANIMSCENE::_CREATE_ANIM_SCENE(func_76(uParam0, i, 0), iParam1, 0, false, true);
			
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_36[i]);
			}
		}
	}

	return;
}

void func_27(var uParam0) // Position - 0xE41 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_28(var uParam0) // Position - 0xE49 Hash - 0xA87D3B90 ^0xA87D3B90
{
	if (!func_78(uParam0) || !func_79(uParam0))
		return false;

	return true;
}

BOOL func_29(var uParam0) // Position - 0xE6D Hash - 0x5A1D2D19 ^0x46EFDD64
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_76(uParam0, i, 0)))
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_36[i], true, false))
				return false;
	}

	return true;
}

BOOL func_30(var uParam0) // Position - 0xEB1 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_31(int iParam0, int iParam1) // Position - 0xEBA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Vector3 func_32(var uParam0, int iParam1) // Position - 0xEC9 Hash - 0x2988EE5 ^0x6BBE7B16
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

float func_33(var uParam0, int iParam1) // Position - 0x1306 Hash - 0x8D7C8EE1 ^0x5E37210F
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

void func_34(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x15DB Hash - 0x330DA358 ^0xEE530B1D
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

void func_35(var uParam0, int iParam1) // Position - 0x1713 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

Vector3 func_36(var uParam0, int iParam1) // Position - 0x1720 Hash - 0xDA541216 ^0xC9AC9AC
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

Vector3 func_37(var uParam0, int iParam1) // Position - 0x18DE Hash - 0xA4B7AFCE ^0xCCB5B101
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

BOOL func_38(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, int iParam7) // Position - 0x1A4C Hash - 0x13A54AB0 ^0x7344042C
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

Hash func_39(var uParam0, int iParam1) // Position - 0x1ADE Hash - 0x3DF3B4F6 ^0x84E0C99B
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
					if (!func_45(uParam0->f_3, 4))
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

void func_40(Ped pedParam0, Hash hParam1) // Position - 0x1D86 Hash - 0xCB3DCF4 ^0x4675D074
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

BOOL func_41(var uParam0, int iParam1) // Position - 0x1E2D Hash - 0x3F071584 ^0x990A9185
{
	float num;
	float num2;
	float num3;

	num2 = func_86();

	if (func_87(uParam0->f_1, &num))
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

BOOL func_42(var uParam0) // Position - 0x1E66 Hash - 0x31E9B6D1 ^0x31E9B6D1
{
	if (!func_88(uParam0))
		return false;

	func_89(uParam0, 5);
	return true;
}

void func_43(var uParam0) // Position - 0x1E84 Hash - 0xDFEB7404 ^0xDFEB7404
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		func_90(uParam0, i, false);
	}

	return;
}

void func_44(var uParam0, var uParam1, int iParam2) // Position - 0x1EA9 Hash - 0x9A6CA5FD ^0xD9DA2637
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_76(uParam0, iParam2, 0)))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				func_91(uParam0, uParam1, iParam2);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
			}
		}
	}

	return;
}

BOOL func_45(int iParam0, int iParam1) // Position - 0x1EEF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_46(var uParam0, int iParam1) // Position - 0x1EFE Hash - 0xF55E891F ^0xF55E891F
{
	func_92(uParam0, iParam1);
	return;
}

int func_47(var uParam0, var uParam1) // Position - 0x1F0E Hash - 0x52ACA8C9 ^0x52ACA8C9
{
	if (func_93(*uParam0))
	{
		func_94(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}

	return 0;
}

BOOL func_48(int iParam0) // Position - 0x1F36 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_49(var uParam0) // Position - 0x1F4C Hash - 0x4104ED08 ^0xD46FFCB3
{
	if (!func_45(uParam0->f_3, 4))
		if (!func_95("dr_bloody_corpses", -155.657f, 1489.998f, 117.244f, true))
			return false;
	else if (func_41(uParam0, 1126694912))
		if (!func_95("dr_bloody_corpses", -155.657f, 1489.998f, 117.244f, true))
			return false;
	else if (!func_95("dr_bloody_corpses", -155.657f, 1489.998f, 117.244f, false))
		return false;

	return true;
}

void func_50(var uParam0) // Position - 0x1FD3 Hash - 0x588FF035 ^0x3134A51C
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		switch (uLocal_78[i])
		{
			case 0:
				if (func_41(uParam0, 1126694912))
					func_96(&uLocal_78[i], 1);
				else
					func_96(&uLocal_78[i], 2);
				break;
		
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i]) && ENTITY::IS_ENTITY_DEAD(uParam0->f_13[i]))
				{
					func_97(&uParam0->f_13[i], i);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13[i], true);
					func_96(&uLocal_78[i], 2);
				}
				break;
		
			case 2:
				break;
		}
	}

	return;
}

void func_51(var uParam0, int iParam1, BOOL bParam2) // Position - 0x2084 Hash - 0x5D39ADC5 ^0x5540A452
{
	*uParam0 = iParam1;

	if (bParam2)
		func_98(&(uParam0->f_1));

	return;
}

int func_52(int iParam0, var uParam1) // Position - 0x209E Hash - 0xB885147B ^0xB885147B
{
	int num;

	num = func_99(iParam0);

	if (num != 0)
	{
		*uParam1 = func_86();
		func_100(iParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}

	return 0;
}

void func_53(var uParam0, int iParam1) // Position - 0x20D0 Hash - 0x796D37BC ^0x7CBA9CCD
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (func_80(uParam0, i))
			func_101(&uParam0->f_13[i], iParam1, i);
	}

	return;
}

void func_54(var uParam0) // Position - 0x2107 Hash - 0x90FF21B0 ^0x8C68D40F
{
	Hash discoveryHash;

	if (!func_45(uParam0->f_3, 8192))
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
	
		func_46(&(uParam0->f_3), 8192);
		func_103(func_102(joaat("shack_found")), 1);
	}

	return;
}

void func_55(var uParam0) // Position - 0x2247 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_56(var uParam0) // Position - 0x224F Hash - 0xD3290849 ^0xFA22875B
{
	int i;

	for (i = 0; i <= 3 - 1; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_41[i]))
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_41[i]);
	}

	return;
}

void func_57(var uParam0, BOOL bParam1) // Position - 0x2286 Hash - 0xD0CC9A51 ^0x157C053C
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		func_104(&uParam0->f_29[i], bParam1, i);
	}

	return;
}

void func_58(var uParam0, BOOL bParam1) // Position - 0x22B2 Hash - 0xD0CC9A51 ^0xEA6102F5
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		func_105(&uParam0->f_13[i], bParam1, i);
	}

	return;
}

void func_59(var uParam0) // Position - 0x22DE Hash - 0xC54F00EA ^0x7EEF38F8
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_76(uParam0, i, 0)))
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_36[i]))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_36[i]);
	}

	return;
}

void func_60(var uParam0) // Position - 0x2326 Hash - 0xE5E6F191 ^0x3DEDDBFC
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_46))
	{
		func_106(&(uParam0->f_45), uParam0->f_46, false);
		VOLUME::DELETE_VOLUME(uParam0->f_46);
	}

	func_107(uParam0);
	return;
}

void func_61(var uParam0) // Position - 0x2354 Hash - 0x49584173 ^0x49584173
{
	func_108(uParam0);
	func_109(uParam0);
	return;
}

Vector3 func_62(var uParam0) // Position - 0x2368 Hash - 0x499CD658 ^0x2E31FDEE
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

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2530 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

Vector3 func_64(var uParam0) // Position - 0x255A Hash - 0xD3B249DB ^0xA7E53409
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

Vector3 func_65(var uParam0) // Position - 0x267E Hash - 0x607ACA1D ^0xEC3EC28E
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

void func_66(var uParam0) // Position - 0x2802 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_67(var uParam0) // Position - 0x280A Hash - 0xD3EE964E ^0x607CEDF2
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

BOOL func_68(var uParam0, int iParam1) // Position - 0x2890 Hash - 0x2691CBA1 ^0x66633B2F
{
	if (!(func_110(uParam0, iParam1) == 0) && !TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_41[iParam1]))
		uParam0->f_41[iParam1] = TASK::CREATE_SCENARIO_POINT_HASH(func_110(uParam0, iParam1), func_111(uParam0, iParam1), func_112(uParam0, iParam1), func_113(uParam0, iParam1), 0, false);

	return true;
}

BOOL func_69(int iParam0) // Position - 0x28E7 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_114(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

int func_70(int iParam0) // Position - 0x2936 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_93(iParam0))
		return -1;

	return func_115(iParam0);
}

BOOL func_71(int iParam0, int iParam1) // Position - 0x2952 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_72(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2961 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_116())
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
		num = func_117(Global_1898164.f_1[0 /*5*/]);
	
		if (func_118(num) && func_119(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_93(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_73(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2B65 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_120(bParam1, bParam2, bParam3);

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

BOOL func_74() // Position - 0x2C9A Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1310750.f_16077 != 0;
}

BOOL func_75(int iParam0) // Position - 0x2CAB Hash - 0x7647021A ^0x923E095B
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

char* func_76(var uParam0, int iParam1, int iParam2) // Position - 0x2CBD Hash - 0x5FC1ADDA ^0x43664607
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
			if (func_41(uParam0, 1126694912))
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
			if (!func_45(uParam0->f_3, 4))
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
			if (!func_45(uParam0->f_3, 4))
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
			if (!func_45(uParam0->f_3, 4) || func_41(uParam0, 1126694912))
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
			if (!func_45(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if (!func_71(func_70(uParam0->f_5), 4) && !func_71(func_70(uParam0->f_5), 2) && !func_71(func_70(uParam0->f_5), 8))
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
							if (!func_71(func_70(uParam0->f_5), 4))
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
			if (!func_45(uParam0->f_3, 4))
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
			if (!func_45(uParam0->f_3, 4))
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
			else if (!func_45(uParam0->f_3, 8))
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

BOOL func_77(var uParam0, int iParam1) // Position - 0x30C4 Hash - 0xB2668DA9 ^0xDE3ACD93
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

BOOL func_78(var uParam0) // Position - 0x3176 Hash - 0x6AED41FA ^0x20BB64C1
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

BOOL func_79(var uParam0) // Position - 0x31B5 Hash - 0x6AED41FA ^0xE5C98481
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

BOOL func_80(var uParam0, int iParam1) // Position - 0x31F4 Hash - 0x7407E27F ^0x5B559311
{
	if (uParam0->f_1 == 32768)
		if (!func_45(uParam0->f_3, 4))
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

Ped func_81(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x331C Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_121(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_82(Ped pedParam0, Hash hParam1) // Position - 0x335E Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_83(Ped pedParam0, Hash hParam1) // Position - 0x338C Hash - 0x4E081CE7 ^0x591EE893
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

BOOL func_84(Ped pedParam0, Hash hParam1) // Position - 0x33DC Hash - 0x4E081CE7 ^0x591EE893
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

void func_85(Ped pedParam0) // Position - 0x344C Hash - 0x8B04D70D ^0x8FBE6E1C
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

float func_86() // Position - 0x3469 Hash - 0x5FC8DB2 ^0x961D5AF9
{
	float num;
	int value;
	int num2;
	int value2;
	int value3;
	int num3;
	eStackSize stackSize;

	stackSize = func_122();
	value3 = func_123(stackSize);
	num3 = func_124(stackSize);
	value2 = func_125(num3, value3);
	num2 = func_126(stackSize);
	value = func_127(stackSize);
	num = BUILTIN::TO_FLOAT(value) + (BUILTIN::TO_FLOAT(num2 - 1) * 24f) + (BUILTIN::TO_FLOAT(value2) * 24f) + (BUILTIN::TO_FLOAT(value3) * 365.2422f * 24f);
	return num;
}

BOOL func_87(int iParam0, var uParam1) // Position - 0x34DA Hash - 0x3E138978 ^0x3E138978
{
	int num;

	num = func_99(iParam0);

	if (num != 0)
	{
		*uParam1 = func_128(iParam0);
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_88(var uParam0) // Position - 0x3505 Hash - 0x3A8D1027 ^0x5A52ED7C
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!func_129(&uParam0->f_13[i], i))
			return false;
	}

	return true;
}

void func_89(var uParam0, int iParam1) // Position - 0x3538 Hash - 0xD0CC9A51 ^0xEA6102F5
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		func_130(&uParam0->f_13[i], iParam1, i);
	}

	return;
}

void func_90(var uParam0, int iParam1, BOOL bParam2) // Position - 0x3564 Hash - 0x6FFE3C84 ^0x488DFE70
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iParam1]))
	{
		ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iParam1]);
		func_131(&uParam0->f_13[iParam1], bParam2);
		func_132(&uParam0->f_13[iParam1], false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_13[iParam1], 26, true);
		PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_13[iParam1], 1, false);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_13[iParam1], true, true);
	}

	return;
}

void func_91(var uParam0, var uParam1, int iParam2) // Position - 0x35D0 Hash - 0x8EF8F0FA ^0xFB889120
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_76(uParam0, iParam2, 0)))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				func_133(uParam0, iParam2);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_76(uParam0, iParam2, 1)))
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(*uParam1, func_76(uParam0, iParam2, 1)))
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, func_76(uParam0, iParam2, 1), true);
			}
		}
	}

	return;
}

void func_92(var uParam0, int iParam1) // Position - 0x3642 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_93(int iParam0) // Position - 0x3653 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_94(int iParam0, var uParam1) // Position - 0x3686 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_93(iParam0))
		return;

	func_134(iParam0, uParam1);
	return;
}

BOOL func_95(char* sParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x36A3 Hash - 0x8A350A82 ^0x30FE8278
{
	Interior interiorAtCoords;

	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(fParam1);

	if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords))
	{
		if (INTERIOR::IS_INTERIOR_READY(interiorAtCoords))
		{
			if (bParam4)
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoords, sParam0, 0);
			else
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoords, sParam0, true);
		
			return true;
		}
	}

	return false;
}

void func_96(var uParam0, int iParam1) // Position - 0x36EC Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_97(var uParam0, int iParam1) // Position - 0x36F9 Hash - 0xA857B99A ^0x1338397F
{
	int flags;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			flags = 1048575;
			PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, flags);
		}
	}

	return;
}

void func_98(var uParam0) // Position - 0x372A Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_135(uParam0, 0f);
	return;
}

int func_99(int iParam0) // Position - 0x3739 Hash - 0x759A7885 ^0x759A7885
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

void func_100(int iParam0, float fParam1) // Position - 0x3809 Hash - 0xACC192DE ^0xACC192DE
{
	int num;

	num = func_99(iParam0);

	if (num == 0)
		return;

	Global_40.f_11959[num] = fParam1;
	return;
}

void func_101(var uParam0, int iParam1, int iParam2) // Position - 0x382E Hash - 0xCE3A98A5 ^0x36C1472A
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 186, true))
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, true);
	
		if (PED::GET_PED_CONFIG_FLAG(*uParam0, 223, true))
			PED::SET_PED_CONFIG_FLAG(*uParam0, 223, false);
	
		PERSISTENCE::_0xE225CEF1901F6108(*uParam0, iParam1);
	}

	return;
}

struct<2> func_102(int iParam0) // Position - 0x3878 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_103(var uParam0, var uParam1, int iParam2) // Position - 0x3888 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_104(Object* pobParam0, BOOL bParam1, int iParam2) // Position - 0x3898 Hash - 0x58AF85DB ^0x583A29D8
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		if (bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
		else
			OBJECT::DELETE_OBJECT(pobParam0);

	return;
}

void func_105(Ped* ppedParam0, BOOL bParam1, int iParam2) // Position - 0x38BE Hash - 0xE077C306 ^0xAE09206
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
		if (bParam1)
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
		else if (!PED::GET_PED_CONFIG_FLAG(*ppedParam0, 186, true))
			PED::DELETE_PED(ppedParam0);

	return;
}

void func_106(var uParam0, Volume volParam1, BOOL bParam2) // Position - 0x38F5 Hash - 0x2EB65318 ^0x737362FB
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

void func_107(var uParam0) // Position - 0x392D Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_108(var uParam0) // Position - 0x3935 Hash - 0x5DAA6EFD ^0x8C3E0B48
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[i]);
	}

	return;
}

void func_109(var uParam0) // Position - 0x396B Hash - 0x5DAA6EFD ^0x787D1A53
{
	int i;

	for (i = 0; i <= 6 - 1; i = i + 1)
	{
		if (!(uParam0->f_22[i] == 0))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_22[i]);
	}

	return;
}

Hash func_110(var uParam0, int iParam1) // Position - 0x39A1 Hash - 0x573D844D ^0x76274586
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
				if (!func_45(uParam0->f_3, 4))
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
			if (!func_45(uParam0->f_3, 4))
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

Vector3 func_111(var uParam0, int iParam1) // Position - 0x3A90 Hash - 0x7D92E42F ^0xD64F2D3A
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

float func_112(var uParam0, int iParam1) // Position - 0x3B95 Hash - 0x5F2B7B ^0x1F7940FF
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

float func_113(var uParam0, int iParam1) // Position - 0x3C6E Hash - 0xB2094D25 ^0xEC07B69E
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

int func_114(int iParam0, int iParam1) // Position - 0x3D08 Hash - 0xEA82FE59 ^0xEA82FE59
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

int func_115(int iParam0) // Position - 0x5112 Hash - 0xB1EC3C9 ^0x6FAB5D7B
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_4;

	return 0;
}

BOOL func_116() // Position - 0x5131 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_117(int iParam0) // Position - 0x5184 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_93(iParam0))
		return -1;

	return func_137(func_136(iParam0));
}

BOOL func_118(int iParam0) // Position - 0x51A4 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_119(int iParam0, int iParam1) // Position - 0x51BA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_120(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x51C9 Hash - 0xC9655EC3 ^0x88C9AFE1
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

void func_121(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x5267 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_138(eptParam1))
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
			func_139(pedParam0, 0, true);
	
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
			func_140(pedParam0, false);
			flag = true;
		}
	
		func_141(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

eStackSize func_122() // Position - 0x5348 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_123(eStackSize essParam0) // Position - 0x5354 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

int func_124(eStackSize essParam0) // Position - 0x5379 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_125(int iParam0, int iParam1) // Position - 0x538C Hash - 0x24B83B6D ^0x24B83B6D
{
	int i;
	int num;
	int num2;

	num = iParam0 - 1;

	if (num > 0)
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = num2 + func_143(num, iParam1);
		}
	}

	return num2;
}

int func_126(eStackSize essParam0) // Position - 0x53C2 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_127(eStackSize essParam0) // Position - 0x53D5 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

float func_128(int iParam0) // Position - 0x53E8 Hash - 0x149415FC ^0x149415FC
{
	int num;

	num = func_99(iParam0);

	if (num == 0)
		return 0f;

	return Global_40.f_11959[num];
}

BOOL func_129(var uParam0, int iParam1) // Position - 0x540C Hash - 0x92FA206F ^0x5560DE34
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0) && !ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(*uParam0))
		return false;

	return true;
}

void func_130(var uParam0, int iParam1, int iParam2) // Position - 0x543D Hash - 0x1EEFF409 ^0x39CC033F
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
		IK::_INVERSE_KINEMATICS_SET_DISABLED_FOR_PED(*uParam0, iParam1, true);

	return;
}

void func_131(var uParam0, BOOL bParam1) // Position - 0x5466 Hash - 0xF175BFDA ^0x17873E56
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*uParam0);
		PED::SET_LOOTING_FLAG(*uParam0, 0, bParam1);
		PED::SET_LOOTING_FLAG(*uParam0, 1, bParam1);
		PED::SET_LOOTING_FLAG(*uParam0, 6, bParam1);
		PED::SET_LOOTING_FLAG(*uParam0, 4, bParam1);
	}

	return;
}

void func_132(var uParam0, BOOL bParam1) // Position - 0x54AA Hash - 0xB39C0E6F ^0x5D10BB1
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*uParam0);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 2, bParam1);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 3, bParam1);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 7, bParam1);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 9, bParam1);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 10, bParam1);
	}

	return;
}

void func_133(var uParam0, int iParam1) // Position - 0x54FA Hash - 0x2062294D ^0x4646FBC3
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
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[0], func_144(uParam0, 0), iParam1);
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[0], func_144(uParam0, 0), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[1], func_144(uParam0, 1), iParam1);
					break;
			}
			break;
	
		case 64:
			switch (iParam1)
			{
				case 0:
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[0], func_144(uParam0, 0), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[1], func_144(uParam0, 1), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[2], func_144(uParam0, 2), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[3], func_144(uParam0, 3), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[4], func_144(uParam0, 4), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[5], func_144(uParam0, 5), iParam1);
					break;
			}
			break;
	
		case 256:
			switch (iParam1)
			{
				case 0:
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[0], func_144(uParam0, 0), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[1], func_144(uParam0, 1), iParam1);
					break;
			}
			break;
	
		case 512:
			switch (iParam1)
			{
				case 0:
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[0], func_144(uParam0, 0), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[1], func_144(uParam0, 1), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[2], func_144(uParam0, 2), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[3], func_144(uParam0, 3), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[4], func_144(uParam0, 4), iParam1);
					break;
			}
			break;
	
		case 4096:
			switch (iParam1)
			{
				case 0:
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[0], func_144(uParam0, 0), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[1], func_144(uParam0, 1), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[2], func_144(uParam0, 2), iParam1);
					break;
			}
			break;
	
		case 8192:
			if (!func_45(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if (!func_71(func_70(uParam0->f_5), 4) && !func_71(func_70(uParam0->f_5), 2) && !func_71(func_70(uParam0->f_5), 8))
								func_145(&uParam0->f_36[iParam1], &uParam0->f_13[0], func_144(uParam0, 0), iParam1);
							break;
					
						case 1:
							if (!func_71(func_70(uParam0->f_5), 4))
							{
								func_145(&uParam0->f_36[iParam1], &uParam0->f_13[1], func_144(uParam0, 1), iParam1);
								func_145(&uParam0->f_36[iParam1], &uParam0->f_13[2], func_144(uParam0, 2), iParam1);
								func_145(&uParam0->f_36[iParam1], &uParam0->f_13[3], func_144(uParam0, 3), iParam1);
							}
							break;
					}
				}
			}
			break;
	
		case 16384:
			switch (iParam1)
			{
				case 0:
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[0], func_144(uParam0, 0), iParam1);
					break;
			}
			break;
	
		case 32768:
			switch (iParam1)
			{
				case 0:
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[2], func_144(uParam0, 2), iParam1);
					break;
			
				case 1:
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[1], func_144(uParam0, 1), iParam1);
					break;
			
				case 2:
					if (!func_45(uParam0->f_3, 4))
					{
						func_145(&uParam0->f_36[iParam1], &uParam0->f_13[0], func_144(uParam0, 0), iParam1);
						func_147(&uParam0->f_36[iParam1], &uParam0->f_29[0], func_146(uParam0, 0), iParam1);
					}
					break;
			}
			break;
	
		case 131072:
			switch (iParam1)
			{
				case 0:
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[0], func_144(uParam0, 0), iParam1);
					func_145(&uParam0->f_36[iParam1], &uParam0->f_13[1], func_144(uParam0, 1), iParam1);
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

void func_134(int iParam0, var uParam1) // Position - 0x5A13 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = uParam1;
	return;
}

void func_135(var uParam0, float fParam1) // Position - 0x5A33 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_148() - fParam1;
	func_149(uParam0, 1);
	func_150(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_136(int iParam0) // Position - 0x5A59 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_137(BOOL bParam0) // Position - 0x5A97 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_138(ePedType eptParam0) // Position - 0x5AAA Hash - 0x5000025C ^0x5000025C
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

void func_139(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x5EFD Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_140(Ped pedParam0, BOOL bParam1) // Position - 0x5F2D Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_141(Ped pedParam0, int iParam1) // Position - 0x5F72 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

var func_142(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5F99 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_143(int iParam0, int iParam1) // Position - 0x5FB0 Hash - 0x893AC59E ^0x893AC59E
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

// Unhandled jump detected. Output should be considered invalid
char* func_144(var uParam0, int iParam1) // Position - 0x604A Hash - 0x329707A7 ^0x890C6CCE
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
					return "Civil_War_Bride";
			
				default:
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return "Male01";
			
				case 1:
					return "Male02";
			
				default:
					break;
			}
			break;
	
		case 64:
			switch (iParam1)
			{
				case 0:
					return "Settler";
			
				case 1:
					return "Settler^1";
			
				case 2:
					return "Settler^2";
			
				case 3:
					return "Settler^3";
			
				case 4:
					return "Settler^4";
			
				case 5:
					return "Settler^5";
			
				default:
					break;
			}
			break;
	
		case 256:
			switch (iParam1)
			{
				case 0:
					return "male01";
			
				case 1:
					return "male";
			
				default:
					break;
			}
			break;
	
		case 512:
			switch (iParam1)
			{
				case 0:
					return "Father";
			
				case 1:
					return "Grandfather";
			
				case 2:
					return "Grandmother";
			
				case 3:
					return "Mother";
			
				case 4:
					return "Son";
			
				default:
					break;
			}
			break;
	
		case 4096:
			switch (iParam1)
			{
				case 0:
					return "A_M_M_UNICORPSE_01";
			
				case 1:
					return "A_F_M_UNICORPSE_01";
			
				case 2:
					return "A_F_M_UNICORPSE_01^1";
			
				default:
					break;
			}
			break;
	
		case 8192:
			switch (iParam1)
			{
				case 0:
					return "male";
			
				case 1:
					return "Husband";
			
				case 2:
					return "Horse01";
			
				case 3:
					return "Horse01^1";
			
				default:
					break;
			}
			break;
	
		case 16384:
			switch (iParam1)
			{
				case 0:
					return "mountainman";
			
				default:
					break;
			}
			break;
	
		case 32768:
			if (!func_45(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return "male";
				
					case 1:
						return "Dead";
				
					case 2:
						return "Dead";
				
					default:
						goto 0xDC;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 1:
						return "Dead";
				
					case 2:
						return "Dead";
				
					default:
						break;
				}
			}
			break;
	
		case 131072:
			switch (iParam1)
			{
				case 0:
					return "Starved_Boy_Bed";
			
				case 1:
					return "Starved_Boy_Floor";
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return "";
}

void func_145(var uParam0, var uParam1, char* sParam2, int iParam3) // Position - 0x62EB Hash - 0x5DF0EF7F ^0x4A896CF4
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
					if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(*uParam0, sParam2))
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, *uParam1, 0);

	return;
}

char* func_146(var uParam0, int iParam1) // Position - 0x6340 Hash - 0x85112676 ^0xFE0E3D45
{
	switch (uParam0->f_1)
	{
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 256:
		case 512:
		case 1024:
		case 2048:
		case 16384:
		case 65536:
		case 262144:
			break;
	
		case 128:
			switch (iParam1)
			{
				case 0:
					return "p_crutchjoe01x";
			
				default:
					break;
			}
			break;
	
		case 8192:
			break;
	
		case 32768:
			switch (iParam1)
			{
				case 0:
					return "chain";
			
				default:
					break;
			}
			break;
	
		case 131072:
			break;
	
		default:
			break;
	}

	return "";
}

void func_147(var uParam0, var uParam1, char* sParam2, int iParam3) // Position - 0x63F2 Hash - 0x5DF0EF7F ^0x4A896CF4
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
					if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(*uParam0, sParam2))
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, *uParam1, 0);

	return;
}

float func_148() // Position - 0x6447 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_149(var uParam0, int iParam1) // Position - 0x6479 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_150(var uParam0, int iParam1) // Position - 0x648A Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

